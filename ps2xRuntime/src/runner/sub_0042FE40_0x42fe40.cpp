#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042FE40
// Address: 0x42fe40 - 0x430810
void sub_0042FE40_0x42fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FE40_0x42fe40");
#endif

    switch (ctx->pc) {
        case 0x42fe40u: goto label_42fe40;
        case 0x42fe44u: goto label_42fe44;
        case 0x42fe48u: goto label_42fe48;
        case 0x42fe4cu: goto label_42fe4c;
        case 0x42fe50u: goto label_42fe50;
        case 0x42fe54u: goto label_42fe54;
        case 0x42fe58u: goto label_42fe58;
        case 0x42fe5cu: goto label_42fe5c;
        case 0x42fe60u: goto label_42fe60;
        case 0x42fe64u: goto label_42fe64;
        case 0x42fe68u: goto label_42fe68;
        case 0x42fe6cu: goto label_42fe6c;
        case 0x42fe70u: goto label_42fe70;
        case 0x42fe74u: goto label_42fe74;
        case 0x42fe78u: goto label_42fe78;
        case 0x42fe7cu: goto label_42fe7c;
        case 0x42fe80u: goto label_42fe80;
        case 0x42fe84u: goto label_42fe84;
        case 0x42fe88u: goto label_42fe88;
        case 0x42fe8cu: goto label_42fe8c;
        case 0x42fe90u: goto label_42fe90;
        case 0x42fe94u: goto label_42fe94;
        case 0x42fe98u: goto label_42fe98;
        case 0x42fe9cu: goto label_42fe9c;
        case 0x42fea0u: goto label_42fea0;
        case 0x42fea4u: goto label_42fea4;
        case 0x42fea8u: goto label_42fea8;
        case 0x42feacu: goto label_42feac;
        case 0x42feb0u: goto label_42feb0;
        case 0x42feb4u: goto label_42feb4;
        case 0x42feb8u: goto label_42feb8;
        case 0x42febcu: goto label_42febc;
        case 0x42fec0u: goto label_42fec0;
        case 0x42fec4u: goto label_42fec4;
        case 0x42fec8u: goto label_42fec8;
        case 0x42feccu: goto label_42fecc;
        case 0x42fed0u: goto label_42fed0;
        case 0x42fed4u: goto label_42fed4;
        case 0x42fed8u: goto label_42fed8;
        case 0x42fedcu: goto label_42fedc;
        case 0x42fee0u: goto label_42fee0;
        case 0x42fee4u: goto label_42fee4;
        case 0x42fee8u: goto label_42fee8;
        case 0x42feecu: goto label_42feec;
        case 0x42fef0u: goto label_42fef0;
        case 0x42fef4u: goto label_42fef4;
        case 0x42fef8u: goto label_42fef8;
        case 0x42fefcu: goto label_42fefc;
        case 0x42ff00u: goto label_42ff00;
        case 0x42ff04u: goto label_42ff04;
        case 0x42ff08u: goto label_42ff08;
        case 0x42ff0cu: goto label_42ff0c;
        case 0x42ff10u: goto label_42ff10;
        case 0x42ff14u: goto label_42ff14;
        case 0x42ff18u: goto label_42ff18;
        case 0x42ff1cu: goto label_42ff1c;
        case 0x42ff20u: goto label_42ff20;
        case 0x42ff24u: goto label_42ff24;
        case 0x42ff28u: goto label_42ff28;
        case 0x42ff2cu: goto label_42ff2c;
        case 0x42ff30u: goto label_42ff30;
        case 0x42ff34u: goto label_42ff34;
        case 0x42ff38u: goto label_42ff38;
        case 0x42ff3cu: goto label_42ff3c;
        case 0x42ff40u: goto label_42ff40;
        case 0x42ff44u: goto label_42ff44;
        case 0x42ff48u: goto label_42ff48;
        case 0x42ff4cu: goto label_42ff4c;
        case 0x42ff50u: goto label_42ff50;
        case 0x42ff54u: goto label_42ff54;
        case 0x42ff58u: goto label_42ff58;
        case 0x42ff5cu: goto label_42ff5c;
        case 0x42ff60u: goto label_42ff60;
        case 0x42ff64u: goto label_42ff64;
        case 0x42ff68u: goto label_42ff68;
        case 0x42ff6cu: goto label_42ff6c;
        case 0x42ff70u: goto label_42ff70;
        case 0x42ff74u: goto label_42ff74;
        case 0x42ff78u: goto label_42ff78;
        case 0x42ff7cu: goto label_42ff7c;
        case 0x42ff80u: goto label_42ff80;
        case 0x42ff84u: goto label_42ff84;
        case 0x42ff88u: goto label_42ff88;
        case 0x42ff8cu: goto label_42ff8c;
        case 0x42ff90u: goto label_42ff90;
        case 0x42ff94u: goto label_42ff94;
        case 0x42ff98u: goto label_42ff98;
        case 0x42ff9cu: goto label_42ff9c;
        case 0x42ffa0u: goto label_42ffa0;
        case 0x42ffa4u: goto label_42ffa4;
        case 0x42ffa8u: goto label_42ffa8;
        case 0x42ffacu: goto label_42ffac;
        case 0x42ffb0u: goto label_42ffb0;
        case 0x42ffb4u: goto label_42ffb4;
        case 0x42ffb8u: goto label_42ffb8;
        case 0x42ffbcu: goto label_42ffbc;
        case 0x42ffc0u: goto label_42ffc0;
        case 0x42ffc4u: goto label_42ffc4;
        case 0x42ffc8u: goto label_42ffc8;
        case 0x42ffccu: goto label_42ffcc;
        case 0x42ffd0u: goto label_42ffd0;
        case 0x42ffd4u: goto label_42ffd4;
        case 0x42ffd8u: goto label_42ffd8;
        case 0x42ffdcu: goto label_42ffdc;
        case 0x42ffe0u: goto label_42ffe0;
        case 0x42ffe4u: goto label_42ffe4;
        case 0x42ffe8u: goto label_42ffe8;
        case 0x42ffecu: goto label_42ffec;
        case 0x42fff0u: goto label_42fff0;
        case 0x42fff4u: goto label_42fff4;
        case 0x42fff8u: goto label_42fff8;
        case 0x42fffcu: goto label_42fffc;
        case 0x430000u: goto label_430000;
        case 0x430004u: goto label_430004;
        case 0x430008u: goto label_430008;
        case 0x43000cu: goto label_43000c;
        case 0x430010u: goto label_430010;
        case 0x430014u: goto label_430014;
        case 0x430018u: goto label_430018;
        case 0x43001cu: goto label_43001c;
        case 0x430020u: goto label_430020;
        case 0x430024u: goto label_430024;
        case 0x430028u: goto label_430028;
        case 0x43002cu: goto label_43002c;
        case 0x430030u: goto label_430030;
        case 0x430034u: goto label_430034;
        case 0x430038u: goto label_430038;
        case 0x43003cu: goto label_43003c;
        case 0x430040u: goto label_430040;
        case 0x430044u: goto label_430044;
        case 0x430048u: goto label_430048;
        case 0x43004cu: goto label_43004c;
        case 0x430050u: goto label_430050;
        case 0x430054u: goto label_430054;
        case 0x430058u: goto label_430058;
        case 0x43005cu: goto label_43005c;
        case 0x430060u: goto label_430060;
        case 0x430064u: goto label_430064;
        case 0x430068u: goto label_430068;
        case 0x43006cu: goto label_43006c;
        case 0x430070u: goto label_430070;
        case 0x430074u: goto label_430074;
        case 0x430078u: goto label_430078;
        case 0x43007cu: goto label_43007c;
        case 0x430080u: goto label_430080;
        case 0x430084u: goto label_430084;
        case 0x430088u: goto label_430088;
        case 0x43008cu: goto label_43008c;
        case 0x430090u: goto label_430090;
        case 0x430094u: goto label_430094;
        case 0x430098u: goto label_430098;
        case 0x43009cu: goto label_43009c;
        case 0x4300a0u: goto label_4300a0;
        case 0x4300a4u: goto label_4300a4;
        case 0x4300a8u: goto label_4300a8;
        case 0x4300acu: goto label_4300ac;
        case 0x4300b0u: goto label_4300b0;
        case 0x4300b4u: goto label_4300b4;
        case 0x4300b8u: goto label_4300b8;
        case 0x4300bcu: goto label_4300bc;
        case 0x4300c0u: goto label_4300c0;
        case 0x4300c4u: goto label_4300c4;
        case 0x4300c8u: goto label_4300c8;
        case 0x4300ccu: goto label_4300cc;
        case 0x4300d0u: goto label_4300d0;
        case 0x4300d4u: goto label_4300d4;
        case 0x4300d8u: goto label_4300d8;
        case 0x4300dcu: goto label_4300dc;
        case 0x4300e0u: goto label_4300e0;
        case 0x4300e4u: goto label_4300e4;
        case 0x4300e8u: goto label_4300e8;
        case 0x4300ecu: goto label_4300ec;
        case 0x4300f0u: goto label_4300f0;
        case 0x4300f4u: goto label_4300f4;
        case 0x4300f8u: goto label_4300f8;
        case 0x4300fcu: goto label_4300fc;
        case 0x430100u: goto label_430100;
        case 0x430104u: goto label_430104;
        case 0x430108u: goto label_430108;
        case 0x43010cu: goto label_43010c;
        case 0x430110u: goto label_430110;
        case 0x430114u: goto label_430114;
        case 0x430118u: goto label_430118;
        case 0x43011cu: goto label_43011c;
        case 0x430120u: goto label_430120;
        case 0x430124u: goto label_430124;
        case 0x430128u: goto label_430128;
        case 0x43012cu: goto label_43012c;
        case 0x430130u: goto label_430130;
        case 0x430134u: goto label_430134;
        case 0x430138u: goto label_430138;
        case 0x43013cu: goto label_43013c;
        case 0x430140u: goto label_430140;
        case 0x430144u: goto label_430144;
        case 0x430148u: goto label_430148;
        case 0x43014cu: goto label_43014c;
        case 0x430150u: goto label_430150;
        case 0x430154u: goto label_430154;
        case 0x430158u: goto label_430158;
        case 0x43015cu: goto label_43015c;
        case 0x430160u: goto label_430160;
        case 0x430164u: goto label_430164;
        case 0x430168u: goto label_430168;
        case 0x43016cu: goto label_43016c;
        case 0x430170u: goto label_430170;
        case 0x430174u: goto label_430174;
        case 0x430178u: goto label_430178;
        case 0x43017cu: goto label_43017c;
        case 0x430180u: goto label_430180;
        case 0x430184u: goto label_430184;
        case 0x430188u: goto label_430188;
        case 0x43018cu: goto label_43018c;
        case 0x430190u: goto label_430190;
        case 0x430194u: goto label_430194;
        case 0x430198u: goto label_430198;
        case 0x43019cu: goto label_43019c;
        case 0x4301a0u: goto label_4301a0;
        case 0x4301a4u: goto label_4301a4;
        case 0x4301a8u: goto label_4301a8;
        case 0x4301acu: goto label_4301ac;
        case 0x4301b0u: goto label_4301b0;
        case 0x4301b4u: goto label_4301b4;
        case 0x4301b8u: goto label_4301b8;
        case 0x4301bcu: goto label_4301bc;
        case 0x4301c0u: goto label_4301c0;
        case 0x4301c4u: goto label_4301c4;
        case 0x4301c8u: goto label_4301c8;
        case 0x4301ccu: goto label_4301cc;
        case 0x4301d0u: goto label_4301d0;
        case 0x4301d4u: goto label_4301d4;
        case 0x4301d8u: goto label_4301d8;
        case 0x4301dcu: goto label_4301dc;
        case 0x4301e0u: goto label_4301e0;
        case 0x4301e4u: goto label_4301e4;
        case 0x4301e8u: goto label_4301e8;
        case 0x4301ecu: goto label_4301ec;
        case 0x4301f0u: goto label_4301f0;
        case 0x4301f4u: goto label_4301f4;
        case 0x4301f8u: goto label_4301f8;
        case 0x4301fcu: goto label_4301fc;
        case 0x430200u: goto label_430200;
        case 0x430204u: goto label_430204;
        case 0x430208u: goto label_430208;
        case 0x43020cu: goto label_43020c;
        case 0x430210u: goto label_430210;
        case 0x430214u: goto label_430214;
        case 0x430218u: goto label_430218;
        case 0x43021cu: goto label_43021c;
        case 0x430220u: goto label_430220;
        case 0x430224u: goto label_430224;
        case 0x430228u: goto label_430228;
        case 0x43022cu: goto label_43022c;
        case 0x430230u: goto label_430230;
        case 0x430234u: goto label_430234;
        case 0x430238u: goto label_430238;
        case 0x43023cu: goto label_43023c;
        case 0x430240u: goto label_430240;
        case 0x430244u: goto label_430244;
        case 0x430248u: goto label_430248;
        case 0x43024cu: goto label_43024c;
        case 0x430250u: goto label_430250;
        case 0x430254u: goto label_430254;
        case 0x430258u: goto label_430258;
        case 0x43025cu: goto label_43025c;
        case 0x430260u: goto label_430260;
        case 0x430264u: goto label_430264;
        case 0x430268u: goto label_430268;
        case 0x43026cu: goto label_43026c;
        case 0x430270u: goto label_430270;
        case 0x430274u: goto label_430274;
        case 0x430278u: goto label_430278;
        case 0x43027cu: goto label_43027c;
        case 0x430280u: goto label_430280;
        case 0x430284u: goto label_430284;
        case 0x430288u: goto label_430288;
        case 0x43028cu: goto label_43028c;
        case 0x430290u: goto label_430290;
        case 0x430294u: goto label_430294;
        case 0x430298u: goto label_430298;
        case 0x43029cu: goto label_43029c;
        case 0x4302a0u: goto label_4302a0;
        case 0x4302a4u: goto label_4302a4;
        case 0x4302a8u: goto label_4302a8;
        case 0x4302acu: goto label_4302ac;
        case 0x4302b0u: goto label_4302b0;
        case 0x4302b4u: goto label_4302b4;
        case 0x4302b8u: goto label_4302b8;
        case 0x4302bcu: goto label_4302bc;
        case 0x4302c0u: goto label_4302c0;
        case 0x4302c4u: goto label_4302c4;
        case 0x4302c8u: goto label_4302c8;
        case 0x4302ccu: goto label_4302cc;
        case 0x4302d0u: goto label_4302d0;
        case 0x4302d4u: goto label_4302d4;
        case 0x4302d8u: goto label_4302d8;
        case 0x4302dcu: goto label_4302dc;
        case 0x4302e0u: goto label_4302e0;
        case 0x4302e4u: goto label_4302e4;
        case 0x4302e8u: goto label_4302e8;
        case 0x4302ecu: goto label_4302ec;
        case 0x4302f0u: goto label_4302f0;
        case 0x4302f4u: goto label_4302f4;
        case 0x4302f8u: goto label_4302f8;
        case 0x4302fcu: goto label_4302fc;
        case 0x430300u: goto label_430300;
        case 0x430304u: goto label_430304;
        case 0x430308u: goto label_430308;
        case 0x43030cu: goto label_43030c;
        case 0x430310u: goto label_430310;
        case 0x430314u: goto label_430314;
        case 0x430318u: goto label_430318;
        case 0x43031cu: goto label_43031c;
        case 0x430320u: goto label_430320;
        case 0x430324u: goto label_430324;
        case 0x430328u: goto label_430328;
        case 0x43032cu: goto label_43032c;
        case 0x430330u: goto label_430330;
        case 0x430334u: goto label_430334;
        case 0x430338u: goto label_430338;
        case 0x43033cu: goto label_43033c;
        case 0x430340u: goto label_430340;
        case 0x430344u: goto label_430344;
        case 0x430348u: goto label_430348;
        case 0x43034cu: goto label_43034c;
        case 0x430350u: goto label_430350;
        case 0x430354u: goto label_430354;
        case 0x430358u: goto label_430358;
        case 0x43035cu: goto label_43035c;
        case 0x430360u: goto label_430360;
        case 0x430364u: goto label_430364;
        case 0x430368u: goto label_430368;
        case 0x43036cu: goto label_43036c;
        case 0x430370u: goto label_430370;
        case 0x430374u: goto label_430374;
        case 0x430378u: goto label_430378;
        case 0x43037cu: goto label_43037c;
        case 0x430380u: goto label_430380;
        case 0x430384u: goto label_430384;
        case 0x430388u: goto label_430388;
        case 0x43038cu: goto label_43038c;
        case 0x430390u: goto label_430390;
        case 0x430394u: goto label_430394;
        case 0x430398u: goto label_430398;
        case 0x43039cu: goto label_43039c;
        case 0x4303a0u: goto label_4303a0;
        case 0x4303a4u: goto label_4303a4;
        case 0x4303a8u: goto label_4303a8;
        case 0x4303acu: goto label_4303ac;
        case 0x4303b0u: goto label_4303b0;
        case 0x4303b4u: goto label_4303b4;
        case 0x4303b8u: goto label_4303b8;
        case 0x4303bcu: goto label_4303bc;
        case 0x4303c0u: goto label_4303c0;
        case 0x4303c4u: goto label_4303c4;
        case 0x4303c8u: goto label_4303c8;
        case 0x4303ccu: goto label_4303cc;
        case 0x4303d0u: goto label_4303d0;
        case 0x4303d4u: goto label_4303d4;
        case 0x4303d8u: goto label_4303d8;
        case 0x4303dcu: goto label_4303dc;
        case 0x4303e0u: goto label_4303e0;
        case 0x4303e4u: goto label_4303e4;
        case 0x4303e8u: goto label_4303e8;
        case 0x4303ecu: goto label_4303ec;
        case 0x4303f0u: goto label_4303f0;
        case 0x4303f4u: goto label_4303f4;
        case 0x4303f8u: goto label_4303f8;
        case 0x4303fcu: goto label_4303fc;
        case 0x430400u: goto label_430400;
        case 0x430404u: goto label_430404;
        case 0x430408u: goto label_430408;
        case 0x43040cu: goto label_43040c;
        case 0x430410u: goto label_430410;
        case 0x430414u: goto label_430414;
        case 0x430418u: goto label_430418;
        case 0x43041cu: goto label_43041c;
        case 0x430420u: goto label_430420;
        case 0x430424u: goto label_430424;
        case 0x430428u: goto label_430428;
        case 0x43042cu: goto label_43042c;
        case 0x430430u: goto label_430430;
        case 0x430434u: goto label_430434;
        case 0x430438u: goto label_430438;
        case 0x43043cu: goto label_43043c;
        case 0x430440u: goto label_430440;
        case 0x430444u: goto label_430444;
        case 0x430448u: goto label_430448;
        case 0x43044cu: goto label_43044c;
        case 0x430450u: goto label_430450;
        case 0x430454u: goto label_430454;
        case 0x430458u: goto label_430458;
        case 0x43045cu: goto label_43045c;
        case 0x430460u: goto label_430460;
        case 0x430464u: goto label_430464;
        case 0x430468u: goto label_430468;
        case 0x43046cu: goto label_43046c;
        case 0x430470u: goto label_430470;
        case 0x430474u: goto label_430474;
        case 0x430478u: goto label_430478;
        case 0x43047cu: goto label_43047c;
        case 0x430480u: goto label_430480;
        case 0x430484u: goto label_430484;
        case 0x430488u: goto label_430488;
        case 0x43048cu: goto label_43048c;
        case 0x430490u: goto label_430490;
        case 0x430494u: goto label_430494;
        case 0x430498u: goto label_430498;
        case 0x43049cu: goto label_43049c;
        case 0x4304a0u: goto label_4304a0;
        case 0x4304a4u: goto label_4304a4;
        case 0x4304a8u: goto label_4304a8;
        case 0x4304acu: goto label_4304ac;
        case 0x4304b0u: goto label_4304b0;
        case 0x4304b4u: goto label_4304b4;
        case 0x4304b8u: goto label_4304b8;
        case 0x4304bcu: goto label_4304bc;
        case 0x4304c0u: goto label_4304c0;
        case 0x4304c4u: goto label_4304c4;
        case 0x4304c8u: goto label_4304c8;
        case 0x4304ccu: goto label_4304cc;
        case 0x4304d0u: goto label_4304d0;
        case 0x4304d4u: goto label_4304d4;
        case 0x4304d8u: goto label_4304d8;
        case 0x4304dcu: goto label_4304dc;
        case 0x4304e0u: goto label_4304e0;
        case 0x4304e4u: goto label_4304e4;
        case 0x4304e8u: goto label_4304e8;
        case 0x4304ecu: goto label_4304ec;
        case 0x4304f0u: goto label_4304f0;
        case 0x4304f4u: goto label_4304f4;
        case 0x4304f8u: goto label_4304f8;
        case 0x4304fcu: goto label_4304fc;
        case 0x430500u: goto label_430500;
        case 0x430504u: goto label_430504;
        case 0x430508u: goto label_430508;
        case 0x43050cu: goto label_43050c;
        case 0x430510u: goto label_430510;
        case 0x430514u: goto label_430514;
        case 0x430518u: goto label_430518;
        case 0x43051cu: goto label_43051c;
        case 0x430520u: goto label_430520;
        case 0x430524u: goto label_430524;
        case 0x430528u: goto label_430528;
        case 0x43052cu: goto label_43052c;
        case 0x430530u: goto label_430530;
        case 0x430534u: goto label_430534;
        case 0x430538u: goto label_430538;
        case 0x43053cu: goto label_43053c;
        case 0x430540u: goto label_430540;
        case 0x430544u: goto label_430544;
        case 0x430548u: goto label_430548;
        case 0x43054cu: goto label_43054c;
        case 0x430550u: goto label_430550;
        case 0x430554u: goto label_430554;
        case 0x430558u: goto label_430558;
        case 0x43055cu: goto label_43055c;
        case 0x430560u: goto label_430560;
        case 0x430564u: goto label_430564;
        case 0x430568u: goto label_430568;
        case 0x43056cu: goto label_43056c;
        case 0x430570u: goto label_430570;
        case 0x430574u: goto label_430574;
        case 0x430578u: goto label_430578;
        case 0x43057cu: goto label_43057c;
        case 0x430580u: goto label_430580;
        case 0x430584u: goto label_430584;
        case 0x430588u: goto label_430588;
        case 0x43058cu: goto label_43058c;
        case 0x430590u: goto label_430590;
        case 0x430594u: goto label_430594;
        case 0x430598u: goto label_430598;
        case 0x43059cu: goto label_43059c;
        case 0x4305a0u: goto label_4305a0;
        case 0x4305a4u: goto label_4305a4;
        case 0x4305a8u: goto label_4305a8;
        case 0x4305acu: goto label_4305ac;
        case 0x4305b0u: goto label_4305b0;
        case 0x4305b4u: goto label_4305b4;
        case 0x4305b8u: goto label_4305b8;
        case 0x4305bcu: goto label_4305bc;
        case 0x4305c0u: goto label_4305c0;
        case 0x4305c4u: goto label_4305c4;
        case 0x4305c8u: goto label_4305c8;
        case 0x4305ccu: goto label_4305cc;
        case 0x4305d0u: goto label_4305d0;
        case 0x4305d4u: goto label_4305d4;
        case 0x4305d8u: goto label_4305d8;
        case 0x4305dcu: goto label_4305dc;
        case 0x4305e0u: goto label_4305e0;
        case 0x4305e4u: goto label_4305e4;
        case 0x4305e8u: goto label_4305e8;
        case 0x4305ecu: goto label_4305ec;
        case 0x4305f0u: goto label_4305f0;
        case 0x4305f4u: goto label_4305f4;
        case 0x4305f8u: goto label_4305f8;
        case 0x4305fcu: goto label_4305fc;
        case 0x430600u: goto label_430600;
        case 0x430604u: goto label_430604;
        case 0x430608u: goto label_430608;
        case 0x43060cu: goto label_43060c;
        case 0x430610u: goto label_430610;
        case 0x430614u: goto label_430614;
        case 0x430618u: goto label_430618;
        case 0x43061cu: goto label_43061c;
        case 0x430620u: goto label_430620;
        case 0x430624u: goto label_430624;
        case 0x430628u: goto label_430628;
        case 0x43062cu: goto label_43062c;
        case 0x430630u: goto label_430630;
        case 0x430634u: goto label_430634;
        case 0x430638u: goto label_430638;
        case 0x43063cu: goto label_43063c;
        case 0x430640u: goto label_430640;
        case 0x430644u: goto label_430644;
        case 0x430648u: goto label_430648;
        case 0x43064cu: goto label_43064c;
        case 0x430650u: goto label_430650;
        case 0x430654u: goto label_430654;
        case 0x430658u: goto label_430658;
        case 0x43065cu: goto label_43065c;
        case 0x430660u: goto label_430660;
        case 0x430664u: goto label_430664;
        case 0x430668u: goto label_430668;
        case 0x43066cu: goto label_43066c;
        case 0x430670u: goto label_430670;
        case 0x430674u: goto label_430674;
        case 0x430678u: goto label_430678;
        case 0x43067cu: goto label_43067c;
        case 0x430680u: goto label_430680;
        case 0x430684u: goto label_430684;
        case 0x430688u: goto label_430688;
        case 0x43068cu: goto label_43068c;
        case 0x430690u: goto label_430690;
        case 0x430694u: goto label_430694;
        case 0x430698u: goto label_430698;
        case 0x43069cu: goto label_43069c;
        case 0x4306a0u: goto label_4306a0;
        case 0x4306a4u: goto label_4306a4;
        case 0x4306a8u: goto label_4306a8;
        case 0x4306acu: goto label_4306ac;
        case 0x4306b0u: goto label_4306b0;
        case 0x4306b4u: goto label_4306b4;
        case 0x4306b8u: goto label_4306b8;
        case 0x4306bcu: goto label_4306bc;
        case 0x4306c0u: goto label_4306c0;
        case 0x4306c4u: goto label_4306c4;
        case 0x4306c8u: goto label_4306c8;
        case 0x4306ccu: goto label_4306cc;
        case 0x4306d0u: goto label_4306d0;
        case 0x4306d4u: goto label_4306d4;
        case 0x4306d8u: goto label_4306d8;
        case 0x4306dcu: goto label_4306dc;
        case 0x4306e0u: goto label_4306e0;
        case 0x4306e4u: goto label_4306e4;
        case 0x4306e8u: goto label_4306e8;
        case 0x4306ecu: goto label_4306ec;
        case 0x4306f0u: goto label_4306f0;
        case 0x4306f4u: goto label_4306f4;
        case 0x4306f8u: goto label_4306f8;
        case 0x4306fcu: goto label_4306fc;
        case 0x430700u: goto label_430700;
        case 0x430704u: goto label_430704;
        case 0x430708u: goto label_430708;
        case 0x43070cu: goto label_43070c;
        case 0x430710u: goto label_430710;
        case 0x430714u: goto label_430714;
        case 0x430718u: goto label_430718;
        case 0x43071cu: goto label_43071c;
        case 0x430720u: goto label_430720;
        case 0x430724u: goto label_430724;
        case 0x430728u: goto label_430728;
        case 0x43072cu: goto label_43072c;
        case 0x430730u: goto label_430730;
        case 0x430734u: goto label_430734;
        case 0x430738u: goto label_430738;
        case 0x43073cu: goto label_43073c;
        case 0x430740u: goto label_430740;
        case 0x430744u: goto label_430744;
        case 0x430748u: goto label_430748;
        case 0x43074cu: goto label_43074c;
        case 0x430750u: goto label_430750;
        case 0x430754u: goto label_430754;
        case 0x430758u: goto label_430758;
        case 0x43075cu: goto label_43075c;
        case 0x430760u: goto label_430760;
        case 0x430764u: goto label_430764;
        case 0x430768u: goto label_430768;
        case 0x43076cu: goto label_43076c;
        case 0x430770u: goto label_430770;
        case 0x430774u: goto label_430774;
        case 0x430778u: goto label_430778;
        case 0x43077cu: goto label_43077c;
        case 0x430780u: goto label_430780;
        case 0x430784u: goto label_430784;
        case 0x430788u: goto label_430788;
        case 0x43078cu: goto label_43078c;
        case 0x430790u: goto label_430790;
        case 0x430794u: goto label_430794;
        case 0x430798u: goto label_430798;
        case 0x43079cu: goto label_43079c;
        case 0x4307a0u: goto label_4307a0;
        case 0x4307a4u: goto label_4307a4;
        case 0x4307a8u: goto label_4307a8;
        case 0x4307acu: goto label_4307ac;
        case 0x4307b0u: goto label_4307b0;
        case 0x4307b4u: goto label_4307b4;
        case 0x4307b8u: goto label_4307b8;
        case 0x4307bcu: goto label_4307bc;
        case 0x4307c0u: goto label_4307c0;
        case 0x4307c4u: goto label_4307c4;
        case 0x4307c8u: goto label_4307c8;
        case 0x4307ccu: goto label_4307cc;
        case 0x4307d0u: goto label_4307d0;
        case 0x4307d4u: goto label_4307d4;
        case 0x4307d8u: goto label_4307d8;
        case 0x4307dcu: goto label_4307dc;
        case 0x4307e0u: goto label_4307e0;
        case 0x4307e4u: goto label_4307e4;
        case 0x4307e8u: goto label_4307e8;
        case 0x4307ecu: goto label_4307ec;
        case 0x4307f0u: goto label_4307f0;
        case 0x4307f4u: goto label_4307f4;
        case 0x4307f8u: goto label_4307f8;
        case 0x4307fcu: goto label_4307fc;
        case 0x430800u: goto label_430800;
        case 0x430804u: goto label_430804;
        case 0x430808u: goto label_430808;
        case 0x43080cu: goto label_43080c;
        default: break;
    }

    ctx->pc = 0x42fe40u;

label_42fe40:
    // 0x42fe40: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x42fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_42fe44:
    // 0x42fe44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42fe48:
    // 0x42fe48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42fe4c:
    // 0x42fe4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42fe50:
    // 0x42fe50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42fe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42fe54:
    // 0x42fe54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x42fe54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42fe58:
    // 0x42fe58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42fe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42fe5c:
    // 0x42fe5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42fe60:
    // 0x42fe60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42fe60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42fe64:
    // 0x42fe64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42fe64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42fe68:
    // 0x42fe68: 0xa08500fc  sb          $a1, 0xFC($a0)
    ctx->pc = 0x42fe68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 5));
label_42fe6c:
    // 0x42fe6c: 0xac8200f0  sw          $v0, 0xF0($a0)
    ctx->pc = 0x42fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
label_42fe70:
    // 0x42fe70: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x42fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_42fe74:
    // 0x42fe74: 0xc08914c  jal         func_224530
label_42fe78:
    if (ctx->pc == 0x42FE78u) {
        ctx->pc = 0x42FE78u;
            // 0x42fe78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FE7Cu;
        goto label_42fe7c;
    }
    ctx->pc = 0x42FE74u;
    SET_GPR_U32(ctx, 31, 0x42FE7Cu);
    ctx->pc = 0x42FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FE74u;
            // 0x42fe78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FE7Cu; }
        if (ctx->pc != 0x42FE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FE7Cu; }
        if (ctx->pc != 0x42FE7Cu) { return; }
    }
    ctx->pc = 0x42FE7Cu;
label_42fe7c:
    // 0x42fe7c: 0x8e490050  lw          $t1, 0x50($s2)
    ctx->pc = 0x42fe7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_42fe80:
    // 0x42fe80: 0x3c02ffda  lui         $v0, 0xFFDA
    ctx->pc = 0x42fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65498 << 16));
label_42fe84:
    // 0x42fe84: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x42fe84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42fe88:
    // 0x42fe88: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x42fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_42fe8c:
    // 0x42fe8c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x42fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_42fe90:
    // 0x42fe90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42fe94:
    // 0x42fe94: 0x8d280214  lw          $t0, 0x214($t1)
    ctx->pc = 0x42fe94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 532)));
label_42fe98:
    // 0x42fe98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42fe98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42fe9c:
    // 0x42fe9c: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x42fe9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_42fea0:
    // 0x42fea0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x42fea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_42fea4:
    // 0x42fea4: 0xad250214  sw          $a1, 0x214($t1)
    ctx->pc = 0x42fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 532), GPR_U32(ctx, 5));
label_42fea8:
    // 0x42fea8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x42fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_42feac:
    // 0x42feac: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x42feacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_42feb0:
    // 0x42feb0: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x42feb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_42feb4:
    // 0x42feb4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x42feb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_42feb8:
    // 0x42feb8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x42feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_42febc:
    // 0x42febc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42fec0:
    // 0x42fec0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42fec4:
    // 0x42fec4: 0xc08bff0  jal         func_22FFC0
label_42fec8:
    if (ctx->pc == 0x42FEC8u) {
        ctx->pc = 0x42FEC8u;
            // 0x42fec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FECCu;
        goto label_42fecc;
    }
    ctx->pc = 0x42FEC4u;
    SET_GPR_U32(ctx, 31, 0x42FECCu);
    ctx->pc = 0x42FEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FEC4u;
            // 0x42fec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FECCu; }
        if (ctx->pc != 0x42FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FECCu; }
        if (ctx->pc != 0x42FECCu) { return; }
    }
    ctx->pc = 0x42FECCu;
label_42fecc:
    // 0x42fecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42fed0:
    // 0x42fed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42fed4:
    // 0x42fed4: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x42fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_42fed8:
    // 0x42fed8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x42fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_42fedc:
    // 0x42fedc: 0xc6400078  lwc1        $f0, 0x78($s2)
    ctx->pc = 0x42fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42fee0:
    // 0x42fee0: 0xe6400074  swc1        $f0, 0x74($s2)
    ctx->pc = 0x42fee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
label_42fee4:
    // 0x42fee4: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x42fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_42fee8:
    // 0x42fee8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x42fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_42feec:
    // 0x42feec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42fef0:
    // 0x42fef0: 0xc04f278  jal         func_13C9E0
label_42fef4:
    if (ctx->pc == 0x42FEF4u) {
        ctx->pc = 0x42FEF4u;
            // 0x42fef4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x42FEF8u;
        goto label_42fef8;
    }
    ctx->pc = 0x42FEF0u;
    SET_GPR_U32(ctx, 31, 0x42FEF8u);
    ctx->pc = 0x42FEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FEF0u;
            // 0x42fef4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FEF8u; }
        if (ctx->pc != 0x42FEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FEF8u; }
        if (ctx->pc != 0x42FEF8u) { return; }
    }
    ctx->pc = 0x42FEF8u;
label_42fef8:
    // 0x42fef8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x42fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_42fefc:
    // 0x42fefc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x42fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_42ff00:
    // 0x42ff00: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x42ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_42ff04:
    // 0x42ff04: 0xc04cca0  jal         func_133280
label_42ff08:
    if (ctx->pc == 0x42FF08u) {
        ctx->pc = 0x42FF08u;
            // 0x42ff08: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->pc = 0x42FF0Cu;
        goto label_42ff0c;
    }
    ctx->pc = 0x42FF04u;
    SET_GPR_U32(ctx, 31, 0x42FF0Cu);
    ctx->pc = 0x42FF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FF04u;
            // 0x42ff08: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF0Cu; }
        if (ctx->pc != 0x42FF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF0Cu; }
        if (ctx->pc != 0x42FF0Cu) { return; }
    }
    ctx->pc = 0x42FF0Cu;
label_42ff0c:
    // 0x42ff0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ff10:
    // 0x42ff10: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x42ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_42ff14:
    // 0x42ff14: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x42ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_42ff18:
    // 0x42ff18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x42ff18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42ff1c:
    // 0x42ff1c: 0xc0f95a8  jal         func_3E56A0
label_42ff20:
    if (ctx->pc == 0x42FF20u) {
        ctx->pc = 0x42FF20u;
            // 0x42ff20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FF24u;
        goto label_42ff24;
    }
    ctx->pc = 0x42FF1Cu;
    SET_GPR_U32(ctx, 31, 0x42FF24u);
    ctx->pc = 0x42FF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FF1Cu;
            // 0x42ff20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E56A0u;
    if (runtime->hasFunction(0x3E56A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E56A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF24u; }
        if (ctx->pc != 0x42FF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E56A0_0x3e56a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF24u; }
        if (ctx->pc != 0x42FF24u) { return; }
    }
    ctx->pc = 0x42FF24u;
label_42ff24:
    // 0x42ff24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x42ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42ff28:
    // 0x42ff28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x42ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_42ff2c:
    // 0x42ff2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ff30:
    // 0x42ff30: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x42ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_42ff34:
    // 0x42ff34: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x42ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42ff38:
    // 0x42ff38: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x42ff38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ff3c:
    // 0x42ff3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42ff3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42ff40:
    // 0x42ff40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ff44:
    // 0x42ff44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42ff44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_42ff48:
    // 0x42ff48: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x42ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_42ff4c:
    // 0x42ff4c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x42ff4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_42ff50:
    // 0x42ff50: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x42ff50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_42ff54:
    // 0x42ff54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42ff58:
    // 0x42ff58: 0xa7a200d4  sh          $v0, 0xD4($sp)
    ctx->pc = 0x42ff58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 2));
label_42ff5c:
    // 0x42ff5c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x42ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_42ff60:
    // 0x42ff60: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x42ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_42ff64:
    // 0x42ff64: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x42ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_42ff68:
    // 0x42ff68: 0xa7a000d0  sh          $zero, 0xD0($sp)
    ctx->pc = 0x42ff68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 0));
label_42ff6c:
    // 0x42ff6c: 0xa7a000d2  sh          $zero, 0xD2($sp)
    ctx->pc = 0x42ff6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 210), (uint16_t)GPR_U32(ctx, 0));
label_42ff70:
    // 0x42ff70: 0xc04cbd8  jal         func_132F60
label_42ff74:
    if (ctx->pc == 0x42FF74u) {
        ctx->pc = 0x42FF74u;
            // 0x42ff74: 0xa7a000d6  sh          $zero, 0xD6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 214), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x42FF78u;
        goto label_42ff78;
    }
    ctx->pc = 0x42FF70u;
    SET_GPR_U32(ctx, 31, 0x42FF78u);
    ctx->pc = 0x42FF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FF70u;
            // 0x42ff74: 0xa7a000d6  sh          $zero, 0xD6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 214), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF78u; }
        if (ctx->pc != 0x42FF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF78u; }
        if (ctx->pc != 0x42FF78u) { return; }
    }
    ctx->pc = 0x42FF78u;
label_42ff78:
    // 0x42ff78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42ff78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42ff7c:
    // 0x42ff7c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x42ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_42ff80:
    // 0x42ff80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42ff80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_42ff84:
    // 0x42ff84: 0xc04cbd8  jal         func_132F60
label_42ff88:
    if (ctx->pc == 0x42FF88u) {
        ctx->pc = 0x42FF88u;
            // 0x42ff88: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x42FF8Cu;
        goto label_42ff8c;
    }
    ctx->pc = 0x42FF84u;
    SET_GPR_U32(ctx, 31, 0x42FF8Cu);
    ctx->pc = 0x42FF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FF84u;
            // 0x42ff88: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF8Cu; }
        if (ctx->pc != 0x42FF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FF8Cu; }
        if (ctx->pc != 0x42FF8Cu) { return; }
    }
    ctx->pc = 0x42FF8Cu;
label_42ff8c:
    // 0x42ff8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42ff8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42ff90:
    // 0x42ff90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x42ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_42ff94:
    // 0x42ff94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42ff94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_42ff98:
    // 0x42ff98: 0xc04cbd8  jal         func_132F60
label_42ff9c:
    if (ctx->pc == 0x42FF9Cu) {
        ctx->pc = 0x42FF9Cu;
            // 0x42ff9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x42FFA0u;
        goto label_42ffa0;
    }
    ctx->pc = 0x42FF98u;
    SET_GPR_U32(ctx, 31, 0x42FFA0u);
    ctx->pc = 0x42FF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FF98u;
            // 0x42ff9c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FFA0u; }
        if (ctx->pc != 0x42FFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FFA0u; }
        if (ctx->pc != 0x42FFA0u) { return; }
    }
    ctx->pc = 0x42FFA0u;
label_42ffa0:
    // 0x42ffa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42ffa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42ffa4:
    // 0x42ffa4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x42ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_42ffa8:
    // 0x42ffa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42ffa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_42ffac:
    // 0x42ffac: 0xc04cbd8  jal         func_132F60
label_42ffb0:
    if (ctx->pc == 0x42FFB0u) {
        ctx->pc = 0x42FFB0u;
            // 0x42ffb0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x42FFB4u;
        goto label_42ffb4;
    }
    ctx->pc = 0x42FFACu;
    SET_GPR_U32(ctx, 31, 0x42FFB4u);
    ctx->pc = 0x42FFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FFACu;
            // 0x42ffb0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FFB4u; }
        if (ctx->pc != 0x42FFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FFB4u; }
        if (ctx->pc != 0x42FFB4u) { return; }
    }
    ctx->pc = 0x42FFB4u;
label_42ffb4:
    // 0x42ffb4: 0x922302eb  lbu         $v1, 0x2EB($s1)
    ctx->pc = 0x42ffb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 747)));
label_42ffb8:
    // 0x42ffb8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x42ffb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42ffbc:
    // 0x42ffbc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x42ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_42ffc0:
    // 0x42ffc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42ffc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42ffc4:
    // 0x42ffc4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x42ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_42ffc8:
    // 0x42ffc8: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x42ffc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_42ffcc:
    // 0x42ffcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42ffccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42ffd0:
    // 0x42ffd0: 0xa3a3016f  sb          $v1, 0x16F($sp)
    ctx->pc = 0x42ffd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 367), (uint8_t)GPR_U32(ctx, 3));
label_42ffd4:
    // 0x42ffd4: 0x260703d0  addiu       $a3, $s0, 0x3D0
    ctx->pc = 0x42ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
label_42ffd8:
    // 0x42ffd8: 0x27a9016f  addiu       $t1, $sp, 0x16F
    ctx->pc = 0x42ffd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 367));
label_42ffdc:
    // 0x42ffdc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x42ffdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_42ffe0:
    // 0x42ffe0: 0xc0b8704  jal         func_2E1C10
label_42ffe4:
    if (ctx->pc == 0x42FFE4u) {
        ctx->pc = 0x42FFE4u;
            // 0x42ffe4: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FFE8u;
        goto label_42ffe8;
    }
    ctx->pc = 0x42FFE0u;
    SET_GPR_U32(ctx, 31, 0x42FFE8u);
    ctx->pc = 0x42FFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FFE0u;
            // 0x42ffe4: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FFE8u; }
        if (ctx->pc != 0x42FFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FFE8u; }
        if (ctx->pc != 0x42FFE8u) { return; }
    }
    ctx->pc = 0x42FFE8u;
label_42ffe8:
    // 0x42ffe8: 0x97a200d0  lhu         $v0, 0xD0($sp)
    ctx->pc = 0x42ffe8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_42ffec:
    // 0x42ffec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_42fff0:
    if (ctx->pc == 0x42FFF0u) {
        ctx->pc = 0x42FFF0u;
            // 0x42fff0: 0x8e4300d8  lw          $v1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x42FFF4u;
        goto label_42fff4;
    }
    ctx->pc = 0x42FFECu;
    {
        const bool branch_taken_0x42ffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42ffec) {
            ctx->pc = 0x42FFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42FFECu;
            // 0x42fff0: 0x8e4300d8  lw          $v1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430008u;
            goto label_430008;
        }
    }
    ctx->pc = 0x42FFF4u;
label_42fff4:
    // 0x42fff4: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x42fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_42fff8:
    // 0x42fff8: 0xc04cc04  jal         func_133010
label_42fffc:
    if (ctx->pc == 0x42FFFCu) {
        ctx->pc = 0x42FFFCu;
            // 0x42fffc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x430000u;
        goto label_430000;
    }
    ctx->pc = 0x42FFF8u;
    SET_GPR_U32(ctx, 31, 0x430000u);
    ctx->pc = 0x42FFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FFF8u;
            // 0x42fffc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430000u; }
        if (ctx->pc != 0x430000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430000u; }
        if (ctx->pc != 0x430000u) { return; }
    }
    ctx->pc = 0x430000u;
label_430000:
    // 0x430000: 0x10000012  b           . + 4 + (0x12 << 2)
label_430004:
    if (ctx->pc == 0x430004u) {
        ctx->pc = 0x430004u;
            // 0x430004: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x430008u;
        goto label_430008;
    }
    ctx->pc = 0x430000u;
    {
        const bool branch_taken_0x430000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430000u;
            // 0x430004: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430000) {
            ctx->pc = 0x43004Cu;
            goto label_43004c;
        }
    }
    ctx->pc = 0x430008u;
label_430008:
    // 0x430008: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x430008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43000c:
    // 0x43000c: 0x2442cbd8  addiu       $v0, $v0, -0x3428
    ctx->pc = 0x43000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953944));
label_430010:
    // 0x430010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x430010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_430014:
    // 0x430014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x430014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_430018:
    // 0x430018: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x430018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43001c:
    // 0x43001c: 0xc0b8160  jal         func_2E0580
label_430020:
    if (ctx->pc == 0x430020u) {
        ctx->pc = 0x430020u;
            // 0x430020: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x430024u;
        goto label_430024;
    }
    ctx->pc = 0x43001Cu;
    SET_GPR_U32(ctx, 31, 0x430024u);
    ctx->pc = 0x430020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43001Cu;
            // 0x430020: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430024u; }
        if (ctx->pc != 0x430024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430024u; }
        if (ctx->pc != 0x430024u) { return; }
    }
    ctx->pc = 0x430024u;
label_430024:
    // 0x430024: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x430024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_430028:
    // 0x430028: 0xc04cc04  jal         func_133010
label_43002c:
    if (ctx->pc == 0x43002Cu) {
        ctx->pc = 0x43002Cu;
            // 0x43002c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x430030u;
        goto label_430030;
    }
    ctx->pc = 0x430028u;
    SET_GPR_U32(ctx, 31, 0x430030u);
    ctx->pc = 0x43002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430028u;
            // 0x43002c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430030u; }
        if (ctx->pc != 0x430030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430030u; }
        if (ctx->pc != 0x430030u) { return; }
    }
    ctx->pc = 0x430030u;
label_430030:
    // 0x430030: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x430030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_430034:
    // 0x430034: 0xc04cc04  jal         func_133010
label_430038:
    if (ctx->pc == 0x430038u) {
        ctx->pc = 0x430038u;
            // 0x430038: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x43003Cu;
        goto label_43003c;
    }
    ctx->pc = 0x430034u;
    SET_GPR_U32(ctx, 31, 0x43003Cu);
    ctx->pc = 0x430038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430034u;
            // 0x430038: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43003Cu; }
        if (ctx->pc != 0x43003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43003Cu; }
        if (ctx->pc != 0x43003Cu) { return; }
    }
    ctx->pc = 0x43003Cu;
label_43003c:
    // 0x43003c: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x43003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_430040:
    // 0x430040: 0xc04cc04  jal         func_133010
label_430044:
    if (ctx->pc == 0x430044u) {
        ctx->pc = 0x430044u;
            // 0x430044: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x430048u;
        goto label_430048;
    }
    ctx->pc = 0x430040u;
    SET_GPR_U32(ctx, 31, 0x430048u);
    ctx->pc = 0x430044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430040u;
            // 0x430044: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430048u; }
        if (ctx->pc != 0x430048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430048u; }
        if (ctx->pc != 0x430048u) { return; }
    }
    ctx->pc = 0x430048u;
label_430048:
    // 0x430048: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x430048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_43004c:
    // 0x43004c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x43004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_430050:
    // 0x430050: 0xc04cc90  jal         func_133240
label_430054:
    if (ctx->pc == 0x430054u) {
        ctx->pc = 0x430054u;
            // 0x430054: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x430058u;
        goto label_430058;
    }
    ctx->pc = 0x430050u;
    SET_GPR_U32(ctx, 31, 0x430058u);
    ctx->pc = 0x430054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430050u;
            // 0x430054: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430058u; }
        if (ctx->pc != 0x430058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430058u; }
        if (ctx->pc != 0x430058u) { return; }
    }
    ctx->pc = 0x430058u;
label_430058:
    // 0x430058: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x430058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_43005c:
    // 0x43005c: 0xc04cc44  jal         func_133110
label_430060:
    if (ctx->pc == 0x430060u) {
        ctx->pc = 0x430060u;
            // 0x430060: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430064u;
        goto label_430064;
    }
    ctx->pc = 0x43005Cu;
    SET_GPR_U32(ctx, 31, 0x430064u);
    ctx->pc = 0x430060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43005Cu;
            // 0x430060: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430064u; }
        if (ctx->pc != 0x430064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430064u; }
        if (ctx->pc != 0x430064u) { return; }
    }
    ctx->pc = 0x430064u;
label_430064:
    // 0x430064: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x430064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_430068:
    // 0x430068: 0xc04cc04  jal         func_133010
label_43006c:
    if (ctx->pc == 0x43006Cu) {
        ctx->pc = 0x43006Cu;
            // 0x43006c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x430070u;
        goto label_430070;
    }
    ctx->pc = 0x430068u;
    SET_GPR_U32(ctx, 31, 0x430070u);
    ctx->pc = 0x43006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430068u;
            // 0x43006c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430070u; }
        if (ctx->pc != 0x430070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430070u; }
        if (ctx->pc != 0x430070u) { return; }
    }
    ctx->pc = 0x430070u;
label_430070:
    // 0x430070: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x430070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_430074:
    // 0x430074: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x430074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_430078:
    // 0x430078: 0xc04cbf0  jal         func_132FC0
label_43007c:
    if (ctx->pc == 0x43007Cu) {
        ctx->pc = 0x43007Cu;
            // 0x43007c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x430080u;
        goto label_430080;
    }
    ctx->pc = 0x430078u;
    SET_GPR_U32(ctx, 31, 0x430080u);
    ctx->pc = 0x43007Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430078u;
            // 0x43007c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430080u; }
        if (ctx->pc != 0x430080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430080u; }
        if (ctx->pc != 0x430080u) { return; }
    }
    ctx->pc = 0x430080u;
label_430080:
    // 0x430080: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x430080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_430084:
    // 0x430084: 0xc04cc44  jal         func_133110
label_430088:
    if (ctx->pc == 0x430088u) {
        ctx->pc = 0x430088u;
            // 0x430088: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43008Cu;
        goto label_43008c;
    }
    ctx->pc = 0x430084u;
    SET_GPR_U32(ctx, 31, 0x43008Cu);
    ctx->pc = 0x430088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430084u;
            // 0x430088: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43008Cu; }
        if (ctx->pc != 0x43008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43008Cu; }
        if (ctx->pc != 0x43008Cu) { return; }
    }
    ctx->pc = 0x43008Cu;
label_43008c:
    // 0x43008c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x43008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_430090:
    // 0x430090: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x430090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_430094:
    // 0x430094: 0xc04cbf0  jal         func_132FC0
label_430098:
    if (ctx->pc == 0x430098u) {
        ctx->pc = 0x430098u;
            // 0x430098: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x43009Cu;
        goto label_43009c;
    }
    ctx->pc = 0x430094u;
    SET_GPR_U32(ctx, 31, 0x43009Cu);
    ctx->pc = 0x430098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430094u;
            // 0x430098: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43009Cu; }
        if (ctx->pc != 0x43009Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43009Cu; }
        if (ctx->pc != 0x43009Cu) { return; }
    }
    ctx->pc = 0x43009Cu;
label_43009c:
    // 0x43009c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x43009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4300a0:
    // 0x4300a0: 0xc04cc44  jal         func_133110
label_4300a4:
    if (ctx->pc == 0x4300A4u) {
        ctx->pc = 0x4300A4u;
            // 0x4300a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4300A8u;
        goto label_4300a8;
    }
    ctx->pc = 0x4300A0u;
    SET_GPR_U32(ctx, 31, 0x4300A8u);
    ctx->pc = 0x4300A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4300A0u;
            // 0x4300a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4300A8u; }
        if (ctx->pc != 0x4300A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4300A8u; }
        if (ctx->pc != 0x4300A8u) { return; }
    }
    ctx->pc = 0x4300A8u;
label_4300a8:
    // 0x4300a8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x4300a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4300ac:
    // 0x4300ac: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4300acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4300b0:
    // 0x4300b0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4300b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4300b4:
    // 0x4300b4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4300b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4300b8:
    // 0x4300b8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4300b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4300bc:
    // 0x4300bc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x4300bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4300c0:
    // 0x4300c0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4300c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4300c4:
    // 0x4300c4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4300c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4300c8:
    // 0x4300c8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4300c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4300cc:
    // 0x4300cc: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x4300ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4300d0:
    // 0x4300d0: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4300d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4300d4:
    // 0x4300d4: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4300d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4300d8:
    // 0x4300d8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4300d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4300dc:
    // 0x4300dc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4300dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4300e0:
    // 0x4300e0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4300e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4300e4:
    // 0x4300e4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4300e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4300e8:
    // 0x4300e8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4300e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4300ec:
    // 0x4300ec: 0xc0892b0  jal         func_224AC0
label_4300f0:
    if (ctx->pc == 0x4300F0u) {
        ctx->pc = 0x4300F0u;
            // 0x4300f0: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x4300F4u;
        goto label_4300f4;
    }
    ctx->pc = 0x4300ECu;
    SET_GPR_U32(ctx, 31, 0x4300F4u);
    ctx->pc = 0x4300F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4300ECu;
            // 0x4300f0: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4300F4u; }
        if (ctx->pc != 0x4300F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4300F4u; }
        if (ctx->pc != 0x4300F4u) { return; }
    }
    ctx->pc = 0x4300F4u;
label_4300f4:
    // 0x4300f4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x4300f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4300f8:
    // 0x4300f8: 0xc04cc1c  jal         func_133070
label_4300fc:
    if (ctx->pc == 0x4300FCu) {
        ctx->pc = 0x4300FCu;
            // 0x4300fc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x430100u;
        goto label_430100;
    }
    ctx->pc = 0x4300F8u;
    SET_GPR_U32(ctx, 31, 0x430100u);
    ctx->pc = 0x4300FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4300F8u;
            // 0x4300fc: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430100u; }
        if (ctx->pc != 0x430100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430100u; }
        if (ctx->pc != 0x430100u) { return; }
    }
    ctx->pc = 0x430100u;
label_430100:
    // 0x430100: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x430100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_430104:
    // 0x430104: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x430104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_430108:
    // 0x430108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x430108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43010c:
    // 0x43010c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_430110:
    // 0x430110: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x430110u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_430114:
    // 0x430114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x430114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430118:
    // 0x430118: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x430118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
label_43011c:
    // 0x43011c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x43011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_430120:
    // 0x430120: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x430120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_430124:
    // 0x430124: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x430124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_430128:
    // 0x430128: 0xc04cc70  jal         func_1331C0
label_43012c:
    if (ctx->pc == 0x43012Cu) {
        ctx->pc = 0x43012Cu;
            // 0x43012c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x430130u;
        goto label_430130;
    }
    ctx->pc = 0x430128u;
    SET_GPR_U32(ctx, 31, 0x430130u);
    ctx->pc = 0x43012Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430128u;
            // 0x43012c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430130u; }
        if (ctx->pc != 0x430130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430130u; }
        if (ctx->pc != 0x430130u) { return; }
    }
    ctx->pc = 0x430130u;
label_430130:
    // 0x430130: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_430134:
    // 0x430134: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x430134u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_430138:
    // 0x430138: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x430138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43013c:
    // 0x43013c: 0xc7a600f0  lwc1        $f6, 0xF0($sp)
    ctx->pc = 0x43013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_430140:
    // 0x430140: 0xc7a500f4  lwc1        $f5, 0xF4($sp)
    ctx->pc = 0x430140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_430144:
    // 0x430144: 0xc7a400f8  lwc1        $f4, 0xF8($sp)
    ctx->pc = 0x430144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_430148:
    // 0x430148: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x430148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_43014c:
    // 0x43014c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x43014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_430150:
    // 0x430150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x430150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_430154:
    // 0x430154: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x430154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_430158:
    // 0x430158: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x430158u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_43015c:
    // 0x43015c: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x43015cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_430160:
    // 0x430160: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x430160u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_430164:
    // 0x430164: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x430164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_430168:
    // 0x430168: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x430168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43016c:
    // 0x43016c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x43016cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_430170:
    // 0x430170: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x430170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_430174:
    // 0x430174: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x430174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_430178:
    // 0x430178: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x430178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_43017c:
    // 0x43017c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x43017cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_430180:
    // 0x430180: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x430180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_430184:
    // 0x430184: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x430184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_430188:
    // 0x430188: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x430188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_43018c:
    // 0x43018c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x43018cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_430190:
    // 0x430190: 0xc088b74  jal         func_222DD0
label_430194:
    if (ctx->pc == 0x430194u) {
        ctx->pc = 0x430194u;
            // 0x430194: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x430198u;
        goto label_430198;
    }
    ctx->pc = 0x430190u;
    SET_GPR_U32(ctx, 31, 0x430198u);
    ctx->pc = 0x430194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430190u;
            // 0x430194: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430198u; }
        if (ctx->pc != 0x430198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430198u; }
        if (ctx->pc != 0x430198u) { return; }
    }
    ctx->pc = 0x430198u;
label_430198:
    // 0x430198: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x430198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43019c:
    // 0x43019c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4301a0:
    // 0x4301a0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4301a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4301a4:
    // 0x4301a4: 0x320f809  jalr        $t9
label_4301a8:
    if (ctx->pc == 0x4301A8u) {
        ctx->pc = 0x4301A8u;
            // 0x4301a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4301ACu;
        goto label_4301ac;
    }
    ctx->pc = 0x4301A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4301ACu);
        ctx->pc = 0x4301A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4301A4u;
            // 0x4301a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4301ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4301ACu; }
            if (ctx->pc != 0x4301ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4301ACu;
label_4301ac:
    // 0x4301ac: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x4301acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
label_4301b0:
    // 0x4301b0: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_4301b4:
    if (ctx->pc == 0x4301B4u) {
        ctx->pc = 0x4301B4u;
            // 0x4301b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4301B8u;
        goto label_4301b8;
    }
    ctx->pc = 0x4301B0u;
    {
        const bool branch_taken_0x4301b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4301b0) {
            ctx->pc = 0x4301B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4301B0u;
            // 0x4301b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4301FCu;
            goto label_4301fc;
        }
    }
    ctx->pc = 0x4301B8u;
label_4301b8:
    // 0x4301b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4301b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4301bc:
    // 0x4301bc: 0x26440170  addiu       $a0, $s2, 0x170
    ctx->pc = 0x4301bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_4301c0:
    // 0x4301c0: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x4301c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_4301c4:
    // 0x4301c4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4301c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4301c8:
    // 0x4301c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4301c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4301cc:
    // 0x4301cc: 0xc04c720  jal         func_131C80
label_4301d0:
    if (ctx->pc == 0x4301D0u) {
        ctx->pc = 0x4301D0u;
            // 0x4301d0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x4301D4u;
        goto label_4301d4;
    }
    ctx->pc = 0x4301CCu;
    SET_GPR_U32(ctx, 31, 0x4301D4u);
    ctx->pc = 0x4301D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4301CCu;
            // 0x4301d0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4301D4u; }
        if (ctx->pc != 0x4301D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4301D4u; }
        if (ctx->pc != 0x4301D4u) { return; }
    }
    ctx->pc = 0x4301D4u;
label_4301d4:
    // 0x4301d4: 0xc040180  jal         func_100600
label_4301d8:
    if (ctx->pc == 0x4301D8u) {
        ctx->pc = 0x4301D8u;
            // 0x4301d8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x4301DCu;
        goto label_4301dc;
    }
    ctx->pc = 0x4301D4u;
    SET_GPR_U32(ctx, 31, 0x4301DCu);
    ctx->pc = 0x4301D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4301D4u;
            // 0x4301d8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4301DCu; }
        if (ctx->pc != 0x4301DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4301DCu; }
        if (ctx->pc != 0x4301DCu) { return; }
    }
    ctx->pc = 0x4301DCu;
label_4301dc:
    // 0x4301dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4301dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4301e0:
    // 0x4301e0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4301e4:
    if (ctx->pc == 0x4301E4u) {
        ctx->pc = 0x4301E4u;
            // 0x4301e4: 0xae440180  sw          $a0, 0x180($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 4));
        ctx->pc = 0x4301E8u;
        goto label_4301e8;
    }
    ctx->pc = 0x4301E0u;
    {
        const bool branch_taken_0x4301e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4301e0) {
            ctx->pc = 0x4301E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4301E0u;
            // 0x4301e4: 0xae440180  sw          $a0, 0x180($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4301F8u;
            goto label_4301f8;
        }
    }
    ctx->pc = 0x4301E8u;
label_4301e8:
    // 0x4301e8: 0xc12d0c0  jal         func_4B4300
label_4301ec:
    if (ctx->pc == 0x4301ECu) {
        ctx->pc = 0x4301ECu;
            // 0x4301ec: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x4301F0u;
        goto label_4301f0;
    }
    ctx->pc = 0x4301E8u;
    SET_GPR_U32(ctx, 31, 0x4301F0u);
    ctx->pc = 0x4301ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4301E8u;
            // 0x4301ec: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4300u;
    if (runtime->hasFunction(0x4B4300u)) {
        auto targetFn = runtime->lookupFunction(0x4B4300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4301F0u; }
        if (ctx->pc != 0x4301F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4300_0x4b4300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4301F0u; }
        if (ctx->pc != 0x4301F0u) { return; }
    }
    ctx->pc = 0x4301F0u;
label_4301f0:
    // 0x4301f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4301f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4301f4:
    // 0x4301f4: 0xae440180  sw          $a0, 0x180($s2)
    ctx->pc = 0x4301f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 4));
label_4301f8:
    // 0x4301f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4301f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4301fc:
    // 0x4301fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4301fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_430200:
    // 0x430200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x430200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_430204:
    // 0x430204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x430204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_430208:
    // 0x430208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43020c:
    // 0x43020c: 0x3e00008  jr          $ra
label_430210:
    if (ctx->pc == 0x430210u) {
        ctx->pc = 0x430210u;
            // 0x430210: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x430214u;
        goto label_430214;
    }
    ctx->pc = 0x43020Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43020Cu;
            // 0x430210: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430214u;
label_430214:
    // 0x430214: 0x0  nop
    ctx->pc = 0x430214u;
    // NOP
label_430218:
    // 0x430218: 0x0  nop
    ctx->pc = 0x430218u;
    // NOP
label_43021c:
    // 0x43021c: 0x0  nop
    ctx->pc = 0x43021cu;
    // NOP
label_430220:
    // 0x430220: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x430220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_430224:
    // 0x430224: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x430224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_430228:
    // 0x430228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x430228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43022c:
    // 0x43022c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_430230:
    // 0x430230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x430230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_430234:
    // 0x430234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_430238:
    // 0x430238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x430238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43023c:
    // 0x43023c: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x43023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_430240:
    // 0x430240: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x430240u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_430244:
    // 0x430244: 0x102000bb  beqz        $at, . + 4 + (0xBB << 2)
label_430248:
    if (ctx->pc == 0x430248u) {
        ctx->pc = 0x430248u;
            // 0x430248: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43024Cu;
        goto label_43024c;
    }
    ctx->pc = 0x430244u;
    {
        const bool branch_taken_0x430244 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x430248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430244u;
            // 0x430248: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430244) {
            ctx->pc = 0x430534u;
            goto label_430534;
        }
    }
    ctx->pc = 0x43024Cu;
label_43024c:
    // 0x43024c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x43024cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_430250:
    // 0x430250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x430250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_430254:
    // 0x430254: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x430254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_430258:
    // 0x430258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x430258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_43025c:
    // 0x43025c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x43025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_430260:
    // 0x430260: 0x600008  jr          $v1
label_430264:
    if (ctx->pc == 0x430264u) {
        ctx->pc = 0x430268u;
        goto label_430268;
    }
    ctx->pc = 0x430260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x430268u: goto label_430268;
            case 0x4302ECu: goto label_4302ec;
            case 0x4303D4u: goto label_4303d4;
            case 0x43049Cu: goto label_43049c;
            case 0x430534u: goto label_430534;
            default: break;
        }
        return;
    }
    ctx->pc = 0x430268u;
label_430268:
    // 0x430268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x430268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43026c:
    // 0x43026c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_430270:
    // 0x430270: 0xae8300f0  sw          $v1, 0xF0($s4)
    ctx->pc = 0x430270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 3));
label_430274:
    // 0x430274: 0x8c436ed8  lw          $v1, 0x6ED8($v0)
    ctx->pc = 0x430274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
label_430278:
    // 0x430278: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x430278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_43027c:
    // 0x43027c: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x43027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_430280:
    // 0x430280: 0x8c710030  lw          $s1, 0x30($v1)
    ctx->pc = 0x430280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_430284:
    // 0x430284: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x430284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_430288:
    // 0x430288: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x430288u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43028c:
    // 0x43028c: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x43028cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_430290:
    // 0x430290: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x430290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_430294:
    // 0x430294: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x430294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_430298:
    // 0x430298: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x430298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_43029c:
    // 0x43029c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x43029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4302a0:
    // 0x4302a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4302a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4302a4:
    // 0x4302a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4302a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4302a8:
    // 0x4302a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4302a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4302ac:
    // 0x4302ac: 0xc0d615c  jal         func_358570
label_4302b0:
    if (ctx->pc == 0x4302B0u) {
        ctx->pc = 0x4302B0u;
            // 0x4302b0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x4302B4u;
        goto label_4302b4;
    }
    ctx->pc = 0x4302ACu;
    SET_GPR_U32(ctx, 31, 0x4302B4u);
    ctx->pc = 0x4302B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4302ACu;
            // 0x4302b0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4302B4u; }
        if (ctx->pc != 0x4302B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4302B4u; }
        if (ctx->pc != 0x4302B4u) { return; }
    }
    ctx->pc = 0x4302B4u;
label_4302b4:
    // 0x4302b4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4302b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4302b8:
    // 0x4302b8: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x4302b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_4302bc:
    // 0x4302bc: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_4302c0:
    if (ctx->pc == 0x4302C0u) {
        ctx->pc = 0x4302C0u;
            // 0x4302c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4302C4u;
        goto label_4302c4;
    }
    ctx->pc = 0x4302BCu;
    {
        const bool branch_taken_0x4302bc = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x4302C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4302BCu;
            // 0x4302c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4302bc) {
            ctx->pc = 0x430290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_430290;
        }
    }
    ctx->pc = 0x4302C4u;
label_4302c4:
    // 0x4302c4: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x4302c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4302c8:
    // 0x4302c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4302c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4302cc:
    // 0x4302cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4302ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4302d0:
    // 0x4302d0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x4302d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_4302d4:
    // 0x4302d4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4302d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4302d8:
    // 0x4302d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4302d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4302dc:
    // 0x4302dc: 0xc08bff0  jal         func_22FFC0
label_4302e0:
    if (ctx->pc == 0x4302E0u) {
        ctx->pc = 0x4302E0u;
            // 0x4302e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4302E4u;
        goto label_4302e4;
    }
    ctx->pc = 0x4302DCu;
    SET_GPR_U32(ctx, 31, 0x4302E4u);
    ctx->pc = 0x4302E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4302DCu;
            // 0x4302e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4302E4u; }
        if (ctx->pc != 0x4302E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4302E4u; }
        if (ctx->pc != 0x4302E4u) { return; }
    }
    ctx->pc = 0x4302E4u;
label_4302e4:
    // 0x4302e4: 0x10000094  b           . + 4 + (0x94 << 2)
label_4302e8:
    if (ctx->pc == 0x4302E8u) {
        ctx->pc = 0x4302E8u;
            // 0x4302e8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x4302ECu;
        goto label_4302ec;
    }
    ctx->pc = 0x4302E4u;
    {
        const bool branch_taken_0x4302e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4302E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4302E4u;
            // 0x4302e8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4302e4) {
            ctx->pc = 0x430538u;
            goto label_430538;
        }
    }
    ctx->pc = 0x4302ECu;
label_4302ec:
    // 0x4302ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4302ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4302f0:
    // 0x4302f0: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x4302f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_4302f4:
    // 0x4302f4: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x4302f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_4302f8:
    // 0x4302f8: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4302f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4302fc:
    // 0x4302fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4302fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_430300:
    // 0x430300: 0xc04cc04  jal         func_133010
label_430304:
    if (ctx->pc == 0x430304u) {
        ctx->pc = 0x430304u;
            // 0x430304: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x430308u;
        goto label_430308;
    }
    ctx->pc = 0x430300u;
    SET_GPR_U32(ctx, 31, 0x430308u);
    ctx->pc = 0x430304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430300u;
            // 0x430304: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430308u; }
        if (ctx->pc != 0x430308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430308u; }
        if (ctx->pc != 0x430308u) { return; }
    }
    ctx->pc = 0x430308u;
label_430308:
    // 0x430308: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x430308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_43030c:
    // 0x43030c: 0xc04f278  jal         func_13C9E0
label_430310:
    if (ctx->pc == 0x430310u) {
        ctx->pc = 0x430310u;
            // 0x430310: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x430314u;
        goto label_430314;
    }
    ctx->pc = 0x43030Cu;
    SET_GPR_U32(ctx, 31, 0x430314u);
    ctx->pc = 0x430310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43030Cu;
            // 0x430310: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430314u; }
        if (ctx->pc != 0x430314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430314u; }
        if (ctx->pc != 0x430314u) { return; }
    }
    ctx->pc = 0x430314u;
label_430314:
    // 0x430314: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x430314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_430318:
    // 0x430318: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x430318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_43031c:
    // 0x43031c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x43031cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_430320:
    // 0x430320: 0xc04cca0  jal         func_133280
label_430324:
    if (ctx->pc == 0x430324u) {
        ctx->pc = 0x430324u;
            // 0x430324: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->pc = 0x430328u;
        goto label_430328;
    }
    ctx->pc = 0x430320u;
    SET_GPR_U32(ctx, 31, 0x430328u);
    ctx->pc = 0x430324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430320u;
            // 0x430324: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430328u; }
        if (ctx->pc != 0x430328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430328u; }
        if (ctx->pc != 0x430328u) { return; }
    }
    ctx->pc = 0x430328u;
label_430328:
    // 0x430328: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x430328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_43032c:
    // 0x43032c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x43032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_430330:
    // 0x430330: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x430330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_430334:
    // 0x430334: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x430334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430338:
    // 0x430338: 0xc04cc7c  jal         func_1331F0
label_43033c:
    if (ctx->pc == 0x43033Cu) {
        ctx->pc = 0x43033Cu;
            // 0x43033c: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x430340u;
        goto label_430340;
    }
    ctx->pc = 0x430338u;
    SET_GPR_U32(ctx, 31, 0x430340u);
    ctx->pc = 0x43033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430338u;
            // 0x43033c: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430340u; }
        if (ctx->pc != 0x430340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430340u; }
        if (ctx->pc != 0x430340u) { return; }
    }
    ctx->pc = 0x430340u;
label_430340:
    // 0x430340: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x430340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_430344:
    // 0x430344: 0xc04cc04  jal         func_133010
label_430348:
    if (ctx->pc == 0x430348u) {
        ctx->pc = 0x430348u;
            // 0x430348: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x43034Cu;
        goto label_43034c;
    }
    ctx->pc = 0x430344u;
    SET_GPR_U32(ctx, 31, 0x43034Cu);
    ctx->pc = 0x430348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430344u;
            // 0x430348: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43034Cu; }
        if (ctx->pc != 0x43034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43034Cu; }
        if (ctx->pc != 0x43034Cu) { return; }
    }
    ctx->pc = 0x43034Cu;
label_43034c:
    // 0x43034c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x43034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_430350:
    // 0x430350: 0xc04f2b8  jal         func_13CAE0
label_430354:
    if (ctx->pc == 0x430354u) {
        ctx->pc = 0x430354u;
            // 0x430354: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x430358u;
        goto label_430358;
    }
    ctx->pc = 0x430350u;
    SET_GPR_U32(ctx, 31, 0x430358u);
    ctx->pc = 0x430354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430350u;
            // 0x430354: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430358u; }
        if (ctx->pc != 0x430358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430358u; }
        if (ctx->pc != 0x430358u) { return; }
    }
    ctx->pc = 0x430358u;
label_430358:
    // 0x430358: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x430358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_43035c:
    // 0x43035c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x43035cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_430360:
    // 0x430360: 0xc04cd60  jal         func_133580
label_430364:
    if (ctx->pc == 0x430364u) {
        ctx->pc = 0x430364u;
            // 0x430364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430368u;
        goto label_430368;
    }
    ctx->pc = 0x430360u;
    SET_GPR_U32(ctx, 31, 0x430368u);
    ctx->pc = 0x430364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430360u;
            // 0x430364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430368u; }
        if (ctx->pc != 0x430368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430368u; }
        if (ctx->pc != 0x430368u) { return; }
    }
    ctx->pc = 0x430368u;
label_430368:
    // 0x430368: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x430368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_43036c:
    // 0x43036c: 0xc04c994  jal         func_132650
label_430370:
    if (ctx->pc == 0x430370u) {
        ctx->pc = 0x430370u;
            // 0x430370: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x430374u;
        goto label_430374;
    }
    ctx->pc = 0x43036Cu;
    SET_GPR_U32(ctx, 31, 0x430374u);
    ctx->pc = 0x430370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43036Cu;
            // 0x430370: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430374u; }
        if (ctx->pc != 0x430374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430374u; }
        if (ctx->pc != 0x430374u) { return; }
    }
    ctx->pc = 0x430374u;
label_430374:
    // 0x430374: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x430374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_430378:
    // 0x430378: 0xc04c720  jal         func_131C80
label_43037c:
    if (ctx->pc == 0x43037Cu) {
        ctx->pc = 0x43037Cu;
            // 0x43037c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x430380u;
        goto label_430380;
    }
    ctx->pc = 0x430378u;
    SET_GPR_U32(ctx, 31, 0x430380u);
    ctx->pc = 0x43037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430378u;
            // 0x43037c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430380u; }
        if (ctx->pc != 0x430380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430380u; }
        if (ctx->pc != 0x430380u) { return; }
    }
    ctx->pc = 0x430380u;
label_430380:
    // 0x430380: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x430380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_430384:
    // 0x430384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x430384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_430388:
    // 0x430388: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x430388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_43038c:
    // 0x43038c: 0xc68100d4  lwc1        $f1, 0xD4($s4)
    ctx->pc = 0x43038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_430390:
    // 0x430390: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x430390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_430394:
    // 0x430394: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x430394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_430398:
    // 0x430398: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x430398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_43039c:
    // 0x43039c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43039cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4303a0:
    // 0x4303a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4303a4:
    if (ctx->pc == 0x4303A4u) {
        ctx->pc = 0x4303A4u;
            // 0x4303a4: 0xe68100d4  swc1        $f1, 0xD4($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
        ctx->pc = 0x4303A8u;
        goto label_4303a8;
    }
    ctx->pc = 0x4303A0u;
    {
        const bool branch_taken_0x4303a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4303A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4303A0u;
            // 0x4303a4: 0xe68100d4  swc1        $f1, 0xD4($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4303a0) {
            ctx->pc = 0x4303ACu;
            goto label_4303ac;
        }
    }
    ctx->pc = 0x4303A8u;
label_4303a8:
    // 0x4303a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4303a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4303ac:
    // 0x4303ac: 0x928300fc  lbu         $v1, 0xFC($s4)
    ctx->pc = 0x4303acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 252)));
label_4303b0:
    // 0x4303b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4303b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4303b4:
    // 0x4303b4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x4303b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_4303b8:
    // 0x4303b8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4303b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4303bc:
    // 0x4303bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4303bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4303c0:
    // 0x4303c0: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_4303c4:
    if (ctx->pc == 0x4303C4u) {
        ctx->pc = 0x4303C8u;
        goto label_4303c8;
    }
    ctx->pc = 0x4303C0u;
    {
        const bool branch_taken_0x4303c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4303c0) {
            ctx->pc = 0x430534u;
            goto label_430534;
        }
    }
    ctx->pc = 0x4303C8u;
label_4303c8:
    // 0x4303c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4303c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4303cc:
    // 0x4303cc: 0x10000059  b           . + 4 + (0x59 << 2)
label_4303d0:
    if (ctx->pc == 0x4303D0u) {
        ctx->pc = 0x4303D0u;
            // 0x4303d0: 0xa28300fc  sb          $v1, 0xFC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4303D4u;
        goto label_4303d4;
    }
    ctx->pc = 0x4303CCu;
    {
        const bool branch_taken_0x4303cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4303D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4303CCu;
            // 0x4303d0: 0xa28300fc  sb          $v1, 0xFC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4303cc) {
            ctx->pc = 0x430534u;
            goto label_430534;
        }
    }
    ctx->pc = 0x4303D4u;
label_4303d4:
    // 0x4303d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4303d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4303d8:
    // 0x4303d8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x4303d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_4303dc:
    // 0x4303dc: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x4303dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_4303e0:
    // 0x4303e0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4303e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4303e4:
    // 0x4303e4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4303e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4303e8:
    // 0x4303e8: 0xc04cc04  jal         func_133010
label_4303ec:
    if (ctx->pc == 0x4303ECu) {
        ctx->pc = 0x4303ECu;
            // 0x4303ec: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4303F0u;
        goto label_4303f0;
    }
    ctx->pc = 0x4303E8u;
    SET_GPR_U32(ctx, 31, 0x4303F0u);
    ctx->pc = 0x4303ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4303E8u;
            // 0x4303ec: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4303F0u; }
        if (ctx->pc != 0x4303F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4303F0u; }
        if (ctx->pc != 0x4303F0u) { return; }
    }
    ctx->pc = 0x4303F0u;
label_4303f0:
    // 0x4303f0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x4303f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4303f4:
    // 0x4303f4: 0xc04f278  jal         func_13C9E0
label_4303f8:
    if (ctx->pc == 0x4303F8u) {
        ctx->pc = 0x4303F8u;
            // 0x4303f8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4303FCu;
        goto label_4303fc;
    }
    ctx->pc = 0x4303F4u;
    SET_GPR_U32(ctx, 31, 0x4303FCu);
    ctx->pc = 0x4303F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4303F4u;
            // 0x4303f8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4303FCu; }
        if (ctx->pc != 0x4303FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4303FCu; }
        if (ctx->pc != 0x4303FCu) { return; }
    }
    ctx->pc = 0x4303FCu;
label_4303fc:
    // 0x4303fc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4303fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_430400:
    // 0x430400: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x430400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_430404:
    // 0x430404: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x430404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_430408:
    // 0x430408: 0xc04cca0  jal         func_133280
label_43040c:
    if (ctx->pc == 0x43040Cu) {
        ctx->pc = 0x43040Cu;
            // 0x43040c: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->pc = 0x430410u;
        goto label_430410;
    }
    ctx->pc = 0x430408u;
    SET_GPR_U32(ctx, 31, 0x430410u);
    ctx->pc = 0x43040Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430408u;
            // 0x43040c: 0x24c6cc70  addiu       $a2, $a2, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430410u; }
        if (ctx->pc != 0x430410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430410u; }
        if (ctx->pc != 0x430410u) { return; }
    }
    ctx->pc = 0x430410u;
label_430410:
    // 0x430410: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x430410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_430414:
    // 0x430414: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x430414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_430418:
    // 0x430418: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x430418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43041c:
    // 0x43041c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430420:
    // 0x430420: 0xc04cc7c  jal         func_1331F0
label_430424:
    if (ctx->pc == 0x430424u) {
        ctx->pc = 0x430424u;
            // 0x430424: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x430428u;
        goto label_430428;
    }
    ctx->pc = 0x430420u;
    SET_GPR_U32(ctx, 31, 0x430428u);
    ctx->pc = 0x430424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430420u;
            // 0x430424: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430428u; }
        if (ctx->pc != 0x430428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430428u; }
        if (ctx->pc != 0x430428u) { return; }
    }
    ctx->pc = 0x430428u;
label_430428:
    // 0x430428: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x430428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_43042c:
    // 0x43042c: 0xc04cc04  jal         func_133010
label_430430:
    if (ctx->pc == 0x430430u) {
        ctx->pc = 0x430430u;
            // 0x430430: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x430434u;
        goto label_430434;
    }
    ctx->pc = 0x43042Cu;
    SET_GPR_U32(ctx, 31, 0x430434u);
    ctx->pc = 0x430430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43042Cu;
            // 0x430430: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430434u; }
        if (ctx->pc != 0x430434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430434u; }
        if (ctx->pc != 0x430434u) { return; }
    }
    ctx->pc = 0x430434u;
label_430434:
    // 0x430434: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x430434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_430438:
    // 0x430438: 0xc04f2b8  jal         func_13CAE0
label_43043c:
    if (ctx->pc == 0x43043Cu) {
        ctx->pc = 0x43043Cu;
            // 0x43043c: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x430440u;
        goto label_430440;
    }
    ctx->pc = 0x430438u;
    SET_GPR_U32(ctx, 31, 0x430440u);
    ctx->pc = 0x43043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430438u;
            // 0x43043c: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430440u; }
        if (ctx->pc != 0x430440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430440u; }
        if (ctx->pc != 0x430440u) { return; }
    }
    ctx->pc = 0x430440u;
label_430440:
    // 0x430440: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x430440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_430444:
    // 0x430444: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x430444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_430448:
    // 0x430448: 0xc04cd60  jal         func_133580
label_43044c:
    if (ctx->pc == 0x43044Cu) {
        ctx->pc = 0x43044Cu;
            // 0x43044c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430450u;
        goto label_430450;
    }
    ctx->pc = 0x430448u;
    SET_GPR_U32(ctx, 31, 0x430450u);
    ctx->pc = 0x43044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430448u;
            // 0x43044c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430450u; }
        if (ctx->pc != 0x430450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430450u; }
        if (ctx->pc != 0x430450u) { return; }
    }
    ctx->pc = 0x430450u;
label_430450:
    // 0x430450: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x430450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_430454:
    // 0x430454: 0xc04c994  jal         func_132650
label_430458:
    if (ctx->pc == 0x430458u) {
        ctx->pc = 0x430458u;
            // 0x430458: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x43045Cu;
        goto label_43045c;
    }
    ctx->pc = 0x430454u;
    SET_GPR_U32(ctx, 31, 0x43045Cu);
    ctx->pc = 0x430458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430454u;
            // 0x430458: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43045Cu; }
        if (ctx->pc != 0x43045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43045Cu; }
        if (ctx->pc != 0x43045Cu) { return; }
    }
    ctx->pc = 0x43045Cu;
label_43045c:
    // 0x43045c: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x43045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_430460:
    // 0x430460: 0xc04c720  jal         func_131C80
label_430464:
    if (ctx->pc == 0x430464u) {
        ctx->pc = 0x430464u;
            // 0x430464: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x430468u;
        goto label_430468;
    }
    ctx->pc = 0x430460u;
    SET_GPR_U32(ctx, 31, 0x430468u);
    ctx->pc = 0x430464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430460u;
            // 0x430464: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430468u; }
        if (ctx->pc != 0x430468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430468u; }
        if (ctx->pc != 0x430468u) { return; }
    }
    ctx->pc = 0x430468u;
label_430468:
    // 0x430468: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x430468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_43046c:
    // 0x43046c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x43046cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_430470:
    // 0x430470: 0xc68100d4  lwc1        $f1, 0xD4($s4)
    ctx->pc = 0x430470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_430474:
    // 0x430474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x430474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_430478:
    // 0x430478: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x430478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43047c:
    // 0x43047c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x43047cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_430480:
    // 0x430480: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x430480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_430484:
    // 0x430484: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_430488:
    if (ctx->pc == 0x430488u) {
        ctx->pc = 0x430488u;
            // 0x430488: 0xe68100d4  swc1        $f1, 0xD4($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
        ctx->pc = 0x43048Cu;
        goto label_43048c;
    }
    ctx->pc = 0x430484u;
    {
        const bool branch_taken_0x430484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x430488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430484u;
            // 0x430488: 0xe68100d4  swc1        $f1, 0xD4($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x430484) {
            ctx->pc = 0x430534u;
            goto label_430534;
        }
    }
    ctx->pc = 0x43048Cu;
label_43048c:
    // 0x43048c: 0xc10bf90  jal         func_42FE40
label_430490:
    if (ctx->pc == 0x430490u) {
        ctx->pc = 0x430490u;
            // 0x430490: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430494u;
        goto label_430494;
    }
    ctx->pc = 0x43048Cu;
    SET_GPR_U32(ctx, 31, 0x430494u);
    ctx->pc = 0x430490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43048Cu;
            // 0x430490: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42FE40u;
    goto label_42fe40;
    ctx->pc = 0x430494u;
label_430494:
    // 0x430494: 0x10000027  b           . + 4 + (0x27 << 2)
label_430498:
    if (ctx->pc == 0x430498u) {
        ctx->pc = 0x43049Cu;
        goto label_43049c;
    }
    ctx->pc = 0x430494u;
    {
        const bool branch_taken_0x430494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x430494) {
            ctx->pc = 0x430534u;
            goto label_430534;
        }
    }
    ctx->pc = 0x43049Cu;
label_43049c:
    // 0x43049c: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x43049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4304a0:
    // 0x4304a0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4304a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4304a4:
    // 0x4304a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4304a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4304a8:
    // 0x4304a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4304a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4304ac:
    // 0x4304ac: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4304acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4304b0:
    // 0x4304b0: 0xc089688  jal         func_225A20
label_4304b4:
    if (ctx->pc == 0x4304B4u) {
        ctx->pc = 0x4304B4u;
            // 0x4304b4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x4304B8u;
        goto label_4304b8;
    }
    ctx->pc = 0x4304B0u;
    SET_GPR_U32(ctx, 31, 0x4304B8u);
    ctx->pc = 0x4304B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4304B0u;
            // 0x4304b4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304B8u; }
        if (ctx->pc != 0x4304B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304B8u; }
        if (ctx->pc != 0x4304B8u) { return; }
    }
    ctx->pc = 0x4304B8u;
label_4304b8:
    // 0x4304b8: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x4304b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4304bc:
    // 0x4304bc: 0xc7ad00e4  lwc1        $f13, 0xE4($sp)
    ctx->pc = 0x4304bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4304c0:
    // 0x4304c0: 0xc7ae00e8  lwc1        $f14, 0xE8($sp)
    ctx->pc = 0x4304c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4304c4:
    // 0x4304c4: 0xc04cbd8  jal         func_132F60
label_4304c8:
    if (ctx->pc == 0x4304C8u) {
        ctx->pc = 0x4304C8u;
            // 0x4304c8: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x4304CCu;
        goto label_4304cc;
    }
    ctx->pc = 0x4304C4u;
    SET_GPR_U32(ctx, 31, 0x4304CCu);
    ctx->pc = 0x4304C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4304C4u;
            // 0x4304c8: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304CCu; }
        if (ctx->pc != 0x4304CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304CCu; }
        if (ctx->pc != 0x4304CCu) { return; }
    }
    ctx->pc = 0x4304CCu;
label_4304cc:
    // 0x4304cc: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x4304ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_4304d0:
    // 0x4304d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4304d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4304d4:
    // 0x4304d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4304d8:
    // 0x4304d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4304d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4304dc:
    // 0x4304dc: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4304dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4304e0:
    // 0x4304e0: 0xc089688  jal         func_225A20
label_4304e4:
    if (ctx->pc == 0x4304E4u) {
        ctx->pc = 0x4304E4u;
            // 0x4304e4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x4304E8u;
        goto label_4304e8;
    }
    ctx->pc = 0x4304E0u;
    SET_GPR_U32(ctx, 31, 0x4304E8u);
    ctx->pc = 0x4304E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4304E0u;
            // 0x4304e4: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304E8u; }
        if (ctx->pc != 0x4304E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304E8u; }
        if (ctx->pc != 0x4304E8u) { return; }
    }
    ctx->pc = 0x4304E8u;
label_4304e8:
    // 0x4304e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4304e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4304ec:
    // 0x4304ec: 0xc0a3828  jal         func_28E0A0
label_4304f0:
    if (ctx->pc == 0x4304F0u) {
        ctx->pc = 0x4304F0u;
            // 0x4304f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4304F4u;
        goto label_4304f4;
    }
    ctx->pc = 0x4304ECu;
    SET_GPR_U32(ctx, 31, 0x4304F4u);
    ctx->pc = 0x4304F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4304ECu;
            // 0x4304f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304F4u; }
        if (ctx->pc != 0x4304F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4304F4u; }
        if (ctx->pc != 0x4304F4u) { return; }
    }
    ctx->pc = 0x4304F4u;
label_4304f4:
    // 0x4304f4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x4304f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4304f8:
    // 0x4304f8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x4304f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4304fc:
    // 0x4304fc: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x4304fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_430500:
    // 0x430500: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x430500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_430504:
    // 0x430504: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x430504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_430508:
    // 0x430508: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x430508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_43050c:
    // 0x43050c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x43050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_430510:
    // 0x430510: 0xe7a20250  swc1        $f2, 0x250($sp)
    ctx->pc = 0x430510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_430514:
    // 0x430514: 0xe7a10254  swc1        $f1, 0x254($sp)
    ctx->pc = 0x430514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_430518:
    // 0x430518: 0xc04cc04  jal         func_133010
label_43051c:
    if (ctx->pc == 0x43051Cu) {
        ctx->pc = 0x43051Cu;
            // 0x43051c: 0xe7a0025c  swc1        $f0, 0x25C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
        ctx->pc = 0x430520u;
        goto label_430520;
    }
    ctx->pc = 0x430518u;
    SET_GPR_U32(ctx, 31, 0x430520u);
    ctx->pc = 0x43051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430518u;
            // 0x43051c: 0xe7a0025c  swc1        $f0, 0x25C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430520u; }
        if (ctx->pc != 0x430520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430520u; }
        if (ctx->pc != 0x430520u) { return; }
    }
    ctx->pc = 0x430520u;
label_430520:
    // 0x430520: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x430520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_430524:
    // 0x430524: 0xc04c720  jal         func_131C80
label_430528:
    if (ctx->pc == 0x430528u) {
        ctx->pc = 0x430528u;
            // 0x430528: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x43052Cu;
        goto label_43052c;
    }
    ctx->pc = 0x430524u;
    SET_GPR_U32(ctx, 31, 0x43052Cu);
    ctx->pc = 0x430528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430524u;
            // 0x430528: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43052Cu; }
        if (ctx->pc != 0x43052Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43052Cu; }
        if (ctx->pc != 0x43052Cu) { return; }
    }
    ctx->pc = 0x43052Cu;
label_43052c:
    // 0x43052c: 0xc088b74  jal         func_222DD0
label_430530:
    if (ctx->pc == 0x430530u) {
        ctx->pc = 0x430530u;
            // 0x430530: 0x8e840050  lw          $a0, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->pc = 0x430534u;
        goto label_430534;
    }
    ctx->pc = 0x43052Cu;
    SET_GPR_U32(ctx, 31, 0x430534u);
    ctx->pc = 0x430530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43052Cu;
            // 0x430530: 0x8e840050  lw          $a0, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430534u; }
        if (ctx->pc != 0x430534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x430534u; }
        if (ctx->pc != 0x430534u) { return; }
    }
    ctx->pc = 0x430534u;
label_430534:
    // 0x430534: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x430534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_430538:
    // 0x430538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x430538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43053c:
    // 0x43053c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43053cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_430540:
    // 0x430540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x430540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_430544:
    // 0x430544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x430544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_430548:
    // 0x430548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43054c:
    // 0x43054c: 0x3e00008  jr          $ra
label_430550:
    if (ctx->pc == 0x430550u) {
        ctx->pc = 0x430550u;
            // 0x430550: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x430554u;
        goto label_430554;
    }
    ctx->pc = 0x43054Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43054Cu;
            // 0x430550: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430554u;
label_430554:
    // 0x430554: 0x0  nop
    ctx->pc = 0x430554u;
    // NOP
label_430558:
    // 0x430558: 0x0  nop
    ctx->pc = 0x430558u;
    // NOP
label_43055c:
    // 0x43055c: 0x0  nop
    ctx->pc = 0x43055cu;
    // NOP
label_430560:
    // 0x430560: 0x3e00008  jr          $ra
label_430564:
    if (ctx->pc == 0x430564u) {
        ctx->pc = 0x430564u;
            // 0x430564: 0x240261c6  addiu       $v0, $zero, 0x61C6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25030));
        ctx->pc = 0x430568u;
        goto label_430568;
    }
    ctx->pc = 0x430560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430560u;
            // 0x430564: 0x240261c6  addiu       $v0, $zero, 0x61C6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430568u;
label_430568:
    // 0x430568: 0x0  nop
    ctx->pc = 0x430568u;
    // NOP
label_43056c:
    // 0x43056c: 0x0  nop
    ctx->pc = 0x43056cu;
    // NOP
label_430570:
    // 0x430570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x430570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_430574:
    // 0x430574: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x430574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_430578:
    // 0x430578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x430578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43057c:
    // 0x43057c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_430580:
    // 0x430580: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x430580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430584:
    // 0x430584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x430584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_430588:
    // 0x430588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43058c:
    // 0x43058c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_430590:
    // 0x430590: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x430590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_430594:
    // 0x430594: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_430598:
    if (ctx->pc == 0x430598u) {
        ctx->pc = 0x430598u;
            // 0x430598: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43059Cu;
        goto label_43059c;
    }
    ctx->pc = 0x430594u;
    {
        const bool branch_taken_0x430594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x430598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430594u;
            // 0x430598: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430594) {
            ctx->pc = 0x4305D8u;
            goto label_4305d8;
        }
    }
    ctx->pc = 0x43059Cu;
label_43059c:
    // 0x43059c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43059cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4305a0:
    // 0x4305a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4305a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4305a4:
    // 0x4305a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4305a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4305a8:
    // 0x4305a8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4305a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4305ac:
    // 0x4305ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4305acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4305b0:
    // 0x4305b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4305b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4305b4:
    // 0x4305b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4305b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4305b8:
    // 0x4305b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4305b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4305bc:
    // 0x4305bc: 0x320f809  jalr        $t9
label_4305c0:
    if (ctx->pc == 0x4305C0u) {
        ctx->pc = 0x4305C4u;
        goto label_4305c4;
    }
    ctx->pc = 0x4305BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4305C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4305C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4305C4u; }
            if (ctx->pc != 0x4305C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4305C4u;
label_4305c4:
    // 0x4305c4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4305c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4305c8:
    // 0x4305c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4305c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4305cc:
    // 0x4305cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4305ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4305d0:
    // 0x4305d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4305d4:
    if (ctx->pc == 0x4305D4u) {
        ctx->pc = 0x4305D4u;
            // 0x4305d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4305D8u;
        goto label_4305d8;
    }
    ctx->pc = 0x4305D0u;
    {
        const bool branch_taken_0x4305d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4305D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4305D0u;
            // 0x4305d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4305d0) {
            ctx->pc = 0x4305A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4305a8;
        }
    }
    ctx->pc = 0x4305D8u;
label_4305d8:
    // 0x4305d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4305d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4305dc:
    // 0x4305dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4305dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4305e0:
    // 0x4305e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4305e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4305e4:
    // 0x4305e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4305e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4305e8:
    // 0x4305e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4305e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4305ec:
    // 0x4305ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4305ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4305f0:
    // 0x4305f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4305f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4305f4:
    // 0x4305f4: 0x3e00008  jr          $ra
label_4305f8:
    if (ctx->pc == 0x4305F8u) {
        ctx->pc = 0x4305F8u;
            // 0x4305f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4305FCu;
        goto label_4305fc;
    }
    ctx->pc = 0x4305F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4305F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4305F4u;
            // 0x4305f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4305FCu;
label_4305fc:
    // 0x4305fc: 0x0  nop
    ctx->pc = 0x4305fcu;
    // NOP
label_430600:
    // 0x430600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x430600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_430604:
    // 0x430604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x430604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_430608:
    // 0x430608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x430608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43060c:
    // 0x43060c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x43060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_430610:
    // 0x430610: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_430614:
    if (ctx->pc == 0x430614u) {
        ctx->pc = 0x430614u;
            // 0x430614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x430618u;
        goto label_430618;
    }
    ctx->pc = 0x430610u;
    {
        const bool branch_taken_0x430610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x430614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430610u;
            // 0x430614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430610) {
            ctx->pc = 0x430730u;
            goto label_430730;
        }
    }
    ctx->pc = 0x430618u;
label_430618:
    // 0x430618: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x430618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_43061c:
    // 0x43061c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_430620:
    // 0x430620: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x430620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_430624:
    // 0x430624: 0xc075128  jal         func_1D44A0
label_430628:
    if (ctx->pc == 0x430628u) {
        ctx->pc = 0x430628u;
            // 0x430628: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x43062Cu;
        goto label_43062c;
    }
    ctx->pc = 0x430624u;
    SET_GPR_U32(ctx, 31, 0x43062Cu);
    ctx->pc = 0x430628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430624u;
            // 0x430628: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43062Cu; }
        if (ctx->pc != 0x43062Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43062Cu; }
        if (ctx->pc != 0x43062Cu) { return; }
    }
    ctx->pc = 0x43062Cu;
label_43062c:
    // 0x43062c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x43062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_430630:
    // 0x430630: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_430634:
    // 0x430634: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x430634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_430638:
    // 0x430638: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x430638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43063c:
    // 0x43063c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43063cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_430640:
    // 0x430640: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_430644:
    if (ctx->pc == 0x430644u) {
        ctx->pc = 0x430644u;
            // 0x430644: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x430648u;
        goto label_430648;
    }
    ctx->pc = 0x430640u;
    {
        const bool branch_taken_0x430640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x430644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430640u;
            // 0x430644: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430640) {
            ctx->pc = 0x430650u;
            goto label_430650;
        }
    }
    ctx->pc = 0x430648u;
label_430648:
    // 0x430648: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43064c:
    // 0x43064c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x43064cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_430650:
    // 0x430650: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x430650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_430654:
    // 0x430654: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_430658:
    // 0x430658: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x430658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_43065c:
    // 0x43065c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_430660:
    // 0x430660: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x430660u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_430664:
    // 0x430664: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_430668:
    if (ctx->pc == 0x430668u) {
        ctx->pc = 0x430668u;
            // 0x430668: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43066Cu;
        goto label_43066c;
    }
    ctx->pc = 0x430664u;
    {
        const bool branch_taken_0x430664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x430664) {
            ctx->pc = 0x430668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430664u;
            // 0x430668: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430678u;
            goto label_430678;
        }
    }
    ctx->pc = 0x43066Cu;
label_43066c:
    // 0x43066c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_430670:
    // 0x430670: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x430670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_430674:
    // 0x430674: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x430674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_430678:
    // 0x430678: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43067c:
    // 0x43067c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x43067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_430680:
    // 0x430680: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x430680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_430684:
    // 0x430684: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x430684u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_430688:
    // 0x430688: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43068c:
    if (ctx->pc == 0x43068Cu) {
        ctx->pc = 0x43068Cu;
            // 0x43068c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x430690u;
        goto label_430690;
    }
    ctx->pc = 0x430688u;
    {
        const bool branch_taken_0x430688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x430688) {
            ctx->pc = 0x43068Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430688u;
            // 0x43068c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43069Cu;
            goto label_43069c;
        }
    }
    ctx->pc = 0x430690u;
label_430690:
    // 0x430690: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x430690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_430694:
    // 0x430694: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x430694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_430698:
    // 0x430698: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x430698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43069c:
    // 0x43069c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43069cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4306a0:
    // 0x4306a0: 0x320f809  jalr        $t9
label_4306a4:
    if (ctx->pc == 0x4306A4u) {
        ctx->pc = 0x4306A4u;
            // 0x4306a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4306A8u;
        goto label_4306a8;
    }
    ctx->pc = 0x4306A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4306A8u);
        ctx->pc = 0x4306A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4306A0u;
            // 0x4306a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4306A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4306A8u; }
            if (ctx->pc != 0x4306A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4306A8u;
label_4306a8:
    // 0x4306a8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4306a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4306ac:
    // 0x4306ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4306acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4306b0:
    // 0x4306b0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4306b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4306b4:
    // 0x4306b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4306b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4306b8:
    // 0x4306b8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4306b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4306bc:
    // 0x4306bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4306bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4306c0:
    // 0x4306c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4306c4:
    if (ctx->pc == 0x4306C4u) {
        ctx->pc = 0x4306C4u;
            // 0x4306c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4306C8u;
        goto label_4306c8;
    }
    ctx->pc = 0x4306C0u;
    {
        const bool branch_taken_0x4306c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4306c0) {
            ctx->pc = 0x4306C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4306C0u;
            // 0x4306c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4306D4u;
            goto label_4306d4;
        }
    }
    ctx->pc = 0x4306C8u;
label_4306c8:
    // 0x4306c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4306c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4306cc:
    // 0x4306cc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4306ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4306d0:
    // 0x4306d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4306d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4306d4:
    // 0x4306d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4306d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4306d8:
    // 0x4306d8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4306d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4306dc:
    // 0x4306dc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4306dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4306e0:
    // 0x4306e0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4306e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4306e4:
    // 0x4306e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4306e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4306e8:
    // 0x4306e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4306ec:
    if (ctx->pc == 0x4306ECu) {
        ctx->pc = 0x4306F0u;
        goto label_4306f0;
    }
    ctx->pc = 0x4306E8u;
    {
        const bool branch_taken_0x4306e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4306e8) {
            ctx->pc = 0x4306F8u;
            goto label_4306f8;
        }
    }
    ctx->pc = 0x4306F0u;
label_4306f0:
    // 0x4306f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4306f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4306f4:
    // 0x4306f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4306f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4306f8:
    // 0x4306f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4306f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4306fc:
    // 0x4306fc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4306fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_430700:
    // 0x430700: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x430700u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_430704:
    // 0x430704: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_430708:
    if (ctx->pc == 0x430708u) {
        ctx->pc = 0x43070Cu;
        goto label_43070c;
    }
    ctx->pc = 0x430704u;
    {
        const bool branch_taken_0x430704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x430704) {
            ctx->pc = 0x430714u;
            goto label_430714;
        }
    }
    ctx->pc = 0x43070Cu;
label_43070c:
    // 0x43070c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43070cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430710:
    // 0x430710: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x430710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_430714:
    // 0x430714: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_430718:
    // 0x430718: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x430718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_43071c:
    // 0x43071c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43071cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_430720:
    // 0x430720: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_430724:
    if (ctx->pc == 0x430724u) {
        ctx->pc = 0x430724u;
            // 0x430724: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x430728u;
        goto label_430728;
    }
    ctx->pc = 0x430720u;
    {
        const bool branch_taken_0x430720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x430720) {
            ctx->pc = 0x430724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x430720u;
            // 0x430724: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x430734u;
            goto label_430734;
        }
    }
    ctx->pc = 0x430728u;
label_430728:
    // 0x430728: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x430728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43072c:
    // 0x43072c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x43072cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_430730:
    // 0x430730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x430730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_430734:
    // 0x430734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x430734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_430738:
    // 0x430738: 0x3e00008  jr          $ra
label_43073c:
    if (ctx->pc == 0x43073Cu) {
        ctx->pc = 0x43073Cu;
            // 0x43073c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x430740u;
        goto label_430740;
    }
    ctx->pc = 0x430738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430738u;
            // 0x43073c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430740u;
label_430740:
    // 0x430740: 0x810bc04  j           func_42F010
label_430744:
    if (ctx->pc == 0x430744u) {
        ctx->pc = 0x430744u;
            // 0x430744: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x430748u;
        goto label_430748;
    }
    ctx->pc = 0x430740u;
    ctx->pc = 0x430744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430740u;
            // 0x430744: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42F010u;
    {
        auto targetFn = runtime->lookupFunction(0x42F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x430748u;
label_430748:
    // 0x430748: 0x0  nop
    ctx->pc = 0x430748u;
    // NOP
label_43074c:
    // 0x43074c: 0x0  nop
    ctx->pc = 0x43074cu;
    // NOP
label_430750:
    // 0x430750: 0x810b8b4  j           func_42E2D0
label_430754:
    if (ctx->pc == 0x430754u) {
        ctx->pc = 0x430754u;
            // 0x430754: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x430758u;
        goto label_430758;
    }
    ctx->pc = 0x430750u;
    ctx->pc = 0x430754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430750u;
            // 0x430754: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42E2D0u;
    if (runtime->hasFunction(0x42E2D0u)) {
        auto targetFn = runtime->lookupFunction(0x42E2D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0042E2D0_0x42e2d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x430758u;
label_430758:
    // 0x430758: 0x0  nop
    ctx->pc = 0x430758u;
    // NOP
label_43075c:
    // 0x43075c: 0x0  nop
    ctx->pc = 0x43075cu;
    // NOP
label_430760:
    // 0x430760: 0x810b90c  j           func_42E430
label_430764:
    if (ctx->pc == 0x430764u) {
        ctx->pc = 0x430764u;
            // 0x430764: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x430768u;
        goto label_430768;
    }
    ctx->pc = 0x430760u;
    ctx->pc = 0x430764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430760u;
            // 0x430764: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42E430u;
    {
        auto targetFn = runtime->lookupFunction(0x42E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x430768u;
label_430768:
    // 0x430768: 0x0  nop
    ctx->pc = 0x430768u;
    // NOP
label_43076c:
    // 0x43076c: 0x0  nop
    ctx->pc = 0x43076cu;
    // NOP
label_430770:
    // 0x430770: 0x810b890  j           func_42E240
label_430774:
    if (ctx->pc == 0x430774u) {
        ctx->pc = 0x430774u;
            // 0x430774: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x430778u;
        goto label_430778;
    }
    ctx->pc = 0x430770u;
    ctx->pc = 0x430774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x430770u;
            // 0x430774: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42E240u;
    {
        auto targetFn = runtime->lookupFunction(0x42E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x430778u;
label_430778:
    // 0x430778: 0x0  nop
    ctx->pc = 0x430778u;
    // NOP
label_43077c:
    // 0x43077c: 0x0  nop
    ctx->pc = 0x43077cu;
    // NOP
label_430780:
    // 0x430780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x430780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_430784:
    // 0x430784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x430784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_430788:
    // 0x430788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x430788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43078c:
    // 0x43078c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_430790:
    // 0x430790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x430790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430794:
    // 0x430794: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_430798:
    if (ctx->pc == 0x430798u) {
        ctx->pc = 0x430798u;
            // 0x430798: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43079Cu;
        goto label_43079c;
    }
    ctx->pc = 0x430794u;
    {
        const bool branch_taken_0x430794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x430798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430794u;
            // 0x430798: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430794) {
            ctx->pc = 0x4307F0u;
            goto label_4307f0;
        }
    }
    ctx->pc = 0x43079Cu;
label_43079c:
    // 0x43079c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4307a0:
    // 0x4307a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4307a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4307a4:
    // 0x4307a4: 0x2463c790  addiu       $v1, $v1, -0x3870
    ctx->pc = 0x4307a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952848));
label_4307a8:
    // 0x4307a8: 0x2442c7c8  addiu       $v0, $v0, -0x3838
    ctx->pc = 0x4307a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952904));
label_4307ac:
    // 0x4307ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4307acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4307b0:
    // 0x4307b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4307b4:
    if (ctx->pc == 0x4307B4u) {
        ctx->pc = 0x4307B4u;
            // 0x4307b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4307B8u;
        goto label_4307b8;
    }
    ctx->pc = 0x4307B0u;
    {
        const bool branch_taken_0x4307b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4307B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4307B0u;
            // 0x4307b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307b0) {
            ctx->pc = 0x4307D8u;
            goto label_4307d8;
        }
    }
    ctx->pc = 0x4307B8u;
label_4307b8:
    // 0x4307b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4307b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4307bc:
    // 0x4307bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4307bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4307c0:
    // 0x4307c0: 0x2463c840  addiu       $v1, $v1, -0x37C0
    ctx->pc = 0x4307c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953024));
label_4307c4:
    // 0x4307c4: 0x2442c878  addiu       $v0, $v0, -0x3788
    ctx->pc = 0x4307c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953080));
label_4307c8:
    // 0x4307c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4307c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4307cc:
    // 0x4307cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4307ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4307d0:
    // 0x4307d0: 0xc10c204  jal         func_430810
label_4307d4:
    if (ctx->pc == 0x4307D4u) {
        ctx->pc = 0x4307D4u;
            // 0x4307d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4307D8u;
        goto label_4307d8;
    }
    ctx->pc = 0x4307D0u;
    SET_GPR_U32(ctx, 31, 0x4307D8u);
    ctx->pc = 0x4307D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4307D0u;
            // 0x4307d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x430810u;
    if (runtime->hasFunction(0x430810u)) {
        auto targetFn = runtime->lookupFunction(0x430810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4307D8u; }
        if (ctx->pc != 0x4307D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00430810_0x430810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4307D8u; }
        if (ctx->pc != 0x4307D8u) { return; }
    }
    ctx->pc = 0x4307D8u;
label_4307d8:
    // 0x4307d8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4307d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4307dc:
    // 0x4307dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4307dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4307e0:
    // 0x4307e0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4307e4:
    if (ctx->pc == 0x4307E4u) {
        ctx->pc = 0x4307E4u;
            // 0x4307e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4307E8u;
        goto label_4307e8;
    }
    ctx->pc = 0x4307E0u;
    {
        const bool branch_taken_0x4307e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4307e0) {
            ctx->pc = 0x4307E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4307E0u;
            // 0x4307e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4307F4u;
            goto label_4307f4;
        }
    }
    ctx->pc = 0x4307E8u;
label_4307e8:
    // 0x4307e8: 0xc0400a8  jal         func_1002A0
label_4307ec:
    if (ctx->pc == 0x4307ECu) {
        ctx->pc = 0x4307ECu;
            // 0x4307ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4307F0u;
        goto label_4307f0;
    }
    ctx->pc = 0x4307E8u;
    SET_GPR_U32(ctx, 31, 0x4307F0u);
    ctx->pc = 0x4307ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4307E8u;
            // 0x4307ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4307F0u; }
        if (ctx->pc != 0x4307F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4307F0u; }
        if (ctx->pc != 0x4307F0u) { return; }
    }
    ctx->pc = 0x4307F0u;
label_4307f0:
    // 0x4307f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4307f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4307f4:
    // 0x4307f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4307f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4307f8:
    // 0x4307f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4307f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4307fc:
    // 0x4307fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4307fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_430800:
    // 0x430800: 0x3e00008  jr          $ra
label_430804:
    if (ctx->pc == 0x430804u) {
        ctx->pc = 0x430804u;
            // 0x430804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x430808u;
        goto label_430808;
    }
    ctx->pc = 0x430800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x430800u;
            // 0x430804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x430808u;
label_430808:
    // 0x430808: 0x0  nop
    ctx->pc = 0x430808u;
    // NOP
label_43080c:
    // 0x43080c: 0x0  nop
    ctx->pc = 0x43080cu;
    // NOP
}
