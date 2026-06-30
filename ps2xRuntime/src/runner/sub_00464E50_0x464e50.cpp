#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00464E50
// Address: 0x464e50 - 0x4658e0
void sub_00464E50_0x464e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464E50_0x464e50");
#endif

    switch (ctx->pc) {
        case 0x464e50u: goto label_464e50;
        case 0x464e54u: goto label_464e54;
        case 0x464e58u: goto label_464e58;
        case 0x464e5cu: goto label_464e5c;
        case 0x464e60u: goto label_464e60;
        case 0x464e64u: goto label_464e64;
        case 0x464e68u: goto label_464e68;
        case 0x464e6cu: goto label_464e6c;
        case 0x464e70u: goto label_464e70;
        case 0x464e74u: goto label_464e74;
        case 0x464e78u: goto label_464e78;
        case 0x464e7cu: goto label_464e7c;
        case 0x464e80u: goto label_464e80;
        case 0x464e84u: goto label_464e84;
        case 0x464e88u: goto label_464e88;
        case 0x464e8cu: goto label_464e8c;
        case 0x464e90u: goto label_464e90;
        case 0x464e94u: goto label_464e94;
        case 0x464e98u: goto label_464e98;
        case 0x464e9cu: goto label_464e9c;
        case 0x464ea0u: goto label_464ea0;
        case 0x464ea4u: goto label_464ea4;
        case 0x464ea8u: goto label_464ea8;
        case 0x464eacu: goto label_464eac;
        case 0x464eb0u: goto label_464eb0;
        case 0x464eb4u: goto label_464eb4;
        case 0x464eb8u: goto label_464eb8;
        case 0x464ebcu: goto label_464ebc;
        case 0x464ec0u: goto label_464ec0;
        case 0x464ec4u: goto label_464ec4;
        case 0x464ec8u: goto label_464ec8;
        case 0x464eccu: goto label_464ecc;
        case 0x464ed0u: goto label_464ed0;
        case 0x464ed4u: goto label_464ed4;
        case 0x464ed8u: goto label_464ed8;
        case 0x464edcu: goto label_464edc;
        case 0x464ee0u: goto label_464ee0;
        case 0x464ee4u: goto label_464ee4;
        case 0x464ee8u: goto label_464ee8;
        case 0x464eecu: goto label_464eec;
        case 0x464ef0u: goto label_464ef0;
        case 0x464ef4u: goto label_464ef4;
        case 0x464ef8u: goto label_464ef8;
        case 0x464efcu: goto label_464efc;
        case 0x464f00u: goto label_464f00;
        case 0x464f04u: goto label_464f04;
        case 0x464f08u: goto label_464f08;
        case 0x464f0cu: goto label_464f0c;
        case 0x464f10u: goto label_464f10;
        case 0x464f14u: goto label_464f14;
        case 0x464f18u: goto label_464f18;
        case 0x464f1cu: goto label_464f1c;
        case 0x464f20u: goto label_464f20;
        case 0x464f24u: goto label_464f24;
        case 0x464f28u: goto label_464f28;
        case 0x464f2cu: goto label_464f2c;
        case 0x464f30u: goto label_464f30;
        case 0x464f34u: goto label_464f34;
        case 0x464f38u: goto label_464f38;
        case 0x464f3cu: goto label_464f3c;
        case 0x464f40u: goto label_464f40;
        case 0x464f44u: goto label_464f44;
        case 0x464f48u: goto label_464f48;
        case 0x464f4cu: goto label_464f4c;
        case 0x464f50u: goto label_464f50;
        case 0x464f54u: goto label_464f54;
        case 0x464f58u: goto label_464f58;
        case 0x464f5cu: goto label_464f5c;
        case 0x464f60u: goto label_464f60;
        case 0x464f64u: goto label_464f64;
        case 0x464f68u: goto label_464f68;
        case 0x464f6cu: goto label_464f6c;
        case 0x464f70u: goto label_464f70;
        case 0x464f74u: goto label_464f74;
        case 0x464f78u: goto label_464f78;
        case 0x464f7cu: goto label_464f7c;
        case 0x464f80u: goto label_464f80;
        case 0x464f84u: goto label_464f84;
        case 0x464f88u: goto label_464f88;
        case 0x464f8cu: goto label_464f8c;
        case 0x464f90u: goto label_464f90;
        case 0x464f94u: goto label_464f94;
        case 0x464f98u: goto label_464f98;
        case 0x464f9cu: goto label_464f9c;
        case 0x464fa0u: goto label_464fa0;
        case 0x464fa4u: goto label_464fa4;
        case 0x464fa8u: goto label_464fa8;
        case 0x464facu: goto label_464fac;
        case 0x464fb0u: goto label_464fb0;
        case 0x464fb4u: goto label_464fb4;
        case 0x464fb8u: goto label_464fb8;
        case 0x464fbcu: goto label_464fbc;
        case 0x464fc0u: goto label_464fc0;
        case 0x464fc4u: goto label_464fc4;
        case 0x464fc8u: goto label_464fc8;
        case 0x464fccu: goto label_464fcc;
        case 0x464fd0u: goto label_464fd0;
        case 0x464fd4u: goto label_464fd4;
        case 0x464fd8u: goto label_464fd8;
        case 0x464fdcu: goto label_464fdc;
        case 0x464fe0u: goto label_464fe0;
        case 0x464fe4u: goto label_464fe4;
        case 0x464fe8u: goto label_464fe8;
        case 0x464fecu: goto label_464fec;
        case 0x464ff0u: goto label_464ff0;
        case 0x464ff4u: goto label_464ff4;
        case 0x464ff8u: goto label_464ff8;
        case 0x464ffcu: goto label_464ffc;
        case 0x465000u: goto label_465000;
        case 0x465004u: goto label_465004;
        case 0x465008u: goto label_465008;
        case 0x46500cu: goto label_46500c;
        case 0x465010u: goto label_465010;
        case 0x465014u: goto label_465014;
        case 0x465018u: goto label_465018;
        case 0x46501cu: goto label_46501c;
        case 0x465020u: goto label_465020;
        case 0x465024u: goto label_465024;
        case 0x465028u: goto label_465028;
        case 0x46502cu: goto label_46502c;
        case 0x465030u: goto label_465030;
        case 0x465034u: goto label_465034;
        case 0x465038u: goto label_465038;
        case 0x46503cu: goto label_46503c;
        case 0x465040u: goto label_465040;
        case 0x465044u: goto label_465044;
        case 0x465048u: goto label_465048;
        case 0x46504cu: goto label_46504c;
        case 0x465050u: goto label_465050;
        case 0x465054u: goto label_465054;
        case 0x465058u: goto label_465058;
        case 0x46505cu: goto label_46505c;
        case 0x465060u: goto label_465060;
        case 0x465064u: goto label_465064;
        case 0x465068u: goto label_465068;
        case 0x46506cu: goto label_46506c;
        case 0x465070u: goto label_465070;
        case 0x465074u: goto label_465074;
        case 0x465078u: goto label_465078;
        case 0x46507cu: goto label_46507c;
        case 0x465080u: goto label_465080;
        case 0x465084u: goto label_465084;
        case 0x465088u: goto label_465088;
        case 0x46508cu: goto label_46508c;
        case 0x465090u: goto label_465090;
        case 0x465094u: goto label_465094;
        case 0x465098u: goto label_465098;
        case 0x46509cu: goto label_46509c;
        case 0x4650a0u: goto label_4650a0;
        case 0x4650a4u: goto label_4650a4;
        case 0x4650a8u: goto label_4650a8;
        case 0x4650acu: goto label_4650ac;
        case 0x4650b0u: goto label_4650b0;
        case 0x4650b4u: goto label_4650b4;
        case 0x4650b8u: goto label_4650b8;
        case 0x4650bcu: goto label_4650bc;
        case 0x4650c0u: goto label_4650c0;
        case 0x4650c4u: goto label_4650c4;
        case 0x4650c8u: goto label_4650c8;
        case 0x4650ccu: goto label_4650cc;
        case 0x4650d0u: goto label_4650d0;
        case 0x4650d4u: goto label_4650d4;
        case 0x4650d8u: goto label_4650d8;
        case 0x4650dcu: goto label_4650dc;
        case 0x4650e0u: goto label_4650e0;
        case 0x4650e4u: goto label_4650e4;
        case 0x4650e8u: goto label_4650e8;
        case 0x4650ecu: goto label_4650ec;
        case 0x4650f0u: goto label_4650f0;
        case 0x4650f4u: goto label_4650f4;
        case 0x4650f8u: goto label_4650f8;
        case 0x4650fcu: goto label_4650fc;
        case 0x465100u: goto label_465100;
        case 0x465104u: goto label_465104;
        case 0x465108u: goto label_465108;
        case 0x46510cu: goto label_46510c;
        case 0x465110u: goto label_465110;
        case 0x465114u: goto label_465114;
        case 0x465118u: goto label_465118;
        case 0x46511cu: goto label_46511c;
        case 0x465120u: goto label_465120;
        case 0x465124u: goto label_465124;
        case 0x465128u: goto label_465128;
        case 0x46512cu: goto label_46512c;
        case 0x465130u: goto label_465130;
        case 0x465134u: goto label_465134;
        case 0x465138u: goto label_465138;
        case 0x46513cu: goto label_46513c;
        case 0x465140u: goto label_465140;
        case 0x465144u: goto label_465144;
        case 0x465148u: goto label_465148;
        case 0x46514cu: goto label_46514c;
        case 0x465150u: goto label_465150;
        case 0x465154u: goto label_465154;
        case 0x465158u: goto label_465158;
        case 0x46515cu: goto label_46515c;
        case 0x465160u: goto label_465160;
        case 0x465164u: goto label_465164;
        case 0x465168u: goto label_465168;
        case 0x46516cu: goto label_46516c;
        case 0x465170u: goto label_465170;
        case 0x465174u: goto label_465174;
        case 0x465178u: goto label_465178;
        case 0x46517cu: goto label_46517c;
        case 0x465180u: goto label_465180;
        case 0x465184u: goto label_465184;
        case 0x465188u: goto label_465188;
        case 0x46518cu: goto label_46518c;
        case 0x465190u: goto label_465190;
        case 0x465194u: goto label_465194;
        case 0x465198u: goto label_465198;
        case 0x46519cu: goto label_46519c;
        case 0x4651a0u: goto label_4651a0;
        case 0x4651a4u: goto label_4651a4;
        case 0x4651a8u: goto label_4651a8;
        case 0x4651acu: goto label_4651ac;
        case 0x4651b0u: goto label_4651b0;
        case 0x4651b4u: goto label_4651b4;
        case 0x4651b8u: goto label_4651b8;
        case 0x4651bcu: goto label_4651bc;
        case 0x4651c0u: goto label_4651c0;
        case 0x4651c4u: goto label_4651c4;
        case 0x4651c8u: goto label_4651c8;
        case 0x4651ccu: goto label_4651cc;
        case 0x4651d0u: goto label_4651d0;
        case 0x4651d4u: goto label_4651d4;
        case 0x4651d8u: goto label_4651d8;
        case 0x4651dcu: goto label_4651dc;
        case 0x4651e0u: goto label_4651e0;
        case 0x4651e4u: goto label_4651e4;
        case 0x4651e8u: goto label_4651e8;
        case 0x4651ecu: goto label_4651ec;
        case 0x4651f0u: goto label_4651f0;
        case 0x4651f4u: goto label_4651f4;
        case 0x4651f8u: goto label_4651f8;
        case 0x4651fcu: goto label_4651fc;
        case 0x465200u: goto label_465200;
        case 0x465204u: goto label_465204;
        case 0x465208u: goto label_465208;
        case 0x46520cu: goto label_46520c;
        case 0x465210u: goto label_465210;
        case 0x465214u: goto label_465214;
        case 0x465218u: goto label_465218;
        case 0x46521cu: goto label_46521c;
        case 0x465220u: goto label_465220;
        case 0x465224u: goto label_465224;
        case 0x465228u: goto label_465228;
        case 0x46522cu: goto label_46522c;
        case 0x465230u: goto label_465230;
        case 0x465234u: goto label_465234;
        case 0x465238u: goto label_465238;
        case 0x46523cu: goto label_46523c;
        case 0x465240u: goto label_465240;
        case 0x465244u: goto label_465244;
        case 0x465248u: goto label_465248;
        case 0x46524cu: goto label_46524c;
        case 0x465250u: goto label_465250;
        case 0x465254u: goto label_465254;
        case 0x465258u: goto label_465258;
        case 0x46525cu: goto label_46525c;
        case 0x465260u: goto label_465260;
        case 0x465264u: goto label_465264;
        case 0x465268u: goto label_465268;
        case 0x46526cu: goto label_46526c;
        case 0x465270u: goto label_465270;
        case 0x465274u: goto label_465274;
        case 0x465278u: goto label_465278;
        case 0x46527cu: goto label_46527c;
        case 0x465280u: goto label_465280;
        case 0x465284u: goto label_465284;
        case 0x465288u: goto label_465288;
        case 0x46528cu: goto label_46528c;
        case 0x465290u: goto label_465290;
        case 0x465294u: goto label_465294;
        case 0x465298u: goto label_465298;
        case 0x46529cu: goto label_46529c;
        case 0x4652a0u: goto label_4652a0;
        case 0x4652a4u: goto label_4652a4;
        case 0x4652a8u: goto label_4652a8;
        case 0x4652acu: goto label_4652ac;
        case 0x4652b0u: goto label_4652b0;
        case 0x4652b4u: goto label_4652b4;
        case 0x4652b8u: goto label_4652b8;
        case 0x4652bcu: goto label_4652bc;
        case 0x4652c0u: goto label_4652c0;
        case 0x4652c4u: goto label_4652c4;
        case 0x4652c8u: goto label_4652c8;
        case 0x4652ccu: goto label_4652cc;
        case 0x4652d0u: goto label_4652d0;
        case 0x4652d4u: goto label_4652d4;
        case 0x4652d8u: goto label_4652d8;
        case 0x4652dcu: goto label_4652dc;
        case 0x4652e0u: goto label_4652e0;
        case 0x4652e4u: goto label_4652e4;
        case 0x4652e8u: goto label_4652e8;
        case 0x4652ecu: goto label_4652ec;
        case 0x4652f0u: goto label_4652f0;
        case 0x4652f4u: goto label_4652f4;
        case 0x4652f8u: goto label_4652f8;
        case 0x4652fcu: goto label_4652fc;
        case 0x465300u: goto label_465300;
        case 0x465304u: goto label_465304;
        case 0x465308u: goto label_465308;
        case 0x46530cu: goto label_46530c;
        case 0x465310u: goto label_465310;
        case 0x465314u: goto label_465314;
        case 0x465318u: goto label_465318;
        case 0x46531cu: goto label_46531c;
        case 0x465320u: goto label_465320;
        case 0x465324u: goto label_465324;
        case 0x465328u: goto label_465328;
        case 0x46532cu: goto label_46532c;
        case 0x465330u: goto label_465330;
        case 0x465334u: goto label_465334;
        case 0x465338u: goto label_465338;
        case 0x46533cu: goto label_46533c;
        case 0x465340u: goto label_465340;
        case 0x465344u: goto label_465344;
        case 0x465348u: goto label_465348;
        case 0x46534cu: goto label_46534c;
        case 0x465350u: goto label_465350;
        case 0x465354u: goto label_465354;
        case 0x465358u: goto label_465358;
        case 0x46535cu: goto label_46535c;
        case 0x465360u: goto label_465360;
        case 0x465364u: goto label_465364;
        case 0x465368u: goto label_465368;
        case 0x46536cu: goto label_46536c;
        case 0x465370u: goto label_465370;
        case 0x465374u: goto label_465374;
        case 0x465378u: goto label_465378;
        case 0x46537cu: goto label_46537c;
        case 0x465380u: goto label_465380;
        case 0x465384u: goto label_465384;
        case 0x465388u: goto label_465388;
        case 0x46538cu: goto label_46538c;
        case 0x465390u: goto label_465390;
        case 0x465394u: goto label_465394;
        case 0x465398u: goto label_465398;
        case 0x46539cu: goto label_46539c;
        case 0x4653a0u: goto label_4653a0;
        case 0x4653a4u: goto label_4653a4;
        case 0x4653a8u: goto label_4653a8;
        case 0x4653acu: goto label_4653ac;
        case 0x4653b0u: goto label_4653b0;
        case 0x4653b4u: goto label_4653b4;
        case 0x4653b8u: goto label_4653b8;
        case 0x4653bcu: goto label_4653bc;
        case 0x4653c0u: goto label_4653c0;
        case 0x4653c4u: goto label_4653c4;
        case 0x4653c8u: goto label_4653c8;
        case 0x4653ccu: goto label_4653cc;
        case 0x4653d0u: goto label_4653d0;
        case 0x4653d4u: goto label_4653d4;
        case 0x4653d8u: goto label_4653d8;
        case 0x4653dcu: goto label_4653dc;
        case 0x4653e0u: goto label_4653e0;
        case 0x4653e4u: goto label_4653e4;
        case 0x4653e8u: goto label_4653e8;
        case 0x4653ecu: goto label_4653ec;
        case 0x4653f0u: goto label_4653f0;
        case 0x4653f4u: goto label_4653f4;
        case 0x4653f8u: goto label_4653f8;
        case 0x4653fcu: goto label_4653fc;
        case 0x465400u: goto label_465400;
        case 0x465404u: goto label_465404;
        case 0x465408u: goto label_465408;
        case 0x46540cu: goto label_46540c;
        case 0x465410u: goto label_465410;
        case 0x465414u: goto label_465414;
        case 0x465418u: goto label_465418;
        case 0x46541cu: goto label_46541c;
        case 0x465420u: goto label_465420;
        case 0x465424u: goto label_465424;
        case 0x465428u: goto label_465428;
        case 0x46542cu: goto label_46542c;
        case 0x465430u: goto label_465430;
        case 0x465434u: goto label_465434;
        case 0x465438u: goto label_465438;
        case 0x46543cu: goto label_46543c;
        case 0x465440u: goto label_465440;
        case 0x465444u: goto label_465444;
        case 0x465448u: goto label_465448;
        case 0x46544cu: goto label_46544c;
        case 0x465450u: goto label_465450;
        case 0x465454u: goto label_465454;
        case 0x465458u: goto label_465458;
        case 0x46545cu: goto label_46545c;
        case 0x465460u: goto label_465460;
        case 0x465464u: goto label_465464;
        case 0x465468u: goto label_465468;
        case 0x46546cu: goto label_46546c;
        case 0x465470u: goto label_465470;
        case 0x465474u: goto label_465474;
        case 0x465478u: goto label_465478;
        case 0x46547cu: goto label_46547c;
        case 0x465480u: goto label_465480;
        case 0x465484u: goto label_465484;
        case 0x465488u: goto label_465488;
        case 0x46548cu: goto label_46548c;
        case 0x465490u: goto label_465490;
        case 0x465494u: goto label_465494;
        case 0x465498u: goto label_465498;
        case 0x46549cu: goto label_46549c;
        case 0x4654a0u: goto label_4654a0;
        case 0x4654a4u: goto label_4654a4;
        case 0x4654a8u: goto label_4654a8;
        case 0x4654acu: goto label_4654ac;
        case 0x4654b0u: goto label_4654b0;
        case 0x4654b4u: goto label_4654b4;
        case 0x4654b8u: goto label_4654b8;
        case 0x4654bcu: goto label_4654bc;
        case 0x4654c0u: goto label_4654c0;
        case 0x4654c4u: goto label_4654c4;
        case 0x4654c8u: goto label_4654c8;
        case 0x4654ccu: goto label_4654cc;
        case 0x4654d0u: goto label_4654d0;
        case 0x4654d4u: goto label_4654d4;
        case 0x4654d8u: goto label_4654d8;
        case 0x4654dcu: goto label_4654dc;
        case 0x4654e0u: goto label_4654e0;
        case 0x4654e4u: goto label_4654e4;
        case 0x4654e8u: goto label_4654e8;
        case 0x4654ecu: goto label_4654ec;
        case 0x4654f0u: goto label_4654f0;
        case 0x4654f4u: goto label_4654f4;
        case 0x4654f8u: goto label_4654f8;
        case 0x4654fcu: goto label_4654fc;
        case 0x465500u: goto label_465500;
        case 0x465504u: goto label_465504;
        case 0x465508u: goto label_465508;
        case 0x46550cu: goto label_46550c;
        case 0x465510u: goto label_465510;
        case 0x465514u: goto label_465514;
        case 0x465518u: goto label_465518;
        case 0x46551cu: goto label_46551c;
        case 0x465520u: goto label_465520;
        case 0x465524u: goto label_465524;
        case 0x465528u: goto label_465528;
        case 0x46552cu: goto label_46552c;
        case 0x465530u: goto label_465530;
        case 0x465534u: goto label_465534;
        case 0x465538u: goto label_465538;
        case 0x46553cu: goto label_46553c;
        case 0x465540u: goto label_465540;
        case 0x465544u: goto label_465544;
        case 0x465548u: goto label_465548;
        case 0x46554cu: goto label_46554c;
        case 0x465550u: goto label_465550;
        case 0x465554u: goto label_465554;
        case 0x465558u: goto label_465558;
        case 0x46555cu: goto label_46555c;
        case 0x465560u: goto label_465560;
        case 0x465564u: goto label_465564;
        case 0x465568u: goto label_465568;
        case 0x46556cu: goto label_46556c;
        case 0x465570u: goto label_465570;
        case 0x465574u: goto label_465574;
        case 0x465578u: goto label_465578;
        case 0x46557cu: goto label_46557c;
        case 0x465580u: goto label_465580;
        case 0x465584u: goto label_465584;
        case 0x465588u: goto label_465588;
        case 0x46558cu: goto label_46558c;
        case 0x465590u: goto label_465590;
        case 0x465594u: goto label_465594;
        case 0x465598u: goto label_465598;
        case 0x46559cu: goto label_46559c;
        case 0x4655a0u: goto label_4655a0;
        case 0x4655a4u: goto label_4655a4;
        case 0x4655a8u: goto label_4655a8;
        case 0x4655acu: goto label_4655ac;
        case 0x4655b0u: goto label_4655b0;
        case 0x4655b4u: goto label_4655b4;
        case 0x4655b8u: goto label_4655b8;
        case 0x4655bcu: goto label_4655bc;
        case 0x4655c0u: goto label_4655c0;
        case 0x4655c4u: goto label_4655c4;
        case 0x4655c8u: goto label_4655c8;
        case 0x4655ccu: goto label_4655cc;
        case 0x4655d0u: goto label_4655d0;
        case 0x4655d4u: goto label_4655d4;
        case 0x4655d8u: goto label_4655d8;
        case 0x4655dcu: goto label_4655dc;
        case 0x4655e0u: goto label_4655e0;
        case 0x4655e4u: goto label_4655e4;
        case 0x4655e8u: goto label_4655e8;
        case 0x4655ecu: goto label_4655ec;
        case 0x4655f0u: goto label_4655f0;
        case 0x4655f4u: goto label_4655f4;
        case 0x4655f8u: goto label_4655f8;
        case 0x4655fcu: goto label_4655fc;
        case 0x465600u: goto label_465600;
        case 0x465604u: goto label_465604;
        case 0x465608u: goto label_465608;
        case 0x46560cu: goto label_46560c;
        case 0x465610u: goto label_465610;
        case 0x465614u: goto label_465614;
        case 0x465618u: goto label_465618;
        case 0x46561cu: goto label_46561c;
        case 0x465620u: goto label_465620;
        case 0x465624u: goto label_465624;
        case 0x465628u: goto label_465628;
        case 0x46562cu: goto label_46562c;
        case 0x465630u: goto label_465630;
        case 0x465634u: goto label_465634;
        case 0x465638u: goto label_465638;
        case 0x46563cu: goto label_46563c;
        case 0x465640u: goto label_465640;
        case 0x465644u: goto label_465644;
        case 0x465648u: goto label_465648;
        case 0x46564cu: goto label_46564c;
        case 0x465650u: goto label_465650;
        case 0x465654u: goto label_465654;
        case 0x465658u: goto label_465658;
        case 0x46565cu: goto label_46565c;
        case 0x465660u: goto label_465660;
        case 0x465664u: goto label_465664;
        case 0x465668u: goto label_465668;
        case 0x46566cu: goto label_46566c;
        case 0x465670u: goto label_465670;
        case 0x465674u: goto label_465674;
        case 0x465678u: goto label_465678;
        case 0x46567cu: goto label_46567c;
        case 0x465680u: goto label_465680;
        case 0x465684u: goto label_465684;
        case 0x465688u: goto label_465688;
        case 0x46568cu: goto label_46568c;
        case 0x465690u: goto label_465690;
        case 0x465694u: goto label_465694;
        case 0x465698u: goto label_465698;
        case 0x46569cu: goto label_46569c;
        case 0x4656a0u: goto label_4656a0;
        case 0x4656a4u: goto label_4656a4;
        case 0x4656a8u: goto label_4656a8;
        case 0x4656acu: goto label_4656ac;
        case 0x4656b0u: goto label_4656b0;
        case 0x4656b4u: goto label_4656b4;
        case 0x4656b8u: goto label_4656b8;
        case 0x4656bcu: goto label_4656bc;
        case 0x4656c0u: goto label_4656c0;
        case 0x4656c4u: goto label_4656c4;
        case 0x4656c8u: goto label_4656c8;
        case 0x4656ccu: goto label_4656cc;
        case 0x4656d0u: goto label_4656d0;
        case 0x4656d4u: goto label_4656d4;
        case 0x4656d8u: goto label_4656d8;
        case 0x4656dcu: goto label_4656dc;
        case 0x4656e0u: goto label_4656e0;
        case 0x4656e4u: goto label_4656e4;
        case 0x4656e8u: goto label_4656e8;
        case 0x4656ecu: goto label_4656ec;
        case 0x4656f0u: goto label_4656f0;
        case 0x4656f4u: goto label_4656f4;
        case 0x4656f8u: goto label_4656f8;
        case 0x4656fcu: goto label_4656fc;
        case 0x465700u: goto label_465700;
        case 0x465704u: goto label_465704;
        case 0x465708u: goto label_465708;
        case 0x46570cu: goto label_46570c;
        case 0x465710u: goto label_465710;
        case 0x465714u: goto label_465714;
        case 0x465718u: goto label_465718;
        case 0x46571cu: goto label_46571c;
        case 0x465720u: goto label_465720;
        case 0x465724u: goto label_465724;
        case 0x465728u: goto label_465728;
        case 0x46572cu: goto label_46572c;
        case 0x465730u: goto label_465730;
        case 0x465734u: goto label_465734;
        case 0x465738u: goto label_465738;
        case 0x46573cu: goto label_46573c;
        case 0x465740u: goto label_465740;
        case 0x465744u: goto label_465744;
        case 0x465748u: goto label_465748;
        case 0x46574cu: goto label_46574c;
        case 0x465750u: goto label_465750;
        case 0x465754u: goto label_465754;
        case 0x465758u: goto label_465758;
        case 0x46575cu: goto label_46575c;
        case 0x465760u: goto label_465760;
        case 0x465764u: goto label_465764;
        case 0x465768u: goto label_465768;
        case 0x46576cu: goto label_46576c;
        case 0x465770u: goto label_465770;
        case 0x465774u: goto label_465774;
        case 0x465778u: goto label_465778;
        case 0x46577cu: goto label_46577c;
        case 0x465780u: goto label_465780;
        case 0x465784u: goto label_465784;
        case 0x465788u: goto label_465788;
        case 0x46578cu: goto label_46578c;
        case 0x465790u: goto label_465790;
        case 0x465794u: goto label_465794;
        case 0x465798u: goto label_465798;
        case 0x46579cu: goto label_46579c;
        case 0x4657a0u: goto label_4657a0;
        case 0x4657a4u: goto label_4657a4;
        case 0x4657a8u: goto label_4657a8;
        case 0x4657acu: goto label_4657ac;
        case 0x4657b0u: goto label_4657b0;
        case 0x4657b4u: goto label_4657b4;
        case 0x4657b8u: goto label_4657b8;
        case 0x4657bcu: goto label_4657bc;
        case 0x4657c0u: goto label_4657c0;
        case 0x4657c4u: goto label_4657c4;
        case 0x4657c8u: goto label_4657c8;
        case 0x4657ccu: goto label_4657cc;
        case 0x4657d0u: goto label_4657d0;
        case 0x4657d4u: goto label_4657d4;
        case 0x4657d8u: goto label_4657d8;
        case 0x4657dcu: goto label_4657dc;
        case 0x4657e0u: goto label_4657e0;
        case 0x4657e4u: goto label_4657e4;
        case 0x4657e8u: goto label_4657e8;
        case 0x4657ecu: goto label_4657ec;
        case 0x4657f0u: goto label_4657f0;
        case 0x4657f4u: goto label_4657f4;
        case 0x4657f8u: goto label_4657f8;
        case 0x4657fcu: goto label_4657fc;
        case 0x465800u: goto label_465800;
        case 0x465804u: goto label_465804;
        case 0x465808u: goto label_465808;
        case 0x46580cu: goto label_46580c;
        case 0x465810u: goto label_465810;
        case 0x465814u: goto label_465814;
        case 0x465818u: goto label_465818;
        case 0x46581cu: goto label_46581c;
        case 0x465820u: goto label_465820;
        case 0x465824u: goto label_465824;
        case 0x465828u: goto label_465828;
        case 0x46582cu: goto label_46582c;
        case 0x465830u: goto label_465830;
        case 0x465834u: goto label_465834;
        case 0x465838u: goto label_465838;
        case 0x46583cu: goto label_46583c;
        case 0x465840u: goto label_465840;
        case 0x465844u: goto label_465844;
        case 0x465848u: goto label_465848;
        case 0x46584cu: goto label_46584c;
        case 0x465850u: goto label_465850;
        case 0x465854u: goto label_465854;
        case 0x465858u: goto label_465858;
        case 0x46585cu: goto label_46585c;
        case 0x465860u: goto label_465860;
        case 0x465864u: goto label_465864;
        case 0x465868u: goto label_465868;
        case 0x46586cu: goto label_46586c;
        case 0x465870u: goto label_465870;
        case 0x465874u: goto label_465874;
        case 0x465878u: goto label_465878;
        case 0x46587cu: goto label_46587c;
        case 0x465880u: goto label_465880;
        case 0x465884u: goto label_465884;
        case 0x465888u: goto label_465888;
        case 0x46588cu: goto label_46588c;
        case 0x465890u: goto label_465890;
        case 0x465894u: goto label_465894;
        case 0x465898u: goto label_465898;
        case 0x46589cu: goto label_46589c;
        case 0x4658a0u: goto label_4658a0;
        case 0x4658a4u: goto label_4658a4;
        case 0x4658a8u: goto label_4658a8;
        case 0x4658acu: goto label_4658ac;
        case 0x4658b0u: goto label_4658b0;
        case 0x4658b4u: goto label_4658b4;
        case 0x4658b8u: goto label_4658b8;
        case 0x4658bcu: goto label_4658bc;
        case 0x4658c0u: goto label_4658c0;
        case 0x4658c4u: goto label_4658c4;
        case 0x4658c8u: goto label_4658c8;
        case 0x4658ccu: goto label_4658cc;
        case 0x4658d0u: goto label_4658d0;
        case 0x4658d4u: goto label_4658d4;
        case 0x4658d8u: goto label_4658d8;
        case 0x4658dcu: goto label_4658dc;
        default: break;
    }

    ctx->pc = 0x464e50u;

label_464e50:
    // 0x464e50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x464e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_464e54:
    // 0x464e54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x464e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_464e58:
    // 0x464e58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x464e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_464e5c:
    // 0x464e5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x464e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_464e60:
    // 0x464e60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_464e64:
    // 0x464e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x464e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464e68:
    // 0x464e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_464e6c:
    // 0x464e6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x464e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_464e70:
    // 0x464e70: 0xac850290  sw          $a1, 0x290($a0)
    ctx->pc = 0x464e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 656), GPR_U32(ctx, 5));
label_464e74:
    // 0x464e74: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x464e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_464e78:
    // 0x464e78: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x464e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_464e7c:
    // 0x464e7c: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x464e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
label_464e80:
    // 0x464e80: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x464e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464e84:
    // 0x464e84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x464e84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_464e88:
    // 0x464e88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_464e8c:
    if (ctx->pc == 0x464E8Cu) {
        ctx->pc = 0x464E8Cu;
            // 0x464e8c: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x464E90u;
        goto label_464e90;
    }
    ctx->pc = 0x464E88u;
    {
        const bool branch_taken_0x464e88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x464E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464E88u;
            // 0x464e8c: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464e88) {
            ctx->pc = 0x464EA0u;
            goto label_464ea0;
        }
    }
    ctx->pc = 0x464E90u;
label_464e90:
    // 0x464e90: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x464e90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_464e94:
    // 0x464e94: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x464e94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_464e98:
    // 0x464e98: 0x10000008  b           . + 4 + (0x8 << 2)
label_464e9c:
    if (ctx->pc == 0x464E9Cu) {
        ctx->pc = 0x464E9Cu;
            // 0x464e9c: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x464EA0u;
        goto label_464ea0;
    }
    ctx->pc = 0x464E98u;
    {
        const bool branch_taken_0x464e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x464E98u;
            // 0x464e9c: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x464e98) {
            ctx->pc = 0x464EBCu;
            goto label_464ebc;
        }
    }
    ctx->pc = 0x464EA0u;
label_464ea0:
    // 0x464ea0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x464ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_464ea4:
    // 0x464ea4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x464ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_464ea8:
    // 0x464ea8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x464ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_464eac:
    // 0x464eac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x464eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_464eb0:
    // 0x464eb0: 0x0  nop
    ctx->pc = 0x464eb0u;
    // NOP
label_464eb4:
    // 0x464eb4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x464eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_464eb8:
    // 0x464eb8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x464eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464ebc:
    // 0x464ebc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x464ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_464ec0:
    // 0x464ec0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x464ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_464ec4:
    // 0x464ec4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x464ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_464ec8:
    // 0x464ec8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x464ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_464ecc:
    // 0x464ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464ed0:
    // 0x464ed0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x464ed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_464ed4:
    // 0x464ed4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x464ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464ed8:
    // 0x464ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x464ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464edc:
    // 0x464edc: 0x0  nop
    ctx->pc = 0x464edcu;
    // NOP
label_464ee0:
    // 0x464ee0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x464ee0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_464ee4:
    // 0x464ee4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x464ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_464ee8:
    // 0x464ee8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x464ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_464eec:
    // 0x464eec: 0xc62e0038  lwc1        $f14, 0x38($s1)
    ctx->pc = 0x464eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_464ef0:
    // 0x464ef0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x464ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_464ef4:
    // 0x464ef4: 0x0  nop
    ctx->pc = 0x464ef4u;
    // NOP
label_464ef8:
    // 0x464ef8: 0x0  nop
    ctx->pc = 0x464ef8u;
    // NOP
label_464efc:
    // 0x464efc: 0xc0d8aac  jal         func_362AB0
label_464f00:
    if (ctx->pc == 0x464F00u) {
        ctx->pc = 0x464F04u;
        goto label_464f04;
    }
    ctx->pc = 0x464EFCu;
    SET_GPR_U32(ctx, 31, 0x464F04u);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F04u; }
        if (ctx->pc != 0x464F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F04u; }
        if (ctx->pc != 0x464F04u) { return; }
    }
    ctx->pc = 0x464F04u;
label_464f04:
    // 0x464f04: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x464f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_464f08:
    // 0x464f08: 0xc04cc04  jal         func_133010
label_464f0c:
    if (ctx->pc == 0x464F0Cu) {
        ctx->pc = 0x464F0Cu;
            // 0x464f0c: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x464F10u;
        goto label_464f10;
    }
    ctx->pc = 0x464F08u;
    SET_GPR_U32(ctx, 31, 0x464F10u);
    ctx->pc = 0x464F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464F08u;
            // 0x464f0c: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F10u; }
        if (ctx->pc != 0x464F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F10u; }
        if (ctx->pc != 0x464F10u) { return; }
    }
    ctx->pc = 0x464F10u;
label_464f10:
    // 0x464f10: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x464f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_464f14:
    // 0x464f14: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x464f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_464f18:
    // 0x464f18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x464f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_464f1c:
    // 0x464f1c: 0xc04cc7c  jal         func_1331F0
label_464f20:
    if (ctx->pc == 0x464F20u) {
        ctx->pc = 0x464F20u;
            // 0x464f20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464F24u;
        goto label_464f24;
    }
    ctx->pc = 0x464F1Cu;
    SET_GPR_U32(ctx, 31, 0x464F24u);
    ctx->pc = 0x464F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464F1Cu;
            // 0x464f20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F24u; }
        if (ctx->pc != 0x464F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F24u; }
        if (ctx->pc != 0x464F24u) { return; }
    }
    ctx->pc = 0x464F24u;
label_464f24:
    // 0x464f24: 0x26050134  addiu       $a1, $s0, 0x134
    ctx->pc = 0x464f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_464f28:
    // 0x464f28: 0xc04c720  jal         func_131C80
label_464f2c:
    if (ctx->pc == 0x464F2Cu) {
        ctx->pc = 0x464F2Cu;
            // 0x464f2c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x464F30u;
        goto label_464f30;
    }
    ctx->pc = 0x464F28u;
    SET_GPR_U32(ctx, 31, 0x464F30u);
    ctx->pc = 0x464F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464F28u;
            // 0x464f2c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F30u; }
        if (ctx->pc != 0x464F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464F30u; }
        if (ctx->pc != 0x464F30u) { return; }
    }
    ctx->pc = 0x464F30u;
label_464f30:
    // 0x464f30: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x464f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_464f34:
    // 0x464f34: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x464f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_464f38:
    // 0x464f38: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x464f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464f3c:
    // 0x464f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x464f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464f40:
    // 0x464f40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x464f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_464f44:
    // 0x464f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x464f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464f48:
    // 0x464f48: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x464f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_464f4c:
    // 0x464f4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x464f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_464f50:
    // 0x464f50: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x464f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_464f54:
    // 0x464f54: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x464f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_464f58:
    // 0x464f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x464f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_464f5c:
    // 0x464f5c: 0x0  nop
    ctx->pc = 0x464f5cu;
    // NOP
label_464f60:
    // 0x464f60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x464f60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_464f64:
    // 0x464f64: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x464f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_464f68:
    // 0x464f68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x464f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_464f6c:
    // 0x464f6c: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x464f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_464f70:
    // 0x464f70: 0xae200298  sw          $zero, 0x298($s1)
    ctx->pc = 0x464f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 0));
label_464f74:
    // 0x464f74: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x464f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
label_464f78:
    // 0x464f78: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x464f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
label_464f7c:
    // 0x464f7c: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x464f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
label_464f80:
    // 0x464f80: 0xa2200300  sb          $zero, 0x300($s1)
    ctx->pc = 0x464f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 768), (uint8_t)GPR_U32(ctx, 0));
label_464f84:
    // 0x464f84: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x464f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_464f88:
    // 0x464f88: 0xae2402fc  sw          $a0, 0x2FC($s1)
    ctx->pc = 0x464f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 764), GPR_U32(ctx, 4));
label_464f8c:
    // 0x464f8c: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x464f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_464f90:
    // 0x464f90: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x464f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_464f94:
    // 0x464f94: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x464f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_464f98:
    // 0x464f98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x464f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_464f9c:
    // 0x464f9c: 0xc08bff0  jal         func_22FFC0
label_464fa0:
    if (ctx->pc == 0x464FA0u) {
        ctx->pc = 0x464FA0u;
            // 0x464fa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464FA4u;
        goto label_464fa4;
    }
    ctx->pc = 0x464F9Cu;
    SET_GPR_U32(ctx, 31, 0x464FA4u);
    ctx->pc = 0x464FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464F9Cu;
            // 0x464fa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464FA4u; }
        if (ctx->pc != 0x464FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464FA4u; }
        if (ctx->pc != 0x464FA4u) { return; }
    }
    ctx->pc = 0x464FA4u;
label_464fa4:
    // 0x464fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464fa8:
    // 0x464fa8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x464fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_464fac:
    // 0x464fac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x464facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464fb0:
    // 0x464fb0: 0xc08914c  jal         func_224530
label_464fb4:
    if (ctx->pc == 0x464FB4u) {
        ctx->pc = 0x464FB4u;
            // 0x464fb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x464FB8u;
        goto label_464fb8;
    }
    ctx->pc = 0x464FB0u;
    SET_GPR_U32(ctx, 31, 0x464FB8u);
    ctx->pc = 0x464FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464FB0u;
            // 0x464fb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464FB8u; }
        if (ctx->pc != 0x464FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x464FB8u; }
        if (ctx->pc != 0x464FB8u) { return; }
    }
    ctx->pc = 0x464FB8u;
label_464fb8:
    // 0x464fb8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x464fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464fbc:
    // 0x464fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464fc0:
    // 0x464fc0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x464fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464fc4:
    // 0x464fc4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x464fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_464fc8:
    // 0x464fc8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x464fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464fcc:
    // 0x464fcc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x464fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_464fd0:
    // 0x464fd0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x464fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_464fd4:
    // 0x464fd4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x464fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_464fd8:
    // 0x464fd8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x464fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_464fdc:
    // 0x464fdc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x464fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_464fe0:
    // 0x464fe0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x464fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_464fe4:
    // 0x464fe4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x464fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_464fe8:
    // 0x464fe8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x464fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_464fec:
    // 0x464fec: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x464fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_464ff0:
    // 0x464ff0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x464ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_464ff4:
    // 0x464ff4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x464ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_464ff8:
    // 0x464ff8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x464ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_464ffc:
    // 0x464ffc: 0xc0892b0  jal         func_224AC0
label_465000:
    if (ctx->pc == 0x465000u) {
        ctx->pc = 0x465000u;
            // 0x465000: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x465004u;
        goto label_465004;
    }
    ctx->pc = 0x464FFCu;
    SET_GPR_U32(ctx, 31, 0x465004u);
    ctx->pc = 0x465000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x464FFCu;
            // 0x465000: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465004u; }
        if (ctx->pc != 0x465004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465004u; }
        if (ctx->pc != 0x465004u) { return; }
    }
    ctx->pc = 0x465004u;
label_465004:
    // 0x465004: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x465004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_465008:
    // 0x465008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x465008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46500c:
    // 0x46500c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x46500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_465010:
    // 0x465010: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x465010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_465014:
    // 0x465014: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x465014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_465018:
    // 0x465018: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x465018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_46501c:
    // 0x46501c: 0xc0891d8  jal         func_224760
label_465020:
    if (ctx->pc == 0x465020u) {
        ctx->pc = 0x465020u;
            // 0x465020: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x465024u;
        goto label_465024;
    }
    ctx->pc = 0x46501Cu;
    SET_GPR_U32(ctx, 31, 0x465024u);
    ctx->pc = 0x465020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46501Cu;
            // 0x465020: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465024u; }
        if (ctx->pc != 0x465024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465024u; }
        if (ctx->pc != 0x465024u) { return; }
    }
    ctx->pc = 0x465024u;
label_465024:
    // 0x465024: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x465024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_465028:
    // 0x465028: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x465028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_46502c:
    // 0x46502c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x46502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_465030:
    // 0x465030: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x465030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_465034:
    // 0x465034: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x465034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_465038:
    // 0x465038: 0xc088b74  jal         func_222DD0
label_46503c:
    if (ctx->pc == 0x46503Cu) {
        ctx->pc = 0x46503Cu;
            // 0x46503c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465040u;
        goto label_465040;
    }
    ctx->pc = 0x465038u;
    SET_GPR_U32(ctx, 31, 0x465040u);
    ctx->pc = 0x46503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465038u;
            // 0x46503c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465040u; }
        if (ctx->pc != 0x465040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465040u; }
        if (ctx->pc != 0x465040u) { return; }
    }
    ctx->pc = 0x465040u;
label_465040:
    // 0x465040: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x465040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_465044:
    // 0x465044: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x465044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_465048:
    // 0x465048: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x465048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_46504c:
    // 0x46504c: 0x320f809  jalr        $t9
label_465050:
    if (ctx->pc == 0x465050u) {
        ctx->pc = 0x465050u;
            // 0x465050: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x465054u;
        goto label_465054;
    }
    ctx->pc = 0x46504Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465054u);
        ctx->pc = 0x465050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46504Cu;
            // 0x465050: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x465054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465054u; }
            if (ctx->pc != 0x465054u) { return; }
        }
        }
    }
    ctx->pc = 0x465054u;
label_465054:
    // 0x465054: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x465054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
label_465058:
    // 0x465058: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x465058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_46505c:
    // 0x46505c: 0x3442e652  ori         $v0, $v0, 0xE652
    ctx->pc = 0x46505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58962);
label_465060:
    // 0x465060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x465060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_465064:
    // 0x465064: 0xc088b74  jal         func_222DD0
label_465068:
    if (ctx->pc == 0x465068u) {
        ctx->pc = 0x465068u;
            // 0x465068: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x46506Cu;
        goto label_46506c;
    }
    ctx->pc = 0x465064u;
    SET_GPR_U32(ctx, 31, 0x46506Cu);
    ctx->pc = 0x465068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465064u;
            // 0x465068: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46506Cu; }
        if (ctx->pc != 0x46506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46506Cu; }
        if (ctx->pc != 0x46506Cu) { return; }
    }
    ctx->pc = 0x46506Cu;
label_46506c:
    // 0x46506c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x46506cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_465070:
    // 0x465070: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x465070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_465074:
    // 0x465074: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x465074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_465078:
    // 0x465078: 0x320f809  jalr        $t9
label_46507c:
    if (ctx->pc == 0x46507Cu) {
        ctx->pc = 0x46507Cu;
            // 0x46507c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x465080u;
        goto label_465080;
    }
    ctx->pc = 0x465078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465080u);
        ctx->pc = 0x46507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465078u;
            // 0x46507c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x465080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465080u; }
            if (ctx->pc != 0x465080u) { return; }
        }
        }
    }
    ctx->pc = 0x465080u;
label_465080:
    // 0x465080: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x465080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_465084:
    // 0x465084: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x465084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_465088:
    // 0x465088: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x465088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_46508c:
    // 0x46508c: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x46508cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_465090:
    // 0x465090: 0x922202f8  lbu         $v0, 0x2F8($s1)
    ctx->pc = 0x465090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
label_465094:
    // 0x465094: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_465098:
    if (ctx->pc == 0x465098u) {
        ctx->pc = 0x46509Cu;
        goto label_46509c;
    }
    ctx->pc = 0x465094u;
    {
        const bool branch_taken_0x465094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465094) {
            ctx->pc = 0x465118u;
            goto label_465118;
        }
    }
    ctx->pc = 0x46509Cu;
label_46509c:
    // 0x46509c: 0x8e2302f0  lw          $v1, 0x2F0($s1)
    ctx->pc = 0x46509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_4650a0:
    // 0x4650a0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x4650a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_4650a4:
    // 0x4650a4: 0x24a50510  addiu       $a1, $a1, 0x510
    ctx->pc = 0x4650a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1296));
label_4650a8:
    // 0x4650a8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x4650a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_4650ac:
    // 0x4650ac: 0x24840550  addiu       $a0, $a0, 0x550
    ctx->pc = 0x4650acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1360));
label_4650b0:
    // 0x4650b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4650b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4650b4:
    // 0x4650b4: 0xac6500cc  sw          $a1, 0xCC($v1)
    ctx->pc = 0x4650b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 5));
label_4650b8:
    // 0x4650b8: 0x8e2302f4  lw          $v1, 0x2F4($s1)
    ctx->pc = 0x4650b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 756)));
label_4650bc:
    // 0x4650bc: 0xac6400cc  sw          $a0, 0xCC($v1)
    ctx->pc = 0x4650bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 4));
label_4650c0:
    // 0x4650c0: 0x8c4375e8  lw          $v1, 0x75E8($v0)
    ctx->pc = 0x4650c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30184)));
label_4650c4:
    // 0x4650c4: 0x922202f8  lbu         $v0, 0x2F8($s1)
    ctx->pc = 0x4650c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
label_4650c8:
    // 0x4650c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_4650cc:
    if (ctx->pc == 0x4650CCu) {
        ctx->pc = 0x4650CCu;
            // 0x4650cc: 0x8c670094  lw          $a3, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->pc = 0x4650D0u;
        goto label_4650d0;
    }
    ctx->pc = 0x4650C8u;
    {
        const bool branch_taken_0x4650c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4650CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4650C8u;
            // 0x4650cc: 0x8c670094  lw          $a3, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4650c8) {
            ctx->pc = 0x465118u;
            goto label_465118;
        }
    }
    ctx->pc = 0x4650D0u;
label_4650d0:
    // 0x4650d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4650d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4650d4:
    // 0x4650d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4650d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4650d8:
    // 0x4650d8: 0x262602b0  addiu       $a2, $s1, 0x2B0
    ctx->pc = 0x4650d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_4650dc:
    // 0x4650dc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x4650dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_4650e0:
    // 0x4650e0: 0x8d0302f0  lw          $v1, 0x2F0($t0)
    ctx->pc = 0x4650e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_4650e4:
    // 0x4650e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4650e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4650e8:
    // 0x4650e8: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x4650e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_4650ec:
    // 0x4650ec: 0xac670080  sw          $a3, 0x80($v1)
    ctx->pc = 0x4650ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 7));
label_4650f0:
    // 0x4650f0: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x4650f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_4650f4:
    // 0x4650f4: 0xac660088  sw          $a2, 0x88($v1)
    ctx->pc = 0x4650f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 6));
label_4650f8:
    // 0x4650f8: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x4650f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
label_4650fc:
    // 0x4650fc: 0xac650090  sw          $a1, 0x90($v1)
    ctx->pc = 0x4650fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 5));
label_465100:
    // 0x465100: 0x8d0402f0  lw          $a0, 0x2F0($t0)
    ctx->pc = 0x465100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_465104:
    // 0x465104: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x465104u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_465108:
    // 0x465108: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x465108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_46510c:
    // 0x46510c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x46510cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_465110:
    // 0x465110: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_465114:
    if (ctx->pc == 0x465114u) {
        ctx->pc = 0x465114u;
            // 0x465114: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x465118u;
        goto label_465118;
    }
    ctx->pc = 0x465110u;
    {
        const bool branch_taken_0x465110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465110u;
            // 0x465114: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465110) {
            ctx->pc = 0x4650E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4650e0;
        }
    }
    ctx->pc = 0x465118u;
label_465118:
    // 0x465118: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x465118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_46511c:
    // 0x46511c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_465120:
    // 0x465120: 0x8c4275e8  lw          $v0, 0x75E8($v0)
    ctx->pc = 0x465120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30184)));
label_465124:
    // 0x465124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465128:
    // 0x465128: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x465128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_46512c:
    // 0x46512c: 0x320f809  jalr        $t9
label_465130:
    if (ctx->pc == 0x465130u) {
        ctx->pc = 0x465130u;
            // 0x465130: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->pc = 0x465134u;
        goto label_465134;
    }
    ctx->pc = 0x46512Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465134u);
        ctx->pc = 0x465130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46512Cu;
            // 0x465130: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x465134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465134u; }
            if (ctx->pc != 0x465134u) { return; }
        }
        }
    }
    ctx->pc = 0x465134u;
label_465134:
    // 0x465134: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x465134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_465138:
    // 0x465138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46513c:
    // 0x46513c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46513cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465140:
    // 0x465140: 0x3e00008  jr          $ra
label_465144:
    if (ctx->pc == 0x465144u) {
        ctx->pc = 0x465144u;
            // 0x465144: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x465148u;
        goto label_465148;
    }
    ctx->pc = 0x465140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465140u;
            // 0x465144: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465148u;
label_465148:
    // 0x465148: 0x0  nop
    ctx->pc = 0x465148u;
    // NOP
label_46514c:
    // 0x46514c: 0x0  nop
    ctx->pc = 0x46514cu;
    // NOP
label_465150:
    // 0x465150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x465150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_465154:
    // 0x465154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x465154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_465158:
    // 0x465158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x465158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46515c:
    // 0x46515c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_465160:
    // 0x465160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465164:
    // 0x465164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x465164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465168:
    // 0x465168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46516c:
    // 0x46516c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46516cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_465170:
    // 0x465170: 0xac8200d0  sw          $v0, 0xD0($a0)
    ctx->pc = 0x465170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 2));
label_465174:
    // 0x465174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x465174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465178:
    // 0x465178: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x465178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_46517c:
    // 0x46517c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x46517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_465180:
    // 0x465180: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x465180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
label_465184:
    // 0x465184: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x465184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_465188:
    // 0x465188: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x465188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_46518c:
    // 0x46518c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_465190:
    // 0x465190: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x465190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_465194:
    // 0x465194: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x465194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_465198:
    // 0x465198: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x465198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46519c:
    // 0x46519c: 0xc08bff0  jal         func_22FFC0
label_4651a0:
    if (ctx->pc == 0x4651A0u) {
        ctx->pc = 0x4651A0u;
            // 0x4651a0: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x4651A4u;
        goto label_4651a4;
    }
    ctx->pc = 0x46519Cu;
    SET_GPR_U32(ctx, 31, 0x4651A4u);
    ctx->pc = 0x4651A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46519Cu;
            // 0x4651a0: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4651A4u; }
        if (ctx->pc != 0x4651A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4651A4u; }
        if (ctx->pc != 0x4651A4u) { return; }
    }
    ctx->pc = 0x4651A4u;
label_4651a4:
    // 0x4651a4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4651a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4651a8:
    // 0x4651a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4651a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4651ac:
    // 0x4651ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4651acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4651b0:
    // 0x4651b0: 0xc08914c  jal         func_224530
label_4651b4:
    if (ctx->pc == 0x4651B4u) {
        ctx->pc = 0x4651B4u;
            // 0x4651b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4651B8u;
        goto label_4651b8;
    }
    ctx->pc = 0x4651B0u;
    SET_GPR_U32(ctx, 31, 0x4651B8u);
    ctx->pc = 0x4651B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4651B0u;
            // 0x4651b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4651B8u; }
        if (ctx->pc != 0x4651B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4651B8u; }
        if (ctx->pc != 0x4651B8u) { return; }
    }
    ctx->pc = 0x4651B8u;
label_4651b8:
    // 0x4651b8: 0xc0e393c  jal         func_38E4F0
label_4651bc:
    if (ctx->pc == 0x4651BCu) {
        ctx->pc = 0x4651BCu;
            // 0x4651bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4651C0u;
        goto label_4651c0;
    }
    ctx->pc = 0x4651B8u;
    SET_GPR_U32(ctx, 31, 0x4651C0u);
    ctx->pc = 0x4651BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4651B8u;
            // 0x4651bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4651C0u; }
        if (ctx->pc != 0x4651C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4651C0u; }
        if (ctx->pc != 0x4651C0u) { return; }
    }
    ctx->pc = 0x4651C0u;
label_4651c0:
    // 0x4651c0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x4651c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4651c4:
    // 0x4651c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4651c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4651c8:
    // 0x4651c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4651c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4651cc:
    // 0x4651cc: 0x0  nop
    ctx->pc = 0x4651ccu;
    // NOP
label_4651d0:
    // 0x4651d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4651d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4651d4:
    // 0x4651d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4651d8:
    if (ctx->pc == 0x4651D8u) {
        ctx->pc = 0x4651D8u;
            // 0x4651d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4651DCu;
        goto label_4651dc;
    }
    ctx->pc = 0x4651D4u;
    {
        const bool branch_taken_0x4651d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4651d4) {
            ctx->pc = 0x4651D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4651D4u;
            // 0x4651d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4651ECu;
            goto label_4651ec;
        }
    }
    ctx->pc = 0x4651DCu;
label_4651dc:
    // 0x4651dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4651dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4651e0:
    // 0x4651e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4651e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4651e4:
    // 0x4651e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4651e8:
    if (ctx->pc == 0x4651E8u) {
        ctx->pc = 0x4651E8u;
            // 0x4651e8: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4651ECu;
        goto label_4651ec;
    }
    ctx->pc = 0x4651E4u;
    {
        const bool branch_taken_0x4651e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4651E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4651E4u;
            // 0x4651e8: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4651e4) {
            ctx->pc = 0x465204u;
            goto label_465204;
        }
    }
    ctx->pc = 0x4651ECu;
label_4651ec:
    // 0x4651ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4651ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4651f0:
    // 0x4651f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4651f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4651f4:
    // 0x4651f4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4651f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4651f8:
    // 0x4651f8: 0x0  nop
    ctx->pc = 0x4651f8u;
    // NOP
label_4651fc:
    // 0x4651fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4651fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_465200:
    // 0x465200: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x465200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_465204:
    // 0x465204: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x465204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_465208:
    // 0x465208: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x465208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_46520c:
    // 0x46520c: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x46520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_465210:
    // 0x465210: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x465210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_465214:
    // 0x465214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x465214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_465218:
    // 0x465218: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x465218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_46521c:
    // 0x46521c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x46521cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_465220:
    // 0x465220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x465220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465224:
    // 0x465224: 0x0  nop
    ctx->pc = 0x465224u;
    // NOP
label_465228:
    // 0x465228: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x465228u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_46522c:
    // 0x46522c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x46522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_465230:
    // 0x465230: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x465230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_465234:
    // 0x465234: 0xc62e0038  lwc1        $f14, 0x38($s1)
    ctx->pc = 0x465234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_465238:
    // 0x465238: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x465238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_46523c:
    // 0x46523c: 0x0  nop
    ctx->pc = 0x46523cu;
    // NOP
label_465240:
    // 0x465240: 0x0  nop
    ctx->pc = 0x465240u;
    // NOP
label_465244:
    // 0x465244: 0xc0d8aac  jal         func_362AB0
label_465248:
    if (ctx->pc == 0x465248u) {
        ctx->pc = 0x46524Cu;
        goto label_46524c;
    }
    ctx->pc = 0x465244u;
    SET_GPR_U32(ctx, 31, 0x46524Cu);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46524Cu; }
        if (ctx->pc != 0x46524Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46524Cu; }
        if (ctx->pc != 0x46524Cu) { return; }
    }
    ctx->pc = 0x46524Cu;
label_46524c:
    // 0x46524c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x46524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_465250:
    // 0x465250: 0xc04cc04  jal         func_133010
label_465254:
    if (ctx->pc == 0x465254u) {
        ctx->pc = 0x465254u;
            // 0x465254: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x465258u;
        goto label_465258;
    }
    ctx->pc = 0x465250u;
    SET_GPR_U32(ctx, 31, 0x465258u);
    ctx->pc = 0x465254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465250u;
            // 0x465254: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465258u; }
        if (ctx->pc != 0x465258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465258u; }
        if (ctx->pc != 0x465258u) { return; }
    }
    ctx->pc = 0x465258u;
label_465258:
    // 0x465258: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x465258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_46525c:
    // 0x46525c: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x46525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_465260:
    // 0x465260: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x465260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_465264:
    // 0x465264: 0xc04cc7c  jal         func_1331F0
label_465268:
    if (ctx->pc == 0x465268u) {
        ctx->pc = 0x465268u;
            // 0x465268: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46526Cu;
        goto label_46526c;
    }
    ctx->pc = 0x465264u;
    SET_GPR_U32(ctx, 31, 0x46526Cu);
    ctx->pc = 0x465268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465264u;
            // 0x465268: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46526Cu; }
        if (ctx->pc != 0x46526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46526Cu; }
        if (ctx->pc != 0x46526Cu) { return; }
    }
    ctx->pc = 0x46526Cu;
label_46526c:
    // 0x46526c: 0x26050134  addiu       $a1, $s0, 0x134
    ctx->pc = 0x46526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_465270:
    // 0x465270: 0xc04c720  jal         func_131C80
label_465274:
    if (ctx->pc == 0x465274u) {
        ctx->pc = 0x465274u;
            // 0x465274: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x465278u;
        goto label_465278;
    }
    ctx->pc = 0x465270u;
    SET_GPR_U32(ctx, 31, 0x465278u);
    ctx->pc = 0x465274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465270u;
            // 0x465274: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465278u; }
        if (ctx->pc != 0x465278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465278u; }
        if (ctx->pc != 0x465278u) { return; }
    }
    ctx->pc = 0x465278u;
label_465278:
    // 0x465278: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x465278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_46527c:
    // 0x46527c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x46527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_465280:
    // 0x465280: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x465280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_465284:
    // 0x465284: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x465284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_465288:
    // 0x465288: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x465288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_46528c:
    // 0x46528c: 0xc088b74  jal         func_222DD0
label_465290:
    if (ctx->pc == 0x465290u) {
        ctx->pc = 0x465290u;
            // 0x465290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465294u;
        goto label_465294;
    }
    ctx->pc = 0x46528Cu;
    SET_GPR_U32(ctx, 31, 0x465294u);
    ctx->pc = 0x465290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46528Cu;
            // 0x465290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465294u; }
        if (ctx->pc != 0x465294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465294u; }
        if (ctx->pc != 0x465294u) { return; }
    }
    ctx->pc = 0x465294u;
label_465294:
    // 0x465294: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x465294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_465298:
    // 0x465298: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x465298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_46529c:
    // 0x46529c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x46529cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4652a0:
    // 0x4652a0: 0x320f809  jalr        $t9
label_4652a4:
    if (ctx->pc == 0x4652A4u) {
        ctx->pc = 0x4652A4u;
            // 0x4652a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4652A8u;
        goto label_4652a8;
    }
    ctx->pc = 0x4652A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4652A8u);
        ctx->pc = 0x4652A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4652A0u;
            // 0x4652a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4652A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4652A8u; }
            if (ctx->pc != 0x4652A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4652A8u;
label_4652a8:
    // 0x4652a8: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x4652a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
label_4652ac:
    // 0x4652ac: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x4652acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_4652b0:
    // 0x4652b0: 0x3442e652  ori         $v0, $v0, 0xE652
    ctx->pc = 0x4652b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58962);
label_4652b4:
    // 0x4652b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4652b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4652b8:
    // 0x4652b8: 0xc088b74  jal         func_222DD0
label_4652bc:
    if (ctx->pc == 0x4652BCu) {
        ctx->pc = 0x4652BCu;
            // 0x4652bc: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x4652C0u;
        goto label_4652c0;
    }
    ctx->pc = 0x4652B8u;
    SET_GPR_U32(ctx, 31, 0x4652C0u);
    ctx->pc = 0x4652BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4652B8u;
            // 0x4652bc: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4652C0u; }
        if (ctx->pc != 0x4652C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4652C0u; }
        if (ctx->pc != 0x4652C0u) { return; }
    }
    ctx->pc = 0x4652C0u;
label_4652c0:
    // 0x4652c0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4652c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4652c4:
    // 0x4652c4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4652c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4652c8:
    // 0x4652c8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4652c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4652cc:
    // 0x4652cc: 0x320f809  jalr        $t9
label_4652d0:
    if (ctx->pc == 0x4652D0u) {
        ctx->pc = 0x4652D0u;
            // 0x4652d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4652D4u;
        goto label_4652d4;
    }
    ctx->pc = 0x4652CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4652D4u);
        ctx->pc = 0x4652D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4652CCu;
            // 0x4652d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4652D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4652D4u; }
            if (ctx->pc != 0x4652D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4652D4u;
label_4652d4:
    // 0x4652d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4652d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4652d8:
    // 0x4652d8: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4652d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_4652dc:
    // 0x4652dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4652dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4652e0:
    // 0x4652e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4652e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4652e4:
    // 0x4652e4: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x4652e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_4652e8:
    // 0x4652e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4652e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4652ec:
    // 0x4652ec: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4652ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4652f0:
    // 0x4652f0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4652f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4652f4:
    // 0x4652f4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4652f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4652f8:
    // 0x4652f8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4652f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4652fc:
    // 0x4652fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4652fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_465300:
    // 0x465300: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x465300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_465304:
    // 0x465304: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x465304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_465308:
    // 0x465308: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x465308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_46530c:
    // 0x46530c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x46530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_465310:
    // 0x465310: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x465310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_465314:
    // 0x465314: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x465314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_465318:
    // 0x465318: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x465318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46531c:
    // 0x46531c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x46531cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_465320:
    // 0x465320: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x465320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_465324:
    // 0x465324: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x465324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_465328:
    // 0x465328: 0xc0892b0  jal         func_224AC0
label_46532c:
    if (ctx->pc == 0x46532Cu) {
        ctx->pc = 0x46532Cu;
            // 0x46532c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x465330u;
        goto label_465330;
    }
    ctx->pc = 0x465328u;
    SET_GPR_U32(ctx, 31, 0x465330u);
    ctx->pc = 0x46532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465328u;
            // 0x46532c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465330u; }
        if (ctx->pc != 0x465330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465330u; }
        if (ctx->pc != 0x465330u) { return; }
    }
    ctx->pc = 0x465330u;
label_465330:
    // 0x465330: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x465330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
label_465334:
    // 0x465334: 0xa2200300  sb          $zero, 0x300($s1)
    ctx->pc = 0x465334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 768), (uint8_t)GPR_U32(ctx, 0));
label_465338:
    // 0x465338: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x465338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_46533c:
    // 0x46533c: 0xae2202fc  sw          $v0, 0x2FC($s1)
    ctx->pc = 0x46533cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 764), GPR_U32(ctx, 2));
label_465340:
    // 0x465340: 0xc122c94  jal         func_48B250
label_465344:
    if (ctx->pc == 0x465344u) {
        ctx->pc = 0x465344u;
            // 0x465344: 0x8e24029c  lw          $a0, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->pc = 0x465348u;
        goto label_465348;
    }
    ctx->pc = 0x465340u;
    SET_GPR_U32(ctx, 31, 0x465348u);
    ctx->pc = 0x465344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465340u;
            // 0x465344: 0x8e24029c  lw          $a0, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465348u; }
        if (ctx->pc != 0x465348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465348u; }
        if (ctx->pc != 0x465348u) { return; }
    }
    ctx->pc = 0x465348u;
label_465348:
    // 0x465348: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x465348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_46534c:
    // 0x46534c: 0xa222004c  sb          $v0, 0x4C($s1)
    ctx->pc = 0x46534cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
label_465350:
    // 0x465350: 0xae2002ac  sw          $zero, 0x2AC($s1)
    ctx->pc = 0x465350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
label_465354:
    // 0x465354: 0x922202f8  lbu         $v0, 0x2F8($s1)
    ctx->pc = 0x465354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
label_465358:
    // 0x465358: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_46535c:
    if (ctx->pc == 0x46535Cu) {
        ctx->pc = 0x465360u;
        goto label_465360;
    }
    ctx->pc = 0x465358u;
    {
        const bool branch_taken_0x465358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465358) {
            ctx->pc = 0x465408u;
            goto label_465408;
        }
    }
    ctx->pc = 0x465360u;
label_465360:
    // 0x465360: 0x8e2202f0  lw          $v0, 0x2F0($s1)
    ctx->pc = 0x465360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_465364:
    // 0x465364: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x465364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_465368:
    // 0x465368: 0x24840510  addiu       $a0, $a0, 0x510
    ctx->pc = 0x465368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
label_46536c:
    // 0x46536c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x46536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_465370:
    // 0x465370: 0x24630550  addiu       $v1, $v1, 0x550
    ctx->pc = 0x465370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1360));
label_465374:
    // 0x465374: 0xac4400cc  sw          $a0, 0xCC($v0)
    ctx->pc = 0x465374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 4));
label_465378:
    // 0x465378: 0x8e2202f4  lw          $v0, 0x2F4($s1)
    ctx->pc = 0x465378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 756)));
label_46537c:
    // 0x46537c: 0xac4300cc  sw          $v1, 0xCC($v0)
    ctx->pc = 0x46537cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
label_465380:
    // 0x465380: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x465380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
label_465384:
    // 0x465384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465388:
    // 0x465388: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x465388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46538c:
    // 0x46538c: 0x320f809  jalr        $t9
label_465390:
    if (ctx->pc == 0x465390u) {
        ctx->pc = 0x465394u;
        goto label_465394;
    }
    ctx->pc = 0x46538Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x465394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465394u; }
            if (ctx->pc != 0x465394u) { return; }
        }
        }
    }
    ctx->pc = 0x465394u;
label_465394:
    // 0x465394: 0x8e2402f4  lw          $a0, 0x2F4($s1)
    ctx->pc = 0x465394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 756)));
label_465398:
    // 0x465398: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46539c:
    // 0x46539c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46539cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4653a0:
    // 0x4653a0: 0x320f809  jalr        $t9
label_4653a4:
    if (ctx->pc == 0x4653A4u) {
        ctx->pc = 0x4653A8u;
        goto label_4653a8;
    }
    ctx->pc = 0x4653A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4653A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4653A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4653A8u; }
            if (ctx->pc != 0x4653A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4653A8u;
label_4653a8:
    // 0x4653a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4653a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4653ac:
    // 0x4653ac: 0x922302f8  lbu         $v1, 0x2F8($s1)
    ctx->pc = 0x4653acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 760)));
label_4653b0:
    // 0x4653b0: 0x8c4275e8  lw          $v0, 0x75E8($v0)
    ctx->pc = 0x4653b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30184)));
label_4653b4:
    // 0x4653b4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_4653b8:
    if (ctx->pc == 0x4653B8u) {
        ctx->pc = 0x4653B8u;
            // 0x4653b8: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->pc = 0x4653BCu;
        goto label_4653bc;
    }
    ctx->pc = 0x4653B4u;
    {
        const bool branch_taken_0x4653b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4653B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4653B4u;
            // 0x4653b8: 0x8c470094  lw          $a3, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4653b4) {
            ctx->pc = 0x465408u;
            goto label_465408;
        }
    }
    ctx->pc = 0x4653BCu;
label_4653bc:
    // 0x4653bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4653bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4653c0:
    // 0x4653c0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4653c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4653c4:
    // 0x4653c4: 0x262602b0  addiu       $a2, $s1, 0x2B0
    ctx->pc = 0x4653c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_4653c8:
    // 0x4653c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x4653c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_4653cc:
    // 0x4653cc: 0x8d0302f0  lw          $v1, 0x2F0($t0)
    ctx->pc = 0x4653ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_4653d0:
    // 0x4653d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4653d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4653d4:
    // 0x4653d4: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x4653d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
label_4653d8:
    // 0x4653d8: 0xac670080  sw          $a3, 0x80($v1)
    ctx->pc = 0x4653d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 7));
label_4653dc:
    // 0x4653dc: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x4653dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_4653e0:
    // 0x4653e0: 0xac660088  sw          $a2, 0x88($v1)
    ctx->pc = 0x4653e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 6));
label_4653e4:
    // 0x4653e4: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x4653e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
label_4653e8:
    // 0x4653e8: 0xac650090  sw          $a1, 0x90($v1)
    ctx->pc = 0x4653e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 5));
label_4653ec:
    // 0x4653ec: 0x8d0402f0  lw          $a0, 0x2F0($t0)
    ctx->pc = 0x4653ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 752)));
label_4653f0:
    // 0x4653f0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x4653f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4653f4:
    // 0x4653f4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4653f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_4653f8:
    // 0x4653f8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4653f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_4653fc:
    // 0x4653fc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_465400:
    if (ctx->pc == 0x465400u) {
        ctx->pc = 0x465400u;
            // 0x465400: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x465404u;
        goto label_465404;
    }
    ctx->pc = 0x4653FCu;
    {
        const bool branch_taken_0x4653fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4653FCu;
            // 0x465400: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4653fc) {
            ctx->pc = 0x4653CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4653cc;
        }
    }
    ctx->pc = 0x465404u;
label_465404:
    // 0x465404: 0x0  nop
    ctx->pc = 0x465404u;
    // NOP
label_465408:
    // 0x465408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x465408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46540c:
    // 0x46540c: 0xa2220301  sb          $v0, 0x301($s1)
    ctx->pc = 0x46540cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 769), (uint8_t)GPR_U32(ctx, 2));
label_465410:
    // 0x465410: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x465410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_465414:
    // 0x465414: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x465414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_465418:
    // 0x465418: 0x8c4275e8  lw          $v0, 0x75E8($v0)
    ctx->pc = 0x465418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30184)));
label_46541c:
    // 0x46541c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46541cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465420:
    // 0x465420: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x465420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_465424:
    // 0x465424: 0x320f809  jalr        $t9
label_465428:
    if (ctx->pc == 0x465428u) {
        ctx->pc = 0x465428u;
            // 0x465428: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->pc = 0x46542Cu;
        goto label_46542c;
    }
    ctx->pc = 0x465424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46542Cu);
        ctx->pc = 0x465428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465424u;
            // 0x465428: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46542Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46542Cu; }
            if (ctx->pc != 0x46542Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46542Cu;
label_46542c:
    // 0x46542c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46542cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_465430:
    // 0x465430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465434:
    // 0x465434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465438:
    // 0x465438: 0x3e00008  jr          $ra
label_46543c:
    if (ctx->pc == 0x46543Cu) {
        ctx->pc = 0x46543Cu;
            // 0x46543c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x465440u;
        goto label_465440;
    }
    ctx->pc = 0x465438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465438u;
            // 0x46543c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465440u;
label_465440:
    // 0x465440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x465440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_465444:
    // 0x465444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x465444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_465448:
    // 0x465448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46544c:
    // 0x46544c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465450:
    // 0x465450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x465450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_465454:
    // 0x465454: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_465458:
    if (ctx->pc == 0x465458u) {
        ctx->pc = 0x465458u;
            // 0x465458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46545Cu;
        goto label_46545c;
    }
    ctx->pc = 0x465454u;
    {
        const bool branch_taken_0x465454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x465458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465454u;
            // 0x465458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465454) {
            ctx->pc = 0x465534u;
            goto label_465534;
        }
    }
    ctx->pc = 0x46545Cu;
label_46545c:
    // 0x46545c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x46545cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_465460:
    // 0x465460: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x465460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_465464:
    // 0x465464: 0x2463e690  addiu       $v1, $v1, -0x1970
    ctx->pc = 0x465464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960784));
label_465468:
    // 0x465468: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x465468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_46546c:
    // 0x46546c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x46546cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_465470:
    // 0x465470: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x465470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_465474:
    // 0x465474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465478:
    // 0x465478: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x465478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_46547c:
    // 0x46547c: 0x320f809  jalr        $t9
label_465480:
    if (ctx->pc == 0x465480u) {
        ctx->pc = 0x465484u;
        goto label_465484;
    }
    ctx->pc = 0x46547Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465484u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x465484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465484u; }
            if (ctx->pc != 0x465484u) { return; }
        }
        }
    }
    ctx->pc = 0x465484u;
label_465484:
    // 0x465484: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x465484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_465488:
    // 0x465488: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46548c:
    if (ctx->pc == 0x46548Cu) {
        ctx->pc = 0x465490u;
        goto label_465490;
    }
    ctx->pc = 0x465488u;
    {
        const bool branch_taken_0x465488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465488) {
            ctx->pc = 0x46549Cu;
            goto label_46549c;
        }
    }
    ctx->pc = 0x465490u;
label_465490:
    // 0x465490: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_465494:
    // 0x465494: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x465494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_465498:
    // 0x465498: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x465498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_46549c:
    // 0x46549c: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_4654a0:
    if (ctx->pc == 0x4654A0u) {
        ctx->pc = 0x4654A0u;
            // 0x4654a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4654A4u;
        goto label_4654a4;
    }
    ctx->pc = 0x46549Cu;
    {
        const bool branch_taken_0x46549c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46549c) {
            ctx->pc = 0x4654A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46549Cu;
            // 0x4654a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465520u;
            goto label_465520;
        }
    }
    ctx->pc = 0x4654A4u;
label_4654a4:
    // 0x4654a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4654a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4654a8:
    // 0x4654a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4654a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4654ac:
    // 0x4654ac: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4654acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4654b0:
    // 0x4654b0: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4654b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4654b4:
    // 0x4654b4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4654b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4654b8:
    // 0x4654b8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4654b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4654bc:
    // 0x4654bc: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4654bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4654c0:
    // 0x4654c0: 0xc0aecc4  jal         func_2BB310
label_4654c4:
    if (ctx->pc == 0x4654C4u) {
        ctx->pc = 0x4654C4u;
            // 0x4654c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4654C8u;
        goto label_4654c8;
    }
    ctx->pc = 0x4654C0u;
    SET_GPR_U32(ctx, 31, 0x4654C8u);
    ctx->pc = 0x4654C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4654C0u;
            // 0x4654c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4654C8u; }
        if (ctx->pc != 0x4654C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4654C8u; }
        if (ctx->pc != 0x4654C8u) { return; }
    }
    ctx->pc = 0x4654C8u;
label_4654c8:
    // 0x4654c8: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4654c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4654cc:
    // 0x4654cc: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x4654ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4654d0:
    // 0x4654d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4654d4:
    if (ctx->pc == 0x4654D4u) {
        ctx->pc = 0x4654D4u;
            // 0x4654d4: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4654D8u;
        goto label_4654d8;
    }
    ctx->pc = 0x4654D0u;
    {
        const bool branch_taken_0x4654d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4654d0) {
            ctx->pc = 0x4654D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4654D0u;
            // 0x4654d4: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4654ECu;
            goto label_4654ec;
        }
    }
    ctx->pc = 0x4654D8u;
label_4654d8:
    // 0x4654d8: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4654d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4654dc:
    // 0x4654dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4654dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4654e0:
    // 0x4654e0: 0x320f809  jalr        $t9
label_4654e4:
    if (ctx->pc == 0x4654E4u) {
        ctx->pc = 0x4654E4u;
            // 0x4654e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4654E8u;
        goto label_4654e8;
    }
    ctx->pc = 0x4654E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4654E8u);
        ctx->pc = 0x4654E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4654E0u;
            // 0x4654e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4654E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4654E8u; }
            if (ctx->pc != 0x4654E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4654E8u;
label_4654e8:
    // 0x4654e8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4654e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4654ec:
    // 0x4654ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4654ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4654f0:
    // 0x4654f0: 0xc0aec9c  jal         func_2BB270
label_4654f4:
    if (ctx->pc == 0x4654F4u) {
        ctx->pc = 0x4654F4u;
            // 0x4654f4: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4654F8u;
        goto label_4654f8;
    }
    ctx->pc = 0x4654F0u;
    SET_GPR_U32(ctx, 31, 0x4654F8u);
    ctx->pc = 0x4654F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4654F0u;
            // 0x4654f4: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4654F8u; }
        if (ctx->pc != 0x4654F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4654F8u; }
        if (ctx->pc != 0x4654F8u) { return; }
    }
    ctx->pc = 0x4654F8u;
label_4654f8:
    // 0x4654f8: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x4654f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_4654fc:
    // 0x4654fc: 0xc0aec88  jal         func_2BB220
label_465500:
    if (ctx->pc == 0x465500u) {
        ctx->pc = 0x465500u;
            // 0x465500: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x465504u;
        goto label_465504;
    }
    ctx->pc = 0x4654FCu;
    SET_GPR_U32(ctx, 31, 0x465504u);
    ctx->pc = 0x465500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4654FCu;
            // 0x465500: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465504u; }
        if (ctx->pc != 0x465504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465504u; }
        if (ctx->pc != 0x465504u) { return; }
    }
    ctx->pc = 0x465504u;
label_465504:
    // 0x465504: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x465504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_465508:
    // 0x465508: 0xc0aec0c  jal         func_2BB030
label_46550c:
    if (ctx->pc == 0x46550Cu) {
        ctx->pc = 0x46550Cu;
            // 0x46550c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465510u;
        goto label_465510;
    }
    ctx->pc = 0x465508u;
    SET_GPR_U32(ctx, 31, 0x465510u);
    ctx->pc = 0x46550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465508u;
            // 0x46550c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465510u; }
        if (ctx->pc != 0x465510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465510u; }
        if (ctx->pc != 0x465510u) { return; }
    }
    ctx->pc = 0x465510u;
label_465510:
    // 0x465510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x465510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465514:
    // 0x465514: 0xc0aeaa8  jal         func_2BAAA0
label_465518:
    if (ctx->pc == 0x465518u) {
        ctx->pc = 0x465518u;
            // 0x465518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46551Cu;
        goto label_46551c;
    }
    ctx->pc = 0x465514u;
    SET_GPR_U32(ctx, 31, 0x46551Cu);
    ctx->pc = 0x465518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465514u;
            // 0x465518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46551Cu; }
        if (ctx->pc != 0x46551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46551Cu; }
        if (ctx->pc != 0x46551Cu) { return; }
    }
    ctx->pc = 0x46551Cu;
label_46551c:
    // 0x46551c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x46551cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_465520:
    // 0x465520: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x465520u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_465524:
    // 0x465524: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_465528:
    if (ctx->pc == 0x465528u) {
        ctx->pc = 0x465528u;
            // 0x465528: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46552Cu;
        goto label_46552c;
    }
    ctx->pc = 0x465524u;
    {
        const bool branch_taken_0x465524 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x465524) {
            ctx->pc = 0x465528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465524u;
            // 0x465528: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465538u;
            goto label_465538;
        }
    }
    ctx->pc = 0x46552Cu;
label_46552c:
    // 0x46552c: 0xc0400a8  jal         func_1002A0
label_465530:
    if (ctx->pc == 0x465530u) {
        ctx->pc = 0x465530u;
            // 0x465530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465534u;
        goto label_465534;
    }
    ctx->pc = 0x46552Cu;
    SET_GPR_U32(ctx, 31, 0x465534u);
    ctx->pc = 0x465530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46552Cu;
            // 0x465530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465534u; }
        if (ctx->pc != 0x465534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465534u; }
        if (ctx->pc != 0x465534u) { return; }
    }
    ctx->pc = 0x465534u;
label_465534:
    // 0x465534: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465538:
    // 0x465538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x465538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46553c:
    // 0x46553c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46553cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465540:
    // 0x465540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465544:
    // 0x465544: 0x3e00008  jr          $ra
label_465548:
    if (ctx->pc == 0x465548u) {
        ctx->pc = 0x465548u;
            // 0x465548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x46554Cu;
        goto label_46554c;
    }
    ctx->pc = 0x465544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465544u;
            // 0x465548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46554Cu;
label_46554c:
    // 0x46554c: 0x0  nop
    ctx->pc = 0x46554cu;
    // NOP
label_465550:
    // 0x465550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x465550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_465554:
    // 0x465554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x465554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_465558:
    // 0x465558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46555c:
    // 0x46555c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465560:
    // 0x465560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x465560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_465564:
    // 0x465564: 0xc0aeebc  jal         func_2BBAF0
label_465568:
    if (ctx->pc == 0x465568u) {
        ctx->pc = 0x465568u;
            // 0x465568: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x46556Cu;
        goto label_46556c;
    }
    ctx->pc = 0x465564u;
    SET_GPR_U32(ctx, 31, 0x46556Cu);
    ctx->pc = 0x465568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465564u;
            // 0x465568: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46556Cu; }
        if (ctx->pc != 0x46556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46556Cu; }
        if (ctx->pc != 0x46556Cu) { return; }
    }
    ctx->pc = 0x46556Cu;
label_46556c:
    // 0x46556c: 0xc0aeeb4  jal         func_2BBAD0
label_465570:
    if (ctx->pc == 0x465570u) {
        ctx->pc = 0x465570u;
            // 0x465570: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x465574u;
        goto label_465574;
    }
    ctx->pc = 0x46556Cu;
    SET_GPR_U32(ctx, 31, 0x465574u);
    ctx->pc = 0x465570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46556Cu;
            // 0x465570: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465574u; }
        if (ctx->pc != 0x465574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465574u; }
        if (ctx->pc != 0x465574u) { return; }
    }
    ctx->pc = 0x465574u;
label_465574:
    // 0x465574: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x465574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_465578:
    // 0x465578: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_46557c:
    // 0x46557c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x46557cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_465580:
    // 0x465580: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x465580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_465584:
    // 0x465584: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x465584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_465588:
    // 0x465588: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x465588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_46558c:
    // 0x46558c: 0xc0aeea4  jal         func_2BBA90
label_465590:
    if (ctx->pc == 0x465590u) {
        ctx->pc = 0x465590u;
            // 0x465590: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x465594u;
        goto label_465594;
    }
    ctx->pc = 0x46558Cu;
    SET_GPR_U32(ctx, 31, 0x465594u);
    ctx->pc = 0x465590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46558Cu;
            // 0x465590: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465594u; }
        if (ctx->pc != 0x465594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465594u; }
        if (ctx->pc != 0x465594u) { return; }
    }
    ctx->pc = 0x465594u;
label_465594:
    // 0x465594: 0xc0aee8c  jal         func_2BBA30
label_465598:
    if (ctx->pc == 0x465598u) {
        ctx->pc = 0x465598u;
            // 0x465598: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x46559Cu;
        goto label_46559c;
    }
    ctx->pc = 0x465594u;
    SET_GPR_U32(ctx, 31, 0x46559Cu);
    ctx->pc = 0x465598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465594u;
            // 0x465598: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46559Cu; }
        if (ctx->pc != 0x46559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46559Cu; }
        if (ctx->pc != 0x46559Cu) { return; }
    }
    ctx->pc = 0x46559Cu;
label_46559c:
    // 0x46559c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x46559cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4655a0:
    // 0x4655a0: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4655a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4655a4:
    // 0x4655a4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x4655a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_4655a8:
    // 0x4655a8: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4655a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4655ac:
    // 0x4655ac: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x4655acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_4655b0:
    // 0x4655b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4655b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4655b4:
    // 0x4655b4: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x4655b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_4655b8:
    // 0x4655b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4655b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4655bc:
    // 0x4655bc: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x4655bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_4655c0:
    // 0x4655c0: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x4655c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_4655c4:
    // 0x4655c4: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x4655c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_4655c8:
    // 0x4655c8: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x4655c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_4655cc:
    // 0x4655cc: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x4655ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_4655d0:
    // 0x4655d0: 0xae2400c4  sw          $a0, 0xC4($s1)
    ctx->pc = 0x4655d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
label_4655d4:
    // 0x4655d4: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x4655d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_4655d8:
    // 0x4655d8: 0xc0775b8  jal         func_1DD6E0
label_4655dc:
    if (ctx->pc == 0x4655DCu) {
        ctx->pc = 0x4655DCu;
            // 0x4655dc: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4655E0u;
        goto label_4655e0;
    }
    ctx->pc = 0x4655D8u;
    SET_GPR_U32(ctx, 31, 0x4655E0u);
    ctx->pc = 0x4655DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4655D8u;
            // 0x4655dc: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4655E0u; }
        if (ctx->pc != 0x4655E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4655E0u; }
        if (ctx->pc != 0x4655E0u) { return; }
    }
    ctx->pc = 0x4655E0u;
label_4655e0:
    // 0x4655e0: 0xc077314  jal         func_1DCC50
label_4655e4:
    if (ctx->pc == 0x4655E4u) {
        ctx->pc = 0x4655E4u;
            // 0x4655e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4655E8u;
        goto label_4655e8;
    }
    ctx->pc = 0x4655E0u;
    SET_GPR_U32(ctx, 31, 0x4655E8u);
    ctx->pc = 0x4655E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4655E0u;
            // 0x4655e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4655E8u; }
        if (ctx->pc != 0x4655E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4655E8u; }
        if (ctx->pc != 0x4655E8u) { return; }
    }
    ctx->pc = 0x4655E8u;
label_4655e8:
    // 0x4655e8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4655e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4655ec:
    // 0x4655ec: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4655ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_4655f0:
    // 0x4655f0: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4655f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4655f4:
    // 0x4655f4: 0x263200e0  addiu       $s2, $s1, 0xE0
    ctx->pc = 0x4655f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4655f8:
    // 0x4655f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4655f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4655fc:
    // 0x4655fc: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x4655fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_465600:
    // 0x465600: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x465600u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_465604:
    // 0x465604: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x465604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_465608:
    // 0x465608: 0x24a5e690  addiu       $a1, $a1, -0x1970
    ctx->pc = 0x465608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960784));
label_46560c:
    // 0x46560c: 0x2463e6d0  addiu       $v1, $v1, -0x1930
    ctx->pc = 0x46560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960848));
label_465610:
    // 0x465610: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x465610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_465614:
    // 0x465614: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x465614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_465618:
    // 0x465618: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_46561c:
    // 0x46561c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x46561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_465620:
    // 0x465620: 0xae2600c8  sw          $a2, 0xC8($s1)
    ctx->pc = 0x465620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 6));
label_465624:
    // 0x465624: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x465624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_465628:
    // 0x465628: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x465628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_46562c:
    // 0x46562c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x46562cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_465630:
    // 0x465630: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x465630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_465634:
    // 0x465634: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x465634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_465638:
    // 0x465638: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x465638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_46563c:
    // 0x46563c: 0xc04c968  jal         func_1325A0
label_465640:
    if (ctx->pc == 0x465640u) {
        ctx->pc = 0x465640u;
            // 0x465640: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x465644u;
        goto label_465644;
    }
    ctx->pc = 0x46563Cu;
    SET_GPR_U32(ctx, 31, 0x465644u);
    ctx->pc = 0x465640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46563Cu;
            // 0x465640: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465644u; }
        if (ctx->pc != 0x465644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465644u; }
        if (ctx->pc != 0x465644u) { return; }
    }
    ctx->pc = 0x465644u;
label_465644:
    // 0x465644: 0xc04c968  jal         func_1325A0
label_465648:
    if (ctx->pc == 0x465648u) {
        ctx->pc = 0x465648u;
            // 0x465648: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x46564Cu;
        goto label_46564c;
    }
    ctx->pc = 0x465644u;
    SET_GPR_U32(ctx, 31, 0x46564Cu);
    ctx->pc = 0x465648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465644u;
            // 0x465648: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46564Cu; }
        if (ctx->pc != 0x46564Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46564Cu; }
        if (ctx->pc != 0x46564Cu) { return; }
    }
    ctx->pc = 0x46564Cu;
label_46564c:
    // 0x46564c: 0xc04c968  jal         func_1325A0
label_465650:
    if (ctx->pc == 0x465650u) {
        ctx->pc = 0x465650u;
            // 0x465650: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x465654u;
        goto label_465654;
    }
    ctx->pc = 0x46564Cu;
    SET_GPR_U32(ctx, 31, 0x465654u);
    ctx->pc = 0x465650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46564Cu;
            // 0x465650: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465654u; }
        if (ctx->pc != 0x465654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465654u; }
        if (ctx->pc != 0x465654u) { return; }
    }
    ctx->pc = 0x465654u;
label_465654:
    // 0x465654: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x465654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_465658:
    // 0x465658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x465658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46565c:
    // 0x46565c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x46565cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_465660:
    // 0x465660: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x465660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_465664:
    // 0x465664: 0xc04f26c  jal         func_13C9B0
label_465668:
    if (ctx->pc == 0x465668u) {
        ctx->pc = 0x465668u;
            // 0x465668: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x46566Cu;
        goto label_46566c;
    }
    ctx->pc = 0x465664u;
    SET_GPR_U32(ctx, 31, 0x46566Cu);
    ctx->pc = 0x465668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465664u;
            // 0x465668: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46566Cu; }
        if (ctx->pc != 0x46566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46566Cu; }
        if (ctx->pc != 0x46566Cu) { return; }
    }
    ctx->pc = 0x46566Cu;
label_46566c:
    // 0x46566c: 0xc04c968  jal         func_1325A0
label_465670:
    if (ctx->pc == 0x465670u) {
        ctx->pc = 0x465670u;
            // 0x465670: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x465674u;
        goto label_465674;
    }
    ctx->pc = 0x46566Cu;
    SET_GPR_U32(ctx, 31, 0x465674u);
    ctx->pc = 0x465670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46566Cu;
            // 0x465670: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465674u; }
        if (ctx->pc != 0x465674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465674u; }
        if (ctx->pc != 0x465674u) { return; }
    }
    ctx->pc = 0x465674u;
label_465674:
    // 0x465674: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x465674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_465678:
    // 0x465678: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x465678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_46567c:
    // 0x46567c: 0xc04cc04  jal         func_133010
label_465680:
    if (ctx->pc == 0x465680u) {
        ctx->pc = 0x465680u;
            // 0x465680: 0x24a5e7a0  addiu       $a1, $a1, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961056));
        ctx->pc = 0x465684u;
        goto label_465684;
    }
    ctx->pc = 0x46567Cu;
    SET_GPR_U32(ctx, 31, 0x465684u);
    ctx->pc = 0x465680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46567Cu;
            // 0x465680: 0x24a5e7a0  addiu       $a1, $a1, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465684u; }
        if (ctx->pc != 0x465684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465684u; }
        if (ctx->pc != 0x465684u) { return; }
    }
    ctx->pc = 0x465684u;
label_465684:
    // 0x465684: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x465684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_465688:
    // 0x465688: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x465688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_46568c:
    // 0x46568c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x46568cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_465690:
    // 0x465690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x465690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465694:
    // 0x465694: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x465694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
label_465698:
    // 0x465698: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x465698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_46569c:
    // 0x46569c: 0xa6400110  sh          $zero, 0x110($s2)
    ctx->pc = 0x46569cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 272), (uint16_t)GPR_U32(ctx, 0));
label_4656a0:
    // 0x4656a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4656a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4656a4:
    // 0x4656a4: 0xa6400112  sh          $zero, 0x112($s2)
    ctx->pc = 0x4656a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 274), (uint16_t)GPR_U32(ctx, 0));
label_4656a8:
    // 0x4656a8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4656a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4656ac:
    // 0x4656ac: 0xa6420114  sh          $v0, 0x114($s2)
    ctx->pc = 0x4656acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 276), (uint16_t)GPR_U32(ctx, 2));
label_4656b0:
    // 0x4656b0: 0xc04cbd8  jal         func_132F60
label_4656b4:
    if (ctx->pc == 0x4656B4u) {
        ctx->pc = 0x4656B4u;
            // 0x4656b4: 0xa6400116  sh          $zero, 0x116($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4656B8u;
        goto label_4656b8;
    }
    ctx->pc = 0x4656B0u;
    SET_GPR_U32(ctx, 31, 0x4656B8u);
    ctx->pc = 0x4656B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4656B0u;
            // 0x4656b4: 0xa6400116  sh          $zero, 0x116($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656B8u; }
        if (ctx->pc != 0x4656B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656B8u; }
        if (ctx->pc != 0x4656B8u) { return; }
    }
    ctx->pc = 0x4656B8u;
label_4656b8:
    // 0x4656b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4656b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4656bc:
    // 0x4656bc: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x4656bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_4656c0:
    // 0x4656c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4656c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4656c4:
    // 0x4656c4: 0xc04cbd8  jal         func_132F60
label_4656c8:
    if (ctx->pc == 0x4656C8u) {
        ctx->pc = 0x4656C8u;
            // 0x4656c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4656CCu;
        goto label_4656cc;
    }
    ctx->pc = 0x4656C4u;
    SET_GPR_U32(ctx, 31, 0x4656CCu);
    ctx->pc = 0x4656C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4656C4u;
            // 0x4656c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656CCu; }
        if (ctx->pc != 0x4656CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656CCu; }
        if (ctx->pc != 0x4656CCu) { return; }
    }
    ctx->pc = 0x4656CCu;
label_4656cc:
    // 0x4656cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4656ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4656d0:
    // 0x4656d0: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x4656d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_4656d4:
    // 0x4656d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4656d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4656d8:
    // 0x4656d8: 0xc04cbd8  jal         func_132F60
label_4656dc:
    if (ctx->pc == 0x4656DCu) {
        ctx->pc = 0x4656DCu;
            // 0x4656dc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4656E0u;
        goto label_4656e0;
    }
    ctx->pc = 0x4656D8u;
    SET_GPR_U32(ctx, 31, 0x4656E0u);
    ctx->pc = 0x4656DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4656D8u;
            // 0x4656dc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656E0u; }
        if (ctx->pc != 0x4656E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656E0u; }
        if (ctx->pc != 0x4656E0u) { return; }
    }
    ctx->pc = 0x4656E0u;
label_4656e0:
    // 0x4656e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4656e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4656e4:
    // 0x4656e4: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x4656e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_4656e8:
    // 0x4656e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4656e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4656ec:
    // 0x4656ec: 0xc04cbd8  jal         func_132F60
label_4656f0:
    if (ctx->pc == 0x4656F0u) {
        ctx->pc = 0x4656F0u;
            // 0x4656f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4656F4u;
        goto label_4656f4;
    }
    ctx->pc = 0x4656ECu;
    SET_GPR_U32(ctx, 31, 0x4656F4u);
    ctx->pc = 0x4656F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4656ECu;
            // 0x4656f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656F4u; }
        if (ctx->pc != 0x4656F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4656F4u; }
        if (ctx->pc != 0x4656F4u) { return; }
    }
    ctx->pc = 0x4656F4u;
label_4656f4:
    // 0x4656f4: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x4656f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_4656f8:
    // 0x4656f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4656f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4656fc:
    // 0x4656fc: 0xae2002ac  sw          $zero, 0x2AC($s1)
    ctx->pc = 0x4656fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
label_465700:
    // 0x465700: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465704:
    // 0x465704: 0xa22302f8  sb          $v1, 0x2F8($s1)
    ctx->pc = 0x465704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 760), (uint8_t)GPR_U32(ctx, 3));
label_465708:
    // 0x465708: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x465708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_46570c:
    // 0x46570c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46570cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_465710:
    // 0x465710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465714:
    // 0x465714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465718:
    // 0x465718: 0x3e00008  jr          $ra
label_46571c:
    if (ctx->pc == 0x46571Cu) {
        ctx->pc = 0x46571Cu;
            // 0x46571c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x465720u;
        goto label_465720;
    }
    ctx->pc = 0x465718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465718u;
            // 0x46571c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465720u;
label_465720:
    // 0x465720: 0x8119510  j           func_465440
label_465724:
    if (ctx->pc == 0x465724u) {
        ctx->pc = 0x465724u;
            // 0x465724: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x465728u;
        goto label_465728;
    }
    ctx->pc = 0x465720u;
    ctx->pc = 0x465724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465720u;
            // 0x465724: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x465440u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_465440;
    ctx->pc = 0x465728u;
label_465728:
    // 0x465728: 0x0  nop
    ctx->pc = 0x465728u;
    // NOP
label_46572c:
    // 0x46572c: 0x0  nop
    ctx->pc = 0x46572cu;
    // NOP
label_465730:
    // 0x465730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x465730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_465734:
    // 0x465734: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x465734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_465738:
    // 0x465738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x465738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46573c:
    // 0x46573c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46573cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_465740:
    // 0x465740: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x465740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_465744:
    // 0x465744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_465748:
    // 0x465748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46574c:
    // 0x46574c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465750:
    // 0x465750: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x465750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_465754:
    // 0x465754: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_465758:
    if (ctx->pc == 0x465758u) {
        ctx->pc = 0x465758u;
            // 0x465758: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46575Cu;
        goto label_46575c;
    }
    ctx->pc = 0x465754u;
    {
        const bool branch_taken_0x465754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x465758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465754u;
            // 0x465758: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465754) {
            ctx->pc = 0x465798u;
            goto label_465798;
        }
    }
    ctx->pc = 0x46575Cu;
label_46575c:
    // 0x46575c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46575cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465760:
    // 0x465760: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x465760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465764:
    // 0x465764: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x465764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465768:
    // 0x465768: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x465768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_46576c:
    // 0x46576c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_465770:
    // 0x465770: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x465770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_465774:
    // 0x465774: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465778:
    // 0x465778: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x465778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_46577c:
    // 0x46577c: 0x320f809  jalr        $t9
label_465780:
    if (ctx->pc == 0x465780u) {
        ctx->pc = 0x465784u;
        goto label_465784;
    }
    ctx->pc = 0x46577Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465784u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x465784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465784u; }
            if (ctx->pc != 0x465784u) { return; }
        }
        }
    }
    ctx->pc = 0x465784u;
label_465784:
    // 0x465784: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x465784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_465788:
    // 0x465788: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x465788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46578c:
    // 0x46578c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x46578cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_465790:
    // 0x465790: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_465794:
    if (ctx->pc == 0x465794u) {
        ctx->pc = 0x465794u;
            // 0x465794: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x465798u;
        goto label_465798;
    }
    ctx->pc = 0x465790u;
    {
        const bool branch_taken_0x465790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465790u;
            // 0x465794: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465790) {
            ctx->pc = 0x465768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_465768;
        }
    }
    ctx->pc = 0x465798u;
label_465798:
    // 0x465798: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x465798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46579c:
    // 0x46579c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x46579cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4657a0:
    // 0x4657a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4657a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4657a4:
    // 0x4657a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4657a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4657a8:
    // 0x4657a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4657a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4657ac:
    // 0x4657ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4657acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4657b0:
    // 0x4657b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4657b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4657b4:
    // 0x4657b4: 0x3e00008  jr          $ra
label_4657b8:
    if (ctx->pc == 0x4657B8u) {
        ctx->pc = 0x4657B8u;
            // 0x4657b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4657BCu;
        goto label_4657bc;
    }
    ctx->pc = 0x4657B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4657B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4657B4u;
            // 0x4657b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4657BCu;
label_4657bc:
    // 0x4657bc: 0x0  nop
    ctx->pc = 0x4657bcu;
    // NOP
label_4657c0:
    // 0x4657c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4657c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4657c4:
    // 0x4657c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4657c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4657c8:
    // 0x4657c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4657c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4657cc:
    // 0x4657cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4657ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4657d0:
    // 0x4657d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4657d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4657d4:
    // 0x4657d4: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_4657d8:
    if (ctx->pc == 0x4657D8u) {
        ctx->pc = 0x4657D8u;
            // 0x4657d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4657DCu;
        goto label_4657dc;
    }
    ctx->pc = 0x4657D4u;
    {
        const bool branch_taken_0x4657d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4657D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4657D4u;
            // 0x4657d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4657d4) {
            ctx->pc = 0x4658BCu;
            goto label_4658bc;
        }
    }
    ctx->pc = 0x4657DCu;
label_4657dc:
    // 0x4657dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4657dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4657e0:
    // 0x4657e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4657e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4657e4:
    // 0x4657e4: 0x2463e730  addiu       $v1, $v1, -0x18D0
    ctx->pc = 0x4657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960944));
label_4657e8:
    // 0x4657e8: 0x2442e768  addiu       $v0, $v0, -0x1898
    ctx->pc = 0x4657e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961000));
label_4657ec:
    // 0x4657ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4657ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4657f0:
    // 0x4657f0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4657f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4657f4:
    // 0x4657f4: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x4657f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4657f8:
    // 0x4657f8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4657f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4657fc:
    // 0x4657fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_465800:
    if (ctx->pc == 0x465800u) {
        ctx->pc = 0x465804u;
        goto label_465804;
    }
    ctx->pc = 0x4657FCu;
    {
        const bool branch_taken_0x4657fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4657fc) {
            ctx->pc = 0x465838u;
            goto label_465838;
        }
    }
    ctx->pc = 0x465804u;
label_465804:
    // 0x465804: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x465804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_465808:
    // 0x465808: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x465808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46580c:
    // 0x46580c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x46580cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_465810:
    // 0x465810: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x465810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_465814:
    // 0x465814: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x465814u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_465818:
    // 0x465818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_46581c:
    if (ctx->pc == 0x46581Cu) {
        ctx->pc = 0x465820u;
        goto label_465820;
    }
    ctx->pc = 0x465818u;
    {
        const bool branch_taken_0x465818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465818) {
            ctx->pc = 0x465838u;
            goto label_465838;
        }
    }
    ctx->pc = 0x465820u;
label_465820:
    // 0x465820: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_465824:
    if (ctx->pc == 0x465824u) {
        ctx->pc = 0x465828u;
        goto label_465828;
    }
    ctx->pc = 0x465820u;
    {
        const bool branch_taken_0x465820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x465820) {
            ctx->pc = 0x465838u;
            goto label_465838;
        }
    }
    ctx->pc = 0x465828u;
label_465828:
    // 0x465828: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46582c:
    // 0x46582c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x46582cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_465830:
    // 0x465830: 0x320f809  jalr        $t9
label_465834:
    if (ctx->pc == 0x465834u) {
        ctx->pc = 0x465834u;
            // 0x465834: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x465838u;
        goto label_465838;
    }
    ctx->pc = 0x465830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465838u);
        ctx->pc = 0x465834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465830u;
            // 0x465834: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x465838u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465838u; }
            if (ctx->pc != 0x465838u) { return; }
        }
        }
    }
    ctx->pc = 0x465838u;
label_465838:
    // 0x465838: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_46583c:
    if (ctx->pc == 0x46583Cu) {
        ctx->pc = 0x46583Cu;
            // 0x46583c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x465840u;
        goto label_465840;
    }
    ctx->pc = 0x465838u;
    {
        const bool branch_taken_0x465838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x465838) {
            ctx->pc = 0x46583Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465838u;
            // 0x46583c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4658A8u;
            goto label_4658a8;
        }
    }
    ctx->pc = 0x465840u;
label_465840:
    // 0x465840: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x465840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_465844:
    // 0x465844: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x465844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_465848:
    // 0x465848: 0x2463e7d0  addiu       $v1, $v1, -0x1830
    ctx->pc = 0x465848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
label_46584c:
    // 0x46584c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x46584cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_465850:
    // 0x465850: 0x2442e808  addiu       $v0, $v0, -0x17F8
    ctx->pc = 0x465850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961160));
label_465854:
    // 0x465854: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x465854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_465858:
    // 0x465858: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x465858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_46585c:
    // 0x46585c: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x46585cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_465860:
    // 0x465860: 0xc0407c0  jal         func_101F00
label_465864:
    if (ctx->pc == 0x465864u) {
        ctx->pc = 0x465864u;
            // 0x465864: 0x24a55a20  addiu       $a1, $a1, 0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23072));
        ctx->pc = 0x465868u;
        goto label_465868;
    }
    ctx->pc = 0x465860u;
    SET_GPR_U32(ctx, 31, 0x465868u);
    ctx->pc = 0x465864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465860u;
            // 0x465864: 0x24a55a20  addiu       $a1, $a1, 0x5A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465868u; }
        if (ctx->pc != 0x465868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465868u; }
        if (ctx->pc != 0x465868u) { return; }
    }
    ctx->pc = 0x465868u;
label_465868:
    // 0x465868: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x465868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_46586c:
    // 0x46586c: 0xc11966c  jal         func_4659B0
label_465870:
    if (ctx->pc == 0x465870u) {
        ctx->pc = 0x465870u;
            // 0x465870: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x465874u;
        goto label_465874;
    }
    ctx->pc = 0x46586Cu;
    SET_GPR_U32(ctx, 31, 0x465874u);
    ctx->pc = 0x465870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46586Cu;
            // 0x465870: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4659B0u;
    if (runtime->hasFunction(0x4659B0u)) {
        auto targetFn = runtime->lookupFunction(0x4659B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465874u; }
        if (ctx->pc != 0x465874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004659B0_0x4659b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465874u; }
        if (ctx->pc != 0x465874u) { return; }
    }
    ctx->pc = 0x465874u;
label_465874:
    // 0x465874: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x465874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_465878:
    // 0x465878: 0xc119650  jal         func_465940
label_46587c:
    if (ctx->pc == 0x46587Cu) {
        ctx->pc = 0x46587Cu;
            // 0x46587c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x465880u;
        goto label_465880;
    }
    ctx->pc = 0x465878u;
    SET_GPR_U32(ctx, 31, 0x465880u);
    ctx->pc = 0x46587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465878u;
            // 0x46587c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x465940u;
    if (runtime->hasFunction(0x465940u)) {
        auto targetFn = runtime->lookupFunction(0x465940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465880u; }
        if (ctx->pc != 0x465880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00465940_0x465940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465880u; }
        if (ctx->pc != 0x465880u) { return; }
    }
    ctx->pc = 0x465880u;
label_465880:
    // 0x465880: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x465880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_465884:
    // 0x465884: 0xc119650  jal         func_465940
label_465888:
    if (ctx->pc == 0x465888u) {
        ctx->pc = 0x465888u;
            // 0x465888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x46588Cu;
        goto label_46588c;
    }
    ctx->pc = 0x465884u;
    SET_GPR_U32(ctx, 31, 0x46588Cu);
    ctx->pc = 0x465888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465884u;
            // 0x465888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x465940u;
    if (runtime->hasFunction(0x465940u)) {
        auto targetFn = runtime->lookupFunction(0x465940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46588Cu; }
        if (ctx->pc != 0x46588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00465940_0x465940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46588Cu; }
        if (ctx->pc != 0x46588Cu) { return; }
    }
    ctx->pc = 0x46588Cu;
label_46588c:
    // 0x46588c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x46588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_465890:
    // 0x465890: 0xc119638  jal         func_4658E0
label_465894:
    if (ctx->pc == 0x465894u) {
        ctx->pc = 0x465894u;
            // 0x465894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465898u;
        goto label_465898;
    }
    ctx->pc = 0x465890u;
    SET_GPR_U32(ctx, 31, 0x465898u);
    ctx->pc = 0x465894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465890u;
            // 0x465894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4658E0u;
    if (runtime->hasFunction(0x4658E0u)) {
        auto targetFn = runtime->lookupFunction(0x4658E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465898u; }
        if (ctx->pc != 0x465898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004658E0_0x4658e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465898u; }
        if (ctx->pc != 0x465898u) { return; }
    }
    ctx->pc = 0x465898u;
label_465898:
    // 0x465898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x465898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46589c:
    // 0x46589c: 0xc0ae1c0  jal         func_2B8700
label_4658a0:
    if (ctx->pc == 0x4658A0u) {
        ctx->pc = 0x4658A0u;
            // 0x4658a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4658A4u;
        goto label_4658a4;
    }
    ctx->pc = 0x46589Cu;
    SET_GPR_U32(ctx, 31, 0x4658A4u);
    ctx->pc = 0x4658A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46589Cu;
            // 0x4658a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4658A4u; }
        if (ctx->pc != 0x4658A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4658A4u; }
        if (ctx->pc != 0x4658A4u) { return; }
    }
    ctx->pc = 0x4658A4u;
label_4658a4:
    // 0x4658a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4658a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4658a8:
    // 0x4658a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4658a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4658ac:
    // 0x4658ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4658b0:
    if (ctx->pc == 0x4658B0u) {
        ctx->pc = 0x4658B0u;
            // 0x4658b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4658B4u;
        goto label_4658b4;
    }
    ctx->pc = 0x4658ACu;
    {
        const bool branch_taken_0x4658ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4658ac) {
            ctx->pc = 0x4658B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4658ACu;
            // 0x4658b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4658C0u;
            goto label_4658c0;
        }
    }
    ctx->pc = 0x4658B4u;
label_4658b4:
    // 0x4658b4: 0xc0400a8  jal         func_1002A0
label_4658b8:
    if (ctx->pc == 0x4658B8u) {
        ctx->pc = 0x4658B8u;
            // 0x4658b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4658BCu;
        goto label_4658bc;
    }
    ctx->pc = 0x4658B4u;
    SET_GPR_U32(ctx, 31, 0x4658BCu);
    ctx->pc = 0x4658B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4658B4u;
            // 0x4658b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4658BCu; }
        if (ctx->pc != 0x4658BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4658BCu; }
        if (ctx->pc != 0x4658BCu) { return; }
    }
    ctx->pc = 0x4658BCu;
label_4658bc:
    // 0x4658bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4658bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4658c0:
    // 0x4658c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4658c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4658c4:
    // 0x4658c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4658c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4658c8:
    // 0x4658c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4658c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4658cc:
    // 0x4658cc: 0x3e00008  jr          $ra
label_4658d0:
    if (ctx->pc == 0x4658D0u) {
        ctx->pc = 0x4658D0u;
            // 0x4658d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4658D4u;
        goto label_4658d4;
    }
    ctx->pc = 0x4658CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4658D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4658CCu;
            // 0x4658d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4658D4u;
label_4658d4:
    // 0x4658d4: 0x0  nop
    ctx->pc = 0x4658d4u;
    // NOP
label_4658d8:
    // 0x4658d8: 0x0  nop
    ctx->pc = 0x4658d8u;
    // NOP
label_4658dc:
    // 0x4658dc: 0x0  nop
    ctx->pc = 0x4658dcu;
    // NOP
}
