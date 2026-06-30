#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00354EE0
// Address: 0x354ee0 - 0x355860
void sub_00354EE0_0x354ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354EE0_0x354ee0");
#endif

    switch (ctx->pc) {
        case 0x354ee0u: goto label_354ee0;
        case 0x354ee4u: goto label_354ee4;
        case 0x354ee8u: goto label_354ee8;
        case 0x354eecu: goto label_354eec;
        case 0x354ef0u: goto label_354ef0;
        case 0x354ef4u: goto label_354ef4;
        case 0x354ef8u: goto label_354ef8;
        case 0x354efcu: goto label_354efc;
        case 0x354f00u: goto label_354f00;
        case 0x354f04u: goto label_354f04;
        case 0x354f08u: goto label_354f08;
        case 0x354f0cu: goto label_354f0c;
        case 0x354f10u: goto label_354f10;
        case 0x354f14u: goto label_354f14;
        case 0x354f18u: goto label_354f18;
        case 0x354f1cu: goto label_354f1c;
        case 0x354f20u: goto label_354f20;
        case 0x354f24u: goto label_354f24;
        case 0x354f28u: goto label_354f28;
        case 0x354f2cu: goto label_354f2c;
        case 0x354f30u: goto label_354f30;
        case 0x354f34u: goto label_354f34;
        case 0x354f38u: goto label_354f38;
        case 0x354f3cu: goto label_354f3c;
        case 0x354f40u: goto label_354f40;
        case 0x354f44u: goto label_354f44;
        case 0x354f48u: goto label_354f48;
        case 0x354f4cu: goto label_354f4c;
        case 0x354f50u: goto label_354f50;
        case 0x354f54u: goto label_354f54;
        case 0x354f58u: goto label_354f58;
        case 0x354f5cu: goto label_354f5c;
        case 0x354f60u: goto label_354f60;
        case 0x354f64u: goto label_354f64;
        case 0x354f68u: goto label_354f68;
        case 0x354f6cu: goto label_354f6c;
        case 0x354f70u: goto label_354f70;
        case 0x354f74u: goto label_354f74;
        case 0x354f78u: goto label_354f78;
        case 0x354f7cu: goto label_354f7c;
        case 0x354f80u: goto label_354f80;
        case 0x354f84u: goto label_354f84;
        case 0x354f88u: goto label_354f88;
        case 0x354f8cu: goto label_354f8c;
        case 0x354f90u: goto label_354f90;
        case 0x354f94u: goto label_354f94;
        case 0x354f98u: goto label_354f98;
        case 0x354f9cu: goto label_354f9c;
        case 0x354fa0u: goto label_354fa0;
        case 0x354fa4u: goto label_354fa4;
        case 0x354fa8u: goto label_354fa8;
        case 0x354facu: goto label_354fac;
        case 0x354fb0u: goto label_354fb0;
        case 0x354fb4u: goto label_354fb4;
        case 0x354fb8u: goto label_354fb8;
        case 0x354fbcu: goto label_354fbc;
        case 0x354fc0u: goto label_354fc0;
        case 0x354fc4u: goto label_354fc4;
        case 0x354fc8u: goto label_354fc8;
        case 0x354fccu: goto label_354fcc;
        case 0x354fd0u: goto label_354fd0;
        case 0x354fd4u: goto label_354fd4;
        case 0x354fd8u: goto label_354fd8;
        case 0x354fdcu: goto label_354fdc;
        case 0x354fe0u: goto label_354fe0;
        case 0x354fe4u: goto label_354fe4;
        case 0x354fe8u: goto label_354fe8;
        case 0x354fecu: goto label_354fec;
        case 0x354ff0u: goto label_354ff0;
        case 0x354ff4u: goto label_354ff4;
        case 0x354ff8u: goto label_354ff8;
        case 0x354ffcu: goto label_354ffc;
        case 0x355000u: goto label_355000;
        case 0x355004u: goto label_355004;
        case 0x355008u: goto label_355008;
        case 0x35500cu: goto label_35500c;
        case 0x355010u: goto label_355010;
        case 0x355014u: goto label_355014;
        case 0x355018u: goto label_355018;
        case 0x35501cu: goto label_35501c;
        case 0x355020u: goto label_355020;
        case 0x355024u: goto label_355024;
        case 0x355028u: goto label_355028;
        case 0x35502cu: goto label_35502c;
        case 0x355030u: goto label_355030;
        case 0x355034u: goto label_355034;
        case 0x355038u: goto label_355038;
        case 0x35503cu: goto label_35503c;
        case 0x355040u: goto label_355040;
        case 0x355044u: goto label_355044;
        case 0x355048u: goto label_355048;
        case 0x35504cu: goto label_35504c;
        case 0x355050u: goto label_355050;
        case 0x355054u: goto label_355054;
        case 0x355058u: goto label_355058;
        case 0x35505cu: goto label_35505c;
        case 0x355060u: goto label_355060;
        case 0x355064u: goto label_355064;
        case 0x355068u: goto label_355068;
        case 0x35506cu: goto label_35506c;
        case 0x355070u: goto label_355070;
        case 0x355074u: goto label_355074;
        case 0x355078u: goto label_355078;
        case 0x35507cu: goto label_35507c;
        case 0x355080u: goto label_355080;
        case 0x355084u: goto label_355084;
        case 0x355088u: goto label_355088;
        case 0x35508cu: goto label_35508c;
        case 0x355090u: goto label_355090;
        case 0x355094u: goto label_355094;
        case 0x355098u: goto label_355098;
        case 0x35509cu: goto label_35509c;
        case 0x3550a0u: goto label_3550a0;
        case 0x3550a4u: goto label_3550a4;
        case 0x3550a8u: goto label_3550a8;
        case 0x3550acu: goto label_3550ac;
        case 0x3550b0u: goto label_3550b0;
        case 0x3550b4u: goto label_3550b4;
        case 0x3550b8u: goto label_3550b8;
        case 0x3550bcu: goto label_3550bc;
        case 0x3550c0u: goto label_3550c0;
        case 0x3550c4u: goto label_3550c4;
        case 0x3550c8u: goto label_3550c8;
        case 0x3550ccu: goto label_3550cc;
        case 0x3550d0u: goto label_3550d0;
        case 0x3550d4u: goto label_3550d4;
        case 0x3550d8u: goto label_3550d8;
        case 0x3550dcu: goto label_3550dc;
        case 0x3550e0u: goto label_3550e0;
        case 0x3550e4u: goto label_3550e4;
        case 0x3550e8u: goto label_3550e8;
        case 0x3550ecu: goto label_3550ec;
        case 0x3550f0u: goto label_3550f0;
        case 0x3550f4u: goto label_3550f4;
        case 0x3550f8u: goto label_3550f8;
        case 0x3550fcu: goto label_3550fc;
        case 0x355100u: goto label_355100;
        case 0x355104u: goto label_355104;
        case 0x355108u: goto label_355108;
        case 0x35510cu: goto label_35510c;
        case 0x355110u: goto label_355110;
        case 0x355114u: goto label_355114;
        case 0x355118u: goto label_355118;
        case 0x35511cu: goto label_35511c;
        case 0x355120u: goto label_355120;
        case 0x355124u: goto label_355124;
        case 0x355128u: goto label_355128;
        case 0x35512cu: goto label_35512c;
        case 0x355130u: goto label_355130;
        case 0x355134u: goto label_355134;
        case 0x355138u: goto label_355138;
        case 0x35513cu: goto label_35513c;
        case 0x355140u: goto label_355140;
        case 0x355144u: goto label_355144;
        case 0x355148u: goto label_355148;
        case 0x35514cu: goto label_35514c;
        case 0x355150u: goto label_355150;
        case 0x355154u: goto label_355154;
        case 0x355158u: goto label_355158;
        case 0x35515cu: goto label_35515c;
        case 0x355160u: goto label_355160;
        case 0x355164u: goto label_355164;
        case 0x355168u: goto label_355168;
        case 0x35516cu: goto label_35516c;
        case 0x355170u: goto label_355170;
        case 0x355174u: goto label_355174;
        case 0x355178u: goto label_355178;
        case 0x35517cu: goto label_35517c;
        case 0x355180u: goto label_355180;
        case 0x355184u: goto label_355184;
        case 0x355188u: goto label_355188;
        case 0x35518cu: goto label_35518c;
        case 0x355190u: goto label_355190;
        case 0x355194u: goto label_355194;
        case 0x355198u: goto label_355198;
        case 0x35519cu: goto label_35519c;
        case 0x3551a0u: goto label_3551a0;
        case 0x3551a4u: goto label_3551a4;
        case 0x3551a8u: goto label_3551a8;
        case 0x3551acu: goto label_3551ac;
        case 0x3551b0u: goto label_3551b0;
        case 0x3551b4u: goto label_3551b4;
        case 0x3551b8u: goto label_3551b8;
        case 0x3551bcu: goto label_3551bc;
        case 0x3551c0u: goto label_3551c0;
        case 0x3551c4u: goto label_3551c4;
        case 0x3551c8u: goto label_3551c8;
        case 0x3551ccu: goto label_3551cc;
        case 0x3551d0u: goto label_3551d0;
        case 0x3551d4u: goto label_3551d4;
        case 0x3551d8u: goto label_3551d8;
        case 0x3551dcu: goto label_3551dc;
        case 0x3551e0u: goto label_3551e0;
        case 0x3551e4u: goto label_3551e4;
        case 0x3551e8u: goto label_3551e8;
        case 0x3551ecu: goto label_3551ec;
        case 0x3551f0u: goto label_3551f0;
        case 0x3551f4u: goto label_3551f4;
        case 0x3551f8u: goto label_3551f8;
        case 0x3551fcu: goto label_3551fc;
        case 0x355200u: goto label_355200;
        case 0x355204u: goto label_355204;
        case 0x355208u: goto label_355208;
        case 0x35520cu: goto label_35520c;
        case 0x355210u: goto label_355210;
        case 0x355214u: goto label_355214;
        case 0x355218u: goto label_355218;
        case 0x35521cu: goto label_35521c;
        case 0x355220u: goto label_355220;
        case 0x355224u: goto label_355224;
        case 0x355228u: goto label_355228;
        case 0x35522cu: goto label_35522c;
        case 0x355230u: goto label_355230;
        case 0x355234u: goto label_355234;
        case 0x355238u: goto label_355238;
        case 0x35523cu: goto label_35523c;
        case 0x355240u: goto label_355240;
        case 0x355244u: goto label_355244;
        case 0x355248u: goto label_355248;
        case 0x35524cu: goto label_35524c;
        case 0x355250u: goto label_355250;
        case 0x355254u: goto label_355254;
        case 0x355258u: goto label_355258;
        case 0x35525cu: goto label_35525c;
        case 0x355260u: goto label_355260;
        case 0x355264u: goto label_355264;
        case 0x355268u: goto label_355268;
        case 0x35526cu: goto label_35526c;
        case 0x355270u: goto label_355270;
        case 0x355274u: goto label_355274;
        case 0x355278u: goto label_355278;
        case 0x35527cu: goto label_35527c;
        case 0x355280u: goto label_355280;
        case 0x355284u: goto label_355284;
        case 0x355288u: goto label_355288;
        case 0x35528cu: goto label_35528c;
        case 0x355290u: goto label_355290;
        case 0x355294u: goto label_355294;
        case 0x355298u: goto label_355298;
        case 0x35529cu: goto label_35529c;
        case 0x3552a0u: goto label_3552a0;
        case 0x3552a4u: goto label_3552a4;
        case 0x3552a8u: goto label_3552a8;
        case 0x3552acu: goto label_3552ac;
        case 0x3552b0u: goto label_3552b0;
        case 0x3552b4u: goto label_3552b4;
        case 0x3552b8u: goto label_3552b8;
        case 0x3552bcu: goto label_3552bc;
        case 0x3552c0u: goto label_3552c0;
        case 0x3552c4u: goto label_3552c4;
        case 0x3552c8u: goto label_3552c8;
        case 0x3552ccu: goto label_3552cc;
        case 0x3552d0u: goto label_3552d0;
        case 0x3552d4u: goto label_3552d4;
        case 0x3552d8u: goto label_3552d8;
        case 0x3552dcu: goto label_3552dc;
        case 0x3552e0u: goto label_3552e0;
        case 0x3552e4u: goto label_3552e4;
        case 0x3552e8u: goto label_3552e8;
        case 0x3552ecu: goto label_3552ec;
        case 0x3552f0u: goto label_3552f0;
        case 0x3552f4u: goto label_3552f4;
        case 0x3552f8u: goto label_3552f8;
        case 0x3552fcu: goto label_3552fc;
        case 0x355300u: goto label_355300;
        case 0x355304u: goto label_355304;
        case 0x355308u: goto label_355308;
        case 0x35530cu: goto label_35530c;
        case 0x355310u: goto label_355310;
        case 0x355314u: goto label_355314;
        case 0x355318u: goto label_355318;
        case 0x35531cu: goto label_35531c;
        case 0x355320u: goto label_355320;
        case 0x355324u: goto label_355324;
        case 0x355328u: goto label_355328;
        case 0x35532cu: goto label_35532c;
        case 0x355330u: goto label_355330;
        case 0x355334u: goto label_355334;
        case 0x355338u: goto label_355338;
        case 0x35533cu: goto label_35533c;
        case 0x355340u: goto label_355340;
        case 0x355344u: goto label_355344;
        case 0x355348u: goto label_355348;
        case 0x35534cu: goto label_35534c;
        case 0x355350u: goto label_355350;
        case 0x355354u: goto label_355354;
        case 0x355358u: goto label_355358;
        case 0x35535cu: goto label_35535c;
        case 0x355360u: goto label_355360;
        case 0x355364u: goto label_355364;
        case 0x355368u: goto label_355368;
        case 0x35536cu: goto label_35536c;
        case 0x355370u: goto label_355370;
        case 0x355374u: goto label_355374;
        case 0x355378u: goto label_355378;
        case 0x35537cu: goto label_35537c;
        case 0x355380u: goto label_355380;
        case 0x355384u: goto label_355384;
        case 0x355388u: goto label_355388;
        case 0x35538cu: goto label_35538c;
        case 0x355390u: goto label_355390;
        case 0x355394u: goto label_355394;
        case 0x355398u: goto label_355398;
        case 0x35539cu: goto label_35539c;
        case 0x3553a0u: goto label_3553a0;
        case 0x3553a4u: goto label_3553a4;
        case 0x3553a8u: goto label_3553a8;
        case 0x3553acu: goto label_3553ac;
        case 0x3553b0u: goto label_3553b0;
        case 0x3553b4u: goto label_3553b4;
        case 0x3553b8u: goto label_3553b8;
        case 0x3553bcu: goto label_3553bc;
        case 0x3553c0u: goto label_3553c0;
        case 0x3553c4u: goto label_3553c4;
        case 0x3553c8u: goto label_3553c8;
        case 0x3553ccu: goto label_3553cc;
        case 0x3553d0u: goto label_3553d0;
        case 0x3553d4u: goto label_3553d4;
        case 0x3553d8u: goto label_3553d8;
        case 0x3553dcu: goto label_3553dc;
        case 0x3553e0u: goto label_3553e0;
        case 0x3553e4u: goto label_3553e4;
        case 0x3553e8u: goto label_3553e8;
        case 0x3553ecu: goto label_3553ec;
        case 0x3553f0u: goto label_3553f0;
        case 0x3553f4u: goto label_3553f4;
        case 0x3553f8u: goto label_3553f8;
        case 0x3553fcu: goto label_3553fc;
        case 0x355400u: goto label_355400;
        case 0x355404u: goto label_355404;
        case 0x355408u: goto label_355408;
        case 0x35540cu: goto label_35540c;
        case 0x355410u: goto label_355410;
        case 0x355414u: goto label_355414;
        case 0x355418u: goto label_355418;
        case 0x35541cu: goto label_35541c;
        case 0x355420u: goto label_355420;
        case 0x355424u: goto label_355424;
        case 0x355428u: goto label_355428;
        case 0x35542cu: goto label_35542c;
        case 0x355430u: goto label_355430;
        case 0x355434u: goto label_355434;
        case 0x355438u: goto label_355438;
        case 0x35543cu: goto label_35543c;
        case 0x355440u: goto label_355440;
        case 0x355444u: goto label_355444;
        case 0x355448u: goto label_355448;
        case 0x35544cu: goto label_35544c;
        case 0x355450u: goto label_355450;
        case 0x355454u: goto label_355454;
        case 0x355458u: goto label_355458;
        case 0x35545cu: goto label_35545c;
        case 0x355460u: goto label_355460;
        case 0x355464u: goto label_355464;
        case 0x355468u: goto label_355468;
        case 0x35546cu: goto label_35546c;
        case 0x355470u: goto label_355470;
        case 0x355474u: goto label_355474;
        case 0x355478u: goto label_355478;
        case 0x35547cu: goto label_35547c;
        case 0x355480u: goto label_355480;
        case 0x355484u: goto label_355484;
        case 0x355488u: goto label_355488;
        case 0x35548cu: goto label_35548c;
        case 0x355490u: goto label_355490;
        case 0x355494u: goto label_355494;
        case 0x355498u: goto label_355498;
        case 0x35549cu: goto label_35549c;
        case 0x3554a0u: goto label_3554a0;
        case 0x3554a4u: goto label_3554a4;
        case 0x3554a8u: goto label_3554a8;
        case 0x3554acu: goto label_3554ac;
        case 0x3554b0u: goto label_3554b0;
        case 0x3554b4u: goto label_3554b4;
        case 0x3554b8u: goto label_3554b8;
        case 0x3554bcu: goto label_3554bc;
        case 0x3554c0u: goto label_3554c0;
        case 0x3554c4u: goto label_3554c4;
        case 0x3554c8u: goto label_3554c8;
        case 0x3554ccu: goto label_3554cc;
        case 0x3554d0u: goto label_3554d0;
        case 0x3554d4u: goto label_3554d4;
        case 0x3554d8u: goto label_3554d8;
        case 0x3554dcu: goto label_3554dc;
        case 0x3554e0u: goto label_3554e0;
        case 0x3554e4u: goto label_3554e4;
        case 0x3554e8u: goto label_3554e8;
        case 0x3554ecu: goto label_3554ec;
        case 0x3554f0u: goto label_3554f0;
        case 0x3554f4u: goto label_3554f4;
        case 0x3554f8u: goto label_3554f8;
        case 0x3554fcu: goto label_3554fc;
        case 0x355500u: goto label_355500;
        case 0x355504u: goto label_355504;
        case 0x355508u: goto label_355508;
        case 0x35550cu: goto label_35550c;
        case 0x355510u: goto label_355510;
        case 0x355514u: goto label_355514;
        case 0x355518u: goto label_355518;
        case 0x35551cu: goto label_35551c;
        case 0x355520u: goto label_355520;
        case 0x355524u: goto label_355524;
        case 0x355528u: goto label_355528;
        case 0x35552cu: goto label_35552c;
        case 0x355530u: goto label_355530;
        case 0x355534u: goto label_355534;
        case 0x355538u: goto label_355538;
        case 0x35553cu: goto label_35553c;
        case 0x355540u: goto label_355540;
        case 0x355544u: goto label_355544;
        case 0x355548u: goto label_355548;
        case 0x35554cu: goto label_35554c;
        case 0x355550u: goto label_355550;
        case 0x355554u: goto label_355554;
        case 0x355558u: goto label_355558;
        case 0x35555cu: goto label_35555c;
        case 0x355560u: goto label_355560;
        case 0x355564u: goto label_355564;
        case 0x355568u: goto label_355568;
        case 0x35556cu: goto label_35556c;
        case 0x355570u: goto label_355570;
        case 0x355574u: goto label_355574;
        case 0x355578u: goto label_355578;
        case 0x35557cu: goto label_35557c;
        case 0x355580u: goto label_355580;
        case 0x355584u: goto label_355584;
        case 0x355588u: goto label_355588;
        case 0x35558cu: goto label_35558c;
        case 0x355590u: goto label_355590;
        case 0x355594u: goto label_355594;
        case 0x355598u: goto label_355598;
        case 0x35559cu: goto label_35559c;
        case 0x3555a0u: goto label_3555a0;
        case 0x3555a4u: goto label_3555a4;
        case 0x3555a8u: goto label_3555a8;
        case 0x3555acu: goto label_3555ac;
        case 0x3555b0u: goto label_3555b0;
        case 0x3555b4u: goto label_3555b4;
        case 0x3555b8u: goto label_3555b8;
        case 0x3555bcu: goto label_3555bc;
        case 0x3555c0u: goto label_3555c0;
        case 0x3555c4u: goto label_3555c4;
        case 0x3555c8u: goto label_3555c8;
        case 0x3555ccu: goto label_3555cc;
        case 0x3555d0u: goto label_3555d0;
        case 0x3555d4u: goto label_3555d4;
        case 0x3555d8u: goto label_3555d8;
        case 0x3555dcu: goto label_3555dc;
        case 0x3555e0u: goto label_3555e0;
        case 0x3555e4u: goto label_3555e4;
        case 0x3555e8u: goto label_3555e8;
        case 0x3555ecu: goto label_3555ec;
        case 0x3555f0u: goto label_3555f0;
        case 0x3555f4u: goto label_3555f4;
        case 0x3555f8u: goto label_3555f8;
        case 0x3555fcu: goto label_3555fc;
        case 0x355600u: goto label_355600;
        case 0x355604u: goto label_355604;
        case 0x355608u: goto label_355608;
        case 0x35560cu: goto label_35560c;
        case 0x355610u: goto label_355610;
        case 0x355614u: goto label_355614;
        case 0x355618u: goto label_355618;
        case 0x35561cu: goto label_35561c;
        case 0x355620u: goto label_355620;
        case 0x355624u: goto label_355624;
        case 0x355628u: goto label_355628;
        case 0x35562cu: goto label_35562c;
        case 0x355630u: goto label_355630;
        case 0x355634u: goto label_355634;
        case 0x355638u: goto label_355638;
        case 0x35563cu: goto label_35563c;
        case 0x355640u: goto label_355640;
        case 0x355644u: goto label_355644;
        case 0x355648u: goto label_355648;
        case 0x35564cu: goto label_35564c;
        case 0x355650u: goto label_355650;
        case 0x355654u: goto label_355654;
        case 0x355658u: goto label_355658;
        case 0x35565cu: goto label_35565c;
        case 0x355660u: goto label_355660;
        case 0x355664u: goto label_355664;
        case 0x355668u: goto label_355668;
        case 0x35566cu: goto label_35566c;
        case 0x355670u: goto label_355670;
        case 0x355674u: goto label_355674;
        case 0x355678u: goto label_355678;
        case 0x35567cu: goto label_35567c;
        case 0x355680u: goto label_355680;
        case 0x355684u: goto label_355684;
        case 0x355688u: goto label_355688;
        case 0x35568cu: goto label_35568c;
        case 0x355690u: goto label_355690;
        case 0x355694u: goto label_355694;
        case 0x355698u: goto label_355698;
        case 0x35569cu: goto label_35569c;
        case 0x3556a0u: goto label_3556a0;
        case 0x3556a4u: goto label_3556a4;
        case 0x3556a8u: goto label_3556a8;
        case 0x3556acu: goto label_3556ac;
        case 0x3556b0u: goto label_3556b0;
        case 0x3556b4u: goto label_3556b4;
        case 0x3556b8u: goto label_3556b8;
        case 0x3556bcu: goto label_3556bc;
        case 0x3556c0u: goto label_3556c0;
        case 0x3556c4u: goto label_3556c4;
        case 0x3556c8u: goto label_3556c8;
        case 0x3556ccu: goto label_3556cc;
        case 0x3556d0u: goto label_3556d0;
        case 0x3556d4u: goto label_3556d4;
        case 0x3556d8u: goto label_3556d8;
        case 0x3556dcu: goto label_3556dc;
        case 0x3556e0u: goto label_3556e0;
        case 0x3556e4u: goto label_3556e4;
        case 0x3556e8u: goto label_3556e8;
        case 0x3556ecu: goto label_3556ec;
        case 0x3556f0u: goto label_3556f0;
        case 0x3556f4u: goto label_3556f4;
        case 0x3556f8u: goto label_3556f8;
        case 0x3556fcu: goto label_3556fc;
        case 0x355700u: goto label_355700;
        case 0x355704u: goto label_355704;
        case 0x355708u: goto label_355708;
        case 0x35570cu: goto label_35570c;
        case 0x355710u: goto label_355710;
        case 0x355714u: goto label_355714;
        case 0x355718u: goto label_355718;
        case 0x35571cu: goto label_35571c;
        case 0x355720u: goto label_355720;
        case 0x355724u: goto label_355724;
        case 0x355728u: goto label_355728;
        case 0x35572cu: goto label_35572c;
        case 0x355730u: goto label_355730;
        case 0x355734u: goto label_355734;
        case 0x355738u: goto label_355738;
        case 0x35573cu: goto label_35573c;
        case 0x355740u: goto label_355740;
        case 0x355744u: goto label_355744;
        case 0x355748u: goto label_355748;
        case 0x35574cu: goto label_35574c;
        case 0x355750u: goto label_355750;
        case 0x355754u: goto label_355754;
        case 0x355758u: goto label_355758;
        case 0x35575cu: goto label_35575c;
        case 0x355760u: goto label_355760;
        case 0x355764u: goto label_355764;
        case 0x355768u: goto label_355768;
        case 0x35576cu: goto label_35576c;
        case 0x355770u: goto label_355770;
        case 0x355774u: goto label_355774;
        case 0x355778u: goto label_355778;
        case 0x35577cu: goto label_35577c;
        case 0x355780u: goto label_355780;
        case 0x355784u: goto label_355784;
        case 0x355788u: goto label_355788;
        case 0x35578cu: goto label_35578c;
        case 0x355790u: goto label_355790;
        case 0x355794u: goto label_355794;
        case 0x355798u: goto label_355798;
        case 0x35579cu: goto label_35579c;
        case 0x3557a0u: goto label_3557a0;
        case 0x3557a4u: goto label_3557a4;
        case 0x3557a8u: goto label_3557a8;
        case 0x3557acu: goto label_3557ac;
        case 0x3557b0u: goto label_3557b0;
        case 0x3557b4u: goto label_3557b4;
        case 0x3557b8u: goto label_3557b8;
        case 0x3557bcu: goto label_3557bc;
        case 0x3557c0u: goto label_3557c0;
        case 0x3557c4u: goto label_3557c4;
        case 0x3557c8u: goto label_3557c8;
        case 0x3557ccu: goto label_3557cc;
        case 0x3557d0u: goto label_3557d0;
        case 0x3557d4u: goto label_3557d4;
        case 0x3557d8u: goto label_3557d8;
        case 0x3557dcu: goto label_3557dc;
        case 0x3557e0u: goto label_3557e0;
        case 0x3557e4u: goto label_3557e4;
        case 0x3557e8u: goto label_3557e8;
        case 0x3557ecu: goto label_3557ec;
        case 0x3557f0u: goto label_3557f0;
        case 0x3557f4u: goto label_3557f4;
        case 0x3557f8u: goto label_3557f8;
        case 0x3557fcu: goto label_3557fc;
        case 0x355800u: goto label_355800;
        case 0x355804u: goto label_355804;
        case 0x355808u: goto label_355808;
        case 0x35580cu: goto label_35580c;
        case 0x355810u: goto label_355810;
        case 0x355814u: goto label_355814;
        case 0x355818u: goto label_355818;
        case 0x35581cu: goto label_35581c;
        case 0x355820u: goto label_355820;
        case 0x355824u: goto label_355824;
        case 0x355828u: goto label_355828;
        case 0x35582cu: goto label_35582c;
        case 0x355830u: goto label_355830;
        case 0x355834u: goto label_355834;
        case 0x355838u: goto label_355838;
        case 0x35583cu: goto label_35583c;
        case 0x355840u: goto label_355840;
        case 0x355844u: goto label_355844;
        case 0x355848u: goto label_355848;
        case 0x35584cu: goto label_35584c;
        case 0x355850u: goto label_355850;
        case 0x355854u: goto label_355854;
        case 0x355858u: goto label_355858;
        case 0x35585cu: goto label_35585c;
        default: break;
    }

    ctx->pc = 0x354ee0u;

label_354ee0:
    // 0x354ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_354ee4:
    // 0x354ee4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x354ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354ee8:
    // 0x354ee8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x354ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_354eec:
    // 0x354eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x354eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_354ef0:
    // 0x354ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x354ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_354ef4:
    // 0x354ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x354ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_354ef8:
    // 0x354ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_354efc:
    // 0x354efc: 0x8c840068  lw          $a0, 0x68($a0)
    ctx->pc = 0x354efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_354f00:
    // 0x354f00: 0x50830097  beql        $a0, $v1, . + 4 + (0x97 << 2)
label_354f04:
    if (ctx->pc == 0x354F04u) {
        ctx->pc = 0x354F04u;
            // 0x354f04: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x354F08u;
        goto label_354f08;
    }
    ctx->pc = 0x354F00u;
    {
        const bool branch_taken_0x354f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x354f00) {
            ctx->pc = 0x354F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354F00u;
            // 0x354f04: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355160u;
            goto label_355160;
        }
    }
    ctx->pc = 0x354F08u;
label_354f08:
    // 0x354f08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x354f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_354f0c:
    // 0x354f0c: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
label_354f10:
    if (ctx->pc == 0x354F10u) {
        ctx->pc = 0x354F14u;
        goto label_354f14;
    }
    ctx->pc = 0x354F0Cu;
    {
        const bool branch_taken_0x354f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x354f0c) {
            ctx->pc = 0x355068u;
            goto label_355068;
        }
    }
    ctx->pc = 0x354F14u;
label_354f14:
    // 0x354f14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x354f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_354f18:
    // 0x354f18: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_354f1c:
    if (ctx->pc == 0x354F1Cu) {
        ctx->pc = 0x354F20u;
        goto label_354f20;
    }
    ctx->pc = 0x354F18u;
    {
        const bool branch_taken_0x354f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x354f18) {
            ctx->pc = 0x354FE0u;
            goto label_354fe0;
        }
    }
    ctx->pc = 0x354F20u;
label_354f20:
    // 0x354f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_354f24:
    // 0x354f24: 0x1083008d  beq         $a0, $v1, . + 4 + (0x8D << 2)
label_354f28:
    if (ctx->pc == 0x354F28u) {
        ctx->pc = 0x354F2Cu;
        goto label_354f2c;
    }
    ctx->pc = 0x354F24u;
    {
        const bool branch_taken_0x354f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x354f24) {
            ctx->pc = 0x35515Cu;
            goto label_35515c;
        }
    }
    ctx->pc = 0x354F2Cu;
label_354f2c:
    // 0x354f2c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_354f30:
    if (ctx->pc == 0x354F30u) {
        ctx->pc = 0x354F30u;
            // 0x354f30: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x354F34u;
        goto label_354f34;
    }
    ctx->pc = 0x354F2Cu;
    {
        const bool branch_taken_0x354f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x354f2c) {
            ctx->pc = 0x354F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354F2Cu;
            // 0x354f30: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354F3Cu;
            goto label_354f3c;
        }
    }
    ctx->pc = 0x354F34u;
label_354f34:
    // 0x354f34: 0x10000089  b           . + 4 + (0x89 << 2)
label_354f38:
    if (ctx->pc == 0x354F38u) {
        ctx->pc = 0x354F3Cu;
        goto label_354f3c;
    }
    ctx->pc = 0x354F34u;
    {
        const bool branch_taken_0x354f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354f34) {
            ctx->pc = 0x35515Cu;
            goto label_35515c;
        }
    }
    ctx->pc = 0x354F3Cu;
label_354f3c:
    // 0x354f3c: 0xc0d4d3c  jal         func_3534F0
label_354f40:
    if (ctx->pc == 0x354F40u) {
        ctx->pc = 0x354F44u;
        goto label_354f44;
    }
    ctx->pc = 0x354F3Cu;
    SET_GPR_U32(ctx, 31, 0x354F44u);
    ctx->pc = 0x3534F0u;
    if (runtime->hasFunction(0x3534F0u)) {
        auto targetFn = runtime->lookupFunction(0x3534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F44u; }
        if (ctx->pc != 0x354F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534F0_0x3534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F44u; }
        if (ctx->pc != 0x354F44u) { return; }
    }
    ctx->pc = 0x354F44u;
label_354f44:
    // 0x354f44: 0xc0d4b50  jal         func_352D40
label_354f48:
    if (ctx->pc == 0x354F48u) {
        ctx->pc = 0x354F48u;
            // 0x354f48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354F4Cu;
        goto label_354f4c;
    }
    ctx->pc = 0x354F44u;
    SET_GPR_U32(ctx, 31, 0x354F4Cu);
    ctx->pc = 0x354F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354F44u;
            // 0x354f48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D40u;
    if (runtime->hasFunction(0x352D40u)) {
        auto targetFn = runtime->lookupFunction(0x352D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F4Cu; }
        if (ctx->pc != 0x354F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D40_0x352d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F4Cu; }
        if (ctx->pc != 0x354F4Cu) { return; }
    }
    ctx->pc = 0x354F4Cu;
label_354f4c:
    // 0x354f4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x354f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354f50:
    // 0x354f50: 0xc0d4b54  jal         func_352D50
label_354f54:
    if (ctx->pc == 0x354F54u) {
        ctx->pc = 0x354F54u;
            // 0x354f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354F58u;
        goto label_354f58;
    }
    ctx->pc = 0x354F50u;
    SET_GPR_U32(ctx, 31, 0x354F58u);
    ctx->pc = 0x354F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354F50u;
            // 0x354f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352D50u;
    if (runtime->hasFunction(0x352D50u)) {
        auto targetFn = runtime->lookupFunction(0x352D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F58u; }
        if (ctx->pc != 0x354F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00352D50_0x352d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F58u; }
        if (ctx->pc != 0x354F58u) { return; }
    }
    ctx->pc = 0x354F58u;
label_354f58:
    // 0x354f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x354f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_354f5c:
    // 0x354f5c: 0xc0d4d34  jal         func_3534D0
label_354f60:
    if (ctx->pc == 0x354F60u) {
        ctx->pc = 0x354F60u;
            // 0x354f60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354F64u;
        goto label_354f64;
    }
    ctx->pc = 0x354F5Cu;
    SET_GPR_U32(ctx, 31, 0x354F64u);
    ctx->pc = 0x354F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354F5Cu;
            // 0x354f60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3534D0u;
    if (runtime->hasFunction(0x3534D0u)) {
        auto targetFn = runtime->lookupFunction(0x3534D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F64u; }
        if (ctx->pc != 0x354F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534D0_0x3534d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F64u; }
        if (ctx->pc != 0x354F64u) { return; }
    }
    ctx->pc = 0x354F64u;
label_354f64:
    // 0x354f64: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x354f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_354f68:
    // 0x354f68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354f6c:
    // 0x354f6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x354f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_354f70:
    // 0x354f70: 0x320f809  jalr        $t9
label_354f74:
    if (ctx->pc == 0x354F74u) {
        ctx->pc = 0x354F74u;
            // 0x354f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354F78u;
        goto label_354f78;
    }
    ctx->pc = 0x354F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x354F78u);
        ctx->pc = 0x354F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354F70u;
            // 0x354f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x354F78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x354F78u; }
            if (ctx->pc != 0x354F78u) { return; }
        }
        }
    }
    ctx->pc = 0x354F78u;
label_354f78:
    // 0x354f78: 0xc0d4d3c  jal         func_3534F0
label_354f7c:
    if (ctx->pc == 0x354F7Cu) {
        ctx->pc = 0x354F7Cu;
            // 0x354f7c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x354F80u;
        goto label_354f80;
    }
    ctx->pc = 0x354F78u;
    SET_GPR_U32(ctx, 31, 0x354F80u);
    ctx->pc = 0x354F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354F78u;
            // 0x354f7c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3534F0u;
    if (runtime->hasFunction(0x3534F0u)) {
        auto targetFn = runtime->lookupFunction(0x3534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F80u; }
        if (ctx->pc != 0x354F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534F0_0x3534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F80u; }
        if (ctx->pc != 0x354F80u) { return; }
    }
    ctx->pc = 0x354F80u;
label_354f80:
    // 0x354f80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x354f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354f84:
    // 0x354f84: 0xc0d4d1c  jal         func_353470
label_354f88:
    if (ctx->pc == 0x354F88u) {
        ctx->pc = 0x354F88u;
            // 0x354f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354F8Cu;
        goto label_354f8c;
    }
    ctx->pc = 0x354F84u;
    SET_GPR_U32(ctx, 31, 0x354F8Cu);
    ctx->pc = 0x354F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354F84u;
            // 0x354f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353470u;
    if (runtime->hasFunction(0x353470u)) {
        auto targetFn = runtime->lookupFunction(0x353470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F8Cu; }
        if (ctx->pc != 0x354F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353470_0x353470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F8Cu; }
        if (ctx->pc != 0x354F8Cu) { return; }
    }
    ctx->pc = 0x354F8Cu;
label_354f8c:
    // 0x354f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x354f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_354f90:
    // 0x354f90: 0xc0d4d14  jal         func_353450
label_354f94:
    if (ctx->pc == 0x354F94u) {
        ctx->pc = 0x354F94u;
            // 0x354f94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x354F98u;
        goto label_354f98;
    }
    ctx->pc = 0x354F90u;
    SET_GPR_U32(ctx, 31, 0x354F98u);
    ctx->pc = 0x354F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354F90u;
            // 0x354f94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353450u;
    if (runtime->hasFunction(0x353450u)) {
        auto targetFn = runtime->lookupFunction(0x353450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F98u; }
        if (ctx->pc != 0x354F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353450_0x353450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354F98u; }
        if (ctx->pc != 0x354F98u) { return; }
    }
    ctx->pc = 0x354F98u;
label_354f98:
    // 0x354f98: 0xc0d4d3c  jal         func_3534F0
label_354f9c:
    if (ctx->pc == 0x354F9Cu) {
        ctx->pc = 0x354F9Cu;
            // 0x354f9c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x354FA0u;
        goto label_354fa0;
    }
    ctx->pc = 0x354F98u;
    SET_GPR_U32(ctx, 31, 0x354FA0u);
    ctx->pc = 0x354F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354F98u;
            // 0x354f9c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3534F0u;
    if (runtime->hasFunction(0x3534F0u)) {
        auto targetFn = runtime->lookupFunction(0x3534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354FA0u; }
        if (ctx->pc != 0x354FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003534F0_0x3534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354FA0u; }
        if (ctx->pc != 0x354FA0u) { return; }
    }
    ctx->pc = 0x354FA0u;
label_354fa0:
    // 0x354fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354fa4:
    // 0x354fa4: 0xc0b6dd0  jal         func_2DB740
label_354fa8:
    if (ctx->pc == 0x354FA8u) {
        ctx->pc = 0x354FA8u;
            // 0x354fa8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x354FACu;
        goto label_354fac;
    }
    ctx->pc = 0x354FA4u;
    SET_GPR_U32(ctx, 31, 0x354FACu);
    ctx->pc = 0x354FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354FA4u;
            // 0x354fa8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB740u;
    if (runtime->hasFunction(0x2DB740u)) {
        auto targetFn = runtime->lookupFunction(0x2DB740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354FACu; }
        if (ctx->pc != 0x354FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB740_0x2db740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354FACu; }
        if (ctx->pc != 0x354FACu) { return; }
    }
    ctx->pc = 0x354FACu;
label_354fac:
    // 0x354fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_354fb0:
    // 0x354fb0: 0xc0d4d1c  jal         func_353470
label_354fb4:
    if (ctx->pc == 0x354FB4u) {
        ctx->pc = 0x354FB4u;
            // 0x354fb4: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x354FB8u;
        goto label_354fb8;
    }
    ctx->pc = 0x354FB0u;
    SET_GPR_U32(ctx, 31, 0x354FB8u);
    ctx->pc = 0x354FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354FB0u;
            // 0x354fb4: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353470u;
    if (runtime->hasFunction(0x353470u)) {
        auto targetFn = runtime->lookupFunction(0x353470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354FB8u; }
        if (ctx->pc != 0x354FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353470_0x353470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354FB8u; }
        if (ctx->pc != 0x354FB8u) { return; }
    }
    ctx->pc = 0x354FB8u;
label_354fb8:
    // 0x354fb8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_354fbc:
    if (ctx->pc == 0x354FBCu) {
        ctx->pc = 0x354FBCu;
            // 0x354fbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x354FC0u;
        goto label_354fc0;
    }
    ctx->pc = 0x354FB8u;
    {
        const bool branch_taken_0x354fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354fb8) {
            ctx->pc = 0x354FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x354FB8u;
            // 0x354fbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x354FC4u;
            goto label_354fc4;
        }
    }
    ctx->pc = 0x354FC0u;
label_354fc0:
    // 0x354fc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x354fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_354fc4:
    // 0x354fc4: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x354fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_354fc8:
    // 0x354fc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x354fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_354fcc:
    // 0x354fcc: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x354fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_354fd0:
    // 0x354fd0: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x354fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_354fd4:
    // 0x354fd4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x354fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_354fd8:
    // 0x354fd8: 0x10000060  b           . + 4 + (0x60 << 2)
label_354fdc:
    if (ctx->pc == 0x354FDCu) {
        ctx->pc = 0x354FDCu;
            // 0x354fdc: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x354FE0u;
        goto label_354fe0;
    }
    ctx->pc = 0x354FD8u;
    {
        const bool branch_taken_0x354fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354FD8u;
            // 0x354fdc: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354fd8) {
            ctx->pc = 0x35515Cu;
            goto label_35515c;
        }
    }
    ctx->pc = 0x354FE0u;
label_354fe0:
    // 0x354fe0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x354fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_354fe4:
    // 0x354fe4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x354fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_354fe8:
    // 0x354fe8: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x354fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_354fec:
    // 0x354fec: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x354fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354ff0:
    // 0x354ff0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x354ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_354ff4:
    // 0x354ff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_354ff8:
    // 0x354ff8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x354ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_354ffc:
    // 0x354ffc: 0x8c633ff0  lw          $v1, 0x3FF0($v1)
    ctx->pc = 0x354ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16368)));
label_355000:
    // 0x355000: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x355000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355004:
    // 0x355004: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x355004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_355008:
    // 0x355008: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x355008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35500c:
    // 0x35500c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35500cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_355010:
    // 0x355010: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_355014:
    if (ctx->pc == 0x355014u) {
        ctx->pc = 0x355018u;
        goto label_355018;
    }
    ctx->pc = 0x355010u;
    {
        const bool branch_taken_0x355010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355010) {
            ctx->pc = 0x35501Cu;
            goto label_35501c;
        }
    }
    ctx->pc = 0x355018u;
label_355018:
    // 0x355018: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x355018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_35501c:
    // 0x35501c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x35501cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_355020:
    // 0x355020: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x355020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_355024:
    // 0x355024: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x355024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355028:
    // 0x355028: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x355028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35502c:
    // 0x35502c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x35502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_355030:
    // 0x355030: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355030u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_355034:
    // 0x355034: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x355034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_355038:
    // 0x355038: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_35503c:
    if (ctx->pc == 0x35503Cu) {
        ctx->pc = 0x35503Cu;
            // 0x35503c: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->pc = 0x355040u;
        goto label_355040;
    }
    ctx->pc = 0x355038u;
    {
        const bool branch_taken_0x355038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355038u;
            // 0x35503c: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355038) {
            ctx->pc = 0x355068u;
            goto label_355068;
        }
    }
    ctx->pc = 0x355040u;
label_355040:
    // 0x355040: 0x3c033d08  lui         $v1, 0x3D08
    ctx->pc = 0x355040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15624 << 16));
label_355044:
    // 0x355044: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x355044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_355048:
    // 0x355048: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x355048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35504c:
    // 0x35504c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35504cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355050:
    // 0x355050: 0x0  nop
    ctx->pc = 0x355050u;
    // NOP
label_355054:
    // 0x355054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x355054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_355058:
    // 0x355058: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x355058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35505c:
    // 0x35505c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_355060:
    if (ctx->pc == 0x355060u) {
        ctx->pc = 0x355060u;
            // 0x355060: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->pc = 0x355064u;
        goto label_355064;
    }
    ctx->pc = 0x35505Cu;
    {
        const bool branch_taken_0x35505c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35505Cu;
            // 0x355060: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35505c) {
            ctx->pc = 0x355068u;
            goto label_355068;
        }
    }
    ctx->pc = 0x355064u;
label_355064:
    // 0x355064: 0xe602009c  swc1        $f2, 0x9C($s0)
    ctx->pc = 0x355064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_355068:
    // 0x355068: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x355068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_35506c:
    // 0x35506c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x35506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_355070:
    // 0x355070: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x355070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_355074:
    // 0x355074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x355074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355078:
    // 0x355078: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x355078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35507c:
    // 0x35507c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35507cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_355080:
    // 0x355080: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_355084:
    // 0x355084: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_355088:
    if (ctx->pc == 0x355088u) {
        ctx->pc = 0x355088u;
            // 0x355088: 0xe601006c  swc1        $f1, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->pc = 0x35508Cu;
        goto label_35508c;
    }
    ctx->pc = 0x355084u;
    {
        const bool branch_taken_0x355084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355084u;
            // 0x355088: 0xe601006c  swc1        $f1, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355084) {
            ctx->pc = 0x35515Cu;
            goto label_35515c;
        }
    }
    ctx->pc = 0x35508Cu;
label_35508c:
    // 0x35508c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35508cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355090:
    // 0x355090: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x355090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_355094:
    // 0x355094: 0xae060068  sw          $a2, 0x68($s0)
    ctx->pc = 0x355094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 6));
label_355098:
    // 0x355098: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x355098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_35509c:
    // 0x35509c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x35509cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_3550a0:
    // 0x3550a0: 0xae04009c  sw          $a0, 0x9C($s0)
    ctx->pc = 0x3550a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 4));
label_3550a4:
    // 0x3550a4: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x3550a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3550a8:
    // 0x3550a8: 0x8c434220  lw          $v1, 0x4220($v0)
    ctx->pc = 0x3550a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16928)));
label_3550ac:
    // 0x3550ac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3550acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3550b0:
    // 0x3550b0: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3550b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_3550b4:
    // 0x3550b4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3550b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3550b8:
    // 0x3550b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3550b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3550bc:
    // 0x3550bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3550bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3550c0:
    // 0x3550c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3550c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3550c4:
    // 0x3550c4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3550c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3550c8:
    // 0x3550c8: 0x8c423ff0  lw          $v0, 0x3FF0($v0)
    ctx->pc = 0x3550c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
label_3550cc:
    // 0x3550cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3550ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3550d0:
    // 0x3550d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3550d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3550d4:
    // 0x3550d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3550d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3550d8:
    // 0x3550d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3550d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3550dc:
    // 0x3550dc: 0x320f809  jalr        $t9
label_3550e0:
    if (ctx->pc == 0x3550E0u) {
        ctx->pc = 0x3550E0u;
            // 0x3550e0: 0x8c4500d0  lw          $a1, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->pc = 0x3550E4u;
        goto label_3550e4;
    }
    ctx->pc = 0x3550DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3550E4u);
        ctx->pc = 0x3550E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3550DCu;
            // 0x3550e0: 0x8c4500d0  lw          $a1, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3550E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3550E4u; }
            if (ctx->pc != 0x3550E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3550E4u;
label_3550e4:
    // 0x3550e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3550e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3550e8:
    // 0x3550e8: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x3550e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3550ec:
    // 0x3550ec: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3550ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3550f0:
    // 0x3550f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3550f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3550f4:
    // 0x3550f4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_3550f8:
    if (ctx->pc == 0x3550F8u) {
        ctx->pc = 0x3550F8u;
            // 0x3550f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3550FCu;
        goto label_3550fc;
    }
    ctx->pc = 0x3550F4u;
    {
        const bool branch_taken_0x3550f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3550F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3550F4u;
            // 0x3550f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3550f4) {
            ctx->pc = 0x355130u;
            goto label_355130;
        }
    }
    ctx->pc = 0x3550FCu;
label_3550fc:
    // 0x3550fc: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x3550fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_355100:
    // 0x355100: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x355100u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_355104:
    // 0x355104: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_355108:
    if (ctx->pc == 0x355108u) {
        ctx->pc = 0x355108u;
            // 0x355108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35510Cu;
        goto label_35510c;
    }
    ctx->pc = 0x355104u;
    {
        const bool branch_taken_0x355104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x355108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355104u;
            // 0x355108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355104) {
            ctx->pc = 0x355124u;
            goto label_355124;
        }
    }
    ctx->pc = 0x35510Cu;
label_35510c:
    // 0x35510c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355110:
    // 0x355110: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x355110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_355114:
    // 0x355114: 0x30420441  andi        $v0, $v0, 0x441
    ctx->pc = 0x355114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1089);
label_355118:
    // 0x355118: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_35511c:
    if (ctx->pc == 0x35511Cu) {
        ctx->pc = 0x355120u;
        goto label_355120;
    }
    ctx->pc = 0x355118u;
    {
        const bool branch_taken_0x355118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355118) {
            ctx->pc = 0x355124u;
            goto label_355124;
        }
    }
    ctx->pc = 0x355120u;
label_355120:
    // 0x355120: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x355120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_355124:
    // 0x355124: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_355128:
    if (ctx->pc == 0x355128u) {
        ctx->pc = 0x355128u;
            // 0x355128: 0x6102b  sltu        $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x35512Cu;
        goto label_35512c;
    }
    ctx->pc = 0x355124u;
    {
        const bool branch_taken_0x355124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355124) {
            ctx->pc = 0x355128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355124u;
            // 0x355128: 0x6102b  sltu        $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x355134u;
            goto label_355134;
        }
    }
    ctx->pc = 0x35512Cu;
label_35512c:
    // 0x35512c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x35512cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_355130:
    // 0x355130: 0x6102b  sltu        $v0, $zero, $a2
    ctx->pc = 0x355130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_355134:
    // 0x355134: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x355134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_355138:
    // 0x355138: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x355138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_35513c:
    // 0x35513c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_355140:
    // 0x355140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x355140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_355144:
    // 0x355144: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x355144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_355148:
    // 0x355148: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x355148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_35514c:
    // 0x35514c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_355150:
    // 0x355150: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x355150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_355154:
    // 0x355154: 0xc08bf20  jal         func_22FC80
label_355158:
    if (ctx->pc == 0x355158u) {
        ctx->pc = 0x355158u;
            // 0x355158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35515Cu;
        goto label_35515c;
    }
    ctx->pc = 0x355154u;
    SET_GPR_U32(ctx, 31, 0x35515Cu);
    ctx->pc = 0x355158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355154u;
            // 0x355158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35515Cu; }
        if (ctx->pc != 0x35515Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35515Cu; }
        if (ctx->pc != 0x35515Cu) { return; }
    }
    ctx->pc = 0x35515Cu;
label_35515c:
    // 0x35515c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35515cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_355160:
    // 0x355160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x355160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_355164:
    // 0x355164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355168:
    // 0x355168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35516c:
    // 0x35516c: 0x3e00008  jr          $ra
label_355170:
    if (ctx->pc == 0x355170u) {
        ctx->pc = 0x355170u;
            // 0x355170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x355174u;
        goto label_355174;
    }
    ctx->pc = 0x35516Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35516Cu;
            // 0x355170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355174u;
label_355174:
    // 0x355174: 0x0  nop
    ctx->pc = 0x355174u;
    // NOP
label_355178:
    // 0x355178: 0x0  nop
    ctx->pc = 0x355178u;
    // NOP
label_35517c:
    // 0x35517c: 0x0  nop
    ctx->pc = 0x35517cu;
    // NOP
label_355180:
    // 0x355180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_355184:
    // 0x355184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_355188:
    // 0x355188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35518c:
    // 0x35518c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35518cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_355190:
    // 0x355190: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x355190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_355194:
    // 0x355194: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_355198:
    if (ctx->pc == 0x355198u) {
        ctx->pc = 0x355198u;
            // 0x355198: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x35519Cu;
        goto label_35519c;
    }
    ctx->pc = 0x355194u;
    {
        const bool branch_taken_0x355194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355194) {
            ctx->pc = 0x355198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355194u;
            // 0x355198: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3551BCu;
            goto label_3551bc;
        }
    }
    ctx->pc = 0x35519Cu;
label_35519c:
    // 0x35519c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3551a0:
    if (ctx->pc == 0x3551A0u) {
        ctx->pc = 0x3551A0u;
            // 0x3551a0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3551A4u;
        goto label_3551a4;
    }
    ctx->pc = 0x35519Cu;
    {
        const bool branch_taken_0x35519c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35519c) {
            ctx->pc = 0x3551A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35519Cu;
            // 0x3551a0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3551B8u;
            goto label_3551b8;
        }
    }
    ctx->pc = 0x3551A4u;
label_3551a4:
    // 0x3551a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3551a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3551a8:
    // 0x3551a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3551a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3551ac:
    // 0x3551ac: 0x320f809  jalr        $t9
label_3551b0:
    if (ctx->pc == 0x3551B0u) {
        ctx->pc = 0x3551B0u;
            // 0x3551b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3551B4u;
        goto label_3551b4;
    }
    ctx->pc = 0x3551ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3551B4u);
        ctx->pc = 0x3551B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3551ACu;
            // 0x3551b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3551B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3551B4u; }
            if (ctx->pc != 0x3551B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3551B4u;
label_3551b4:
    // 0x3551b4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3551b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3551b8:
    // 0x3551b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3551b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3551bc:
    // 0x3551bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3551bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3551c0:
    // 0x3551c0: 0x3e00008  jr          $ra
label_3551c4:
    if (ctx->pc == 0x3551C4u) {
        ctx->pc = 0x3551C4u;
            // 0x3551c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3551C8u;
        goto label_3551c8;
    }
    ctx->pc = 0x3551C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3551C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3551C0u;
            // 0x3551c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3551C8u;
label_3551c8:
    // 0x3551c8: 0x0  nop
    ctx->pc = 0x3551c8u;
    // NOP
label_3551cc:
    // 0x3551cc: 0x0  nop
    ctx->pc = 0x3551ccu;
    // NOP
label_3551d0:
    // 0x3551d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3551d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3551d4:
    // 0x3551d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3551d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3551d8:
    // 0x3551d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3551d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3551dc:
    // 0x3551dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3551dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3551e0:
    // 0x3551e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3551e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3551e4:
    // 0x3551e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3551e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3551e8:
    // 0x3551e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3551e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3551ec:
    // 0x3551ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3551ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3551f0:
    // 0x3551f0: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x3551f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3551f4:
    // 0x3551f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3551f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3551f8:
    // 0x3551f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3551f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3551fc:
    // 0x3551fc: 0x0  nop
    ctx->pc = 0x3551fcu;
    // NOP
label_355200:
    // 0x355200: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x355200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
label_355204:
    // 0x355204: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x355204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_355208:
    // 0x355208: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35520c:
    // 0x35520c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_355210:
    if (ctx->pc == 0x355210u) {
        ctx->pc = 0x355210u;
            // 0x355210: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355214u;
        goto label_355214;
    }
    ctx->pc = 0x35520Cu;
    {
        const bool branch_taken_0x35520c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x355210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35520Cu;
            // 0x355210: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35520c) {
            ctx->pc = 0x355224u;
            goto label_355224;
        }
    }
    ctx->pc = 0x355214u;
label_355214:
    // 0x355214: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x355214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_355218:
    // 0x355218: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x355218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_35521c:
    // 0x35521c: 0x10000007  b           . + 4 + (0x7 << 2)
label_355220:
    if (ctx->pc == 0x355220u) {
        ctx->pc = 0x355224u;
        goto label_355224;
    }
    ctx->pc = 0x35521Cu;
    {
        const bool branch_taken_0x35521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35521c) {
            ctx->pc = 0x35523Cu;
            goto label_35523c;
        }
    }
    ctx->pc = 0x355224u;
label_355224:
    // 0x355224: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x355224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_355228:
    // 0x355228: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x355228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35522c:
    // 0x35522c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35522cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_355230:
    // 0x355230: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x355230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_355234:
    // 0x355234: 0x0  nop
    ctx->pc = 0x355234u;
    // NOP
label_355238:
    // 0x355238: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x355238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35523c:
    // 0x35523c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35523cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_355240:
    // 0x355240: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x355240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
label_355244:
    // 0x355244: 0x8c514220  lw          $s1, 0x4220($v0)
    ctx->pc = 0x355244u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16928)));
label_355248:
    // 0x355248: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x355248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35524c:
    // 0x35524c: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x35524cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_355250:
    // 0x355250: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x355250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_355254:
    // 0x355254: 0x8c434220  lw          $v1, 0x4220($v0)
    ctx->pc = 0x355254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16928)));
label_355258:
    // 0x355258: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x355258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_35525c:
    // 0x35525c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35525cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355260:
    // 0x355260: 0xa41004  sllv        $v0, $a0, $a1
    ctx->pc = 0x355260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_355264:
    // 0x355264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x355264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_355268:
    // 0x355268: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x355268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_35526c:
    // 0x35526c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35526cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_355270:
    // 0x355270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x355270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_355274:
    // 0x355274: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x355274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_355278:
    // 0x355278: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x355278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_35527c:
    // 0x35527c: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x35527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_355280:
    // 0x355280: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_355284:
    // 0x355284: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_355288:
    if (ctx->pc == 0x355288u) {
        ctx->pc = 0x355288u;
            // 0x355288: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35528Cu;
        goto label_35528c;
    }
    ctx->pc = 0x355284u;
    {
        const bool branch_taken_0x355284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355284) {
            ctx->pc = 0x355288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355284u;
            // 0x355288: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35529Cu;
            goto label_35529c;
        }
    }
    ctx->pc = 0x35528Cu;
label_35528c:
    // 0x35528c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35528cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_355290:
    // 0x355290: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x355290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_355294:
    // 0x355294: 0x10000007  b           . + 4 + (0x7 << 2)
label_355298:
    if (ctx->pc == 0x355298u) {
        ctx->pc = 0x355298u;
            // 0x355298: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x35529Cu;
        goto label_35529c;
    }
    ctx->pc = 0x355294u;
    {
        const bool branch_taken_0x355294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355294u;
            // 0x355298: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355294) {
            ctx->pc = 0x3552B4u;
            goto label_3552b4;
        }
    }
    ctx->pc = 0x35529Cu;
label_35529c:
    // 0x35529c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35529cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3552a0:
    // 0x3552a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3552a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3552a4:
    // 0x3552a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3552a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3552a8:
    // 0x3552a8: 0x0  nop
    ctx->pc = 0x3552a8u;
    // NOP
label_3552ac:
    // 0x3552ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3552acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3552b0:
    // 0x3552b0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3552b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3552b4:
    // 0x3552b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3552b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3552b8:
    // 0x3552b8: 0xa2630074  sb          $v1, 0x74($s3)
    ctx->pc = 0x3552b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 116), (uint8_t)GPR_U32(ctx, 3));
label_3552bc:
    // 0x3552bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3552bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3552c0:
    // 0x3552c0: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x3552c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3552c4:
    // 0x3552c4: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x3552c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3552c8:
    // 0x3552c8: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x3552c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3552cc:
    // 0x3552cc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3552ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3552d0:
    // 0x3552d0: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x3552d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3552d4:
    // 0x3552d4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x3552d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3552d8:
    // 0x3552d8: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x3552d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_3552dc:
    // 0x3552dc: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x3552dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3552e0:
    // 0x3552e0: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x3552e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_3552e4:
    // 0x3552e4: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3552e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3552e8:
    // 0x3552e8: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x3552e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3552ec:
    // 0x3552ec: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x3552ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3552f0:
    // 0x3552f0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x3552f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3552f4:
    // 0x3552f4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3552f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3552f8:
    // 0x3552f8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x3552f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3552fc:
    // 0x3552fc: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x3552fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_355300:
    // 0x355300: 0xc0a3830  jal         func_28E0C0
label_355304:
    if (ctx->pc == 0x355304u) {
        ctx->pc = 0x355304u;
            // 0x355304: 0xe7a300cc  swc1        $f3, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x355308u;
        goto label_355308;
    }
    ctx->pc = 0x355300u;
    SET_GPR_U32(ctx, 31, 0x355308u);
    ctx->pc = 0x355304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355300u;
            // 0x355304: 0xe7a300cc  swc1        $f3, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355308u; }
        if (ctx->pc != 0x355308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355308u; }
        if (ctx->pc != 0x355308u) { return; }
    }
    ctx->pc = 0x355308u;
label_355308:
    // 0x355308: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x355308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35530c:
    // 0x35530c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x35530cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_355310:
    // 0x355310: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x355310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_355314:
    // 0x355314: 0xc0a7a88  jal         func_29EA20
label_355318:
    if (ctx->pc == 0x355318u) {
        ctx->pc = 0x355318u;
            // 0x355318: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x35531Cu;
        goto label_35531c;
    }
    ctx->pc = 0x355314u;
    SET_GPR_U32(ctx, 31, 0x35531Cu);
    ctx->pc = 0x355318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355314u;
            // 0x355318: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35531Cu; }
        if (ctx->pc != 0x35531Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35531Cu; }
        if (ctx->pc != 0x35531Cu) { return; }
    }
    ctx->pc = 0x35531Cu;
label_35531c:
    // 0x35531c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x35531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_355320:
    // 0x355320: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x355320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_355324:
    // 0x355324: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
label_355328:
    if (ctx->pc == 0x355328u) {
        ctx->pc = 0x355328u;
            // 0x355328: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35532Cu;
        goto label_35532c;
    }
    ctx->pc = 0x355324u;
    {
        const bool branch_taken_0x355324 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x355328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355324u;
            // 0x355328: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355324) {
            ctx->pc = 0x3553D8u;
            goto label_3553d8;
        }
    }
    ctx->pc = 0x35532Cu;
label_35532c:
    // 0x35532c: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x35532cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_355330:
    // 0x355330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x355330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355334:
    // 0x355334: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x355334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_355338:
    // 0x355338: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x355338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35533c:
    // 0x35533c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x35533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_355340:
    // 0x355340: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x355340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_355344:
    // 0x355344: 0x8c633ff0  lw          $v1, 0x3FF0($v1)
    ctx->pc = 0x355344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16368)));
label_355348:
    // 0x355348: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x355348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_35534c:
    // 0x35534c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x35534cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_355350:
    // 0x355350: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x355350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_355354:
    // 0x355354: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x355354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_355358:
    // 0x355358: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x355358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_35535c:
    // 0x35535c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35535cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_355360:
    // 0x355360: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x355360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_355364:
    // 0x355364: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x355364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_355368:
    // 0x355368: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x355368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35536c:
    // 0x35536c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_355370:
    if (ctx->pc == 0x355370u) {
        ctx->pc = 0x355370u;
            // 0x355370: 0x8c6500d0  lw          $a1, 0xD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
        ctx->pc = 0x355374u;
        goto label_355374;
    }
    ctx->pc = 0x35536Cu;
    {
        const bool branch_taken_0x35536c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35536Cu;
            // 0x355370: 0x8c6500d0  lw          $a1, 0xD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35536c) {
            ctx->pc = 0x3553A8u;
            goto label_3553a8;
        }
    }
    ctx->pc = 0x355374u;
label_355374:
    // 0x355374: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x355374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_355378:
    // 0x355378: 0x602026  xor         $a0, $v1, $zero
    ctx->pc = 0x355378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_35537c:
    // 0x35537c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x35537cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_355380:
    // 0x355380: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_355384:
    if (ctx->pc == 0x355384u) {
        ctx->pc = 0x355384u;
            // 0x355384: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x355388u;
        goto label_355388;
    }
    ctx->pc = 0x355380u;
    {
        const bool branch_taken_0x355380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x355380) {
            ctx->pc = 0x355384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355380u;
            // 0x355384: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x355394u;
            goto label_355394;
        }
    }
    ctx->pc = 0x355388u;
label_355388:
    // 0x355388: 0x3862000a  xori        $v0, $v1, 0xA
    ctx->pc = 0x355388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_35538c:
    // 0x35538c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x35538cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_355390:
    // 0x355390: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x355390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_355394:
    // 0x355394: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_355398:
    if (ctx->pc == 0x355398u) {
        ctx->pc = 0x355398u;
            // 0x355398: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x35539Cu;
        goto label_35539c;
    }
    ctx->pc = 0x355394u;
    {
        const bool branch_taken_0x355394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x355394) {
            ctx->pc = 0x355398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355394u;
            // 0x355398: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3553A8u;
            goto label_3553a8;
        }
    }
    ctx->pc = 0x35539Cu;
label_35539c:
    // 0x35539c: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x35539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_3553a0:
    // 0x3553a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3553a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3553a4:
    // 0x3553a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3553a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3553a8:
    // 0x3553a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3553a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3553ac:
    // 0x3553ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3553acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3553b0:
    // 0x3553b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3553b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3553b4:
    // 0x3553b4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3553b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3553b8:
    // 0x3553b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3553b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3553bc:
    // 0x3553bc: 0xc08afe0  jal         func_22BF80
label_3553c0:
    if (ctx->pc == 0x3553C0u) {
        ctx->pc = 0x3553C0u;
            // 0x3553c0: 0x238c0  sll         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x3553C4u;
        goto label_3553c4;
    }
    ctx->pc = 0x3553BCu;
    SET_GPR_U32(ctx, 31, 0x3553C4u);
    ctx->pc = 0x3553C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3553BCu;
            // 0x3553c0: 0x238c0  sll         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3553C4u; }
        if (ctx->pc != 0x3553C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3553C4u; }
        if (ctx->pc != 0x3553C4u) { return; }
    }
    ctx->pc = 0x3553C4u;
label_3553c4:
    // 0x3553c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3553c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3553c8:
    // 0x3553c8: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x3553c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_3553cc:
    // 0x3553cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3553ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3553d0:
    // 0x3553d0: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x3553d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_3553d4:
    // 0x3553d4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x3553d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_3553d8:
    // 0x3553d8: 0xae720050  sw          $s2, 0x50($s3)
    ctx->pc = 0x3553d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 18));
label_3553dc:
    // 0x3553dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3553dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3553e0:
    // 0x3553e0: 0xc08c798  jal         func_231E60
label_3553e4:
    if (ctx->pc == 0x3553E4u) {
        ctx->pc = 0x3553E4u;
            // 0x3553e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3553E8u;
        goto label_3553e8;
    }
    ctx->pc = 0x3553E0u;
    SET_GPR_U32(ctx, 31, 0x3553E8u);
    ctx->pc = 0x3553E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3553E0u;
            // 0x3553e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3553E8u; }
        if (ctx->pc != 0x3553E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3553E8u; }
        if (ctx->pc != 0x3553E8u) { return; }
    }
    ctx->pc = 0x3553E8u;
label_3553e8:
    // 0x3553e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3553e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3553ec:
    // 0x3553ec: 0xc04f278  jal         func_13C9E0
label_3553f0:
    if (ctx->pc == 0x3553F0u) {
        ctx->pc = 0x3553F0u;
            // 0x3553f0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x3553F4u;
        goto label_3553f4;
    }
    ctx->pc = 0x3553ECu;
    SET_GPR_U32(ctx, 31, 0x3553F4u);
    ctx->pc = 0x3553F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3553ECu;
            // 0x3553f0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3553F4u; }
        if (ctx->pc != 0x3553F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3553F4u; }
        if (ctx->pc != 0x3553F4u) { return; }
    }
    ctx->pc = 0x3553F4u;
label_3553f4:
    // 0x3553f4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3553f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_3553f8:
    // 0x3553f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3553f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3553fc:
    // 0x3553fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3553fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_355400:
    // 0x355400: 0xc04cca0  jal         func_133280
label_355404:
    if (ctx->pc == 0x355404u) {
        ctx->pc = 0x355404u;
            // 0x355404: 0x24c642b0  addiu       $a2, $a2, 0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17072));
        ctx->pc = 0x355408u;
        goto label_355408;
    }
    ctx->pc = 0x355400u;
    SET_GPR_U32(ctx, 31, 0x355408u);
    ctx->pc = 0x355404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355400u;
            // 0x355404: 0x24c642b0  addiu       $a2, $a2, 0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355408u; }
        if (ctx->pc != 0x355408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355408u; }
        if (ctx->pc != 0x355408u) { return; }
    }
    ctx->pc = 0x355408u;
label_355408:
    // 0x355408: 0x92620074  lbu         $v0, 0x74($s3)
    ctx->pc = 0x355408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
label_35540c:
    // 0x35540c: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_355410:
    if (ctx->pc == 0x355410u) {
        ctx->pc = 0x355410u;
            // 0x355410: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x355414u;
        goto label_355414;
    }
    ctx->pc = 0x35540Cu;
    {
        const bool branch_taken_0x35540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35540c) {
            ctx->pc = 0x355410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35540Cu;
            // 0x355410: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3554A4u;
            goto label_3554a4;
        }
    }
    ctx->pc = 0x355414u;
label_355414:
    // 0x355414: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x355414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_355418:
    // 0x355418: 0xc04cc04  jal         func_133010
label_35541c:
    if (ctx->pc == 0x35541Cu) {
        ctx->pc = 0x35541Cu;
            // 0x35541c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x355420u;
        goto label_355420;
    }
    ctx->pc = 0x355418u;
    SET_GPR_U32(ctx, 31, 0x355420u);
    ctx->pc = 0x35541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355418u;
            // 0x35541c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355420u; }
        if (ctx->pc != 0x355420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355420u; }
        if (ctx->pc != 0x355420u) { return; }
    }
    ctx->pc = 0x355420u;
label_355420:
    // 0x355420: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x355420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_355424:
    // 0x355424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355428:
    // 0x355428: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x355428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_35542c:
    // 0x35542c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x35542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_355430:
    // 0x355430: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x355430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_355434:
    // 0x355434: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x355434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_355438:
    // 0x355438: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35543c:
    if (ctx->pc == 0x35543Cu) {
        ctx->pc = 0x35543Cu;
            // 0x35543c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x355440u;
        goto label_355440;
    }
    ctx->pc = 0x355438u;
    {
        const bool branch_taken_0x355438 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x355438) {
            ctx->pc = 0x35543Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355438u;
            // 0x35543c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35544Cu;
            goto label_35544c;
        }
    }
    ctx->pc = 0x355440u;
label_355440:
    // 0x355440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355444:
    // 0x355444: 0x10000007  b           . + 4 + (0x7 << 2)
label_355448:
    if (ctx->pc == 0x355448u) {
        ctx->pc = 0x355448u;
            // 0x355448: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35544Cu;
        goto label_35544c;
    }
    ctx->pc = 0x355444u;
    {
        const bool branch_taken_0x355444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355444u;
            // 0x355448: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355444) {
            ctx->pc = 0x355464u;
            goto label_355464;
        }
    }
    ctx->pc = 0x35544Cu;
label_35544c:
    // 0x35544c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_355450:
    // 0x355450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x355450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_355454:
    // 0x355454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x355454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355458:
    // 0x355458: 0x0  nop
    ctx->pc = 0x355458u;
    // NOP
label_35545c:
    // 0x35545c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x35545cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_355460:
    // 0x355460: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x355460u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_355464:
    // 0x355464: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x355464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_355468:
    // 0x355468: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x355468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_35546c:
    // 0x35546c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x35546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_355470:
    // 0x355470: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x355470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_355474:
    // 0x355474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x355474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_355478:
    // 0x355478: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x355478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_35547c:
    // 0x35547c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_355480:
    // 0x355480: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x355480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_355484:
    // 0x355484: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x355484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_355488:
    // 0x355488: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x355488u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_35548c:
    // 0x35548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_355490:
    // 0x355490: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x355490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_355494:
    // 0x355494: 0xc04cc7c  jal         func_1331F0
label_355498:
    if (ctx->pc == 0x355498u) {
        ctx->pc = 0x355498u;
            // 0x355498: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x35549Cu;
        goto label_35549c;
    }
    ctx->pc = 0x355494u;
    SET_GPR_U32(ctx, 31, 0x35549Cu);
    ctx->pc = 0x355498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355494u;
            // 0x355498: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35549Cu; }
        if (ctx->pc != 0x35549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35549Cu; }
        if (ctx->pc != 0x35549Cu) { return; }
    }
    ctx->pc = 0x35549Cu;
label_35549c:
    // 0x35549c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3554a0:
    if (ctx->pc == 0x3554A0u) {
        ctx->pc = 0x3554A0u;
            // 0x3554a0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3554A4u;
        goto label_3554a4;
    }
    ctx->pc = 0x35549Cu;
    {
        const bool branch_taken_0x35549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3554A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35549Cu;
            // 0x3554a0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35549c) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x3554A4u;
label_3554a4:
    // 0x3554a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3554a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3554a8:
    // 0x3554a8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3554a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_3554ac:
    // 0x3554ac: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3554acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_3554b0:
    // 0x3554b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3554b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3554b4:
    // 0x3554b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3554b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3554b8:
    // 0x3554b8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3554bc:
    if (ctx->pc == 0x3554BCu) {
        ctx->pc = 0x3554BCu;
            // 0x3554bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3554C0u;
        goto label_3554c0;
    }
    ctx->pc = 0x3554B8u;
    {
        const bool branch_taken_0x3554b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3554b8) {
            ctx->pc = 0x3554BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3554B8u;
            // 0x3554bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3554CCu;
            goto label_3554cc;
        }
    }
    ctx->pc = 0x3554C0u;
label_3554c0:
    // 0x3554c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3554c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3554c4:
    // 0x3554c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3554c8:
    if (ctx->pc == 0x3554C8u) {
        ctx->pc = 0x3554C8u;
            // 0x3554c8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3554CCu;
        goto label_3554cc;
    }
    ctx->pc = 0x3554C4u;
    {
        const bool branch_taken_0x3554c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3554C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3554C4u;
            // 0x3554c8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3554c4) {
            ctx->pc = 0x3554E4u;
            goto label_3554e4;
        }
    }
    ctx->pc = 0x3554CCu;
label_3554cc:
    // 0x3554cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3554ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3554d0:
    // 0x3554d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3554d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3554d4:
    // 0x3554d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3554d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3554d8:
    // 0x3554d8: 0x0  nop
    ctx->pc = 0x3554d8u;
    // NOP
label_3554dc:
    // 0x3554dc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3554dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3554e0:
    // 0x3554e0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3554e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3554e4:
    // 0x3554e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3554e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3554e8:
    // 0x3554e8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x3554e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_3554ec:
    // 0x3554ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3554ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3554f0:
    // 0x3554f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3554f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3554f4:
    // 0x3554f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3554f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3554f8:
    // 0x3554f8: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x3554f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3554fc:
    // 0x3554fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3554fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_355500:
    // 0x355500: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x355500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_355504:
    // 0x355504: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x355504u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_355508:
    // 0x355508: 0xc04cc7c  jal         func_1331F0
label_35550c:
    if (ctx->pc == 0x35550Cu) {
        ctx->pc = 0x35550Cu;
            // 0x35550c: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x355510u;
        goto label_355510;
    }
    ctx->pc = 0x355508u;
    SET_GPR_U32(ctx, 31, 0x355510u);
    ctx->pc = 0x35550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355508u;
            // 0x35550c: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355510u; }
        if (ctx->pc != 0x355510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355510u; }
        if (ctx->pc != 0x355510u) { return; }
    }
    ctx->pc = 0x355510u;
label_355510:
    // 0x355510: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x355510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_355514:
    // 0x355514: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x355514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355518:
    // 0x355518: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x355518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35551c:
    // 0x35551c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x35551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_355520:
    // 0x355520: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x355520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_355524:
    // 0x355524: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x355524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_355528:
    // 0x355528: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x355528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_35552c:
    // 0x35552c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x35552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355530:
    // 0x355530: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x355530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_355534:
    // 0x355534: 0xc08af48  jal         func_22BD20
label_355538:
    if (ctx->pc == 0x355538u) {
        ctx->pc = 0x355538u;
            // 0x355538: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->pc = 0x35553Cu;
        goto label_35553c;
    }
    ctx->pc = 0x355534u;
    SET_GPR_U32(ctx, 31, 0x35553Cu);
    ctx->pc = 0x355538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355534u;
            // 0x355538: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35553Cu; }
        if (ctx->pc != 0x35553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35553Cu; }
        if (ctx->pc != 0x35553Cu) { return; }
    }
    ctx->pc = 0x35553Cu;
label_35553c:
    // 0x35553c: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x35553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_355540:
    // 0x355540: 0xc04cc04  jal         func_133010
label_355544:
    if (ctx->pc == 0x355544u) {
        ctx->pc = 0x355544u;
            // 0x355544: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x355548u;
        goto label_355548;
    }
    ctx->pc = 0x355540u;
    SET_GPR_U32(ctx, 31, 0x355548u);
    ctx->pc = 0x355544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355540u;
            // 0x355544: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355548u; }
        if (ctx->pc != 0x355548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355548u; }
        if (ctx->pc != 0x355548u) { return; }
    }
    ctx->pc = 0x355548u;
label_355548:
    // 0x355548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x355548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35554c:
    // 0x35554c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35554cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_355550:
    // 0x355550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x355550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_355554:
    // 0x355554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355558:
    // 0x355558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35555c:
    // 0x35555c: 0x3e00008  jr          $ra
label_355560:
    if (ctx->pc == 0x355560u) {
        ctx->pc = 0x355560u;
            // 0x355560: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x355564u;
        goto label_355564;
    }
    ctx->pc = 0x35555Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35555Cu;
            // 0x355560: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355564u;
label_355564:
    // 0x355564: 0x0  nop
    ctx->pc = 0x355564u;
    // NOP
label_355568:
    // 0x355568: 0x0  nop
    ctx->pc = 0x355568u;
    // NOP
label_35556c:
    // 0x35556c: 0x0  nop
    ctx->pc = 0x35556cu;
    // NOP
label_355570:
    // 0x355570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_355574:
    // 0x355574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x355574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_355578:
    // 0x355578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x355578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35557c:
    // 0x35557c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_355580:
    // 0x355580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x355580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_355584:
    // 0x355584: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
label_355588:
    if (ctx->pc == 0x355588u) {
        ctx->pc = 0x355588u;
            // 0x355588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35558Cu;
        goto label_35558c;
    }
    ctx->pc = 0x355584u;
    {
        const bool branch_taken_0x355584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x355588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355584u;
            // 0x355588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355584) {
            ctx->pc = 0x3556F4u;
            goto label_3556f4;
        }
    }
    ctx->pc = 0x35558Cu;
label_35558c:
    // 0x35558c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35558cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_355590:
    // 0x355590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x355590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_355594:
    // 0x355594: 0x24635e20  addiu       $v1, $v1, 0x5E20
    ctx->pc = 0x355594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24096));
label_355598:
    // 0x355598: 0x24425e58  addiu       $v0, $v0, 0x5E58
    ctx->pc = 0x355598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24152));
label_35559c:
    // 0x35559c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35559cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3555a0:
    // 0x3555a0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3555a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3555a4:
    // 0x3555a4: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x3555a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_3555a8:
    // 0x3555a8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3555a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3555ac:
    // 0x3555ac: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3555b0:
    if (ctx->pc == 0x3555B0u) {
        ctx->pc = 0x3555B0u;
            // 0x3555b0: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->pc = 0x3555B4u;
        goto label_3555b4;
    }
    ctx->pc = 0x3555ACu;
    {
        const bool branch_taken_0x3555ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555ac) {
            ctx->pc = 0x3555B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3555ACu;
            // 0x3555b0: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3555ECu;
            goto label_3555ec;
        }
    }
    ctx->pc = 0x3555B4u;
label_3555b4:
    // 0x3555b4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x3555b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3555b8:
    // 0x3555b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3555b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3555bc:
    // 0x3555bc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3555bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_3555c0:
    // 0x3555c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3555c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3555c4:
    // 0x3555c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3555c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3555c8:
    // 0x3555c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3555cc:
    if (ctx->pc == 0x3555CCu) {
        ctx->pc = 0x3555D0u;
        goto label_3555d0;
    }
    ctx->pc = 0x3555C8u;
    {
        const bool branch_taken_0x3555c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3555c8) {
            ctx->pc = 0x3555E8u;
            goto label_3555e8;
        }
    }
    ctx->pc = 0x3555D0u;
label_3555d0:
    // 0x3555d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3555d4:
    if (ctx->pc == 0x3555D4u) {
        ctx->pc = 0x3555D8u;
        goto label_3555d8;
    }
    ctx->pc = 0x3555D0u;
    {
        const bool branch_taken_0x3555d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555d0) {
            ctx->pc = 0x3555E8u;
            goto label_3555e8;
        }
    }
    ctx->pc = 0x3555D8u;
label_3555d8:
    // 0x3555d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3555d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3555dc:
    // 0x3555dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3555dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3555e0:
    // 0x3555e0: 0x320f809  jalr        $t9
label_3555e4:
    if (ctx->pc == 0x3555E4u) {
        ctx->pc = 0x3555E4u;
            // 0x3555e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3555E8u;
        goto label_3555e8;
    }
    ctx->pc = 0x3555E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3555E8u);
        ctx->pc = 0x3555E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3555E0u;
            // 0x3555e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3555E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3555E8u; }
            if (ctx->pc != 0x3555E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3555E8u;
label_3555e8:
    // 0x3555e8: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x3555e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_3555ec:
    // 0x3555ec: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x3555ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3555f0:
    // 0x3555f0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3555f4:
    if (ctx->pc == 0x3555F4u) {
        ctx->pc = 0x3555F4u;
            // 0x3555f4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->pc = 0x3555F8u;
        goto label_3555f8;
    }
    ctx->pc = 0x3555F0u;
    {
        const bool branch_taken_0x3555f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555f0) {
            ctx->pc = 0x3555F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3555F0u;
            // 0x3555f4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355630u;
            goto label_355630;
        }
    }
    ctx->pc = 0x3555F8u;
label_3555f8:
    // 0x3555f8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x3555f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3555fc:
    // 0x3555fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3555fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_355600:
    // 0x355600: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x355600u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_355604:
    // 0x355604: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_355608:
    // 0x355608: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x355608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_35560c:
    // 0x35560c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_355610:
    if (ctx->pc == 0x355610u) {
        ctx->pc = 0x355614u;
        goto label_355614;
    }
    ctx->pc = 0x35560Cu;
    {
        const bool branch_taken_0x35560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35560c) {
            ctx->pc = 0x35562Cu;
            goto label_35562c;
        }
    }
    ctx->pc = 0x355614u;
label_355614:
    // 0x355614: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_355618:
    if (ctx->pc == 0x355618u) {
        ctx->pc = 0x35561Cu;
        goto label_35561c;
    }
    ctx->pc = 0x355614u;
    {
        const bool branch_taken_0x355614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355614) {
            ctx->pc = 0x35562Cu;
            goto label_35562c;
        }
    }
    ctx->pc = 0x35561Cu;
label_35561c:
    // 0x35561c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35561cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_355620:
    // 0x355620: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x355620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_355624:
    // 0x355624: 0x320f809  jalr        $t9
label_355628:
    if (ctx->pc == 0x355628u) {
        ctx->pc = 0x355628u;
            // 0x355628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35562Cu;
        goto label_35562c;
    }
    ctx->pc = 0x355624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35562Cu);
        ctx->pc = 0x355628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355624u;
            // 0x355628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35562Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35562Cu; }
            if (ctx->pc != 0x35562Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35562Cu;
label_35562c:
    // 0x35562c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x35562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_355630:
    // 0x355630: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x355630u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_355634:
    // 0x355634: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_355638:
    if (ctx->pc == 0x355638u) {
        ctx->pc = 0x35563Cu;
        goto label_35563c;
    }
    ctx->pc = 0x355634u;
    {
        const bool branch_taken_0x355634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355634) {
            ctx->pc = 0x355670u;
            goto label_355670;
        }
    }
    ctx->pc = 0x35563Cu;
label_35563c:
    // 0x35563c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x35563cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_355640:
    // 0x355640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x355640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_355644:
    // 0x355644: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x355644u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_355648:
    // 0x355648: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x355648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_35564c:
    // 0x35564c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35564cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_355650:
    // 0x355650: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_355654:
    if (ctx->pc == 0x355654u) {
        ctx->pc = 0x355658u;
        goto label_355658;
    }
    ctx->pc = 0x355650u;
    {
        const bool branch_taken_0x355650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355650) {
            ctx->pc = 0x355670u;
            goto label_355670;
        }
    }
    ctx->pc = 0x355658u;
label_355658:
    // 0x355658: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_35565c:
    if (ctx->pc == 0x35565Cu) {
        ctx->pc = 0x355660u;
        goto label_355660;
    }
    ctx->pc = 0x355658u;
    {
        const bool branch_taken_0x355658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x355658) {
            ctx->pc = 0x355670u;
            goto label_355670;
        }
    }
    ctx->pc = 0x355660u;
label_355660:
    // 0x355660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x355660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_355664:
    // 0x355664: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x355664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_355668:
    // 0x355668: 0x320f809  jalr        $t9
label_35566c:
    if (ctx->pc == 0x35566Cu) {
        ctx->pc = 0x35566Cu;
            // 0x35566c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x355670u;
        goto label_355670;
    }
    ctx->pc = 0x355668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x355670u);
        ctx->pc = 0x35566Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355668u;
            // 0x35566c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x355670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x355670u; }
            if (ctx->pc != 0x355670u) { return; }
        }
        }
    }
    ctx->pc = 0x355670u;
label_355670:
    // 0x355670: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_355674:
    if (ctx->pc == 0x355674u) {
        ctx->pc = 0x355674u;
            // 0x355674: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x355678u;
        goto label_355678;
    }
    ctx->pc = 0x355670u;
    {
        const bool branch_taken_0x355670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x355670) {
            ctx->pc = 0x355674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355670u;
            // 0x355674: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3556E0u;
            goto label_3556e0;
        }
    }
    ctx->pc = 0x355678u;
label_355678:
    // 0x355678: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x355678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35567c:
    // 0x35567c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_355680:
    // 0x355680: 0x24635e70  addiu       $v1, $v1, 0x5E70
    ctx->pc = 0x355680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24176));
label_355684:
    // 0x355684: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x355684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_355688:
    // 0x355688: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x355688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
label_35568c:
    // 0x35568c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35568cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_355690:
    // 0x355690: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x355690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_355694:
    // 0x355694: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x355694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_355698:
    // 0x355698: 0xc0407c0  jal         func_101F00
label_35569c:
    if (ctx->pc == 0x35569Cu) {
        ctx->pc = 0x35569Cu;
            // 0x35569c: 0x24a52430  addiu       $a1, $a1, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9264));
        ctx->pc = 0x3556A0u;
        goto label_3556a0;
    }
    ctx->pc = 0x355698u;
    SET_GPR_U32(ctx, 31, 0x3556A0u);
    ctx->pc = 0x35569Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355698u;
            // 0x35569c: 0x24a52430  addiu       $a1, $a1, 0x2430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556A0u; }
        if (ctx->pc != 0x3556A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556A0u; }
        if (ctx->pc != 0x3556A0u) { return; }
    }
    ctx->pc = 0x3556A0u;
label_3556a0:
    // 0x3556a0: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x3556a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3556a4:
    // 0x3556a4: 0xc0d4e44  jal         func_353910
label_3556a8:
    if (ctx->pc == 0x3556A8u) {
        ctx->pc = 0x3556A8u;
            // 0x3556a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3556ACu;
        goto label_3556ac;
    }
    ctx->pc = 0x3556A4u;
    SET_GPR_U32(ctx, 31, 0x3556ACu);
    ctx->pc = 0x3556A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3556A4u;
            // 0x3556a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353910u;
    if (runtime->hasFunction(0x353910u)) {
        auto targetFn = runtime->lookupFunction(0x353910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556ACu; }
        if (ctx->pc != 0x3556ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353910_0x353910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556ACu; }
        if (ctx->pc != 0x3556ACu) { return; }
    }
    ctx->pc = 0x3556ACu;
label_3556ac:
    // 0x3556ac: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3556acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3556b0:
    // 0x3556b0: 0xc0d4e60  jal         func_353980
label_3556b4:
    if (ctx->pc == 0x3556B4u) {
        ctx->pc = 0x3556B4u;
            // 0x3556b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3556B8u;
        goto label_3556b8;
    }
    ctx->pc = 0x3556B0u;
    SET_GPR_U32(ctx, 31, 0x3556B8u);
    ctx->pc = 0x3556B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3556B0u;
            // 0x3556b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353980u;
    if (runtime->hasFunction(0x353980u)) {
        auto targetFn = runtime->lookupFunction(0x353980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556B8u; }
        if (ctx->pc != 0x3556B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353980_0x353980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556B8u; }
        if (ctx->pc != 0x3556B8u) { return; }
    }
    ctx->pc = 0x3556B8u;
label_3556b8:
    // 0x3556b8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3556b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3556bc:
    // 0x3556bc: 0xc0d4e60  jal         func_353980
label_3556c0:
    if (ctx->pc == 0x3556C0u) {
        ctx->pc = 0x3556C0u;
            // 0x3556c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3556C4u;
        goto label_3556c4;
    }
    ctx->pc = 0x3556BCu;
    SET_GPR_U32(ctx, 31, 0x3556C4u);
    ctx->pc = 0x3556C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3556BCu;
            // 0x3556c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353980u;
    if (runtime->hasFunction(0x353980u)) {
        auto targetFn = runtime->lookupFunction(0x353980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556C4u; }
        if (ctx->pc != 0x3556C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353980_0x353980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556C4u; }
        if (ctx->pc != 0x3556C4u) { return; }
    }
    ctx->pc = 0x3556C4u;
label_3556c4:
    // 0x3556c4: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x3556c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3556c8:
    // 0x3556c8: 0xc0d4e7c  jal         func_3539F0
label_3556cc:
    if (ctx->pc == 0x3556CCu) {
        ctx->pc = 0x3556CCu;
            // 0x3556cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3556D0u;
        goto label_3556d0;
    }
    ctx->pc = 0x3556C8u;
    SET_GPR_U32(ctx, 31, 0x3556D0u);
    ctx->pc = 0x3556CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3556C8u;
            // 0x3556cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3539F0u;
    if (runtime->hasFunction(0x3539F0u)) {
        auto targetFn = runtime->lookupFunction(0x3539F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556D0u; }
        if (ctx->pc != 0x3556D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003539F0_0x3539f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556D0u; }
        if (ctx->pc != 0x3556D0u) { return; }
    }
    ctx->pc = 0x3556D0u;
label_3556d0:
    // 0x3556d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3556d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3556d4:
    // 0x3556d4: 0xc0ae1c0  jal         func_2B8700
label_3556d8:
    if (ctx->pc == 0x3556D8u) {
        ctx->pc = 0x3556D8u;
            // 0x3556d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3556DCu;
        goto label_3556dc;
    }
    ctx->pc = 0x3556D4u;
    SET_GPR_U32(ctx, 31, 0x3556DCu);
    ctx->pc = 0x3556D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3556D4u;
            // 0x3556d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556DCu; }
        if (ctx->pc != 0x3556DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556DCu; }
        if (ctx->pc != 0x3556DCu) { return; }
    }
    ctx->pc = 0x3556DCu;
label_3556dc:
    // 0x3556dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3556dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3556e0:
    // 0x3556e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3556e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3556e4:
    // 0x3556e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3556e8:
    if (ctx->pc == 0x3556E8u) {
        ctx->pc = 0x3556E8u;
            // 0x3556e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3556ECu;
        goto label_3556ec;
    }
    ctx->pc = 0x3556E4u;
    {
        const bool branch_taken_0x3556e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3556e4) {
            ctx->pc = 0x3556E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3556E4u;
            // 0x3556e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3556F8u;
            goto label_3556f8;
        }
    }
    ctx->pc = 0x3556ECu;
label_3556ec:
    // 0x3556ec: 0xc0400a8  jal         func_1002A0
label_3556f0:
    if (ctx->pc == 0x3556F0u) {
        ctx->pc = 0x3556F0u;
            // 0x3556f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3556F4u;
        goto label_3556f4;
    }
    ctx->pc = 0x3556ECu;
    SET_GPR_U32(ctx, 31, 0x3556F4u);
    ctx->pc = 0x3556F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3556ECu;
            // 0x3556f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556F4u; }
        if (ctx->pc != 0x3556F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3556F4u; }
        if (ctx->pc != 0x3556F4u) { return; }
    }
    ctx->pc = 0x3556F4u;
label_3556f4:
    // 0x3556f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3556f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3556f8:
    // 0x3556f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3556f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3556fc:
    // 0x3556fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3556fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_355700:
    // 0x355700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355704:
    // 0x355704: 0x3e00008  jr          $ra
label_355708:
    if (ctx->pc == 0x355708u) {
        ctx->pc = 0x355708u;
            // 0x355708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35570Cu;
        goto label_35570c;
    }
    ctx->pc = 0x355704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355704u;
            // 0x355708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35570Cu;
label_35570c:
    // 0x35570c: 0x0  nop
    ctx->pc = 0x35570cu;
    // NOP
label_355710:
    // 0x355710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_355714:
    // 0x355714: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x355714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_355718:
    // 0x355718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35571c:
    // 0x35571c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x35571cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_355720:
    // 0x355720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_355724:
    // 0x355724: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x355724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_355728:
    // 0x355728: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x355728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35572c:
    // 0x35572c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x35572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_355730:
    // 0x355730: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x355730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_355734:
    // 0x355734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_355738:
    // 0x355738: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x355738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_35573c:
    // 0x35573c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x35573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_355740:
    // 0x355740: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x355740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_355744:
    // 0x355744: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x355744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_355748:
    // 0x355748: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x355748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_35574c:
    // 0x35574c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x35574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_355750:
    // 0x355750: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x355750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_355754:
    // 0x355754: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x355754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_355758:
    // 0x355758: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x355758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_35575c:
    // 0x35575c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x35575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_355760:
    // 0x355760: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x355760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_355764:
    // 0x355764: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x355764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_355768:
    // 0x355768: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x355768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35576c:
    // 0x35576c: 0xc0a997c  jal         func_2A65F0
label_355770:
    if (ctx->pc == 0x355770u) {
        ctx->pc = 0x355770u;
            // 0x355770: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x355774u;
        goto label_355774;
    }
    ctx->pc = 0x35576Cu;
    SET_GPR_U32(ctx, 31, 0x355774u);
    ctx->pc = 0x355770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35576Cu;
            // 0x355770: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355774u; }
        if (ctx->pc != 0x355774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355774u; }
        if (ctx->pc != 0x355774u) { return; }
    }
    ctx->pc = 0x355774u;
label_355774:
    // 0x355774: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x355774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_355778:
    // 0x355778: 0xc0d879c  jal         func_361E70
label_35577c:
    if (ctx->pc == 0x35577Cu) {
        ctx->pc = 0x35577Cu;
            // 0x35577c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355780u;
        goto label_355780;
    }
    ctx->pc = 0x355778u;
    SET_GPR_U32(ctx, 31, 0x355780u);
    ctx->pc = 0x35577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355778u;
            // 0x35577c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355780u; }
        if (ctx->pc != 0x355780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355780u; }
        if (ctx->pc != 0x355780u) { return; }
    }
    ctx->pc = 0x355780u;
label_355780:
    // 0x355780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_355784:
    // 0x355784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355788:
    // 0x355788: 0x3e00008  jr          $ra
label_35578c:
    if (ctx->pc == 0x35578Cu) {
        ctx->pc = 0x35578Cu;
            // 0x35578c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x355790u;
        goto label_355790;
    }
    ctx->pc = 0x355788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355788u;
            // 0x35578c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355790u;
label_355790:
    // 0x355790: 0x80d4de4  j           func_353790
label_355794:
    if (ctx->pc == 0x355794u) {
        ctx->pc = 0x355794u;
            // 0x355794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x355798u;
        goto label_355798;
    }
    ctx->pc = 0x355790u;
    ctx->pc = 0x355794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355790u;
            // 0x355794: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x353790u;
    {
        auto targetFn = runtime->lookupFunction(0x353790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x355798u;
label_355798:
    // 0x355798: 0x0  nop
    ctx->pc = 0x355798u;
    // NOP
label_35579c:
    // 0x35579c: 0x0  nop
    ctx->pc = 0x35579cu;
    // NOP
label_3557a0:
    // 0x3557a0: 0x80d555c  j           func_355570
label_3557a4:
    if (ctx->pc == 0x3557A4u) {
        ctx->pc = 0x3557A4u;
            // 0x3557a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3557A8u;
        goto label_3557a8;
    }
    ctx->pc = 0x3557A0u;
    ctx->pc = 0x3557A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3557A0u;
            // 0x3557a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355570u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_355570;
    ctx->pc = 0x3557A8u;
label_3557a8:
    // 0x3557a8: 0x0  nop
    ctx->pc = 0x3557a8u;
    // NOP
label_3557ac:
    // 0x3557ac: 0x0  nop
    ctx->pc = 0x3557acu;
    // NOP
label_3557b0:
    // 0x3557b0: 0x80d490c  j           func_352430
label_3557b4:
    if (ctx->pc == 0x3557B4u) {
        ctx->pc = 0x3557B4u;
            // 0x3557b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3557B8u;
        goto label_3557b8;
    }
    ctx->pc = 0x3557B0u;
    ctx->pc = 0x3557B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3557B0u;
            // 0x3557b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x352430u;
    {
        auto targetFn = runtime->lookupFunction(0x352430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3557B8u;
label_3557b8:
    // 0x3557b8: 0x0  nop
    ctx->pc = 0x3557b8u;
    // NOP
label_3557bc:
    // 0x3557bc: 0x0  nop
    ctx->pc = 0x3557bcu;
    // NOP
label_3557c0:
    // 0x3557c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3557c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3557c4:
    // 0x3557c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3557c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3557c8:
    // 0x3557c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3557c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3557cc:
    // 0x3557cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3557ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3557d0:
    // 0x3557d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3557d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3557d4:
    // 0x3557d4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3557d8:
    if (ctx->pc == 0x3557D8u) {
        ctx->pc = 0x3557D8u;
            // 0x3557d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3557DCu;
        goto label_3557dc;
    }
    ctx->pc = 0x3557D4u;
    {
        const bool branch_taken_0x3557d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3557D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3557D4u;
            // 0x3557d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557d4) {
            ctx->pc = 0x355840u;
            goto label_355840;
        }
    }
    ctx->pc = 0x3557DCu;
label_3557dc:
    // 0x3557dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3557dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3557e0:
    // 0x3557e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3557e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3557e4:
    // 0x3557e4: 0x24635ec0  addiu       $v1, $v1, 0x5EC0
    ctx->pc = 0x3557e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
label_3557e8:
    // 0x3557e8: 0x24425ef8  addiu       $v0, $v0, 0x5EF8
    ctx->pc = 0x3557e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24312));
label_3557ec:
    // 0x3557ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3557ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3557f0:
    // 0x3557f0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3557f4:
    if (ctx->pc == 0x3557F4u) {
        ctx->pc = 0x3557F4u;
            // 0x3557f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3557F8u;
        goto label_3557f8;
    }
    ctx->pc = 0x3557F0u;
    {
        const bool branch_taken_0x3557f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3557F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3557F0u;
            // 0x3557f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557f0) {
            ctx->pc = 0x355828u;
            goto label_355828;
        }
    }
    ctx->pc = 0x3557F8u;
label_3557f8:
    // 0x3557f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3557f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3557fc:
    // 0x3557fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3557fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_355800:
    // 0x355800: 0x24635f70  addiu       $v1, $v1, 0x5F70
    ctx->pc = 0x355800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24432));
label_355804:
    // 0x355804: 0x24425fa8  addiu       $v0, $v0, 0x5FA8
    ctx->pc = 0x355804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24488));
label_355808:
    // 0x355808: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x355808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35580c:
    // 0x35580c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x35580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_355810:
    // 0x355810: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x355810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_355814:
    // 0x355814: 0xc0aed1c  jal         func_2BB470
label_355818:
    if (ctx->pc == 0x355818u) {
        ctx->pc = 0x355818u;
            // 0x355818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35581Cu;
        goto label_35581c;
    }
    ctx->pc = 0x355814u;
    SET_GPR_U32(ctx, 31, 0x35581Cu);
    ctx->pc = 0x355818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355814u;
            // 0x355818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35581Cu; }
        if (ctx->pc != 0x35581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35581Cu; }
        if (ctx->pc != 0x35581Cu) { return; }
    }
    ctx->pc = 0x35581Cu;
label_35581c:
    // 0x35581c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355820:
    // 0x355820: 0xc0d5618  jal         func_355860
label_355824:
    if (ctx->pc == 0x355824u) {
        ctx->pc = 0x355824u;
            // 0x355824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355828u;
        goto label_355828;
    }
    ctx->pc = 0x355820u;
    SET_GPR_U32(ctx, 31, 0x355828u);
    ctx->pc = 0x355824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355820u;
            // 0x355824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x355860u;
    if (runtime->hasFunction(0x355860u)) {
        auto targetFn = runtime->lookupFunction(0x355860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355828u; }
        if (ctx->pc != 0x355828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00355860_0x355860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355828u; }
        if (ctx->pc != 0x355828u) { return; }
    }
    ctx->pc = 0x355828u;
label_355828:
    // 0x355828: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x355828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_35582c:
    // 0x35582c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35582cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_355830:
    // 0x355830: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_355834:
    if (ctx->pc == 0x355834u) {
        ctx->pc = 0x355834u;
            // 0x355834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355838u;
        goto label_355838;
    }
    ctx->pc = 0x355830u;
    {
        const bool branch_taken_0x355830 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x355830) {
            ctx->pc = 0x355834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x355830u;
            // 0x355834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x355844u;
            goto label_355844;
        }
    }
    ctx->pc = 0x355838u;
label_355838:
    // 0x355838: 0xc0400a8  jal         func_1002A0
label_35583c:
    if (ctx->pc == 0x35583Cu) {
        ctx->pc = 0x35583Cu;
            // 0x35583c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x355840u;
        goto label_355840;
    }
    ctx->pc = 0x355838u;
    SET_GPR_U32(ctx, 31, 0x355840u);
    ctx->pc = 0x35583Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x355838u;
            // 0x35583c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355840u; }
        if (ctx->pc != 0x355840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x355840u; }
        if (ctx->pc != 0x355840u) { return; }
    }
    ctx->pc = 0x355840u;
label_355840:
    // 0x355840: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_355844:
    // 0x355844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x355844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_355848:
    // 0x355848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35584c:
    // 0x35584c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35584cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_355850:
    // 0x355850: 0x3e00008  jr          $ra
label_355854:
    if (ctx->pc == 0x355854u) {
        ctx->pc = 0x355854u;
            // 0x355854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x355858u;
        goto label_355858;
    }
    ctx->pc = 0x355850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x355850u;
            // 0x355854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x355858u;
label_355858:
    // 0x355858: 0x0  nop
    ctx->pc = 0x355858u;
    // NOP
label_35585c:
    // 0x35585c: 0x0  nop
    ctx->pc = 0x35585cu;
    // NOP
}
