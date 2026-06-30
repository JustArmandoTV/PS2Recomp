#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0000
// Address: 0x1f0000 - 0x1f0d90
void sub_001F0000_0x1f0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0000_0x1f0000");
#endif

    switch (ctx->pc) {
        case 0x1f0000u: goto label_1f0000;
        case 0x1f0004u: goto label_1f0004;
        case 0x1f0008u: goto label_1f0008;
        case 0x1f000cu: goto label_1f000c;
        case 0x1f0010u: goto label_1f0010;
        case 0x1f0014u: goto label_1f0014;
        case 0x1f0018u: goto label_1f0018;
        case 0x1f001cu: goto label_1f001c;
        case 0x1f0020u: goto label_1f0020;
        case 0x1f0024u: goto label_1f0024;
        case 0x1f0028u: goto label_1f0028;
        case 0x1f002cu: goto label_1f002c;
        case 0x1f0030u: goto label_1f0030;
        case 0x1f0034u: goto label_1f0034;
        case 0x1f0038u: goto label_1f0038;
        case 0x1f003cu: goto label_1f003c;
        case 0x1f0040u: goto label_1f0040;
        case 0x1f0044u: goto label_1f0044;
        case 0x1f0048u: goto label_1f0048;
        case 0x1f004cu: goto label_1f004c;
        case 0x1f0050u: goto label_1f0050;
        case 0x1f0054u: goto label_1f0054;
        case 0x1f0058u: goto label_1f0058;
        case 0x1f005cu: goto label_1f005c;
        case 0x1f0060u: goto label_1f0060;
        case 0x1f0064u: goto label_1f0064;
        case 0x1f0068u: goto label_1f0068;
        case 0x1f006cu: goto label_1f006c;
        case 0x1f0070u: goto label_1f0070;
        case 0x1f0074u: goto label_1f0074;
        case 0x1f0078u: goto label_1f0078;
        case 0x1f007cu: goto label_1f007c;
        case 0x1f0080u: goto label_1f0080;
        case 0x1f0084u: goto label_1f0084;
        case 0x1f0088u: goto label_1f0088;
        case 0x1f008cu: goto label_1f008c;
        case 0x1f0090u: goto label_1f0090;
        case 0x1f0094u: goto label_1f0094;
        case 0x1f0098u: goto label_1f0098;
        case 0x1f009cu: goto label_1f009c;
        case 0x1f00a0u: goto label_1f00a0;
        case 0x1f00a4u: goto label_1f00a4;
        case 0x1f00a8u: goto label_1f00a8;
        case 0x1f00acu: goto label_1f00ac;
        case 0x1f00b0u: goto label_1f00b0;
        case 0x1f00b4u: goto label_1f00b4;
        case 0x1f00b8u: goto label_1f00b8;
        case 0x1f00bcu: goto label_1f00bc;
        case 0x1f00c0u: goto label_1f00c0;
        case 0x1f00c4u: goto label_1f00c4;
        case 0x1f00c8u: goto label_1f00c8;
        case 0x1f00ccu: goto label_1f00cc;
        case 0x1f00d0u: goto label_1f00d0;
        case 0x1f00d4u: goto label_1f00d4;
        case 0x1f00d8u: goto label_1f00d8;
        case 0x1f00dcu: goto label_1f00dc;
        case 0x1f00e0u: goto label_1f00e0;
        case 0x1f00e4u: goto label_1f00e4;
        case 0x1f00e8u: goto label_1f00e8;
        case 0x1f00ecu: goto label_1f00ec;
        case 0x1f00f0u: goto label_1f00f0;
        case 0x1f00f4u: goto label_1f00f4;
        case 0x1f00f8u: goto label_1f00f8;
        case 0x1f00fcu: goto label_1f00fc;
        case 0x1f0100u: goto label_1f0100;
        case 0x1f0104u: goto label_1f0104;
        case 0x1f0108u: goto label_1f0108;
        case 0x1f010cu: goto label_1f010c;
        case 0x1f0110u: goto label_1f0110;
        case 0x1f0114u: goto label_1f0114;
        case 0x1f0118u: goto label_1f0118;
        case 0x1f011cu: goto label_1f011c;
        case 0x1f0120u: goto label_1f0120;
        case 0x1f0124u: goto label_1f0124;
        case 0x1f0128u: goto label_1f0128;
        case 0x1f012cu: goto label_1f012c;
        case 0x1f0130u: goto label_1f0130;
        case 0x1f0134u: goto label_1f0134;
        case 0x1f0138u: goto label_1f0138;
        case 0x1f013cu: goto label_1f013c;
        case 0x1f0140u: goto label_1f0140;
        case 0x1f0144u: goto label_1f0144;
        case 0x1f0148u: goto label_1f0148;
        case 0x1f014cu: goto label_1f014c;
        case 0x1f0150u: goto label_1f0150;
        case 0x1f0154u: goto label_1f0154;
        case 0x1f0158u: goto label_1f0158;
        case 0x1f015cu: goto label_1f015c;
        case 0x1f0160u: goto label_1f0160;
        case 0x1f0164u: goto label_1f0164;
        case 0x1f0168u: goto label_1f0168;
        case 0x1f016cu: goto label_1f016c;
        case 0x1f0170u: goto label_1f0170;
        case 0x1f0174u: goto label_1f0174;
        case 0x1f0178u: goto label_1f0178;
        case 0x1f017cu: goto label_1f017c;
        case 0x1f0180u: goto label_1f0180;
        case 0x1f0184u: goto label_1f0184;
        case 0x1f0188u: goto label_1f0188;
        case 0x1f018cu: goto label_1f018c;
        case 0x1f0190u: goto label_1f0190;
        case 0x1f0194u: goto label_1f0194;
        case 0x1f0198u: goto label_1f0198;
        case 0x1f019cu: goto label_1f019c;
        case 0x1f01a0u: goto label_1f01a0;
        case 0x1f01a4u: goto label_1f01a4;
        case 0x1f01a8u: goto label_1f01a8;
        case 0x1f01acu: goto label_1f01ac;
        case 0x1f01b0u: goto label_1f01b0;
        case 0x1f01b4u: goto label_1f01b4;
        case 0x1f01b8u: goto label_1f01b8;
        case 0x1f01bcu: goto label_1f01bc;
        case 0x1f01c0u: goto label_1f01c0;
        case 0x1f01c4u: goto label_1f01c4;
        case 0x1f01c8u: goto label_1f01c8;
        case 0x1f01ccu: goto label_1f01cc;
        case 0x1f01d0u: goto label_1f01d0;
        case 0x1f01d4u: goto label_1f01d4;
        case 0x1f01d8u: goto label_1f01d8;
        case 0x1f01dcu: goto label_1f01dc;
        case 0x1f01e0u: goto label_1f01e0;
        case 0x1f01e4u: goto label_1f01e4;
        case 0x1f01e8u: goto label_1f01e8;
        case 0x1f01ecu: goto label_1f01ec;
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f01f4u: goto label_1f01f4;
        case 0x1f01f8u: goto label_1f01f8;
        case 0x1f01fcu: goto label_1f01fc;
        case 0x1f0200u: goto label_1f0200;
        case 0x1f0204u: goto label_1f0204;
        case 0x1f0208u: goto label_1f0208;
        case 0x1f020cu: goto label_1f020c;
        case 0x1f0210u: goto label_1f0210;
        case 0x1f0214u: goto label_1f0214;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f021cu: goto label_1f021c;
        case 0x1f0220u: goto label_1f0220;
        case 0x1f0224u: goto label_1f0224;
        case 0x1f0228u: goto label_1f0228;
        case 0x1f022cu: goto label_1f022c;
        case 0x1f0230u: goto label_1f0230;
        case 0x1f0234u: goto label_1f0234;
        case 0x1f0238u: goto label_1f0238;
        case 0x1f023cu: goto label_1f023c;
        case 0x1f0240u: goto label_1f0240;
        case 0x1f0244u: goto label_1f0244;
        case 0x1f0248u: goto label_1f0248;
        case 0x1f024cu: goto label_1f024c;
        case 0x1f0250u: goto label_1f0250;
        case 0x1f0254u: goto label_1f0254;
        case 0x1f0258u: goto label_1f0258;
        case 0x1f025cu: goto label_1f025c;
        case 0x1f0260u: goto label_1f0260;
        case 0x1f0264u: goto label_1f0264;
        case 0x1f0268u: goto label_1f0268;
        case 0x1f026cu: goto label_1f026c;
        case 0x1f0270u: goto label_1f0270;
        case 0x1f0274u: goto label_1f0274;
        case 0x1f0278u: goto label_1f0278;
        case 0x1f027cu: goto label_1f027c;
        case 0x1f0280u: goto label_1f0280;
        case 0x1f0284u: goto label_1f0284;
        case 0x1f0288u: goto label_1f0288;
        case 0x1f028cu: goto label_1f028c;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0294u: goto label_1f0294;
        case 0x1f0298u: goto label_1f0298;
        case 0x1f029cu: goto label_1f029c;
        case 0x1f02a0u: goto label_1f02a0;
        case 0x1f02a4u: goto label_1f02a4;
        case 0x1f02a8u: goto label_1f02a8;
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02b0u: goto label_1f02b0;
        case 0x1f02b4u: goto label_1f02b4;
        case 0x1f02b8u: goto label_1f02b8;
        case 0x1f02bcu: goto label_1f02bc;
        case 0x1f02c0u: goto label_1f02c0;
        case 0x1f02c4u: goto label_1f02c4;
        case 0x1f02c8u: goto label_1f02c8;
        case 0x1f02ccu: goto label_1f02cc;
        case 0x1f02d0u: goto label_1f02d0;
        case 0x1f02d4u: goto label_1f02d4;
        case 0x1f02d8u: goto label_1f02d8;
        case 0x1f02dcu: goto label_1f02dc;
        case 0x1f02e0u: goto label_1f02e0;
        case 0x1f02e4u: goto label_1f02e4;
        case 0x1f02e8u: goto label_1f02e8;
        case 0x1f02ecu: goto label_1f02ec;
        case 0x1f02f0u: goto label_1f02f0;
        case 0x1f02f4u: goto label_1f02f4;
        case 0x1f02f8u: goto label_1f02f8;
        case 0x1f02fcu: goto label_1f02fc;
        case 0x1f0300u: goto label_1f0300;
        case 0x1f0304u: goto label_1f0304;
        case 0x1f0308u: goto label_1f0308;
        case 0x1f030cu: goto label_1f030c;
        case 0x1f0310u: goto label_1f0310;
        case 0x1f0314u: goto label_1f0314;
        case 0x1f0318u: goto label_1f0318;
        case 0x1f031cu: goto label_1f031c;
        case 0x1f0320u: goto label_1f0320;
        case 0x1f0324u: goto label_1f0324;
        case 0x1f0328u: goto label_1f0328;
        case 0x1f032cu: goto label_1f032c;
        case 0x1f0330u: goto label_1f0330;
        case 0x1f0334u: goto label_1f0334;
        case 0x1f0338u: goto label_1f0338;
        case 0x1f033cu: goto label_1f033c;
        case 0x1f0340u: goto label_1f0340;
        case 0x1f0344u: goto label_1f0344;
        case 0x1f0348u: goto label_1f0348;
        case 0x1f034cu: goto label_1f034c;
        case 0x1f0350u: goto label_1f0350;
        case 0x1f0354u: goto label_1f0354;
        case 0x1f0358u: goto label_1f0358;
        case 0x1f035cu: goto label_1f035c;
        case 0x1f0360u: goto label_1f0360;
        case 0x1f0364u: goto label_1f0364;
        case 0x1f0368u: goto label_1f0368;
        case 0x1f036cu: goto label_1f036c;
        case 0x1f0370u: goto label_1f0370;
        case 0x1f0374u: goto label_1f0374;
        case 0x1f0378u: goto label_1f0378;
        case 0x1f037cu: goto label_1f037c;
        case 0x1f0380u: goto label_1f0380;
        case 0x1f0384u: goto label_1f0384;
        case 0x1f0388u: goto label_1f0388;
        case 0x1f038cu: goto label_1f038c;
        case 0x1f0390u: goto label_1f0390;
        case 0x1f0394u: goto label_1f0394;
        case 0x1f0398u: goto label_1f0398;
        case 0x1f039cu: goto label_1f039c;
        case 0x1f03a0u: goto label_1f03a0;
        case 0x1f03a4u: goto label_1f03a4;
        case 0x1f03a8u: goto label_1f03a8;
        case 0x1f03acu: goto label_1f03ac;
        case 0x1f03b0u: goto label_1f03b0;
        case 0x1f03b4u: goto label_1f03b4;
        case 0x1f03b8u: goto label_1f03b8;
        case 0x1f03bcu: goto label_1f03bc;
        case 0x1f03c0u: goto label_1f03c0;
        case 0x1f03c4u: goto label_1f03c4;
        case 0x1f03c8u: goto label_1f03c8;
        case 0x1f03ccu: goto label_1f03cc;
        case 0x1f03d0u: goto label_1f03d0;
        case 0x1f03d4u: goto label_1f03d4;
        case 0x1f03d8u: goto label_1f03d8;
        case 0x1f03dcu: goto label_1f03dc;
        case 0x1f03e0u: goto label_1f03e0;
        case 0x1f03e4u: goto label_1f03e4;
        case 0x1f03e8u: goto label_1f03e8;
        case 0x1f03ecu: goto label_1f03ec;
        case 0x1f03f0u: goto label_1f03f0;
        case 0x1f03f4u: goto label_1f03f4;
        case 0x1f03f8u: goto label_1f03f8;
        case 0x1f03fcu: goto label_1f03fc;
        case 0x1f0400u: goto label_1f0400;
        case 0x1f0404u: goto label_1f0404;
        case 0x1f0408u: goto label_1f0408;
        case 0x1f040cu: goto label_1f040c;
        case 0x1f0410u: goto label_1f0410;
        case 0x1f0414u: goto label_1f0414;
        case 0x1f0418u: goto label_1f0418;
        case 0x1f041cu: goto label_1f041c;
        case 0x1f0420u: goto label_1f0420;
        case 0x1f0424u: goto label_1f0424;
        case 0x1f0428u: goto label_1f0428;
        case 0x1f042cu: goto label_1f042c;
        case 0x1f0430u: goto label_1f0430;
        case 0x1f0434u: goto label_1f0434;
        case 0x1f0438u: goto label_1f0438;
        case 0x1f043cu: goto label_1f043c;
        case 0x1f0440u: goto label_1f0440;
        case 0x1f0444u: goto label_1f0444;
        case 0x1f0448u: goto label_1f0448;
        case 0x1f044cu: goto label_1f044c;
        case 0x1f0450u: goto label_1f0450;
        case 0x1f0454u: goto label_1f0454;
        case 0x1f0458u: goto label_1f0458;
        case 0x1f045cu: goto label_1f045c;
        case 0x1f0460u: goto label_1f0460;
        case 0x1f0464u: goto label_1f0464;
        case 0x1f0468u: goto label_1f0468;
        case 0x1f046cu: goto label_1f046c;
        case 0x1f0470u: goto label_1f0470;
        case 0x1f0474u: goto label_1f0474;
        case 0x1f0478u: goto label_1f0478;
        case 0x1f047cu: goto label_1f047c;
        case 0x1f0480u: goto label_1f0480;
        case 0x1f0484u: goto label_1f0484;
        case 0x1f0488u: goto label_1f0488;
        case 0x1f048cu: goto label_1f048c;
        case 0x1f0490u: goto label_1f0490;
        case 0x1f0494u: goto label_1f0494;
        case 0x1f0498u: goto label_1f0498;
        case 0x1f049cu: goto label_1f049c;
        case 0x1f04a0u: goto label_1f04a0;
        case 0x1f04a4u: goto label_1f04a4;
        case 0x1f04a8u: goto label_1f04a8;
        case 0x1f04acu: goto label_1f04ac;
        case 0x1f04b0u: goto label_1f04b0;
        case 0x1f04b4u: goto label_1f04b4;
        case 0x1f04b8u: goto label_1f04b8;
        case 0x1f04bcu: goto label_1f04bc;
        case 0x1f04c0u: goto label_1f04c0;
        case 0x1f04c4u: goto label_1f04c4;
        case 0x1f04c8u: goto label_1f04c8;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d0u: goto label_1f04d0;
        case 0x1f04d4u: goto label_1f04d4;
        case 0x1f04d8u: goto label_1f04d8;
        case 0x1f04dcu: goto label_1f04dc;
        case 0x1f04e0u: goto label_1f04e0;
        case 0x1f04e4u: goto label_1f04e4;
        case 0x1f04e8u: goto label_1f04e8;
        case 0x1f04ecu: goto label_1f04ec;
        case 0x1f04f0u: goto label_1f04f0;
        case 0x1f04f4u: goto label_1f04f4;
        case 0x1f04f8u: goto label_1f04f8;
        case 0x1f04fcu: goto label_1f04fc;
        case 0x1f0500u: goto label_1f0500;
        case 0x1f0504u: goto label_1f0504;
        case 0x1f0508u: goto label_1f0508;
        case 0x1f050cu: goto label_1f050c;
        case 0x1f0510u: goto label_1f0510;
        case 0x1f0514u: goto label_1f0514;
        case 0x1f0518u: goto label_1f0518;
        case 0x1f051cu: goto label_1f051c;
        case 0x1f0520u: goto label_1f0520;
        case 0x1f0524u: goto label_1f0524;
        case 0x1f0528u: goto label_1f0528;
        case 0x1f052cu: goto label_1f052c;
        case 0x1f0530u: goto label_1f0530;
        case 0x1f0534u: goto label_1f0534;
        case 0x1f0538u: goto label_1f0538;
        case 0x1f053cu: goto label_1f053c;
        case 0x1f0540u: goto label_1f0540;
        case 0x1f0544u: goto label_1f0544;
        case 0x1f0548u: goto label_1f0548;
        case 0x1f054cu: goto label_1f054c;
        case 0x1f0550u: goto label_1f0550;
        case 0x1f0554u: goto label_1f0554;
        case 0x1f0558u: goto label_1f0558;
        case 0x1f055cu: goto label_1f055c;
        case 0x1f0560u: goto label_1f0560;
        case 0x1f0564u: goto label_1f0564;
        case 0x1f0568u: goto label_1f0568;
        case 0x1f056cu: goto label_1f056c;
        case 0x1f0570u: goto label_1f0570;
        case 0x1f0574u: goto label_1f0574;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f057cu: goto label_1f057c;
        case 0x1f0580u: goto label_1f0580;
        case 0x1f0584u: goto label_1f0584;
        case 0x1f0588u: goto label_1f0588;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f0590u: goto label_1f0590;
        case 0x1f0594u: goto label_1f0594;
        case 0x1f0598u: goto label_1f0598;
        case 0x1f059cu: goto label_1f059c;
        case 0x1f05a0u: goto label_1f05a0;
        case 0x1f05a4u: goto label_1f05a4;
        case 0x1f05a8u: goto label_1f05a8;
        case 0x1f05acu: goto label_1f05ac;
        case 0x1f05b0u: goto label_1f05b0;
        case 0x1f05b4u: goto label_1f05b4;
        case 0x1f05b8u: goto label_1f05b8;
        case 0x1f05bcu: goto label_1f05bc;
        case 0x1f05c0u: goto label_1f05c0;
        case 0x1f05c4u: goto label_1f05c4;
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05ccu: goto label_1f05cc;
        case 0x1f05d0u: goto label_1f05d0;
        case 0x1f05d4u: goto label_1f05d4;
        case 0x1f05d8u: goto label_1f05d8;
        case 0x1f05dcu: goto label_1f05dc;
        case 0x1f05e0u: goto label_1f05e0;
        case 0x1f05e4u: goto label_1f05e4;
        case 0x1f05e8u: goto label_1f05e8;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f05f0u: goto label_1f05f0;
        case 0x1f05f4u: goto label_1f05f4;
        case 0x1f05f8u: goto label_1f05f8;
        case 0x1f05fcu: goto label_1f05fc;
        case 0x1f0600u: goto label_1f0600;
        case 0x1f0604u: goto label_1f0604;
        case 0x1f0608u: goto label_1f0608;
        case 0x1f060cu: goto label_1f060c;
        case 0x1f0610u: goto label_1f0610;
        case 0x1f0614u: goto label_1f0614;
        case 0x1f0618u: goto label_1f0618;
        case 0x1f061cu: goto label_1f061c;
        case 0x1f0620u: goto label_1f0620;
        case 0x1f0624u: goto label_1f0624;
        case 0x1f0628u: goto label_1f0628;
        case 0x1f062cu: goto label_1f062c;
        case 0x1f0630u: goto label_1f0630;
        case 0x1f0634u: goto label_1f0634;
        case 0x1f0638u: goto label_1f0638;
        case 0x1f063cu: goto label_1f063c;
        case 0x1f0640u: goto label_1f0640;
        case 0x1f0644u: goto label_1f0644;
        case 0x1f0648u: goto label_1f0648;
        case 0x1f064cu: goto label_1f064c;
        case 0x1f0650u: goto label_1f0650;
        case 0x1f0654u: goto label_1f0654;
        case 0x1f0658u: goto label_1f0658;
        case 0x1f065cu: goto label_1f065c;
        case 0x1f0660u: goto label_1f0660;
        case 0x1f0664u: goto label_1f0664;
        case 0x1f0668u: goto label_1f0668;
        case 0x1f066cu: goto label_1f066c;
        case 0x1f0670u: goto label_1f0670;
        case 0x1f0674u: goto label_1f0674;
        case 0x1f0678u: goto label_1f0678;
        case 0x1f067cu: goto label_1f067c;
        case 0x1f0680u: goto label_1f0680;
        case 0x1f0684u: goto label_1f0684;
        case 0x1f0688u: goto label_1f0688;
        case 0x1f068cu: goto label_1f068c;
        case 0x1f0690u: goto label_1f0690;
        case 0x1f0694u: goto label_1f0694;
        case 0x1f0698u: goto label_1f0698;
        case 0x1f069cu: goto label_1f069c;
        case 0x1f06a0u: goto label_1f06a0;
        case 0x1f06a4u: goto label_1f06a4;
        case 0x1f06a8u: goto label_1f06a8;
        case 0x1f06acu: goto label_1f06ac;
        case 0x1f06b0u: goto label_1f06b0;
        case 0x1f06b4u: goto label_1f06b4;
        case 0x1f06b8u: goto label_1f06b8;
        case 0x1f06bcu: goto label_1f06bc;
        case 0x1f06c0u: goto label_1f06c0;
        case 0x1f06c4u: goto label_1f06c4;
        case 0x1f06c8u: goto label_1f06c8;
        case 0x1f06ccu: goto label_1f06cc;
        case 0x1f06d0u: goto label_1f06d0;
        case 0x1f06d4u: goto label_1f06d4;
        case 0x1f06d8u: goto label_1f06d8;
        case 0x1f06dcu: goto label_1f06dc;
        case 0x1f06e0u: goto label_1f06e0;
        case 0x1f06e4u: goto label_1f06e4;
        case 0x1f06e8u: goto label_1f06e8;
        case 0x1f06ecu: goto label_1f06ec;
        case 0x1f06f0u: goto label_1f06f0;
        case 0x1f06f4u: goto label_1f06f4;
        case 0x1f06f8u: goto label_1f06f8;
        case 0x1f06fcu: goto label_1f06fc;
        case 0x1f0700u: goto label_1f0700;
        case 0x1f0704u: goto label_1f0704;
        case 0x1f0708u: goto label_1f0708;
        case 0x1f070cu: goto label_1f070c;
        case 0x1f0710u: goto label_1f0710;
        case 0x1f0714u: goto label_1f0714;
        case 0x1f0718u: goto label_1f0718;
        case 0x1f071cu: goto label_1f071c;
        case 0x1f0720u: goto label_1f0720;
        case 0x1f0724u: goto label_1f0724;
        case 0x1f0728u: goto label_1f0728;
        case 0x1f072cu: goto label_1f072c;
        case 0x1f0730u: goto label_1f0730;
        case 0x1f0734u: goto label_1f0734;
        case 0x1f0738u: goto label_1f0738;
        case 0x1f073cu: goto label_1f073c;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0744u: goto label_1f0744;
        case 0x1f0748u: goto label_1f0748;
        case 0x1f074cu: goto label_1f074c;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f0754u: goto label_1f0754;
        case 0x1f0758u: goto label_1f0758;
        case 0x1f075cu: goto label_1f075c;
        case 0x1f0760u: goto label_1f0760;
        case 0x1f0764u: goto label_1f0764;
        case 0x1f0768u: goto label_1f0768;
        case 0x1f076cu: goto label_1f076c;
        case 0x1f0770u: goto label_1f0770;
        case 0x1f0774u: goto label_1f0774;
        case 0x1f0778u: goto label_1f0778;
        case 0x1f077cu: goto label_1f077c;
        case 0x1f0780u: goto label_1f0780;
        case 0x1f0784u: goto label_1f0784;
        case 0x1f0788u: goto label_1f0788;
        case 0x1f078cu: goto label_1f078c;
        case 0x1f0790u: goto label_1f0790;
        case 0x1f0794u: goto label_1f0794;
        case 0x1f0798u: goto label_1f0798;
        case 0x1f079cu: goto label_1f079c;
        case 0x1f07a0u: goto label_1f07a0;
        case 0x1f07a4u: goto label_1f07a4;
        case 0x1f07a8u: goto label_1f07a8;
        case 0x1f07acu: goto label_1f07ac;
        case 0x1f07b0u: goto label_1f07b0;
        case 0x1f07b4u: goto label_1f07b4;
        case 0x1f07b8u: goto label_1f07b8;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07c0u: goto label_1f07c0;
        case 0x1f07c4u: goto label_1f07c4;
        case 0x1f07c8u: goto label_1f07c8;
        case 0x1f07ccu: goto label_1f07cc;
        case 0x1f07d0u: goto label_1f07d0;
        case 0x1f07d4u: goto label_1f07d4;
        case 0x1f07d8u: goto label_1f07d8;
        case 0x1f07dcu: goto label_1f07dc;
        case 0x1f07e0u: goto label_1f07e0;
        case 0x1f07e4u: goto label_1f07e4;
        case 0x1f07e8u: goto label_1f07e8;
        case 0x1f07ecu: goto label_1f07ec;
        case 0x1f07f0u: goto label_1f07f0;
        case 0x1f07f4u: goto label_1f07f4;
        case 0x1f07f8u: goto label_1f07f8;
        case 0x1f07fcu: goto label_1f07fc;
        case 0x1f0800u: goto label_1f0800;
        case 0x1f0804u: goto label_1f0804;
        case 0x1f0808u: goto label_1f0808;
        case 0x1f080cu: goto label_1f080c;
        case 0x1f0810u: goto label_1f0810;
        case 0x1f0814u: goto label_1f0814;
        case 0x1f0818u: goto label_1f0818;
        case 0x1f081cu: goto label_1f081c;
        case 0x1f0820u: goto label_1f0820;
        case 0x1f0824u: goto label_1f0824;
        case 0x1f0828u: goto label_1f0828;
        case 0x1f082cu: goto label_1f082c;
        case 0x1f0830u: goto label_1f0830;
        case 0x1f0834u: goto label_1f0834;
        case 0x1f0838u: goto label_1f0838;
        case 0x1f083cu: goto label_1f083c;
        case 0x1f0840u: goto label_1f0840;
        case 0x1f0844u: goto label_1f0844;
        case 0x1f0848u: goto label_1f0848;
        case 0x1f084cu: goto label_1f084c;
        case 0x1f0850u: goto label_1f0850;
        case 0x1f0854u: goto label_1f0854;
        case 0x1f0858u: goto label_1f0858;
        case 0x1f085cu: goto label_1f085c;
        case 0x1f0860u: goto label_1f0860;
        case 0x1f0864u: goto label_1f0864;
        case 0x1f0868u: goto label_1f0868;
        case 0x1f086cu: goto label_1f086c;
        case 0x1f0870u: goto label_1f0870;
        case 0x1f0874u: goto label_1f0874;
        case 0x1f0878u: goto label_1f0878;
        case 0x1f087cu: goto label_1f087c;
        case 0x1f0880u: goto label_1f0880;
        case 0x1f0884u: goto label_1f0884;
        case 0x1f0888u: goto label_1f0888;
        case 0x1f088cu: goto label_1f088c;
        case 0x1f0890u: goto label_1f0890;
        case 0x1f0894u: goto label_1f0894;
        case 0x1f0898u: goto label_1f0898;
        case 0x1f089cu: goto label_1f089c;
        case 0x1f08a0u: goto label_1f08a0;
        case 0x1f08a4u: goto label_1f08a4;
        case 0x1f08a8u: goto label_1f08a8;
        case 0x1f08acu: goto label_1f08ac;
        case 0x1f08b0u: goto label_1f08b0;
        case 0x1f08b4u: goto label_1f08b4;
        case 0x1f08b8u: goto label_1f08b8;
        case 0x1f08bcu: goto label_1f08bc;
        case 0x1f08c0u: goto label_1f08c0;
        case 0x1f08c4u: goto label_1f08c4;
        case 0x1f08c8u: goto label_1f08c8;
        case 0x1f08ccu: goto label_1f08cc;
        case 0x1f08d0u: goto label_1f08d0;
        case 0x1f08d4u: goto label_1f08d4;
        case 0x1f08d8u: goto label_1f08d8;
        case 0x1f08dcu: goto label_1f08dc;
        case 0x1f08e0u: goto label_1f08e0;
        case 0x1f08e4u: goto label_1f08e4;
        case 0x1f08e8u: goto label_1f08e8;
        case 0x1f08ecu: goto label_1f08ec;
        case 0x1f08f0u: goto label_1f08f0;
        case 0x1f08f4u: goto label_1f08f4;
        case 0x1f08f8u: goto label_1f08f8;
        case 0x1f08fcu: goto label_1f08fc;
        case 0x1f0900u: goto label_1f0900;
        case 0x1f0904u: goto label_1f0904;
        case 0x1f0908u: goto label_1f0908;
        case 0x1f090cu: goto label_1f090c;
        case 0x1f0910u: goto label_1f0910;
        case 0x1f0914u: goto label_1f0914;
        case 0x1f0918u: goto label_1f0918;
        case 0x1f091cu: goto label_1f091c;
        case 0x1f0920u: goto label_1f0920;
        case 0x1f0924u: goto label_1f0924;
        case 0x1f0928u: goto label_1f0928;
        case 0x1f092cu: goto label_1f092c;
        case 0x1f0930u: goto label_1f0930;
        case 0x1f0934u: goto label_1f0934;
        case 0x1f0938u: goto label_1f0938;
        case 0x1f093cu: goto label_1f093c;
        case 0x1f0940u: goto label_1f0940;
        case 0x1f0944u: goto label_1f0944;
        case 0x1f0948u: goto label_1f0948;
        case 0x1f094cu: goto label_1f094c;
        case 0x1f0950u: goto label_1f0950;
        case 0x1f0954u: goto label_1f0954;
        case 0x1f0958u: goto label_1f0958;
        case 0x1f095cu: goto label_1f095c;
        case 0x1f0960u: goto label_1f0960;
        case 0x1f0964u: goto label_1f0964;
        case 0x1f0968u: goto label_1f0968;
        case 0x1f096cu: goto label_1f096c;
        case 0x1f0970u: goto label_1f0970;
        case 0x1f0974u: goto label_1f0974;
        case 0x1f0978u: goto label_1f0978;
        case 0x1f097cu: goto label_1f097c;
        case 0x1f0980u: goto label_1f0980;
        case 0x1f0984u: goto label_1f0984;
        case 0x1f0988u: goto label_1f0988;
        case 0x1f098cu: goto label_1f098c;
        case 0x1f0990u: goto label_1f0990;
        case 0x1f0994u: goto label_1f0994;
        case 0x1f0998u: goto label_1f0998;
        case 0x1f099cu: goto label_1f099c;
        case 0x1f09a0u: goto label_1f09a0;
        case 0x1f09a4u: goto label_1f09a4;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09acu: goto label_1f09ac;
        case 0x1f09b0u: goto label_1f09b0;
        case 0x1f09b4u: goto label_1f09b4;
        case 0x1f09b8u: goto label_1f09b8;
        case 0x1f09bcu: goto label_1f09bc;
        case 0x1f09c0u: goto label_1f09c0;
        case 0x1f09c4u: goto label_1f09c4;
        case 0x1f09c8u: goto label_1f09c8;
        case 0x1f09ccu: goto label_1f09cc;
        case 0x1f09d0u: goto label_1f09d0;
        case 0x1f09d4u: goto label_1f09d4;
        case 0x1f09d8u: goto label_1f09d8;
        case 0x1f09dcu: goto label_1f09dc;
        case 0x1f09e0u: goto label_1f09e0;
        case 0x1f09e4u: goto label_1f09e4;
        case 0x1f09e8u: goto label_1f09e8;
        case 0x1f09ecu: goto label_1f09ec;
        case 0x1f09f0u: goto label_1f09f0;
        case 0x1f09f4u: goto label_1f09f4;
        case 0x1f09f8u: goto label_1f09f8;
        case 0x1f09fcu: goto label_1f09fc;
        case 0x1f0a00u: goto label_1f0a00;
        case 0x1f0a04u: goto label_1f0a04;
        case 0x1f0a08u: goto label_1f0a08;
        case 0x1f0a0cu: goto label_1f0a0c;
        case 0x1f0a10u: goto label_1f0a10;
        case 0x1f0a14u: goto label_1f0a14;
        case 0x1f0a18u: goto label_1f0a18;
        case 0x1f0a1cu: goto label_1f0a1c;
        case 0x1f0a20u: goto label_1f0a20;
        case 0x1f0a24u: goto label_1f0a24;
        case 0x1f0a28u: goto label_1f0a28;
        case 0x1f0a2cu: goto label_1f0a2c;
        case 0x1f0a30u: goto label_1f0a30;
        case 0x1f0a34u: goto label_1f0a34;
        case 0x1f0a38u: goto label_1f0a38;
        case 0x1f0a3cu: goto label_1f0a3c;
        case 0x1f0a40u: goto label_1f0a40;
        case 0x1f0a44u: goto label_1f0a44;
        case 0x1f0a48u: goto label_1f0a48;
        case 0x1f0a4cu: goto label_1f0a4c;
        case 0x1f0a50u: goto label_1f0a50;
        case 0x1f0a54u: goto label_1f0a54;
        case 0x1f0a58u: goto label_1f0a58;
        case 0x1f0a5cu: goto label_1f0a5c;
        case 0x1f0a60u: goto label_1f0a60;
        case 0x1f0a64u: goto label_1f0a64;
        case 0x1f0a68u: goto label_1f0a68;
        case 0x1f0a6cu: goto label_1f0a6c;
        case 0x1f0a70u: goto label_1f0a70;
        case 0x1f0a74u: goto label_1f0a74;
        case 0x1f0a78u: goto label_1f0a78;
        case 0x1f0a7cu: goto label_1f0a7c;
        case 0x1f0a80u: goto label_1f0a80;
        case 0x1f0a84u: goto label_1f0a84;
        case 0x1f0a88u: goto label_1f0a88;
        case 0x1f0a8cu: goto label_1f0a8c;
        case 0x1f0a90u: goto label_1f0a90;
        case 0x1f0a94u: goto label_1f0a94;
        case 0x1f0a98u: goto label_1f0a98;
        case 0x1f0a9cu: goto label_1f0a9c;
        case 0x1f0aa0u: goto label_1f0aa0;
        case 0x1f0aa4u: goto label_1f0aa4;
        case 0x1f0aa8u: goto label_1f0aa8;
        case 0x1f0aacu: goto label_1f0aac;
        case 0x1f0ab0u: goto label_1f0ab0;
        case 0x1f0ab4u: goto label_1f0ab4;
        case 0x1f0ab8u: goto label_1f0ab8;
        case 0x1f0abcu: goto label_1f0abc;
        case 0x1f0ac0u: goto label_1f0ac0;
        case 0x1f0ac4u: goto label_1f0ac4;
        case 0x1f0ac8u: goto label_1f0ac8;
        case 0x1f0accu: goto label_1f0acc;
        case 0x1f0ad0u: goto label_1f0ad0;
        case 0x1f0ad4u: goto label_1f0ad4;
        case 0x1f0ad8u: goto label_1f0ad8;
        case 0x1f0adcu: goto label_1f0adc;
        case 0x1f0ae0u: goto label_1f0ae0;
        case 0x1f0ae4u: goto label_1f0ae4;
        case 0x1f0ae8u: goto label_1f0ae8;
        case 0x1f0aecu: goto label_1f0aec;
        case 0x1f0af0u: goto label_1f0af0;
        case 0x1f0af4u: goto label_1f0af4;
        case 0x1f0af8u: goto label_1f0af8;
        case 0x1f0afcu: goto label_1f0afc;
        case 0x1f0b00u: goto label_1f0b00;
        case 0x1f0b04u: goto label_1f0b04;
        case 0x1f0b08u: goto label_1f0b08;
        case 0x1f0b0cu: goto label_1f0b0c;
        case 0x1f0b10u: goto label_1f0b10;
        case 0x1f0b14u: goto label_1f0b14;
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b1cu: goto label_1f0b1c;
        case 0x1f0b20u: goto label_1f0b20;
        case 0x1f0b24u: goto label_1f0b24;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b2cu: goto label_1f0b2c;
        case 0x1f0b30u: goto label_1f0b30;
        case 0x1f0b34u: goto label_1f0b34;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b3cu: goto label_1f0b3c;
        case 0x1f0b40u: goto label_1f0b40;
        case 0x1f0b44u: goto label_1f0b44;
        case 0x1f0b48u: goto label_1f0b48;
        case 0x1f0b4cu: goto label_1f0b4c;
        case 0x1f0b50u: goto label_1f0b50;
        case 0x1f0b54u: goto label_1f0b54;
        case 0x1f0b58u: goto label_1f0b58;
        case 0x1f0b5cu: goto label_1f0b5c;
        case 0x1f0b60u: goto label_1f0b60;
        case 0x1f0b64u: goto label_1f0b64;
        case 0x1f0b68u: goto label_1f0b68;
        case 0x1f0b6cu: goto label_1f0b6c;
        case 0x1f0b70u: goto label_1f0b70;
        case 0x1f0b74u: goto label_1f0b74;
        case 0x1f0b78u: goto label_1f0b78;
        case 0x1f0b7cu: goto label_1f0b7c;
        case 0x1f0b80u: goto label_1f0b80;
        case 0x1f0b84u: goto label_1f0b84;
        case 0x1f0b88u: goto label_1f0b88;
        case 0x1f0b8cu: goto label_1f0b8c;
        case 0x1f0b90u: goto label_1f0b90;
        case 0x1f0b94u: goto label_1f0b94;
        case 0x1f0b98u: goto label_1f0b98;
        case 0x1f0b9cu: goto label_1f0b9c;
        case 0x1f0ba0u: goto label_1f0ba0;
        case 0x1f0ba4u: goto label_1f0ba4;
        case 0x1f0ba8u: goto label_1f0ba8;
        case 0x1f0bacu: goto label_1f0bac;
        case 0x1f0bb0u: goto label_1f0bb0;
        case 0x1f0bb4u: goto label_1f0bb4;
        case 0x1f0bb8u: goto label_1f0bb8;
        case 0x1f0bbcu: goto label_1f0bbc;
        case 0x1f0bc0u: goto label_1f0bc0;
        case 0x1f0bc4u: goto label_1f0bc4;
        case 0x1f0bc8u: goto label_1f0bc8;
        case 0x1f0bccu: goto label_1f0bcc;
        case 0x1f0bd0u: goto label_1f0bd0;
        case 0x1f0bd4u: goto label_1f0bd4;
        case 0x1f0bd8u: goto label_1f0bd8;
        case 0x1f0bdcu: goto label_1f0bdc;
        case 0x1f0be0u: goto label_1f0be0;
        case 0x1f0be4u: goto label_1f0be4;
        case 0x1f0be8u: goto label_1f0be8;
        case 0x1f0becu: goto label_1f0bec;
        case 0x1f0bf0u: goto label_1f0bf0;
        case 0x1f0bf4u: goto label_1f0bf4;
        case 0x1f0bf8u: goto label_1f0bf8;
        case 0x1f0bfcu: goto label_1f0bfc;
        case 0x1f0c00u: goto label_1f0c00;
        case 0x1f0c04u: goto label_1f0c04;
        case 0x1f0c08u: goto label_1f0c08;
        case 0x1f0c0cu: goto label_1f0c0c;
        case 0x1f0c10u: goto label_1f0c10;
        case 0x1f0c14u: goto label_1f0c14;
        case 0x1f0c18u: goto label_1f0c18;
        case 0x1f0c1cu: goto label_1f0c1c;
        case 0x1f0c20u: goto label_1f0c20;
        case 0x1f0c24u: goto label_1f0c24;
        case 0x1f0c28u: goto label_1f0c28;
        case 0x1f0c2cu: goto label_1f0c2c;
        case 0x1f0c30u: goto label_1f0c30;
        case 0x1f0c34u: goto label_1f0c34;
        case 0x1f0c38u: goto label_1f0c38;
        case 0x1f0c3cu: goto label_1f0c3c;
        case 0x1f0c40u: goto label_1f0c40;
        case 0x1f0c44u: goto label_1f0c44;
        case 0x1f0c48u: goto label_1f0c48;
        case 0x1f0c4cu: goto label_1f0c4c;
        case 0x1f0c50u: goto label_1f0c50;
        case 0x1f0c54u: goto label_1f0c54;
        case 0x1f0c58u: goto label_1f0c58;
        case 0x1f0c5cu: goto label_1f0c5c;
        case 0x1f0c60u: goto label_1f0c60;
        case 0x1f0c64u: goto label_1f0c64;
        case 0x1f0c68u: goto label_1f0c68;
        case 0x1f0c6cu: goto label_1f0c6c;
        case 0x1f0c70u: goto label_1f0c70;
        case 0x1f0c74u: goto label_1f0c74;
        case 0x1f0c78u: goto label_1f0c78;
        case 0x1f0c7cu: goto label_1f0c7c;
        case 0x1f0c80u: goto label_1f0c80;
        case 0x1f0c84u: goto label_1f0c84;
        case 0x1f0c88u: goto label_1f0c88;
        case 0x1f0c8cu: goto label_1f0c8c;
        case 0x1f0c90u: goto label_1f0c90;
        case 0x1f0c94u: goto label_1f0c94;
        case 0x1f0c98u: goto label_1f0c98;
        case 0x1f0c9cu: goto label_1f0c9c;
        case 0x1f0ca0u: goto label_1f0ca0;
        case 0x1f0ca4u: goto label_1f0ca4;
        case 0x1f0ca8u: goto label_1f0ca8;
        case 0x1f0cacu: goto label_1f0cac;
        case 0x1f0cb0u: goto label_1f0cb0;
        case 0x1f0cb4u: goto label_1f0cb4;
        case 0x1f0cb8u: goto label_1f0cb8;
        case 0x1f0cbcu: goto label_1f0cbc;
        case 0x1f0cc0u: goto label_1f0cc0;
        case 0x1f0cc4u: goto label_1f0cc4;
        case 0x1f0cc8u: goto label_1f0cc8;
        case 0x1f0cccu: goto label_1f0ccc;
        case 0x1f0cd0u: goto label_1f0cd0;
        case 0x1f0cd4u: goto label_1f0cd4;
        case 0x1f0cd8u: goto label_1f0cd8;
        case 0x1f0cdcu: goto label_1f0cdc;
        case 0x1f0ce0u: goto label_1f0ce0;
        case 0x1f0ce4u: goto label_1f0ce4;
        case 0x1f0ce8u: goto label_1f0ce8;
        case 0x1f0cecu: goto label_1f0cec;
        case 0x1f0cf0u: goto label_1f0cf0;
        case 0x1f0cf4u: goto label_1f0cf4;
        case 0x1f0cf8u: goto label_1f0cf8;
        case 0x1f0cfcu: goto label_1f0cfc;
        case 0x1f0d00u: goto label_1f0d00;
        case 0x1f0d04u: goto label_1f0d04;
        case 0x1f0d08u: goto label_1f0d08;
        case 0x1f0d0cu: goto label_1f0d0c;
        case 0x1f0d10u: goto label_1f0d10;
        case 0x1f0d14u: goto label_1f0d14;
        case 0x1f0d18u: goto label_1f0d18;
        case 0x1f0d1cu: goto label_1f0d1c;
        case 0x1f0d20u: goto label_1f0d20;
        case 0x1f0d24u: goto label_1f0d24;
        case 0x1f0d28u: goto label_1f0d28;
        case 0x1f0d2cu: goto label_1f0d2c;
        case 0x1f0d30u: goto label_1f0d30;
        case 0x1f0d34u: goto label_1f0d34;
        case 0x1f0d38u: goto label_1f0d38;
        case 0x1f0d3cu: goto label_1f0d3c;
        case 0x1f0d40u: goto label_1f0d40;
        case 0x1f0d44u: goto label_1f0d44;
        case 0x1f0d48u: goto label_1f0d48;
        case 0x1f0d4cu: goto label_1f0d4c;
        case 0x1f0d50u: goto label_1f0d50;
        case 0x1f0d54u: goto label_1f0d54;
        case 0x1f0d58u: goto label_1f0d58;
        case 0x1f0d5cu: goto label_1f0d5c;
        case 0x1f0d60u: goto label_1f0d60;
        case 0x1f0d64u: goto label_1f0d64;
        case 0x1f0d68u: goto label_1f0d68;
        case 0x1f0d6cu: goto label_1f0d6c;
        case 0x1f0d70u: goto label_1f0d70;
        case 0x1f0d74u: goto label_1f0d74;
        case 0x1f0d78u: goto label_1f0d78;
        case 0x1f0d7cu: goto label_1f0d7c;
        case 0x1f0d80u: goto label_1f0d80;
        case 0x1f0d84u: goto label_1f0d84;
        case 0x1f0d88u: goto label_1f0d88;
        case 0x1f0d8cu: goto label_1f0d8c;
        default: break;
    }

    ctx->pc = 0x1f0000u;

label_1f0000:
    // 0x1f0000: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x1f0000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
label_1f0004:
    // 0x1f0004: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f0004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f0008:
    // 0x1f0008: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f0008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f000c:
    // 0x1f000c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f0010:
    // 0x1f0010: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f0010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f0014:
    // 0x1f0014: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f0018:
    // 0x1f0018: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f0018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f001c:
    // 0x1f001c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f0020:
    // 0x1f0020: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f0020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f0024:
    // 0x1f0024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0028:
    // 0x1f0028: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f002c:
    // 0x1f002c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0030:
    // 0x1f0030: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f0034:
    // 0x1f0034: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f0034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f0038:
    // 0x1f0038: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f0038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f003c:
    // 0x1f003c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1f003cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f0040:
    // 0x1f0040: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f0040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f0044:
    // 0x1f0044: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f0044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f0048:
    // 0x1f0048: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f0048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f004c:
    // 0x1f004c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f0050:
    if (ctx->pc == 0x1F0050u) {
        ctx->pc = 0x1F0050u;
            // 0x1f0050: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F0054u;
        goto label_1f0054;
    }
    ctx->pc = 0x1F004Cu;
    {
        const bool branch_taken_0x1f004c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F004Cu;
            // 0x1f0050: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f004c) {
            ctx->pc = 0x1F007Cu;
            goto label_1f007c;
        }
    }
    ctx->pc = 0x1F0054u;
label_1f0054:
    // 0x1f0054: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f0054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f0058:
    // 0x1f0058: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f0058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f005c:
    // 0x1f005c: 0x2463ae40  addiu       $v1, $v1, -0x51C0
    ctx->pc = 0x1f005cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946368));
label_1f0060:
    // 0x1f0060: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f0060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f0064:
    // 0x1f0064: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f0064u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f0068:
    // 0x1f0068: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f0068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f006c:
    // 0x1f006c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f006cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f0070:
    // 0x1f0070: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f0070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f0074:
    // 0x1f0074: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f0074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f0078:
    // 0x1f0078: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f0078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f007c:
    // 0x1f007c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x1f007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0080:
    // 0x1f0080: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x1f0080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f0084:
    // 0x1f0084: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1f0084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0088:
    // 0x1f0088: 0x45030046  bc1tl       . + 4 + (0x46 << 2)
label_1f008c:
    if (ctx->pc == 0x1F008Cu) {
        ctx->pc = 0x1F008Cu;
            // 0x1f008c: 0xc6200024  lwc1        $f0, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F0090u;
        goto label_1f0090;
    }
    ctx->pc = 0x1F0088u;
    {
        const bool branch_taken_0x1f0088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0088) {
            ctx->pc = 0x1F008Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0088u;
            // 0x1f008c: 0xc6200024  lwc1        $f0, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F01A4u;
            goto label_1f01a4;
        }
    }
    ctx->pc = 0x1F0090u;
label_1f0090:
    // 0x1f0090: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f0090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f0094:
    // 0x1f0094: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1f0098:
    // 0x1f0098: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1f009c:
    if (ctx->pc == 0x1F009Cu) {
        ctx->pc = 0x1F009Cu;
            // 0x1f009c: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = 0x1F00A0u;
        goto label_1f00a0;
    }
    ctx->pc = 0x1F0098u;
    {
        const bool branch_taken_0x1f0098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0098) {
            ctx->pc = 0x1F009Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0098u;
            // 0x1f009c: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F00ACu;
            goto label_1f00ac;
        }
    }
    ctx->pc = 0x1F00A0u;
label_1f00a0:
    // 0x1f00a0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1f00a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f00a4:
    // 0x1f00a4: 0x10000184  b           . + 4 + (0x184 << 2)
label_1f00a8:
    if (ctx->pc == 0x1F00A8u) {
        ctx->pc = 0x1F00A8u;
            // 0x1f00a8: 0xe6800018  swc1        $f0, 0x18($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
        ctx->pc = 0x1F00ACu;
        goto label_1f00ac;
    }
    ctx->pc = 0x1F00A4u;
    {
        const bool branch_taken_0x1f00a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00A4u;
            // 0x1f00a8: 0xe6800018  swc1        $f0, 0x18($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00a4) {
            ctx->pc = 0x1F06B8u;
            goto label_1f06b8;
        }
    }
    ctx->pc = 0x1F00ACu;
label_1f00ac:
    // 0x1f00ac: 0xafb3041c  sw          $s3, 0x41C($sp)
    ctx->pc = 0x1f00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 19));
label_1f00b0:
    // 0x1f00b0: 0xafa50418  sw          $a1, 0x418($sp)
    ctx->pc = 0x1f00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1048), GPR_U32(ctx, 5));
label_1f00b4:
    // 0x1f00b4: 0x27a20420  addiu       $v0, $sp, 0x420
    ctx->pc = 0x1f00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1f00b8:
    // 0x1f00b8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1f00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1f00bc:
    // 0x1f00bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f00c0:
    // 0x1f00c0: 0xafa30410  sw          $v1, 0x410($sp)
    ctx->pc = 0x1f00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 3));
label_1f00c4:
    // 0x1f00c4: 0xafa40414  sw          $a0, 0x414($sp)
    ctx->pc = 0x1f00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 4));
label_1f00c8:
    // 0x1f00c8: 0xafa20408  sw          $v0, 0x408($sp)
    ctx->pc = 0x1f00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 2));
label_1f00cc:
    // 0x1f00cc: 0xafb2040c  sw          $s2, 0x40C($sp)
    ctx->pc = 0x1f00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 18));
label_1f00d0:
    // 0x1f00d0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f00d4:
    // 0x1f00d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f00d8:
    // 0x1f00d8: 0xafa20400  sw          $v0, 0x400($sp)
    ctx->pc = 0x1f00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
label_1f00dc:
    // 0x1f00dc: 0xafa30404  sw          $v1, 0x404($sp)
    ctx->pc = 0x1f00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 3));
label_1f00e0:
    // 0x1f00e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1f00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f00e4:
    // 0x1f00e4: 0xc0a3a64  jal         func_28E990
label_1f00e8:
    if (ctx->pc == 0x1F00E8u) {
        ctx->pc = 0x1F00E8u;
            // 0x1f00e8: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x1F00ECu;
        goto label_1f00ec;
    }
    ctx->pc = 0x1F00E4u;
    SET_GPR_U32(ctx, 31, 0x1F00ECu);
    ctx->pc = 0x1F00E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00E4u;
            // 0x1f00e8: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00ECu; }
        if (ctx->pc != 0x1F00ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F00ECu; }
        if (ctx->pc != 0x1F00ECu) { return; }
    }
    ctx->pc = 0x1F00ECu;
label_1f00ec:
    // 0x1f00ec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1f00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f00f0:
    // 0x1f00f0: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x1f00f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f00f4:
    // 0x1f00f4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x1f00f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_1f00f8:
    // 0x1f00f8: 0xc0a3a64  jal         func_28E990
label_1f00fc:
    if (ctx->pc == 0x1F00FCu) {
        ctx->pc = 0x1F00FCu;
            // 0x1f00fc: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x1F0100u;
        goto label_1f0100;
    }
    ctx->pc = 0x1F00F8u;
    SET_GPR_U32(ctx, 31, 0x1F0100u);
    ctx->pc = 0x1F00FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00F8u;
            // 0x1f00fc: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0100u; }
        if (ctx->pc != 0x1F0100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0100u; }
        if (ctx->pc != 0x1F0100u) { return; }
    }
    ctx->pc = 0x1F0100u;
label_1f0100:
    // 0x1f0100: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f0100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f0104:
    // 0x1f0104: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1f0104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1f0108:
    // 0x1f0108: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x1f0108u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f010c:
    // 0x1f010c: 0xafa00290  sw          $zero, 0x290($sp)
    ctx->pc = 0x1f010cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 0));
label_1f0110:
    // 0x1f0110: 0x92860014  lbu         $a2, 0x14($s4)
    ctx->pc = 0x1f0110u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 20)));
label_1f0114:
    // 0x1f0114: 0xafa60280  sw          $a2, 0x280($sp)
    ctx->pc = 0x1f0114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 6));
label_1f0118:
    // 0x1f0118: 0x92820015  lbu         $v0, 0x15($s4)
    ctx->pc = 0x1f0118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21)));
label_1f011c:
    // 0x1f011c: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x1f011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_1f0120:
    // 0x1f0120: 0x92820016  lbu         $v0, 0x16($s4)
    ctx->pc = 0x1f0120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 22)));
label_1f0124:
    // 0x1f0124: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x1f0124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_1f0128:
    // 0x1f0128: 0x92820017  lbu         $v0, 0x17($s4)
    ctx->pc = 0x1f0128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 23)));
label_1f012c:
    // 0x1f012c: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x1f012cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
label_1f0130:
    // 0x1f0130: 0xafa00294  sw          $zero, 0x294($sp)
    ctx->pc = 0x1f0130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
label_1f0134:
    // 0x1f0134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f0134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0138:
    // 0x1f0138: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1f0138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1f013c:
    // 0x1f013c: 0x320f809  jalr        $t9
label_1f0140:
    if (ctx->pc == 0x1F0140u) {
        ctx->pc = 0x1F0140u;
            // 0x1f0140: 0x27a702a0  addiu       $a3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x1F0144u;
        goto label_1f0144;
    }
    ctx->pc = 0x1F013Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0144u);
        ctx->pc = 0x1F0140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F013Cu;
            // 0x1f0140: 0x27a702a0  addiu       $a3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0144u; }
            if (ctx->pc != 0x1F0144u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0144u;
label_1f0144:
    // 0x1f0144: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x1f0144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_1f0148:
    // 0x1f0148: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f0148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f014c:
    // 0x1f014c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1f014cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0150:
    // 0x1f0150: 0x27a70360  addiu       $a3, $sp, 0x360
    ctx->pc = 0x1f0150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_1f0154:
    // 0x1f0154: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x1f0154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_1f0158:
    // 0x1f0158: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f0158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1f015c:
    // 0x1f015c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f015cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f0160:
    // 0x1f0160: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1f0164:
    // 0x1f0164: 0x320f809  jalr        $t9
label_1f0168:
    if (ctx->pc == 0x1F0168u) {
        ctx->pc = 0x1F0168u;
            // 0x1f0168: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x1F016Cu;
        goto label_1f016c;
    }
    ctx->pc = 0x1F0164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F016Cu);
        ctx->pc = 0x1F0168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0164u;
            // 0x1f0168: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F016Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F016Cu; }
            if (ctx->pc != 0x1F016Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F016Cu;
label_1f016c:
    // 0x1f016c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f0170:
    // 0x1f0170: 0x27a40410  addiu       $a0, $sp, 0x410
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_1f0174:
    // 0x1f0174: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x1f0174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_1f0178:
    // 0x1f0178: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x1f0178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f017c:
    // 0x1f017c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1f017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f0180:
    // 0x1f0180: 0xc07bbb0  jal         func_1EEEC0
label_1f0184:
    if (ctx->pc == 0x1F0184u) {
        ctx->pc = 0x1F0184u;
            // 0x1f0184: 0x26870020  addiu       $a3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x1F0188u;
        goto label_1f0188;
    }
    ctx->pc = 0x1F0180u;
    SET_GPR_U32(ctx, 31, 0x1F0188u);
    ctx->pc = 0x1F0184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0180u;
            // 0x1f0184: 0x26870020  addiu       $a3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEEC0u;
    if (runtime->hasFunction(0x1EEEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EEEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0188u; }
        if (ctx->pc != 0x1F0188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEEC0_0x1eeec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0188u; }
        if (ctx->pc != 0x1F0188u) { return; }
    }
    ctx->pc = 0x1F0188u;
label_1f0188:
    // 0x1f0188: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x1f0188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_1f018c:
    // 0x1f018c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1f0190:
    if (ctx->pc == 0x1F0190u) {
        ctx->pc = 0x1F0194u;
        goto label_1f0194;
    }
    ctx->pc = 0x1F018Cu;
    {
        const bool branch_taken_0x1f018c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f018c) {
            ctx->pc = 0x1F01A0u;
            goto label_1f01a0;
        }
    }
    ctx->pc = 0x1F0194u;
label_1f0194:
    // 0x1f0194: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1f0194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f0198:
    // 0x1f0198: 0xc099150  jal         func_264540
label_1f019c:
    if (ctx->pc == 0x1F019Cu) {
        ctx->pc = 0x1F019Cu;
            // 0x1f019c: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x1F01A0u;
        goto label_1f01a0;
    }
    ctx->pc = 0x1F0198u;
    SET_GPR_U32(ctx, 31, 0x1F01A0u);
    ctx->pc = 0x1F019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0198u;
            // 0x1f019c: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264540u;
    if (runtime->hasFunction(0x264540u)) {
        auto targetFn = runtime->lookupFunction(0x264540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01A0u; }
        if (ctx->pc != 0x1F01A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264540_0x264540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01A0u; }
        if (ctx->pc != 0x1F01A0u) { return; }
    }
    ctx->pc = 0x1F01A0u;
label_1f01a0:
    // 0x1f01a0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1f01a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f01a4:
    // 0x1f01a4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1f01a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1f01a8:
    // 0x1f01a8: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x1f01a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_1f01ac:
    // 0x1f01ac: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f01acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f01b0:
    // 0x1f01b0: 0xc6240028  lwc1        $f4, 0x28($s1)
    ctx->pc = 0x1f01b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f01b4:
    // 0x1f01b4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f01b8:
    // 0x1f01b8: 0xc6820020  lwc1        $f2, 0x20($s4)
    ctx->pc = 0x1f01b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f01bc:
    // 0x1f01bc: 0xc6830028  lwc1        $f3, 0x28($s4)
    ctx->pc = 0x1f01bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f01c0:
    // 0x1f01c0: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x1f01c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f01c4:
    // 0x1f01c4: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x1f01c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f01c8:
    // 0x1f01c8: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x1f01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f01cc:
    // 0x1f01cc: 0xc4a50040  lwc1        $f5, 0x40($a1)
    ctx->pc = 0x1f01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f01d0:
    // 0x1f01d0: 0x46012282  mul.s       $f10, $f4, $f1
    ctx->pc = 0x1f01d0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1f01d4:
    // 0x1f01d4: 0x46002242  mul.s       $f9, $f4, $f0
    ctx->pc = 0x1f01d4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1f01d8:
    // 0x1f01d8: 0xc4a40050  lwc1        $f4, 0x50($a1)
    ctx->pc = 0x1f01d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f01dc:
    // 0x1f01dc: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x1f01dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f01e0:
    // 0x1f01e0: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x1f01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f01e4:
    // 0x1f01e4: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f01e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f01e8:
    // 0x1f01e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f01e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f01ec:
    // 0x1f01ec: 0x4604501a  mula.s      $f10, $f4
    ctx->pc = 0x1f01ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_1f01f0:
    // 0x1f01f0: 0x46005202  mul.s       $f8, $f10, $f0
    ctx->pc = 0x1f01f0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_1f01f4:
    // 0x1f01f4: 0xc4a50048  lwc1        $f5, 0x48($a1)
    ctx->pc = 0x1f01f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f01f8:
    // 0x1f01f8: 0xc4a40058  lwc1        $f4, 0x58($a1)
    ctx->pc = 0x1f01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f01fc:
    // 0x1f01fc: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1f01fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0200:
    // 0x1f0200: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1f0200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0204:
    // 0x1f0204: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f0204u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f0208:
    // 0x1f0208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f020c:
    // 0x1f020c: 0x46004adc  madd.s      $f11, $f9, $f0
    ctx->pc = 0x1f020cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[0]));
label_1f0210:
    // 0x1f0210: 0x460451c2  mul.s       $f7, $f10, $f4
    ctx->pc = 0x1f0210u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_1f0214:
    // 0x1f0214: 0xc4650054  lwc1        $f5, 0x54($v1)
    ctx->pc = 0x1f0214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f0218:
    // 0x1f0218: 0xc4640044  lwc1        $f4, 0x44($v1)
    ctx->pc = 0x1f0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f021c:
    // 0x1f021c: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1f021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0220:
    // 0x1f0220: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x1f0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0224:
    // 0x1f0224: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f0224u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f0228:
    // 0x1f0228: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f0228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f022c:
    // 0x1f022c: 0x46083018  adda.s      $f6, $f8
    ctx->pc = 0x1f022cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
label_1f0230:
    // 0x1f0230: 0x46044a1c  madd.s      $f8, $f9, $f4
    ctx->pc = 0x1f0230u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[4]));
label_1f0234:
    // 0x1f0234: 0x46073018  adda.s      $f6, $f7
    ctx->pc = 0x1f0234u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
label_1f0238:
    // 0x1f0238: 0x46004b1c  madd.s      $f12, $f9, $f0
    ctx->pc = 0x1f0238u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[0]));
label_1f023c:
    // 0x1f023c: 0xc4a1009c  lwc1        $f1, 0x9C($a1)
    ctx->pc = 0x1f023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0240:
    // 0x1f0240: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f0240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0244:
    // 0x1f0244: 0xc46400a0  lwc1        $f4, 0xA0($v1)
    ctx->pc = 0x1f0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f0248:
    // 0x1f0248: 0x460151c2  mul.s       $f7, $f10, $f1
    ctx->pc = 0x1f0248u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
label_1f024c:
    // 0x1f024c: 0x46004942  mul.s       $f5, $f9, $f0
    ctx->pc = 0x1f024cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
label_1f0250:
    // 0x1f0250: 0xc4a600a0  lwc1        $f6, 0xA0($a1)
    ctx->pc = 0x1f0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f0254:
    // 0x1f0254: 0x4605201a  mula.s      $f4, $f5
    ctx->pc = 0x1f0254u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_1f0258:
    // 0x1f0258: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x1f0258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f025c:
    // 0x1f025c: 0x4607311c  madd.s      $f4, $f6, $f7
    ctx->pc = 0x1f025cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
label_1f0260:
    // 0x1f0260: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x1f0260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0264:
    // 0x1f0264: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x1f0264u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_1f0268:
    // 0x1f0268: 0x4602581e  madda.s     $f11, $f2
    ctx->pc = 0x1f0268u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[2]));
label_1f026c:
    // 0x1f026c: 0x4603605c  madd.s      $f1, $f12, $f3
    ctx->pc = 0x1f026cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[3]));
label_1f0270:
    // 0x1f0270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f0270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f0274:
    // 0x1f0274: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x1f0274u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1f0278:
    // 0x1f0278: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1f0278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f027c:
    // 0x1f027c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f027cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0280:
    // 0x1f0280: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_1f0284:
    if (ctx->pc == 0x1F0284u) {
        ctx->pc = 0x1F0284u;
            // 0x1f0284: 0x2684002c  addiu       $a0, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->pc = 0x1F0288u;
        goto label_1f0288;
    }
    ctx->pc = 0x1F0280u;
    {
        const bool branch_taken_0x1f0280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0280u;
            // 0x1f0284: 0x2684002c  addiu       $a0, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0280) {
            ctx->pc = 0x1F02D0u;
            goto label_1f02d0;
        }
    }
    ctx->pc = 0x1F0288u;
label_1f0288:
    // 0x1f0288: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x1f0288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f028c:
    // 0x1f028c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f028cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1f0290:
    // 0x1f0290: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f0294:
    // 0x1f0294: 0x0  nop
    ctx->pc = 0x1f0294u;
    // NOP
label_1f0298:
    // 0x1f0298: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f0298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f029c:
    // 0x1f029c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f029cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f02a0:
    // 0x1f02a0: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_1f02a4:
    if (ctx->pc == 0x1F02A4u) {
        ctx->pc = 0x1F02A4u;
            // 0x1f02a4: 0x80c20010  lb          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->pc = 0x1F02A8u;
        goto label_1f02a8;
    }
    ctx->pc = 0x1F02A0u;
    {
        const bool branch_taken_0x1f02a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f02a0) {
            ctx->pc = 0x1F02A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02A0u;
            // 0x1f02a4: 0x80c20010  lb          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F02D4u;
            goto label_1f02d4;
        }
    }
    ctx->pc = 0x1F02A8u;
label_1f02a8:
    // 0x1f02a8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1f02a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f02ac:
    // 0x1f02ac: 0x92830032  lbu         $v1, 0x32($s4)
    ctx->pc = 0x1f02acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
label_1f02b0:
    // 0x1f02b0: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
label_1f02b4:
    if (ctx->pc == 0x1F02B4u) {
        ctx->pc = 0x1F02B8u;
        goto label_1f02b8;
    }
    ctx->pc = 0x1F02B0u;
    {
        const bool branch_taken_0x1f02b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02b0) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F02B8u;
label_1f02b8:
    // 0x1f02b8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1f02b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f02bc:
    // 0x1f02bc: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1f02bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f02c0:
    // 0x1f02c0: 0xc098768  jal         func_261DA0
label_1f02c4:
    if (ctx->pc == 0x1F02C4u) {
        ctx->pc = 0x1F02C4u;
            // 0x1f02c4: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x1F02C8u;
        goto label_1f02c8;
    }
    ctx->pc = 0x1F02C0u;
    SET_GPR_U32(ctx, 31, 0x1F02C8u);
    ctx->pc = 0x1F02C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02C0u;
            // 0x1f02c4: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F02C8u; }
        if (ctx->pc != 0x1F02C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F02C8u; }
        if (ctx->pc != 0x1F02C8u) { return; }
    }
    ctx->pc = 0x1F02C8u;
label_1f02c8:
    // 0x1f02c8: 0x10000101  b           . + 4 + (0x101 << 2)
label_1f02cc:
    if (ctx->pc == 0x1F02CCu) {
        ctx->pc = 0x1F02D0u;
        goto label_1f02d0;
    }
    ctx->pc = 0x1F02C8u;
    {
        const bool branch_taken_0x1f02c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02c8) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F02D0u;
label_1f02d0:
    // 0x1f02d0: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x1f02d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1f02d4:
    // 0x1f02d4: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_1f02d8:
    if (ctx->pc == 0x1F02D8u) {
        ctx->pc = 0x1F02D8u;
            // 0x1f02d8: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F02DCu;
        goto label_1f02dc;
    }
    ctx->pc = 0x1F02D4u;
    {
        const bool branch_taken_0x1f02d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02d4) {
            ctx->pc = 0x1F02D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02D4u;
            // 0x1f02d8: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0388u;
            goto label_1f0388;
        }
    }
    ctx->pc = 0x1F02DCu;
label_1f02dc:
    // 0x1f02dc: 0xafb30210  sw          $s3, 0x210($sp)
    ctx->pc = 0x1f02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 19));
label_1f02e0:
    // 0x1f02e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f02e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f02e4:
    // 0x1f02e4: 0xafb20214  sw          $s2, 0x214($sp)
    ctx->pc = 0x1f02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 18));
label_1f02e8:
    // 0x1f02e8: 0xafb10218  sw          $s1, 0x218($sp)
    ctx->pc = 0x1f02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 17));
label_1f02ec:
    // 0x1f02ec: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1f02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f02f0:
    // 0x1f02f0: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x1f02f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
label_1f02f4:
    // 0x1f02f4: 0xe7ab0270  swc1        $f11, 0x270($sp)
    ctx->pc = 0x1f02f4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_1f02f8:
    // 0x1f02f8: 0xe7a80274  swc1        $f8, 0x274($sp)
    ctx->pc = 0x1f02f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_1f02fc:
    // 0x1f02fc: 0xe7ac0278  swc1        $f12, 0x278($sp)
    ctx->pc = 0x1f02fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_1f0300:
    // 0x1f0300: 0xe7a4027c  swc1        $f4, 0x27C($sp)
    ctx->pc = 0x1f0300u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_1f0304:
    // 0x1f0304: 0xe7a20260  swc1        $f2, 0x260($sp)
    ctx->pc = 0x1f0304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_1f0308:
    // 0x1f0308: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x1f0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f030c:
    // 0x1f030c: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x1f030cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f0310:
    // 0x1f0310: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x1f0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f0314:
    // 0x1f0314: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x1f0314u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1f0318:
    // 0x1f0318: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x1f0318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f031c:
    // 0x1f031c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x1f031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0320:
    // 0x1f0320: 0x46030342  mul.s       $f13, $f0, $f3
    ctx->pc = 0x1f0320u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1f0324:
    // 0x1f0324: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x1f0324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1f0328:
    // 0x1f0328: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1f0328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f032c:
    // 0x1f032c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1f0330:
    if (ctx->pc == 0x1F0330u) {
        ctx->pc = 0x1F0330u;
            // 0x1f0330: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1F0334u;
        goto label_1f0334;
    }
    ctx->pc = 0x1F032Cu;
    {
        const bool branch_taken_0x1f032c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f032c) {
            ctx->pc = 0x1F0330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F032Cu;
            // 0x1f0330: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0334u;
            goto label_1f0334;
        }
    }
    ctx->pc = 0x1F0334u;
label_1f0334:
    // 0x1f0334: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x1f0334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0338:
    // 0x1f0338: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1f033c:
    if (ctx->pc == 0x1F033Cu) {
        ctx->pc = 0x1F0340u;
        goto label_1f0340;
    }
    ctx->pc = 0x1F0338u;
    {
        const bool branch_taken_0x1f0338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0338) {
            ctx->pc = 0x1F0384u;
            goto label_1f0384;
        }
    }
    ctx->pc = 0x1F0340u;
label_1f0340:
    // 0x1f0340: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1f0340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0344:
    // 0x1f0344: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f0344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f0348:
    // 0x1f0348: 0xc4c20028  lwc1        $f2, 0x28($a2)
    ctx->pc = 0x1f0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f034c:
    // 0x1f034c: 0x46030382  mul.s       $f14, $f0, $f3
    ctx->pc = 0x1f034cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1f0350:
    // 0x1f0350: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x1f0350u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1f0354:
    // 0x1f0354: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1f0354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1f0358:
    // 0x1f0358: 0x46017034  c.lt.s      $f14, $f1
    ctx->pc = 0x1f0358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f035c:
    // 0x1f035c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1f0360:
    if (ctx->pc == 0x1F0360u) {
        ctx->pc = 0x1F0360u;
            // 0x1f0360: 0x46000b86  mov.s       $f14, $f1 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1F0364u;
        goto label_1f0364;
    }
    ctx->pc = 0x1F035Cu;
    {
        const bool branch_taken_0x1f035c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f035c) {
            ctx->pc = 0x1F0360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F035Cu;
            // 0x1f0360: 0x46000b86  mov.s       $f14, $f1 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0364u;
            goto label_1f0364;
        }
    }
    ctx->pc = 0x1F0364u;
label_1f0364:
    // 0x1f0364: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x1f0364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f0368:
    // 0x1f0368: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1f0368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1f036c:
    // 0x1f036c: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1f036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1f0370:
    // 0x1f0370: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x1f0370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1f0374:
    // 0x1f0374: 0xc09785c  jal         func_25E170
label_1f0378:
    if (ctx->pc == 0x1F0378u) {
        ctx->pc = 0x1F0378u;
            // 0x1f0378: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F037Cu;
        goto label_1f037c;
    }
    ctx->pc = 0x1F0374u;
    SET_GPR_U32(ctx, 31, 0x1F037Cu);
    ctx->pc = 0x1F0378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0374u;
            // 0x1f0378: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E170u;
    if (runtime->hasFunction(0x25E170u)) {
        auto targetFn = runtime->lookupFunction(0x25E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F037Cu; }
        if (ctx->pc != 0x1F037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025E170_0x25e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F037Cu; }
        if (ctx->pc != 0x1F037Cu) { return; }
    }
    ctx->pc = 0x1F037Cu;
label_1f037c:
    // 0x1f037c: 0x100000cf  b           . + 4 + (0xCF << 2)
label_1f0380:
    if (ctx->pc == 0x1F0380u) {
        ctx->pc = 0x1F0380u;
            // 0x1f0380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0384u;
        goto label_1f0384;
    }
    ctx->pc = 0x1F037Cu;
    {
        const bool branch_taken_0x1f037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F037Cu;
            // 0x1f0380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f037c) {
            ctx->pc = 0x1F06BCu;
            goto label_1f06bc;
        }
    }
    ctx->pc = 0x1F0384u;
label_1f0384:
    // 0x1f0384: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1f0384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0388:
    // 0x1f0388: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f0388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f038c:
    // 0x1f038c: 0x450100ca  bc1t        . + 4 + (0xCA << 2)
label_1f0390:
    if (ctx->pc == 0x1F0390u) {
        ctx->pc = 0x1F0394u;
        goto label_1f0394;
    }
    ctx->pc = 0x1F038Cu;
    {
        const bool branch_taken_0x1f038c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f038c) {
            ctx->pc = 0x1F06B8u;
            goto label_1f06b8;
        }
    }
    ctx->pc = 0x1F0394u;
label_1f0394:
    // 0x1f0394: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1f0394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f0398:
    // 0x1f0398: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1f0398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f039c:
    // 0x1f039c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x1f039cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_1f03a0:
    // 0x1f03a0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f03a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f03a4:
    // 0x1f03a4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1f03a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f03a8:
    // 0x1f03a8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1f03a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f03ac:
    // 0x1f03ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f03acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f03b0:
    // 0x1f03b0: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x1f03b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_1f03b4:
    // 0x1f03b4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1f03b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f03b8:
    // 0x1f03b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f03b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f03bc:
    // 0x1f03bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1f03bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1f03c0:
    // 0x1f03c0: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x1f03c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_1f03c4:
    // 0x1f03c4: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x1f03c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_1f03c8:
    // 0x1f03c8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1f03c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f03cc:
    // 0x1f03cc: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x1f03ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_1f03d0:
    // 0x1f03d0: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x1f03d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f03d4:
    // 0x1f03d4: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x1f03d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_1f03d8:
    // 0x1f03d8: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x1f03d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f03dc:
    // 0x1f03dc: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x1f03dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_1f03e0:
    // 0x1f03e0: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x1f03e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f03e4:
    // 0x1f03e4: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x1f03e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_1f03e8:
    // 0x1f03e8: 0x92820032  lbu         $v0, 0x32($s4)
    ctx->pc = 0x1f03e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
label_1f03ec:
    // 0x1f03ec: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_1f03f0:
    if (ctx->pc == 0x1F03F0u) {
        ctx->pc = 0x1F03F4u;
        goto label_1f03f4;
    }
    ctx->pc = 0x1F03ECu;
    {
        const bool branch_taken_0x1f03ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f03ec) {
            ctx->pc = 0x1F0698u;
            goto label_1f0698;
        }
    }
    ctx->pc = 0x1F03F4u;
label_1f03f4:
    // 0x1f03f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f03f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f03f8:
    // 0x1f03f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f03f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f03fc:
    // 0x1f03fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f0400:
    // 0x1f0400: 0x92860030  lbu         $a2, 0x30($s4)
    ctx->pc = 0x1f0400u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
label_1f0404:
    // 0x1f0404: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1f0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f0408:
    // 0x1f0408: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1f0408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f040c:
    // 0x1f040c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1f040cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1f0410:
    // 0x1f0410: 0x24550034  addiu       $s5, $v0, 0x34
    ctx->pc = 0x1f0410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_1f0414:
    // 0x1f0414: 0x320f809  jalr        $t9
label_1f0418:
    if (ctx->pc == 0x1F0418u) {
        ctx->pc = 0x1F0418u;
            // 0x1f0418: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F041Cu;
        goto label_1f041c;
    }
    ctx->pc = 0x1F0414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F041Cu);
        ctx->pc = 0x1F0418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0414u;
            // 0x1f0418: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F041Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F041Cu; }
            if (ctx->pc != 0x1F041Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F041Cu;
label_1f041c:
    // 0x1f041c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1f041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f0420:
    // 0x1f0420: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x1f0420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
label_1f0424:
    // 0x1f0424: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f0424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0428:
    // 0x1f0428: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f0428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f042c:
    // 0x1f042c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1f042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f0430:
    // 0x1f0430: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f0430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f0434:
    // 0x1f0434: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f0434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f0438:
    // 0x1f0438: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f0438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1f043c:
    // 0x1f043c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1f043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0440:
    // 0x1f0440: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1f0444:
    // 0x1f0444: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1f0444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f0448:
    // 0x1f0448: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f0448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f044c:
    // 0x1f044c: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1f044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f0450:
    // 0x1f0450: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f0450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1f0454:
    // 0x1f0454: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0458:
    // 0x1f0458: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f0458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f045c:
    // 0x1f045c: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f0460:
    // 0x1f0460: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f0460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f0464:
    // 0x1f0464: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x1f0464u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f0468:
    // 0x1f0468: 0xe7ab00c4  swc1        $f11, 0xC4($sp)
    ctx->pc = 0x1f0468u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f046c:
    // 0x1f046c: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f0470:
    // 0x1f0470: 0xe7aa00c8  swc1        $f10, 0xC8($sp)
    ctx->pc = 0x1f0470u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f0474:
    // 0x1f0474: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f0478:
    // 0x1f0478: 0xe7a900cc  swc1        $f9, 0xCC($sp)
    ctx->pc = 0x1f0478u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f047c:
    // 0x1f047c: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f0480:
    // 0x1f0480: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x1f0480u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f0484:
    // 0x1f0484: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f0488:
    // 0x1f0488: 0xe7a700d4  swc1        $f7, 0xD4($sp)
    ctx->pc = 0x1f0488u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f048c:
    // 0x1f048c: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f0490:
    // 0x1f0490: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x1f0490u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f0494:
    // 0x1f0494: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f0498:
    // 0x1f0498: 0xe7a500dc  swc1        $f5, 0xDC($sp)
    ctx->pc = 0x1f0498u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f049c:
    // 0x1f049c: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f04a0:
    // 0x1f04a0: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x1f04a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f04a4:
    // 0x1f04a4: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f04a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f04a8:
    // 0x1f04a8: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x1f04a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f04ac:
    // 0x1f04ac: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f04acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f04b0:
    // 0x1f04b0: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x1f04b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f04b4:
    // 0x1f04b4: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x1f04b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f04b8:
    // 0x1f04b8: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x1f04b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f04bc:
    // 0x1f04bc: 0xc7ab00b0  lwc1        $f11, 0xB0($sp)
    ctx->pc = 0x1f04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f04c0:
    // 0x1f04c0: 0xc7aa00c0  lwc1        $f10, 0xC0($sp)
    ctx->pc = 0x1f04c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f04c4:
    // 0x1f04c4: 0xc7a900e0  lwc1        $f9, 0xE0($sp)
    ctx->pc = 0x1f04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f04c8:
    // 0x1f04c8: 0xc7a800d4  lwc1        $f8, 0xD4($sp)
    ctx->pc = 0x1f04c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f04cc:
    // 0x1f04cc: 0xc7a700b4  lwc1        $f7, 0xB4($sp)
    ctx->pc = 0x1f04ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f04d0:
    // 0x1f04d0: 0xc7a600c4  lwc1        $f6, 0xC4($sp)
    ctx->pc = 0x1f04d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f04d4:
    // 0x1f04d4: 0xc7a500e4  lwc1        $f5, 0xE4($sp)
    ctx->pc = 0x1f04d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f04d8:
    // 0x1f04d8: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x1f04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f04dc:
    // 0x1f04dc: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x1f04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f04e0:
    // 0x1f04e0: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1f04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f04e4:
    // 0x1f04e4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1f04e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f04e8:
    // 0x1f04e8: 0xc48e0004  lwc1        $f14, 0x4($a0)
    ctx->pc = 0x1f04e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f04ec:
    // 0x1f04ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f04ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f04f0:
    // 0x1f04f0: 0xc48f0000  lwc1        $f15, 0x0($a0)
    ctx->pc = 0x1f04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f04f4:
    // 0x1f04f4: 0xc48d0008  lwc1        $f13, 0x8($a0)
    ctx->pc = 0x1f04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f04f8:
    // 0x1f04f8: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1f04f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1f04fc:
    // 0x1f04fc: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1f04fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1f0500:
    // 0x1f0500: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1f0500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1f0504:
    // 0x1f0504: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x1f0504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_1f0508:
    // 0x1f0508: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1f0508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1f050c:
    // 0x1f050c: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1f050cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1f0510:
    // 0x1f0510: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f0510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f0514:
    // 0x1f0514: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1f0514u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1f0518:
    // 0x1f0518: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1f0518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1f051c:
    // 0x1f051c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1f051cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1f0520:
    // 0x1f0520: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1f0520u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1f0524:
    // 0x1f0524: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1f0524u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1f0528:
    // 0x1f0528: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f0528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f052c:
    // 0x1f052c: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1f052cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1f0530:
    // 0x1f0530: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f0534:
    // 0x1f0534: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f0534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f0538:
    // 0x1f0538: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f0538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f053c:
    // 0x1f053c: 0x4a1ffea  bgez        $a1, . + 4 + (-0x16 << 2)
label_1f0540:
    if (ctx->pc == 0x1F0540u) {
        ctx->pc = 0x1F0540u;
            // 0x1f0540: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->pc = 0x1F0544u;
        goto label_1f0544;
    }
    ctx->pc = 0x1F053Cu;
    {
        const bool branch_taken_0x1f053c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1F0540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F053Cu;
            // 0x1f0540: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f053c) {
            ctx->pc = 0x1F04E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f04e8;
        }
    }
    ctx->pc = 0x1F0544u;
label_1f0544:
    // 0x1f0544: 0x92820030  lbu         $v0, 0x30($s4)
    ctx->pc = 0x1f0544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
label_1f0548:
    // 0x1f0548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f054c:
    // 0x1f054c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f0550:
    // 0x1f0550: 0x92860031  lbu         $a2, 0x31($s4)
    ctx->pc = 0x1f0550u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
label_1f0554:
    // 0x1f0554: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1f0554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1f0558:
    // 0x1f0558: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f0558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1f055c:
    // 0x1f055c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1f055cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1f0560:
    // 0x1f0560: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x1f0560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1f0564:
    // 0x1f0564: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1f0564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1f0568:
    // 0x1f0568: 0x245100f0  addiu       $s1, $v0, 0xF0
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_1f056c:
    // 0x1f056c: 0x320f809  jalr        $t9
label_1f0570:
    if (ctx->pc == 0x1F0570u) {
        ctx->pc = 0x1F0570u;
            // 0x1f0570: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0574u;
        goto label_1f0574;
    }
    ctx->pc = 0x1F056Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0574u);
        ctx->pc = 0x1F0570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F056Cu;
            // 0x1f0570: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0574u; }
            if (ctx->pc != 0x1F0574u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0574u;
label_1f0574:
    // 0x1f0574: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f0574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f0578:
    // 0x1f0578: 0x92820031  lbu         $v0, 0x31($s4)
    ctx->pc = 0x1f0578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
label_1f057c:
    // 0x1f057c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1f057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0580:
    // 0x1f0580: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1f0580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0584:
    // 0x1f0584: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1f0584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f0588:
    // 0x1f0588: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f0588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f058c:
    // 0x1f058c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f058cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f0590:
    // 0x1f0590: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1f0590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f0594:
    // 0x1f0594: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1f0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0598:
    // 0x1f0598: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f0598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f059c:
    // 0x1f059c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1f059cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1f05a0:
    // 0x1f05a0: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1f05a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f05a4:
    // 0x1f05a4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f05a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1f05a8:
    // 0x1f05a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f05ac:
    // 0x1f05ac: 0xc46b0014  lwc1        $f11, 0x14($v1)
    ctx->pc = 0x1f05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f05b0:
    // 0x1f05b0: 0xc46a0018  lwc1        $f10, 0x18($v1)
    ctx->pc = 0x1f05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f05b4:
    // 0x1f05b4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f05b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f05b8:
    // 0x1f05b8: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x1f05b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f05bc:
    // 0x1f05bc: 0xe7ab0084  swc1        $f11, 0x84($sp)
    ctx->pc = 0x1f05bcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f05c0:
    // 0x1f05c0: 0xc469001c  lwc1        $f9, 0x1C($v1)
    ctx->pc = 0x1f05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f05c4:
    // 0x1f05c4: 0xe7aa0088  swc1        $f10, 0x88($sp)
    ctx->pc = 0x1f05c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f05c8:
    // 0x1f05c8: 0xc4680020  lwc1        $f8, 0x20($v1)
    ctx->pc = 0x1f05c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f05cc:
    // 0x1f05cc: 0xe7a9008c  swc1        $f9, 0x8C($sp)
    ctx->pc = 0x1f05ccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f05d0:
    // 0x1f05d0: 0xc4670024  lwc1        $f7, 0x24($v1)
    ctx->pc = 0x1f05d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f05d4:
    // 0x1f05d4: 0xe7a80090  swc1        $f8, 0x90($sp)
    ctx->pc = 0x1f05d4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f05d8:
    // 0x1f05d8: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f05dc:
    // 0x1f05dc: 0xe7a70094  swc1        $f7, 0x94($sp)
    ctx->pc = 0x1f05dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f05e0:
    // 0x1f05e0: 0xc465002c  lwc1        $f5, 0x2C($v1)
    ctx->pc = 0x1f05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f05e4:
    // 0x1f05e4: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x1f05e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f05e8:
    // 0x1f05e8: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f05e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f05ec:
    // 0x1f05ec: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x1f05ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f05f0:
    // 0x1f05f0: 0xc4630034  lwc1        $f3, 0x34($v1)
    ctx->pc = 0x1f05f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f05f4:
    // 0x1f05f4: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x1f05f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f05f8:
    // 0x1f05f8: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x1f05f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f05fc:
    // 0x1f05fc: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x1f05fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f0600:
    // 0x1f0600: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f0600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0604:
    // 0x1f0604: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x1f0604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f0608:
    // 0x1f0608: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x1f0608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1f060c:
    // 0x1f060c: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x1f060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f0610:
    // 0x1f0610: 0xc7ab0070  lwc1        $f11, 0x70($sp)
    ctx->pc = 0x1f0610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f0614:
    // 0x1f0614: 0xc7aa0080  lwc1        $f10, 0x80($sp)
    ctx->pc = 0x1f0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f0618:
    // 0x1f0618: 0xc7a900a0  lwc1        $f9, 0xA0($sp)
    ctx->pc = 0x1f0618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f061c:
    // 0x1f061c: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x1f061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f0620:
    // 0x1f0620: 0xc7a70074  lwc1        $f7, 0x74($sp)
    ctx->pc = 0x1f0620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f0624:
    // 0x1f0624: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x1f0624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f0628:
    // 0x1f0628: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x1f0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f062c:
    // 0x1f062c: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x1f062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f0630:
    // 0x1f0630: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1f0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f0634:
    // 0x1f0634: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1f0634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0638:
    // 0x1f0638: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1f0638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f063c:
    // 0x1f063c: 0xc48e0004  lwc1        $f14, 0x4($a0)
    ctx->pc = 0x1f063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f0640:
    // 0x1f0640: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f0640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f0644:
    // 0x1f0644: 0xc48f0000  lwc1        $f15, 0x0($a0)
    ctx->pc = 0x1f0644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f0648:
    // 0x1f0648: 0xc48d0008  lwc1        $f13, 0x8($a0)
    ctx->pc = 0x1f0648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f064c:
    // 0x1f064c: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1f064cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1f0650:
    // 0x1f0650: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1f0650u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1f0654:
    // 0x1f0654: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1f0654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1f0658:
    // 0x1f0658: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x1f0658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_1f065c:
    // 0x1f065c: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1f065cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1f0660:
    // 0x1f0660: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1f0660u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1f0664:
    // 0x1f0664: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f0664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f0668:
    // 0x1f0668: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1f0668u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1f066c:
    // 0x1f066c: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1f066cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1f0670:
    // 0x1f0670: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1f0670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1f0674:
    // 0x1f0674: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1f0674u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1f0678:
    // 0x1f0678: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1f0678u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1f067c:
    // 0x1f067c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f0680:
    // 0x1f0680: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1f0680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1f0684:
    // 0x1f0684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f0688:
    // 0x1f0688: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f0688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f068c:
    // 0x1f068c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f068cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f0690:
    // 0x1f0690: 0x4a1ffea  bgez        $a1, . + 4 + (-0x16 << 2)
label_1f0694:
    if (ctx->pc == 0x1F0694u) {
        ctx->pc = 0x1F0694u;
            // 0x1f0694: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->pc = 0x1F0698u;
        goto label_1f0698;
    }
    ctx->pc = 0x1F0690u;
    {
        const bool branch_taken_0x1f0690 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1F0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0690u;
            // 0x1f0694: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0690) {
            ctx->pc = 0x1F063Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f063c;
        }
    }
    ctx->pc = 0x1F0698u;
label_1f0698:
    // 0x1f0698: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x1f0698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f069c:
    // 0x1f069c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f069cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f06a0:
    // 0x1f06a0: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1f06a4:
    // 0x1f06a4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1f06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f06a8:
    // 0x1f06a8: 0xc097f58  jal         func_25FD60
label_1f06ac:
    if (ctx->pc == 0x1F06ACu) {
        ctx->pc = 0x1F06ACu;
            // 0x1f06ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F06B0u;
        goto label_1f06b0;
    }
    ctx->pc = 0x1F06A8u;
    SET_GPR_U32(ctx, 31, 0x1F06B0u);
    ctx->pc = 0x1F06ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06A8u;
            // 0x1f06ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FD60u;
    if (runtime->hasFunction(0x25FD60u)) {
        auto targetFn = runtime->lookupFunction(0x25FD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06B0u; }
        if (ctx->pc != 0x1F06B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FD60_0x25fd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06B0u; }
        if (ctx->pc != 0x1F06B0u) { return; }
    }
    ctx->pc = 0x1F06B0u;
label_1f06b0:
    // 0x1f06b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f06b4:
    if (ctx->pc == 0x1F06B4u) {
        ctx->pc = 0x1F06B8u;
        goto label_1f06b8;
    }
    ctx->pc = 0x1F06B0u;
    {
        const bool branch_taken_0x1f06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06b0) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F06B8u;
label_1f06b8:
    // 0x1f06b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f06b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f06bc:
    // 0x1f06bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f06bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f06c0:
    // 0x1f06c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f06c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f06c4:
    // 0x1f06c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f06c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f06c8:
    // 0x1f06c8: 0xc07bf14  jal         func_1EFC50
label_1f06cc:
    if (ctx->pc == 0x1F06CCu) {
        ctx->pc = 0x1F06CCu;
            // 0x1f06cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F06D0u;
        goto label_1f06d0;
    }
    ctx->pc = 0x1F06C8u;
    SET_GPR_U32(ctx, 31, 0x1F06D0u);
    ctx->pc = 0x1F06CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06C8u;
            // 0x1f06cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (runtime->hasFunction(0x1EFC50u)) {
        auto targetFn = runtime->lookupFunction(0x1EFC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06D0u; }
        if (ctx->pc != 0x1F06D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFC50_0x1efc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06D0u; }
        if (ctx->pc != 0x1F06D0u) { return; }
    }
    ctx->pc = 0x1F06D0u;
label_1f06d0:
    // 0x1f06d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f06d4:
    // 0x1f06d4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f06d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f06d8:
    // 0x1f06d8: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f06d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f06dc:
    // 0x1f06dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f06e0:
    // 0x1f06e0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f06e4:
    // 0x1f06e4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f06e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f06e8:
    // 0x1f06e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f06ec:
    if (ctx->pc == 0x1F06ECu) {
        ctx->pc = 0x1F06ECu;
            // 0x1f06ec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F06F0u;
        goto label_1f06f0;
    }
    ctx->pc = 0x1F06E8u;
    {
        const bool branch_taken_0x1f06e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06E8u;
            // 0x1f06ec: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06e8) {
            ctx->pc = 0x1F0718u;
            goto label_1f0718;
        }
    }
    ctx->pc = 0x1F06F0u;
label_1f06f0:
    // 0x1f06f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f06f4:
    // 0x1f06f4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1f06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1f06f8:
    // 0x1f06f8: 0x2463d618  addiu       $v1, $v1, -0x29E8
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956568));
label_1f06fc:
    // 0x1f06fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f0700:
    // 0x1f0700: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f0700u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f0704:
    // 0x1f0704: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f0704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f0708:
    // 0x1f0708: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f0708u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f070c:
    // 0x1f070c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f0710:
    // 0x1f0710: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f0710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f0714:
    // 0x1f0714: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f0714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f0718:
    // 0x1f0718: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f0718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f071c:
    // 0x1f071c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f071cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0720:
    // 0x1f0720: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f0720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0724:
    // 0x1f0724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f0724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0728:
    // 0x1f0728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f072c:
    // 0x1f072c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f072cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0730:
    // 0x1f0730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0734:
    // 0x1f0734: 0x3e00008  jr          $ra
label_1f0738:
    if (ctx->pc == 0x1F0738u) {
        ctx->pc = 0x1F0738u;
            // 0x1f0738: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->pc = 0x1F073Cu;
        goto label_1f073c;
    }
    ctx->pc = 0x1F0734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0734u;
            // 0x1f0738: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F073Cu;
label_1f073c:
    // 0x1f073c: 0x0  nop
    ctx->pc = 0x1f073cu;
    // NOP
label_1f0740:
    // 0x1f0740: 0x3e00008  jr          $ra
label_1f0744:
    if (ctx->pc == 0x1F0744u) {
        ctx->pc = 0x1F0748u;
        goto label_1f0748;
    }
    ctx->pc = 0x1F0740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0748u;
label_1f0748:
    // 0x1f0748: 0x0  nop
    ctx->pc = 0x1f0748u;
    // NOP
label_1f074c:
    // 0x1f074c: 0x0  nop
    ctx->pc = 0x1f074cu;
    // NOP
label_1f0750:
    // 0x1f0750: 0x3e00008  jr          $ra
label_1f0754:
    if (ctx->pc == 0x1F0754u) {
        ctx->pc = 0x1F0758u;
        goto label_1f0758;
    }
    ctx->pc = 0x1F0750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0758u;
label_1f0758:
    // 0x1f0758: 0x0  nop
    ctx->pc = 0x1f0758u;
    // NOP
label_1f075c:
    // 0x1f075c: 0x0  nop
    ctx->pc = 0x1f075cu;
    // NOP
label_1f0760:
    // 0x1f0760: 0x3e00008  jr          $ra
label_1f0764:
    if (ctx->pc == 0x1F0764u) {
        ctx->pc = 0x1F0768u;
        goto label_1f0768;
    }
    ctx->pc = 0x1F0760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0768u;
label_1f0768:
    // 0x1f0768: 0x0  nop
    ctx->pc = 0x1f0768u;
    // NOP
label_1f076c:
    // 0x1f076c: 0x0  nop
    ctx->pc = 0x1f076cu;
    // NOP
label_1f0770:
    // 0x1f0770: 0x3e00008  jr          $ra
label_1f0774:
    if (ctx->pc == 0x1F0774u) {
        ctx->pc = 0x1F0778u;
        goto label_1f0778;
    }
    ctx->pc = 0x1F0770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0778u;
label_1f0778:
    // 0x1f0778: 0x0  nop
    ctx->pc = 0x1f0778u;
    // NOP
label_1f077c:
    // 0x1f077c: 0x0  nop
    ctx->pc = 0x1f077cu;
    // NOP
label_1f0780:
    // 0x1f0780: 0x3e00008  jr          $ra
label_1f0784:
    if (ctx->pc == 0x1F0784u) {
        ctx->pc = 0x1F0788u;
        goto label_1f0788;
    }
    ctx->pc = 0x1F0780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0788u;
label_1f0788:
    // 0x1f0788: 0x0  nop
    ctx->pc = 0x1f0788u;
    // NOP
label_1f078c:
    // 0x1f078c: 0x0  nop
    ctx->pc = 0x1f078cu;
    // NOP
label_1f0790:
    // 0x1f0790: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1f0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_1f0794:
    // 0x1f0794: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f0794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f0798:
    // 0x1f0798: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f079c:
    // 0x1f079c: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1f079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_1f07a0:
    // 0x1f07a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f07a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f07a4:
    // 0x1f07a4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x1f07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_1f07a8:
    // 0x1f07a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f07a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f07ac:
    // 0x1f07ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f07acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f07b0:
    // 0x1f07b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f07b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f07b4:
    // 0x1f07b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f07b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f07b8:
    // 0x1f07b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f07b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f07bc:
    // 0x1f07bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f07bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f07c0:
    // 0x1f07c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f07c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f07c4:
    // 0x1f07c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f07c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f07c8:
    // 0x1f07c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f07c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f07cc:
    // 0x1f07cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f07ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f07d0:
    // 0x1f07d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f07d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f07d4:
    // 0x1f07d4: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x1f07d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1f07d8:
    // 0x1f07d8: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1f07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_1f07dc:
    // 0x1f07dc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1f07dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f07e0:
    // 0x1f07e0: 0x3462ffee  ori         $v0, $v1, 0xFFEE
    ctx->pc = 0x1f07e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_1f07e4:
    // 0x1f07e4: 0xa3a001d8  sb          $zero, 0x1D8($sp)
    ctx->pc = 0x1f07e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 0));
label_1f07e8:
    // 0x1f07e8: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x1f07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_1f07ec:
    // 0x1f07ec: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x1f07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_1f07f0:
    // 0x1f07f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f07f4:
    // 0x1f07f4: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x1f07f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_1f07f8:
    // 0x1f07f8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1f07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f07fc:
    // 0x1f07fc: 0xe7a101b4  swc1        $f1, 0x1B4($sp)
    ctx->pc = 0x1f07fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_1f0800:
    // 0x1f0800: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1f0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1f0804:
    // 0x1f0804: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x1f0804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_1f0808:
    // 0x1f0808: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1f0808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1f080c:
    // 0x1f080c: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x1f080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_1f0810:
    // 0x1f0810: 0x80e20010  lb          $v0, 0x10($a3)
    ctx->pc = 0x1f0810u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1f0814:
    // 0x1f0814: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x1f0814u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
label_1f0818:
    // 0x1f0818: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x1f0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f081c:
    // 0x1f081c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f081cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f0820:
    // 0x1f0820: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1f0820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_1f0824:
    // 0x1f0824: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f0824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0828:
    // 0x1f0828: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f0828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f082c:
    // 0x1f082c: 0x320f809  jalr        $t9
label_1f0830:
    if (ctx->pc == 0x1F0830u) {
        ctx->pc = 0x1F0830u;
            // 0x1f0830: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1F0834u;
        goto label_1f0834;
    }
    ctx->pc = 0x1F082Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0834u);
        ctx->pc = 0x1F0830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F082Cu;
            // 0x1f0830: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0834u; }
            if (ctx->pc != 0x1F0834u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0834u;
label_1f0834:
    // 0x1f0834: 0x83a301d8  lb          $v1, 0x1D8($sp)
    ctx->pc = 0x1f0834u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_1f0838:
    // 0x1f0838: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1f083c:
    if (ctx->pc == 0x1F083Cu) {
        ctx->pc = 0x1F083Cu;
            // 0x1f083c: 0xc7a201e0  lwc1        $f2, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x1F0840u;
        goto label_1f0840;
    }
    ctx->pc = 0x1F0838u;
    {
        const bool branch_taken_0x1f0838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0838) {
            ctx->pc = 0x1F083Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0838u;
            // 0x1f083c: 0xc7a201e0  lwc1        $f2, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0850u;
            goto label_1f0850;
        }
    }
    ctx->pc = 0x1F0840u;
label_1f0840:
    // 0x1f0840: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0844:
    // 0x1f0844: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0848:
    // 0x1f0848: 0x10000146  b           . + 4 + (0x146 << 2)
label_1f084c:
    if (ctx->pc == 0x1F084Cu) {
        ctx->pc = 0x1F084Cu;
            // 0x1f084c: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0850u;
        goto label_1f0850;
    }
    ctx->pc = 0x1F0848u;
    {
        const bool branch_taken_0x1f0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0848u;
            // 0x1f084c: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0848) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F0850u;
label_1f0850:
    // 0x1f0850: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x1f0850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1f0854:
    // 0x1f0854: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x1f0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0858:
    // 0x1f0858: 0xafb401a0  sw          $s4, 0x1A0($sp)
    ctx->pc = 0x1f0858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 20));
label_1f085c:
    // 0x1f085c: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1f085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0860:
    // 0x1f0860: 0xafb601a4  sw          $s6, 0x1A4($sp)
    ctx->pc = 0x1f0860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 22));
label_1f0864:
    // 0x1f0864: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x1f0864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f0868:
    // 0x1f0868: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x1f0868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f086c:
    // 0x1f086c: 0xc7a201ec  lwc1        $f2, 0x1EC($sp)
    ctx->pc = 0x1f086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0870:
    // 0x1f0870: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1f0870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f0874:
    // 0x1f0874: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x1f0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0878:
    // 0x1f0878: 0xe7a2018c  swc1        $f2, 0x18C($sp)
    ctx->pc = 0x1f0878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1f087c:
    // 0x1f087c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x1f087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0880:
    // 0x1f0880: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x1f0880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f0884:
    // 0x1f0884: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x1f0884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0888:
    // 0x1f0888: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1f0888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_1f088c:
    // 0x1f088c: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x1f088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0890:
    // 0x1f0890: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1f0890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1f0894:
    // 0x1f0894: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x1f0894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f0898:
    // 0x1f0898: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1f0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f089c:
    // 0x1f089c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f089cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f08a0:
    // 0x1f08a0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1f08a4:
    if (ctx->pc == 0x1F08A4u) {
        ctx->pc = 0x1F08A4u;
            // 0x1f08a4: 0x2471001c  addiu       $s1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->pc = 0x1F08A8u;
        goto label_1f08a8;
    }
    ctx->pc = 0x1F08A0u;
    {
        const bool branch_taken_0x1f08a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F08A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08A0u;
            // 0x1f08a4: 0x2471001c  addiu       $s1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08a0) {
            ctx->pc = 0x1F08C4u;
            goto label_1f08c4;
        }
    }
    ctx->pc = 0x1F08A8u;
label_1f08a8:
    // 0x1f08a8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1f08ac:
    if (ctx->pc == 0x1F08ACu) {
        ctx->pc = 0x1F08ACu;
            // 0x1f08ac: 0xc7a101f4  lwc1        $f1, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1F08B0u;
        goto label_1f08b0;
    }
    ctx->pc = 0x1F08A8u;
    {
        const bool branch_taken_0x1f08a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08a8) {
            ctx->pc = 0x1F08ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08A8u;
            // 0x1f08ac: 0xc7a101f4  lwc1        $f1, 0x1F4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F08C8u;
            goto label_1f08c8;
        }
    }
    ctx->pc = 0x1F08B0u;
label_1f08b0:
    // 0x1f08b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1f08b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f08b4:
    // 0x1f08b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f08b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f08b8:
    // 0x1f08b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f08b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f08bc:
    // 0x1f08bc: 0x320f809  jalr        $t9
label_1f08c0:
    if (ctx->pc == 0x1F08C0u) {
        ctx->pc = 0x1F08C0u;
            // 0x1f08c0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F08C4u;
        goto label_1f08c4;
    }
    ctx->pc = 0x1F08BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F08C4u);
        ctx->pc = 0x1F08C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08BCu;
            // 0x1f08c0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F08C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F08C4u; }
            if (ctx->pc != 0x1F08C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F08C4u;
label_1f08c4:
    // 0x1f08c4: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x1f08c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f08c8:
    // 0x1f08c8: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x1f08c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f08cc:
    // 0x1f08cc: 0xc7a401f0  lwc1        $f4, 0x1F0($sp)
    ctx->pc = 0x1f08ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f08d0:
    // 0x1f08d0: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x1f08d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f08d4:
    // 0x1f08d4: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x1f08d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1f08d8:
    // 0x1f08d8: 0xc7a601f8  lwc1        $f6, 0x1F8($sp)
    ctx->pc = 0x1f08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f08dc:
    // 0x1f08dc: 0xc6650028  lwc1        $f5, 0x28($s3)
    ctx->pc = 0x1f08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f08e0:
    // 0x1f08e0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x1f08e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_1f08e4:
    // 0x1f08e4: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x1f08e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f08e8:
    // 0x1f08e8: 0x4605309c  madd.s      $f2, $f6, $f5
    ctx->pc = 0x1f08e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1f08ec:
    // 0x1f08ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f08ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f08f0:
    // 0x1f08f0: 0x0  nop
    ctx->pc = 0x1f08f0u;
    // NOP
label_1f08f4:
    // 0x1f08f4: 0x46023840  add.s       $f1, $f7, $f2
    ctx->pc = 0x1f08f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_1f08f8:
    // 0x1f08f8: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x1f08f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f08fc:
    // 0x1f08fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f0900:
    if (ctx->pc == 0x1F0900u) {
        ctx->pc = 0x1F0900u;
            // 0x1f0900: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x1F0904u;
        goto label_1f0904;
    }
    ctx->pc = 0x1F08FCu;
    {
        const bool branch_taken_0x1f08fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08FCu;
            // 0x1f0900: 0x26700020  addiu       $s0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08fc) {
            ctx->pc = 0x1F0914u;
            goto label_1f0914;
        }
    }
    ctx->pc = 0x1F0904u;
label_1f0904:
    // 0x1f0904: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0908:
    // 0x1f0908: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f090c:
    // 0x1f090c: 0x10000115  b           . + 4 + (0x115 << 2)
label_1f0910:
    if (ctx->pc == 0x1F0910u) {
        ctx->pc = 0x1F0910u;
            // 0x1f0910: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0914u;
        goto label_1f0914;
    }
    ctx->pc = 0x1F090Cu;
    {
        const bool branch_taken_0x1f090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F090Cu;
            // 0x1f0910: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f090c) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F0914u;
label_1f0914:
    // 0x1f0914: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x1f0914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0918:
    // 0x1f0918: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1f0918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f091c:
    // 0x1f091c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1f091cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0920:
    // 0x1f0920: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1f0924:
    if (ctx->pc == 0x1F0924u) {
        ctx->pc = 0x1F0924u;
            // 0x1f0924: 0x8e630038  lw          $v1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->pc = 0x1F0928u;
        goto label_1f0928;
    }
    ctx->pc = 0x1F0920u;
    {
        const bool branch_taken_0x1f0920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0920) {
            ctx->pc = 0x1F0924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0920u;
            // 0x1f0924: 0x8e630038  lw          $v1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0938u;
            goto label_1f0938;
        }
    }
    ctx->pc = 0x1F0928u;
label_1f0928:
    // 0x1f0928: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f092c:
    // 0x1f092c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0930:
    // 0x1f0930: 0x1000010c  b           . + 4 + (0x10C << 2)
label_1f0934:
    if (ctx->pc == 0x1F0934u) {
        ctx->pc = 0x1F0934u;
            // 0x1f0934: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0938u;
        goto label_1f0938;
    }
    ctx->pc = 0x1F0930u;
    {
        const bool branch_taken_0x1f0930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0930u;
            // 0x1f0934: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0930) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F0938u;
label_1f0938:
    // 0x1f0938: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f093c:
    // 0x1f093c: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x1f093cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0940:
    // 0x1f0940: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
label_1f0944:
    if (ctx->pc == 0x1F0944u) {
        ctx->pc = 0x1F0944u;
            // 0x1f0944: 0x46013801  sub.s       $f0, $f7, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
        ctx->pc = 0x1F0948u;
        goto label_1f0948;
    }
    ctx->pc = 0x1F0940u;
    {
        const bool branch_taken_0x1f0940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0940) {
            ctx->pc = 0x1F0944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0940u;
            // 0x1f0944: 0x46013801  sub.s       $f0, $f7, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F09A8u;
            goto label_1f09a8;
        }
    }
    ctx->pc = 0x1F0948u;
label_1f0948:
    // 0x1f0948: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x1f0948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f094c:
    // 0x1f094c: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_1f0950:
    if (ctx->pc == 0x1F0950u) {
        ctx->pc = 0x1F0950u;
            // 0x1f0950: 0xe7a3019c  swc1        $f3, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x1F0954u;
        goto label_1f0954;
    }
    ctx->pc = 0x1F094Cu;
    {
        const bool branch_taken_0x1f094c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f094c) {
            ctx->pc = 0x1F0950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F094Cu;
            // 0x1f0950: 0xe7a3019c  swc1        $f3, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0984u;
            goto label_1f0984;
        }
    }
    ctx->pc = 0x1F0954u;
label_1f0954:
    // 0x1f0954: 0x46013801  sub.s       $f0, $f7, $f1
    ctx->pc = 0x1f0954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_1f0958:
    // 0x1f0958: 0x0  nop
    ctx->pc = 0x1f0958u;
    // NOP
label_1f095c:
    // 0x1f095c: 0x46003843  div.s       $f1, $f7, $f0
    ctx->pc = 0x1f095cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[1] = ctx->f[7] / ctx->f[0];
label_1f0960:
    // 0x1f0960: 0x0  nop
    ctx->pc = 0x1f0960u;
    // NOP
label_1f0964:
    // 0x1f0964: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f0964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0968:
    // 0x1f0968: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f096c:
    // 0x1f096c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1f0970:
    if (ctx->pc == 0x1F0970u) {
        ctx->pc = 0x1F0970u;
            // 0x1f0970: 0xe7a1019c  swc1        $f1, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->pc = 0x1F0974u;
        goto label_1f0974;
    }
    ctx->pc = 0x1F096Cu;
    {
        const bool branch_taken_0x1f096c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f096c) {
            ctx->pc = 0x1F0970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F096Cu;
            // 0x1f0970: 0xe7a1019c  swc1        $f1, 0x19C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0984u;
            goto label_1f0984;
        }
    }
    ctx->pc = 0x1F0974u;
label_1f0974:
    // 0x1f0974: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0978:
    // 0x1f0978: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f097c:
    // 0x1f097c: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_1f0980:
    if (ctx->pc == 0x1F0980u) {
        ctx->pc = 0x1F0980u;
            // 0x1f0980: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0984u;
        goto label_1f0984;
    }
    ctx->pc = 0x1F097Cu;
    {
        const bool branch_taken_0x1f097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F097Cu;
            // 0x1f0980: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f097c) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F0984u;
label_1f0984:
    // 0x1f0984: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f0984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f0988:
    // 0x1f0988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f098c:
    // 0x1f098c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f098cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f0990:
    // 0x1f0990: 0x320f809  jalr        $t9
label_1f0994:
    if (ctx->pc == 0x1F0994u) {
        ctx->pc = 0x1F0994u;
            // 0x1f0994: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F0998u;
        goto label_1f0998;
    }
    ctx->pc = 0x1F0990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0998u);
        ctx->pc = 0x1F0994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0990u;
            // 0x1f0994: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0998u; }
            if (ctx->pc != 0x1F0998u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0998u;
label_1f0998:
    // 0x1f0998: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f099c:
    // 0x1f099c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f09a0:
    // 0x1f09a0: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_1f09a4:
    if (ctx->pc == 0x1F09A4u) {
        ctx->pc = 0x1F09A4u;
            // 0x1f09a4: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F09A8u;
        goto label_1f09a8;
    }
    ctx->pc = 0x1F09A0u;
    {
        const bool branch_taken_0x1f09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F09A0u;
            // 0x1f09a4: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09a0) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F09A8u;
label_1f09a8:
    // 0x1f09a8: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x1f09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_1f09ac:
    // 0x1f09ac: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x1f09acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_1f09b0:
    // 0x1f09b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f09b4:
    // 0x1f09b4: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1f09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_1f09b8:
    // 0x1f09b8: 0xa3a00158  sb          $zero, 0x158($sp)
    ctx->pc = 0x1f09b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 344), (uint8_t)GPR_U32(ctx, 0));
label_1f09bc:
    // 0x1f09bc: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1f09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_1f09c0:
    // 0x1f09c0: 0x46003803  div.s       $f0, $f7, $f0
    ctx->pc = 0x1f09c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[0] = ctx->f[7] / ctx->f[0];
label_1f09c4:
    // 0x1f09c4: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x1f09c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
label_1f09c8:
    // 0x1f09c8: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x1f09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
label_1f09cc:
    // 0x1f09cc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1f09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f09d0:
    // 0x1f09d0: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x1f09d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f09d4:
    // 0x1f09d4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1f09d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f09d8:
    // 0x1f09d8: 0xc48f0004  lwc1        $f15, 0x4($a0)
    ctx->pc = 0x1f09d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f09dc:
    // 0x1f09dc: 0xc48e0008  lwc1        $f14, 0x8($a0)
    ctx->pc = 0x1f09dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f09e0:
    // 0x1f09e0: 0xc48d000c  lwc1        $f13, 0xC($a0)
    ctx->pc = 0x1f09e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f09e4:
    // 0x1f09e4: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x1f09e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f09e8:
    // 0x1f09e8: 0xc48b0014  lwc1        $f11, 0x14($a0)
    ctx->pc = 0x1f09e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f09ec:
    // 0x1f09ec: 0xc48a0018  lwc1        $f10, 0x18($a0)
    ctx->pc = 0x1f09ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f09f0:
    // 0x1f09f0: 0xc489001c  lwc1        $f9, 0x1C($a0)
    ctx->pc = 0x1f09f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f09f4:
    // 0x1f09f4: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x1f09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f09f8:
    // 0x1f09f8: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x1f09f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f09fc:
    // 0x1f09fc: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x1f09fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f0a00:
    // 0x1f0a00: 0xc485002c  lwc1        $f5, 0x2C($a0)
    ctx->pc = 0x1f0a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f0a04:
    // 0x1f0a04: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x1f0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f0a08:
    // 0x1f0a08: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x1f0a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f0a0c:
    // 0x1f0a0c: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x1f0a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0a10:
    // 0x1f0a10: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x1f0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0a14:
    // 0x1f0a14: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f0a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a18:
    // 0x1f0a18: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f0a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1f0a1c:
    // 0x1f0a1c: 0xe7af0094  swc1        $f15, 0x94($sp)
    ctx->pc = 0x1f0a1cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1f0a20:
    // 0x1f0a20: 0xe7ae0098  swc1        $f14, 0x98($sp)
    ctx->pc = 0x1f0a20u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1f0a24:
    // 0x1f0a24: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x1f0a24u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1f0a28:
    // 0x1f0a28: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x1f0a28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1f0a2c:
    // 0x1f0a2c: 0xe7ab00a4  swc1        $f11, 0xA4($sp)
    ctx->pc = 0x1f0a2cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1f0a30:
    // 0x1f0a30: 0xe7aa00a8  swc1        $f10, 0xA8($sp)
    ctx->pc = 0x1f0a30u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1f0a34:
    // 0x1f0a34: 0xe7a900ac  swc1        $f9, 0xAC($sp)
    ctx->pc = 0x1f0a34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1f0a38:
    // 0x1f0a38: 0xe7a800b0  swc1        $f8, 0xB0($sp)
    ctx->pc = 0x1f0a38u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f0a3c:
    // 0x1f0a3c: 0xe7a700b4  swc1        $f7, 0xB4($sp)
    ctx->pc = 0x1f0a3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1f0a40:
    // 0x1f0a40: 0xe7a600b8  swc1        $f6, 0xB8($sp)
    ctx->pc = 0x1f0a40u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f0a44:
    // 0x1f0a44: 0xe7a500bc  swc1        $f5, 0xBC($sp)
    ctx->pc = 0x1f0a44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1f0a48:
    // 0x1f0a48: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x1f0a48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f0a4c:
    // 0x1f0a4c: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x1f0a4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f0a50:
    // 0x1f0a50: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1f0a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f0a54:
    // 0x1f0a54: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x1f0a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f0a58:
    // 0x1f0a58: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x1f0a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a5c:
    // 0x1f0a5c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1f0a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1f0a60:
    // 0x1f0a60: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x1f0a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a64:
    // 0x1f0a64: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1f0a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1f0a68:
    // 0x1f0a68: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x1f0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a6c:
    // 0x1f0a6c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1f0a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f0a70:
    // 0x1f0a70: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1f0a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a74:
    // 0x1f0a74: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1f0a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1f0a78:
    // 0x1f0a78: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x1f0a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a7c:
    // 0x1f0a7c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1f0a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1f0a80:
    // 0x1f0a80: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1f0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a84:
    // 0x1f0a84: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1f0a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1f0a88:
    // 0x1f0a88: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x1f0a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a8c:
    // 0x1f0a8c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1f0a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1f0a90:
    // 0x1f0a90: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x1f0a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a94:
    // 0x1f0a94: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1f0a98:
    // 0x1f0a98: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x1f0a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a9c:
    // 0x1f0a9c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1f0a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1f0aa0:
    // 0x1f0aa0: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x1f0aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0aa4:
    // 0x1f0aa4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1f0aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1f0aa8:
    // 0x1f0aa8: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x1f0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0aac:
    // 0x1f0aac: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1f0aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1f0ab0:
    // 0x1f0ab0: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x1f0ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ab4:
    // 0x1f0ab4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1f0ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1f0ab8:
    // 0x1f0ab8: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x1f0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0abc:
    // 0x1f0abc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f0abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1f0ac0:
    // 0x1f0ac0: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x1f0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ac4:
    // 0x1f0ac4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f0ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1f0ac8:
    // 0x1f0ac8: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x1f0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0acc:
    // 0x1f0acc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f0accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1f0ad0:
    // 0x1f0ad0: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x1f0ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ad4:
    // 0x1f0ad4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f0ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1f0ad8:
    // 0x1f0ad8: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x1f0ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0adc:
    // 0x1f0adc: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f0adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1f0ae0:
    // 0x1f0ae0: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1f0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0ae4:
    // 0x1f0ae4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1f0ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1f0ae8:
    // 0x1f0ae8: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f0ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0aec:
    // 0x1f0aec: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1f0aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1f0af0:
    // 0x1f0af0: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f0af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0af4:
    // 0x1f0af4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1f0af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1f0af8:
    // 0x1f0af8: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x1f0af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0afc:
    // 0x1f0afc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f0afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1f0b00:
    // 0x1f0b00: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x1f0b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b04:
    // 0x1f0b04: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f0b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1f0b08:
    // 0x1f0b08: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1f0b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b0c:
    // 0x1f0b0c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f0b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1f0b10:
    // 0x1f0b10: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x1f0b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b14:
    // 0x1f0b14: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f0b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1f0b18:
    // 0x1f0b18: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x1f0b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b1c:
    // 0x1f0b1c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1f0b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f0b20:
    // 0x1f0b20: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x1f0b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b24:
    // 0x1f0b24: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f0b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1f0b28:
    // 0x1f0b28: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x1f0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b2c:
    // 0x1f0b2c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f0b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f0b30:
    // 0x1f0b30: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x1f0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b34:
    // 0x1f0b34: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f0b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1f0b38:
    // 0x1f0b38: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x1f0b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b3c:
    // 0x1f0b3c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1f0b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f0b40:
    // 0x1f0b40: 0x948300b4  lhu         $v1, 0xB4($a0)
    ctx->pc = 0x1f0b40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 180)));
label_1f0b44:
    // 0x1f0b44: 0xa7a30144  sh          $v1, 0x144($sp)
    ctx->pc = 0x1f0b44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 324), (uint16_t)GPR_U32(ctx, 3));
label_1f0b48:
    // 0x1f0b48: 0x948300b6  lhu         $v1, 0xB6($a0)
    ctx->pc = 0x1f0b48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 182)));
label_1f0b4c:
    // 0x1f0b4c: 0xa7a30146  sh          $v1, 0x146($sp)
    ctx->pc = 0x1f0b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 326), (uint16_t)GPR_U32(ctx, 3));
label_1f0b50:
    // 0x1f0b50: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x1f0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0b54:
    // 0x1f0b54: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x1f0b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0b58:
    // 0x1f0b58: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x1f0b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f0b5c:
    // 0x1f0b5c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1f0b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1f0b60:
    // 0x1f0b60: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1f0b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1f0b64:
    // 0x1f0b64: 0xafb4008c  sw          $s4, 0x8C($sp)
    ctx->pc = 0x1f0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 20));
label_1f0b68:
    // 0x1f0b68: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f0b6c:
    // 0x1f0b6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1f0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1f0b70:
    // 0x1f0b70: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1f0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_1f0b74:
    // 0x1f0b74: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1f0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_1f0b78:
    // 0x1f0b78: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1f0b7c:
    // 0x1f0b7c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f0b80:
    // 0x1f0b80: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1f0b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f0b84:
    // 0x1f0b84: 0x620006c  bltz        $s1, . + 4 + (0x6C << 2)
label_1f0b88:
    if (ctx->pc == 0x1F0B88u) {
        ctx->pc = 0x1F0B8Cu;
        goto label_1f0b8c;
    }
    ctx->pc = 0x1F0B84u;
    {
        const bool branch_taken_0x1f0b84 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1f0b84) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0B8Cu;
label_1f0b8c:
    // 0x1f0b8c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1f0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1f0b90:
    // 0x1f0b90: 0xa3a00158  sb          $zero, 0x158($sp)
    ctx->pc = 0x1f0b90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 344), (uint8_t)GPR_U32(ctx, 0));
label_1f0b94:
    // 0x1f0b94: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x1f0b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1f0b98:
    // 0x1f0b98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f0b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b9c:
    // 0x1f0b9c: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x1f0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_1f0ba0:
    // 0x1f0ba0: 0xc7a7019c  lwc1        $f7, 0x19C($sp)
    ctx->pc = 0x1f0ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f0ba4:
    // 0x1f0ba4: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1f0ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1f0ba8:
    // 0x1f0ba8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1f0ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f0bac:
    // 0x1f0bac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1f0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f0bb0:
    // 0x1f0bb0: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x1f0bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f0bb4:
    // 0x1f0bb4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1f0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f0bb8:
    // 0x1f0bb8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1f0bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f0bbc:
    // 0x1f0bbc: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1f0bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0bc0:
    // 0x1f0bc0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1f0bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f0bc4:
    // 0x1f0bc4: 0xc4450034  lwc1        $f5, 0x34($v0)
    ctx->pc = 0x1f0bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f0bc8:
    // 0x1f0bc8: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1f0bcc:
    // 0x1f0bcc: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1f0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0bd0:
    // 0x1f0bd0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f0bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0bd4:
    // 0x1f0bd4: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x1f0bd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_1f0bd8:
    // 0x1f0bd8: 0x4606395c  madd.s      $f5, $f7, $f6
    ctx->pc = 0x1f0bd8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
label_1f0bdc:
    // 0x1f0bdc: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x1f0bdcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1f0be0:
    // 0x1f0be0: 0x460338dc  madd.s      $f3, $f7, $f3
    ctx->pc = 0x1f0be0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_1f0be4:
    // 0x1f0be4: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x1f0be4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1f0be8:
    // 0x1f0be8: 0x4601389c  madd.s      $f2, $f7, $f1
    ctx->pc = 0x1f0be8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
label_1f0bec:
    // 0x1f0bec: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1f0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0bf0:
    // 0x1f0bf0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1f0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0bf4:
    // 0x1f0bf4: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x1f0bf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1f0bf8:
    // 0x1f0bf8: 0x4601381c  madd.s      $f0, $f7, $f1
    ctx->pc = 0x1f0bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
label_1f0bfc:
    // 0x1f0bfc: 0xe7a500c4  swc1        $f5, 0xC4($sp)
    ctx->pc = 0x1f0bfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1f0c00:
    // 0x1f0c00: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f0c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1f0c04:
    // 0x1f0c04: 0xe7a300c8  swc1        $f3, 0xC8($sp)
    ctx->pc = 0x1f0c04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1f0c08:
    // 0x1f0c08: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x1f0c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1f0c0c:
    // 0x1f0c0c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1f0c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0c10:
    // 0x1f0c10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f0c14:
    // 0x1f0c14: 0x320f809  jalr        $t9
label_1f0c18:
    if (ctx->pc == 0x1F0C18u) {
        ctx->pc = 0x1F0C18u;
            // 0x1f0c18: 0x27a80150  addiu       $t0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1F0C1Cu;
        goto label_1f0c1c;
    }
    ctx->pc = 0x1F0C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0C1Cu);
        ctx->pc = 0x1F0C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C14u;
            // 0x1f0c18: 0x27a80150  addiu       $t0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0C1Cu; }
            if (ctx->pc != 0x1F0C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F0C1Cu;
label_1f0c1c:
    // 0x1f0c1c: 0xc7a20174  lwc1        $f2, 0x174($sp)
    ctx->pc = 0x1f0c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0c20:
    // 0x1f0c20: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1f0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0c24:
    // 0x1f0c24: 0xc7a40170  lwc1        $f4, 0x170($sp)
    ctx->pc = 0x1f0c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f0c28:
    // 0x1f0c28: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x1f0c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f0c2c:
    // 0x1f0c2c: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x1f0c2cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1f0c30:
    // 0x1f0c30: 0xc7a60178  lwc1        $f6, 0x178($sp)
    ctx->pc = 0x1f0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f0c34:
    // 0x1f0c34: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x1f0c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f0c38:
    // 0x1f0c38: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x1f0c38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1f0c3c:
    // 0x1f0c3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f0c40:
    // 0x1f0c40: 0x4605305c  madd.s      $f1, $f6, $f5
    ctx->pc = 0x1f0c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
label_1f0c44:
    // 0x1f0c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f0c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0c48:
    // 0x1f0c48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1f0c4c:
    if (ctx->pc == 0x1F0C4Cu) {
        ctx->pc = 0x1F0C4Cu;
            // 0x1f0c4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F0C50u;
        goto label_1f0c50;
    }
    ctx->pc = 0x1F0C48u;
    {
        const bool branch_taken_0x1f0c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C48u;
            // 0x1f0c4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c48) {
            ctx->pc = 0x1F0C54u;
            goto label_1f0c54;
        }
    }
    ctx->pc = 0x1F0C50u;
label_1f0c50:
    // 0x1f0c50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f0c50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c54:
    // 0x1f0c54: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1f0c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1f0c58:
    // 0x1f0c58: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1f0c5c:
    if (ctx->pc == 0x1F0C5Cu) {
        ctx->pc = 0x1F0C5Cu;
            // 0x1f0c5c: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->pc = 0x1F0C60u;
        goto label_1f0c60;
    }
    ctx->pc = 0x1F0C58u;
    {
        const bool branch_taken_0x1f0c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c58) {
            ctx->pc = 0x1F0C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C58u;
            // 0x1f0c5c: 0x46000887  neg.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C74u;
            goto label_1f0c74;
        }
    }
    ctx->pc = 0x1F0C60u;
label_1f0c60:
    // 0x1f0c60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0c64:
    // 0x1f0c64: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0c68:
    // 0x1f0c68: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1f0c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1f0c6c:
    // 0x1f0c6c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1f0c70:
    if (ctx->pc == 0x1F0C70u) {
        ctx->pc = 0x1F0C70u;
            // 0x1f0c70: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0C74u;
        goto label_1f0c74;
    }
    ctx->pc = 0x1F0C6Cu;
    {
        const bool branch_taken_0x1f0c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C6Cu;
            // 0x1f0c70: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c6c) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F0C74u;
label_1f0c74:
    // 0x1f0c74: 0xc7a3017c  lwc1        $f3, 0x17C($sp)
    ctx->pc = 0x1f0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f0c78:
    // 0x1f0c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f0c7c:
    // 0x1f0c7c: 0xc7a1019c  lwc1        $f1, 0x19C($sp)
    ctx->pc = 0x1f0c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0c80:
    // 0x1f0c80: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x1f0c80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f0c84:
    // 0x1f0c84: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1f0c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_1f0c88:
    // 0x1f0c88: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1f0c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0c8c:
    // 0x1f0c8c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1f0c90:
    if (ctx->pc == 0x1F0C90u) {
        ctx->pc = 0x1F0C94u;
        goto label_1f0c94;
    }
    ctx->pc = 0x1F0C8Cu;
    {
        const bool branch_taken_0x1f0c8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0c8c) {
            ctx->pc = 0x1F0CA8u;
            goto label_1f0ca8;
        }
    }
    ctx->pc = 0x1F0C94u;
label_1f0c94:
    // 0x1f0c94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0c98:
    // 0x1f0c98: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0c9c:
    // 0x1f0c9c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1f0c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1f0ca0:
    // 0x1f0ca0: 0x10000030  b           . + 4 + (0x30 << 2)
label_1f0ca4:
    if (ctx->pc == 0x1F0CA4u) {
        ctx->pc = 0x1F0CA4u;
            // 0x1f0ca4: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0CA8u;
        goto label_1f0ca8;
    }
    ctx->pc = 0x1F0CA0u;
    {
        const bool branch_taken_0x1f0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CA0u;
            // 0x1f0ca4: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ca0) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F0CA8u;
label_1f0ca8:
    // 0x1f0ca8: 0x0  nop
    ctx->pc = 0x1f0ca8u;
    // NOP
label_1f0cac:
    // 0x1f0cac: 0x0  nop
    ctx->pc = 0x1f0cacu;
    // NOP
label_1f0cb0:
    // 0x1f0cb0: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x1f0cb0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[2];
label_1f0cb4:
    // 0x1f0cb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f0cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f0cb8:
    // 0x1f0cb8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1f0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0cbc:
    // 0x1f0cbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0cbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0cc0:
    // 0x1f0cc0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_1f0cc4:
    if (ctx->pc == 0x1F0CC4u) {
        ctx->pc = 0x1F0CC4u;
            // 0x1f0cc4: 0xc7a00168  lwc1        $f0, 0x168($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1F0CC8u;
        goto label_1f0cc8;
    }
    ctx->pc = 0x1F0CC0u;
    {
        const bool branch_taken_0x1f0cc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0cc0) {
            ctx->pc = 0x1F0CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CC0u;
            // 0x1f0cc4: 0xc7a00168  lwc1        $f0, 0x168($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CDCu;
            goto label_1f0cdc;
        }
    }
    ctx->pc = 0x1F0CC8u;
label_1f0cc8:
    // 0x1f0cc8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0ccc:
    // 0x1f0ccc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0cd0:
    // 0x1f0cd0: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1f0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1f0cd4:
    // 0x1f0cd4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1f0cd8:
    if (ctx->pc == 0x1F0CD8u) {
        ctx->pc = 0x1F0CD8u;
            // 0x1f0cd8: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x1F0CDCu;
        goto label_1f0cdc;
    }
    ctx->pc = 0x1F0CD4u;
    {
        const bool branch_taken_0x1f0cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CD4u;
            // 0x1f0cd8: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cd4) {
            ctx->pc = 0x1F0D64u;
            goto label_1f0d64;
        }
    }
    ctx->pc = 0x1F0CDCu;
label_1f0cdc:
    // 0x1f0cdc: 0xe7a3019c  swc1        $f3, 0x19C($sp)
    ctx->pc = 0x1f0cdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f0ce0:
    // 0x1f0ce0: 0xe7a1019c  swc1        $f1, 0x19C($sp)
    ctx->pc = 0x1f0ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_1f0ce4:
    // 0x1f0ce4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1f0ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1f0ce8:
    // 0x1f0ce8: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x1f0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0cec:
    // 0x1f0cec: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x1f0cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0cf0:
    // 0x1f0cf0: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x1f0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0cf4:
    // 0x1f0cf4: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x1f0cf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1f0cf8:
    // 0x1f0cf8: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x1f0cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f0cfc:
    // 0x1f0cfc: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1f0cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_1f0d00:
    // 0x1f0d00: 0xc7a2016c  lwc1        $f2, 0x16C($sp)
    ctx->pc = 0x1f0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0d04:
    // 0x1f0d04: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x1f0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0d08:
    // 0x1f0d08: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x1f0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0d0c:
    // 0x1f0d0c: 0xe7a2018c  swc1        $f2, 0x18C($sp)
    ctx->pc = 0x1f0d0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1f0d10:
    // 0x1f0d10: 0xe7a10190  swc1        $f1, 0x190($sp)
    ctx->pc = 0x1f0d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1f0d14:
    // 0x1f0d14: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1f0d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1f0d18:
    // 0x1f0d18: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1f0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1f0d1c:
    // 0x1f0d1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f0d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0d20:
    // 0x1f0d20: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f0d20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f0d24:
    // 0x1f0d24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1f0d28:
    if (ctx->pc == 0x1F0D28u) {
        ctx->pc = 0x1F0D2Cu;
        goto label_1f0d2c;
    }
    ctx->pc = 0x1F0D24u;
    {
        const bool branch_taken_0x1f0d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0d24) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0D2Cu;
label_1f0d2c:
    // 0x1f0d2c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f0d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f0d30:
    // 0x1f0d30: 0x623ff97  bgezl       $s1, . + 4 + (-0x69 << 2)
label_1f0d34:
    if (ctx->pc == 0x1F0D34u) {
        ctx->pc = 0x1F0D34u;
            // 0x1f0d34: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->pc = 0x1F0D38u;
        goto label_1f0d38;
    }
    ctx->pc = 0x1F0D30u;
    {
        const bool branch_taken_0x1f0d30 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1f0d30) {
            ctx->pc = 0x1F0D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D30u;
            // 0x1f0d34: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f0b90;
        }
    }
    ctx->pc = 0x1F0D38u;
label_1f0d38:
    // 0x1f0d38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f0d3c:
    // 0x1f0d3c: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x1f0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
label_1f0d40:
    // 0x1f0d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f0d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d44:
    // 0x1f0d44: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1f0d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_1f0d48:
    // 0x1f0d48: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f0d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f0d4c:
    // 0x1f0d4c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f0d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f0d50:
    // 0x1f0d50: 0x320f809  jalr        $t9
label_1f0d54:
    if (ctx->pc == 0x1F0D54u) {
        ctx->pc = 0x1F0D54u;
            // 0x1f0d54: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1F0D58u;
        goto label_1f0d58;
    }
    ctx->pc = 0x1F0D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F0D58u);
        ctx->pc = 0x1F0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D50u;
            // 0x1f0d54: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F0D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D58u; }
            if (ctx->pc != 0x1F0D58u) { return; }
        }
        }
    }
    ctx->pc = 0x1F0D58u;
label_1f0d58:
    // 0x1f0d58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0d5c:
    // 0x1f0d5c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1f0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1f0d60:
    // 0x1f0d60: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x1f0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
label_1f0d64:
    // 0x1f0d64: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f0d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f0d68:
    // 0x1f0d68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f0d68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f0d6c:
    // 0x1f0d6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f0d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0d70:
    // 0x1f0d70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f0d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0d74:
    // 0x1f0d74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f0d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0d78:
    // 0x1f0d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0d7c:
    // 0x1f0d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0d80:
    // 0x1f0d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0d84:
    // 0x1f0d84: 0x3e00008  jr          $ra
label_1f0d88:
    if (ctx->pc == 0x1F0D88u) {
        ctx->pc = 0x1F0D88u;
            // 0x1f0d88: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x1F0D8Cu;
        goto label_1f0d8c;
    }
    ctx->pc = 0x1F0D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D84u;
            // 0x1f0d88: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0D8Cu;
label_1f0d8c:
    // 0x1f0d8c: 0x0  nop
    ctx->pc = 0x1f0d8cu;
    // NOP
}
