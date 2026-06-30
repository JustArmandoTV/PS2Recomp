#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414F00
// Address: 0x414f00 - 0x415c00
void sub_00414F00_0x414f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414F00_0x414f00");
#endif

    switch (ctx->pc) {
        case 0x414f00u: goto label_414f00;
        case 0x414f04u: goto label_414f04;
        case 0x414f08u: goto label_414f08;
        case 0x414f0cu: goto label_414f0c;
        case 0x414f10u: goto label_414f10;
        case 0x414f14u: goto label_414f14;
        case 0x414f18u: goto label_414f18;
        case 0x414f1cu: goto label_414f1c;
        case 0x414f20u: goto label_414f20;
        case 0x414f24u: goto label_414f24;
        case 0x414f28u: goto label_414f28;
        case 0x414f2cu: goto label_414f2c;
        case 0x414f30u: goto label_414f30;
        case 0x414f34u: goto label_414f34;
        case 0x414f38u: goto label_414f38;
        case 0x414f3cu: goto label_414f3c;
        case 0x414f40u: goto label_414f40;
        case 0x414f44u: goto label_414f44;
        case 0x414f48u: goto label_414f48;
        case 0x414f4cu: goto label_414f4c;
        case 0x414f50u: goto label_414f50;
        case 0x414f54u: goto label_414f54;
        case 0x414f58u: goto label_414f58;
        case 0x414f5cu: goto label_414f5c;
        case 0x414f60u: goto label_414f60;
        case 0x414f64u: goto label_414f64;
        case 0x414f68u: goto label_414f68;
        case 0x414f6cu: goto label_414f6c;
        case 0x414f70u: goto label_414f70;
        case 0x414f74u: goto label_414f74;
        case 0x414f78u: goto label_414f78;
        case 0x414f7cu: goto label_414f7c;
        case 0x414f80u: goto label_414f80;
        case 0x414f84u: goto label_414f84;
        case 0x414f88u: goto label_414f88;
        case 0x414f8cu: goto label_414f8c;
        case 0x414f90u: goto label_414f90;
        case 0x414f94u: goto label_414f94;
        case 0x414f98u: goto label_414f98;
        case 0x414f9cu: goto label_414f9c;
        case 0x414fa0u: goto label_414fa0;
        case 0x414fa4u: goto label_414fa4;
        case 0x414fa8u: goto label_414fa8;
        case 0x414facu: goto label_414fac;
        case 0x414fb0u: goto label_414fb0;
        case 0x414fb4u: goto label_414fb4;
        case 0x414fb8u: goto label_414fb8;
        case 0x414fbcu: goto label_414fbc;
        case 0x414fc0u: goto label_414fc0;
        case 0x414fc4u: goto label_414fc4;
        case 0x414fc8u: goto label_414fc8;
        case 0x414fccu: goto label_414fcc;
        case 0x414fd0u: goto label_414fd0;
        case 0x414fd4u: goto label_414fd4;
        case 0x414fd8u: goto label_414fd8;
        case 0x414fdcu: goto label_414fdc;
        case 0x414fe0u: goto label_414fe0;
        case 0x414fe4u: goto label_414fe4;
        case 0x414fe8u: goto label_414fe8;
        case 0x414fecu: goto label_414fec;
        case 0x414ff0u: goto label_414ff0;
        case 0x414ff4u: goto label_414ff4;
        case 0x414ff8u: goto label_414ff8;
        case 0x414ffcu: goto label_414ffc;
        case 0x415000u: goto label_415000;
        case 0x415004u: goto label_415004;
        case 0x415008u: goto label_415008;
        case 0x41500cu: goto label_41500c;
        case 0x415010u: goto label_415010;
        case 0x415014u: goto label_415014;
        case 0x415018u: goto label_415018;
        case 0x41501cu: goto label_41501c;
        case 0x415020u: goto label_415020;
        case 0x415024u: goto label_415024;
        case 0x415028u: goto label_415028;
        case 0x41502cu: goto label_41502c;
        case 0x415030u: goto label_415030;
        case 0x415034u: goto label_415034;
        case 0x415038u: goto label_415038;
        case 0x41503cu: goto label_41503c;
        case 0x415040u: goto label_415040;
        case 0x415044u: goto label_415044;
        case 0x415048u: goto label_415048;
        case 0x41504cu: goto label_41504c;
        case 0x415050u: goto label_415050;
        case 0x415054u: goto label_415054;
        case 0x415058u: goto label_415058;
        case 0x41505cu: goto label_41505c;
        case 0x415060u: goto label_415060;
        case 0x415064u: goto label_415064;
        case 0x415068u: goto label_415068;
        case 0x41506cu: goto label_41506c;
        case 0x415070u: goto label_415070;
        case 0x415074u: goto label_415074;
        case 0x415078u: goto label_415078;
        case 0x41507cu: goto label_41507c;
        case 0x415080u: goto label_415080;
        case 0x415084u: goto label_415084;
        case 0x415088u: goto label_415088;
        case 0x41508cu: goto label_41508c;
        case 0x415090u: goto label_415090;
        case 0x415094u: goto label_415094;
        case 0x415098u: goto label_415098;
        case 0x41509cu: goto label_41509c;
        case 0x4150a0u: goto label_4150a0;
        case 0x4150a4u: goto label_4150a4;
        case 0x4150a8u: goto label_4150a8;
        case 0x4150acu: goto label_4150ac;
        case 0x4150b0u: goto label_4150b0;
        case 0x4150b4u: goto label_4150b4;
        case 0x4150b8u: goto label_4150b8;
        case 0x4150bcu: goto label_4150bc;
        case 0x4150c0u: goto label_4150c0;
        case 0x4150c4u: goto label_4150c4;
        case 0x4150c8u: goto label_4150c8;
        case 0x4150ccu: goto label_4150cc;
        case 0x4150d0u: goto label_4150d0;
        case 0x4150d4u: goto label_4150d4;
        case 0x4150d8u: goto label_4150d8;
        case 0x4150dcu: goto label_4150dc;
        case 0x4150e0u: goto label_4150e0;
        case 0x4150e4u: goto label_4150e4;
        case 0x4150e8u: goto label_4150e8;
        case 0x4150ecu: goto label_4150ec;
        case 0x4150f0u: goto label_4150f0;
        case 0x4150f4u: goto label_4150f4;
        case 0x4150f8u: goto label_4150f8;
        case 0x4150fcu: goto label_4150fc;
        case 0x415100u: goto label_415100;
        case 0x415104u: goto label_415104;
        case 0x415108u: goto label_415108;
        case 0x41510cu: goto label_41510c;
        case 0x415110u: goto label_415110;
        case 0x415114u: goto label_415114;
        case 0x415118u: goto label_415118;
        case 0x41511cu: goto label_41511c;
        case 0x415120u: goto label_415120;
        case 0x415124u: goto label_415124;
        case 0x415128u: goto label_415128;
        case 0x41512cu: goto label_41512c;
        case 0x415130u: goto label_415130;
        case 0x415134u: goto label_415134;
        case 0x415138u: goto label_415138;
        case 0x41513cu: goto label_41513c;
        case 0x415140u: goto label_415140;
        case 0x415144u: goto label_415144;
        case 0x415148u: goto label_415148;
        case 0x41514cu: goto label_41514c;
        case 0x415150u: goto label_415150;
        case 0x415154u: goto label_415154;
        case 0x415158u: goto label_415158;
        case 0x41515cu: goto label_41515c;
        case 0x415160u: goto label_415160;
        case 0x415164u: goto label_415164;
        case 0x415168u: goto label_415168;
        case 0x41516cu: goto label_41516c;
        case 0x415170u: goto label_415170;
        case 0x415174u: goto label_415174;
        case 0x415178u: goto label_415178;
        case 0x41517cu: goto label_41517c;
        case 0x415180u: goto label_415180;
        case 0x415184u: goto label_415184;
        case 0x415188u: goto label_415188;
        case 0x41518cu: goto label_41518c;
        case 0x415190u: goto label_415190;
        case 0x415194u: goto label_415194;
        case 0x415198u: goto label_415198;
        case 0x41519cu: goto label_41519c;
        case 0x4151a0u: goto label_4151a0;
        case 0x4151a4u: goto label_4151a4;
        case 0x4151a8u: goto label_4151a8;
        case 0x4151acu: goto label_4151ac;
        case 0x4151b0u: goto label_4151b0;
        case 0x4151b4u: goto label_4151b4;
        case 0x4151b8u: goto label_4151b8;
        case 0x4151bcu: goto label_4151bc;
        case 0x4151c0u: goto label_4151c0;
        case 0x4151c4u: goto label_4151c4;
        case 0x4151c8u: goto label_4151c8;
        case 0x4151ccu: goto label_4151cc;
        case 0x4151d0u: goto label_4151d0;
        case 0x4151d4u: goto label_4151d4;
        case 0x4151d8u: goto label_4151d8;
        case 0x4151dcu: goto label_4151dc;
        case 0x4151e0u: goto label_4151e0;
        case 0x4151e4u: goto label_4151e4;
        case 0x4151e8u: goto label_4151e8;
        case 0x4151ecu: goto label_4151ec;
        case 0x4151f0u: goto label_4151f0;
        case 0x4151f4u: goto label_4151f4;
        case 0x4151f8u: goto label_4151f8;
        case 0x4151fcu: goto label_4151fc;
        case 0x415200u: goto label_415200;
        case 0x415204u: goto label_415204;
        case 0x415208u: goto label_415208;
        case 0x41520cu: goto label_41520c;
        case 0x415210u: goto label_415210;
        case 0x415214u: goto label_415214;
        case 0x415218u: goto label_415218;
        case 0x41521cu: goto label_41521c;
        case 0x415220u: goto label_415220;
        case 0x415224u: goto label_415224;
        case 0x415228u: goto label_415228;
        case 0x41522cu: goto label_41522c;
        case 0x415230u: goto label_415230;
        case 0x415234u: goto label_415234;
        case 0x415238u: goto label_415238;
        case 0x41523cu: goto label_41523c;
        case 0x415240u: goto label_415240;
        case 0x415244u: goto label_415244;
        case 0x415248u: goto label_415248;
        case 0x41524cu: goto label_41524c;
        case 0x415250u: goto label_415250;
        case 0x415254u: goto label_415254;
        case 0x415258u: goto label_415258;
        case 0x41525cu: goto label_41525c;
        case 0x415260u: goto label_415260;
        case 0x415264u: goto label_415264;
        case 0x415268u: goto label_415268;
        case 0x41526cu: goto label_41526c;
        case 0x415270u: goto label_415270;
        case 0x415274u: goto label_415274;
        case 0x415278u: goto label_415278;
        case 0x41527cu: goto label_41527c;
        case 0x415280u: goto label_415280;
        case 0x415284u: goto label_415284;
        case 0x415288u: goto label_415288;
        case 0x41528cu: goto label_41528c;
        case 0x415290u: goto label_415290;
        case 0x415294u: goto label_415294;
        case 0x415298u: goto label_415298;
        case 0x41529cu: goto label_41529c;
        case 0x4152a0u: goto label_4152a0;
        case 0x4152a4u: goto label_4152a4;
        case 0x4152a8u: goto label_4152a8;
        case 0x4152acu: goto label_4152ac;
        case 0x4152b0u: goto label_4152b0;
        case 0x4152b4u: goto label_4152b4;
        case 0x4152b8u: goto label_4152b8;
        case 0x4152bcu: goto label_4152bc;
        case 0x4152c0u: goto label_4152c0;
        case 0x4152c4u: goto label_4152c4;
        case 0x4152c8u: goto label_4152c8;
        case 0x4152ccu: goto label_4152cc;
        case 0x4152d0u: goto label_4152d0;
        case 0x4152d4u: goto label_4152d4;
        case 0x4152d8u: goto label_4152d8;
        case 0x4152dcu: goto label_4152dc;
        case 0x4152e0u: goto label_4152e0;
        case 0x4152e4u: goto label_4152e4;
        case 0x4152e8u: goto label_4152e8;
        case 0x4152ecu: goto label_4152ec;
        case 0x4152f0u: goto label_4152f0;
        case 0x4152f4u: goto label_4152f4;
        case 0x4152f8u: goto label_4152f8;
        case 0x4152fcu: goto label_4152fc;
        case 0x415300u: goto label_415300;
        case 0x415304u: goto label_415304;
        case 0x415308u: goto label_415308;
        case 0x41530cu: goto label_41530c;
        case 0x415310u: goto label_415310;
        case 0x415314u: goto label_415314;
        case 0x415318u: goto label_415318;
        case 0x41531cu: goto label_41531c;
        case 0x415320u: goto label_415320;
        case 0x415324u: goto label_415324;
        case 0x415328u: goto label_415328;
        case 0x41532cu: goto label_41532c;
        case 0x415330u: goto label_415330;
        case 0x415334u: goto label_415334;
        case 0x415338u: goto label_415338;
        case 0x41533cu: goto label_41533c;
        case 0x415340u: goto label_415340;
        case 0x415344u: goto label_415344;
        case 0x415348u: goto label_415348;
        case 0x41534cu: goto label_41534c;
        case 0x415350u: goto label_415350;
        case 0x415354u: goto label_415354;
        case 0x415358u: goto label_415358;
        case 0x41535cu: goto label_41535c;
        case 0x415360u: goto label_415360;
        case 0x415364u: goto label_415364;
        case 0x415368u: goto label_415368;
        case 0x41536cu: goto label_41536c;
        case 0x415370u: goto label_415370;
        case 0x415374u: goto label_415374;
        case 0x415378u: goto label_415378;
        case 0x41537cu: goto label_41537c;
        case 0x415380u: goto label_415380;
        case 0x415384u: goto label_415384;
        case 0x415388u: goto label_415388;
        case 0x41538cu: goto label_41538c;
        case 0x415390u: goto label_415390;
        case 0x415394u: goto label_415394;
        case 0x415398u: goto label_415398;
        case 0x41539cu: goto label_41539c;
        case 0x4153a0u: goto label_4153a0;
        case 0x4153a4u: goto label_4153a4;
        case 0x4153a8u: goto label_4153a8;
        case 0x4153acu: goto label_4153ac;
        case 0x4153b0u: goto label_4153b0;
        case 0x4153b4u: goto label_4153b4;
        case 0x4153b8u: goto label_4153b8;
        case 0x4153bcu: goto label_4153bc;
        case 0x4153c0u: goto label_4153c0;
        case 0x4153c4u: goto label_4153c4;
        case 0x4153c8u: goto label_4153c8;
        case 0x4153ccu: goto label_4153cc;
        case 0x4153d0u: goto label_4153d0;
        case 0x4153d4u: goto label_4153d4;
        case 0x4153d8u: goto label_4153d8;
        case 0x4153dcu: goto label_4153dc;
        case 0x4153e0u: goto label_4153e0;
        case 0x4153e4u: goto label_4153e4;
        case 0x4153e8u: goto label_4153e8;
        case 0x4153ecu: goto label_4153ec;
        case 0x4153f0u: goto label_4153f0;
        case 0x4153f4u: goto label_4153f4;
        case 0x4153f8u: goto label_4153f8;
        case 0x4153fcu: goto label_4153fc;
        case 0x415400u: goto label_415400;
        case 0x415404u: goto label_415404;
        case 0x415408u: goto label_415408;
        case 0x41540cu: goto label_41540c;
        case 0x415410u: goto label_415410;
        case 0x415414u: goto label_415414;
        case 0x415418u: goto label_415418;
        case 0x41541cu: goto label_41541c;
        case 0x415420u: goto label_415420;
        case 0x415424u: goto label_415424;
        case 0x415428u: goto label_415428;
        case 0x41542cu: goto label_41542c;
        case 0x415430u: goto label_415430;
        case 0x415434u: goto label_415434;
        case 0x415438u: goto label_415438;
        case 0x41543cu: goto label_41543c;
        case 0x415440u: goto label_415440;
        case 0x415444u: goto label_415444;
        case 0x415448u: goto label_415448;
        case 0x41544cu: goto label_41544c;
        case 0x415450u: goto label_415450;
        case 0x415454u: goto label_415454;
        case 0x415458u: goto label_415458;
        case 0x41545cu: goto label_41545c;
        case 0x415460u: goto label_415460;
        case 0x415464u: goto label_415464;
        case 0x415468u: goto label_415468;
        case 0x41546cu: goto label_41546c;
        case 0x415470u: goto label_415470;
        case 0x415474u: goto label_415474;
        case 0x415478u: goto label_415478;
        case 0x41547cu: goto label_41547c;
        case 0x415480u: goto label_415480;
        case 0x415484u: goto label_415484;
        case 0x415488u: goto label_415488;
        case 0x41548cu: goto label_41548c;
        case 0x415490u: goto label_415490;
        case 0x415494u: goto label_415494;
        case 0x415498u: goto label_415498;
        case 0x41549cu: goto label_41549c;
        case 0x4154a0u: goto label_4154a0;
        case 0x4154a4u: goto label_4154a4;
        case 0x4154a8u: goto label_4154a8;
        case 0x4154acu: goto label_4154ac;
        case 0x4154b0u: goto label_4154b0;
        case 0x4154b4u: goto label_4154b4;
        case 0x4154b8u: goto label_4154b8;
        case 0x4154bcu: goto label_4154bc;
        case 0x4154c0u: goto label_4154c0;
        case 0x4154c4u: goto label_4154c4;
        case 0x4154c8u: goto label_4154c8;
        case 0x4154ccu: goto label_4154cc;
        case 0x4154d0u: goto label_4154d0;
        case 0x4154d4u: goto label_4154d4;
        case 0x4154d8u: goto label_4154d8;
        case 0x4154dcu: goto label_4154dc;
        case 0x4154e0u: goto label_4154e0;
        case 0x4154e4u: goto label_4154e4;
        case 0x4154e8u: goto label_4154e8;
        case 0x4154ecu: goto label_4154ec;
        case 0x4154f0u: goto label_4154f0;
        case 0x4154f4u: goto label_4154f4;
        case 0x4154f8u: goto label_4154f8;
        case 0x4154fcu: goto label_4154fc;
        case 0x415500u: goto label_415500;
        case 0x415504u: goto label_415504;
        case 0x415508u: goto label_415508;
        case 0x41550cu: goto label_41550c;
        case 0x415510u: goto label_415510;
        case 0x415514u: goto label_415514;
        case 0x415518u: goto label_415518;
        case 0x41551cu: goto label_41551c;
        case 0x415520u: goto label_415520;
        case 0x415524u: goto label_415524;
        case 0x415528u: goto label_415528;
        case 0x41552cu: goto label_41552c;
        case 0x415530u: goto label_415530;
        case 0x415534u: goto label_415534;
        case 0x415538u: goto label_415538;
        case 0x41553cu: goto label_41553c;
        case 0x415540u: goto label_415540;
        case 0x415544u: goto label_415544;
        case 0x415548u: goto label_415548;
        case 0x41554cu: goto label_41554c;
        case 0x415550u: goto label_415550;
        case 0x415554u: goto label_415554;
        case 0x415558u: goto label_415558;
        case 0x41555cu: goto label_41555c;
        case 0x415560u: goto label_415560;
        case 0x415564u: goto label_415564;
        case 0x415568u: goto label_415568;
        case 0x41556cu: goto label_41556c;
        case 0x415570u: goto label_415570;
        case 0x415574u: goto label_415574;
        case 0x415578u: goto label_415578;
        case 0x41557cu: goto label_41557c;
        case 0x415580u: goto label_415580;
        case 0x415584u: goto label_415584;
        case 0x415588u: goto label_415588;
        case 0x41558cu: goto label_41558c;
        case 0x415590u: goto label_415590;
        case 0x415594u: goto label_415594;
        case 0x415598u: goto label_415598;
        case 0x41559cu: goto label_41559c;
        case 0x4155a0u: goto label_4155a0;
        case 0x4155a4u: goto label_4155a4;
        case 0x4155a8u: goto label_4155a8;
        case 0x4155acu: goto label_4155ac;
        case 0x4155b0u: goto label_4155b0;
        case 0x4155b4u: goto label_4155b4;
        case 0x4155b8u: goto label_4155b8;
        case 0x4155bcu: goto label_4155bc;
        case 0x4155c0u: goto label_4155c0;
        case 0x4155c4u: goto label_4155c4;
        case 0x4155c8u: goto label_4155c8;
        case 0x4155ccu: goto label_4155cc;
        case 0x4155d0u: goto label_4155d0;
        case 0x4155d4u: goto label_4155d4;
        case 0x4155d8u: goto label_4155d8;
        case 0x4155dcu: goto label_4155dc;
        case 0x4155e0u: goto label_4155e0;
        case 0x4155e4u: goto label_4155e4;
        case 0x4155e8u: goto label_4155e8;
        case 0x4155ecu: goto label_4155ec;
        case 0x4155f0u: goto label_4155f0;
        case 0x4155f4u: goto label_4155f4;
        case 0x4155f8u: goto label_4155f8;
        case 0x4155fcu: goto label_4155fc;
        case 0x415600u: goto label_415600;
        case 0x415604u: goto label_415604;
        case 0x415608u: goto label_415608;
        case 0x41560cu: goto label_41560c;
        case 0x415610u: goto label_415610;
        case 0x415614u: goto label_415614;
        case 0x415618u: goto label_415618;
        case 0x41561cu: goto label_41561c;
        case 0x415620u: goto label_415620;
        case 0x415624u: goto label_415624;
        case 0x415628u: goto label_415628;
        case 0x41562cu: goto label_41562c;
        case 0x415630u: goto label_415630;
        case 0x415634u: goto label_415634;
        case 0x415638u: goto label_415638;
        case 0x41563cu: goto label_41563c;
        case 0x415640u: goto label_415640;
        case 0x415644u: goto label_415644;
        case 0x415648u: goto label_415648;
        case 0x41564cu: goto label_41564c;
        case 0x415650u: goto label_415650;
        case 0x415654u: goto label_415654;
        case 0x415658u: goto label_415658;
        case 0x41565cu: goto label_41565c;
        case 0x415660u: goto label_415660;
        case 0x415664u: goto label_415664;
        case 0x415668u: goto label_415668;
        case 0x41566cu: goto label_41566c;
        case 0x415670u: goto label_415670;
        case 0x415674u: goto label_415674;
        case 0x415678u: goto label_415678;
        case 0x41567cu: goto label_41567c;
        case 0x415680u: goto label_415680;
        case 0x415684u: goto label_415684;
        case 0x415688u: goto label_415688;
        case 0x41568cu: goto label_41568c;
        case 0x415690u: goto label_415690;
        case 0x415694u: goto label_415694;
        case 0x415698u: goto label_415698;
        case 0x41569cu: goto label_41569c;
        case 0x4156a0u: goto label_4156a0;
        case 0x4156a4u: goto label_4156a4;
        case 0x4156a8u: goto label_4156a8;
        case 0x4156acu: goto label_4156ac;
        case 0x4156b0u: goto label_4156b0;
        case 0x4156b4u: goto label_4156b4;
        case 0x4156b8u: goto label_4156b8;
        case 0x4156bcu: goto label_4156bc;
        case 0x4156c0u: goto label_4156c0;
        case 0x4156c4u: goto label_4156c4;
        case 0x4156c8u: goto label_4156c8;
        case 0x4156ccu: goto label_4156cc;
        case 0x4156d0u: goto label_4156d0;
        case 0x4156d4u: goto label_4156d4;
        case 0x4156d8u: goto label_4156d8;
        case 0x4156dcu: goto label_4156dc;
        case 0x4156e0u: goto label_4156e0;
        case 0x4156e4u: goto label_4156e4;
        case 0x4156e8u: goto label_4156e8;
        case 0x4156ecu: goto label_4156ec;
        case 0x4156f0u: goto label_4156f0;
        case 0x4156f4u: goto label_4156f4;
        case 0x4156f8u: goto label_4156f8;
        case 0x4156fcu: goto label_4156fc;
        case 0x415700u: goto label_415700;
        case 0x415704u: goto label_415704;
        case 0x415708u: goto label_415708;
        case 0x41570cu: goto label_41570c;
        case 0x415710u: goto label_415710;
        case 0x415714u: goto label_415714;
        case 0x415718u: goto label_415718;
        case 0x41571cu: goto label_41571c;
        case 0x415720u: goto label_415720;
        case 0x415724u: goto label_415724;
        case 0x415728u: goto label_415728;
        case 0x41572cu: goto label_41572c;
        case 0x415730u: goto label_415730;
        case 0x415734u: goto label_415734;
        case 0x415738u: goto label_415738;
        case 0x41573cu: goto label_41573c;
        case 0x415740u: goto label_415740;
        case 0x415744u: goto label_415744;
        case 0x415748u: goto label_415748;
        case 0x41574cu: goto label_41574c;
        case 0x415750u: goto label_415750;
        case 0x415754u: goto label_415754;
        case 0x415758u: goto label_415758;
        case 0x41575cu: goto label_41575c;
        case 0x415760u: goto label_415760;
        case 0x415764u: goto label_415764;
        case 0x415768u: goto label_415768;
        case 0x41576cu: goto label_41576c;
        case 0x415770u: goto label_415770;
        case 0x415774u: goto label_415774;
        case 0x415778u: goto label_415778;
        case 0x41577cu: goto label_41577c;
        case 0x415780u: goto label_415780;
        case 0x415784u: goto label_415784;
        case 0x415788u: goto label_415788;
        case 0x41578cu: goto label_41578c;
        case 0x415790u: goto label_415790;
        case 0x415794u: goto label_415794;
        case 0x415798u: goto label_415798;
        case 0x41579cu: goto label_41579c;
        case 0x4157a0u: goto label_4157a0;
        case 0x4157a4u: goto label_4157a4;
        case 0x4157a8u: goto label_4157a8;
        case 0x4157acu: goto label_4157ac;
        case 0x4157b0u: goto label_4157b0;
        case 0x4157b4u: goto label_4157b4;
        case 0x4157b8u: goto label_4157b8;
        case 0x4157bcu: goto label_4157bc;
        case 0x4157c0u: goto label_4157c0;
        case 0x4157c4u: goto label_4157c4;
        case 0x4157c8u: goto label_4157c8;
        case 0x4157ccu: goto label_4157cc;
        case 0x4157d0u: goto label_4157d0;
        case 0x4157d4u: goto label_4157d4;
        case 0x4157d8u: goto label_4157d8;
        case 0x4157dcu: goto label_4157dc;
        case 0x4157e0u: goto label_4157e0;
        case 0x4157e4u: goto label_4157e4;
        case 0x4157e8u: goto label_4157e8;
        case 0x4157ecu: goto label_4157ec;
        case 0x4157f0u: goto label_4157f0;
        case 0x4157f4u: goto label_4157f4;
        case 0x4157f8u: goto label_4157f8;
        case 0x4157fcu: goto label_4157fc;
        case 0x415800u: goto label_415800;
        case 0x415804u: goto label_415804;
        case 0x415808u: goto label_415808;
        case 0x41580cu: goto label_41580c;
        case 0x415810u: goto label_415810;
        case 0x415814u: goto label_415814;
        case 0x415818u: goto label_415818;
        case 0x41581cu: goto label_41581c;
        case 0x415820u: goto label_415820;
        case 0x415824u: goto label_415824;
        case 0x415828u: goto label_415828;
        case 0x41582cu: goto label_41582c;
        case 0x415830u: goto label_415830;
        case 0x415834u: goto label_415834;
        case 0x415838u: goto label_415838;
        case 0x41583cu: goto label_41583c;
        case 0x415840u: goto label_415840;
        case 0x415844u: goto label_415844;
        case 0x415848u: goto label_415848;
        case 0x41584cu: goto label_41584c;
        case 0x415850u: goto label_415850;
        case 0x415854u: goto label_415854;
        case 0x415858u: goto label_415858;
        case 0x41585cu: goto label_41585c;
        case 0x415860u: goto label_415860;
        case 0x415864u: goto label_415864;
        case 0x415868u: goto label_415868;
        case 0x41586cu: goto label_41586c;
        case 0x415870u: goto label_415870;
        case 0x415874u: goto label_415874;
        case 0x415878u: goto label_415878;
        case 0x41587cu: goto label_41587c;
        case 0x415880u: goto label_415880;
        case 0x415884u: goto label_415884;
        case 0x415888u: goto label_415888;
        case 0x41588cu: goto label_41588c;
        case 0x415890u: goto label_415890;
        case 0x415894u: goto label_415894;
        case 0x415898u: goto label_415898;
        case 0x41589cu: goto label_41589c;
        case 0x4158a0u: goto label_4158a0;
        case 0x4158a4u: goto label_4158a4;
        case 0x4158a8u: goto label_4158a8;
        case 0x4158acu: goto label_4158ac;
        case 0x4158b0u: goto label_4158b0;
        case 0x4158b4u: goto label_4158b4;
        case 0x4158b8u: goto label_4158b8;
        case 0x4158bcu: goto label_4158bc;
        case 0x4158c0u: goto label_4158c0;
        case 0x4158c4u: goto label_4158c4;
        case 0x4158c8u: goto label_4158c8;
        case 0x4158ccu: goto label_4158cc;
        case 0x4158d0u: goto label_4158d0;
        case 0x4158d4u: goto label_4158d4;
        case 0x4158d8u: goto label_4158d8;
        case 0x4158dcu: goto label_4158dc;
        case 0x4158e0u: goto label_4158e0;
        case 0x4158e4u: goto label_4158e4;
        case 0x4158e8u: goto label_4158e8;
        case 0x4158ecu: goto label_4158ec;
        case 0x4158f0u: goto label_4158f0;
        case 0x4158f4u: goto label_4158f4;
        case 0x4158f8u: goto label_4158f8;
        case 0x4158fcu: goto label_4158fc;
        case 0x415900u: goto label_415900;
        case 0x415904u: goto label_415904;
        case 0x415908u: goto label_415908;
        case 0x41590cu: goto label_41590c;
        case 0x415910u: goto label_415910;
        case 0x415914u: goto label_415914;
        case 0x415918u: goto label_415918;
        case 0x41591cu: goto label_41591c;
        case 0x415920u: goto label_415920;
        case 0x415924u: goto label_415924;
        case 0x415928u: goto label_415928;
        case 0x41592cu: goto label_41592c;
        case 0x415930u: goto label_415930;
        case 0x415934u: goto label_415934;
        case 0x415938u: goto label_415938;
        case 0x41593cu: goto label_41593c;
        case 0x415940u: goto label_415940;
        case 0x415944u: goto label_415944;
        case 0x415948u: goto label_415948;
        case 0x41594cu: goto label_41594c;
        case 0x415950u: goto label_415950;
        case 0x415954u: goto label_415954;
        case 0x415958u: goto label_415958;
        case 0x41595cu: goto label_41595c;
        case 0x415960u: goto label_415960;
        case 0x415964u: goto label_415964;
        case 0x415968u: goto label_415968;
        case 0x41596cu: goto label_41596c;
        case 0x415970u: goto label_415970;
        case 0x415974u: goto label_415974;
        case 0x415978u: goto label_415978;
        case 0x41597cu: goto label_41597c;
        case 0x415980u: goto label_415980;
        case 0x415984u: goto label_415984;
        case 0x415988u: goto label_415988;
        case 0x41598cu: goto label_41598c;
        case 0x415990u: goto label_415990;
        case 0x415994u: goto label_415994;
        case 0x415998u: goto label_415998;
        case 0x41599cu: goto label_41599c;
        case 0x4159a0u: goto label_4159a0;
        case 0x4159a4u: goto label_4159a4;
        case 0x4159a8u: goto label_4159a8;
        case 0x4159acu: goto label_4159ac;
        case 0x4159b0u: goto label_4159b0;
        case 0x4159b4u: goto label_4159b4;
        case 0x4159b8u: goto label_4159b8;
        case 0x4159bcu: goto label_4159bc;
        case 0x4159c0u: goto label_4159c0;
        case 0x4159c4u: goto label_4159c4;
        case 0x4159c8u: goto label_4159c8;
        case 0x4159ccu: goto label_4159cc;
        case 0x4159d0u: goto label_4159d0;
        case 0x4159d4u: goto label_4159d4;
        case 0x4159d8u: goto label_4159d8;
        case 0x4159dcu: goto label_4159dc;
        case 0x4159e0u: goto label_4159e0;
        case 0x4159e4u: goto label_4159e4;
        case 0x4159e8u: goto label_4159e8;
        case 0x4159ecu: goto label_4159ec;
        case 0x4159f0u: goto label_4159f0;
        case 0x4159f4u: goto label_4159f4;
        case 0x4159f8u: goto label_4159f8;
        case 0x4159fcu: goto label_4159fc;
        case 0x415a00u: goto label_415a00;
        case 0x415a04u: goto label_415a04;
        case 0x415a08u: goto label_415a08;
        case 0x415a0cu: goto label_415a0c;
        case 0x415a10u: goto label_415a10;
        case 0x415a14u: goto label_415a14;
        case 0x415a18u: goto label_415a18;
        case 0x415a1cu: goto label_415a1c;
        case 0x415a20u: goto label_415a20;
        case 0x415a24u: goto label_415a24;
        case 0x415a28u: goto label_415a28;
        case 0x415a2cu: goto label_415a2c;
        case 0x415a30u: goto label_415a30;
        case 0x415a34u: goto label_415a34;
        case 0x415a38u: goto label_415a38;
        case 0x415a3cu: goto label_415a3c;
        case 0x415a40u: goto label_415a40;
        case 0x415a44u: goto label_415a44;
        case 0x415a48u: goto label_415a48;
        case 0x415a4cu: goto label_415a4c;
        case 0x415a50u: goto label_415a50;
        case 0x415a54u: goto label_415a54;
        case 0x415a58u: goto label_415a58;
        case 0x415a5cu: goto label_415a5c;
        case 0x415a60u: goto label_415a60;
        case 0x415a64u: goto label_415a64;
        case 0x415a68u: goto label_415a68;
        case 0x415a6cu: goto label_415a6c;
        case 0x415a70u: goto label_415a70;
        case 0x415a74u: goto label_415a74;
        case 0x415a78u: goto label_415a78;
        case 0x415a7cu: goto label_415a7c;
        case 0x415a80u: goto label_415a80;
        case 0x415a84u: goto label_415a84;
        case 0x415a88u: goto label_415a88;
        case 0x415a8cu: goto label_415a8c;
        case 0x415a90u: goto label_415a90;
        case 0x415a94u: goto label_415a94;
        case 0x415a98u: goto label_415a98;
        case 0x415a9cu: goto label_415a9c;
        case 0x415aa0u: goto label_415aa0;
        case 0x415aa4u: goto label_415aa4;
        case 0x415aa8u: goto label_415aa8;
        case 0x415aacu: goto label_415aac;
        case 0x415ab0u: goto label_415ab0;
        case 0x415ab4u: goto label_415ab4;
        case 0x415ab8u: goto label_415ab8;
        case 0x415abcu: goto label_415abc;
        case 0x415ac0u: goto label_415ac0;
        case 0x415ac4u: goto label_415ac4;
        case 0x415ac8u: goto label_415ac8;
        case 0x415accu: goto label_415acc;
        case 0x415ad0u: goto label_415ad0;
        case 0x415ad4u: goto label_415ad4;
        case 0x415ad8u: goto label_415ad8;
        case 0x415adcu: goto label_415adc;
        case 0x415ae0u: goto label_415ae0;
        case 0x415ae4u: goto label_415ae4;
        case 0x415ae8u: goto label_415ae8;
        case 0x415aecu: goto label_415aec;
        case 0x415af0u: goto label_415af0;
        case 0x415af4u: goto label_415af4;
        case 0x415af8u: goto label_415af8;
        case 0x415afcu: goto label_415afc;
        case 0x415b00u: goto label_415b00;
        case 0x415b04u: goto label_415b04;
        case 0x415b08u: goto label_415b08;
        case 0x415b0cu: goto label_415b0c;
        case 0x415b10u: goto label_415b10;
        case 0x415b14u: goto label_415b14;
        case 0x415b18u: goto label_415b18;
        case 0x415b1cu: goto label_415b1c;
        case 0x415b20u: goto label_415b20;
        case 0x415b24u: goto label_415b24;
        case 0x415b28u: goto label_415b28;
        case 0x415b2cu: goto label_415b2c;
        case 0x415b30u: goto label_415b30;
        case 0x415b34u: goto label_415b34;
        case 0x415b38u: goto label_415b38;
        case 0x415b3cu: goto label_415b3c;
        case 0x415b40u: goto label_415b40;
        case 0x415b44u: goto label_415b44;
        case 0x415b48u: goto label_415b48;
        case 0x415b4cu: goto label_415b4c;
        case 0x415b50u: goto label_415b50;
        case 0x415b54u: goto label_415b54;
        case 0x415b58u: goto label_415b58;
        case 0x415b5cu: goto label_415b5c;
        case 0x415b60u: goto label_415b60;
        case 0x415b64u: goto label_415b64;
        case 0x415b68u: goto label_415b68;
        case 0x415b6cu: goto label_415b6c;
        case 0x415b70u: goto label_415b70;
        case 0x415b74u: goto label_415b74;
        case 0x415b78u: goto label_415b78;
        case 0x415b7cu: goto label_415b7c;
        case 0x415b80u: goto label_415b80;
        case 0x415b84u: goto label_415b84;
        case 0x415b88u: goto label_415b88;
        case 0x415b8cu: goto label_415b8c;
        case 0x415b90u: goto label_415b90;
        case 0x415b94u: goto label_415b94;
        case 0x415b98u: goto label_415b98;
        case 0x415b9cu: goto label_415b9c;
        case 0x415ba0u: goto label_415ba0;
        case 0x415ba4u: goto label_415ba4;
        case 0x415ba8u: goto label_415ba8;
        case 0x415bacu: goto label_415bac;
        case 0x415bb0u: goto label_415bb0;
        case 0x415bb4u: goto label_415bb4;
        case 0x415bb8u: goto label_415bb8;
        case 0x415bbcu: goto label_415bbc;
        case 0x415bc0u: goto label_415bc0;
        case 0x415bc4u: goto label_415bc4;
        case 0x415bc8u: goto label_415bc8;
        case 0x415bccu: goto label_415bcc;
        case 0x415bd0u: goto label_415bd0;
        case 0x415bd4u: goto label_415bd4;
        case 0x415bd8u: goto label_415bd8;
        case 0x415bdcu: goto label_415bdc;
        case 0x415be0u: goto label_415be0;
        case 0x415be4u: goto label_415be4;
        case 0x415be8u: goto label_415be8;
        case 0x415becu: goto label_415bec;
        case 0x415bf0u: goto label_415bf0;
        case 0x415bf4u: goto label_415bf4;
        case 0x415bf8u: goto label_415bf8;
        case 0x415bfcu: goto label_415bfc;
        default: break;
    }

    ctx->pc = 0x414f00u;

label_414f00:
    // 0x414f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x414f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_414f04:
    // 0x414f04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x414f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_414f08:
    // 0x414f08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x414f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_414f0c:
    // 0x414f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x414f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_414f10:
    // 0x414f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x414f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_414f14:
    // 0x414f14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x414f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414f18:
    // 0x414f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x414f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_414f1c:
    // 0x414f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_414f20:
    // 0x414f20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x414f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414f24:
    // 0x414f24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x414f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_414f28:
    // 0x414f28: 0xc10ca68  jal         func_4329A0
label_414f2c:
    if (ctx->pc == 0x414F2Cu) {
        ctx->pc = 0x414F2Cu;
            // 0x414f2c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x414F30u;
        goto label_414f30;
    }
    ctx->pc = 0x414F28u;
    SET_GPR_U32(ctx, 31, 0x414F30u);
    ctx->pc = 0x414F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414F28u;
            // 0x414f2c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414F30u; }
        if (ctx->pc != 0x414F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414F30u; }
        if (ctx->pc != 0x414F30u) { return; }
    }
    ctx->pc = 0x414F30u;
label_414f30:
    // 0x414f30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x414f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_414f34:
    // 0x414f34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x414f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_414f38:
    // 0x414f38: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x414f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_414f3c:
    // 0x414f3c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x414f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_414f40:
    // 0x414f40: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x414f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_414f44:
    // 0x414f44: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x414f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_414f48:
    // 0x414f48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x414f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_414f4c:
    // 0x414f4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x414f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_414f50:
    // 0x414f50: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x414f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_414f54:
    // 0x414f54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x414f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_414f58:
    // 0x414f58: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x414f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_414f5c:
    // 0x414f5c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x414f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_414f60:
    // 0x414f60: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x414f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_414f64:
    // 0x414f64: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x414f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_414f68:
    // 0x414f68: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x414f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_414f6c:
    // 0x414f6c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x414f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_414f70:
    // 0x414f70: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x414f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_414f74:
    // 0x414f74: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x414f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_414f78:
    // 0x414f78: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x414f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_414f7c:
    // 0x414f7c: 0xc0582cc  jal         func_160B30
label_414f80:
    if (ctx->pc == 0x414F80u) {
        ctx->pc = 0x414F80u;
            // 0x414f80: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x414F84u;
        goto label_414f84;
    }
    ctx->pc = 0x414F7Cu;
    SET_GPR_U32(ctx, 31, 0x414F84u);
    ctx->pc = 0x414F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414F7Cu;
            // 0x414f80: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414F84u; }
        if (ctx->pc != 0x414F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414F84u; }
        if (ctx->pc != 0x414F84u) { return; }
    }
    ctx->pc = 0x414F84u;
label_414f84:
    // 0x414f84: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_414f88:
    // 0x414f88: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x414f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_414f8c:
    // 0x414f8c: 0x2463b108  addiu       $v1, $v1, -0x4EF8
    ctx->pc = 0x414f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947080));
label_414f90:
    // 0x414f90: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x414f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_414f94:
    // 0x414f94: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x414f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_414f98:
    // 0x414f98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x414f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_414f9c:
    // 0x414f9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_414fa0:
    // 0x414fa0: 0xac443e90  sw          $a0, 0x3E90($v0)
    ctx->pc = 0x414fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16016), GPR_U32(ctx, 4));
label_414fa4:
    // 0x414fa4: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x414fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
label_414fa8:
    // 0x414fa8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_414fac:
    // 0x414fac: 0x2442b158  addiu       $v0, $v0, -0x4EA8
    ctx->pc = 0x414facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947160));
label_414fb0:
    // 0x414fb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x414fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_414fb4:
    // 0x414fb4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x414fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_414fb8:
    // 0x414fb8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x414fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_414fbc:
    // 0x414fbc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x414fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_414fc0:
    // 0x414fc0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x414fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_414fc4:
    // 0x414fc4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x414fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_414fc8:
    // 0x414fc8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x414fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_414fcc:
    // 0x414fcc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x414fccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_414fd0:
    // 0x414fd0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x414fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_414fd4:
    // 0x414fd4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x414fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_414fd8:
    // 0x414fd8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x414fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_414fdc:
    // 0x414fdc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x414fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_414fe0:
    // 0x414fe0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x414fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_414fe4:
    // 0x414fe4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_414fe8:
    if (ctx->pc == 0x414FE8u) {
        ctx->pc = 0x414FECu;
        goto label_414fec;
    }
    ctx->pc = 0x414FE4u;
    {
        const bool branch_taken_0x414fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x414fe4) {
            ctx->pc = 0x415080u;
            goto label_415080;
        }
    }
    ctx->pc = 0x414FECu;
label_414fec:
    // 0x414fec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x414fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_414ff0:
    // 0x414ff0: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x414ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_414ff4:
    // 0x414ff4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x414ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_414ff8:
    // 0x414ff8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x414ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_414ffc:
    // 0x414ffc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x414ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_415000:
    // 0x415000: 0xc040138  jal         func_1004E0
label_415004:
    if (ctx->pc == 0x415004u) {
        ctx->pc = 0x415004u;
            // 0x415004: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x415008u;
        goto label_415008;
    }
    ctx->pc = 0x415000u;
    SET_GPR_U32(ctx, 31, 0x415008u);
    ctx->pc = 0x415004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415000u;
            // 0x415004: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415008u; }
        if (ctx->pc != 0x415008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415008u; }
        if (ctx->pc != 0x415008u) { return; }
    }
    ctx->pc = 0x415008u;
label_415008:
    // 0x415008: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x415008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_41500c:
    // 0x41500c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x41500cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_415010:
    // 0x415010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x415010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415014:
    // 0x415014: 0x24a55940  addiu       $a1, $a1, 0x5940
    ctx->pc = 0x415014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22848));
label_415018:
    // 0x415018: 0x24c64710  addiu       $a2, $a2, 0x4710
    ctx->pc = 0x415018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18192));
label_41501c:
    // 0x41501c: 0x240702d0  addiu       $a3, $zero, 0x2D0
    ctx->pc = 0x41501cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_415020:
    // 0x415020: 0xc040840  jal         func_102100
label_415024:
    if (ctx->pc == 0x415024u) {
        ctx->pc = 0x415024u;
            // 0x415024: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415028u;
        goto label_415028;
    }
    ctx->pc = 0x415020u;
    SET_GPR_U32(ctx, 31, 0x415028u);
    ctx->pc = 0x415024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415020u;
            // 0x415024: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415028u; }
        if (ctx->pc != 0x415028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415028u; }
        if (ctx->pc != 0x415028u) { return; }
    }
    ctx->pc = 0x415028u;
label_415028:
    // 0x415028: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x415028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_41502c:
    // 0x41502c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41502cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415030:
    // 0x415030: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x415030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_415034:
    // 0x415034: 0xc0788fc  jal         func_1E23F0
label_415038:
    if (ctx->pc == 0x415038u) {
        ctx->pc = 0x415038u;
            // 0x415038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41503Cu;
        goto label_41503c;
    }
    ctx->pc = 0x415034u;
    SET_GPR_U32(ctx, 31, 0x41503Cu);
    ctx->pc = 0x415038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415034u;
            // 0x415038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41503Cu; }
        if (ctx->pc != 0x41503Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41503Cu; }
        if (ctx->pc != 0x41503Cu) { return; }
    }
    ctx->pc = 0x41503Cu;
label_41503c:
    // 0x41503c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x41503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_415040:
    // 0x415040: 0xc0788fc  jal         func_1E23F0
label_415044:
    if (ctx->pc == 0x415044u) {
        ctx->pc = 0x415044u;
            // 0x415044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415048u;
        goto label_415048;
    }
    ctx->pc = 0x415040u;
    SET_GPR_U32(ctx, 31, 0x415048u);
    ctx->pc = 0x415044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415040u;
            // 0x415044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415048u; }
        if (ctx->pc != 0x415048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415048u; }
        if (ctx->pc != 0x415048u) { return; }
    }
    ctx->pc = 0x415048u;
label_415048:
    // 0x415048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x415048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41504c:
    // 0x41504c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x41504cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_415050:
    // 0x415050: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x415050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_415054:
    // 0x415054: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x415054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_415058:
    // 0x415058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x415058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41505c:
    // 0x41505c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x41505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_415060:
    // 0x415060: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x415060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_415064:
    // 0x415064: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x415064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_415068:
    // 0x415068: 0xc0a997c  jal         func_2A65F0
label_41506c:
    if (ctx->pc == 0x41506Cu) {
        ctx->pc = 0x41506Cu;
            // 0x41506c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x415070u;
        goto label_415070;
    }
    ctx->pc = 0x415068u;
    SET_GPR_U32(ctx, 31, 0x415070u);
    ctx->pc = 0x41506Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415068u;
            // 0x41506c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415070u; }
        if (ctx->pc != 0x415070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415070u; }
        if (ctx->pc != 0x415070u) { return; }
    }
    ctx->pc = 0x415070u;
label_415070:
    // 0x415070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x415070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_415074:
    // 0x415074: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x415074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_415078:
    // 0x415078: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_41507c:
    if (ctx->pc == 0x41507Cu) {
        ctx->pc = 0x41507Cu;
            // 0x41507c: 0x265202d0  addiu       $s2, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x415080u;
        goto label_415080;
    }
    ctx->pc = 0x415078u;
    {
        const bool branch_taken_0x415078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415078u;
            // 0x41507c: 0x265202d0  addiu       $s2, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415078) {
            ctx->pc = 0x41504Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41504c;
        }
    }
    ctx->pc = 0x415080u;
label_415080:
    // 0x415080: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x415080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_415084:
    // 0x415084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x415084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_415088:
    // 0x415088: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x415088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41508c:
    // 0x41508c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41508cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415090:
    // 0x415090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415094:
    // 0x415094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415098:
    // 0x415098: 0x3e00008  jr          $ra
label_41509c:
    if (ctx->pc == 0x41509Cu) {
        ctx->pc = 0x41509Cu;
            // 0x41509c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4150A0u;
        goto label_4150a0;
    }
    ctx->pc = 0x415098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415098u;
            // 0x41509c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4150A0u;
label_4150a0:
    // 0x4150a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4150a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4150a4:
    // 0x4150a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4150a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4150a8:
    // 0x4150a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4150a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4150ac:
    // 0x4150ac: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x4150acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_4150b0:
    // 0x4150b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4150b4:
    if (ctx->pc == 0x4150B4u) {
        ctx->pc = 0x4150B4u;
            // 0x4150b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4150B8u;
        goto label_4150b8;
    }
    ctx->pc = 0x4150B0u;
    {
        const bool branch_taken_0x4150b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4150B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4150B0u;
            // 0x4150b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4150b0) {
            ctx->pc = 0x4150C0u;
            goto label_4150c0;
        }
    }
    ctx->pc = 0x4150B8u;
label_4150b8:
    // 0x4150b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4150bc:
    if (ctx->pc == 0x4150BCu) {
        ctx->pc = 0x4150C0u;
        goto label_4150c0;
    }
    ctx->pc = 0x4150B8u;
    {
        const bool branch_taken_0x4150b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4150b8) {
            ctx->pc = 0x4150E0u;
            goto label_4150e0;
        }
    }
    ctx->pc = 0x4150C0u;
label_4150c0:
    // 0x4150c0: 0x260402bc  addiu       $a0, $s0, 0x2BC
    ctx->pc = 0x4150c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
label_4150c4:
    // 0x4150c4: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x4150c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_4150c8:
    // 0x4150c8: 0xc105700  jal         func_415C00
label_4150cc:
    if (ctx->pc == 0x4150CCu) {
        ctx->pc = 0x4150CCu;
            // 0x4150cc: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4150D0u;
        goto label_4150d0;
    }
    ctx->pc = 0x4150C8u;
    SET_GPR_U32(ctx, 31, 0x4150D0u);
    ctx->pc = 0x4150CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4150C8u;
            // 0x4150cc: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x415C00u;
    if (runtime->hasFunction(0x415C00u)) {
        auto targetFn = runtime->lookupFunction(0x415C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4150D0u; }
        if (ctx->pc != 0x4150D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00415C00_0x415c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4150D0u; }
        if (ctx->pc != 0x4150D0u) { return; }
    }
    ctx->pc = 0x4150D0u;
label_4150d0:
    // 0x4150d0: 0xc15a088  jal         func_568220
label_4150d4:
    if (ctx->pc == 0x4150D4u) {
        ctx->pc = 0x4150D4u;
            // 0x4150d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4150D8u;
        goto label_4150d8;
    }
    ctx->pc = 0x4150D0u;
    SET_GPR_U32(ctx, 31, 0x4150D8u);
    ctx->pc = 0x4150D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4150D0u;
            // 0x4150d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568220u;
    if (runtime->hasFunction(0x568220u)) {
        auto targetFn = runtime->lookupFunction(0x568220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4150D8u; }
        if (ctx->pc != 0x4150D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568220_0x568220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4150D8u; }
        if (ctx->pc != 0x4150D8u) { return; }
    }
    ctx->pc = 0x4150D8u;
label_4150d8:
    // 0x4150d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4150dc:
    if (ctx->pc == 0x4150DCu) {
        ctx->pc = 0x4150DCu;
            // 0x4150dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4150E0u;
        goto label_4150e0;
    }
    ctx->pc = 0x4150D8u;
    {
        const bool branch_taken_0x4150d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4150DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4150D8u;
            // 0x4150dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4150d8) {
            ctx->pc = 0x4150ECu;
            goto label_4150ec;
        }
    }
    ctx->pc = 0x4150E0u;
label_4150e0:
    // 0x4150e0: 0xc15a088  jal         func_568220
label_4150e4:
    if (ctx->pc == 0x4150E4u) {
        ctx->pc = 0x4150E8u;
        goto label_4150e8;
    }
    ctx->pc = 0x4150E0u;
    SET_GPR_U32(ctx, 31, 0x4150E8u);
    ctx->pc = 0x568220u;
    if (runtime->hasFunction(0x568220u)) {
        auto targetFn = runtime->lookupFunction(0x568220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4150E8u; }
        if (ctx->pc != 0x4150E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568220_0x568220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4150E8u; }
        if (ctx->pc != 0x4150E8u) { return; }
    }
    ctx->pc = 0x4150E8u;
label_4150e8:
    // 0x4150e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4150e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4150ec:
    // 0x4150ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4150ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4150f0:
    // 0x4150f0: 0x3e00008  jr          $ra
label_4150f4:
    if (ctx->pc == 0x4150F4u) {
        ctx->pc = 0x4150F4u;
            // 0x4150f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4150F8u;
        goto label_4150f8;
    }
    ctx->pc = 0x4150F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4150F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4150F0u;
            // 0x4150f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4150F8u;
label_4150f8:
    // 0x4150f8: 0x0  nop
    ctx->pc = 0x4150f8u;
    // NOP
label_4150fc:
    // 0x4150fc: 0x0  nop
    ctx->pc = 0x4150fcu;
    // NOP
label_415100:
    // 0x415100: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x415100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_415104:
    // 0x415104: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x415104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_415108:
    // 0x415108: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x415108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_41510c:
    // 0x41510c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_415110:
    // 0x415110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x415110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_415114:
    // 0x415114: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x415114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_415118:
    // 0x415118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x415118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41511c:
    // 0x41511c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41511cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415120:
    // 0x415120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_415124:
    // 0x415124: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x415124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_415128:
    // 0x415128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41512c:
    // 0x41512c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x41512cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_415130:
    // 0x415130: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x415130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_415134:
    // 0x415134: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x415134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_415138:
    // 0x415138: 0x1064009b  beq         $v1, $a0, . + 4 + (0x9B << 2)
label_41513c:
    if (ctx->pc == 0x41513Cu) {
        ctx->pc = 0x41513Cu;
            // 0x41513c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415140u;
        goto label_415140;
    }
    ctx->pc = 0x415138u;
    {
        const bool branch_taken_0x415138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x41513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415138u;
            // 0x41513c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415138) {
            ctx->pc = 0x4153A8u;
            goto label_4153a8;
        }
    }
    ctx->pc = 0x415140u;
label_415140:
    // 0x415140: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x415140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_415144:
    // 0x415144: 0x50640099  beql        $v1, $a0, . + 4 + (0x99 << 2)
label_415148:
    if (ctx->pc == 0x415148u) {
        ctx->pc = 0x415148u;
            // 0x415148: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x41514Cu;
        goto label_41514c;
    }
    ctx->pc = 0x415144u;
    {
        const bool branch_taken_0x415144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x415144) {
            ctx->pc = 0x415148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415144u;
            // 0x415148: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4153ACu;
            goto label_4153ac;
        }
    }
    ctx->pc = 0x41514Cu;
label_41514c:
    // 0x41514c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415150:
    // 0x415150: 0xc04f278  jal         func_13C9E0
label_415154:
    if (ctx->pc == 0x415154u) {
        ctx->pc = 0x415154u;
            // 0x415154: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x415158u;
        goto label_415158;
    }
    ctx->pc = 0x415150u;
    SET_GPR_U32(ctx, 31, 0x415158u);
    ctx->pc = 0x415154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415150u;
            // 0x415154: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415158u; }
        if (ctx->pc != 0x415158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415158u; }
        if (ctx->pc != 0x415158u) { return; }
    }
    ctx->pc = 0x415158u;
label_415158:
    // 0x415158: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x415158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_41515c:
    // 0x41515c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x41515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_415160:
    // 0x415160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415164:
    // 0x415164: 0xc04cca0  jal         func_133280
label_415168:
    if (ctx->pc == 0x415168u) {
        ctx->pc = 0x415168u;
            // 0x415168: 0x24c6c3e0  addiu       $a2, $a2, -0x3C20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951904));
        ctx->pc = 0x41516Cu;
        goto label_41516c;
    }
    ctx->pc = 0x415164u;
    SET_GPR_U32(ctx, 31, 0x41516Cu);
    ctx->pc = 0x415168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415164u;
            // 0x415168: 0x24c6c3e0  addiu       $a2, $a2, -0x3C20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41516Cu; }
        if (ctx->pc != 0x41516Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41516Cu; }
        if (ctx->pc != 0x41516Cu) { return; }
    }
    ctx->pc = 0x41516Cu;
label_41516c:
    // 0x41516c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x41516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_415170:
    // 0x415170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x415170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415174:
    // 0x415174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x415174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_415178:
    // 0x415178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41517c:
    // 0x41517c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41517cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_415180:
    // 0x415180: 0xc04ce50  jal         func_133940
label_415184:
    if (ctx->pc == 0x415184u) {
        ctx->pc = 0x415184u;
            // 0x415184: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x415188u;
        goto label_415188;
    }
    ctx->pc = 0x415180u;
    SET_GPR_U32(ctx, 31, 0x415188u);
    ctx->pc = 0x415184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415180u;
            // 0x415184: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415188u; }
        if (ctx->pc != 0x415188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415188u; }
        if (ctx->pc != 0x415188u) { return; }
    }
    ctx->pc = 0x415188u;
label_415188:
    // 0x415188: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x415188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_41518c:
    // 0x41518c: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x41518cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_415190:
    // 0x415190: 0xc04cbe0  jal         func_132F80
label_415194:
    if (ctx->pc == 0x415194u) {
        ctx->pc = 0x415194u;
            // 0x415194: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415198u;
        goto label_415198;
    }
    ctx->pc = 0x415190u;
    SET_GPR_U32(ctx, 31, 0x415198u);
    ctx->pc = 0x415194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415190u;
            // 0x415194: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415198u; }
        if (ctx->pc != 0x415198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415198u; }
        if (ctx->pc != 0x415198u) { return; }
    }
    ctx->pc = 0x415198u;
label_415198:
    // 0x415198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x415198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41519c:
    // 0x41519c: 0xc04ce80  jal         func_133A00
label_4151a0:
    if (ctx->pc == 0x4151A0u) {
        ctx->pc = 0x4151A0u;
            // 0x4151a0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4151A4u;
        goto label_4151a4;
    }
    ctx->pc = 0x41519Cu;
    SET_GPR_U32(ctx, 31, 0x4151A4u);
    ctx->pc = 0x4151A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41519Cu;
            // 0x4151a0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151A4u; }
        if (ctx->pc != 0x4151A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151A4u; }
        if (ctx->pc != 0x4151A4u) { return; }
    }
    ctx->pc = 0x4151A4u;
label_4151a4:
    // 0x4151a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4151a8:
    // 0x4151a8: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x4151a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4151ac:
    // 0x4151ac: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4151acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4151b0:
    // 0x4151b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4151b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4151b4:
    // 0x4151b4: 0xc07698c  jal         func_1DA630
label_4151b8:
    if (ctx->pc == 0x4151B8u) {
        ctx->pc = 0x4151B8u;
            // 0x4151b8: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x4151BCu;
        goto label_4151bc;
    }
    ctx->pc = 0x4151B4u;
    SET_GPR_U32(ctx, 31, 0x4151BCu);
    ctx->pc = 0x4151B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4151B4u;
            // 0x4151b8: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151BCu; }
        if (ctx->pc != 0x4151BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151BCu; }
        if (ctx->pc != 0x4151BCu) { return; }
    }
    ctx->pc = 0x4151BCu;
label_4151bc:
    // 0x4151bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4151bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4151c0:
    // 0x4151c0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4151c4:
    if (ctx->pc == 0x4151C4u) {
        ctx->pc = 0x4151C8u;
        goto label_4151c8;
    }
    ctx->pc = 0x4151C0u;
    {
        const bool branch_taken_0x4151c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4151c0) {
            ctx->pc = 0x4151D0u;
            goto label_4151d0;
        }
    }
    ctx->pc = 0x4151C8u;
label_4151c8:
    // 0x4151c8: 0x10000035  b           . + 4 + (0x35 << 2)
label_4151cc:
    if (ctx->pc == 0x4151CCu) {
        ctx->pc = 0x4151CCu;
            // 0x4151cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4151D0u;
        goto label_4151d0;
    }
    ctx->pc = 0x4151C8u;
    {
        const bool branch_taken_0x4151c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4151CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4151C8u;
            // 0x4151cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4151c8) {
            ctx->pc = 0x4152A0u;
            goto label_4152a0;
        }
    }
    ctx->pc = 0x4151D0u;
label_4151d0:
    // 0x4151d0: 0xc0576f4  jal         func_15DBD0
label_4151d4:
    if (ctx->pc == 0x4151D4u) {
        ctx->pc = 0x4151D8u;
        goto label_4151d8;
    }
    ctx->pc = 0x4151D0u;
    SET_GPR_U32(ctx, 31, 0x4151D8u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151D8u; }
        if (ctx->pc != 0x4151D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151D8u; }
        if (ctx->pc != 0x4151D8u) { return; }
    }
    ctx->pc = 0x4151D8u;
label_4151d8:
    // 0x4151d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4151d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4151dc:
    // 0x4151dc: 0xc076984  jal         func_1DA610
label_4151e0:
    if (ctx->pc == 0x4151E0u) {
        ctx->pc = 0x4151E0u;
            // 0x4151e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4151E4u;
        goto label_4151e4;
    }
    ctx->pc = 0x4151DCu;
    SET_GPR_U32(ctx, 31, 0x4151E4u);
    ctx->pc = 0x4151E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4151DCu;
            // 0x4151e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151E4u; }
        if (ctx->pc != 0x4151E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4151E4u; }
        if (ctx->pc != 0x4151E4u) { return; }
    }
    ctx->pc = 0x4151E4u;
label_4151e4:
    // 0x4151e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4151e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4151e8:
    // 0x4151e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4151e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4151ec:
    // 0x4151ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4151ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4151f0:
    // 0x4151f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4151f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4151f4:
    // 0x4151f4: 0xc442fd80  lwc1        $f2, -0x280($v0)
    ctx->pc = 0x4151f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4151f8:
    // 0x4151f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4151f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4151fc:
    // 0x4151fc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4151fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_415200:
    // 0x415200: 0xc441fd88  lwc1        $f1, -0x278($v0)
    ctx->pc = 0x415200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_415204:
    // 0x415204: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x415204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_415208:
    // 0x415208: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x415208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_41520c:
    // 0x41520c: 0xc440fd8c  lwc1        $f0, -0x274($v0)
    ctx->pc = 0x41520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415210:
    // 0x415210: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x415210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_415214:
    // 0x415214: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x415214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_415218:
    // 0x415218: 0x8c42fd84  lw          $v0, -0x27C($v0)
    ctx->pc = 0x415218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966660)));
label_41521c:
    // 0x41521c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x41521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_415220:
    // 0x415220: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x415220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_415224:
    // 0x415224: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x415224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415228:
    // 0x415228: 0xc04cca0  jal         func_133280
label_41522c:
    if (ctx->pc == 0x41522Cu) {
        ctx->pc = 0x41522Cu;
            // 0x41522c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x415230u;
        goto label_415230;
    }
    ctx->pc = 0x415228u;
    SET_GPR_U32(ctx, 31, 0x415230u);
    ctx->pc = 0x41522Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415228u;
            // 0x41522c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415230u; }
        if (ctx->pc != 0x415230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415230u; }
        if (ctx->pc != 0x415230u) { return; }
    }
    ctx->pc = 0x415230u;
label_415230:
    // 0x415230: 0xc076980  jal         func_1DA600
label_415234:
    if (ctx->pc == 0x415234u) {
        ctx->pc = 0x415234u;
            // 0x415234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415238u;
        goto label_415238;
    }
    ctx->pc = 0x415230u;
    SET_GPR_U32(ctx, 31, 0x415238u);
    ctx->pc = 0x415234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415230u;
            // 0x415234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415238u; }
        if (ctx->pc != 0x415238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415238u; }
        if (ctx->pc != 0x415238u) { return; }
    }
    ctx->pc = 0x415238u;
label_415238:
    // 0x415238: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x415238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_41523c:
    // 0x41523c: 0xc04cc34  jal         func_1330D0
label_415240:
    if (ctx->pc == 0x415240u) {
        ctx->pc = 0x415240u;
            // 0x415240: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415244u;
        goto label_415244;
    }
    ctx->pc = 0x41523Cu;
    SET_GPR_U32(ctx, 31, 0x415244u);
    ctx->pc = 0x415240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41523Cu;
            // 0x415240: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415244u; }
        if (ctx->pc != 0x415244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415244u; }
        if (ctx->pc != 0x415244u) { return; }
    }
    ctx->pc = 0x415244u;
label_415244:
    // 0x415244: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x415244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_415248:
    // 0x415248: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x415248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_41524c:
    // 0x41524c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x41524cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_415250:
    // 0x415250: 0x0  nop
    ctx->pc = 0x415250u;
    // NOP
label_415254:
    // 0x415254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x415254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_415258:
    // 0x415258: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_41525c:
    if (ctx->pc == 0x41525Cu) {
        ctx->pc = 0x41525Cu;
            // 0x41525c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415260u;
        goto label_415260;
    }
    ctx->pc = 0x415258u;
    {
        const bool branch_taken_0x415258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x415258) {
            ctx->pc = 0x41525Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415258u;
            // 0x41525c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415268u;
            goto label_415268;
        }
    }
    ctx->pc = 0x415260u;
label_415260:
    // 0x415260: 0x1000000f  b           . + 4 + (0xF << 2)
label_415264:
    if (ctx->pc == 0x415264u) {
        ctx->pc = 0x415264u;
            // 0x415264: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x415268u;
        goto label_415268;
    }
    ctx->pc = 0x415260u;
    {
        const bool branch_taken_0x415260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415260u;
            // 0x415264: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415260) {
            ctx->pc = 0x4152A0u;
            goto label_4152a0;
        }
    }
    ctx->pc = 0x415268u;
label_415268:
    // 0x415268: 0xc07697c  jal         func_1DA5F0
label_41526c:
    if (ctx->pc == 0x41526Cu) {
        ctx->pc = 0x415270u;
        goto label_415270;
    }
    ctx->pc = 0x415268u;
    SET_GPR_U32(ctx, 31, 0x415270u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415270u; }
        if (ctx->pc != 0x415270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415270u; }
        if (ctx->pc != 0x415270u) { return; }
    }
    ctx->pc = 0x415270u;
label_415270:
    // 0x415270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x415270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415274:
    // 0x415274: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x415274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_415278:
    // 0x415278: 0xc04cd60  jal         func_133580
label_41527c:
    if (ctx->pc == 0x41527Cu) {
        ctx->pc = 0x41527Cu;
            // 0x41527c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415280u;
        goto label_415280;
    }
    ctx->pc = 0x415278u;
    SET_GPR_U32(ctx, 31, 0x415280u);
    ctx->pc = 0x41527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415278u;
            // 0x41527c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415280u; }
        if (ctx->pc != 0x415280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415280u; }
        if (ctx->pc != 0x415280u) { return; }
    }
    ctx->pc = 0x415280u;
label_415280:
    // 0x415280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x415280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_415284:
    // 0x415284: 0xc04c650  jal         func_131940
label_415288:
    if (ctx->pc == 0x415288u) {
        ctx->pc = 0x415288u;
            // 0x415288: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41528Cu;
        goto label_41528c;
    }
    ctx->pc = 0x415284u;
    SET_GPR_U32(ctx, 31, 0x41528Cu);
    ctx->pc = 0x415288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415284u;
            // 0x415288: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41528Cu; }
        if (ctx->pc != 0x41528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41528Cu; }
        if (ctx->pc != 0x41528Cu) { return; }
    }
    ctx->pc = 0x41528Cu;
label_41528c:
    // 0x41528c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x41528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_415290:
    // 0x415290: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x415290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_415294:
    // 0x415294: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x415294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_415298:
    // 0x415298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x415298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41529c:
    // 0x41529c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x41529cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4152a0:
    // 0x4152a0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4152a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4152a4:
    // 0x4152a4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_4152a8:
    if (ctx->pc == 0x4152A8u) {
        ctx->pc = 0x4152A8u;
            // 0x4152a8: 0xae630074  sw          $v1, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 3));
        ctx->pc = 0x4152ACu;
        goto label_4152ac;
    }
    ctx->pc = 0x4152A4u;
    {
        const bool branch_taken_0x4152a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4152A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4152A4u;
            // 0x4152a8: 0xae630074  sw          $v1, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4152a4) {
            ctx->pc = 0x4153A8u;
            goto label_4153a8;
        }
    }
    ctx->pc = 0x4152ACu;
label_4152ac:
    // 0x4152ac: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x4152acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_4152b0:
    // 0x4152b0: 0x26640270  addiu       $a0, $s3, 0x270
    ctx->pc = 0x4152b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 624));
label_4152b4:
    // 0x4152b4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x4152b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4152b8:
    // 0x4152b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4152b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4152bc:
    // 0x4152bc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4152bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4152c0:
    // 0x4152c0: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x4152c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_4152c4:
    // 0x4152c4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x4152c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_4152c8:
    // 0x4152c8: 0x8e6302b4  lw          $v1, 0x2B4($s3)
    ctx->pc = 0x4152c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 692)));
label_4152cc:
    // 0x4152cc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4152ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4152d0:
    // 0x4152d0: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x4152d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_4152d4:
    // 0x4152d4: 0xc04cce8  jal         func_1333A0
label_4152d8:
    if (ctx->pc == 0x4152D8u) {
        ctx->pc = 0x4152D8u;
            // 0x4152d8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4152DCu;
        goto label_4152dc;
    }
    ctx->pc = 0x4152D4u;
    SET_GPR_U32(ctx, 31, 0x4152DCu);
    ctx->pc = 0x4152D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4152D4u;
            // 0x4152d8: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4152DCu; }
        if (ctx->pc != 0x4152DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4152DCu; }
        if (ctx->pc != 0x4152DCu) { return; }
    }
    ctx->pc = 0x4152DCu;
label_4152dc:
    // 0x4152dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4152dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4152e0:
    // 0x4152e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4152e4:
    // 0x4152e4: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4152e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4152e8:
    // 0x4152e8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4152e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4152ec:
    // 0x4152ec: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4152ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4152f0:
    // 0x4152f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4152f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4152f4:
    // 0x4152f4: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4152f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4152f8:
    // 0x4152f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4152f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4152fc:
    // 0x4152fc: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4152fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_415300:
    // 0x415300: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x415300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_415304:
    // 0x415304: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x415304u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_415308:
    // 0x415308: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x415308u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_41530c:
    // 0x41530c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41530cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_415310:
    // 0x415310: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x415310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_415314:
    // 0x415314: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415318:
    // 0x415318: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x415318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_41531c:
    // 0x41531c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x41531cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_415320:
    // 0x415320: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x415320u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_415324:
    // 0x415324: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x415324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_415328:
    // 0x415328: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x415328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_41532c:
    // 0x41532c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415330:
    // 0x415330: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x415330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_415334:
    // 0x415334: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x415334u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_415338:
    // 0x415338: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x415338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41533c:
    // 0x41533c: 0x109a021  addu        $s4, $t0, $t1
    ctx->pc = 0x41533cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_415340:
    // 0x415340: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_415344:
    // 0x415344: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x415344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_415348:
    // 0x415348: 0xad140000  sw          $s4, 0x0($t0)
    ctx->pc = 0x415348u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
label_41534c:
    // 0x41534c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x41534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_415350:
    // 0x415350: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x415350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_415354:
    // 0x415354: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x415354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_415358:
    // 0x415358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x415358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_41535c:
    // 0x41535c: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x41535cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_415360:
    // 0x415360: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x415360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_415364:
    // 0x415364: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x415364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_415368:
    // 0x415368: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x415368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_41536c:
    // 0x41536c: 0xc04e4a4  jal         func_139290
label_415370:
    if (ctx->pc == 0x415370u) {
        ctx->pc = 0x415370u;
            // 0x415370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415374u;
        goto label_415374;
    }
    ctx->pc = 0x41536Cu;
    SET_GPR_U32(ctx, 31, 0x415374u);
    ctx->pc = 0x415370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41536Cu;
            // 0x415370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415374u; }
        if (ctx->pc != 0x415374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415374u; }
        if (ctx->pc != 0x415374u) { return; }
    }
    ctx->pc = 0x415374u;
label_415374:
    // 0x415374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x415374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415378:
    // 0x415378: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x415378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41537c:
    // 0x41537c: 0xc04cd60  jal         func_133580
label_415380:
    if (ctx->pc == 0x415380u) {
        ctx->pc = 0x415380u;
            // 0x415380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415384u;
        goto label_415384;
    }
    ctx->pc = 0x41537Cu;
    SET_GPR_U32(ctx, 31, 0x415384u);
    ctx->pc = 0x415380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41537Cu;
            // 0x415380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415384u; }
        if (ctx->pc != 0x415384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415384u; }
        if (ctx->pc != 0x415384u) { return; }
    }
    ctx->pc = 0x415384u;
label_415384:
    // 0x415384: 0x8e790030  lw          $t9, 0x30($s3)
    ctx->pc = 0x415384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_415388:
    // 0x415388: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x415388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_41538c:
    // 0x41538c: 0x320f809  jalr        $t9
label_415390:
    if (ctx->pc == 0x415390u) {
        ctx->pc = 0x415390u;
            // 0x415390: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x415394u;
        goto label_415394;
    }
    ctx->pc = 0x41538Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415394u);
        ctx->pc = 0x415390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41538Cu;
            // 0x415390: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x415394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415394u; }
            if (ctx->pc != 0x415394u) { return; }
        }
        }
    }
    ctx->pc = 0x415394u;
label_415394:
    // 0x415394: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x415394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_415398:
    // 0x415398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x415398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41539c:
    // 0x41539c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41539cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4153a0:
    // 0x4153a0: 0xc054fd4  jal         func_153F50
label_4153a4:
    if (ctx->pc == 0x4153A4u) {
        ctx->pc = 0x4153A4u;
            // 0x4153a4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4153A8u;
        goto label_4153a8;
    }
    ctx->pc = 0x4153A0u;
    SET_GPR_U32(ctx, 31, 0x4153A8u);
    ctx->pc = 0x4153A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4153A0u;
            // 0x4153a4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4153A8u; }
        if (ctx->pc != 0x4153A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4153A8u; }
        if (ctx->pc != 0x4153A8u) { return; }
    }
    ctx->pc = 0x4153A8u;
label_4153a8:
    // 0x4153a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4153a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4153ac:
    // 0x4153ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4153acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4153b0:
    // 0x4153b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4153b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4153b4:
    // 0x4153b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4153b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4153b8:
    // 0x4153b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4153b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4153bc:
    // 0x4153bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4153bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4153c0:
    // 0x4153c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4153c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4153c4:
    // 0x4153c4: 0x3e00008  jr          $ra
label_4153c8:
    if (ctx->pc == 0x4153C8u) {
        ctx->pc = 0x4153C8u;
            // 0x4153c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4153CCu;
        goto label_4153cc;
    }
    ctx->pc = 0x4153C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4153C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4153C4u;
            // 0x4153c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4153CCu;
label_4153cc:
    // 0x4153cc: 0x0  nop
    ctx->pc = 0x4153ccu;
    // NOP
label_4153d0:
    // 0x4153d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4153d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4153d4:
    // 0x4153d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4153d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4153d8:
    // 0x4153d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4153d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4153dc:
    // 0x4153dc: 0xc15a21c  jal         func_568870
label_4153e0:
    if (ctx->pc == 0x4153E0u) {
        ctx->pc = 0x4153E0u;
            // 0x4153e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4153E4u;
        goto label_4153e4;
    }
    ctx->pc = 0x4153DCu;
    SET_GPR_U32(ctx, 31, 0x4153E4u);
    ctx->pc = 0x4153E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4153DCu;
            // 0x4153e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568870u;
    if (runtime->hasFunction(0x568870u)) {
        auto targetFn = runtime->lookupFunction(0x568870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4153E4u; }
        if (ctx->pc != 0x4153E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568870_0x568870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4153E4u; }
        if (ctx->pc != 0x4153E4u) { return; }
    }
    ctx->pc = 0x4153E4u;
label_4153e4:
    // 0x4153e4: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x4153e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_4153e8:
    // 0x4153e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4153ec:
    if (ctx->pc == 0x4153ECu) {
        ctx->pc = 0x4153ECu;
            // 0x4153ec: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x4153F0u;
        goto label_4153f0;
    }
    ctx->pc = 0x4153E8u;
    {
        const bool branch_taken_0x4153e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4153e8) {
            ctx->pc = 0x4153ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4153E8u;
            // 0x4153ec: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415404u;
            goto label_415404;
        }
    }
    ctx->pc = 0x4153F0u;
label_4153f0:
    // 0x4153f0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4153f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4153f4:
    // 0x4153f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4153f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4153f8:
    // 0x4153f8: 0x320f809  jalr        $t9
label_4153fc:
    if (ctx->pc == 0x4153FCu) {
        ctx->pc = 0x4153FCu;
            // 0x4153fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x415400u;
        goto label_415400;
    }
    ctx->pc = 0x4153F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415400u);
        ctx->pc = 0x4153FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4153F8u;
            // 0x4153fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x415400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415400u; }
            if (ctx->pc != 0x415400u) { return; }
        }
        }
    }
    ctx->pc = 0x415400u;
label_415400:
    // 0x415400: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x415400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_415404:
    // 0x415404: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x415404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_415408:
    // 0x415408: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41540c:
    if (ctx->pc == 0x41540Cu) {
        ctx->pc = 0x41540Cu;
            // 0x41540c: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x415410u;
        goto label_415410;
    }
    ctx->pc = 0x415408u;
    {
        const bool branch_taken_0x415408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x415408) {
            ctx->pc = 0x41540Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415408u;
            // 0x41540c: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415424u;
            goto label_415424;
        }
    }
    ctx->pc = 0x415410u;
label_415410:
    // 0x415410: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x415410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_415414:
    // 0x415414: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x415414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_415418:
    // 0x415418: 0x320f809  jalr        $t9
label_41541c:
    if (ctx->pc == 0x41541Cu) {
        ctx->pc = 0x41541Cu;
            // 0x41541c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x415420u;
        goto label_415420;
    }
    ctx->pc = 0x415418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415420u);
        ctx->pc = 0x41541Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415418u;
            // 0x41541c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x415420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415420u; }
            if (ctx->pc != 0x415420u) { return; }
        }
        }
    }
    ctx->pc = 0x415420u;
label_415420:
    // 0x415420: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x415420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_415424:
    // 0x415424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x415424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_415428:
    // 0x415428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41542c:
    // 0x41542c: 0x3e00008  jr          $ra
label_415430:
    if (ctx->pc == 0x415430u) {
        ctx->pc = 0x415430u;
            // 0x415430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x415434u;
        goto label_415434;
    }
    ctx->pc = 0x41542Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41542Cu;
            // 0x415430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415434u;
label_415434:
    // 0x415434: 0x0  nop
    ctx->pc = 0x415434u;
    // NOP
label_415438:
    // 0x415438: 0x0  nop
    ctx->pc = 0x415438u;
    // NOP
label_41543c:
    // 0x41543c: 0x0  nop
    ctx->pc = 0x41543cu;
    // NOP
label_415440:
    // 0x415440: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x415440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_415444:
    // 0x415444: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x415444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_415448:
    // 0x415448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x415448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41544c:
    // 0x41544c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_415450:
    // 0x415450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x415450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_415454:
    // 0x415454: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x415454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415458:
    // 0x415458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41545c:
    // 0x41545c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_415460:
    // 0x415460: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x415460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_415464:
    // 0x415464: 0xc0892d0  jal         func_224B40
label_415468:
    if (ctx->pc == 0x415468u) {
        ctx->pc = 0x415468u;
            // 0x415468: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x41546Cu;
        goto label_41546c;
    }
    ctx->pc = 0x415464u;
    SET_GPR_U32(ctx, 31, 0x41546Cu);
    ctx->pc = 0x415468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415464u;
            // 0x415468: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41546Cu; }
        if (ctx->pc != 0x41546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41546Cu; }
        if (ctx->pc != 0x41546Cu) { return; }
    }
    ctx->pc = 0x41546Cu;
label_41546c:
    // 0x41546c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_415470:
    // 0x415470: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x415470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_415474:
    // 0x415474: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x415474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_415478:
    // 0x415478: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x415478u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_41547c:
    // 0x41547c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x41547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_415480:
    // 0x415480: 0xc0b6e68  jal         func_2DB9A0
label_415484:
    if (ctx->pc == 0x415484u) {
        ctx->pc = 0x415484u;
            // 0x415484: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x415488u;
        goto label_415488;
    }
    ctx->pc = 0x415480u;
    SET_GPR_U32(ctx, 31, 0x415488u);
    ctx->pc = 0x415484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415480u;
            // 0x415484: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415488u; }
        if (ctx->pc != 0x415488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415488u; }
        if (ctx->pc != 0x415488u) { return; }
    }
    ctx->pc = 0x415488u;
label_415488:
    // 0x415488: 0xc0b6dac  jal         func_2DB6B0
label_41548c:
    if (ctx->pc == 0x41548Cu) {
        ctx->pc = 0x41548Cu;
            // 0x41548c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x415490u;
        goto label_415490;
    }
    ctx->pc = 0x415488u;
    SET_GPR_U32(ctx, 31, 0x415490u);
    ctx->pc = 0x41548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415488u;
            // 0x41548c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415490u; }
        if (ctx->pc != 0x415490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415490u; }
        if (ctx->pc != 0x415490u) { return; }
    }
    ctx->pc = 0x415490u;
label_415490:
    // 0x415490: 0xc0cac94  jal         func_32B250
label_415494:
    if (ctx->pc == 0x415494u) {
        ctx->pc = 0x415494u;
            // 0x415494: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x415498u;
        goto label_415498;
    }
    ctx->pc = 0x415490u;
    SET_GPR_U32(ctx, 31, 0x415498u);
    ctx->pc = 0x415494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415490u;
            // 0x415494: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415498u; }
        if (ctx->pc != 0x415498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415498u; }
        if (ctx->pc != 0x415498u) { return; }
    }
    ctx->pc = 0x415498u;
label_415498:
    // 0x415498: 0xc0cac84  jal         func_32B210
label_41549c:
    if (ctx->pc == 0x41549Cu) {
        ctx->pc = 0x41549Cu;
            // 0x41549c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4154A0u;
        goto label_4154a0;
    }
    ctx->pc = 0x415498u;
    SET_GPR_U32(ctx, 31, 0x4154A0u);
    ctx->pc = 0x41549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415498u;
            // 0x41549c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4154A0u; }
        if (ctx->pc != 0x4154A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4154A0u; }
        if (ctx->pc != 0x4154A0u) { return; }
    }
    ctx->pc = 0x4154A0u;
label_4154a0:
    // 0x4154a0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4154a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4154a4:
    // 0x4154a4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4154a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4154a8:
    // 0x4154a8: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x4154a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4154ac:
    // 0x4154ac: 0xc0a5a68  jal         func_2969A0
label_4154b0:
    if (ctx->pc == 0x4154B0u) {
        ctx->pc = 0x4154B0u;
            // 0x4154b0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4154B4u;
        goto label_4154b4;
    }
    ctx->pc = 0x4154ACu;
    SET_GPR_U32(ctx, 31, 0x4154B4u);
    ctx->pc = 0x4154B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4154ACu;
            // 0x4154b0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4154B4u; }
        if (ctx->pc != 0x4154B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4154B4u; }
        if (ctx->pc != 0x4154B4u) { return; }
    }
    ctx->pc = 0x4154B4u;
label_4154b4:
    // 0x4154b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4154b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4154b8:
    // 0x4154b8: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x4154b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_4154bc:
    // 0x4154bc: 0x8c433e90  lw          $v1, 0x3E90($v0)
    ctx->pc = 0x4154bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_4154c0:
    // 0x4154c0: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x4154c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4154c4:
    // 0x4154c4: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x4154c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4154c8:
    // 0x4154c8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4154c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4154cc:
    // 0x4154cc: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x4154ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4154d0:
    // 0x4154d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4154d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4154d4:
    // 0x4154d4: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x4154d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4154d8:
    // 0x4154d8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x4154d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_4154dc:
    // 0x4154dc: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x4154dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4154e0:
    // 0x4154e0: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4154e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4154e4:
    // 0x4154e4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4154e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4154e8:
    // 0x4154e8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4154e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4154ec:
    // 0x4154ec: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x4154ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
label_4154f0:
    // 0x4154f0: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x4154f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_4154f4:
    // 0x4154f4: 0xc66a0048  lwc1        $f10, 0x48($s3)
    ctx->pc = 0x4154f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_4154f8:
    // 0x4154f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4154f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4154fc:
    // 0x4154fc: 0xc6690044  lwc1        $f9, 0x44($s3)
    ctx->pc = 0x4154fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_415500:
    // 0x415500: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x415500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_415504:
    // 0x415504: 0xc6680040  lwc1        $f8, 0x40($s3)
    ctx->pc = 0x415504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_415508:
    // 0x415508: 0xc7a700a0  lwc1        $f7, 0xA0($sp)
    ctx->pc = 0x415508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_41550c:
    // 0x41550c: 0xc7a600a4  lwc1        $f6, 0xA4($sp)
    ctx->pc = 0x41550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_415510:
    // 0x415510: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x415510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_415514:
    // 0x415514: 0xafaa0178  sw          $t2, 0x178($sp)
    ctx->pc = 0x415514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 10));
label_415518:
    // 0x415518: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x415518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_41551c:
    // 0x41551c: 0xa3a90180  sb          $t1, 0x180($sp)
    ctx->pc = 0x41551cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 9));
label_415520:
    // 0x415520: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x415520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_415524:
    // 0x415524: 0xafa8017c  sw          $t0, 0x17C($sp)
    ctx->pc = 0x415524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 8));
label_415528:
    // 0x415528: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x415528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41552c:
    // 0x41552c: 0xa3a70182  sb          $a3, 0x182($sp)
    ctx->pc = 0x41552cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 7));
label_415530:
    // 0x415530: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x415530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_415534:
    // 0x415534: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x415534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_415538:
    // 0x415538: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x415538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41553c:
    // 0x41553c: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x41553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_415540:
    // 0x415540: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x415540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_415544:
    // 0x415544: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x415544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_415548:
    // 0x415548: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x415548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_41554c:
    // 0x41554c: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x41554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_415550:
    // 0x415550: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x415550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_415554:
    // 0x415554: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x415554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415558:
    // 0x415558: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x415558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_41555c:
    // 0x41555c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x41555cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_415560:
    // 0x415560: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x415560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_415564:
    // 0x415564: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x415564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_415568:
    // 0x415568: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x415568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_41556c:
    // 0x41556c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x41556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_415570:
    // 0x415570: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x415570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_415574:
    // 0x415574: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x415574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_415578:
    // 0x415578: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x415578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41557c:
    // 0x41557c: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x41557cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_415580:
    // 0x415580: 0xe7a900e4  swc1        $f9, 0xE4($sp)
    ctx->pc = 0x415580u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_415584:
    // 0x415584: 0xe7aa00e8  swc1        $f10, 0xE8($sp)
    ctx->pc = 0x415584u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_415588:
    // 0x415588: 0xe7a70120  swc1        $f7, 0x120($sp)
    ctx->pc = 0x415588u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_41558c:
    // 0x41558c: 0xe7a60124  swc1        $f6, 0x124($sp)
    ctx->pc = 0x41558cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_415590:
    // 0x415590: 0xe7a50128  swc1        $f5, 0x128($sp)
    ctx->pc = 0x415590u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_415594:
    // 0x415594: 0xe7a4012c  swc1        $f4, 0x12C($sp)
    ctx->pc = 0x415594u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_415598:
    // 0x415598: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x415598u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_41559c:
    // 0x41559c: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x41559cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_4155a0:
    // 0x4155a0: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x4155a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_4155a4:
    // 0x4155a4: 0xc0a7a88  jal         func_29EA20
label_4155a8:
    if (ctx->pc == 0x4155A8u) {
        ctx->pc = 0x4155A8u;
            // 0x4155a8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x4155ACu;
        goto label_4155ac;
    }
    ctx->pc = 0x4155A4u;
    SET_GPR_U32(ctx, 31, 0x4155ACu);
    ctx->pc = 0x4155A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4155A4u;
            // 0x4155a8: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4155ACu; }
        if (ctx->pc != 0x4155ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4155ACu; }
        if (ctx->pc != 0x4155ACu) { return; }
    }
    ctx->pc = 0x4155ACu;
label_4155ac:
    // 0x4155ac: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4155acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4155b0:
    // 0x4155b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4155b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4155b4:
    // 0x4155b4: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_4155b8:
    if (ctx->pc == 0x4155B8u) {
        ctx->pc = 0x4155B8u;
            // 0x4155b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4155BCu;
        goto label_4155bc;
    }
    ctx->pc = 0x4155B4u;
    {
        const bool branch_taken_0x4155b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4155B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4155B4u;
            // 0x4155b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4155b4) {
            ctx->pc = 0x415610u;
            goto label_415610;
        }
    }
    ctx->pc = 0x4155BCu;
label_4155bc:
    // 0x4155bc: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_4155c0:
    if (ctx->pc == 0x4155C0u) {
        ctx->pc = 0x4155C0u;
            // 0x4155c0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4155C4u;
        goto label_4155c4;
    }
    ctx->pc = 0x4155BCu;
    {
        const bool branch_taken_0x4155bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4155C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4155BCu;
            // 0x4155c0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4155bc) {
            ctx->pc = 0x4155C8u;
            goto label_4155c8;
        }
    }
    ctx->pc = 0x4155C4u;
label_4155c4:
    // 0x4155c4: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x4155c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_4155c8:
    // 0x4155c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4155c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4155cc:
    // 0x4155cc: 0xc088ef4  jal         func_223BD0
label_4155d0:
    if (ctx->pc == 0x4155D0u) {
        ctx->pc = 0x4155D0u;
            // 0x4155d0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4155D4u;
        goto label_4155d4;
    }
    ctx->pc = 0x4155CCu;
    SET_GPR_U32(ctx, 31, 0x4155D4u);
    ctx->pc = 0x4155D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4155CCu;
            // 0x4155d0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4155D4u; }
        if (ctx->pc != 0x4155D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4155D4u; }
        if (ctx->pc != 0x4155D4u) { return; }
    }
    ctx->pc = 0x4155D4u;
label_4155d4:
    // 0x4155d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4155d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4155d8:
    // 0x4155d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4155d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4155dc:
    // 0x4155dc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4155dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4155e0:
    // 0x4155e0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4155e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4155e4:
    // 0x4155e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4155e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4155e8:
    // 0x4155e8: 0xae400200  sw          $zero, 0x200($s2)
    ctx->pc = 0x4155e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
label_4155ec:
    // 0x4155ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4155ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4155f0:
    // 0x4155f0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4155f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4155f4:
    // 0x4155f4: 0xae400210  sw          $zero, 0x210($s2)
    ctx->pc = 0x4155f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 0));
label_4155f8:
    // 0x4155f8: 0xae400214  sw          $zero, 0x214($s2)
    ctx->pc = 0x4155f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
label_4155fc:
    // 0x4155fc: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x4155fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_415600:
    // 0x415600: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x415600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_415604:
    // 0x415604: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x415604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_415608:
    // 0x415608: 0xc088b38  jal         func_222CE0
label_41560c:
    if (ctx->pc == 0x41560Cu) {
        ctx->pc = 0x41560Cu;
            // 0x41560c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415610u;
        goto label_415610;
    }
    ctx->pc = 0x415608u;
    SET_GPR_U32(ctx, 31, 0x415610u);
    ctx->pc = 0x41560Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415608u;
            // 0x41560c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415610u; }
        if (ctx->pc != 0x415610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415610u; }
        if (ctx->pc != 0x415610u) { return; }
    }
    ctx->pc = 0x415610u;
label_415610:
    // 0x415610: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x415610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_415614:
    // 0x415614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x415614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_415618:
    // 0x415618: 0x244221a0  addiu       $v0, $v0, 0x21A0
    ctx->pc = 0x415618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8608));
label_41561c:
    // 0x41561c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x41561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_415620:
    // 0x415620: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x415620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_415624:
    // 0x415624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x415624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_415628:
    // 0x415628: 0xc08914c  jal         func_224530
label_41562c:
    if (ctx->pc == 0x41562Cu) {
        ctx->pc = 0x41562Cu;
            // 0x41562c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415630u;
        goto label_415630;
    }
    ctx->pc = 0x415628u;
    SET_GPR_U32(ctx, 31, 0x415630u);
    ctx->pc = 0x41562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415628u;
            // 0x41562c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415630u; }
        if (ctx->pc != 0x415630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415630u; }
        if (ctx->pc != 0x415630u) { return; }
    }
    ctx->pc = 0x415630u;
label_415630:
    // 0x415630: 0xc6620048  lwc1        $f2, 0x48($s3)
    ctx->pc = 0x415630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_415634:
    // 0x415634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x415634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_415638:
    // 0x415638: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x415638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41563c:
    // 0x41563c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x41563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_415640:
    // 0x415640: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x415640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415644:
    // 0x415644: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x415644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_415648:
    // 0x415648: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x415648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_41564c:
    // 0x41564c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x41564cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_415650:
    // 0x415650: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x415650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_415654:
    // 0x415654: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x415654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_415658:
    // 0x415658: 0xc663005c  lwc1        $f3, 0x5C($s3)
    ctx->pc = 0x415658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41565c:
    // 0x41565c: 0xc6620058  lwc1        $f2, 0x58($s3)
    ctx->pc = 0x41565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_415660:
    // 0x415660: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x415660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_415664:
    // 0x415664: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x415664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_415668:
    // 0x415668: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x415668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_41566c:
    // 0x41566c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x41566cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_415670:
    // 0x415670: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x415670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_415674:
    // 0x415674: 0xc0892b0  jal         func_224AC0
label_415678:
    if (ctx->pc == 0x415678u) {
        ctx->pc = 0x415678u;
            // 0x415678: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x41567Cu;
        goto label_41567c;
    }
    ctx->pc = 0x415674u;
    SET_GPR_U32(ctx, 31, 0x41567Cu);
    ctx->pc = 0x415678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415674u;
            // 0x415678: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41567Cu; }
        if (ctx->pc != 0x41567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41567Cu; }
        if (ctx->pc != 0x41567Cu) { return; }
    }
    ctx->pc = 0x41567Cu;
label_41567c:
    // 0x41567c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41567cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_415680:
    // 0x415680: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x415680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_415684:
    // 0x415684: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x415684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_415688:
    // 0x415688: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x415688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_41568c:
    // 0x41568c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x41568cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_415690:
    // 0x415690: 0xc0891d8  jal         func_224760
label_415694:
    if (ctx->pc == 0x415694u) {
        ctx->pc = 0x415694u;
            // 0x415694: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x415698u;
        goto label_415698;
    }
    ctx->pc = 0x415690u;
    SET_GPR_U32(ctx, 31, 0x415698u);
    ctx->pc = 0x415694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415690u;
            // 0x415694: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415698u; }
        if (ctx->pc != 0x415698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415698u; }
        if (ctx->pc != 0x415698u) { return; }
    }
    ctx->pc = 0x415698u;
label_415698:
    // 0x415698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41569c:
    // 0x41569c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41569cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4156a0:
    // 0x4156a0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4156a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4156a4:
    // 0x4156a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4156a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4156a8:
    // 0x4156a8: 0xc08c164  jal         func_230590
label_4156ac:
    if (ctx->pc == 0x4156ACu) {
        ctx->pc = 0x4156ACu;
            // 0x4156ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4156B0u;
        goto label_4156b0;
    }
    ctx->pc = 0x4156A8u;
    SET_GPR_U32(ctx, 31, 0x4156B0u);
    ctx->pc = 0x4156ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4156A8u;
            // 0x4156ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4156B0u; }
        if (ctx->pc != 0x4156B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4156B0u; }
        if (ctx->pc != 0x4156B0u) { return; }
    }
    ctx->pc = 0x4156B0u;
label_4156b0:
    // 0x4156b0: 0xae720080  sw          $s2, 0x80($s3)
    ctx->pc = 0x4156b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 18));
label_4156b4:
    // 0x4156b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4156b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4156b8:
    // 0x4156b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4156b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4156bc:
    // 0x4156bc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4156bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4156c0:
    // 0x4156c0: 0xc0a7a88  jal         func_29EA20
label_4156c4:
    if (ctx->pc == 0x4156C4u) {
        ctx->pc = 0x4156C4u;
            // 0x4156c4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4156C8u;
        goto label_4156c8;
    }
    ctx->pc = 0x4156C0u;
    SET_GPR_U32(ctx, 31, 0x4156C8u);
    ctx->pc = 0x4156C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4156C0u;
            // 0x4156c4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4156C8u; }
        if (ctx->pc != 0x4156C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4156C8u; }
        if (ctx->pc != 0x4156C8u) { return; }
    }
    ctx->pc = 0x4156C8u;
label_4156c8:
    // 0x4156c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4156c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4156cc:
    // 0x4156cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4156ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4156d0:
    // 0x4156d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4156d4:
    if (ctx->pc == 0x4156D4u) {
        ctx->pc = 0x4156D4u;
            // 0x4156d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4156D8u;
        goto label_4156d8;
    }
    ctx->pc = 0x4156D0u;
    {
        const bool branch_taken_0x4156d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4156D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4156D0u;
            // 0x4156d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4156d0) {
            ctx->pc = 0x4156F4u;
            goto label_4156f4;
        }
    }
    ctx->pc = 0x4156D8u;
label_4156d8:
    // 0x4156d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4156d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4156dc:
    // 0x4156dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4156dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4156e0:
    // 0x4156e0: 0xc0869d0  jal         func_21A740
label_4156e4:
    if (ctx->pc == 0x4156E4u) {
        ctx->pc = 0x4156E4u;
            // 0x4156e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4156E8u;
        goto label_4156e8;
    }
    ctx->pc = 0x4156E0u;
    SET_GPR_U32(ctx, 31, 0x4156E8u);
    ctx->pc = 0x4156E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4156E0u;
            // 0x4156e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4156E8u; }
        if (ctx->pc != 0x4156E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4156E8u; }
        if (ctx->pc != 0x4156E8u) { return; }
    }
    ctx->pc = 0x4156E8u;
label_4156e8:
    // 0x4156e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4156e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4156ec:
    // 0x4156ec: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4156ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4156f0:
    // 0x4156f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4156f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4156f4:
    // 0x4156f4: 0xae510210  sw          $s1, 0x210($s2)
    ctx->pc = 0x4156f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 17));
label_4156f8:
    // 0x4156f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4156fc:
    // 0x4156fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4156fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_415700:
    // 0x415700: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x415700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_415704:
    // 0x415704: 0xc08c650  jal         func_231940
label_415708:
    if (ctx->pc == 0x415708u) {
        ctx->pc = 0x415708u;
            // 0x415708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41570Cu;
        goto label_41570c;
    }
    ctx->pc = 0x415704u;
    SET_GPR_U32(ctx, 31, 0x41570Cu);
    ctx->pc = 0x415708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415704u;
            // 0x415708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41570Cu; }
        if (ctx->pc != 0x41570Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41570Cu; }
        if (ctx->pc != 0x41570Cu) { return; }
    }
    ctx->pc = 0x41570Cu;
label_41570c:
    // 0x41570c: 0x92030ce4  lbu         $v1, 0xCE4($s0)
    ctx->pc = 0x41570cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3300)));
label_415710:
    // 0x415710: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x415710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_415714:
    // 0x415714: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
label_415718:
    if (ctx->pc == 0x415718u) {
        ctx->pc = 0x415718u;
            // 0x415718: 0xc6600040  lwc1        $f0, 0x40($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x41571Cu;
        goto label_41571c;
    }
    ctx->pc = 0x415714u;
    {
        const bool branch_taken_0x415714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x415714) {
            ctx->pc = 0x415718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415714u;
            // 0x415718: 0xc6600040  lwc1        $f0, 0x40($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x41578Cu;
            goto label_41578c;
        }
    }
    ctx->pc = 0x41571Cu;
label_41571c:
    // 0x41571c: 0xc040180  jal         func_100600
label_415720:
    if (ctx->pc == 0x415720u) {
        ctx->pc = 0x415720u;
            // 0x415720: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x415724u;
        goto label_415724;
    }
    ctx->pc = 0x41571Cu;
    SET_GPR_U32(ctx, 31, 0x415724u);
    ctx->pc = 0x415720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41571Cu;
            // 0x415720: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415724u; }
        if (ctx->pc != 0x415724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415724u; }
        if (ctx->pc != 0x415724u) { return; }
    }
    ctx->pc = 0x415724u;
label_415724:
    // 0x415724: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_415728:
    if (ctx->pc == 0x415728u) {
        ctx->pc = 0x415728u;
            // 0x415728: 0xae6200d0  sw          $v0, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x41572Cu;
        goto label_41572c;
    }
    ctx->pc = 0x415724u;
    {
        const bool branch_taken_0x415724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x415724) {
            ctx->pc = 0x415728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415724u;
            // 0x415728: 0xae6200d0  sw          $v0, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415774u;
            goto label_415774;
        }
    }
    ctx->pc = 0x41572Cu;
label_41572c:
    // 0x41572c: 0x8e660080  lw          $a2, 0x80($s3)
    ctx->pc = 0x41572cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_415730:
    // 0x415730: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x415730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_415734:
    // 0x415734: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x415734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_415738:
    // 0x415738: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x415738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_41573c:
    // 0x41573c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x41573cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_415740:
    // 0x415740: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x415740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_415744:
    // 0x415744: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x415744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_415748:
    // 0x415748: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x415748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_41574c:
    // 0x41574c: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x41574cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_415750:
    // 0x415750: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x415750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_415754:
    // 0x415754: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x415754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_415758:
    // 0x415758: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x415758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_41575c:
    // 0x41575c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x41575cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_415760:
    // 0x415760: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x415760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_415764:
    // 0x415764: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x415764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_415768:
    // 0x415768: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x415768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_41576c:
    // 0x41576c: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x41576cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_415770:
    // 0x415770: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x415770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
label_415774:
    // 0x415774: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x415774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_415778:
    // 0x415778: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x415778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_41577c:
    // 0x41577c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x41577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_415780:
    // 0x415780: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x415780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_415784:
    // 0x415784: 0xae6200e0  sw          $v0, 0xE0($s3)
    ctx->pc = 0x415784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 2));
label_415788:
    // 0x415788: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x415788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41578c:
    // 0x41578c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41578cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_415790:
    // 0x415790: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x415790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_415794:
    // 0x415794: 0x266402bc  addiu       $a0, $s3, 0x2BC
    ctx->pc = 0x415794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 700));
label_415798:
    // 0x415798: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x415798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_41579c:
    // 0x41579c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x41579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_4157a0:
    // 0x4157a0: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x4157a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4157a4:
    // 0x4157a4: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x4157a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_4157a8:
    // 0x4157a8: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x4157a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4157ac:
    // 0x4157ac: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x4157acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_4157b0:
    // 0x4157b0: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x4157b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4157b4:
    // 0x4157b4: 0xc0d37ec  jal         func_34DFB0
label_4157b8:
    if (ctx->pc == 0x4157B8u) {
        ctx->pc = 0x4157B8u;
            // 0x4157b8: 0x26660050  addiu       $a2, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x4157BCu;
        goto label_4157bc;
    }
    ctx->pc = 0x4157B4u;
    SET_GPR_U32(ctx, 31, 0x4157BCu);
    ctx->pc = 0x4157B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4157B4u;
            // 0x4157b8: 0x26660050  addiu       $a2, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4157BCu; }
        if (ctx->pc != 0x4157BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4157BCu; }
        if (ctx->pc != 0x4157BCu) { return; }
    }
    ctx->pc = 0x4157BCu;
label_4157bc:
    // 0x4157bc: 0xae7302c4  sw          $s3, 0x2C4($s3)
    ctx->pc = 0x4157bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 19));
label_4157c0:
    // 0x4157c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4157c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4157c4:
    // 0x4157c4: 0xa2630094  sb          $v1, 0x94($s3)
    ctx->pc = 0x4157c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 3));
label_4157c8:
    // 0x4157c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4157c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4157cc:
    // 0x4157cc: 0xa2600095  sb          $zero, 0x95($s3)
    ctx->pc = 0x4157ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 0));
label_4157d0:
    // 0x4157d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4157d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4157d4:
    // 0x4157d4: 0xa2640096  sb          $a0, 0x96($s3)
    ctx->pc = 0x4157d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 150), (uint8_t)GPR_U32(ctx, 4));
label_4157d8:
    // 0x4157d8: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x4157d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_4157dc:
    // 0x4157dc: 0xa2630097  sb          $v1, 0x97($s3)
    ctx->pc = 0x4157dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 151), (uint8_t)GPR_U32(ctx, 3));
label_4157e0:
    // 0x4157e0: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x4157e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_4157e4:
    // 0x4157e4: 0xae6300bc  sw          $v1, 0xBC($s3)
    ctx->pc = 0x4157e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 3));
label_4157e8:
    // 0x4157e8: 0xae6500a0  sw          $a1, 0xA0($s3)
    ctx->pc = 0x4157e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 5));
label_4157ec:
    // 0x4157ec: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4157ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_4157f0:
    // 0x4157f0: 0xae6400a8  sw          $a0, 0xA8($s3)
    ctx->pc = 0x4157f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 4));
label_4157f4:
    // 0x4157f4: 0xae6300b0  sw          $v1, 0xB0($s3)
    ctx->pc = 0x4157f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
label_4157f8:
    // 0x4157f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4157f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4157fc:
    // 0x4157fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4157fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415800:
    // 0x415800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x415800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415804:
    // 0x415804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415808:
    // 0x415808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41580c:
    // 0x41580c: 0x3e00008  jr          $ra
label_415810:
    if (ctx->pc == 0x415810u) {
        ctx->pc = 0x415810u;
            // 0x415810: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x415814u;
        goto label_415814;
    }
    ctx->pc = 0x41580Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41580Cu;
            // 0x415810: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415814u;
label_415814:
    // 0x415814: 0x0  nop
    ctx->pc = 0x415814u;
    // NOP
label_415818:
    // 0x415818: 0x0  nop
    ctx->pc = 0x415818u;
    // NOP
label_41581c:
    // 0x41581c: 0x0  nop
    ctx->pc = 0x41581cu;
    // NOP
label_415820:
    // 0x415820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x415820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_415824:
    // 0x415824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x415824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_415828:
    // 0x415828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41582c:
    // 0x41582c: 0xc15a334  jal         func_568CD0
label_415830:
    if (ctx->pc == 0x415830u) {
        ctx->pc = 0x415830u;
            // 0x415830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415834u;
        goto label_415834;
    }
    ctx->pc = 0x41582Cu;
    SET_GPR_U32(ctx, 31, 0x415834u);
    ctx->pc = 0x415830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41582Cu;
            // 0x415830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568CD0u;
    if (runtime->hasFunction(0x568CD0u)) {
        auto targetFn = runtime->lookupFunction(0x568CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415834u; }
        if (ctx->pc != 0x415834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568CD0_0x568cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415834u; }
        if (ctx->pc != 0x415834u) { return; }
    }
    ctx->pc = 0x415834u;
label_415834:
    // 0x415834: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x415834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_415838:
    // 0x415838: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x415838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
label_41583c:
    // 0x41583c: 0xc04cce8  jal         func_1333A0
label_415840:
    if (ctx->pc == 0x415840u) {
        ctx->pc = 0x415840u;
            // 0x415840: 0x24a5c410  addiu       $a1, $a1, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
        ctx->pc = 0x415844u;
        goto label_415844;
    }
    ctx->pc = 0x41583Cu;
    SET_GPR_U32(ctx, 31, 0x415844u);
    ctx->pc = 0x415840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41583Cu;
            // 0x415840: 0x24a5c410  addiu       $a1, $a1, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415844u; }
        if (ctx->pc != 0x415844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415844u; }
        if (ctx->pc != 0x415844u) { return; }
    }
    ctx->pc = 0x415844u;
label_415844:
    // 0x415844: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x415844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_415848:
    // 0x415848: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x415848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41584c:
    // 0x41584c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x41584cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_415850:
    // 0x415850: 0x320f809  jalr        $t9
label_415854:
    if (ctx->pc == 0x415854u) {
        ctx->pc = 0x415858u;
        goto label_415858;
    }
    ctx->pc = 0x415850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415858u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x415858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415858u; }
            if (ctx->pc != 0x415858u) { return; }
        }
        }
    }
    ctx->pc = 0x415858u;
label_415858:
    // 0x415858: 0x8e0402b4  lw          $a0, 0x2B4($s0)
    ctx->pc = 0x415858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_41585c:
    // 0x41585c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41585cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_415860:
    // 0x415860: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x415860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_415864:
    // 0x415864: 0x320f809  jalr        $t9
label_415868:
    if (ctx->pc == 0x415868u) {
        ctx->pc = 0x41586Cu;
        goto label_41586c;
    }
    ctx->pc = 0x415864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41586Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41586Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41586Cu; }
            if (ctx->pc != 0x41586Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41586Cu;
label_41586c:
    // 0x41586c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41586cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_415870:
    // 0x415870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415874:
    // 0x415874: 0x3e00008  jr          $ra
label_415878:
    if (ctx->pc == 0x415878u) {
        ctx->pc = 0x415878u;
            // 0x415878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41587Cu;
        goto label_41587c;
    }
    ctx->pc = 0x415874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415874u;
            // 0x415878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41587Cu;
label_41587c:
    // 0x41587c: 0x0  nop
    ctx->pc = 0x41587cu;
    // NOP
label_415880:
    // 0x415880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x415880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_415884:
    // 0x415884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x415884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_415888:
    // 0x415888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x415888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41588c:
    // 0x41588c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_415890:
    // 0x415890: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x415890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415894:
    // 0x415894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_415898:
    // 0x415898: 0xc15a3c8  jal         func_568F20
label_41589c:
    if (ctx->pc == 0x41589Cu) {
        ctx->pc = 0x41589Cu;
            // 0x41589c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4158A0u;
        goto label_4158a0;
    }
    ctx->pc = 0x415898u;
    SET_GPR_U32(ctx, 31, 0x4158A0u);
    ctx->pc = 0x41589Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415898u;
            // 0x41589c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568F20u;
    if (runtime->hasFunction(0x568F20u)) {
        auto targetFn = runtime->lookupFunction(0x568F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4158A0u; }
        if (ctx->pc != 0x4158A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568F20_0x568f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4158A0u; }
        if (ctx->pc != 0x4158A0u) { return; }
    }
    ctx->pc = 0x4158A0u;
label_4158a0:
    // 0x4158a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4158a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4158a4:
    // 0x4158a4: 0x26640270  addiu       $a0, $s3, 0x270
    ctx->pc = 0x4158a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 624));
label_4158a8:
    // 0x4158a8: 0xc04cce8  jal         func_1333A0
label_4158ac:
    if (ctx->pc == 0x4158ACu) {
        ctx->pc = 0x4158ACu;
            // 0x4158ac: 0x24a5c410  addiu       $a1, $a1, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
        ctx->pc = 0x4158B0u;
        goto label_4158b0;
    }
    ctx->pc = 0x4158A8u;
    SET_GPR_U32(ctx, 31, 0x4158B0u);
    ctx->pc = 0x4158ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4158A8u;
            // 0x4158ac: 0x24a5c410  addiu       $a1, $a1, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4158B0u; }
        if (ctx->pc != 0x4158B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4158B0u; }
        if (ctx->pc != 0x4158B0u) { return; }
    }
    ctx->pc = 0x4158B0u;
label_4158b0:
    // 0x4158b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4158b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4158b4:
    // 0x4158b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4158b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4158b8:
    // 0x4158b8: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x4158b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_4158bc:
    // 0x4158bc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x4158bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4158c0:
    // 0x4158c0: 0x8c500084  lw          $s0, 0x84($v0)
    ctx->pc = 0x4158c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_4158c4:
    // 0x4158c4: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x4158c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_4158c8:
    // 0x4158c8: 0x26630270  addiu       $v1, $s3, 0x270
    ctx->pc = 0x4158c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 624));
label_4158cc:
    // 0x4158cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4158ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4158d0:
    // 0x4158d0: 0xac900080  sw          $s0, 0x80($a0)
    ctx->pc = 0x4158d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 16));
label_4158d4:
    // 0x4158d4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x4158d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_4158d8:
    // 0x4158d8: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x4158d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_4158dc:
    // 0x4158dc: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x4158dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_4158e0:
    // 0x4158e0: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x4158e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_4158e4:
    // 0x4158e4: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x4158e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_4158e8:
    // 0x4158e8: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x4158e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_4158ec:
    // 0x4158ec: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x4158ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_4158f0:
    // 0x4158f0: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x4158f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_4158f4:
    // 0x4158f4: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x4158f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_4158f8:
    // 0x4158f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4158f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4158fc:
    // 0x4158fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4158fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_415900:
    // 0x415900: 0x320f809  jalr        $t9
label_415904:
    if (ctx->pc == 0x415904u) {
        ctx->pc = 0x415908u;
        goto label_415908;
    }
    ctx->pc = 0x415900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x415908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415908u; }
            if (ctx->pc != 0x415908u) { return; }
        }
        }
    }
    ctx->pc = 0x415908u;
label_415908:
    // 0x415908: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x415908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41590c:
    // 0x41590c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x41590cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_415910:
    // 0x415910: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_415914:
    if (ctx->pc == 0x415914u) {
        ctx->pc = 0x415914u;
            // 0x415914: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x415918u;
        goto label_415918;
    }
    ctx->pc = 0x415910u;
    {
        const bool branch_taken_0x415910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x415914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415910u;
            // 0x415914: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415910) {
            ctx->pc = 0x4158C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4158c4;
        }
    }
    ctx->pc = 0x415918u;
label_415918:
    // 0x415918: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x415918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41591c:
    // 0x41591c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41591cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415920:
    // 0x415920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x415920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415924:
    // 0x415924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415928:
    // 0x415928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41592c:
    // 0x41592c: 0x3e00008  jr          $ra
label_415930:
    if (ctx->pc == 0x415930u) {
        ctx->pc = 0x415930u;
            // 0x415930: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x415934u;
        goto label_415934;
    }
    ctx->pc = 0x41592Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41592Cu;
            // 0x415930: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415934u;
label_415934:
    // 0x415934: 0x0  nop
    ctx->pc = 0x415934u;
    // NOP
label_415938:
    // 0x415938: 0x0  nop
    ctx->pc = 0x415938u;
    // NOP
label_41593c:
    // 0x41593c: 0x0  nop
    ctx->pc = 0x41593cu;
    // NOP
label_415940:
    // 0x415940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x415940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_415944:
    // 0x415944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x415944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_415948:
    // 0x415948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x415948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41594c:
    // 0x41594c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_415950:
    // 0x415950: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x415950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415954:
    // 0x415954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x415954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_415958:
    // 0x415958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41595c:
    // 0x41595c: 0xc15a3e0  jal         func_568F80
label_415960:
    if (ctx->pc == 0x415960u) {
        ctx->pc = 0x415960u;
            // 0x415960: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x415964u;
        goto label_415964;
    }
    ctx->pc = 0x41595Cu;
    SET_GPR_U32(ctx, 31, 0x415964u);
    ctx->pc = 0x415960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41595Cu;
            // 0x415960: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568F80u;
    if (runtime->hasFunction(0x568F80u)) {
        auto targetFn = runtime->lookupFunction(0x568F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415964u; }
        if (ctx->pc != 0x415964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568F80_0x568f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415964u; }
        if (ctx->pc != 0x415964u) { return; }
    }
    ctx->pc = 0x415964u;
label_415964:
    // 0x415964: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x415964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_415968:
    // 0x415968: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x415968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41596c:
    // 0x41596c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x41596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
label_415970:
    // 0x415970: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x415970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_415974:
    // 0x415974: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x415974u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_415978:
    // 0x415978: 0x2463b1cc  addiu       $v1, $v1, -0x4E34
    ctx->pc = 0x415978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947276));
label_41597c:
    // 0x41597c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41597cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_415980:
    // 0x415980: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x415980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
label_415984:
    // 0x415984: 0x2442b20c  addiu       $v0, $v0, -0x4DF4
    ctx->pc = 0x415984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947340));
label_415988:
    // 0x415988: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x415988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41598c:
    // 0x41598c: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x41598cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
label_415990:
    // 0x415990: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x415990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
label_415994:
    // 0x415994: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x415994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_415998:
    // 0x415998: 0xae8302bc  sw          $v1, 0x2BC($s4)
    ctx->pc = 0x415998u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 700), GPR_U32(ctx, 3));
label_41599c:
    // 0x41599c: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x41599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4159a0:
    // 0x4159a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4159a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4159a4:
    // 0x4159a4: 0xae8202bc  sw          $v0, 0x2BC($s4)
    ctx->pc = 0x4159a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 700), GPR_U32(ctx, 2));
label_4159a8:
    // 0x4159a8: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x4159a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
label_4159ac:
    // 0x4159ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4159acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4159b0:
    // 0x4159b0: 0xae8302bc  sw          $v1, 0x2BC($s4)
    ctx->pc = 0x4159b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 700), GPR_U32(ctx, 3));
label_4159b4:
    // 0x4159b4: 0x2442b290  addiu       $v0, $v0, -0x4D70
    ctx->pc = 0x4159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
label_4159b8:
    // 0x4159b8: 0xae8002c0  sw          $zero, 0x2C0($s4)
    ctx->pc = 0x4159b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 704), GPR_U32(ctx, 0));
label_4159bc:
    // 0x4159bc: 0xae8202bc  sw          $v0, 0x2BC($s4)
    ctx->pc = 0x4159bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 700), GPR_U32(ctx, 2));
label_4159c0:
    // 0x4159c0: 0x26840270  addiu       $a0, $s4, 0x270
    ctx->pc = 0x4159c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 624));
label_4159c4:
    // 0x4159c4: 0x24a5c410  addiu       $a1, $a1, -0x3BF0
    ctx->pc = 0x4159c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
label_4159c8:
    // 0x4159c8: 0xc04cce8  jal         func_1333A0
label_4159cc:
    if (ctx->pc == 0x4159CCu) {
        ctx->pc = 0x4159CCu;
            // 0x4159cc: 0xae8002c4  sw          $zero, 0x2C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 708), GPR_U32(ctx, 0));
        ctx->pc = 0x4159D0u;
        goto label_4159d0;
    }
    ctx->pc = 0x4159C8u;
    SET_GPR_U32(ctx, 31, 0x4159D0u);
    ctx->pc = 0x4159CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4159C8u;
            // 0x4159cc: 0xae8002c4  sw          $zero, 0x2C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4159D0u; }
        if (ctx->pc != 0x4159D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4159D0u; }
        if (ctx->pc != 0x4159D0u) { return; }
    }
    ctx->pc = 0x4159D0u;
label_4159d0:
    // 0x4159d0: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x4159d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_4159d4:
    // 0x4159d4: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x4159d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_4159d8:
    // 0x4159d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4159d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4159dc:
    // 0x4159dc: 0x2652fcc0  addiu       $s2, $s2, -0x340
    ctx->pc = 0x4159dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966464));
label_4159e0:
    // 0x4159e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4159e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4159e4:
    // 0x4159e4: 0x2610fd40  addiu       $s0, $s0, -0x2C0
    ctx->pc = 0x4159e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966592));
label_4159e8:
    // 0x4159e8: 0xc040180  jal         func_100600
label_4159ec:
    if (ctx->pc == 0x4159ECu) {
        ctx->pc = 0x4159ECu;
            // 0x4159ec: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x4159F0u;
        goto label_4159f0;
    }
    ctx->pc = 0x4159E8u;
    SET_GPR_U32(ctx, 31, 0x4159F0u);
    ctx->pc = 0x4159ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4159E8u;
            // 0x4159ec: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4159F0u; }
        if (ctx->pc != 0x4159F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4159F0u; }
        if (ctx->pc != 0x4159F0u) { return; }
    }
    ctx->pc = 0x4159F0u;
label_4159f0:
    // 0x4159f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4159f4:
    if (ctx->pc == 0x4159F4u) {
        ctx->pc = 0x4159F8u;
        goto label_4159f8;
    }
    ctx->pc = 0x4159F0u;
    {
        const bool branch_taken_0x4159f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4159f0) {
            ctx->pc = 0x415A10u;
            goto label_415a10;
        }
    }
    ctx->pc = 0x4159F8u;
label_4159f8:
    // 0x4159f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4159f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4159fc:
    // 0x4159fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4159fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_415a00:
    // 0x415a00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x415a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_415a04:
    // 0x415a04: 0xc0c3f60  jal         func_30FD80
label_415a08:
    if (ctx->pc == 0x415A08u) {
        ctx->pc = 0x415A08u;
            // 0x415a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415A0Cu;
        goto label_415a0c;
    }
    ctx->pc = 0x415A04u;
    SET_GPR_U32(ctx, 31, 0x415A0Cu);
    ctx->pc = 0x415A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415A04u;
            // 0x415a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415A0Cu; }
        if (ctx->pc != 0x415A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415A0Cu; }
        if (ctx->pc != 0x415A0Cu) { return; }
    }
    ctx->pc = 0x415A0Cu;
label_415a0c:
    // 0x415a0c: 0x0  nop
    ctx->pc = 0x415a0cu;
    // NOP
label_415a10:
    // 0x415a10: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x415a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_415a14:
    // 0x415a14: 0xac6202b0  sw          $v0, 0x2B0($v1)
    ctx->pc = 0x415a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 2));
label_415a18:
    // 0x415a18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x415a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_415a1c:
    // 0x415a1c: 0xac5000d4  sw          $s0, 0xD4($v0)
    ctx->pc = 0x415a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 16));
label_415a20:
    // 0x415a20: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x415a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_415a24:
    // 0x415a24: 0x8c6402b0  lw          $a0, 0x2B0($v1)
    ctx->pc = 0x415a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 688)));
label_415a28:
    // 0x415a28: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x415a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_415a2c:
    // 0x415a2c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x415a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_415a30:
    // 0x415a30: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x415a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_415a34:
    // 0x415a34: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x415a34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_415a38:
    // 0x415a38: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x415a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_415a3c:
    // 0x415a3c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_415a40:
    if (ctx->pc == 0x415A40u) {
        ctx->pc = 0x415A40u;
            // 0x415a40: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x415A44u;
        goto label_415a44;
    }
    ctx->pc = 0x415A3Cu;
    {
        const bool branch_taken_0x415a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415A3Cu;
            // 0x415a40: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a3c) {
            ctx->pc = 0x4159E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4159e8;
        }
    }
    ctx->pc = 0x415A44u;
label_415a44:
    // 0x415a44: 0xa28002b8  sb          $zero, 0x2B8($s4)
    ctx->pc = 0x415a44u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 696), (uint8_t)GPR_U32(ctx, 0));
label_415a48:
    // 0x415a48: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x415a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_415a4c:
    // 0x415a4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x415a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_415a50:
    // 0x415a50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x415a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_415a54:
    // 0x415a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x415a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415a58:
    // 0x415a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x415a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415a5c:
    // 0x415a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415a60:
    // 0x415a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415a64:
    // 0x415a64: 0x3e00008  jr          $ra
label_415a68:
    if (ctx->pc == 0x415A68u) {
        ctx->pc = 0x415A68u;
            // 0x415a68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x415A6Cu;
        goto label_415a6c;
    }
    ctx->pc = 0x415A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415A64u;
            // 0x415a68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415A6Cu;
label_415a6c:
    // 0x415a6c: 0x0  nop
    ctx->pc = 0x415a6cu;
    // NOP
label_415a70:
    // 0x415a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_415a74:
    // 0x415a74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x415a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_415a78:
    // 0x415a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_415a7c:
    // 0x415a7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_415a80:
    // 0x415a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x415a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415a84:
    // 0x415a84: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_415a88:
    if (ctx->pc == 0x415A88u) {
        ctx->pc = 0x415A88u;
            // 0x415a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415A8Cu;
        goto label_415a8c;
    }
    ctx->pc = 0x415A84u;
    {
        const bool branch_taken_0x415a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415A84u;
            // 0x415a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a84) {
            ctx->pc = 0x415AE8u;
            goto label_415ae8;
        }
    }
    ctx->pc = 0x415A8Cu;
label_415a8c:
    // 0x415a8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x415a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_415a90:
    // 0x415a90: 0x2442b290  addiu       $v0, $v0, -0x4D70
    ctx->pc = 0x415a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
label_415a94:
    // 0x415a94: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_415a98:
    if (ctx->pc == 0x415A98u) {
        ctx->pc = 0x415A98u;
            // 0x415a98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x415A9Cu;
        goto label_415a9c;
    }
    ctx->pc = 0x415A94u;
    {
        const bool branch_taken_0x415a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415A94u;
            // 0x415a98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415a94) {
            ctx->pc = 0x415AD0u;
            goto label_415ad0;
        }
    }
    ctx->pc = 0x415A9Cu;
label_415a9c:
    // 0x415a9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x415a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_415aa0:
    // 0x415aa0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x415aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_415aa4:
    // 0x415aa4: 0xc0d37dc  jal         func_34DF70
label_415aa8:
    if (ctx->pc == 0x415AA8u) {
        ctx->pc = 0x415AA8u;
            // 0x415aa8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x415AACu;
        goto label_415aac;
    }
    ctx->pc = 0x415AA4u;
    SET_GPR_U32(ctx, 31, 0x415AACu);
    ctx->pc = 0x415AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415AA4u;
            // 0x415aa8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415AACu; }
        if (ctx->pc != 0x415AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415AACu; }
        if (ctx->pc != 0x415AACu) { return; }
    }
    ctx->pc = 0x415AACu;
label_415aac:
    // 0x415aac: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_415ab0:
    if (ctx->pc == 0x415AB0u) {
        ctx->pc = 0x415AB0u;
            // 0x415ab0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x415AB4u;
        goto label_415ab4;
    }
    ctx->pc = 0x415AACu;
    {
        const bool branch_taken_0x415aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x415aac) {
            ctx->pc = 0x415AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415AACu;
            // 0x415ab0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415AD4u;
            goto label_415ad4;
        }
    }
    ctx->pc = 0x415AB4u;
label_415ab4:
    // 0x415ab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x415ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_415ab8:
    // 0x415ab8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x415ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_415abc:
    // 0x415abc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_415ac0:
    if (ctx->pc == 0x415AC0u) {
        ctx->pc = 0x415AC0u;
            // 0x415ac0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x415AC4u;
        goto label_415ac4;
    }
    ctx->pc = 0x415ABCu;
    {
        const bool branch_taken_0x415abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415ABCu;
            // 0x415ac0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415abc) {
            ctx->pc = 0x415AD0u;
            goto label_415ad0;
        }
    }
    ctx->pc = 0x415AC4u;
label_415ac4:
    // 0x415ac4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x415ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_415ac8:
    // 0x415ac8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x415ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_415acc:
    // 0x415acc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x415accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_415ad0:
    // 0x415ad0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x415ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_415ad4:
    // 0x415ad4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x415ad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_415ad8:
    // 0x415ad8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_415adc:
    if (ctx->pc == 0x415ADCu) {
        ctx->pc = 0x415ADCu;
            // 0x415adc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415AE0u;
        goto label_415ae0;
    }
    ctx->pc = 0x415AD8u;
    {
        const bool branch_taken_0x415ad8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x415ad8) {
            ctx->pc = 0x415ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415AD8u;
            // 0x415adc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415AECu;
            goto label_415aec;
        }
    }
    ctx->pc = 0x415AE0u;
label_415ae0:
    // 0x415ae0: 0xc0400a8  jal         func_1002A0
label_415ae4:
    if (ctx->pc == 0x415AE4u) {
        ctx->pc = 0x415AE4u;
            // 0x415ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415AE8u;
        goto label_415ae8;
    }
    ctx->pc = 0x415AE0u;
    SET_GPR_U32(ctx, 31, 0x415AE8u);
    ctx->pc = 0x415AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415AE0u;
            // 0x415ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415AE8u; }
        if (ctx->pc != 0x415AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415AE8u; }
        if (ctx->pc != 0x415AE8u) { return; }
    }
    ctx->pc = 0x415AE8u;
label_415ae8:
    // 0x415ae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x415ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415aec:
    // 0x415aec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x415aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_415af0:
    // 0x415af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415af4:
    // 0x415af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415af8:
    // 0x415af8: 0x3e00008  jr          $ra
label_415afc:
    if (ctx->pc == 0x415AFCu) {
        ctx->pc = 0x415AFCu;
            // 0x415afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x415B00u;
        goto label_415b00;
    }
    ctx->pc = 0x415AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415AF8u;
            // 0x415afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415B00u;
label_415b00:
    // 0x415b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x415b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_415b04:
    // 0x415b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x415b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_415b08:
    // 0x415b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x415b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_415b0c:
    // 0x415b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x415b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_415b10:
    // 0x415b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415b14:
    // 0x415b14: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_415b18:
    if (ctx->pc == 0x415B18u) {
        ctx->pc = 0x415B18u;
            // 0x415b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415B1Cu;
        goto label_415b1c;
    }
    ctx->pc = 0x415B14u;
    {
        const bool branch_taken_0x415b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x415B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415B14u;
            // 0x415b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415b14) {
            ctx->pc = 0x415BD4u;
            goto label_415bd4;
        }
    }
    ctx->pc = 0x415B1Cu;
label_415b1c:
    // 0x415b1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x415b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_415b20:
    // 0x415b20: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x415b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_415b24:
    // 0x415b24: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x415b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
label_415b28:
    // 0x415b28: 0x246381bc  addiu       $v1, $v1, -0x7E44
    ctx->pc = 0x415b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934972));
label_415b2c:
    // 0x415b2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x415b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_415b30:
    // 0x415b30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x415b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_415b34:
    // 0x415b34: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x415b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_415b38:
    // 0x415b38: 0x244281fc  addiu       $v0, $v0, -0x7E04
    ctx->pc = 0x415b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935036));
label_415b3c:
    // 0x415b3c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x415b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_415b40:
    // 0x415b40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x415b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_415b44:
    // 0x415b44: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x415b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_415b48:
    // 0x415b48: 0x320f809  jalr        $t9
label_415b4c:
    if (ctx->pc == 0x415B4Cu) {
        ctx->pc = 0x415B50u;
        goto label_415b50;
    }
    ctx->pc = 0x415B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415B50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x415B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415B50u; }
            if (ctx->pc != 0x415B50u) { return; }
        }
        }
    }
    ctx->pc = 0x415B50u;
label_415b50:
    // 0x415b50: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x415b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_415b54:
    // 0x415b54: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_415b58:
    if (ctx->pc == 0x415B58u) {
        ctx->pc = 0x415B5Cu;
        goto label_415b5c;
    }
    ctx->pc = 0x415B54u;
    {
        const bool branch_taken_0x415b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x415b54) {
            ctx->pc = 0x415BA8u;
            goto label_415ba8;
        }
    }
    ctx->pc = 0x415B5Cu;
label_415b5c:
    // 0x415b5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x415b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_415b60:
    // 0x415b60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x415b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_415b64:
    // 0x415b64: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x415b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_415b68:
    // 0x415b68: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x415b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_415b6c:
    // 0x415b6c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x415b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_415b70:
    // 0x415b70: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x415b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_415b74:
    // 0x415b74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x415b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_415b78:
    // 0x415b78: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x415b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_415b7c:
    // 0x415b7c: 0x320f809  jalr        $t9
label_415b80:
    if (ctx->pc == 0x415B80u) {
        ctx->pc = 0x415B84u;
        goto label_415b84;
    }
    ctx->pc = 0x415B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x415B84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x415B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x415B84u; }
            if (ctx->pc != 0x415B84u) { return; }
        }
        }
    }
    ctx->pc = 0x415B84u;
label_415b84:
    // 0x415b84: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x415b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_415b88:
    // 0x415b88: 0xc0a9844  jal         func_2A6110
label_415b8c:
    if (ctx->pc == 0x415B8Cu) {
        ctx->pc = 0x415B8Cu;
            // 0x415b8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x415B90u;
        goto label_415b90;
    }
    ctx->pc = 0x415B88u;
    SET_GPR_U32(ctx, 31, 0x415B90u);
    ctx->pc = 0x415B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415B88u;
            // 0x415b8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415B90u; }
        if (ctx->pc != 0x415B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6110_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415B90u; }
        if (ctx->pc != 0x415B90u) { return; }
    }
    ctx->pc = 0x415B90u;
label_415b90:
    // 0x415b90: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x415b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_415b94:
    // 0x415b94: 0xc0ada2c  jal         func_2B68B0
label_415b98:
    if (ctx->pc == 0x415B98u) {
        ctx->pc = 0x415B98u;
            // 0x415b98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x415B9Cu;
        goto label_415b9c;
    }
    ctx->pc = 0x415B94u;
    SET_GPR_U32(ctx, 31, 0x415B9Cu);
    ctx->pc = 0x415B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415B94u;
            // 0x415b98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B68B0u;
    if (runtime->hasFunction(0x2B68B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B68B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415B9Cu; }
        if (ctx->pc != 0x415B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B68B0_0x2b68b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415B9Cu; }
        if (ctx->pc != 0x415B9Cu) { return; }
    }
    ctx->pc = 0x415B9Cu;
label_415b9c:
    // 0x415b9c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x415b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_415ba0:
    // 0x415ba0: 0xc0aee40  jal         func_2BB900
label_415ba4:
    if (ctx->pc == 0x415BA4u) {
        ctx->pc = 0x415BA4u;
            // 0x415ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415BA8u;
        goto label_415ba8;
    }
    ctx->pc = 0x415BA0u;
    SET_GPR_U32(ctx, 31, 0x415BA8u);
    ctx->pc = 0x415BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415BA0u;
            // 0x415ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415BA8u; }
        if (ctx->pc != 0x415BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415BA8u; }
        if (ctx->pc != 0x415BA8u) { return; }
    }
    ctx->pc = 0x415BA8u;
label_415ba8:
    // 0x415ba8: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_415bac:
    if (ctx->pc == 0x415BACu) {
        ctx->pc = 0x415BACu;
            // 0x415bac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x415BB0u;
        goto label_415bb0;
    }
    ctx->pc = 0x415BA8u;
    {
        const bool branch_taken_0x415ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x415ba8) {
            ctx->pc = 0x415BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415BA8u;
            // 0x415bac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415BC0u;
            goto label_415bc0;
        }
    }
    ctx->pc = 0x415BB0u;
label_415bb0:
    // 0x415bb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x415bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_415bb4:
    // 0x415bb4: 0x2442b0f8  addiu       $v0, $v0, -0x4F08
    ctx->pc = 0x415bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947064));
label_415bb8:
    // 0x415bb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x415bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_415bbc:
    // 0x415bbc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x415bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_415bc0:
    // 0x415bc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x415bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_415bc4:
    // 0x415bc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_415bc8:
    if (ctx->pc == 0x415BC8u) {
        ctx->pc = 0x415BC8u;
            // 0x415bc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415BCCu;
        goto label_415bcc;
    }
    ctx->pc = 0x415BC4u;
    {
        const bool branch_taken_0x415bc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x415bc4) {
            ctx->pc = 0x415BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x415BC4u;
            // 0x415bc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x415BD8u;
            goto label_415bd8;
        }
    }
    ctx->pc = 0x415BCCu;
label_415bcc:
    // 0x415bcc: 0xc0400a8  jal         func_1002A0
label_415bd0:
    if (ctx->pc == 0x415BD0u) {
        ctx->pc = 0x415BD0u;
            // 0x415bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x415BD4u;
        goto label_415bd4;
    }
    ctx->pc = 0x415BCCu;
    SET_GPR_U32(ctx, 31, 0x415BD4u);
    ctx->pc = 0x415BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x415BCCu;
            // 0x415bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415BD4u; }
        if (ctx->pc != 0x415BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x415BD4u; }
        if (ctx->pc != 0x415BD4u) { return; }
    }
    ctx->pc = 0x415BD4u;
label_415bd4:
    // 0x415bd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x415bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415bd8:
    // 0x415bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x415bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_415bdc:
    // 0x415bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x415bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415be0:
    // 0x415be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x415be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_415be4:
    // 0x415be4: 0x3e00008  jr          $ra
label_415be8:
    if (ctx->pc == 0x415BE8u) {
        ctx->pc = 0x415BE8u;
            // 0x415be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x415BECu;
        goto label_415bec;
    }
    ctx->pc = 0x415BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415BE4u;
            // 0x415be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x415BECu;
label_415bec:
    // 0x415bec: 0x0  nop
    ctx->pc = 0x415becu;
    // NOP
label_415bf0:
    // 0x415bf0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x415bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_415bf4:
    // 0x415bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x415bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_415bf8:
    // 0x415bf8: 0x3e00008  jr          $ra
label_415bfc:
    if (ctx->pc == 0x415BFCu) {
        ctx->pc = 0x415BFCu;
            // 0x415bfc: 0xa06402b8  sb          $a0, 0x2B8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 696), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x415C00u;
        goto label_fallthrough_0x415bf8;
    }
    ctx->pc = 0x415BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x415BF8u;
            // 0x415bfc: 0xa06402b8  sb          $a0, 0x2B8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 696), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x415bf8:
    ctx->pc = 0x415C00u;
}
