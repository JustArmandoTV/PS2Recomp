#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AFFF0
// Address: 0x4afff0 - 0x4b1780
void sub_004AFFF0_0x4afff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFFF0_0x4afff0");
#endif

    switch (ctx->pc) {
        case 0x4afff0u: goto label_4afff0;
        case 0x4afff4u: goto label_4afff4;
        case 0x4afff8u: goto label_4afff8;
        case 0x4afffcu: goto label_4afffc;
        case 0x4b0000u: goto label_4b0000;
        case 0x4b0004u: goto label_4b0004;
        case 0x4b0008u: goto label_4b0008;
        case 0x4b000cu: goto label_4b000c;
        case 0x4b0010u: goto label_4b0010;
        case 0x4b0014u: goto label_4b0014;
        case 0x4b0018u: goto label_4b0018;
        case 0x4b001cu: goto label_4b001c;
        case 0x4b0020u: goto label_4b0020;
        case 0x4b0024u: goto label_4b0024;
        case 0x4b0028u: goto label_4b0028;
        case 0x4b002cu: goto label_4b002c;
        case 0x4b0030u: goto label_4b0030;
        case 0x4b0034u: goto label_4b0034;
        case 0x4b0038u: goto label_4b0038;
        case 0x4b003cu: goto label_4b003c;
        case 0x4b0040u: goto label_4b0040;
        case 0x4b0044u: goto label_4b0044;
        case 0x4b0048u: goto label_4b0048;
        case 0x4b004cu: goto label_4b004c;
        case 0x4b0050u: goto label_4b0050;
        case 0x4b0054u: goto label_4b0054;
        case 0x4b0058u: goto label_4b0058;
        case 0x4b005cu: goto label_4b005c;
        case 0x4b0060u: goto label_4b0060;
        case 0x4b0064u: goto label_4b0064;
        case 0x4b0068u: goto label_4b0068;
        case 0x4b006cu: goto label_4b006c;
        case 0x4b0070u: goto label_4b0070;
        case 0x4b0074u: goto label_4b0074;
        case 0x4b0078u: goto label_4b0078;
        case 0x4b007cu: goto label_4b007c;
        case 0x4b0080u: goto label_4b0080;
        case 0x4b0084u: goto label_4b0084;
        case 0x4b0088u: goto label_4b0088;
        case 0x4b008cu: goto label_4b008c;
        case 0x4b0090u: goto label_4b0090;
        case 0x4b0094u: goto label_4b0094;
        case 0x4b0098u: goto label_4b0098;
        case 0x4b009cu: goto label_4b009c;
        case 0x4b00a0u: goto label_4b00a0;
        case 0x4b00a4u: goto label_4b00a4;
        case 0x4b00a8u: goto label_4b00a8;
        case 0x4b00acu: goto label_4b00ac;
        case 0x4b00b0u: goto label_4b00b0;
        case 0x4b00b4u: goto label_4b00b4;
        case 0x4b00b8u: goto label_4b00b8;
        case 0x4b00bcu: goto label_4b00bc;
        case 0x4b00c0u: goto label_4b00c0;
        case 0x4b00c4u: goto label_4b00c4;
        case 0x4b00c8u: goto label_4b00c8;
        case 0x4b00ccu: goto label_4b00cc;
        case 0x4b00d0u: goto label_4b00d0;
        case 0x4b00d4u: goto label_4b00d4;
        case 0x4b00d8u: goto label_4b00d8;
        case 0x4b00dcu: goto label_4b00dc;
        case 0x4b00e0u: goto label_4b00e0;
        case 0x4b00e4u: goto label_4b00e4;
        case 0x4b00e8u: goto label_4b00e8;
        case 0x4b00ecu: goto label_4b00ec;
        case 0x4b00f0u: goto label_4b00f0;
        case 0x4b00f4u: goto label_4b00f4;
        case 0x4b00f8u: goto label_4b00f8;
        case 0x4b00fcu: goto label_4b00fc;
        case 0x4b0100u: goto label_4b0100;
        case 0x4b0104u: goto label_4b0104;
        case 0x4b0108u: goto label_4b0108;
        case 0x4b010cu: goto label_4b010c;
        case 0x4b0110u: goto label_4b0110;
        case 0x4b0114u: goto label_4b0114;
        case 0x4b0118u: goto label_4b0118;
        case 0x4b011cu: goto label_4b011c;
        case 0x4b0120u: goto label_4b0120;
        case 0x4b0124u: goto label_4b0124;
        case 0x4b0128u: goto label_4b0128;
        case 0x4b012cu: goto label_4b012c;
        case 0x4b0130u: goto label_4b0130;
        case 0x4b0134u: goto label_4b0134;
        case 0x4b0138u: goto label_4b0138;
        case 0x4b013cu: goto label_4b013c;
        case 0x4b0140u: goto label_4b0140;
        case 0x4b0144u: goto label_4b0144;
        case 0x4b0148u: goto label_4b0148;
        case 0x4b014cu: goto label_4b014c;
        case 0x4b0150u: goto label_4b0150;
        case 0x4b0154u: goto label_4b0154;
        case 0x4b0158u: goto label_4b0158;
        case 0x4b015cu: goto label_4b015c;
        case 0x4b0160u: goto label_4b0160;
        case 0x4b0164u: goto label_4b0164;
        case 0x4b0168u: goto label_4b0168;
        case 0x4b016cu: goto label_4b016c;
        case 0x4b0170u: goto label_4b0170;
        case 0x4b0174u: goto label_4b0174;
        case 0x4b0178u: goto label_4b0178;
        case 0x4b017cu: goto label_4b017c;
        case 0x4b0180u: goto label_4b0180;
        case 0x4b0184u: goto label_4b0184;
        case 0x4b0188u: goto label_4b0188;
        case 0x4b018cu: goto label_4b018c;
        case 0x4b0190u: goto label_4b0190;
        case 0x4b0194u: goto label_4b0194;
        case 0x4b0198u: goto label_4b0198;
        case 0x4b019cu: goto label_4b019c;
        case 0x4b01a0u: goto label_4b01a0;
        case 0x4b01a4u: goto label_4b01a4;
        case 0x4b01a8u: goto label_4b01a8;
        case 0x4b01acu: goto label_4b01ac;
        case 0x4b01b0u: goto label_4b01b0;
        case 0x4b01b4u: goto label_4b01b4;
        case 0x4b01b8u: goto label_4b01b8;
        case 0x4b01bcu: goto label_4b01bc;
        case 0x4b01c0u: goto label_4b01c0;
        case 0x4b01c4u: goto label_4b01c4;
        case 0x4b01c8u: goto label_4b01c8;
        case 0x4b01ccu: goto label_4b01cc;
        case 0x4b01d0u: goto label_4b01d0;
        case 0x4b01d4u: goto label_4b01d4;
        case 0x4b01d8u: goto label_4b01d8;
        case 0x4b01dcu: goto label_4b01dc;
        case 0x4b01e0u: goto label_4b01e0;
        case 0x4b01e4u: goto label_4b01e4;
        case 0x4b01e8u: goto label_4b01e8;
        case 0x4b01ecu: goto label_4b01ec;
        case 0x4b01f0u: goto label_4b01f0;
        case 0x4b01f4u: goto label_4b01f4;
        case 0x4b01f8u: goto label_4b01f8;
        case 0x4b01fcu: goto label_4b01fc;
        case 0x4b0200u: goto label_4b0200;
        case 0x4b0204u: goto label_4b0204;
        case 0x4b0208u: goto label_4b0208;
        case 0x4b020cu: goto label_4b020c;
        case 0x4b0210u: goto label_4b0210;
        case 0x4b0214u: goto label_4b0214;
        case 0x4b0218u: goto label_4b0218;
        case 0x4b021cu: goto label_4b021c;
        case 0x4b0220u: goto label_4b0220;
        case 0x4b0224u: goto label_4b0224;
        case 0x4b0228u: goto label_4b0228;
        case 0x4b022cu: goto label_4b022c;
        case 0x4b0230u: goto label_4b0230;
        case 0x4b0234u: goto label_4b0234;
        case 0x4b0238u: goto label_4b0238;
        case 0x4b023cu: goto label_4b023c;
        case 0x4b0240u: goto label_4b0240;
        case 0x4b0244u: goto label_4b0244;
        case 0x4b0248u: goto label_4b0248;
        case 0x4b024cu: goto label_4b024c;
        case 0x4b0250u: goto label_4b0250;
        case 0x4b0254u: goto label_4b0254;
        case 0x4b0258u: goto label_4b0258;
        case 0x4b025cu: goto label_4b025c;
        case 0x4b0260u: goto label_4b0260;
        case 0x4b0264u: goto label_4b0264;
        case 0x4b0268u: goto label_4b0268;
        case 0x4b026cu: goto label_4b026c;
        case 0x4b0270u: goto label_4b0270;
        case 0x4b0274u: goto label_4b0274;
        case 0x4b0278u: goto label_4b0278;
        case 0x4b027cu: goto label_4b027c;
        case 0x4b0280u: goto label_4b0280;
        case 0x4b0284u: goto label_4b0284;
        case 0x4b0288u: goto label_4b0288;
        case 0x4b028cu: goto label_4b028c;
        case 0x4b0290u: goto label_4b0290;
        case 0x4b0294u: goto label_4b0294;
        case 0x4b0298u: goto label_4b0298;
        case 0x4b029cu: goto label_4b029c;
        case 0x4b02a0u: goto label_4b02a0;
        case 0x4b02a4u: goto label_4b02a4;
        case 0x4b02a8u: goto label_4b02a8;
        case 0x4b02acu: goto label_4b02ac;
        case 0x4b02b0u: goto label_4b02b0;
        case 0x4b02b4u: goto label_4b02b4;
        case 0x4b02b8u: goto label_4b02b8;
        case 0x4b02bcu: goto label_4b02bc;
        case 0x4b02c0u: goto label_4b02c0;
        case 0x4b02c4u: goto label_4b02c4;
        case 0x4b02c8u: goto label_4b02c8;
        case 0x4b02ccu: goto label_4b02cc;
        case 0x4b02d0u: goto label_4b02d0;
        case 0x4b02d4u: goto label_4b02d4;
        case 0x4b02d8u: goto label_4b02d8;
        case 0x4b02dcu: goto label_4b02dc;
        case 0x4b02e0u: goto label_4b02e0;
        case 0x4b02e4u: goto label_4b02e4;
        case 0x4b02e8u: goto label_4b02e8;
        case 0x4b02ecu: goto label_4b02ec;
        case 0x4b02f0u: goto label_4b02f0;
        case 0x4b02f4u: goto label_4b02f4;
        case 0x4b02f8u: goto label_4b02f8;
        case 0x4b02fcu: goto label_4b02fc;
        case 0x4b0300u: goto label_4b0300;
        case 0x4b0304u: goto label_4b0304;
        case 0x4b0308u: goto label_4b0308;
        case 0x4b030cu: goto label_4b030c;
        case 0x4b0310u: goto label_4b0310;
        case 0x4b0314u: goto label_4b0314;
        case 0x4b0318u: goto label_4b0318;
        case 0x4b031cu: goto label_4b031c;
        case 0x4b0320u: goto label_4b0320;
        case 0x4b0324u: goto label_4b0324;
        case 0x4b0328u: goto label_4b0328;
        case 0x4b032cu: goto label_4b032c;
        case 0x4b0330u: goto label_4b0330;
        case 0x4b0334u: goto label_4b0334;
        case 0x4b0338u: goto label_4b0338;
        case 0x4b033cu: goto label_4b033c;
        case 0x4b0340u: goto label_4b0340;
        case 0x4b0344u: goto label_4b0344;
        case 0x4b0348u: goto label_4b0348;
        case 0x4b034cu: goto label_4b034c;
        case 0x4b0350u: goto label_4b0350;
        case 0x4b0354u: goto label_4b0354;
        case 0x4b0358u: goto label_4b0358;
        case 0x4b035cu: goto label_4b035c;
        case 0x4b0360u: goto label_4b0360;
        case 0x4b0364u: goto label_4b0364;
        case 0x4b0368u: goto label_4b0368;
        case 0x4b036cu: goto label_4b036c;
        case 0x4b0370u: goto label_4b0370;
        case 0x4b0374u: goto label_4b0374;
        case 0x4b0378u: goto label_4b0378;
        case 0x4b037cu: goto label_4b037c;
        case 0x4b0380u: goto label_4b0380;
        case 0x4b0384u: goto label_4b0384;
        case 0x4b0388u: goto label_4b0388;
        case 0x4b038cu: goto label_4b038c;
        case 0x4b0390u: goto label_4b0390;
        case 0x4b0394u: goto label_4b0394;
        case 0x4b0398u: goto label_4b0398;
        case 0x4b039cu: goto label_4b039c;
        case 0x4b03a0u: goto label_4b03a0;
        case 0x4b03a4u: goto label_4b03a4;
        case 0x4b03a8u: goto label_4b03a8;
        case 0x4b03acu: goto label_4b03ac;
        case 0x4b03b0u: goto label_4b03b0;
        case 0x4b03b4u: goto label_4b03b4;
        case 0x4b03b8u: goto label_4b03b8;
        case 0x4b03bcu: goto label_4b03bc;
        case 0x4b03c0u: goto label_4b03c0;
        case 0x4b03c4u: goto label_4b03c4;
        case 0x4b03c8u: goto label_4b03c8;
        case 0x4b03ccu: goto label_4b03cc;
        case 0x4b03d0u: goto label_4b03d0;
        case 0x4b03d4u: goto label_4b03d4;
        case 0x4b03d8u: goto label_4b03d8;
        case 0x4b03dcu: goto label_4b03dc;
        case 0x4b03e0u: goto label_4b03e0;
        case 0x4b03e4u: goto label_4b03e4;
        case 0x4b03e8u: goto label_4b03e8;
        case 0x4b03ecu: goto label_4b03ec;
        case 0x4b03f0u: goto label_4b03f0;
        case 0x4b03f4u: goto label_4b03f4;
        case 0x4b03f8u: goto label_4b03f8;
        case 0x4b03fcu: goto label_4b03fc;
        case 0x4b0400u: goto label_4b0400;
        case 0x4b0404u: goto label_4b0404;
        case 0x4b0408u: goto label_4b0408;
        case 0x4b040cu: goto label_4b040c;
        case 0x4b0410u: goto label_4b0410;
        case 0x4b0414u: goto label_4b0414;
        case 0x4b0418u: goto label_4b0418;
        case 0x4b041cu: goto label_4b041c;
        case 0x4b0420u: goto label_4b0420;
        case 0x4b0424u: goto label_4b0424;
        case 0x4b0428u: goto label_4b0428;
        case 0x4b042cu: goto label_4b042c;
        case 0x4b0430u: goto label_4b0430;
        case 0x4b0434u: goto label_4b0434;
        case 0x4b0438u: goto label_4b0438;
        case 0x4b043cu: goto label_4b043c;
        case 0x4b0440u: goto label_4b0440;
        case 0x4b0444u: goto label_4b0444;
        case 0x4b0448u: goto label_4b0448;
        case 0x4b044cu: goto label_4b044c;
        case 0x4b0450u: goto label_4b0450;
        case 0x4b0454u: goto label_4b0454;
        case 0x4b0458u: goto label_4b0458;
        case 0x4b045cu: goto label_4b045c;
        case 0x4b0460u: goto label_4b0460;
        case 0x4b0464u: goto label_4b0464;
        case 0x4b0468u: goto label_4b0468;
        case 0x4b046cu: goto label_4b046c;
        case 0x4b0470u: goto label_4b0470;
        case 0x4b0474u: goto label_4b0474;
        case 0x4b0478u: goto label_4b0478;
        case 0x4b047cu: goto label_4b047c;
        case 0x4b0480u: goto label_4b0480;
        case 0x4b0484u: goto label_4b0484;
        case 0x4b0488u: goto label_4b0488;
        case 0x4b048cu: goto label_4b048c;
        case 0x4b0490u: goto label_4b0490;
        case 0x4b0494u: goto label_4b0494;
        case 0x4b0498u: goto label_4b0498;
        case 0x4b049cu: goto label_4b049c;
        case 0x4b04a0u: goto label_4b04a0;
        case 0x4b04a4u: goto label_4b04a4;
        case 0x4b04a8u: goto label_4b04a8;
        case 0x4b04acu: goto label_4b04ac;
        case 0x4b04b0u: goto label_4b04b0;
        case 0x4b04b4u: goto label_4b04b4;
        case 0x4b04b8u: goto label_4b04b8;
        case 0x4b04bcu: goto label_4b04bc;
        case 0x4b04c0u: goto label_4b04c0;
        case 0x4b04c4u: goto label_4b04c4;
        case 0x4b04c8u: goto label_4b04c8;
        case 0x4b04ccu: goto label_4b04cc;
        case 0x4b04d0u: goto label_4b04d0;
        case 0x4b04d4u: goto label_4b04d4;
        case 0x4b04d8u: goto label_4b04d8;
        case 0x4b04dcu: goto label_4b04dc;
        case 0x4b04e0u: goto label_4b04e0;
        case 0x4b04e4u: goto label_4b04e4;
        case 0x4b04e8u: goto label_4b04e8;
        case 0x4b04ecu: goto label_4b04ec;
        case 0x4b04f0u: goto label_4b04f0;
        case 0x4b04f4u: goto label_4b04f4;
        case 0x4b04f8u: goto label_4b04f8;
        case 0x4b04fcu: goto label_4b04fc;
        case 0x4b0500u: goto label_4b0500;
        case 0x4b0504u: goto label_4b0504;
        case 0x4b0508u: goto label_4b0508;
        case 0x4b050cu: goto label_4b050c;
        case 0x4b0510u: goto label_4b0510;
        case 0x4b0514u: goto label_4b0514;
        case 0x4b0518u: goto label_4b0518;
        case 0x4b051cu: goto label_4b051c;
        case 0x4b0520u: goto label_4b0520;
        case 0x4b0524u: goto label_4b0524;
        case 0x4b0528u: goto label_4b0528;
        case 0x4b052cu: goto label_4b052c;
        case 0x4b0530u: goto label_4b0530;
        case 0x4b0534u: goto label_4b0534;
        case 0x4b0538u: goto label_4b0538;
        case 0x4b053cu: goto label_4b053c;
        case 0x4b0540u: goto label_4b0540;
        case 0x4b0544u: goto label_4b0544;
        case 0x4b0548u: goto label_4b0548;
        case 0x4b054cu: goto label_4b054c;
        case 0x4b0550u: goto label_4b0550;
        case 0x4b0554u: goto label_4b0554;
        case 0x4b0558u: goto label_4b0558;
        case 0x4b055cu: goto label_4b055c;
        case 0x4b0560u: goto label_4b0560;
        case 0x4b0564u: goto label_4b0564;
        case 0x4b0568u: goto label_4b0568;
        case 0x4b056cu: goto label_4b056c;
        case 0x4b0570u: goto label_4b0570;
        case 0x4b0574u: goto label_4b0574;
        case 0x4b0578u: goto label_4b0578;
        case 0x4b057cu: goto label_4b057c;
        case 0x4b0580u: goto label_4b0580;
        case 0x4b0584u: goto label_4b0584;
        case 0x4b0588u: goto label_4b0588;
        case 0x4b058cu: goto label_4b058c;
        case 0x4b0590u: goto label_4b0590;
        case 0x4b0594u: goto label_4b0594;
        case 0x4b0598u: goto label_4b0598;
        case 0x4b059cu: goto label_4b059c;
        case 0x4b05a0u: goto label_4b05a0;
        case 0x4b05a4u: goto label_4b05a4;
        case 0x4b05a8u: goto label_4b05a8;
        case 0x4b05acu: goto label_4b05ac;
        case 0x4b05b0u: goto label_4b05b0;
        case 0x4b05b4u: goto label_4b05b4;
        case 0x4b05b8u: goto label_4b05b8;
        case 0x4b05bcu: goto label_4b05bc;
        case 0x4b05c0u: goto label_4b05c0;
        case 0x4b05c4u: goto label_4b05c4;
        case 0x4b05c8u: goto label_4b05c8;
        case 0x4b05ccu: goto label_4b05cc;
        case 0x4b05d0u: goto label_4b05d0;
        case 0x4b05d4u: goto label_4b05d4;
        case 0x4b05d8u: goto label_4b05d8;
        case 0x4b05dcu: goto label_4b05dc;
        case 0x4b05e0u: goto label_4b05e0;
        case 0x4b05e4u: goto label_4b05e4;
        case 0x4b05e8u: goto label_4b05e8;
        case 0x4b05ecu: goto label_4b05ec;
        case 0x4b05f0u: goto label_4b05f0;
        case 0x4b05f4u: goto label_4b05f4;
        case 0x4b05f8u: goto label_4b05f8;
        case 0x4b05fcu: goto label_4b05fc;
        case 0x4b0600u: goto label_4b0600;
        case 0x4b0604u: goto label_4b0604;
        case 0x4b0608u: goto label_4b0608;
        case 0x4b060cu: goto label_4b060c;
        case 0x4b0610u: goto label_4b0610;
        case 0x4b0614u: goto label_4b0614;
        case 0x4b0618u: goto label_4b0618;
        case 0x4b061cu: goto label_4b061c;
        case 0x4b0620u: goto label_4b0620;
        case 0x4b0624u: goto label_4b0624;
        case 0x4b0628u: goto label_4b0628;
        case 0x4b062cu: goto label_4b062c;
        case 0x4b0630u: goto label_4b0630;
        case 0x4b0634u: goto label_4b0634;
        case 0x4b0638u: goto label_4b0638;
        case 0x4b063cu: goto label_4b063c;
        case 0x4b0640u: goto label_4b0640;
        case 0x4b0644u: goto label_4b0644;
        case 0x4b0648u: goto label_4b0648;
        case 0x4b064cu: goto label_4b064c;
        case 0x4b0650u: goto label_4b0650;
        case 0x4b0654u: goto label_4b0654;
        case 0x4b0658u: goto label_4b0658;
        case 0x4b065cu: goto label_4b065c;
        case 0x4b0660u: goto label_4b0660;
        case 0x4b0664u: goto label_4b0664;
        case 0x4b0668u: goto label_4b0668;
        case 0x4b066cu: goto label_4b066c;
        case 0x4b0670u: goto label_4b0670;
        case 0x4b0674u: goto label_4b0674;
        case 0x4b0678u: goto label_4b0678;
        case 0x4b067cu: goto label_4b067c;
        case 0x4b0680u: goto label_4b0680;
        case 0x4b0684u: goto label_4b0684;
        case 0x4b0688u: goto label_4b0688;
        case 0x4b068cu: goto label_4b068c;
        case 0x4b0690u: goto label_4b0690;
        case 0x4b0694u: goto label_4b0694;
        case 0x4b0698u: goto label_4b0698;
        case 0x4b069cu: goto label_4b069c;
        case 0x4b06a0u: goto label_4b06a0;
        case 0x4b06a4u: goto label_4b06a4;
        case 0x4b06a8u: goto label_4b06a8;
        case 0x4b06acu: goto label_4b06ac;
        case 0x4b06b0u: goto label_4b06b0;
        case 0x4b06b4u: goto label_4b06b4;
        case 0x4b06b8u: goto label_4b06b8;
        case 0x4b06bcu: goto label_4b06bc;
        case 0x4b06c0u: goto label_4b06c0;
        case 0x4b06c4u: goto label_4b06c4;
        case 0x4b06c8u: goto label_4b06c8;
        case 0x4b06ccu: goto label_4b06cc;
        case 0x4b06d0u: goto label_4b06d0;
        case 0x4b06d4u: goto label_4b06d4;
        case 0x4b06d8u: goto label_4b06d8;
        case 0x4b06dcu: goto label_4b06dc;
        case 0x4b06e0u: goto label_4b06e0;
        case 0x4b06e4u: goto label_4b06e4;
        case 0x4b06e8u: goto label_4b06e8;
        case 0x4b06ecu: goto label_4b06ec;
        case 0x4b06f0u: goto label_4b06f0;
        case 0x4b06f4u: goto label_4b06f4;
        case 0x4b06f8u: goto label_4b06f8;
        case 0x4b06fcu: goto label_4b06fc;
        case 0x4b0700u: goto label_4b0700;
        case 0x4b0704u: goto label_4b0704;
        case 0x4b0708u: goto label_4b0708;
        case 0x4b070cu: goto label_4b070c;
        case 0x4b0710u: goto label_4b0710;
        case 0x4b0714u: goto label_4b0714;
        case 0x4b0718u: goto label_4b0718;
        case 0x4b071cu: goto label_4b071c;
        case 0x4b0720u: goto label_4b0720;
        case 0x4b0724u: goto label_4b0724;
        case 0x4b0728u: goto label_4b0728;
        case 0x4b072cu: goto label_4b072c;
        case 0x4b0730u: goto label_4b0730;
        case 0x4b0734u: goto label_4b0734;
        case 0x4b0738u: goto label_4b0738;
        case 0x4b073cu: goto label_4b073c;
        case 0x4b0740u: goto label_4b0740;
        case 0x4b0744u: goto label_4b0744;
        case 0x4b0748u: goto label_4b0748;
        case 0x4b074cu: goto label_4b074c;
        case 0x4b0750u: goto label_4b0750;
        case 0x4b0754u: goto label_4b0754;
        case 0x4b0758u: goto label_4b0758;
        case 0x4b075cu: goto label_4b075c;
        case 0x4b0760u: goto label_4b0760;
        case 0x4b0764u: goto label_4b0764;
        case 0x4b0768u: goto label_4b0768;
        case 0x4b076cu: goto label_4b076c;
        case 0x4b0770u: goto label_4b0770;
        case 0x4b0774u: goto label_4b0774;
        case 0x4b0778u: goto label_4b0778;
        case 0x4b077cu: goto label_4b077c;
        case 0x4b0780u: goto label_4b0780;
        case 0x4b0784u: goto label_4b0784;
        case 0x4b0788u: goto label_4b0788;
        case 0x4b078cu: goto label_4b078c;
        case 0x4b0790u: goto label_4b0790;
        case 0x4b0794u: goto label_4b0794;
        case 0x4b0798u: goto label_4b0798;
        case 0x4b079cu: goto label_4b079c;
        case 0x4b07a0u: goto label_4b07a0;
        case 0x4b07a4u: goto label_4b07a4;
        case 0x4b07a8u: goto label_4b07a8;
        case 0x4b07acu: goto label_4b07ac;
        case 0x4b07b0u: goto label_4b07b0;
        case 0x4b07b4u: goto label_4b07b4;
        case 0x4b07b8u: goto label_4b07b8;
        case 0x4b07bcu: goto label_4b07bc;
        case 0x4b07c0u: goto label_4b07c0;
        case 0x4b07c4u: goto label_4b07c4;
        case 0x4b07c8u: goto label_4b07c8;
        case 0x4b07ccu: goto label_4b07cc;
        case 0x4b07d0u: goto label_4b07d0;
        case 0x4b07d4u: goto label_4b07d4;
        case 0x4b07d8u: goto label_4b07d8;
        case 0x4b07dcu: goto label_4b07dc;
        case 0x4b07e0u: goto label_4b07e0;
        case 0x4b07e4u: goto label_4b07e4;
        case 0x4b07e8u: goto label_4b07e8;
        case 0x4b07ecu: goto label_4b07ec;
        case 0x4b07f0u: goto label_4b07f0;
        case 0x4b07f4u: goto label_4b07f4;
        case 0x4b07f8u: goto label_4b07f8;
        case 0x4b07fcu: goto label_4b07fc;
        case 0x4b0800u: goto label_4b0800;
        case 0x4b0804u: goto label_4b0804;
        case 0x4b0808u: goto label_4b0808;
        case 0x4b080cu: goto label_4b080c;
        case 0x4b0810u: goto label_4b0810;
        case 0x4b0814u: goto label_4b0814;
        case 0x4b0818u: goto label_4b0818;
        case 0x4b081cu: goto label_4b081c;
        case 0x4b0820u: goto label_4b0820;
        case 0x4b0824u: goto label_4b0824;
        case 0x4b0828u: goto label_4b0828;
        case 0x4b082cu: goto label_4b082c;
        case 0x4b0830u: goto label_4b0830;
        case 0x4b0834u: goto label_4b0834;
        case 0x4b0838u: goto label_4b0838;
        case 0x4b083cu: goto label_4b083c;
        case 0x4b0840u: goto label_4b0840;
        case 0x4b0844u: goto label_4b0844;
        case 0x4b0848u: goto label_4b0848;
        case 0x4b084cu: goto label_4b084c;
        case 0x4b0850u: goto label_4b0850;
        case 0x4b0854u: goto label_4b0854;
        case 0x4b0858u: goto label_4b0858;
        case 0x4b085cu: goto label_4b085c;
        case 0x4b0860u: goto label_4b0860;
        case 0x4b0864u: goto label_4b0864;
        case 0x4b0868u: goto label_4b0868;
        case 0x4b086cu: goto label_4b086c;
        case 0x4b0870u: goto label_4b0870;
        case 0x4b0874u: goto label_4b0874;
        case 0x4b0878u: goto label_4b0878;
        case 0x4b087cu: goto label_4b087c;
        case 0x4b0880u: goto label_4b0880;
        case 0x4b0884u: goto label_4b0884;
        case 0x4b0888u: goto label_4b0888;
        case 0x4b088cu: goto label_4b088c;
        case 0x4b0890u: goto label_4b0890;
        case 0x4b0894u: goto label_4b0894;
        case 0x4b0898u: goto label_4b0898;
        case 0x4b089cu: goto label_4b089c;
        case 0x4b08a0u: goto label_4b08a0;
        case 0x4b08a4u: goto label_4b08a4;
        case 0x4b08a8u: goto label_4b08a8;
        case 0x4b08acu: goto label_4b08ac;
        case 0x4b08b0u: goto label_4b08b0;
        case 0x4b08b4u: goto label_4b08b4;
        case 0x4b08b8u: goto label_4b08b8;
        case 0x4b08bcu: goto label_4b08bc;
        case 0x4b08c0u: goto label_4b08c0;
        case 0x4b08c4u: goto label_4b08c4;
        case 0x4b08c8u: goto label_4b08c8;
        case 0x4b08ccu: goto label_4b08cc;
        case 0x4b08d0u: goto label_4b08d0;
        case 0x4b08d4u: goto label_4b08d4;
        case 0x4b08d8u: goto label_4b08d8;
        case 0x4b08dcu: goto label_4b08dc;
        case 0x4b08e0u: goto label_4b08e0;
        case 0x4b08e4u: goto label_4b08e4;
        case 0x4b08e8u: goto label_4b08e8;
        case 0x4b08ecu: goto label_4b08ec;
        case 0x4b08f0u: goto label_4b08f0;
        case 0x4b08f4u: goto label_4b08f4;
        case 0x4b08f8u: goto label_4b08f8;
        case 0x4b08fcu: goto label_4b08fc;
        case 0x4b0900u: goto label_4b0900;
        case 0x4b0904u: goto label_4b0904;
        case 0x4b0908u: goto label_4b0908;
        case 0x4b090cu: goto label_4b090c;
        case 0x4b0910u: goto label_4b0910;
        case 0x4b0914u: goto label_4b0914;
        case 0x4b0918u: goto label_4b0918;
        case 0x4b091cu: goto label_4b091c;
        case 0x4b0920u: goto label_4b0920;
        case 0x4b0924u: goto label_4b0924;
        case 0x4b0928u: goto label_4b0928;
        case 0x4b092cu: goto label_4b092c;
        case 0x4b0930u: goto label_4b0930;
        case 0x4b0934u: goto label_4b0934;
        case 0x4b0938u: goto label_4b0938;
        case 0x4b093cu: goto label_4b093c;
        case 0x4b0940u: goto label_4b0940;
        case 0x4b0944u: goto label_4b0944;
        case 0x4b0948u: goto label_4b0948;
        case 0x4b094cu: goto label_4b094c;
        case 0x4b0950u: goto label_4b0950;
        case 0x4b0954u: goto label_4b0954;
        case 0x4b0958u: goto label_4b0958;
        case 0x4b095cu: goto label_4b095c;
        case 0x4b0960u: goto label_4b0960;
        case 0x4b0964u: goto label_4b0964;
        case 0x4b0968u: goto label_4b0968;
        case 0x4b096cu: goto label_4b096c;
        case 0x4b0970u: goto label_4b0970;
        case 0x4b0974u: goto label_4b0974;
        case 0x4b0978u: goto label_4b0978;
        case 0x4b097cu: goto label_4b097c;
        case 0x4b0980u: goto label_4b0980;
        case 0x4b0984u: goto label_4b0984;
        case 0x4b0988u: goto label_4b0988;
        case 0x4b098cu: goto label_4b098c;
        case 0x4b0990u: goto label_4b0990;
        case 0x4b0994u: goto label_4b0994;
        case 0x4b0998u: goto label_4b0998;
        case 0x4b099cu: goto label_4b099c;
        case 0x4b09a0u: goto label_4b09a0;
        case 0x4b09a4u: goto label_4b09a4;
        case 0x4b09a8u: goto label_4b09a8;
        case 0x4b09acu: goto label_4b09ac;
        case 0x4b09b0u: goto label_4b09b0;
        case 0x4b09b4u: goto label_4b09b4;
        case 0x4b09b8u: goto label_4b09b8;
        case 0x4b09bcu: goto label_4b09bc;
        case 0x4b09c0u: goto label_4b09c0;
        case 0x4b09c4u: goto label_4b09c4;
        case 0x4b09c8u: goto label_4b09c8;
        case 0x4b09ccu: goto label_4b09cc;
        case 0x4b09d0u: goto label_4b09d0;
        case 0x4b09d4u: goto label_4b09d4;
        case 0x4b09d8u: goto label_4b09d8;
        case 0x4b09dcu: goto label_4b09dc;
        case 0x4b09e0u: goto label_4b09e0;
        case 0x4b09e4u: goto label_4b09e4;
        case 0x4b09e8u: goto label_4b09e8;
        case 0x4b09ecu: goto label_4b09ec;
        case 0x4b09f0u: goto label_4b09f0;
        case 0x4b09f4u: goto label_4b09f4;
        case 0x4b09f8u: goto label_4b09f8;
        case 0x4b09fcu: goto label_4b09fc;
        case 0x4b0a00u: goto label_4b0a00;
        case 0x4b0a04u: goto label_4b0a04;
        case 0x4b0a08u: goto label_4b0a08;
        case 0x4b0a0cu: goto label_4b0a0c;
        case 0x4b0a10u: goto label_4b0a10;
        case 0x4b0a14u: goto label_4b0a14;
        case 0x4b0a18u: goto label_4b0a18;
        case 0x4b0a1cu: goto label_4b0a1c;
        case 0x4b0a20u: goto label_4b0a20;
        case 0x4b0a24u: goto label_4b0a24;
        case 0x4b0a28u: goto label_4b0a28;
        case 0x4b0a2cu: goto label_4b0a2c;
        case 0x4b0a30u: goto label_4b0a30;
        case 0x4b0a34u: goto label_4b0a34;
        case 0x4b0a38u: goto label_4b0a38;
        case 0x4b0a3cu: goto label_4b0a3c;
        case 0x4b0a40u: goto label_4b0a40;
        case 0x4b0a44u: goto label_4b0a44;
        case 0x4b0a48u: goto label_4b0a48;
        case 0x4b0a4cu: goto label_4b0a4c;
        case 0x4b0a50u: goto label_4b0a50;
        case 0x4b0a54u: goto label_4b0a54;
        case 0x4b0a58u: goto label_4b0a58;
        case 0x4b0a5cu: goto label_4b0a5c;
        case 0x4b0a60u: goto label_4b0a60;
        case 0x4b0a64u: goto label_4b0a64;
        case 0x4b0a68u: goto label_4b0a68;
        case 0x4b0a6cu: goto label_4b0a6c;
        case 0x4b0a70u: goto label_4b0a70;
        case 0x4b0a74u: goto label_4b0a74;
        case 0x4b0a78u: goto label_4b0a78;
        case 0x4b0a7cu: goto label_4b0a7c;
        case 0x4b0a80u: goto label_4b0a80;
        case 0x4b0a84u: goto label_4b0a84;
        case 0x4b0a88u: goto label_4b0a88;
        case 0x4b0a8cu: goto label_4b0a8c;
        case 0x4b0a90u: goto label_4b0a90;
        case 0x4b0a94u: goto label_4b0a94;
        case 0x4b0a98u: goto label_4b0a98;
        case 0x4b0a9cu: goto label_4b0a9c;
        case 0x4b0aa0u: goto label_4b0aa0;
        case 0x4b0aa4u: goto label_4b0aa4;
        case 0x4b0aa8u: goto label_4b0aa8;
        case 0x4b0aacu: goto label_4b0aac;
        case 0x4b0ab0u: goto label_4b0ab0;
        case 0x4b0ab4u: goto label_4b0ab4;
        case 0x4b0ab8u: goto label_4b0ab8;
        case 0x4b0abcu: goto label_4b0abc;
        case 0x4b0ac0u: goto label_4b0ac0;
        case 0x4b0ac4u: goto label_4b0ac4;
        case 0x4b0ac8u: goto label_4b0ac8;
        case 0x4b0accu: goto label_4b0acc;
        case 0x4b0ad0u: goto label_4b0ad0;
        case 0x4b0ad4u: goto label_4b0ad4;
        case 0x4b0ad8u: goto label_4b0ad8;
        case 0x4b0adcu: goto label_4b0adc;
        case 0x4b0ae0u: goto label_4b0ae0;
        case 0x4b0ae4u: goto label_4b0ae4;
        case 0x4b0ae8u: goto label_4b0ae8;
        case 0x4b0aecu: goto label_4b0aec;
        case 0x4b0af0u: goto label_4b0af0;
        case 0x4b0af4u: goto label_4b0af4;
        case 0x4b0af8u: goto label_4b0af8;
        case 0x4b0afcu: goto label_4b0afc;
        case 0x4b0b00u: goto label_4b0b00;
        case 0x4b0b04u: goto label_4b0b04;
        case 0x4b0b08u: goto label_4b0b08;
        case 0x4b0b0cu: goto label_4b0b0c;
        case 0x4b0b10u: goto label_4b0b10;
        case 0x4b0b14u: goto label_4b0b14;
        case 0x4b0b18u: goto label_4b0b18;
        case 0x4b0b1cu: goto label_4b0b1c;
        case 0x4b0b20u: goto label_4b0b20;
        case 0x4b0b24u: goto label_4b0b24;
        case 0x4b0b28u: goto label_4b0b28;
        case 0x4b0b2cu: goto label_4b0b2c;
        case 0x4b0b30u: goto label_4b0b30;
        case 0x4b0b34u: goto label_4b0b34;
        case 0x4b0b38u: goto label_4b0b38;
        case 0x4b0b3cu: goto label_4b0b3c;
        case 0x4b0b40u: goto label_4b0b40;
        case 0x4b0b44u: goto label_4b0b44;
        case 0x4b0b48u: goto label_4b0b48;
        case 0x4b0b4cu: goto label_4b0b4c;
        case 0x4b0b50u: goto label_4b0b50;
        case 0x4b0b54u: goto label_4b0b54;
        case 0x4b0b58u: goto label_4b0b58;
        case 0x4b0b5cu: goto label_4b0b5c;
        case 0x4b0b60u: goto label_4b0b60;
        case 0x4b0b64u: goto label_4b0b64;
        case 0x4b0b68u: goto label_4b0b68;
        case 0x4b0b6cu: goto label_4b0b6c;
        case 0x4b0b70u: goto label_4b0b70;
        case 0x4b0b74u: goto label_4b0b74;
        case 0x4b0b78u: goto label_4b0b78;
        case 0x4b0b7cu: goto label_4b0b7c;
        case 0x4b0b80u: goto label_4b0b80;
        case 0x4b0b84u: goto label_4b0b84;
        case 0x4b0b88u: goto label_4b0b88;
        case 0x4b0b8cu: goto label_4b0b8c;
        case 0x4b0b90u: goto label_4b0b90;
        case 0x4b0b94u: goto label_4b0b94;
        case 0x4b0b98u: goto label_4b0b98;
        case 0x4b0b9cu: goto label_4b0b9c;
        case 0x4b0ba0u: goto label_4b0ba0;
        case 0x4b0ba4u: goto label_4b0ba4;
        case 0x4b0ba8u: goto label_4b0ba8;
        case 0x4b0bacu: goto label_4b0bac;
        case 0x4b0bb0u: goto label_4b0bb0;
        case 0x4b0bb4u: goto label_4b0bb4;
        case 0x4b0bb8u: goto label_4b0bb8;
        case 0x4b0bbcu: goto label_4b0bbc;
        case 0x4b0bc0u: goto label_4b0bc0;
        case 0x4b0bc4u: goto label_4b0bc4;
        case 0x4b0bc8u: goto label_4b0bc8;
        case 0x4b0bccu: goto label_4b0bcc;
        case 0x4b0bd0u: goto label_4b0bd0;
        case 0x4b0bd4u: goto label_4b0bd4;
        case 0x4b0bd8u: goto label_4b0bd8;
        case 0x4b0bdcu: goto label_4b0bdc;
        case 0x4b0be0u: goto label_4b0be0;
        case 0x4b0be4u: goto label_4b0be4;
        case 0x4b0be8u: goto label_4b0be8;
        case 0x4b0becu: goto label_4b0bec;
        case 0x4b0bf0u: goto label_4b0bf0;
        case 0x4b0bf4u: goto label_4b0bf4;
        case 0x4b0bf8u: goto label_4b0bf8;
        case 0x4b0bfcu: goto label_4b0bfc;
        case 0x4b0c00u: goto label_4b0c00;
        case 0x4b0c04u: goto label_4b0c04;
        case 0x4b0c08u: goto label_4b0c08;
        case 0x4b0c0cu: goto label_4b0c0c;
        case 0x4b0c10u: goto label_4b0c10;
        case 0x4b0c14u: goto label_4b0c14;
        case 0x4b0c18u: goto label_4b0c18;
        case 0x4b0c1cu: goto label_4b0c1c;
        case 0x4b0c20u: goto label_4b0c20;
        case 0x4b0c24u: goto label_4b0c24;
        case 0x4b0c28u: goto label_4b0c28;
        case 0x4b0c2cu: goto label_4b0c2c;
        case 0x4b0c30u: goto label_4b0c30;
        case 0x4b0c34u: goto label_4b0c34;
        case 0x4b0c38u: goto label_4b0c38;
        case 0x4b0c3cu: goto label_4b0c3c;
        case 0x4b0c40u: goto label_4b0c40;
        case 0x4b0c44u: goto label_4b0c44;
        case 0x4b0c48u: goto label_4b0c48;
        case 0x4b0c4cu: goto label_4b0c4c;
        case 0x4b0c50u: goto label_4b0c50;
        case 0x4b0c54u: goto label_4b0c54;
        case 0x4b0c58u: goto label_4b0c58;
        case 0x4b0c5cu: goto label_4b0c5c;
        case 0x4b0c60u: goto label_4b0c60;
        case 0x4b0c64u: goto label_4b0c64;
        case 0x4b0c68u: goto label_4b0c68;
        case 0x4b0c6cu: goto label_4b0c6c;
        case 0x4b0c70u: goto label_4b0c70;
        case 0x4b0c74u: goto label_4b0c74;
        case 0x4b0c78u: goto label_4b0c78;
        case 0x4b0c7cu: goto label_4b0c7c;
        case 0x4b0c80u: goto label_4b0c80;
        case 0x4b0c84u: goto label_4b0c84;
        case 0x4b0c88u: goto label_4b0c88;
        case 0x4b0c8cu: goto label_4b0c8c;
        case 0x4b0c90u: goto label_4b0c90;
        case 0x4b0c94u: goto label_4b0c94;
        case 0x4b0c98u: goto label_4b0c98;
        case 0x4b0c9cu: goto label_4b0c9c;
        case 0x4b0ca0u: goto label_4b0ca0;
        case 0x4b0ca4u: goto label_4b0ca4;
        case 0x4b0ca8u: goto label_4b0ca8;
        case 0x4b0cacu: goto label_4b0cac;
        case 0x4b0cb0u: goto label_4b0cb0;
        case 0x4b0cb4u: goto label_4b0cb4;
        case 0x4b0cb8u: goto label_4b0cb8;
        case 0x4b0cbcu: goto label_4b0cbc;
        case 0x4b0cc0u: goto label_4b0cc0;
        case 0x4b0cc4u: goto label_4b0cc4;
        case 0x4b0cc8u: goto label_4b0cc8;
        case 0x4b0cccu: goto label_4b0ccc;
        case 0x4b0cd0u: goto label_4b0cd0;
        case 0x4b0cd4u: goto label_4b0cd4;
        case 0x4b0cd8u: goto label_4b0cd8;
        case 0x4b0cdcu: goto label_4b0cdc;
        case 0x4b0ce0u: goto label_4b0ce0;
        case 0x4b0ce4u: goto label_4b0ce4;
        case 0x4b0ce8u: goto label_4b0ce8;
        case 0x4b0cecu: goto label_4b0cec;
        case 0x4b0cf0u: goto label_4b0cf0;
        case 0x4b0cf4u: goto label_4b0cf4;
        case 0x4b0cf8u: goto label_4b0cf8;
        case 0x4b0cfcu: goto label_4b0cfc;
        case 0x4b0d00u: goto label_4b0d00;
        case 0x4b0d04u: goto label_4b0d04;
        case 0x4b0d08u: goto label_4b0d08;
        case 0x4b0d0cu: goto label_4b0d0c;
        case 0x4b0d10u: goto label_4b0d10;
        case 0x4b0d14u: goto label_4b0d14;
        case 0x4b0d18u: goto label_4b0d18;
        case 0x4b0d1cu: goto label_4b0d1c;
        case 0x4b0d20u: goto label_4b0d20;
        case 0x4b0d24u: goto label_4b0d24;
        case 0x4b0d28u: goto label_4b0d28;
        case 0x4b0d2cu: goto label_4b0d2c;
        case 0x4b0d30u: goto label_4b0d30;
        case 0x4b0d34u: goto label_4b0d34;
        case 0x4b0d38u: goto label_4b0d38;
        case 0x4b0d3cu: goto label_4b0d3c;
        case 0x4b0d40u: goto label_4b0d40;
        case 0x4b0d44u: goto label_4b0d44;
        case 0x4b0d48u: goto label_4b0d48;
        case 0x4b0d4cu: goto label_4b0d4c;
        case 0x4b0d50u: goto label_4b0d50;
        case 0x4b0d54u: goto label_4b0d54;
        case 0x4b0d58u: goto label_4b0d58;
        case 0x4b0d5cu: goto label_4b0d5c;
        case 0x4b0d60u: goto label_4b0d60;
        case 0x4b0d64u: goto label_4b0d64;
        case 0x4b0d68u: goto label_4b0d68;
        case 0x4b0d6cu: goto label_4b0d6c;
        case 0x4b0d70u: goto label_4b0d70;
        case 0x4b0d74u: goto label_4b0d74;
        case 0x4b0d78u: goto label_4b0d78;
        case 0x4b0d7cu: goto label_4b0d7c;
        case 0x4b0d80u: goto label_4b0d80;
        case 0x4b0d84u: goto label_4b0d84;
        case 0x4b0d88u: goto label_4b0d88;
        case 0x4b0d8cu: goto label_4b0d8c;
        case 0x4b0d90u: goto label_4b0d90;
        case 0x4b0d94u: goto label_4b0d94;
        case 0x4b0d98u: goto label_4b0d98;
        case 0x4b0d9cu: goto label_4b0d9c;
        case 0x4b0da0u: goto label_4b0da0;
        case 0x4b0da4u: goto label_4b0da4;
        case 0x4b0da8u: goto label_4b0da8;
        case 0x4b0dacu: goto label_4b0dac;
        case 0x4b0db0u: goto label_4b0db0;
        case 0x4b0db4u: goto label_4b0db4;
        case 0x4b0db8u: goto label_4b0db8;
        case 0x4b0dbcu: goto label_4b0dbc;
        case 0x4b0dc0u: goto label_4b0dc0;
        case 0x4b0dc4u: goto label_4b0dc4;
        case 0x4b0dc8u: goto label_4b0dc8;
        case 0x4b0dccu: goto label_4b0dcc;
        case 0x4b0dd0u: goto label_4b0dd0;
        case 0x4b0dd4u: goto label_4b0dd4;
        case 0x4b0dd8u: goto label_4b0dd8;
        case 0x4b0ddcu: goto label_4b0ddc;
        case 0x4b0de0u: goto label_4b0de0;
        case 0x4b0de4u: goto label_4b0de4;
        case 0x4b0de8u: goto label_4b0de8;
        case 0x4b0decu: goto label_4b0dec;
        case 0x4b0df0u: goto label_4b0df0;
        case 0x4b0df4u: goto label_4b0df4;
        case 0x4b0df8u: goto label_4b0df8;
        case 0x4b0dfcu: goto label_4b0dfc;
        case 0x4b0e00u: goto label_4b0e00;
        case 0x4b0e04u: goto label_4b0e04;
        case 0x4b0e08u: goto label_4b0e08;
        case 0x4b0e0cu: goto label_4b0e0c;
        case 0x4b0e10u: goto label_4b0e10;
        case 0x4b0e14u: goto label_4b0e14;
        case 0x4b0e18u: goto label_4b0e18;
        case 0x4b0e1cu: goto label_4b0e1c;
        case 0x4b0e20u: goto label_4b0e20;
        case 0x4b0e24u: goto label_4b0e24;
        case 0x4b0e28u: goto label_4b0e28;
        case 0x4b0e2cu: goto label_4b0e2c;
        case 0x4b0e30u: goto label_4b0e30;
        case 0x4b0e34u: goto label_4b0e34;
        case 0x4b0e38u: goto label_4b0e38;
        case 0x4b0e3cu: goto label_4b0e3c;
        case 0x4b0e40u: goto label_4b0e40;
        case 0x4b0e44u: goto label_4b0e44;
        case 0x4b0e48u: goto label_4b0e48;
        case 0x4b0e4cu: goto label_4b0e4c;
        case 0x4b0e50u: goto label_4b0e50;
        case 0x4b0e54u: goto label_4b0e54;
        case 0x4b0e58u: goto label_4b0e58;
        case 0x4b0e5cu: goto label_4b0e5c;
        case 0x4b0e60u: goto label_4b0e60;
        case 0x4b0e64u: goto label_4b0e64;
        case 0x4b0e68u: goto label_4b0e68;
        case 0x4b0e6cu: goto label_4b0e6c;
        case 0x4b0e70u: goto label_4b0e70;
        case 0x4b0e74u: goto label_4b0e74;
        case 0x4b0e78u: goto label_4b0e78;
        case 0x4b0e7cu: goto label_4b0e7c;
        case 0x4b0e80u: goto label_4b0e80;
        case 0x4b0e84u: goto label_4b0e84;
        case 0x4b0e88u: goto label_4b0e88;
        case 0x4b0e8cu: goto label_4b0e8c;
        case 0x4b0e90u: goto label_4b0e90;
        case 0x4b0e94u: goto label_4b0e94;
        case 0x4b0e98u: goto label_4b0e98;
        case 0x4b0e9cu: goto label_4b0e9c;
        case 0x4b0ea0u: goto label_4b0ea0;
        case 0x4b0ea4u: goto label_4b0ea4;
        case 0x4b0ea8u: goto label_4b0ea8;
        case 0x4b0eacu: goto label_4b0eac;
        case 0x4b0eb0u: goto label_4b0eb0;
        case 0x4b0eb4u: goto label_4b0eb4;
        case 0x4b0eb8u: goto label_4b0eb8;
        case 0x4b0ebcu: goto label_4b0ebc;
        case 0x4b0ec0u: goto label_4b0ec0;
        case 0x4b0ec4u: goto label_4b0ec4;
        case 0x4b0ec8u: goto label_4b0ec8;
        case 0x4b0eccu: goto label_4b0ecc;
        case 0x4b0ed0u: goto label_4b0ed0;
        case 0x4b0ed4u: goto label_4b0ed4;
        case 0x4b0ed8u: goto label_4b0ed8;
        case 0x4b0edcu: goto label_4b0edc;
        case 0x4b0ee0u: goto label_4b0ee0;
        case 0x4b0ee4u: goto label_4b0ee4;
        case 0x4b0ee8u: goto label_4b0ee8;
        case 0x4b0eecu: goto label_4b0eec;
        case 0x4b0ef0u: goto label_4b0ef0;
        case 0x4b0ef4u: goto label_4b0ef4;
        case 0x4b0ef8u: goto label_4b0ef8;
        case 0x4b0efcu: goto label_4b0efc;
        case 0x4b0f00u: goto label_4b0f00;
        case 0x4b0f04u: goto label_4b0f04;
        case 0x4b0f08u: goto label_4b0f08;
        case 0x4b0f0cu: goto label_4b0f0c;
        case 0x4b0f10u: goto label_4b0f10;
        case 0x4b0f14u: goto label_4b0f14;
        case 0x4b0f18u: goto label_4b0f18;
        case 0x4b0f1cu: goto label_4b0f1c;
        case 0x4b0f20u: goto label_4b0f20;
        case 0x4b0f24u: goto label_4b0f24;
        case 0x4b0f28u: goto label_4b0f28;
        case 0x4b0f2cu: goto label_4b0f2c;
        case 0x4b0f30u: goto label_4b0f30;
        case 0x4b0f34u: goto label_4b0f34;
        case 0x4b0f38u: goto label_4b0f38;
        case 0x4b0f3cu: goto label_4b0f3c;
        case 0x4b0f40u: goto label_4b0f40;
        case 0x4b0f44u: goto label_4b0f44;
        case 0x4b0f48u: goto label_4b0f48;
        case 0x4b0f4cu: goto label_4b0f4c;
        case 0x4b0f50u: goto label_4b0f50;
        case 0x4b0f54u: goto label_4b0f54;
        case 0x4b0f58u: goto label_4b0f58;
        case 0x4b0f5cu: goto label_4b0f5c;
        case 0x4b0f60u: goto label_4b0f60;
        case 0x4b0f64u: goto label_4b0f64;
        case 0x4b0f68u: goto label_4b0f68;
        case 0x4b0f6cu: goto label_4b0f6c;
        case 0x4b0f70u: goto label_4b0f70;
        case 0x4b0f74u: goto label_4b0f74;
        case 0x4b0f78u: goto label_4b0f78;
        case 0x4b0f7cu: goto label_4b0f7c;
        case 0x4b0f80u: goto label_4b0f80;
        case 0x4b0f84u: goto label_4b0f84;
        case 0x4b0f88u: goto label_4b0f88;
        case 0x4b0f8cu: goto label_4b0f8c;
        case 0x4b0f90u: goto label_4b0f90;
        case 0x4b0f94u: goto label_4b0f94;
        case 0x4b0f98u: goto label_4b0f98;
        case 0x4b0f9cu: goto label_4b0f9c;
        case 0x4b0fa0u: goto label_4b0fa0;
        case 0x4b0fa4u: goto label_4b0fa4;
        case 0x4b0fa8u: goto label_4b0fa8;
        case 0x4b0facu: goto label_4b0fac;
        case 0x4b0fb0u: goto label_4b0fb0;
        case 0x4b0fb4u: goto label_4b0fb4;
        case 0x4b0fb8u: goto label_4b0fb8;
        case 0x4b0fbcu: goto label_4b0fbc;
        case 0x4b0fc0u: goto label_4b0fc0;
        case 0x4b0fc4u: goto label_4b0fc4;
        case 0x4b0fc8u: goto label_4b0fc8;
        case 0x4b0fccu: goto label_4b0fcc;
        case 0x4b0fd0u: goto label_4b0fd0;
        case 0x4b0fd4u: goto label_4b0fd4;
        case 0x4b0fd8u: goto label_4b0fd8;
        case 0x4b0fdcu: goto label_4b0fdc;
        case 0x4b0fe0u: goto label_4b0fe0;
        case 0x4b0fe4u: goto label_4b0fe4;
        case 0x4b0fe8u: goto label_4b0fe8;
        case 0x4b0fecu: goto label_4b0fec;
        case 0x4b0ff0u: goto label_4b0ff0;
        case 0x4b0ff4u: goto label_4b0ff4;
        case 0x4b0ff8u: goto label_4b0ff8;
        case 0x4b0ffcu: goto label_4b0ffc;
        case 0x4b1000u: goto label_4b1000;
        case 0x4b1004u: goto label_4b1004;
        case 0x4b1008u: goto label_4b1008;
        case 0x4b100cu: goto label_4b100c;
        case 0x4b1010u: goto label_4b1010;
        case 0x4b1014u: goto label_4b1014;
        case 0x4b1018u: goto label_4b1018;
        case 0x4b101cu: goto label_4b101c;
        case 0x4b1020u: goto label_4b1020;
        case 0x4b1024u: goto label_4b1024;
        case 0x4b1028u: goto label_4b1028;
        case 0x4b102cu: goto label_4b102c;
        case 0x4b1030u: goto label_4b1030;
        case 0x4b1034u: goto label_4b1034;
        case 0x4b1038u: goto label_4b1038;
        case 0x4b103cu: goto label_4b103c;
        case 0x4b1040u: goto label_4b1040;
        case 0x4b1044u: goto label_4b1044;
        case 0x4b1048u: goto label_4b1048;
        case 0x4b104cu: goto label_4b104c;
        case 0x4b1050u: goto label_4b1050;
        case 0x4b1054u: goto label_4b1054;
        case 0x4b1058u: goto label_4b1058;
        case 0x4b105cu: goto label_4b105c;
        case 0x4b1060u: goto label_4b1060;
        case 0x4b1064u: goto label_4b1064;
        case 0x4b1068u: goto label_4b1068;
        case 0x4b106cu: goto label_4b106c;
        case 0x4b1070u: goto label_4b1070;
        case 0x4b1074u: goto label_4b1074;
        case 0x4b1078u: goto label_4b1078;
        case 0x4b107cu: goto label_4b107c;
        case 0x4b1080u: goto label_4b1080;
        case 0x4b1084u: goto label_4b1084;
        case 0x4b1088u: goto label_4b1088;
        case 0x4b108cu: goto label_4b108c;
        case 0x4b1090u: goto label_4b1090;
        case 0x4b1094u: goto label_4b1094;
        case 0x4b1098u: goto label_4b1098;
        case 0x4b109cu: goto label_4b109c;
        case 0x4b10a0u: goto label_4b10a0;
        case 0x4b10a4u: goto label_4b10a4;
        case 0x4b10a8u: goto label_4b10a8;
        case 0x4b10acu: goto label_4b10ac;
        case 0x4b10b0u: goto label_4b10b0;
        case 0x4b10b4u: goto label_4b10b4;
        case 0x4b10b8u: goto label_4b10b8;
        case 0x4b10bcu: goto label_4b10bc;
        case 0x4b10c0u: goto label_4b10c0;
        case 0x4b10c4u: goto label_4b10c4;
        case 0x4b10c8u: goto label_4b10c8;
        case 0x4b10ccu: goto label_4b10cc;
        case 0x4b10d0u: goto label_4b10d0;
        case 0x4b10d4u: goto label_4b10d4;
        case 0x4b10d8u: goto label_4b10d8;
        case 0x4b10dcu: goto label_4b10dc;
        case 0x4b10e0u: goto label_4b10e0;
        case 0x4b10e4u: goto label_4b10e4;
        case 0x4b10e8u: goto label_4b10e8;
        case 0x4b10ecu: goto label_4b10ec;
        case 0x4b10f0u: goto label_4b10f0;
        case 0x4b10f4u: goto label_4b10f4;
        case 0x4b10f8u: goto label_4b10f8;
        case 0x4b10fcu: goto label_4b10fc;
        case 0x4b1100u: goto label_4b1100;
        case 0x4b1104u: goto label_4b1104;
        case 0x4b1108u: goto label_4b1108;
        case 0x4b110cu: goto label_4b110c;
        case 0x4b1110u: goto label_4b1110;
        case 0x4b1114u: goto label_4b1114;
        case 0x4b1118u: goto label_4b1118;
        case 0x4b111cu: goto label_4b111c;
        case 0x4b1120u: goto label_4b1120;
        case 0x4b1124u: goto label_4b1124;
        case 0x4b1128u: goto label_4b1128;
        case 0x4b112cu: goto label_4b112c;
        case 0x4b1130u: goto label_4b1130;
        case 0x4b1134u: goto label_4b1134;
        case 0x4b1138u: goto label_4b1138;
        case 0x4b113cu: goto label_4b113c;
        case 0x4b1140u: goto label_4b1140;
        case 0x4b1144u: goto label_4b1144;
        case 0x4b1148u: goto label_4b1148;
        case 0x4b114cu: goto label_4b114c;
        case 0x4b1150u: goto label_4b1150;
        case 0x4b1154u: goto label_4b1154;
        case 0x4b1158u: goto label_4b1158;
        case 0x4b115cu: goto label_4b115c;
        case 0x4b1160u: goto label_4b1160;
        case 0x4b1164u: goto label_4b1164;
        case 0x4b1168u: goto label_4b1168;
        case 0x4b116cu: goto label_4b116c;
        case 0x4b1170u: goto label_4b1170;
        case 0x4b1174u: goto label_4b1174;
        case 0x4b1178u: goto label_4b1178;
        case 0x4b117cu: goto label_4b117c;
        case 0x4b1180u: goto label_4b1180;
        case 0x4b1184u: goto label_4b1184;
        case 0x4b1188u: goto label_4b1188;
        case 0x4b118cu: goto label_4b118c;
        case 0x4b1190u: goto label_4b1190;
        case 0x4b1194u: goto label_4b1194;
        case 0x4b1198u: goto label_4b1198;
        case 0x4b119cu: goto label_4b119c;
        case 0x4b11a0u: goto label_4b11a0;
        case 0x4b11a4u: goto label_4b11a4;
        case 0x4b11a8u: goto label_4b11a8;
        case 0x4b11acu: goto label_4b11ac;
        case 0x4b11b0u: goto label_4b11b0;
        case 0x4b11b4u: goto label_4b11b4;
        case 0x4b11b8u: goto label_4b11b8;
        case 0x4b11bcu: goto label_4b11bc;
        case 0x4b11c0u: goto label_4b11c0;
        case 0x4b11c4u: goto label_4b11c4;
        case 0x4b11c8u: goto label_4b11c8;
        case 0x4b11ccu: goto label_4b11cc;
        case 0x4b11d0u: goto label_4b11d0;
        case 0x4b11d4u: goto label_4b11d4;
        case 0x4b11d8u: goto label_4b11d8;
        case 0x4b11dcu: goto label_4b11dc;
        case 0x4b11e0u: goto label_4b11e0;
        case 0x4b11e4u: goto label_4b11e4;
        case 0x4b11e8u: goto label_4b11e8;
        case 0x4b11ecu: goto label_4b11ec;
        case 0x4b11f0u: goto label_4b11f0;
        case 0x4b11f4u: goto label_4b11f4;
        case 0x4b11f8u: goto label_4b11f8;
        case 0x4b11fcu: goto label_4b11fc;
        case 0x4b1200u: goto label_4b1200;
        case 0x4b1204u: goto label_4b1204;
        case 0x4b1208u: goto label_4b1208;
        case 0x4b120cu: goto label_4b120c;
        case 0x4b1210u: goto label_4b1210;
        case 0x4b1214u: goto label_4b1214;
        case 0x4b1218u: goto label_4b1218;
        case 0x4b121cu: goto label_4b121c;
        case 0x4b1220u: goto label_4b1220;
        case 0x4b1224u: goto label_4b1224;
        case 0x4b1228u: goto label_4b1228;
        case 0x4b122cu: goto label_4b122c;
        case 0x4b1230u: goto label_4b1230;
        case 0x4b1234u: goto label_4b1234;
        case 0x4b1238u: goto label_4b1238;
        case 0x4b123cu: goto label_4b123c;
        case 0x4b1240u: goto label_4b1240;
        case 0x4b1244u: goto label_4b1244;
        case 0x4b1248u: goto label_4b1248;
        case 0x4b124cu: goto label_4b124c;
        case 0x4b1250u: goto label_4b1250;
        case 0x4b1254u: goto label_4b1254;
        case 0x4b1258u: goto label_4b1258;
        case 0x4b125cu: goto label_4b125c;
        case 0x4b1260u: goto label_4b1260;
        case 0x4b1264u: goto label_4b1264;
        case 0x4b1268u: goto label_4b1268;
        case 0x4b126cu: goto label_4b126c;
        case 0x4b1270u: goto label_4b1270;
        case 0x4b1274u: goto label_4b1274;
        case 0x4b1278u: goto label_4b1278;
        case 0x4b127cu: goto label_4b127c;
        case 0x4b1280u: goto label_4b1280;
        case 0x4b1284u: goto label_4b1284;
        case 0x4b1288u: goto label_4b1288;
        case 0x4b128cu: goto label_4b128c;
        case 0x4b1290u: goto label_4b1290;
        case 0x4b1294u: goto label_4b1294;
        case 0x4b1298u: goto label_4b1298;
        case 0x4b129cu: goto label_4b129c;
        case 0x4b12a0u: goto label_4b12a0;
        case 0x4b12a4u: goto label_4b12a4;
        case 0x4b12a8u: goto label_4b12a8;
        case 0x4b12acu: goto label_4b12ac;
        case 0x4b12b0u: goto label_4b12b0;
        case 0x4b12b4u: goto label_4b12b4;
        case 0x4b12b8u: goto label_4b12b8;
        case 0x4b12bcu: goto label_4b12bc;
        case 0x4b12c0u: goto label_4b12c0;
        case 0x4b12c4u: goto label_4b12c4;
        case 0x4b12c8u: goto label_4b12c8;
        case 0x4b12ccu: goto label_4b12cc;
        case 0x4b12d0u: goto label_4b12d0;
        case 0x4b12d4u: goto label_4b12d4;
        case 0x4b12d8u: goto label_4b12d8;
        case 0x4b12dcu: goto label_4b12dc;
        case 0x4b12e0u: goto label_4b12e0;
        case 0x4b12e4u: goto label_4b12e4;
        case 0x4b12e8u: goto label_4b12e8;
        case 0x4b12ecu: goto label_4b12ec;
        case 0x4b12f0u: goto label_4b12f0;
        case 0x4b12f4u: goto label_4b12f4;
        case 0x4b12f8u: goto label_4b12f8;
        case 0x4b12fcu: goto label_4b12fc;
        case 0x4b1300u: goto label_4b1300;
        case 0x4b1304u: goto label_4b1304;
        case 0x4b1308u: goto label_4b1308;
        case 0x4b130cu: goto label_4b130c;
        case 0x4b1310u: goto label_4b1310;
        case 0x4b1314u: goto label_4b1314;
        case 0x4b1318u: goto label_4b1318;
        case 0x4b131cu: goto label_4b131c;
        case 0x4b1320u: goto label_4b1320;
        case 0x4b1324u: goto label_4b1324;
        case 0x4b1328u: goto label_4b1328;
        case 0x4b132cu: goto label_4b132c;
        case 0x4b1330u: goto label_4b1330;
        case 0x4b1334u: goto label_4b1334;
        case 0x4b1338u: goto label_4b1338;
        case 0x4b133cu: goto label_4b133c;
        case 0x4b1340u: goto label_4b1340;
        case 0x4b1344u: goto label_4b1344;
        case 0x4b1348u: goto label_4b1348;
        case 0x4b134cu: goto label_4b134c;
        case 0x4b1350u: goto label_4b1350;
        case 0x4b1354u: goto label_4b1354;
        case 0x4b1358u: goto label_4b1358;
        case 0x4b135cu: goto label_4b135c;
        case 0x4b1360u: goto label_4b1360;
        case 0x4b1364u: goto label_4b1364;
        case 0x4b1368u: goto label_4b1368;
        case 0x4b136cu: goto label_4b136c;
        case 0x4b1370u: goto label_4b1370;
        case 0x4b1374u: goto label_4b1374;
        case 0x4b1378u: goto label_4b1378;
        case 0x4b137cu: goto label_4b137c;
        case 0x4b1380u: goto label_4b1380;
        case 0x4b1384u: goto label_4b1384;
        case 0x4b1388u: goto label_4b1388;
        case 0x4b138cu: goto label_4b138c;
        case 0x4b1390u: goto label_4b1390;
        case 0x4b1394u: goto label_4b1394;
        case 0x4b1398u: goto label_4b1398;
        case 0x4b139cu: goto label_4b139c;
        case 0x4b13a0u: goto label_4b13a0;
        case 0x4b13a4u: goto label_4b13a4;
        case 0x4b13a8u: goto label_4b13a8;
        case 0x4b13acu: goto label_4b13ac;
        case 0x4b13b0u: goto label_4b13b0;
        case 0x4b13b4u: goto label_4b13b4;
        case 0x4b13b8u: goto label_4b13b8;
        case 0x4b13bcu: goto label_4b13bc;
        case 0x4b13c0u: goto label_4b13c0;
        case 0x4b13c4u: goto label_4b13c4;
        case 0x4b13c8u: goto label_4b13c8;
        case 0x4b13ccu: goto label_4b13cc;
        case 0x4b13d0u: goto label_4b13d0;
        case 0x4b13d4u: goto label_4b13d4;
        case 0x4b13d8u: goto label_4b13d8;
        case 0x4b13dcu: goto label_4b13dc;
        case 0x4b13e0u: goto label_4b13e0;
        case 0x4b13e4u: goto label_4b13e4;
        case 0x4b13e8u: goto label_4b13e8;
        case 0x4b13ecu: goto label_4b13ec;
        case 0x4b13f0u: goto label_4b13f0;
        case 0x4b13f4u: goto label_4b13f4;
        case 0x4b13f8u: goto label_4b13f8;
        case 0x4b13fcu: goto label_4b13fc;
        case 0x4b1400u: goto label_4b1400;
        case 0x4b1404u: goto label_4b1404;
        case 0x4b1408u: goto label_4b1408;
        case 0x4b140cu: goto label_4b140c;
        case 0x4b1410u: goto label_4b1410;
        case 0x4b1414u: goto label_4b1414;
        case 0x4b1418u: goto label_4b1418;
        case 0x4b141cu: goto label_4b141c;
        case 0x4b1420u: goto label_4b1420;
        case 0x4b1424u: goto label_4b1424;
        case 0x4b1428u: goto label_4b1428;
        case 0x4b142cu: goto label_4b142c;
        case 0x4b1430u: goto label_4b1430;
        case 0x4b1434u: goto label_4b1434;
        case 0x4b1438u: goto label_4b1438;
        case 0x4b143cu: goto label_4b143c;
        case 0x4b1440u: goto label_4b1440;
        case 0x4b1444u: goto label_4b1444;
        case 0x4b1448u: goto label_4b1448;
        case 0x4b144cu: goto label_4b144c;
        case 0x4b1450u: goto label_4b1450;
        case 0x4b1454u: goto label_4b1454;
        case 0x4b1458u: goto label_4b1458;
        case 0x4b145cu: goto label_4b145c;
        case 0x4b1460u: goto label_4b1460;
        case 0x4b1464u: goto label_4b1464;
        case 0x4b1468u: goto label_4b1468;
        case 0x4b146cu: goto label_4b146c;
        case 0x4b1470u: goto label_4b1470;
        case 0x4b1474u: goto label_4b1474;
        case 0x4b1478u: goto label_4b1478;
        case 0x4b147cu: goto label_4b147c;
        case 0x4b1480u: goto label_4b1480;
        case 0x4b1484u: goto label_4b1484;
        case 0x4b1488u: goto label_4b1488;
        case 0x4b148cu: goto label_4b148c;
        case 0x4b1490u: goto label_4b1490;
        case 0x4b1494u: goto label_4b1494;
        case 0x4b1498u: goto label_4b1498;
        case 0x4b149cu: goto label_4b149c;
        case 0x4b14a0u: goto label_4b14a0;
        case 0x4b14a4u: goto label_4b14a4;
        case 0x4b14a8u: goto label_4b14a8;
        case 0x4b14acu: goto label_4b14ac;
        case 0x4b14b0u: goto label_4b14b0;
        case 0x4b14b4u: goto label_4b14b4;
        case 0x4b14b8u: goto label_4b14b8;
        case 0x4b14bcu: goto label_4b14bc;
        case 0x4b14c0u: goto label_4b14c0;
        case 0x4b14c4u: goto label_4b14c4;
        case 0x4b14c8u: goto label_4b14c8;
        case 0x4b14ccu: goto label_4b14cc;
        case 0x4b14d0u: goto label_4b14d0;
        case 0x4b14d4u: goto label_4b14d4;
        case 0x4b14d8u: goto label_4b14d8;
        case 0x4b14dcu: goto label_4b14dc;
        case 0x4b14e0u: goto label_4b14e0;
        case 0x4b14e4u: goto label_4b14e4;
        case 0x4b14e8u: goto label_4b14e8;
        case 0x4b14ecu: goto label_4b14ec;
        case 0x4b14f0u: goto label_4b14f0;
        case 0x4b14f4u: goto label_4b14f4;
        case 0x4b14f8u: goto label_4b14f8;
        case 0x4b14fcu: goto label_4b14fc;
        case 0x4b1500u: goto label_4b1500;
        case 0x4b1504u: goto label_4b1504;
        case 0x4b1508u: goto label_4b1508;
        case 0x4b150cu: goto label_4b150c;
        case 0x4b1510u: goto label_4b1510;
        case 0x4b1514u: goto label_4b1514;
        case 0x4b1518u: goto label_4b1518;
        case 0x4b151cu: goto label_4b151c;
        case 0x4b1520u: goto label_4b1520;
        case 0x4b1524u: goto label_4b1524;
        case 0x4b1528u: goto label_4b1528;
        case 0x4b152cu: goto label_4b152c;
        case 0x4b1530u: goto label_4b1530;
        case 0x4b1534u: goto label_4b1534;
        case 0x4b1538u: goto label_4b1538;
        case 0x4b153cu: goto label_4b153c;
        case 0x4b1540u: goto label_4b1540;
        case 0x4b1544u: goto label_4b1544;
        case 0x4b1548u: goto label_4b1548;
        case 0x4b154cu: goto label_4b154c;
        case 0x4b1550u: goto label_4b1550;
        case 0x4b1554u: goto label_4b1554;
        case 0x4b1558u: goto label_4b1558;
        case 0x4b155cu: goto label_4b155c;
        case 0x4b1560u: goto label_4b1560;
        case 0x4b1564u: goto label_4b1564;
        case 0x4b1568u: goto label_4b1568;
        case 0x4b156cu: goto label_4b156c;
        case 0x4b1570u: goto label_4b1570;
        case 0x4b1574u: goto label_4b1574;
        case 0x4b1578u: goto label_4b1578;
        case 0x4b157cu: goto label_4b157c;
        case 0x4b1580u: goto label_4b1580;
        case 0x4b1584u: goto label_4b1584;
        case 0x4b1588u: goto label_4b1588;
        case 0x4b158cu: goto label_4b158c;
        case 0x4b1590u: goto label_4b1590;
        case 0x4b1594u: goto label_4b1594;
        case 0x4b1598u: goto label_4b1598;
        case 0x4b159cu: goto label_4b159c;
        case 0x4b15a0u: goto label_4b15a0;
        case 0x4b15a4u: goto label_4b15a4;
        case 0x4b15a8u: goto label_4b15a8;
        case 0x4b15acu: goto label_4b15ac;
        case 0x4b15b0u: goto label_4b15b0;
        case 0x4b15b4u: goto label_4b15b4;
        case 0x4b15b8u: goto label_4b15b8;
        case 0x4b15bcu: goto label_4b15bc;
        case 0x4b15c0u: goto label_4b15c0;
        case 0x4b15c4u: goto label_4b15c4;
        case 0x4b15c8u: goto label_4b15c8;
        case 0x4b15ccu: goto label_4b15cc;
        case 0x4b15d0u: goto label_4b15d0;
        case 0x4b15d4u: goto label_4b15d4;
        case 0x4b15d8u: goto label_4b15d8;
        case 0x4b15dcu: goto label_4b15dc;
        case 0x4b15e0u: goto label_4b15e0;
        case 0x4b15e4u: goto label_4b15e4;
        case 0x4b15e8u: goto label_4b15e8;
        case 0x4b15ecu: goto label_4b15ec;
        case 0x4b15f0u: goto label_4b15f0;
        case 0x4b15f4u: goto label_4b15f4;
        case 0x4b15f8u: goto label_4b15f8;
        case 0x4b15fcu: goto label_4b15fc;
        case 0x4b1600u: goto label_4b1600;
        case 0x4b1604u: goto label_4b1604;
        case 0x4b1608u: goto label_4b1608;
        case 0x4b160cu: goto label_4b160c;
        case 0x4b1610u: goto label_4b1610;
        case 0x4b1614u: goto label_4b1614;
        case 0x4b1618u: goto label_4b1618;
        case 0x4b161cu: goto label_4b161c;
        case 0x4b1620u: goto label_4b1620;
        case 0x4b1624u: goto label_4b1624;
        case 0x4b1628u: goto label_4b1628;
        case 0x4b162cu: goto label_4b162c;
        case 0x4b1630u: goto label_4b1630;
        case 0x4b1634u: goto label_4b1634;
        case 0x4b1638u: goto label_4b1638;
        case 0x4b163cu: goto label_4b163c;
        case 0x4b1640u: goto label_4b1640;
        case 0x4b1644u: goto label_4b1644;
        case 0x4b1648u: goto label_4b1648;
        case 0x4b164cu: goto label_4b164c;
        case 0x4b1650u: goto label_4b1650;
        case 0x4b1654u: goto label_4b1654;
        case 0x4b1658u: goto label_4b1658;
        case 0x4b165cu: goto label_4b165c;
        case 0x4b1660u: goto label_4b1660;
        case 0x4b1664u: goto label_4b1664;
        case 0x4b1668u: goto label_4b1668;
        case 0x4b166cu: goto label_4b166c;
        case 0x4b1670u: goto label_4b1670;
        case 0x4b1674u: goto label_4b1674;
        case 0x4b1678u: goto label_4b1678;
        case 0x4b167cu: goto label_4b167c;
        case 0x4b1680u: goto label_4b1680;
        case 0x4b1684u: goto label_4b1684;
        case 0x4b1688u: goto label_4b1688;
        case 0x4b168cu: goto label_4b168c;
        case 0x4b1690u: goto label_4b1690;
        case 0x4b1694u: goto label_4b1694;
        case 0x4b1698u: goto label_4b1698;
        case 0x4b169cu: goto label_4b169c;
        case 0x4b16a0u: goto label_4b16a0;
        case 0x4b16a4u: goto label_4b16a4;
        case 0x4b16a8u: goto label_4b16a8;
        case 0x4b16acu: goto label_4b16ac;
        case 0x4b16b0u: goto label_4b16b0;
        case 0x4b16b4u: goto label_4b16b4;
        case 0x4b16b8u: goto label_4b16b8;
        case 0x4b16bcu: goto label_4b16bc;
        case 0x4b16c0u: goto label_4b16c0;
        case 0x4b16c4u: goto label_4b16c4;
        case 0x4b16c8u: goto label_4b16c8;
        case 0x4b16ccu: goto label_4b16cc;
        case 0x4b16d0u: goto label_4b16d0;
        case 0x4b16d4u: goto label_4b16d4;
        case 0x4b16d8u: goto label_4b16d8;
        case 0x4b16dcu: goto label_4b16dc;
        case 0x4b16e0u: goto label_4b16e0;
        case 0x4b16e4u: goto label_4b16e4;
        case 0x4b16e8u: goto label_4b16e8;
        case 0x4b16ecu: goto label_4b16ec;
        case 0x4b16f0u: goto label_4b16f0;
        case 0x4b16f4u: goto label_4b16f4;
        case 0x4b16f8u: goto label_4b16f8;
        case 0x4b16fcu: goto label_4b16fc;
        case 0x4b1700u: goto label_4b1700;
        case 0x4b1704u: goto label_4b1704;
        case 0x4b1708u: goto label_4b1708;
        case 0x4b170cu: goto label_4b170c;
        case 0x4b1710u: goto label_4b1710;
        case 0x4b1714u: goto label_4b1714;
        case 0x4b1718u: goto label_4b1718;
        case 0x4b171cu: goto label_4b171c;
        case 0x4b1720u: goto label_4b1720;
        case 0x4b1724u: goto label_4b1724;
        case 0x4b1728u: goto label_4b1728;
        case 0x4b172cu: goto label_4b172c;
        case 0x4b1730u: goto label_4b1730;
        case 0x4b1734u: goto label_4b1734;
        case 0x4b1738u: goto label_4b1738;
        case 0x4b173cu: goto label_4b173c;
        case 0x4b1740u: goto label_4b1740;
        case 0x4b1744u: goto label_4b1744;
        case 0x4b1748u: goto label_4b1748;
        case 0x4b174cu: goto label_4b174c;
        case 0x4b1750u: goto label_4b1750;
        case 0x4b1754u: goto label_4b1754;
        case 0x4b1758u: goto label_4b1758;
        case 0x4b175cu: goto label_4b175c;
        case 0x4b1760u: goto label_4b1760;
        case 0x4b1764u: goto label_4b1764;
        case 0x4b1768u: goto label_4b1768;
        case 0x4b176cu: goto label_4b176c;
        case 0x4b1770u: goto label_4b1770;
        case 0x4b1774u: goto label_4b1774;
        case 0x4b1778u: goto label_4b1778;
        case 0x4b177cu: goto label_4b177c;
        default: break;
    }

    ctx->pc = 0x4afff0u;

label_4afff0:
    // 0x4afff0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4afff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_4afff4:
    // 0x4afff4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4afff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4afff8:
    // 0x4afff8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4afff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4afffc:
    // 0x4afffc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4afffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4b0000:
    // 0x4b0000: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x4b0000u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4b0004:
    // 0x4b0004: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b0004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b0008:
    // 0x4b0008: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4b0008u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b000c:
    // 0x4b000c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b0010:
    // 0x4b0010: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b0010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b0014:
    // 0x4b0014: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x4b0014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4b0018:
    // 0x4b0018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b001c:
    // 0x4b001c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b001cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b0020:
    // 0x4b0020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b0024:
    // 0x4b0024: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4b0024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b0028:
    // 0x4b0028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b0028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b002c:
    // 0x4b002c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4b002cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4b0030:
    // 0x4b0030: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x4b0030u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4b0034:
    // 0x4b0034: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x4b0034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4b0038:
    // 0x4b0038: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x4b0038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b003c:
    // 0x4b003c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0040:
    // 0x4b0040: 0xc66d0034  lwc1        $f13, 0x34($s3)
    ctx->pc = 0x4b0040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4b0044:
    // 0x4b0044: 0xc66e0038  lwc1        $f14, 0x38($s3)
    ctx->pc = 0x4b0044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4b0048:
    // 0x4b0048: 0xc04ce50  jal         func_133940
label_4b004c:
    if (ctx->pc == 0x4B004Cu) {
        ctx->pc = 0x4B004Cu;
            // 0x4b004c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0050u;
        goto label_4b0050;
    }
    ctx->pc = 0x4B0048u;
    SET_GPR_U32(ctx, 31, 0x4B0050u);
    ctx->pc = 0x4B004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0048u;
            // 0x4b004c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0050u; }
        if (ctx->pc != 0x4B0050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0050u; }
        if (ctx->pc != 0x4B0050u) { return; }
    }
    ctx->pc = 0x4B0050u;
label_4b0050:
    // 0x4b0050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0054:
    // 0x4b0054: 0xc04ce80  jal         func_133A00
label_4b0058:
    if (ctx->pc == 0x4B0058u) {
        ctx->pc = 0x4B0058u;
            // 0x4b0058: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4B005Cu;
        goto label_4b005c;
    }
    ctx->pc = 0x4B0054u;
    SET_GPR_U32(ctx, 31, 0x4B005Cu);
    ctx->pc = 0x4B0058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0054u;
            // 0x4b0058: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B005Cu; }
        if (ctx->pc != 0x4B005Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B005Cu; }
        if (ctx->pc != 0x4B005Cu) { return; }
    }
    ctx->pc = 0x4B005Cu;
label_4b005c:
    // 0x4b005c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b005cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b0060:
    // 0x4b0060: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x4b0060u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_4b0064:
    // 0x4b0064: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4b0064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4b0068:
    // 0x4b0068: 0xc07698c  jal         func_1DA630
label_4b006c:
    if (ctx->pc == 0x4B006Cu) {
        ctx->pc = 0x4B006Cu;
            // 0x4b006c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0070u;
        goto label_4b0070;
    }
    ctx->pc = 0x4B0068u;
    SET_GPR_U32(ctx, 31, 0x4B0070u);
    ctx->pc = 0x4B006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0068u;
            // 0x4b006c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0070u; }
        if (ctx->pc != 0x4B0070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0070u; }
        if (ctx->pc != 0x4B0070u) { return; }
    }
    ctx->pc = 0x4B0070u;
label_4b0070:
    // 0x4b0070: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b0070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b0074:
    // 0x4b0074: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4b0078:
    if (ctx->pc == 0x4B0078u) {
        ctx->pc = 0x4B007Cu;
        goto label_4b007c;
    }
    ctx->pc = 0x4B0074u;
    {
        const bool branch_taken_0x4b0074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b0074) {
            ctx->pc = 0x4B0084u;
            goto label_4b0084;
        }
    }
    ctx->pc = 0x4B007Cu;
label_4b007c:
    // 0x4b007c: 0x10000033  b           . + 4 + (0x33 << 2)
label_4b0080:
    if (ctx->pc == 0x4B0080u) {
        ctx->pc = 0x4B0080u;
            // 0x4b0080: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B0084u;
        goto label_4b0084;
    }
    ctx->pc = 0x4B007Cu;
    {
        const bool branch_taken_0x4b007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B007Cu;
            // 0x4b0080: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b007c) {
            ctx->pc = 0x4B014Cu;
            goto label_4b014c;
        }
    }
    ctx->pc = 0x4B0084u;
label_4b0084:
    // 0x4b0084: 0xc0576f4  jal         func_15DBD0
label_4b0088:
    if (ctx->pc == 0x4B0088u) {
        ctx->pc = 0x4B008Cu;
        goto label_4b008c;
    }
    ctx->pc = 0x4B0084u;
    SET_GPR_U32(ctx, 31, 0x4B008Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B008Cu; }
        if (ctx->pc != 0x4B008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B008Cu; }
        if (ctx->pc != 0x4B008Cu) { return; }
    }
    ctx->pc = 0x4B008Cu;
label_4b008c:
    // 0x4b008c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4b008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b0090:
    // 0x4b0090: 0xc076984  jal         func_1DA610
label_4b0094:
    if (ctx->pc == 0x4B0094u) {
        ctx->pc = 0x4B0094u;
            // 0x4b0094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0098u;
        goto label_4b0098;
    }
    ctx->pc = 0x4B0090u;
    SET_GPR_U32(ctx, 31, 0x4B0098u);
    ctx->pc = 0x4B0094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0090u;
            // 0x4b0094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0098u; }
        if (ctx->pc != 0x4B0098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0098u; }
        if (ctx->pc != 0x4B0098u) { return; }
    }
    ctx->pc = 0x4B0098u;
label_4b0098:
    // 0x4b0098: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b0098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b009c:
    // 0x4b009c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4b009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4b00a0:
    // 0x4b00a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b00a4:
    // 0x4b00a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b00a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b00a8:
    // 0x4b00a8: 0xc4423fd0  lwc1        $f2, 0x3FD0($v0)
    ctx->pc = 0x4b00a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b00ac:
    // 0x4b00ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b00acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b00b0:
    // 0x4b00b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b00b4:
    // 0x4b00b4: 0xc4413fd8  lwc1        $f1, 0x3FD8($v0)
    ctx->pc = 0x4b00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b00b8:
    // 0x4b00b8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x4b00b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4b00bc:
    // 0x4b00bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b00c0:
    // 0x4b00c0: 0xc4403fdc  lwc1        $f0, 0x3FDC($v0)
    ctx->pc = 0x4b00c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b00c4:
    // 0x4b00c4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4b00c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4b00c8:
    // 0x4b00c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4b00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4b00cc:
    // 0x4b00cc: 0x8c423fd4  lw          $v0, 0x3FD4($v0)
    ctx->pc = 0x4b00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16340)));
label_4b00d0:
    // 0x4b00d0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4b00d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_4b00d4:
    // 0x4b00d4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x4b00d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_4b00d8:
    // 0x4b00d8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x4b00d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b00dc:
    // 0x4b00dc: 0xc04cca0  jal         func_133280
label_4b00e0:
    if (ctx->pc == 0x4B00E0u) {
        ctx->pc = 0x4B00E0u;
            // 0x4b00e0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x4B00E4u;
        goto label_4b00e4;
    }
    ctx->pc = 0x4B00DCu;
    SET_GPR_U32(ctx, 31, 0x4B00E4u);
    ctx->pc = 0x4B00E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B00DCu;
            // 0x4b00e0: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B00E4u; }
        if (ctx->pc != 0x4B00E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B00E4u; }
        if (ctx->pc != 0x4B00E4u) { return; }
    }
    ctx->pc = 0x4B00E4u;
label_4b00e4:
    // 0x4b00e4: 0xc076980  jal         func_1DA600
label_4b00e8:
    if (ctx->pc == 0x4B00E8u) {
        ctx->pc = 0x4B00E8u;
            // 0x4b00e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B00ECu;
        goto label_4b00ec;
    }
    ctx->pc = 0x4B00E4u;
    SET_GPR_U32(ctx, 31, 0x4B00ECu);
    ctx->pc = 0x4B00E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B00E4u;
            // 0x4b00e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B00ECu; }
        if (ctx->pc != 0x4B00ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B00ECu; }
        if (ctx->pc != 0x4B00ECu) { return; }
    }
    ctx->pc = 0x4B00ECu;
label_4b00ec:
    // 0x4b00ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4b00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4b00f0:
    // 0x4b00f0: 0xc04cc34  jal         func_1330D0
label_4b00f4:
    if (ctx->pc == 0x4B00F4u) {
        ctx->pc = 0x4B00F4u;
            // 0x4b00f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B00F8u;
        goto label_4b00f8;
    }
    ctx->pc = 0x4B00F0u;
    SET_GPR_U32(ctx, 31, 0x4B00F8u);
    ctx->pc = 0x4B00F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B00F0u;
            // 0x4b00f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B00F8u; }
        if (ctx->pc != 0x4B00F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B00F8u; }
        if (ctx->pc != 0x4B00F8u) { return; }
    }
    ctx->pc = 0x4B00F8u;
label_4b00f8:
    // 0x4b00f8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4b00fc:
    // 0x4b00fc: 0xc46157c0  lwc1        $f1, 0x57C0($v1)
    ctx->pc = 0x4b00fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0100:
    // 0x4b0100: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b0100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0104:
    // 0x4b0104: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b0108:
    if (ctx->pc == 0x4B0108u) {
        ctx->pc = 0x4B0108u;
            // 0x4b0108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B010Cu;
        goto label_4b010c;
    }
    ctx->pc = 0x4B0104u;
    {
        const bool branch_taken_0x4b0104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0104) {
            ctx->pc = 0x4B0108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0104u;
            // 0x4b0108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0114u;
            goto label_4b0114;
        }
    }
    ctx->pc = 0x4B010Cu;
label_4b010c:
    // 0x4b010c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4b0110:
    if (ctx->pc == 0x4B0110u) {
        ctx->pc = 0x4B0110u;
            // 0x4b0110: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4B0114u;
        goto label_4b0114;
    }
    ctx->pc = 0x4B010Cu;
    {
        const bool branch_taken_0x4b010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B010Cu;
            // 0x4b0110: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b010c) {
            ctx->pc = 0x4B014Cu;
            goto label_4b014c;
        }
    }
    ctx->pc = 0x4B0114u;
label_4b0114:
    // 0x4b0114: 0xc07697c  jal         func_1DA5F0
label_4b0118:
    if (ctx->pc == 0x4B0118u) {
        ctx->pc = 0x4B011Cu;
        goto label_4b011c;
    }
    ctx->pc = 0x4B0114u;
    SET_GPR_U32(ctx, 31, 0x4B011Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B011Cu; }
        if (ctx->pc != 0x4B011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B011Cu; }
        if (ctx->pc != 0x4B011Cu) { return; }
    }
    ctx->pc = 0x4B011Cu;
label_4b011c:
    // 0x4b011c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b011cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b0120:
    // 0x4b0120: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4b0120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4b0124:
    // 0x4b0124: 0xc04cd60  jal         func_133580
label_4b0128:
    if (ctx->pc == 0x4B0128u) {
        ctx->pc = 0x4B0128u;
            // 0x4b0128: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B012Cu;
        goto label_4b012c;
    }
    ctx->pc = 0x4B0124u;
    SET_GPR_U32(ctx, 31, 0x4B012Cu);
    ctx->pc = 0x4B0128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0124u;
            // 0x4b0128: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B012Cu; }
        if (ctx->pc != 0x4B012Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B012Cu; }
        if (ctx->pc != 0x4B012Cu) { return; }
    }
    ctx->pc = 0x4B012Cu;
label_4b012c:
    // 0x4b012c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b012cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b0130:
    // 0x4b0130: 0xc04c650  jal         func_131940
label_4b0134:
    if (ctx->pc == 0x4B0134u) {
        ctx->pc = 0x4B0134u;
            // 0x4b0134: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B0138u;
        goto label_4b0138;
    }
    ctx->pc = 0x4B0130u;
    SET_GPR_U32(ctx, 31, 0x4B0138u);
    ctx->pc = 0x4B0134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0130u;
            // 0x4b0134: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0138u; }
        if (ctx->pc != 0x4B0138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0138u; }
        if (ctx->pc != 0x4B0138u) { return; }
    }
    ctx->pc = 0x4B0138u;
label_4b0138:
    // 0x4b0138: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4b0138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4b013c:
    // 0x4b013c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4b013cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b0140:
    // 0x4b0140: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4b0144:
    // 0x4b0144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b0144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b0148:
    // 0x4b0148: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b0148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b014c:
    // 0x4b014c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4b014cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4b0150:
    // 0x4b0150: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_4b0154:
    if (ctx->pc == 0x4B0154u) {
        ctx->pc = 0x4B0154u;
            // 0x4b0154: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4B0158u;
        goto label_4b0158;
    }
    ctx->pc = 0x4B0150u;
    {
        const bool branch_taken_0x4b0150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0150u;
            // 0x4b0154: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0150) {
            ctx->pc = 0x4B01E4u;
            goto label_4b01e4;
        }
    }
    ctx->pc = 0x4B0158u;
label_4b0158:
    // 0x4b0158: 0xc04e738  jal         func_139CE0
label_4b015c:
    if (ctx->pc == 0x4B015Cu) {
        ctx->pc = 0x4B015Cu;
            // 0x4b015c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x4B0160u;
        goto label_4b0160;
    }
    ctx->pc = 0x4B0158u;
    SET_GPR_U32(ctx, 31, 0x4B0160u);
    ctx->pc = 0x4B015Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0158u;
            // 0x4b015c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0160u; }
        if (ctx->pc != 0x4B0160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0160u; }
        if (ctx->pc != 0x4B0160u) { return; }
    }
    ctx->pc = 0x4B0160u;
label_4b0160:
    // 0x4b0160: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4b0160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b0164:
    // 0x4b0164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b0164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0168:
    // 0x4b0168: 0xc04cd60  jal         func_133580
label_4b016c:
    if (ctx->pc == 0x4B016Cu) {
        ctx->pc = 0x4B016Cu;
            // 0x4b016c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4B0170u;
        goto label_4b0170;
    }
    ctx->pc = 0x4B0168u;
    SET_GPR_U32(ctx, 31, 0x4B0170u);
    ctx->pc = 0x4B016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0168u;
            // 0x4b016c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0170u; }
        if (ctx->pc != 0x4B0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0170u; }
        if (ctx->pc != 0x4B0170u) { return; }
    }
    ctx->pc = 0x4B0170u;
label_4b0170:
    // 0x4b0170: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x4b0170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_4b0174:
    // 0x4b0174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0178:
    // 0x4b0178: 0xc04e4a4  jal         func_139290
label_4b017c:
    if (ctx->pc == 0x4B017Cu) {
        ctx->pc = 0x4B017Cu;
            // 0x4b017c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0180u;
        goto label_4b0180;
    }
    ctx->pc = 0x4B0178u;
    SET_GPR_U32(ctx, 31, 0x4B0180u);
    ctx->pc = 0x4B017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0178u;
            // 0x4b017c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0180u; }
        if (ctx->pc != 0x4B0180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0180u; }
        if (ctx->pc != 0x4B0180u) { return; }
    }
    ctx->pc = 0x4B0180u;
label_4b0180:
    // 0x4b0180: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4b0180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b0184:
    // 0x4b0184: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4b0184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4b0188:
    // 0x4b0188: 0x320f809  jalr        $t9
label_4b018c:
    if (ctx->pc == 0x4B018Cu) {
        ctx->pc = 0x4B018Cu;
            // 0x4b018c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0190u;
        goto label_4b0190;
    }
    ctx->pc = 0x4B0188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0190u);
        ctx->pc = 0x4B018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0188u;
            // 0x4b018c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0190u; }
            if (ctx->pc != 0x4B0190u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0190u;
label_4b0190:
    // 0x4b0190: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x4b0190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4b0194:
    // 0x4b0194: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x4b0194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b0198:
    // 0x4b0198: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4b0198u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4b019c:
    // 0x4b019c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4b019cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b01a0:
    // 0x4b01a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4b01a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4b01a4:
    // 0x4b01a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b01a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b01a8:
    // 0x4b01a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4b01a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b01ac:
    // 0x4b01ac: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x4b01acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4b01b0:
    // 0x4b01b0: 0xc04cff4  jal         func_133FD0
label_4b01b4:
    if (ctx->pc == 0x4B01B4u) {
        ctx->pc = 0x4B01B4u;
            // 0x4b01b4: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4B01B8u;
        goto label_4b01b8;
    }
    ctx->pc = 0x4B01B0u;
    SET_GPR_U32(ctx, 31, 0x4B01B8u);
    ctx->pc = 0x4B01B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B01B0u;
            // 0x4b01b4: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B01B8u; }
        if (ctx->pc != 0x4B01B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B01B8u; }
        if (ctx->pc != 0x4B01B8u) { return; }
    }
    ctx->pc = 0x4B01B8u;
label_4b01b8:
    // 0x4b01b8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4b01b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4b01bc:
    // 0x4b01bc: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x4b01bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b01c0:
    // 0x4b01c0: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4b01c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4b01c4:
    // 0x4b01c4: 0xc054bbc  jal         func_152EF0
label_4b01c8:
    if (ctx->pc == 0x4B01C8u) {
        ctx->pc = 0x4B01C8u;
            // 0x4b01c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B01CCu;
        goto label_4b01cc;
    }
    ctx->pc = 0x4B01C4u;
    SET_GPR_U32(ctx, 31, 0x4B01CCu);
    ctx->pc = 0x4B01C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B01C4u;
            // 0x4b01c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B01CCu; }
        if (ctx->pc != 0x4B01CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B01CCu; }
        if (ctx->pc != 0x4B01CCu) { return; }
    }
    ctx->pc = 0x4B01CCu;
label_4b01cc:
    // 0x4b01cc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4b01ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4b01d0:
    // 0x4b01d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4b01d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4b01d4:
    // 0x4b01d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b01d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b01d8:
    // 0x4b01d8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4b01d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4b01dc:
    // 0x4b01dc: 0xc054c2c  jal         func_1530B0
label_4b01e0:
    if (ctx->pc == 0x4B01E0u) {
        ctx->pc = 0x4B01E0u;
            // 0x4b01e0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4B01E4u;
        goto label_4b01e4;
    }
    ctx->pc = 0x4B01DCu;
    SET_GPR_U32(ctx, 31, 0x4B01E4u);
    ctx->pc = 0x4B01E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B01DCu;
            // 0x4b01e0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B01E4u; }
        if (ctx->pc != 0x4B01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B01E4u; }
        if (ctx->pc != 0x4B01E4u) { return; }
    }
    ctx->pc = 0x4B01E4u;
label_4b01e4:
    // 0x4b01e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b01e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4b01e8:
    // 0x4b01e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4b01e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b01ec:
    // 0x4b01ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b01ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b01f0:
    // 0x4b01f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b01f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b01f4:
    // 0x4b01f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b01f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b01f8:
    // 0x4b01f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b01f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b01fc:
    // 0x4b01fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b01fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b0200:
    // 0x4b0200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b0200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b0204:
    // 0x4b0204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b0204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0208:
    // 0x4b0208: 0x3e00008  jr          $ra
label_4b020c:
    if (ctx->pc == 0x4B020Cu) {
        ctx->pc = 0x4B020Cu;
            // 0x4b020c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4B0210u;
        goto label_4b0210;
    }
    ctx->pc = 0x4B0208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0208u;
            // 0x4b020c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B0210u;
label_4b0210:
    // 0x4b0210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b0214:
    // 0x4b0214: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b0214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b0218:
    // 0x4b0218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b0218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b021c:
    // 0x4b021c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b021cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b0220:
    // 0x4b0220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b0220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b0224:
    // 0x4b0224: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4b0224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4b0228:
    // 0x4b0228: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b0228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b022c:
    // 0x4b022c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b022cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b0230:
    // 0x4b0230: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4b0230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_4b0234:
    // 0x4b0234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b0234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b0238:
    // 0x4b0238: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b0238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4b023c:
    // 0x4b023c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b023cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b0240:
    // 0x4b0240: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4b0240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_4b0244:
    // 0x4b0244: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4b0244u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4b0248:
    // 0x4b0248: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4b0248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_4b024c:
    // 0x4b024c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4b024cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4b0250:
    // 0x4b0250: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4b0250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_4b0254:
    // 0x4b0254: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4b0254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_4b0258:
    // 0x4b0258: 0xc04cbd8  jal         func_132F60
label_4b025c:
    if (ctx->pc == 0x4B025Cu) {
        ctx->pc = 0x4B025Cu;
            // 0x4b025c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4B0260u;
        goto label_4b0260;
    }
    ctx->pc = 0x4B0258u;
    SET_GPR_U32(ctx, 31, 0x4B0260u);
    ctx->pc = 0x4B025Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0258u;
            // 0x4b025c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0260u; }
        if (ctx->pc != 0x4B0260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0260u; }
        if (ctx->pc != 0x4B0260u) { return; }
    }
    ctx->pc = 0x4B0260u;
label_4b0260:
    // 0x4b0260: 0xc04c968  jal         func_1325A0
label_4b0264:
    if (ctx->pc == 0x4B0264u) {
        ctx->pc = 0x4B0264u;
            // 0x4b0264: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4B0268u;
        goto label_4b0268;
    }
    ctx->pc = 0x4B0260u;
    SET_GPR_U32(ctx, 31, 0x4B0268u);
    ctx->pc = 0x4B0264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0260u;
            // 0x4b0264: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0268u; }
        if (ctx->pc != 0x4B0268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0268u; }
        if (ctx->pc != 0x4B0268u) { return; }
    }
    ctx->pc = 0x4B0268u;
label_4b0268:
    // 0x4b0268: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b0268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b026c:
    // 0x4b026c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x4b026cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_4b0270:
    // 0x4b0270: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4b0270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b0274:
    // 0x4b0274: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x4b0274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_4b0278:
    // 0x4b0278: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x4b0278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_4b027c:
    // 0x4b027c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4b027cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4b0280:
    // 0x4b0280: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x4b0280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_4b0284:
    // 0x4b0284: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b0284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b0288:
    // 0x4b0288: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x4b0288u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_4b028c:
    // 0x4b028c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x4b028cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_4b0290:
    // 0x4b0290: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x4b0290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_4b0294:
    // 0x4b0294: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x4b0294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_4b0298:
    // 0x4b0298: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x4b0298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_4b029c:
    // 0x4b029c: 0x24840e00  addiu       $a0, $a0, 0xE00
    ctx->pc = 0x4b029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3584));
label_4b02a0:
    // 0x4b02a0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4b02a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4b02a4:
    // 0x4b02a4: 0x24630e40  addiu       $v1, $v1, 0xE40
    ctx->pc = 0x4b02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3648));
label_4b02a8:
    // 0x4b02a8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x4b02a8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4b02ac:
    // 0x4b02ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b02acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b02b0:
    // 0x4b02b0: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x4b02b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_4b02b4:
    // 0x4b02b4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x4b02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_4b02b8:
    // 0x4b02b8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4b02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4b02bc:
    // 0x4b02bc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b02bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_4b02c0:
    // 0x4b02c0: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x4b02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_4b02c4:
    // 0x4b02c4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4b02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4b02c8:
    // 0x4b02c8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4b02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4b02cc:
    // 0x4b02cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b02ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b02d0:
    // 0x4b02d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b02d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b02d4:
    // 0x4b02d4: 0x3e00008  jr          $ra
label_4b02d8:
    if (ctx->pc == 0x4B02D8u) {
        ctx->pc = 0x4B02D8u;
            // 0x4b02d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B02DCu;
        goto label_4b02dc;
    }
    ctx->pc = 0x4B02D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B02D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B02D4u;
            // 0x4b02d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B02DCu;
label_4b02dc:
    // 0x4b02dc: 0x0  nop
    ctx->pc = 0x4b02dcu;
    // NOP
label_4b02e0:
    // 0x4b02e0: 0x812bf2c  j           func_4AFCB0
label_4b02e4:
    if (ctx->pc == 0x4B02E4u) {
        ctx->pc = 0x4B02E4u;
            // 0x4b02e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B02E8u;
        goto label_4b02e8;
    }
    ctx->pc = 0x4B02E0u;
    ctx->pc = 0x4B02E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B02E0u;
            // 0x4b02e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AFCB0u;
    {
        auto targetFn = runtime->lookupFunction(0x4AFCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B02E8u;
label_4b02e8:
    // 0x4b02e8: 0x0  nop
    ctx->pc = 0x4b02e8u;
    // NOP
label_4b02ec:
    // 0x4b02ec: 0x0  nop
    ctx->pc = 0x4b02ecu;
    // NOP
label_4b02f0:
    // 0x4b02f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4b02f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4b02f4:
    // 0x4b02f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4b02f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4b02f8:
    // 0x4b02f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4b02f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4b02fc:
    // 0x4b02fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4b02fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4b0300:
    // 0x4b0300: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4b0300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4b0304:
    // 0x4b0304: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b0304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4b0308:
    // 0x4b0308: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b0308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b030c:
    // 0x4b030c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b0310:
    // 0x4b0310: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b0310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b0314:
    // 0x4b0314: 0x8c850da0  lw          $a1, 0xDA0($a0)
    ctx->pc = 0x4b0314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_4b0318:
    // 0x4b0318: 0x8c910550  lw          $s1, 0x550($a0)
    ctx->pc = 0x4b0318u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_4b031c:
    // 0x4b031c: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x4b031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_4b0320:
    // 0x4b0320: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_4b0324:
    if (ctx->pc == 0x4B0324u) {
        ctx->pc = 0x4B0324u;
            // 0x4b0324: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0328u;
        goto label_4b0328;
    }
    ctx->pc = 0x4B0320u;
    {
        const bool branch_taken_0x4b0320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0320u;
            // 0x4b0324: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0320) {
            ctx->pc = 0x4B0358u;
            goto label_4b0358;
        }
    }
    ctx->pc = 0x4B0328u;
label_4b0328:
    // 0x4b0328: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x4b0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b032c:
    // 0x4b032c: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x4b032cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_4b0330:
    // 0x4b0330: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b0330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b0334:
    // 0x4b0334: 0xc0c753c  jal         func_31D4F0
label_4b0338:
    if (ctx->pc == 0x4B0338u) {
        ctx->pc = 0x4B0338u;
            // 0x4b0338: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B033Cu;
        goto label_4b033c;
    }
    ctx->pc = 0x4B0334u;
    SET_GPR_U32(ctx, 31, 0x4B033Cu);
    ctx->pc = 0x4B0338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0334u;
            // 0x4b0338: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B033Cu; }
        if (ctx->pc != 0x4B033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B033Cu; }
        if (ctx->pc != 0x4B033Cu) { return; }
    }
    ctx->pc = 0x4B033Cu;
label_4b033c:
    // 0x4b033c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4b033cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4b0340:
    // 0x4b0340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b0340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b0344:
    // 0x4b0344: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4b0344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4b0348:
    // 0x4b0348: 0x320f809  jalr        $t9
label_4b034c:
    if (ctx->pc == 0x4B034Cu) {
        ctx->pc = 0x4B034Cu;
            // 0x4b034c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4B0350u;
        goto label_4b0350;
    }
    ctx->pc = 0x4B0348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0350u);
        ctx->pc = 0x4B034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0348u;
            // 0x4b034c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0350u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0350u; }
            if (ctx->pc != 0x4B0350u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0350u;
label_4b0350:
    // 0x4b0350: 0x100004ff  b           . + 4 + (0x4FF << 2)
label_4b0354:
    if (ctx->pc == 0x4B0354u) {
        ctx->pc = 0x4B0354u;
            // 0x4b0354: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4B0358u;
        goto label_4b0358;
    }
    ctx->pc = 0x4B0350u;
    {
        const bool branch_taken_0x4b0350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0350u;
            // 0x4b0354: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0350) {
            ctx->pc = 0x4B1750u;
            goto label_4b1750;
        }
    }
    ctx->pc = 0x4B0358u;
label_4b0358:
    // 0x4b0358: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4b0358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4b035c:
    // 0x4b035c: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_4b0360:
    if (ctx->pc == 0x4B0360u) {
        ctx->pc = 0x4B0360u;
            // 0x4b0360: 0x8e430e30  lw          $v1, 0xE30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
        ctx->pc = 0x4B0364u;
        goto label_4b0364;
    }
    ctx->pc = 0x4B035Cu;
    {
        const bool branch_taken_0x4b035c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b035c) {
            ctx->pc = 0x4B0360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B035Cu;
            // 0x4b0360: 0x8e430e30  lw          $v1, 0xE30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B03DCu;
            goto label_4b03dc;
        }
    }
    ctx->pc = 0x4B0364u;
label_4b0364:
    // 0x4b0364: 0x8e450db0  lw          $a1, 0xDB0($s2)
    ctx->pc = 0x4b0364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_4b0368:
    // 0x4b0368: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4b0368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4b036c:
    // 0x4b036c: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
label_4b0370:
    if (ctx->pc == 0x4B0370u) {
        ctx->pc = 0x4B0374u;
        goto label_4b0374;
    }
    ctx->pc = 0x4B036Cu;
    {
        const bool branch_taken_0x4b036c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b036c) {
            ctx->pc = 0x4B03D8u;
            goto label_4b03d8;
        }
    }
    ctx->pc = 0x4B0374u;
label_4b0374:
    // 0x4b0374: 0x8e430e30  lw          $v1, 0xE30($s2)
    ctx->pc = 0x4b0374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_4b0378:
    // 0x4b0378: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_4b037c:
    if (ctx->pc == 0x4B037Cu) {
        ctx->pc = 0x4B0380u;
        goto label_4b0380;
    }
    ctx->pc = 0x4B0378u;
    {
        const bool branch_taken_0x4b0378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0378) {
            ctx->pc = 0x4B03D8u;
            goto label_4b03d8;
        }
    }
    ctx->pc = 0x4B0380u;
label_4b0380:
    // 0x4b0380: 0xae400af4  sw          $zero, 0xAF4($s2)
    ctx->pc = 0x4b0380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2804), GPR_U32(ctx, 0));
label_4b0384:
    // 0x4b0384: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4b0384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4b0388:
    // 0x4b0388: 0xae400af8  sw          $zero, 0xAF8($s2)
    ctx->pc = 0x4b0388u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2808), GPR_U32(ctx, 0));
label_4b038c:
    // 0x4b038c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b038cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b0390:
    // 0x4b0390: 0xae400b00  sw          $zero, 0xB00($s2)
    ctx->pc = 0x4b0390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2816), GPR_U32(ctx, 0));
label_4b0394:
    // 0x4b0394: 0xc64c0de4  lwc1        $f12, 0xDE4($s2)
    ctx->pc = 0x4b0394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b0398:
    // 0x4b0398: 0xc0767f0  jal         func_1D9FC0
label_4b039c:
    if (ctx->pc == 0x4B039Cu) {
        ctx->pc = 0x4B039Cu;
            // 0x4b039c: 0x26450820  addiu       $a1, $s2, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
        ctx->pc = 0x4B03A0u;
        goto label_4b03a0;
    }
    ctx->pc = 0x4B0398u;
    SET_GPR_U32(ctx, 31, 0x4B03A0u);
    ctx->pc = 0x4B039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0398u;
            // 0x4b039c: 0x26450820  addiu       $a1, $s2, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B03A0u; }
        if (ctx->pc != 0x4B03A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B03A0u; }
        if (ctx->pc != 0x4B03A0u) { return; }
    }
    ctx->pc = 0x4B03A0u;
label_4b03a0:
    // 0x4b03a0: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x4b03a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b03a4:
    // 0x4b03a4: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x4b03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_4b03a8:
    // 0x4b03a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b03a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b03ac:
    // 0x4b03ac: 0xc0c753c  jal         func_31D4F0
label_4b03b0:
    if (ctx->pc == 0x4B03B0u) {
        ctx->pc = 0x4B03B0u;
            // 0x4b03b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B03B4u;
        goto label_4b03b4;
    }
    ctx->pc = 0x4B03ACu;
    SET_GPR_U32(ctx, 31, 0x4B03B4u);
    ctx->pc = 0x4B03B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B03ACu;
            // 0x4b03b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B03B4u; }
        if (ctx->pc != 0x4B03B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B03B4u; }
        if (ctx->pc != 0x4B03B4u) { return; }
    }
    ctx->pc = 0x4B03B4u;
label_4b03b4:
    // 0x4b03b4: 0xae400de4  sw          $zero, 0xDE4($s2)
    ctx->pc = 0x4b03b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 0));
label_4b03b8:
    // 0x4b03b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b03b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b03bc:
    // 0x4b03bc: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x4b03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
label_4b03c0:
    // 0x4b03c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4b03c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4b03c4:
    // 0x4b03c4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4b03c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4b03c8:
    // 0x4b03c8: 0x320f809  jalr        $t9
label_4b03cc:
    if (ctx->pc == 0x4B03CCu) {
        ctx->pc = 0x4B03CCu;
            // 0x4b03cc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x4B03D0u;
        goto label_4b03d0;
    }
    ctx->pc = 0x4B03C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B03D0u);
        ctx->pc = 0x4B03CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B03C8u;
            // 0x4b03cc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B03D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B03D0u; }
            if (ctx->pc != 0x4B03D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B03D0u;
label_4b03d0:
    // 0x4b03d0: 0x100004de  b           . + 4 + (0x4DE << 2)
label_4b03d4:
    if (ctx->pc == 0x4B03D4u) {
        ctx->pc = 0x4B03D8u;
        goto label_4b03d8;
    }
    ctx->pc = 0x4B03D0u;
    {
        const bool branch_taken_0x4b03d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b03d0) {
            ctx->pc = 0x4B174Cu;
            goto label_4b174c;
        }
    }
    ctx->pc = 0x4B03D8u;
label_4b03d8:
    // 0x4b03d8: 0x8e430e30  lw          $v1, 0xE30($s2)
    ctx->pc = 0x4b03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_4b03dc:
    // 0x4b03dc: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x4b03dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_4b03e0:
    // 0x4b03e0: 0x50200486  beql        $at, $zero, . + 4 + (0x486 << 2)
label_4b03e4:
    if (ctx->pc == 0x4B03E4u) {
        ctx->pc = 0x4B03E4u;
            // 0x4b03e4: 0x8224010f  lb          $a0, 0x10F($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
        ctx->pc = 0x4B03E8u;
        goto label_4b03e8;
    }
    ctx->pc = 0x4B03E0u;
    {
        const bool branch_taken_0x4b03e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b03e0) {
            ctx->pc = 0x4B03E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B03E0u;
            // 0x4b03e4: 0x8224010f  lb          $a0, 0x10F($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B15FCu;
            goto label_4b15fc;
        }
    }
    ctx->pc = 0x4B03E8u;
label_4b03e8:
    // 0x4b03e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b03e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4b03ec:
    // 0x4b03ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b03f0:
    // 0x4b03f0: 0x24845800  addiu       $a0, $a0, 0x5800
    ctx->pc = 0x4b03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22528));
label_4b03f4:
    // 0x4b03f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b03f8:
    // 0x4b03f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b03fc:
    // 0x4b03fc: 0x600008  jr          $v1
label_4b0400:
    if (ctx->pc == 0x4B0400u) {
        ctx->pc = 0x4B0404u;
        goto label_4b0404;
    }
    ctx->pc = 0x4B03FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B0404u: goto label_4b0404;
            case 0x4B095Cu: goto label_4b095c;
            case 0x4B0A50u: goto label_4b0a50;
            case 0x4B0F20u: goto label_4b0f20;
            case 0x4B0FA4u: goto label_4b0fa4;
            case 0x4B10B8u: goto label_4b10b8;
            case 0x4B11CCu: goto label_4b11cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4B0404u;
label_4b0404:
    // 0x4b0404: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x4b0404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4b0408:
    // 0x4b0408: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x4b0408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_4b040c:
    // 0x4b040c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x4b040cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4b0410:
    // 0x4b0410: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4b0410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4b0414:
    // 0x4b0414: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4b0414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b0418:
    // 0x4b0418: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x4b0418u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_4b041c:
    // 0x4b041c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b0420:
    // 0x4b0420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0424:
    // 0x4b0424: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b0424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b0428:
    // 0x4b0428: 0x41023  negu        $v0, $a0
    ctx->pc = 0x4b0428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_4b042c:
    // 0x4b042c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4b042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4b0430:
    // 0x4b0430: 0x0  nop
    ctx->pc = 0x4b0430u;
    // NOP
label_4b0434:
    // 0x4b0434: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4b0434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4b0438:
    // 0x4b0438: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4b0438u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4b043c:
    // 0x4b043c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4b043cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_4b0440:
    // 0x4b0440: 0xc6410e8c  lwc1        $f1, 0xE8C($s2)
    ctx->pc = 0x4b0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0444:
    // 0x4b0444: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4b0444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b0448:
    // 0x4b0448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b0448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b044c:
    // 0x4b044c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4b0450:
    if (ctx->pc == 0x4B0450u) {
        ctx->pc = 0x4B0450u;
            // 0x4b0450: 0xe6410e8c  swc1        $f1, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->pc = 0x4B0454u;
        goto label_4b0454;
    }
    ctx->pc = 0x4B044Cu;
    {
        const bool branch_taken_0x4b044c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B0450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B044Cu;
            // 0x4b0450: 0xe6410e8c  swc1        $f1, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b044c) {
            ctx->pc = 0x4B045Cu;
            goto label_4b045c;
        }
    }
    ctx->pc = 0x4B0454u;
label_4b0454:
    // 0x4b0454: 0x10000008  b           . + 4 + (0x8 << 2)
label_4b0458:
    if (ctx->pc == 0x4B0458u) {
        ctx->pc = 0x4B0458u;
            // 0x4b0458: 0xe6400e8c  swc1        $f0, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->pc = 0x4B045Cu;
        goto label_4b045c;
    }
    ctx->pc = 0x4B0454u;
    {
        const bool branch_taken_0x4b0454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0454u;
            // 0x4b0458: 0xe6400e8c  swc1        $f0, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0454) {
            ctx->pc = 0x4B0478u;
            goto label_4b0478;
        }
    }
    ctx->pc = 0x4B045Cu;
label_4b045c:
    // 0x4b045c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4b045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4b0460:
    // 0x4b0460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0464:
    // 0x4b0464: 0x0  nop
    ctx->pc = 0x4b0464u;
    // NOP
label_4b0468:
    // 0x4b0468: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b0468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b046c:
    // 0x4b046c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b0470:
    if (ctx->pc == 0x4B0470u) {
        ctx->pc = 0x4B0470u;
            // 0x4b0470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0474u;
        goto label_4b0474;
    }
    ctx->pc = 0x4B046Cu;
    {
        const bool branch_taken_0x4b046c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b046c) {
            ctx->pc = 0x4B0470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B046Cu;
            // 0x4b0470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B047Cu;
            goto label_4b047c;
        }
    }
    ctx->pc = 0x4B0474u;
label_4b0474:
    // 0x4b0474: 0xe6400e8c  swc1        $f0, 0xE8C($s2)
    ctx->pc = 0x4b0474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
label_4b0478:
    // 0x4b0478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b0478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b047c:
    // 0x4b047c: 0xc0c1560  jal         func_305580
label_4b0480:
    if (ctx->pc == 0x4B0480u) {
        ctx->pc = 0x4B0484u;
        goto label_4b0484;
    }
    ctx->pc = 0x4B047Cu;
    SET_GPR_U32(ctx, 31, 0x4B0484u);
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0484u; }
        if (ctx->pc != 0x4B0484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0484u; }
        if (ctx->pc != 0x4B0484u) { return; }
    }
    ctx->pc = 0x4B0484u;
label_4b0484:
    // 0x4b0484: 0xc0754b4  jal         func_1D52D0
label_4b0488:
    if (ctx->pc == 0x4B0488u) {
        ctx->pc = 0x4B0488u;
            // 0x4b0488: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x4B048Cu;
        goto label_4b048c;
    }
    ctx->pc = 0x4B0484u;
    SET_GPR_U32(ctx, 31, 0x4B048Cu);
    ctx->pc = 0x4B0488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0484u;
            // 0x4b0488: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B048Cu; }
        if (ctx->pc != 0x4B048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B048Cu; }
        if (ctx->pc != 0x4B048Cu) { return; }
    }
    ctx->pc = 0x4B048Cu;
label_4b048c:
    // 0x4b048c: 0xc44c0028  lwc1        $f12, 0x28($v0)
    ctx->pc = 0x4b048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b0490:
    // 0x4b0490: 0xc0c1540  jal         func_305500
label_4b0494:
    if (ctx->pc == 0x4B0494u) {
        ctx->pc = 0x4B0494u;
            // 0x4b0494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0498u;
        goto label_4b0498;
    }
    ctx->pc = 0x4B0490u;
    SET_GPR_U32(ctx, 31, 0x4B0498u);
    ctx->pc = 0x4B0494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0490u;
            // 0x4b0494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0498u; }
        if (ctx->pc != 0x4B0498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0498u; }
        if (ctx->pc != 0x4B0498u) { return; }
    }
    ctx->pc = 0x4B0498u;
label_4b0498:
    // 0x4b0498: 0xc0c144c  jal         func_305130
label_4b049c:
    if (ctx->pc == 0x4B049Cu) {
        ctx->pc = 0x4B049Cu;
            // 0x4b049c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B04A0u;
        goto label_4b04a0;
    }
    ctx->pc = 0x4B0498u;
    SET_GPR_U32(ctx, 31, 0x4B04A0u);
    ctx->pc = 0x4B049Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0498u;
            // 0x4b049c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305130u;
    if (runtime->hasFunction(0x305130u)) {
        auto targetFn = runtime->lookupFunction(0x305130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B04A0u; }
        if (ctx->pc != 0x4B04A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305130_0x305130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B04A0u; }
        if (ctx->pc != 0x4B04A0u) { return; }
    }
    ctx->pc = 0x4B04A0u;
label_4b04a0:
    // 0x4b04a0: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x4b04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_4b04a4:
    // 0x4b04a4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x4b04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4b04a8:
    // 0x4b04a8: 0x108304a8  beq         $a0, $v1, . + 4 + (0x4A8 << 2)
label_4b04ac:
    if (ctx->pc == 0x4B04ACu) {
        ctx->pc = 0x4B04B0u;
        goto label_4b04b0;
    }
    ctx->pc = 0x4B04A8u;
    {
        const bool branch_taken_0x4b04a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b04a8) {
            ctx->pc = 0x4B174Cu;
            goto label_4b174c;
        }
    }
    ctx->pc = 0x4B04B0u;
label_4b04b0:
    // 0x4b04b0: 0x3c023ef1  lui         $v0, 0x3EF1
    ctx->pc = 0x4b04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16113 << 16));
label_4b04b4:
    // 0x4b04b4: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x4b04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_4b04b8:
    // 0x4b04b8: 0x34424639  ori         $v0, $v0, 0x4639
    ctx->pc = 0x4b04b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17977);
label_4b04bc:
    // 0x4b04bc: 0xc6410e8c  lwc1        $f1, 0xE8C($s2)
    ctx->pc = 0x4b04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b04c0:
    // 0x4b04c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4b04c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b04c4:
    // 0x4b04c4: 0xc6400880  lwc1        $f0, 0x880($s2)
    ctx->pc = 0x4b04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b04c8:
    // 0x4b04c8: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x4b04c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4b04cc:
    // 0x4b04cc: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x4b04ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4b04d0:
    // 0x4b04d0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b04d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b04d4:
    // 0x4b04d4: 0xc0c753c  jal         func_31D4F0
label_4b04d8:
    if (ctx->pc == 0x4B04D8u) {
        ctx->pc = 0x4B04D8u;
            // 0x4b04d8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B04DCu;
        goto label_4b04dc;
    }
    ctx->pc = 0x4B04D4u;
    SET_GPR_U32(ctx, 31, 0x4B04DCu);
    ctx->pc = 0x4B04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B04D4u;
            // 0x4b04d8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B04DCu; }
        if (ctx->pc != 0x4B04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B04DCu; }
        if (ctx->pc != 0x4B04DCu) { return; }
    }
    ctx->pc = 0x4B04DCu;
label_4b04dc:
    // 0x4b04dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b04dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b04e0:
    // 0x4b04e0: 0x0  nop
    ctx->pc = 0x4b04e0u;
    // NOP
label_4b04e4:
    // 0x4b04e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4b04e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b04e8:
    // 0x4b04e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4b04ec:
    if (ctx->pc == 0x4B04ECu) {
        ctx->pc = 0x4B04ECu;
            // 0x4b04ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B04F0u;
        goto label_4b04f0;
    }
    ctx->pc = 0x4B04E8u;
    {
        const bool branch_taken_0x4b04e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B04ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B04E8u;
            // 0x4b04ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b04e8) {
            ctx->pc = 0x4B04F4u;
            goto label_4b04f4;
        }
    }
    ctx->pc = 0x4B04F0u;
label_4b04f0:
    // 0x4b04f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b04f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b04f4:
    // 0x4b04f4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4b04f8:
    if (ctx->pc == 0x4B04F8u) {
        ctx->pc = 0x4B04F8u;
            // 0x4b04f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4B04FCu;
        goto label_4b04fc;
    }
    ctx->pc = 0x4B04F4u;
    {
        const bool branch_taken_0x4b04f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b04f4) {
            ctx->pc = 0x4B04F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B04F4u;
            // 0x4b04f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0508u;
            goto label_4b0508;
        }
    }
    ctx->pc = 0x4B04FCu;
label_4b04fc:
    // 0x4b04fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b04fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0500:
    // 0x4b0500: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b0504:
    if (ctx->pc == 0x4B0504u) {
        ctx->pc = 0x4B0504u;
            // 0x4b0504: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B0508u;
        goto label_4b0508;
    }
    ctx->pc = 0x4B0500u;
    {
        const bool branch_taken_0x4b0500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0500u;
            // 0x4b0504: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0500) {
            ctx->pc = 0x4B0520u;
            goto label_4b0520;
        }
    }
    ctx->pc = 0x4B0508u;
label_4b0508:
    // 0x4b0508: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b0508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b050c:
    // 0x4b050c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b050cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b0510:
    // 0x4b0510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b0510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0514:
    // 0x4b0514: 0x0  nop
    ctx->pc = 0x4b0514u;
    // NOP
label_4b0518:
    // 0x4b0518: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4b0518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4b051c:
    // 0x4b051c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4b051cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4b0520:
    // 0x4b0520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b0520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b0524:
    // 0x4b0524: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4b0524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4b0528:
    // 0x4b0528: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b0528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b052c:
    // 0x4b052c: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x4b052cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_4b0530:
    // 0x4b0530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b0530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0534:
    // 0x4b0534: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b0534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b0538:
    // 0x4b0538: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b0538u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b053c:
    // 0x4b053c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x4b053cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4b0540:
    // 0x4b0540: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4b0540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4b0544:
    // 0x4b0544: 0xc0754b4  jal         func_1D52D0
label_4b0548:
    if (ctx->pc == 0x4B0548u) {
        ctx->pc = 0x4B0548u;
            // 0x4b0548: 0xe6400e7c  swc1        $f0, 0xE7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3708), bits); }
        ctx->pc = 0x4B054Cu;
        goto label_4b054c;
    }
    ctx->pc = 0x4B0544u;
    SET_GPR_U32(ctx, 31, 0x4B054Cu);
    ctx->pc = 0x4B0548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0544u;
            // 0x4b0548: 0xe6400e7c  swc1        $f0, 0xE7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3708), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B054Cu; }
        if (ctx->pc != 0x4B054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B054Cu; }
        if (ctx->pc != 0x4B054Cu) { return; }
    }
    ctx->pc = 0x4B054Cu;
label_4b054c:
    // 0x4b054c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x4b054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4b0550:
    // 0x4b0550: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x4b0550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_4b0554:
    // 0x4b0554: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4b0554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4b0558:
    // 0x4b0558: 0x54600043  bnel        $v1, $zero, . + 4 + (0x43 << 2)
label_4b055c:
    if (ctx->pc == 0x4B055Cu) {
        ctx->pc = 0x4B055Cu;
            // 0x4b055c: 0x8e430da0  lw          $v1, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->pc = 0x4B0560u;
        goto label_4b0560;
    }
    ctx->pc = 0x4B0558u;
    {
        const bool branch_taken_0x4b0558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0558) {
            ctx->pc = 0x4B055Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0558u;
            // 0x4b055c: 0x8e430da0  lw          $v1, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0668u;
            goto label_4b0668;
        }
    }
    ctx->pc = 0x4B0560u;
label_4b0560:
    // 0x4b0560: 0x8e440d6c  lw          $a0, 0xD6C($s2)
    ctx->pc = 0x4b0560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_4b0564:
    // 0x4b0564: 0xc6450e8c  lwc1        $f5, 0xE8C($s2)
    ctx->pc = 0x4b0564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4b0568:
    // 0x4b0568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b0568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b056c:
    // 0x4b056c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b0570:
    // 0x4b0570: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4b0570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4b0574:
    // 0x4b0574: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x4b0574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0578:
    // 0x4b0578: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x4b0578u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_4b057c:
    // 0x4b057c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4b057cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4b0580:
    // 0x4b0580: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4b0584:
    if (ctx->pc == 0x4B0584u) {
        ctx->pc = 0x4B0584u;
            // 0x4b0584: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4B0588u;
        goto label_4b0588;
    }
    ctx->pc = 0x4B0580u;
    {
        const bool branch_taken_0x4b0580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B0584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0580u;
            // 0x4b0584: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0580) {
            ctx->pc = 0x4B058Cu;
            goto label_4b058c;
        }
    }
    ctx->pc = 0x4B0588u;
label_4b0588:
    // 0x4b0588: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b0588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b058c:
    // 0x4b058c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4b058cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4b0590:
    // 0x4b0590: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b0590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4b0594:
    // 0x4b0594: 0x652826  xor         $a1, $v1, $a1
    ctx->pc = 0x4b0594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_4b0598:
    // 0x4b0598: 0x248457f8  addiu       $a0, $a0, 0x57F8
    ctx->pc = 0x4b0598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22520));
label_4b059c:
    // 0x4b059c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4b059cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4b05a0:
    // 0x4b05a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b05a4:
    // 0x4b05a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4b05a8:
    // 0x4b05a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b05a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b05ac:
    // 0x4b05ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b05acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b05b0:
    // 0x4b05b0: 0x0  nop
    ctx->pc = 0x4b05b0u;
    // NOP
label_4b05b4:
    // 0x4b05b4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x4b05b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b05b8:
    // 0x4b05b8: 0xa2240111  sb          $a0, 0x111($s1)
    ctx->pc = 0x4b05b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 273), (uint8_t)GPR_U32(ctx, 4));
label_4b05bc:
    // 0x4b05bc: 0x82250114  lb          $a1, 0x114($s1)
    ctx->pc = 0x4b05bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
label_4b05c0:
    // 0x4b05c0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x4b05c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_4b05c4:
    // 0x4b05c4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4b05c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4b05c8:
    // 0x4b05c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4b05c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4b05cc:
    // 0x4b05cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4b05ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4b05d0:
    // 0x4b05d0: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x4b05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_4b05d4:
    // 0x4b05d4: 0x8ca5005c  lw          $a1, 0x5C($a1)
    ctx->pc = 0x4b05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_4b05d8:
    // 0x4b05d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b05d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4b05dc:
    // 0x4b05dc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4b05dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4b05e0:
    // 0x4b05e0: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x4b05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
label_4b05e4:
    // 0x4b05e4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x4b05e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4b05e8:
    // 0x4b05e8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x4b05e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_4b05ec:
    // 0x4b05ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4b05f0:
    if (ctx->pc == 0x4B05F0u) {
        ctx->pc = 0x4B05F0u;
            // 0x4b05f0: 0xae240020  sw          $a0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
        ctx->pc = 0x4B05F4u;
        goto label_4b05f4;
    }
    ctx->pc = 0x4B05ECu;
    {
        const bool branch_taken_0x4b05ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B05ECu;
            // 0x4b05f0: 0xae240020  sw          $a0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b05ec) {
            ctx->pc = 0x4B05F8u;
            goto label_4b05f8;
        }
    }
    ctx->pc = 0x4B05F4u;
label_4b05f4:
    // 0x4b05f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b05f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b05f8:
    // 0x4b05f8: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4b05fc:
    if (ctx->pc == 0x4B05FCu) {
        ctx->pc = 0x4B05FCu;
            // 0x4b05fc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4B0600u;
        goto label_4b0600;
    }
    ctx->pc = 0x4B05F8u;
    {
        const bool branch_taken_0x4b05f8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4b05f8) {
            ctx->pc = 0x4B05FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B05F8u;
            // 0x4b05fc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B060Cu;
            goto label_4b060c;
        }
    }
    ctx->pc = 0x4B0600u;
label_4b0600:
    // 0x4b0600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b0600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0604:
    // 0x4b0604: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b0608:
    if (ctx->pc == 0x4B0608u) {
        ctx->pc = 0x4B0608u;
            // 0x4b0608: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B060Cu;
        goto label_4b060c;
    }
    ctx->pc = 0x4B0604u;
    {
        const bool branch_taken_0x4b0604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0604u;
            // 0x4b0608: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0604) {
            ctx->pc = 0x4B0624u;
            goto label_4b0624;
        }
    }
    ctx->pc = 0x4B060Cu;
label_4b060c:
    // 0x4b060c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b060cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4b0610:
    // 0x4b0610: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4b0610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4b0614:
    // 0x4b0614: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4b0614u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0618:
    // 0x4b0618: 0x0  nop
    ctx->pc = 0x4b0618u;
    // NOP
label_4b061c:
    // 0x4b061c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x4b061cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4b0620:
    // 0x4b0620: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4b0620u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_4b0624:
    // 0x4b0624: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x4b0624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_4b0628:
    // 0x4b0628: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4b0628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4b062c:
    // 0x4b062c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4b062cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b0630:
    // 0x4b0630: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b0630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b0634:
    // 0x4b0634: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4b0634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b0638:
    // 0x4b0638: 0x0  nop
    ctx->pc = 0x4b0638u;
    // NOP
label_4b063c:
    // 0x4b063c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4b063cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b0640:
    // 0x4b0640: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x4b0640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
label_4b0644:
    // 0x4b0644: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x4b0644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_4b0648:
    // 0x4b0648: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x4b0648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_4b064c:
    // 0x4b064c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x4b064cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_4b0650:
    // 0x4b0650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b0650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0654:
    // 0x4b0654: 0x0  nop
    ctx->pc = 0x4b0654u;
    // NOP
label_4b0658:
    // 0x4b0658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b0658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4b065c:
    // 0x4b065c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x4b065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_4b0660:
    // 0x4b0660: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x4b0660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_4b0664:
    // 0x4b0664: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x4b0664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_4b0668:
    // 0x4b0668: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4b0668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4b066c:
    // 0x4b066c: 0x106003e2  beqz        $v1, . + 4 + (0x3E2 << 2)
label_4b0670:
    if (ctx->pc == 0x4B0670u) {
        ctx->pc = 0x4B0674u;
        goto label_4b0674;
    }
    ctx->pc = 0x4B066Cu;
    {
        const bool branch_taken_0x4b066c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b066c) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0674u;
label_4b0674:
    // 0x4b0674: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x4b0674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4b0678:
    // 0x4b0678: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4b0678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4b067c:
    // 0x4b067c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4b067cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4b0680:
    // 0x4b0680: 0x320f809  jalr        $t9
label_4b0684:
    if (ctx->pc == 0x4B0684u) {
        ctx->pc = 0x4B0684u;
            // 0x4b0684: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B0688u;
        goto label_4b0688;
    }
    ctx->pc = 0x4B0680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0688u);
        ctx->pc = 0x4B0684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0680u;
            // 0x4b0684: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0688u; }
            if (ctx->pc != 0x4B0688u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0688u;
label_4b0688:
    // 0x4b0688: 0x8e420d74  lw          $v0, 0xD74($s2)
    ctx->pc = 0x4b0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_4b068c:
    // 0x4b068c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b0690:
    // 0x4b0690: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b0690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b0694:
    // 0x4b0694: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x4b0694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_4b0698:
    // 0x4b0698: 0x24a55840  addiu       $a1, $a1, 0x5840
    ctx->pc = 0x4b0698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
label_4b069c:
    // 0x4b069c: 0xc04cc04  jal         func_133010
label_4b06a0:
    if (ctx->pc == 0x4B06A0u) {
        ctx->pc = 0x4B06A0u;
            // 0x4b06a0: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->pc = 0x4B06A4u;
        goto label_4b06a4;
    }
    ctx->pc = 0x4B069Cu;
    SET_GPR_U32(ctx, 31, 0x4B06A4u);
    ctx->pc = 0x4B06A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B069Cu;
            // 0x4b06a0: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B06A4u; }
        if (ctx->pc != 0x4B06A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B06A4u; }
        if (ctx->pc != 0x4B06A4u) { return; }
    }
    ctx->pc = 0x4B06A4u;
label_4b06a4:
    // 0x4b06a4: 0xae400690  sw          $zero, 0x690($s2)
    ctx->pc = 0x4b06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 0));
label_4b06a8:
    // 0x4b06a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b06a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b06ac:
    // 0x4b06ac: 0xae40068c  sw          $zero, 0x68C($s2)
    ctx->pc = 0x4b06acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
label_4b06b0:
    // 0x4b06b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4b06b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4b06b4:
    // 0x4b06b4: 0xc07649c  jal         func_1D9270
label_4b06b8:
    if (ctx->pc == 0x4B06B8u) {
        ctx->pc = 0x4B06B8u;
            // 0x4b06b8: 0xae400de8  sw          $zero, 0xDE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
        ctx->pc = 0x4B06BCu;
        goto label_4b06bc;
    }
    ctx->pc = 0x4B06B4u;
    SET_GPR_U32(ctx, 31, 0x4B06BCu);
    ctx->pc = 0x4B06B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B06B4u;
            // 0x4b06b8: 0xae400de8  sw          $zero, 0xDE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B06BCu; }
        if (ctx->pc != 0x4B06BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B06BCu; }
        if (ctx->pc != 0x4B06BCu) { return; }
    }
    ctx->pc = 0x4B06BCu;
label_4b06bc:
    // 0x4b06bc: 0x3c033ef1  lui         $v1, 0x3EF1
    ctx->pc = 0x4b06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16113 << 16));
label_4b06c0:
    // 0x4b06c0: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x4b06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_4b06c4:
    // 0x4b06c4: 0x34634639  ori         $v1, $v1, 0x4639
    ctx->pc = 0x4b06c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17977);
label_4b06c8:
    // 0x4b06c8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x4b06c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_4b06cc:
    // 0x4b06cc: 0xc6410e8c  lwc1        $f1, 0xE8C($s2)
    ctx->pc = 0x4b06ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b06d0:
    // 0x4b06d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b06d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b06d4:
    // 0x4b06d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b06d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b06d8:
    // 0x4b06d8: 0x0  nop
    ctx->pc = 0x4b06d8u;
    // NOP
label_4b06dc:
    // 0x4b06dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4b06dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4b06e0:
    // 0x4b06e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b06e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b06e4:
    // 0x4b06e4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_4b06e8:
    if (ctx->pc == 0x4B06E8u) {
        ctx->pc = 0x4B06E8u;
            // 0x4b06e8: 0xc6540de4  lwc1        $f20, 0xDE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x4B06ECu;
        goto label_4b06ec;
    }
    ctx->pc = 0x4B06E4u;
    {
        const bool branch_taken_0x4b06e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b06e4) {
            ctx->pc = 0x4B06E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B06E4u;
            // 0x4b06e8: 0xc6540de4  lwc1        $f20, 0xDE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B070Cu;
            goto label_4b070c;
        }
    }
    ctx->pc = 0x4B06ECu;
label_4b06ec:
    // 0x4b06ec: 0x3c02be0e  lui         $v0, 0xBE0E
    ctx->pc = 0x4b06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48654 << 16));
label_4b06f0:
    // 0x4b06f0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x4b06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_4b06f4:
    // 0x4b06f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b06f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b06f8:
    // 0x4b06f8: 0x0  nop
    ctx->pc = 0x4b06f8u;
    // NOP
label_4b06fc:
    // 0x4b06fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b06fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0700:
    // 0x4b0700: 0x4502005c  bc1fl       . + 4 + (0x5C << 2)
label_4b0704:
    if (ctx->pc == 0x4B0704u) {
        ctx->pc = 0x4B0704u;
            // 0x4b0704: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x4B0708u;
        goto label_4b0708;
    }
    ctx->pc = 0x4B0700u;
    {
        const bool branch_taken_0x4b0700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0700) {
            ctx->pc = 0x4B0704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0700u;
            // 0x4b0704: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0874u;
            goto label_4b0874;
        }
    }
    ctx->pc = 0x4B0708u;
label_4b0708:
    // 0x4b0708: 0xc6540de4  lwc1        $f20, 0xDE4($s2)
    ctx->pc = 0x4b0708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b070c:
    // 0x4b070c: 0xc0754b4  jal         func_1D52D0
label_4b0710:
    if (ctx->pc == 0x4B0710u) {
        ctx->pc = 0x4B0710u;
            // 0x4b0710: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x4B0714u;
        goto label_4b0714;
    }
    ctx->pc = 0x4B070Cu;
    SET_GPR_U32(ctx, 31, 0x4B0714u);
    ctx->pc = 0x4B0710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B070Cu;
            // 0x4b0710: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0714u; }
        if (ctx->pc != 0x4B0714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0714u; }
        if (ctx->pc != 0x4B0714u) { return; }
    }
    ctx->pc = 0x4B0714u;
label_4b0714:
    // 0x4b0714: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4b0714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0718:
    // 0x4b0718: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x4b0718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
label_4b071c:
    // 0x4b071c: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x4b071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b0720:
    // 0x4b0720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b0720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0724:
    // 0x4b0724: 0x0  nop
    ctx->pc = 0x4b0724u;
    // NOP
label_4b0728:
    // 0x4b0728: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4b0728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4b072c:
    // 0x4b072c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4b072cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4b0730:
    // 0x4b0730: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4b0730u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4b0734:
    // 0x4b0734: 0xe6400dc4  swc1        $f0, 0xDC4($s2)
    ctx->pc = 0x4b0734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3524), bits); }
label_4b0738:
    // 0x4b0738: 0xc6410e8c  lwc1        $f1, 0xE8C($s2)
    ctx->pc = 0x4b0738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b073c:
    // 0x4b073c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b073cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0740:
    // 0x4b0740: 0x0  nop
    ctx->pc = 0x4b0740u;
    // NOP
label_4b0744:
    // 0x4b0744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b0744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0748:
    // 0x4b0748: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4b074c:
    if (ctx->pc == 0x4B074Cu) {
        ctx->pc = 0x4B074Cu;
            // 0x4b074c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B0750u;
        goto label_4b0750;
    }
    ctx->pc = 0x4B0748u;
    {
        const bool branch_taken_0x4b0748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0748u;
            // 0x4b074c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0748) {
            ctx->pc = 0x4B0754u;
            goto label_4b0754;
        }
    }
    ctx->pc = 0x4B0750u;
label_4b0750:
    // 0x4b0750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b0750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0754:
    // 0x4b0754: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4b0758:
    if (ctx->pc == 0x4B0758u) {
        ctx->pc = 0x4B0758u;
            // 0x4b0758: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4B075Cu;
        goto label_4b075c;
    }
    ctx->pc = 0x4B0754u;
    {
        const bool branch_taken_0x4b0754 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b0754) {
            ctx->pc = 0x4B0758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0754u;
            // 0x4b0758: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0768u;
            goto label_4b0768;
        }
    }
    ctx->pc = 0x4B075Cu;
label_4b075c:
    // 0x4b075c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b075cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0760:
    // 0x4b0760: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b0764:
    if (ctx->pc == 0x4B0764u) {
        ctx->pc = 0x4B0764u;
            // 0x4b0764: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B0768u;
        goto label_4b0768;
    }
    ctx->pc = 0x4B0760u;
    {
        const bool branch_taken_0x4b0760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0760u;
            // 0x4b0764: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0760) {
            ctx->pc = 0x4B0780u;
            goto label_4b0780;
        }
    }
    ctx->pc = 0x4B0768u;
label_4b0768:
    // 0x4b0768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b076c:
    // 0x4b076c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b0770:
    // 0x4b0770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b0770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0774:
    // 0x4b0774: 0x0  nop
    ctx->pc = 0x4b0774u;
    // NOP
label_4b0778:
    // 0x4b0778: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4b0778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4b077c:
    // 0x4b077c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4b077cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4b0780:
    // 0x4b0780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b0780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b0784:
    // 0x4b0784: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4b0784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4b0788:
    // 0x4b0788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b0788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b078c:
    // 0x4b078c: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x4b078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_4b0790:
    // 0x4b0790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b0790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0794:
    // 0x4b0794: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b0794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b0798:
    // 0x4b0798: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b0798u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b079c:
    // 0x4b079c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x4b079cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4b07a0:
    // 0x4b07a0: 0xc0754b4  jal         func_1D52D0
label_4b07a4:
    if (ctx->pc == 0x4B07A4u) {
        ctx->pc = 0x4B07A4u;
            // 0x4b07a4: 0xe6400e78  swc1        $f0, 0xE78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3704), bits); }
        ctx->pc = 0x4B07A8u;
        goto label_4b07a8;
    }
    ctx->pc = 0x4B07A0u;
    SET_GPR_U32(ctx, 31, 0x4B07A8u);
    ctx->pc = 0x4B07A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B07A0u;
            // 0x4b07a4: 0xe6400e78  swc1        $f0, 0xE78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3704), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B07A8u; }
        if (ctx->pc != 0x4B07A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B07A8u; }
        if (ctx->pc != 0x4B07A8u) { return; }
    }
    ctx->pc = 0x4B07A8u;
label_4b07a8:
    // 0x4b07a8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x4b07a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4b07ac:
    // 0x4b07ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x4b07acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_4b07b0:
    // 0x4b07b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4b07b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4b07b4:
    // 0x4b07b4: 0x5460002c  bnel        $v1, $zero, . + 4 + (0x2C << 2)
label_4b07b8:
    if (ctx->pc == 0x4B07B8u) {
        ctx->pc = 0x4B07B8u;
            // 0x4b07b8: 0xae400e8c  sw          $zero, 0xE8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3724), GPR_U32(ctx, 0));
        ctx->pc = 0x4B07BCu;
        goto label_4b07bc;
    }
    ctx->pc = 0x4B07B4u;
    {
        const bool branch_taken_0x4b07b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b07b4) {
            ctx->pc = 0x4B07B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B07B4u;
            // 0x4b07b8: 0xae400e8c  sw          $zero, 0xE8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0868u;
            goto label_4b0868;
        }
    }
    ctx->pc = 0x4B07BCu;
label_4b07bc:
    // 0x4b07bc: 0x8e430d6c  lw          $v1, 0xD6C($s2)
    ctx->pc = 0x4b07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_4b07c0:
    // 0x4b07c0: 0xc6410e78  lwc1        $f1, 0xE78($s2)
    ctx->pc = 0x4b07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b07c4:
    // 0x4b07c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b07c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b07c8:
    // 0x4b07c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b07cc:
    // 0x4b07cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4b07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4b07d0:
    // 0x4b07d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b07d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b07d4:
    // 0x4b07d4: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x4b07d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_4b07d8:
    // 0x4b07d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4b07d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4b07dc:
    // 0x4b07dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4b07e0:
    if (ctx->pc == 0x4B07E0u) {
        ctx->pc = 0x4B07E0u;
            // 0x4b07e0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4B07E4u;
        goto label_4b07e4;
    }
    ctx->pc = 0x4B07DCu;
    {
        const bool branch_taken_0x4b07dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B07E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B07DCu;
            // 0x4b07e0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b07dc) {
            ctx->pc = 0x4B07E8u;
            goto label_4b07e8;
        }
    }
    ctx->pc = 0x4B07E4u;
label_4b07e4:
    // 0x4b07e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b07e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b07e8:
    // 0x4b07e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4b07e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4b07ec:
    // 0x4b07ec: 0x8226010c  lb          $a2, 0x10C($s1)
    ctx->pc = 0x4b07ecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_4b07f0:
    // 0x4b07f0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4b07f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_4b07f4:
    // 0x4b07f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b07f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b07f8:
    // 0x4b07f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4b07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b07fc:
    // 0x4b07fc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b07fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4b0800:
    // 0x4b0800: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x4b0800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
label_4b0804:
    // 0x4b0804: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x4b0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
label_4b0808:
    // 0x4b0808: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4b0808u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4b080c:
    // 0x4b080c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b0810:
    // 0x4b0810: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b0810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b0814:
    // 0x4b0814: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4b0814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0818:
    // 0x4b0818: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x4b0818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4b081c:
    // 0x4b081c: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x4b081cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b0820:
    // 0x4b0820: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b0820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4b0824:
    // 0x4b0824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0828:
    // 0x4b0828: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b0828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4b082c:
    // 0x4b082c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b0830:
    // 0x4b0830: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4b0830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4b0834:
    // 0x4b0834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b0834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b0838:
    // 0x4b0838: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b0838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b083c:
    // 0x4b083c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b083cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b0840:
    // 0x4b0840: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b0840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b0844:
    // 0x4b0844: 0x320f809  jalr        $t9
label_4b0848:
    if (ctx->pc == 0x4B0848u) {
        ctx->pc = 0x4B0848u;
            // 0x4b0848: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B084Cu;
        goto label_4b084c;
    }
    ctx->pc = 0x4B0844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B084Cu);
        ctx->pc = 0x4B0848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0844u;
            // 0x4b0848: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B084Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B084Cu; }
            if (ctx->pc != 0x4B084Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B084Cu;
label_4b084c:
    // 0x4b084c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b084cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b0850:
    // 0x4b0850: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4b0850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b0854:
    // 0x4b0854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0858:
    // 0x4b0858: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4b0858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4b085c:
    // 0x4b085c: 0x320f809  jalr        $t9
label_4b0860:
    if (ctx->pc == 0x4B0860u) {
        ctx->pc = 0x4B0860u;
            // 0x4b0860: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0864u;
        goto label_4b0864;
    }
    ctx->pc = 0x4B085Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0864u);
        ctx->pc = 0x4B0860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B085Cu;
            // 0x4b0860: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0864u; }
            if (ctx->pc != 0x4B0864u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0864u;
label_4b0864:
    // 0x4b0864: 0xae400e8c  sw          $zero, 0xE8C($s2)
    ctx->pc = 0x4b0864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3724), GPR_U32(ctx, 0));
label_4b0868:
    // 0x4b0868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b0868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b086c:
    // 0x4b086c: 0x10000362  b           . + 4 + (0x362 << 2)
label_4b0870:
    if (ctx->pc == 0x4B0870u) {
        ctx->pc = 0x4B0870u;
            // 0x4b0870: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x4B0874u;
        goto label_4b0874;
    }
    ctx->pc = 0x4B086Cu;
    {
        const bool branch_taken_0x4b086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B086Cu;
            // 0x4b0870: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b086c) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0874u;
label_4b0874:
    // 0x4b0874: 0xc0754b4  jal         func_1D52D0
label_4b0878:
    if (ctx->pc == 0x4B0878u) {
        ctx->pc = 0x4B087Cu;
        goto label_4b087c;
    }
    ctx->pc = 0x4B0874u;
    SET_GPR_U32(ctx, 31, 0x4B087Cu);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B087Cu; }
        if (ctx->pc != 0x4B087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B087Cu; }
        if (ctx->pc != 0x4B087Cu) { return; }
    }
    ctx->pc = 0x4B087Cu;
label_4b087c:
    // 0x4b087c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4b087cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4b0880:
    // 0x4b0880: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4b0880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_4b0884:
    // 0x4b0884: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4b0884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b0888:
    // 0x4b0888: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_4b088c:
    if (ctx->pc == 0x4B088Cu) {
        ctx->pc = 0x4B088Cu;
            // 0x4b088c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0890u;
        goto label_4b0890;
    }
    ctx->pc = 0x4B0888u;
    {
        const bool branch_taken_0x4b0888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0888) {
            ctx->pc = 0x4B088Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0888u;
            // 0x4b088c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B08F8u;
            goto label_4b08f8;
        }
    }
    ctx->pc = 0x4B0890u;
label_4b0890:
    // 0x4b0890: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x4b0890u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_4b0894:
    // 0x4b0894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b0894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b0898:
    // 0x4b0898: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b0898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b089c:
    // 0x4b089c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4b089cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b08a0:
    // 0x4b08a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b08a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b08a4:
    // 0x4b08a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b08a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b08a8:
    // 0x4b08a8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4b08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b08ac:
    // 0x4b08ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4b08acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b08b0:
    // 0x4b08b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4b08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4b08b4:
    // 0x4b08b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b08b8:
    // 0x4b08b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4b08bc:
    // 0x4b08bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b08c0:
    // 0x4b08c0: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4b08c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4b08c4:
    // 0x4b08c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b08c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b08c8:
    // 0x4b08c8: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b08c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b08cc:
    // 0x4b08cc: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b08ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b08d0:
    // 0x4b08d0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b08d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b08d4:
    // 0x4b08d4: 0x320f809  jalr        $t9
label_4b08d8:
    if (ctx->pc == 0x4B08D8u) {
        ctx->pc = 0x4B08D8u;
            // 0x4b08d8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B08DCu;
        goto label_4b08dc;
    }
    ctx->pc = 0x4B08D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B08DCu);
        ctx->pc = 0x4B08D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B08D4u;
            // 0x4b08d8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B08DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B08DCu; }
            if (ctx->pc != 0x4B08DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4B08DCu;
label_4b08dc:
    // 0x4b08dc: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b08dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b08e0:
    // 0x4b08e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b08e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b08e4:
    // 0x4b08e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4b08e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b08e8:
    // 0x4b08e8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4b08e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4b08ec:
    // 0x4b08ec: 0x320f809  jalr        $t9
label_4b08f0:
    if (ctx->pc == 0x4B08F0u) {
        ctx->pc = 0x4B08F0u;
            // 0x4b08f0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4B08F4u;
        goto label_4b08f4;
    }
    ctx->pc = 0x4B08ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B08F4u);
        ctx->pc = 0x4B08F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B08ECu;
            // 0x4b08f0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B08F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B08F4u; }
            if (ctx->pc != 0x4B08F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4B08F4u;
label_4b08f4:
    // 0x4b08f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b08f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b08f8:
    // 0x4b08f8: 0xc0c1590  jal         func_305640
label_4b08fc:
    if (ctx->pc == 0x4B08FCu) {
        ctx->pc = 0x4B0900u;
        goto label_4b0900;
    }
    ctx->pc = 0x4B08F8u;
    SET_GPR_U32(ctx, 31, 0x4B0900u);
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0900u; }
        if (ctx->pc != 0x4B0900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0900u; }
        if (ctx->pc != 0x4B0900u) { return; }
    }
    ctx->pc = 0x4B0900u;
label_4b0900:
    // 0x4b0900: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x4b0900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4b0904:
    // 0x4b0904: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4b0904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4b0908:
    // 0x4b0908: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4b0908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4b090c:
    // 0x4b090c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4b090cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4b0910:
    // 0x4b0910: 0x320f809  jalr        $t9
label_4b0914:
    if (ctx->pc == 0x4B0914u) {
        ctx->pc = 0x4B0914u;
            // 0x4b0914: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4B0918u;
        goto label_4b0918;
    }
    ctx->pc = 0x4B0910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0918u);
        ctx->pc = 0x4B0914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0910u;
            // 0x4b0914: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0918u; }
            if (ctx->pc != 0x4B0918u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0918u;
label_4b0918:
    // 0x4b0918: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x4b0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b091c:
    // 0x4b091c: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x4b091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_4b0920:
    // 0x4b0920: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4b0920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4b0924:
    // 0x4b0924: 0xc64d0880  lwc1        $f13, 0x880($s2)
    ctx->pc = 0x4b0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4b0928:
    // 0x4b0928: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4b0928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b092c:
    // 0x4b092c: 0xc0c753c  jal         func_31D4F0
label_4b0930:
    if (ctx->pc == 0x4B0930u) {
        ctx->pc = 0x4B0930u;
            // 0x4b0930: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->pc = 0x4B0934u;
        goto label_4b0934;
    }
    ctx->pc = 0x4B092Cu;
    SET_GPR_U32(ctx, 31, 0x4B0934u);
    ctx->pc = 0x4B0930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B092Cu;
            // 0x4b0930: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0934u; }
        if (ctx->pc != 0x4B0934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0934u; }
        if (ctx->pc != 0x4B0934u) { return; }
    }
    ctx->pc = 0x4B0934u;
label_4b0934:
    // 0x4b0934: 0x8e420d9c  lw          $v0, 0xD9C($s2)
    ctx->pc = 0x4b0934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_4b0938:
    // 0x4b0938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b0938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b093c:
    // 0x4b093c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x4b093cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
label_4b0940:
    // 0x4b0940: 0xae420d9c  sw          $v0, 0xD9C($s2)
    ctx->pc = 0x4b0940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 2));
label_4b0944:
    // 0x4b0944: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4b0944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4b0948:
    // 0x4b0948: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4b0948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4b094c:
    // 0x4b094c: 0x320f809  jalr        $t9
label_4b0950:
    if (ctx->pc == 0x4B0950u) {
        ctx->pc = 0x4B0950u;
            // 0x4b0950: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4B0954u;
        goto label_4b0954;
    }
    ctx->pc = 0x4B094Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0954u);
        ctx->pc = 0x4B0950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B094Cu;
            // 0x4b0950: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0954u; }
            if (ctx->pc != 0x4B0954u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0954u;
label_4b0954:
    // 0x4b0954: 0x10000328  b           . + 4 + (0x328 << 2)
label_4b0958:
    if (ctx->pc == 0x4B0958u) {
        ctx->pc = 0x4B095Cu;
        goto label_4b095c;
    }
    ctx->pc = 0x4B0954u;
    {
        const bool branch_taken_0x4b0954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0954) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B095Cu;
label_4b095c:
    // 0x4b095c: 0x3c023f9e  lui         $v0, 0x3F9E
    ctx->pc = 0x4b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16286 << 16));
label_4b0960:
    // 0x4b0960: 0x34429d93  ori         $v0, $v0, 0x9D93
    ctx->pc = 0x4b0960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40339);
label_4b0964:
    // 0x4b0964: 0xc6430e7c  lwc1        $f3, 0xE7C($s2)
    ctx->pc = 0x4b0964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b0968:
    // 0x4b0968: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4b0968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b096c:
    // 0x4b096c: 0x0  nop
    ctx->pc = 0x4b096cu;
    // NOP
label_4b0970:
    // 0x4b0970: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x4b0970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0974:
    // 0x4b0974: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_4b0978:
    if (ctx->pc == 0x4B0978u) {
        ctx->pc = 0x4B0978u;
            // 0x4b0978: 0xc6400880  lwc1        $f0, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4B097Cu;
        goto label_4b097c;
    }
    ctx->pc = 0x4B0974u;
    {
        const bool branch_taken_0x4b0974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0974) {
            ctx->pc = 0x4B0978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0974u;
            // 0x4b0978: 0xc6400880  lwc1        $f0, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0A10u;
            goto label_4b0a10;
        }
    }
    ctx->pc = 0x4B097Cu;
label_4b097c:
    // 0x4b097c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b0980:
    // 0x4b0980: 0x3c033d66  lui         $v1, 0x3D66
    ctx->pc = 0x4b0980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15718 << 16));
label_4b0984:
    // 0x4b0984: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4b0984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b0988:
    // 0x4b0988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b0988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b098c:
    // 0x4b098c: 0x0  nop
    ctx->pc = 0x4b098cu;
    // NOP
label_4b0990:
    // 0x4b0990: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x4b0990u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_4b0994:
    // 0x4b0994: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x4b0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0998:
    // 0x4b0998: 0x3462b6a7  ori         $v0, $v1, 0xB6A7
    ctx->pc = 0x4b0998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46759);
label_4b099c:
    // 0x4b099c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b099cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b09a0:
    // 0x4b09a0: 0x0  nop
    ctx->pc = 0x4b09a0u;
    // NOP
label_4b09a4:
    // 0x4b09a4: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x4b09a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_4b09a8:
    // 0x4b09a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4b09a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b09ac:
    // 0x4b09ac: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_4b09b0:
    if (ctx->pc == 0x4B09B0u) {
        ctx->pc = 0x4B09B0u;
            // 0x4b09b0: 0xe6400e7c  swc1        $f0, 0xE7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3708), bits); }
        ctx->pc = 0x4B09B4u;
        goto label_4b09b4;
    }
    ctx->pc = 0x4B09ACu;
    {
        const bool branch_taken_0x4b09ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B09B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B09ACu;
            // 0x4b09b0: 0xe6400e7c  swc1        $f0, 0xE7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3708), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b09ac) {
            ctx->pc = 0x4B0A0Cu;
            goto label_4b0a0c;
        }
    }
    ctx->pc = 0x4B09B4u;
label_4b09b4:
    // 0x4b09b4: 0xe6420e7c  swc1        $f2, 0xE7C($s2)
    ctx->pc = 0x4b09b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3708), bits); }
label_4b09b8:
    // 0x4b09b8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4b09b8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4b09bc:
    // 0x4b09bc: 0x8e420e38  lw          $v0, 0xE38($s2)
    ctx->pc = 0x4b09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_4b09c0:
    // 0x4b09c0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4b09c4:
    if (ctx->pc == 0x4B09C4u) {
        ctx->pc = 0x4B09C4u;
            // 0x4b09c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B09C8u;
        goto label_4b09c8;
    }
    ctx->pc = 0x4B09C0u;
    {
        const bool branch_taken_0x4b09c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B09C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B09C0u;
            // 0x4b09c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b09c0) {
            ctx->pc = 0x4B09D8u;
            goto label_4b09d8;
        }
    }
    ctx->pc = 0x4B09C8u;
label_4b09c8:
    // 0x4b09c8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4b09c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4b09cc:
    // 0x4b09cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4b09d0:
    if (ctx->pc == 0x4B09D0u) {
        ctx->pc = 0x4B09D4u;
        goto label_4b09d4;
    }
    ctx->pc = 0x4B09CCu;
    {
        const bool branch_taken_0x4b09cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b09cc) {
            ctx->pc = 0x4B09D8u;
            goto label_4b09d8;
        }
    }
    ctx->pc = 0x4B09D4u;
label_4b09d4:
    // 0x4b09d4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4b09d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b09d8:
    // 0x4b09d8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4b09dc:
    if (ctx->pc == 0x4B09DCu) {
        ctx->pc = 0x4B09E0u;
        goto label_4b09e0;
    }
    ctx->pc = 0x4B09D8u;
    {
        const bool branch_taken_0x4b09d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b09d8) {
            ctx->pc = 0x4B09F4u;
            goto label_4b09f4;
        }
    }
    ctx->pc = 0x4B09E0u;
label_4b09e0:
    // 0x4b09e0: 0xc075eb4  jal         func_1D7AD0
label_4b09e4:
    if (ctx->pc == 0x4B09E4u) {
        ctx->pc = 0x4B09E4u;
            // 0x4b09e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B09E8u;
        goto label_4b09e8;
    }
    ctx->pc = 0x4B09E0u;
    SET_GPR_U32(ctx, 31, 0x4B09E8u);
    ctx->pc = 0x4B09E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B09E0u;
            // 0x4b09e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B09E8u; }
        if (ctx->pc != 0x4B09E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B09E8u; }
        if (ctx->pc != 0x4B09E8u) { return; }
    }
    ctx->pc = 0x4B09E8u;
label_4b09e8:
    // 0x4b09e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4b09ec:
    if (ctx->pc == 0x4B09ECu) {
        ctx->pc = 0x4B09F0u;
        goto label_4b09f0;
    }
    ctx->pc = 0x4B09E8u;
    {
        const bool branch_taken_0x4b09e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b09e8) {
            ctx->pc = 0x4B09F4u;
            goto label_4b09f4;
        }
    }
    ctx->pc = 0x4B09F0u;
label_4b09f0:
    // 0x4b09f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b09f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b09f4:
    // 0x4b09f4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4b09f8:
    if (ctx->pc == 0x4B09F8u) {
        ctx->pc = 0x4B09F8u;
            // 0x4b09f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B09FCu;
        goto label_4b09fc;
    }
    ctx->pc = 0x4B09F4u;
    {
        const bool branch_taken_0x4b09f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b09f4) {
            ctx->pc = 0x4B09F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B09F4u;
            // 0x4b09f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0A08u;
            goto label_4b0a08;
        }
    }
    ctx->pc = 0x4B09FCu;
label_4b09fc:
    // 0x4b09fc: 0xc072a56  jal         func_1CA958
label_4b0a00:
    if (ctx->pc == 0x4B0A00u) {
        ctx->pc = 0x4B0A00u;
            // 0x4b0a00: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x4B0A04u;
        goto label_4b0a04;
    }
    ctx->pc = 0x4B09FCu;
    SET_GPR_U32(ctx, 31, 0x4B0A04u);
    ctx->pc = 0x4B0A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B09FCu;
            // 0x4b0a00: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0A04u; }
        if (ctx->pc != 0x4B0A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0A04u; }
        if (ctx->pc != 0x4B0A04u) { return; }
    }
    ctx->pc = 0x4B0A04u;
label_4b0a04:
    // 0x4b0a04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b0a08:
    // 0x4b0a08: 0xae420e30  sw          $v0, 0xE30($s2)
    ctx->pc = 0x4b0a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 2));
label_4b0a0c:
    // 0x4b0a0c: 0xc6400880  lwc1        $f0, 0x880($s2)
    ctx->pc = 0x4b0a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0a10:
    // 0x4b0a10: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x4b0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_4b0a14:
    // 0x4b0a14: 0xc6420e7c  lwc1        $f2, 0xE7C($s2)
    ctx->pc = 0x4b0a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b0a18:
    // 0x4b0a18: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x4b0a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_4b0a1c:
    // 0x4b0a1c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b0a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b0a20:
    // 0x4b0a20: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x4b0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_4b0a24:
    // 0x4b0a24: 0xc6410e78  lwc1        $f1, 0xE78($s2)
    ctx->pc = 0x4b0a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0a28:
    // 0x4b0a28: 0x46007018  adda.s      $f14, $f0
    ctx->pc = 0x4b0a28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_4b0a2c:
    // 0x4b0a2c: 0xc6440e8c  lwc1        $f4, 0xE8C($s2)
    ctx->pc = 0x4b0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b0a30:
    // 0x4b0a30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4b0a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b0a34:
    // 0x4b0a34: 0x0  nop
    ctx->pc = 0x4b0a34u;
    // NOP
label_4b0a38:
    // 0x4b0a38: 0x4601101e  madda.s     $f2, $f1
    ctx->pc = 0x4b0a38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_4b0a3c:
    // 0x4b0a3c: 0x46041b1c  madd.s      $f12, $f3, $f4
    ctx->pc = 0x4b0a3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_4b0a40:
    // 0x4b0a40: 0xc0c753c  jal         func_31D4F0
label_4b0a44:
    if (ctx->pc == 0x4B0A44u) {
        ctx->pc = 0x4B0A44u;
            // 0x4b0a44: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B0A48u;
        goto label_4b0a48;
    }
    ctx->pc = 0x4B0A40u;
    SET_GPR_U32(ctx, 31, 0x4B0A48u);
    ctx->pc = 0x4B0A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0A40u;
            // 0x4b0a44: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0A48u; }
        if (ctx->pc != 0x4B0A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0A48u; }
        if (ctx->pc != 0x4B0A48u) { return; }
    }
    ctx->pc = 0x4B0A48u;
label_4b0a48:
    // 0x4b0a48: 0x100002eb  b           . + 4 + (0x2EB << 2)
label_4b0a4c:
    if (ctx->pc == 0x4B0A4Cu) {
        ctx->pc = 0x4B0A50u;
        goto label_4b0a50;
    }
    ctx->pc = 0x4B0A48u;
    {
        const bool branch_taken_0x4b0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0a48) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0A50u;
label_4b0a50:
    // 0x4b0a50: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x4b0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4b0a54:
    // 0x4b0a54: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x4b0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_4b0a58:
    // 0x4b0a58: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4b0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4b0a5c:
    // 0x4b0a5c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4b0a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4b0a60:
    // 0x4b0a60: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4b0a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b0a64:
    // 0x4b0a64: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x4b0a64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_4b0a68:
    // 0x4b0a68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b0a6c:
    // 0x4b0a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0a70:
    // 0x4b0a70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b0a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b0a74:
    // 0x4b0a74: 0x41023  negu        $v0, $a0
    ctx->pc = 0x4b0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_4b0a78:
    // 0x4b0a78: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4b0a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4b0a7c:
    // 0x4b0a7c: 0x0  nop
    ctx->pc = 0x4b0a7cu;
    // NOP
label_4b0a80:
    // 0x4b0a80: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4b0a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4b0a84:
    // 0x4b0a84: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4b0a84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4b0a88:
    // 0x4b0a88: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x4b0a88u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_4b0a8c:
    // 0x4b0a8c: 0xc6410e8c  lwc1        $f1, 0xE8C($s2)
    ctx->pc = 0x4b0a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0a90:
    // 0x4b0a90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4b0a90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b0a94:
    // 0x4b0a94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b0a94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0a98:
    // 0x4b0a98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4b0a9c:
    if (ctx->pc == 0x4B0A9Cu) {
        ctx->pc = 0x4B0A9Cu;
            // 0x4b0a9c: 0xe6410e8c  swc1        $f1, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->pc = 0x4B0AA0u;
        goto label_4b0aa0;
    }
    ctx->pc = 0x4B0A98u;
    {
        const bool branch_taken_0x4b0a98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B0A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0A98u;
            // 0x4b0a9c: 0xe6410e8c  swc1        $f1, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0a98) {
            ctx->pc = 0x4B0AA8u;
            goto label_4b0aa8;
        }
    }
    ctx->pc = 0x4B0AA0u;
label_4b0aa0:
    // 0x4b0aa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4b0aa4:
    if (ctx->pc == 0x4B0AA4u) {
        ctx->pc = 0x4B0AA4u;
            // 0x4b0aa4: 0xe6400e8c  swc1        $f0, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->pc = 0x4B0AA8u;
        goto label_4b0aa8;
    }
    ctx->pc = 0x4B0AA0u;
    {
        const bool branch_taken_0x4b0aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0AA0u;
            // 0x4b0aa4: 0xe6400e8c  swc1        $f0, 0xE8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0aa0) {
            ctx->pc = 0x4B0AC4u;
            goto label_4b0ac4;
        }
    }
    ctx->pc = 0x4B0AA8u;
label_4b0aa8:
    // 0x4b0aa8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4b0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4b0aac:
    // 0x4b0aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0ab0:
    // 0x4b0ab0: 0x0  nop
    ctx->pc = 0x4b0ab0u;
    // NOP
label_4b0ab4:
    // 0x4b0ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b0ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0ab8:
    // 0x4b0ab8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b0abc:
    if (ctx->pc == 0x4B0ABCu) {
        ctx->pc = 0x4B0ABCu;
            // 0x4b0abc: 0xc6420e8c  lwc1        $f2, 0xE8C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4B0AC0u;
        goto label_4b0ac0;
    }
    ctx->pc = 0x4B0AB8u;
    {
        const bool branch_taken_0x4b0ab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0ab8) {
            ctx->pc = 0x4B0ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0AB8u;
            // 0x4b0abc: 0xc6420e8c  lwc1        $f2, 0xE8C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0AC8u;
            goto label_4b0ac8;
        }
    }
    ctx->pc = 0x4B0AC0u;
label_4b0ac0:
    // 0x4b0ac0: 0xe6400e8c  swc1        $f0, 0xE8C($s2)
    ctx->pc = 0x4b0ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3724), bits); }
label_4b0ac4:
    // 0x4b0ac4: 0xc6420e8c  lwc1        $f2, 0xE8C($s2)
    ctx->pc = 0x4b0ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b0ac8:
    // 0x4b0ac8: 0xc6400e78  lwc1        $f0, 0xE78($s2)
    ctx->pc = 0x4b0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0acc:
    // 0x4b0acc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b0accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b0ad0:
    // 0x4b0ad0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4b0ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4b0ad4:
    // 0x4b0ad4: 0x460e0036  c.le.s      $f0, $f14
    ctx->pc = 0x4b0ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0ad8:
    // 0x4b0ad8: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_4b0adc:
    if (ctx->pc == 0x4B0ADCu) {
        ctx->pc = 0x4B0ADCu;
            // 0x4b0adc: 0xc6400880  lwc1        $f0, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4B0AE0u;
        goto label_4b0ae0;
    }
    ctx->pc = 0x4B0AD8u;
    {
        const bool branch_taken_0x4b0ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0ad8) {
            ctx->pc = 0x4B0ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0AD8u;
            // 0x4b0adc: 0xc6400880  lwc1        $f0, 0x880($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0B0Cu;
            goto label_4b0b0c;
        }
    }
    ctx->pc = 0x4B0AE0u;
label_4b0ae0:
    // 0x4b0ae0: 0xc6400880  lwc1        $f0, 0x880($s2)
    ctx->pc = 0x4b0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0ae4:
    // 0x4b0ae4: 0x3c023c87  lui         $v0, 0x3C87
    ctx->pc = 0x4b0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15495 << 16));
label_4b0ae8:
    // 0x4b0ae8: 0x3442d419  ori         $v0, $v0, 0xD419
    ctx->pc = 0x4b0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54297);
label_4b0aec:
    // 0x4b0aec: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x4b0aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_4b0af0:
    // 0x4b0af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b0af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b0af4:
    // 0x4b0af4: 0x0  nop
    ctx->pc = 0x4b0af4u;
    // NOP
label_4b0af8:
    // 0x4b0af8: 0x46007018  adda.s      $f14, $f0
    ctx->pc = 0x4b0af8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_4b0afc:
    // 0x4b0afc: 0x46020b1c  madd.s      $f12, $f1, $f2
    ctx->pc = 0x4b0afcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_4b0b00:
    // 0x4b0b00: 0xc0c753c  jal         func_31D4F0
label_4b0b04:
    if (ctx->pc == 0x4B0B04u) {
        ctx->pc = 0x4B0B04u;
            // 0x4b0b04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B0B08u;
        goto label_4b0b08;
    }
    ctx->pc = 0x4B0B00u;
    SET_GPR_U32(ctx, 31, 0x4B0B08u);
    ctx->pc = 0x4B0B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0B00u;
            // 0x4b0b04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0B08u; }
        if (ctx->pc != 0x4B0B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0B08u; }
        if (ctx->pc != 0x4B0B08u) { return; }
    }
    ctx->pc = 0x4B0B08u;
label_4b0b08:
    // 0x4b0b08: 0xc6400880  lwc1        $f0, 0x880($s2)
    ctx->pc = 0x4b0b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0b0c:
    // 0x4b0b0c: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x4b0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_4b0b10:
    // 0x4b0b10: 0xc6420e7c  lwc1        $f2, 0xE7C($s2)
    ctx->pc = 0x4b0b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b0b14:
    // 0x4b0b14: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x4b0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_4b0b18:
    // 0x4b0b18: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b0b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b0b1c:
    // 0x4b0b1c: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x4b0b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_4b0b20:
    // 0x4b0b20: 0xc6410e78  lwc1        $f1, 0xE78($s2)
    ctx->pc = 0x4b0b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0b24:
    // 0x4b0b24: 0x46007018  adda.s      $f14, $f0
    ctx->pc = 0x4b0b24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_4b0b28:
    // 0x4b0b28: 0xc6440e8c  lwc1        $f4, 0xE8C($s2)
    ctx->pc = 0x4b0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b0b2c:
    // 0x4b0b2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4b0b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b0b30:
    // 0x4b0b30: 0x0  nop
    ctx->pc = 0x4b0b30u;
    // NOP
label_4b0b34:
    // 0x4b0b34: 0x4601101e  madda.s     $f2, $f1
    ctx->pc = 0x4b0b34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_4b0b38:
    // 0x4b0b38: 0x46041b1c  madd.s      $f12, $f3, $f4
    ctx->pc = 0x4b0b38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_4b0b3c:
    // 0x4b0b3c: 0xc0c753c  jal         func_31D4F0
label_4b0b40:
    if (ctx->pc == 0x4B0B40u) {
        ctx->pc = 0x4B0B40u;
            // 0x4b0b40: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B0B44u;
        goto label_4b0b44;
    }
    ctx->pc = 0x4B0B3Cu;
    SET_GPR_U32(ctx, 31, 0x4B0B44u);
    ctx->pc = 0x4B0B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0B3Cu;
            // 0x4b0b40: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0B44u; }
        if (ctx->pc != 0x4B0B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0B44u; }
        if (ctx->pc != 0x4B0B44u) { return; }
    }
    ctx->pc = 0x4B0B44u;
label_4b0b44:
    // 0x4b0b44: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x4b0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
label_4b0b48:
    // 0x4b0b48: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4b0b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b0b4c:
    // 0x4b0b4c: 0xc6540de4  lwc1        $f20, 0xDE4($s2)
    ctx->pc = 0x4b0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b0b50:
    // 0x4b0b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0b54:
    // 0x4b0b54: 0x0  nop
    ctx->pc = 0x4b0b54u;
    // NOP
label_4b0b58:
    // 0x4b0b58: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4b0b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0b5c:
    // 0x4b0b5c: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_4b0b60:
    if (ctx->pc == 0x4B0B60u) {
        ctx->pc = 0x4B0B60u;
            // 0x4b0b60: 0x8e420d60  lw          $v0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x4B0B64u;
        goto label_4b0b64;
    }
    ctx->pc = 0x4B0B5Cu;
    {
        const bool branch_taken_0x4b0b5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0b5c) {
            ctx->pc = 0x4B0B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0B5Cu;
            // 0x4b0b60: 0x8e420d60  lw          $v0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0BCCu;
            goto label_4b0bcc;
        }
    }
    ctx->pc = 0x4B0B64u;
label_4b0b64:
    // 0x4b0b64: 0xc0754b4  jal         func_1D52D0
label_4b0b68:
    if (ctx->pc == 0x4B0B68u) {
        ctx->pc = 0x4B0B68u;
            // 0x4b0b68: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x4B0B6Cu;
        goto label_4b0b6c;
    }
    ctx->pc = 0x4B0B64u;
    SET_GPR_U32(ctx, 31, 0x4B0B6Cu);
    ctx->pc = 0x4B0B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0B64u;
            // 0x4b0b68: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0B6Cu; }
        if (ctx->pc != 0x4B0B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0B6Cu; }
        if (ctx->pc != 0x4B0B6Cu) { return; }
    }
    ctx->pc = 0x4B0B6Cu;
label_4b0b6c:
    // 0x4b0b6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4b0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0b70:
    // 0x4b0b70: 0xc6430de4  lwc1        $f3, 0xDE4($s2)
    ctx->pc = 0x4b0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b0b74:
    // 0x4b0b74: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x4b0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
label_4b0b78:
    // 0x4b0b78: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x4b0b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b0b7c:
    // 0x4b0b7c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x4b0b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4b0b80:
    // 0x4b0b80: 0x3c023af2  lui         $v0, 0x3AF2
    ctx->pc = 0x4b0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15090 << 16));
label_4b0b84:
    // 0x4b0b84: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x4b0b84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_4b0b88:
    // 0x4b0b88: 0x3443b9d5  ori         $v1, $v0, 0xB9D5
    ctx->pc = 0x4b0b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47573);
label_4b0b8c:
    // 0x4b0b8c: 0x3c023ab6  lui         $v0, 0x3AB6
    ctx->pc = 0x4b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15030 << 16));
label_4b0b90:
    // 0x4b0b90: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x4b0b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
label_4b0b94:
    // 0x4b0b94: 0x4605a001  sub.s       $f0, $f20, $f5
    ctx->pc = 0x4b0b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[5]);
label_4b0b98:
    // 0x4b0b98: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x4b0b98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[1];
label_4b0b9c:
    // 0x4b0b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b0b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b0ba0:
    // 0x4b0ba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b0ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0ba4:
    // 0x4b0ba4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b0ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b0ba8:
    // 0x4b0ba8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4b0ba8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b0bac:
    // 0x4b0bac: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x4b0bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_4b0bb0:
    // 0x4b0bb0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x4b0bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4b0bb4:
    // 0x4b0bb4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x4b0bb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0bb8:
    // 0x4b0bb8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b0bbc:
    if (ctx->pc == 0x4B0BBCu) {
        ctx->pc = 0x4B0BBCu;
            // 0x4b0bbc: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x4B0BC0u;
        goto label_4b0bc0;
    }
    ctx->pc = 0x4B0BB8u;
    {
        const bool branch_taken_0x4b0bb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0bb8) {
            ctx->pc = 0x4B0BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0BB8u;
            // 0x4b0bbc: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0BC8u;
            goto label_4b0bc8;
        }
    }
    ctx->pc = 0x4B0BC0u;
label_4b0bc0:
    // 0x4b0bc0: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x4b0bc0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_4b0bc4:
    // 0x4b0bc4: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x4b0bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_4b0bc8:
    // 0x4b0bc8: 0x8e420d60  lw          $v0, 0xD60($s2)
    ctx->pc = 0x4b0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4b0bcc:
    // 0x4b0bcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b0bd0:
    // 0x4b0bd0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x4b0bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_4b0bd4:
    // 0x4b0bd4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4b0bd8:
    if (ctx->pc == 0x4B0BD8u) {
        ctx->pc = 0x4B0BD8u;
            // 0x4b0bd8: 0xc6410de4  lwc1        $f1, 0xDE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4B0BDCu;
        goto label_4b0bdc;
    }
    ctx->pc = 0x4B0BD4u;
    {
        const bool branch_taken_0x4b0bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0bd4) {
            ctx->pc = 0x4B0BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0BD4u;
            // 0x4b0bd8: 0xc6410de4  lwc1        $f1, 0xDE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0C00u;
            goto label_4b0c00;
        }
    }
    ctx->pc = 0x4B0BDCu;
label_4b0bdc:
    // 0x4b0bdc: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x4b0bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
label_4b0be0:
    // 0x4b0be0: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4b0be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b0be4:
    // 0x4b0be4: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x4b0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0be8:
    // 0x4b0be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0bec:
    // 0x4b0bec: 0x0  nop
    ctx->pc = 0x4b0becu;
    // NOP
label_4b0bf0:
    // 0x4b0bf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b0bf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0bf4:
    // 0x4b0bf4: 0x4502007d  bc1fl       . + 4 + (0x7D << 2)
label_4b0bf8:
    if (ctx->pc == 0x4B0BF8u) {
        ctx->pc = 0x4B0BF8u;
            // 0x4b0bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0BFCu;
        goto label_4b0bfc;
    }
    ctx->pc = 0x4B0BF4u;
    {
        const bool branch_taken_0x4b0bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0bf4) {
            ctx->pc = 0x4B0BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0BF4u;
            // 0x4b0bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0DECu;
            goto label_4b0dec;
        }
    }
    ctx->pc = 0x4B0BFCu;
label_4b0bfc:
    // 0x4b0bfc: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x4b0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0c00:
    // 0x4b0c00: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x4b0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
label_4b0c04:
    // 0x4b0c04: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4b0c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b0c08:
    // 0x4b0c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0c0c:
    // 0x4b0c0c: 0x0  nop
    ctx->pc = 0x4b0c0cu;
    // NOP
label_4b0c10:
    // 0x4b0c10: 0xe6410e88  swc1        $f1, 0xE88($s2)
    ctx->pc = 0x4b0c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3720), bits); }
label_4b0c14:
    // 0x4b0c14: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x4b0c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0c18:
    // 0x4b0c18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b0c18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0c1c:
    // 0x4b0c1c: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
label_4b0c20:
    if (ctx->pc == 0x4B0C20u) {
        ctx->pc = 0x4B0C20u;
            // 0x4b0c20: 0xc6400e84  lwc1        $f0, 0xE84($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4B0C24u;
        goto label_4b0c24;
    }
    ctx->pc = 0x4B0C1Cu;
    {
        const bool branch_taken_0x4b0c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0c1c) {
            ctx->pc = 0x4B0C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0C1Cu;
            // 0x4b0c20: 0xc6400e84  lwc1        $f0, 0xE84($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0CDCu;
            goto label_4b0cdc;
        }
    }
    ctx->pc = 0x4B0C24u;
label_4b0c24:
    // 0x4b0c24: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x4b0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_4b0c28:
    // 0x4b0c28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b0c2c:
    // 0x4b0c2c: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_4b0c30:
    if (ctx->pc == 0x4B0C30u) {
        ctx->pc = 0x4B0C34u;
        goto label_4b0c34;
    }
    ctx->pc = 0x4B0C2Cu;
    {
        const bool branch_taken_0x4b0c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b0c2c) {
            ctx->pc = 0x4B0CD8u;
            goto label_4b0cd8;
        }
    }
    ctx->pc = 0x4B0C34u;
label_4b0c34:
    // 0x4b0c34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4b0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4b0c38:
    // 0x4b0c38: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x4b0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_4b0c3c:
    // 0x4b0c3c: 0xae430e30  sw          $v1, 0xE30($s2)
    ctx->pc = 0x4b0c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
label_4b0c40:
    // 0x4b0c40: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4b0c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0c44:
    // 0x4b0c44: 0xae420e90  sw          $v0, 0xE90($s2)
    ctx->pc = 0x4b0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3728), GPR_U32(ctx, 2));
label_4b0c48:
    // 0x4b0c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b0c4c:
    // 0x4b0c4c: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x4b0c4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_4b0c50:
    // 0x4b0c50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b0c54:
    // 0x4b0c54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b0c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b0c58:
    // 0x4b0c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0c5c:
    // 0x4b0c5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b0c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b0c60:
    // 0x4b0c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b0c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0c64:
    // 0x4b0c64: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4b0c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b0c68:
    // 0x4b0c68: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4b0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4b0c6c:
    // 0x4b0c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b0c70:
    // 0x4b0c70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4b0c74:
    // 0x4b0c74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b0c78:
    // 0x4b0c78: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4b0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4b0c7c:
    // 0x4b0c7c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b0c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b0c80:
    // 0x4b0c80: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b0c80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b0c84:
    // 0x4b0c84: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b0c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b0c88:
    // 0x4b0c88: 0x320f809  jalr        $t9
label_4b0c8c:
    if (ctx->pc == 0x4B0C8Cu) {
        ctx->pc = 0x4B0C8Cu;
            // 0x4b0c8c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B0C90u;
        goto label_4b0c90;
    }
    ctx->pc = 0x4B0C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0C90u);
        ctx->pc = 0x4B0C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0C88u;
            // 0x4b0c8c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0C90u; }
            if (ctx->pc != 0x4B0C90u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0C90u;
label_4b0c90:
    // 0x4b0c90: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b0c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b0c94:
    // 0x4b0c94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b0c98:
    // 0x4b0c98: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b0c98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b0c9c:
    // 0x4b0c9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b0c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b0ca0:
    // 0x4b0ca0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b0ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b0ca4:
    // 0x4b0ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0ca8:
    // 0x4b0ca8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b0ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b0cac:
    // 0x4b0cac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4b0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b0cb0:
    // 0x4b0cb0: 0x320f809  jalr        $t9
label_4b0cb4:
    if (ctx->pc == 0x4B0CB4u) {
        ctx->pc = 0x4B0CB4u;
            // 0x4b0cb4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B0CB8u;
        goto label_4b0cb8;
    }
    ctx->pc = 0x4B0CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0CB8u);
        ctx->pc = 0x4B0CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0CB0u;
            // 0x4b0cb4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0CB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0CB8u; }
            if (ctx->pc != 0x4B0CB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0CB8u;
label_4b0cb8:
    // 0x4b0cb8: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b0cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b0cbc:
    // 0x4b0cbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4b0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b0cc0:
    // 0x4b0cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0cc4:
    // 0x4b0cc4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4b0cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4b0cc8:
    // 0x4b0cc8: 0x320f809  jalr        $t9
label_4b0ccc:
    if (ctx->pc == 0x4B0CCCu) {
        ctx->pc = 0x4B0CCCu;
            // 0x4b0ccc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0CD0u;
        goto label_4b0cd0;
    }
    ctx->pc = 0x4B0CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0CD0u);
        ctx->pc = 0x4B0CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0CC8u;
            // 0x4b0ccc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0CD0u; }
            if (ctx->pc != 0x4B0CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0CD0u;
label_4b0cd0:
    // 0x4b0cd0: 0x10000031  b           . + 4 + (0x31 << 2)
label_4b0cd4:
    if (ctx->pc == 0x4B0CD4u) {
        ctx->pc = 0x4B0CD4u;
            // 0x4b0cd4: 0x8e420e38  lw          $v0, 0xE38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
        ctx->pc = 0x4B0CD8u;
        goto label_4b0cd8;
    }
    ctx->pc = 0x4B0CD0u;
    {
        const bool branch_taken_0x4b0cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0CD0u;
            // 0x4b0cd4: 0x8e420e38  lw          $v0, 0xE38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0cd0) {
            ctx->pc = 0x4B0D98u;
            goto label_4b0d98;
        }
    }
    ctx->pc = 0x4B0CD8u;
label_4b0cd8:
    // 0x4b0cd8: 0xc6400e84  lwc1        $f0, 0xE84($s2)
    ctx->pc = 0x4b0cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0cdc:
    // 0x4b0cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b0cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0ce0:
    // 0x4b0ce0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_4b0ce4:
    if (ctx->pc == 0x4B0CE4u) {
        ctx->pc = 0x4B0CE4u;
            // 0x4b0ce4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B0CE8u;
        goto label_4b0ce8;
    }
    ctx->pc = 0x4B0CE0u;
    {
        const bool branch_taken_0x4b0ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0ce0) {
            ctx->pc = 0x4B0CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0CE0u;
            // 0x4b0ce4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0D88u;
            goto label_4b0d88;
        }
    }
    ctx->pc = 0x4B0CE8u;
label_4b0ce8:
    // 0x4b0ce8: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x4b0ce8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_4b0cec:
    // 0x4b0cec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b0cf0:
    // 0x4b0cf0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b0cf4:
    // 0x4b0cf4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4b0cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b0cf8:
    // 0x4b0cf8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b0cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b0cfc:
    // 0x4b0cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0d00:
    // 0x4b0d00: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4b0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b0d04:
    // 0x4b0d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b0d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0d08:
    // 0x4b0d08: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4b0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4b0d0c:
    // 0x4b0d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b0d10:
    // 0x4b0d10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4b0d14:
    // 0x4b0d14: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b0d18:
    // 0x4b0d18: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4b0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4b0d1c:
    // 0x4b0d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b0d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b0d20:
    // 0x4b0d20: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b0d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b0d24:
    // 0x4b0d24: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b0d24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b0d28:
    // 0x4b0d28: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b0d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b0d2c:
    // 0x4b0d2c: 0x320f809  jalr        $t9
label_4b0d30:
    if (ctx->pc == 0x4B0D30u) {
        ctx->pc = 0x4B0D30u;
            // 0x4b0d30: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B0D34u;
        goto label_4b0d34;
    }
    ctx->pc = 0x4B0D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0D34u);
        ctx->pc = 0x4B0D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0D2Cu;
            // 0x4b0d30: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0D34u; }
            if (ctx->pc != 0x4B0D34u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0D34u;
label_4b0d34:
    // 0x4b0d34: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b0d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b0d38:
    // 0x4b0d38: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b0d3c:
    // 0x4b0d3c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b0d3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b0d40:
    // 0x4b0d40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b0d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b0d44:
    // 0x4b0d44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b0d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b0d48:
    // 0x4b0d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0d4c:
    // 0x4b0d4c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b0d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b0d50:
    // 0x4b0d50: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x4b0d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b0d54:
    // 0x4b0d54: 0x320f809  jalr        $t9
label_4b0d58:
    if (ctx->pc == 0x4B0D58u) {
        ctx->pc = 0x4B0D58u;
            // 0x4b0d58: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B0D5Cu;
        goto label_4b0d5c;
    }
    ctx->pc = 0x4B0D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0D5Cu);
        ctx->pc = 0x4B0D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0D54u;
            // 0x4b0d58: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0D5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0D5Cu; }
            if (ctx->pc != 0x4B0D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B0D5Cu;
label_4b0d5c:
    // 0x4b0d5c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b0d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b0d60:
    // 0x4b0d60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4b0d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b0d64:
    // 0x4b0d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b0d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b0d68:
    // 0x4b0d68: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4b0d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4b0d6c:
    // 0x4b0d6c: 0x320f809  jalr        $t9
label_4b0d70:
    if (ctx->pc == 0x4B0D70u) {
        ctx->pc = 0x4B0D70u;
            // 0x4b0d70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0D74u;
        goto label_4b0d74;
    }
    ctx->pc = 0x4B0D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B0D74u);
        ctx->pc = 0x4B0D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0D6Cu;
            // 0x4b0d70: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B0D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B0D74u; }
            if (ctx->pc != 0x4B0D74u) { return; }
        }
        }
    }
    ctx->pc = 0x4B0D74u;
label_4b0d74:
    // 0x4b0d74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b0d78:
    // 0x4b0d78: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x4b0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_4b0d7c:
    // 0x4b0d7c: 0xae430e30  sw          $v1, 0xE30($s2)
    ctx->pc = 0x4b0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
label_4b0d80:
    // 0x4b0d80: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b0d84:
    if (ctx->pc == 0x4B0D84u) {
        ctx->pc = 0x4B0D84u;
            // 0x4b0d84: 0xae420e90  sw          $v0, 0xE90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3728), GPR_U32(ctx, 2));
        ctx->pc = 0x4B0D88u;
        goto label_4b0d88;
    }
    ctx->pc = 0x4B0D80u;
    {
        const bool branch_taken_0x4b0d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0D80u;
            // 0x4b0d84: 0xae420e90  sw          $v0, 0xE90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d80) {
            ctx->pc = 0x4B0D94u;
            goto label_4b0d94;
        }
    }
    ctx->pc = 0x4B0D88u;
label_4b0d88:
    // 0x4b0d88: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x4b0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_4b0d8c:
    // 0x4b0d8c: 0xae430e30  sw          $v1, 0xE30($s2)
    ctx->pc = 0x4b0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
label_4b0d90:
    // 0x4b0d90: 0xae420e90  sw          $v0, 0xE90($s2)
    ctx->pc = 0x4b0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3728), GPR_U32(ctx, 2));
label_4b0d94:
    // 0x4b0d94: 0x8e420e38  lw          $v0, 0xE38($s2)
    ctx->pc = 0x4b0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_4b0d98:
    // 0x4b0d98: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4b0d98u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4b0d9c:
    // 0x4b0d9c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4b0da0:
    if (ctx->pc == 0x4B0DA0u) {
        ctx->pc = 0x4B0DA0u;
            // 0x4b0da0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0DA4u;
        goto label_4b0da4;
    }
    ctx->pc = 0x4B0D9Cu;
    {
        const bool branch_taken_0x4b0d9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B0DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0D9Cu;
            // 0x4b0da0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d9c) {
            ctx->pc = 0x4B0DB4u;
            goto label_4b0db4;
        }
    }
    ctx->pc = 0x4B0DA4u;
label_4b0da4:
    // 0x4b0da4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4b0da4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4b0da8:
    // 0x4b0da8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4b0dac:
    if (ctx->pc == 0x4B0DACu) {
        ctx->pc = 0x4B0DB0u;
        goto label_4b0db0;
    }
    ctx->pc = 0x4B0DA8u;
    {
        const bool branch_taken_0x4b0da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0da8) {
            ctx->pc = 0x4B0DB4u;
            goto label_4b0db4;
        }
    }
    ctx->pc = 0x4B0DB0u;
label_4b0db0:
    // 0x4b0db0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4b0db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0db4:
    // 0x4b0db4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4b0db8:
    if (ctx->pc == 0x4B0DB8u) {
        ctx->pc = 0x4B0DBCu;
        goto label_4b0dbc;
    }
    ctx->pc = 0x4B0DB4u;
    {
        const bool branch_taken_0x4b0db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0db4) {
            ctx->pc = 0x4B0DD0u;
            goto label_4b0dd0;
        }
    }
    ctx->pc = 0x4B0DBCu;
label_4b0dbc:
    // 0x4b0dbc: 0xc075eb4  jal         func_1D7AD0
label_4b0dc0:
    if (ctx->pc == 0x4B0DC0u) {
        ctx->pc = 0x4B0DC0u;
            // 0x4b0dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0DC4u;
        goto label_4b0dc4;
    }
    ctx->pc = 0x4B0DBCu;
    SET_GPR_U32(ctx, 31, 0x4B0DC4u);
    ctx->pc = 0x4B0DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0DBCu;
            // 0x4b0dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DC4u; }
        if (ctx->pc != 0x4B0DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DC4u; }
        if (ctx->pc != 0x4B0DC4u) { return; }
    }
    ctx->pc = 0x4B0DC4u;
label_4b0dc4:
    // 0x4b0dc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4b0dc8:
    if (ctx->pc == 0x4B0DC8u) {
        ctx->pc = 0x4B0DCCu;
        goto label_4b0dcc;
    }
    ctx->pc = 0x4B0DC4u;
    {
        const bool branch_taken_0x4b0dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0dc4) {
            ctx->pc = 0x4B0DD0u;
            goto label_4b0dd0;
        }
    }
    ctx->pc = 0x4B0DCCu;
label_4b0dcc:
    // 0x4b0dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b0dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0dd0:
    // 0x4b0dd0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_4b0dd4:
    if (ctx->pc == 0x4B0DD4u) {
        ctx->pc = 0x4B0DD8u;
        goto label_4b0dd8;
    }
    ctx->pc = 0x4B0DD0u;
    {
        const bool branch_taken_0x4b0dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0dd0) {
            ctx->pc = 0x4B0DE8u;
            goto label_4b0de8;
        }
    }
    ctx->pc = 0x4B0DD8u;
label_4b0dd8:
    // 0x4b0dd8: 0xc072aaa  jal         func_1CAAA8
label_4b0ddc:
    if (ctx->pc == 0x4B0DDCu) {
        ctx->pc = 0x4B0DDCu;
            // 0x4b0ddc: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->pc = 0x4B0DE0u;
        goto label_4b0de0;
    }
    ctx->pc = 0x4B0DD8u;
    SET_GPR_U32(ctx, 31, 0x4B0DE0u);
    ctx->pc = 0x4B0DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0DD8u;
            // 0x4b0ddc: 0x92440088  lbu         $a0, 0x88($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DE0u; }
        if (ctx->pc != 0x4B0DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DE0u; }
        if (ctx->pc != 0x4B0DE0u) { return; }
    }
    ctx->pc = 0x4B0DE0u;
label_4b0de0:
    // 0x4b0de0: 0xc072a56  jal         func_1CA958
label_4b0de4:
    if (ctx->pc == 0x4B0DE4u) {
        ctx->pc = 0x4B0DE4u;
            // 0x4b0de4: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->pc = 0x4B0DE8u;
        goto label_4b0de8;
    }
    ctx->pc = 0x4B0DE0u;
    SET_GPR_U32(ctx, 31, 0x4B0DE8u);
    ctx->pc = 0x4B0DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0DE0u;
            // 0x4b0de4: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DE8u; }
        if (ctx->pc != 0x4B0DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DE8u; }
        if (ctx->pc != 0x4B0DE8u) { return; }
    }
    ctx->pc = 0x4B0DE8u;
label_4b0de8:
    // 0x4b0de8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b0de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b0dec:
    // 0x4b0dec: 0xc077228  jal         func_1DC8A0
label_4b0df0:
    if (ctx->pc == 0x4B0DF0u) {
        ctx->pc = 0x4B0DF4u;
        goto label_4b0df4;
    }
    ctx->pc = 0x4B0DECu;
    SET_GPR_U32(ctx, 31, 0x4B0DF4u);
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DF4u; }
        if (ctx->pc != 0x4B0DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0DF4u; }
        if (ctx->pc != 0x4B0DF4u) { return; }
    }
    ctx->pc = 0x4B0DF4u;
label_4b0df4:
    // 0x4b0df4: 0x10400200  beqz        $v0, . + 4 + (0x200 << 2)
label_4b0df8:
    if (ctx->pc == 0x4B0DF8u) {
        ctx->pc = 0x4B0DFCu;
        goto label_4b0dfc;
    }
    ctx->pc = 0x4B0DF4u;
    {
        const bool branch_taken_0x4b0df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0df4) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0DFCu;
label_4b0dfc:
    // 0x4b0dfc: 0xc0d426c  jal         func_3509B0
label_4b0e00:
    if (ctx->pc == 0x4B0E00u) {
        ctx->pc = 0x4B0E00u;
            // 0x4b0e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E04u;
        goto label_4b0e04;
    }
    ctx->pc = 0x4B0DFCu;
    SET_GPR_U32(ctx, 31, 0x4B0E04u);
    ctx->pc = 0x4B0E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0DFCu;
            // 0x4b0e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3509B0u;
    if (runtime->hasFunction(0x3509B0u)) {
        auto targetFn = runtime->lookupFunction(0x3509B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E04u; }
        if (ctx->pc != 0x4B0E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003509B0_0x3509b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E04u; }
        if (ctx->pc != 0x4B0E04u) { return; }
    }
    ctx->pc = 0x4B0E04u;
label_4b0e04:
    // 0x4b0e04: 0x144001fc  bnez        $v0, . + 4 + (0x1FC << 2)
label_4b0e08:
    if (ctx->pc == 0x4B0E08u) {
        ctx->pc = 0x4B0E0Cu;
        goto label_4b0e0c;
    }
    ctx->pc = 0x4B0E04u;
    {
        const bool branch_taken_0x4b0e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b0e04) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0E0Cu;
label_4b0e0c:
    // 0x4b0e0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b0e10:
    // 0x4b0e10: 0xc0770e4  jal         func_1DC390
label_4b0e14:
    if (ctx->pc == 0x4B0E14u) {
        ctx->pc = 0x4B0E14u;
            // 0x4b0e14: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x4B0E18u;
        goto label_4b0e18;
    }
    ctx->pc = 0x4B0E10u;
    SET_GPR_U32(ctx, 31, 0x4B0E18u);
    ctx->pc = 0x4B0E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E10u;
            // 0x4b0e14: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E18u; }
        if (ctx->pc != 0x4B0E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E18u; }
        if (ctx->pc != 0x4B0E18u) { return; }
    }
    ctx->pc = 0x4B0E18u;
label_4b0e18:
    // 0x4b0e18: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4b0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b0e1c:
    // 0x4b0e1c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_4b0e20:
    if (ctx->pc == 0x4B0E20u) {
        ctx->pc = 0x4B0E20u;
            // 0x4b0e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E24u;
        goto label_4b0e24;
    }
    ctx->pc = 0x4B0E1Cu;
    {
        const bool branch_taken_0x4b0e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b0e1c) {
            ctx->pc = 0x4B0E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E1Cu;
            // 0x4b0e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0E2Cu;
            goto label_4b0e2c;
        }
    }
    ctx->pc = 0x4B0E24u;
label_4b0e24:
    // 0x4b0e24: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4b0e28:
    if (ctx->pc == 0x4B0E28u) {
        ctx->pc = 0x4B0E28u;
            // 0x4b0e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E2Cu;
        goto label_4b0e2c;
    }
    ctx->pc = 0x4B0E24u;
    {
        const bool branch_taken_0x4b0e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E24u;
            // 0x4b0e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0e24) {
            ctx->pc = 0x4B0F10u;
            goto label_4b0f10;
        }
    }
    ctx->pc = 0x4B0E2Cu;
label_4b0e2c:
    // 0x4b0e2c: 0xc12c66c  jal         func_4B19B0
label_4b0e30:
    if (ctx->pc == 0x4B0E30u) {
        ctx->pc = 0x4B0E34u;
        goto label_4b0e34;
    }
    ctx->pc = 0x4B0E2Cu;
    SET_GPR_U32(ctx, 31, 0x4B0E34u);
    ctx->pc = 0x4B19B0u;
    if (runtime->hasFunction(0x4B19B0u)) {
        auto targetFn = runtime->lookupFunction(0x4B19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E34u; }
        if (ctx->pc != 0x4B0E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B19B0_0x4b19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E34u; }
        if (ctx->pc != 0x4B0E34u) { return; }
    }
    ctx->pc = 0x4B0E34u;
label_4b0e34:
    // 0x4b0e34: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_4b0e38:
    if (ctx->pc == 0x4B0E38u) {
        ctx->pc = 0x4B0E3Cu;
        goto label_4b0e3c;
    }
    ctx->pc = 0x4B0E34u;
    {
        const bool branch_taken_0x4b0e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0e34) {
            ctx->pc = 0x4B0F0Cu;
            goto label_4b0f0c;
        }
    }
    ctx->pc = 0x4B0E3Cu;
label_4b0e3c:
    // 0x4b0e3c: 0xc0efddc  jal         func_3BF770
label_4b0e40:
    if (ctx->pc == 0x4B0E40u) {
        ctx->pc = 0x4B0E40u;
            // 0x4b0e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E44u;
        goto label_4b0e44;
    }
    ctx->pc = 0x4B0E3Cu;
    SET_GPR_U32(ctx, 31, 0x4B0E44u);
    ctx->pc = 0x4B0E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E3Cu;
            // 0x4b0e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF770u;
    if (runtime->hasFunction(0x3BF770u)) {
        auto targetFn = runtime->lookupFunction(0x3BF770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E44u; }
        if (ctx->pc != 0x4B0E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF770_0x3bf770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E44u; }
        if (ctx->pc != 0x4B0E44u) { return; }
    }
    ctx->pc = 0x4B0E44u;
label_4b0e44:
    // 0x4b0e44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b0e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b0e48:
    // 0x4b0e48: 0x0  nop
    ctx->pc = 0x4b0e48u;
    // NOP
label_4b0e4c:
    // 0x4b0e4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b0e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0e50:
    // 0x4b0e50: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_4b0e54:
    if (ctx->pc == 0x4B0E54u) {
        ctx->pc = 0x4B0E54u;
            // 0x4b0e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E58u;
        goto label_4b0e58;
    }
    ctx->pc = 0x4B0E50u;
    {
        const bool branch_taken_0x4b0e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0e50) {
            ctx->pc = 0x4B0E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E50u;
            // 0x4b0e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0EA4u;
            goto label_4b0ea4;
        }
    }
    ctx->pc = 0x4B0E58u;
label_4b0e58:
    // 0x4b0e58: 0xc077324  jal         func_1DCC90
label_4b0e5c:
    if (ctx->pc == 0x4B0E5Cu) {
        ctx->pc = 0x4B0E5Cu;
            // 0x4b0e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E60u;
        goto label_4b0e60;
    }
    ctx->pc = 0x4B0E58u;
    SET_GPR_U32(ctx, 31, 0x4B0E60u);
    ctx->pc = 0x4B0E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E58u;
            // 0x4b0e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E60u; }
        if (ctx->pc != 0x4B0E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E60u; }
        if (ctx->pc != 0x4B0E60u) { return; }
    }
    ctx->pc = 0x4B0E60u;
label_4b0e60:
    // 0x4b0e60: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x4b0e60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4b0e64:
    // 0x4b0e64: 0xc077258  jal         func_1DC960
label_4b0e68:
    if (ctx->pc == 0x4B0E68u) {
        ctx->pc = 0x4B0E68u;
            // 0x4b0e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E6Cu;
        goto label_4b0e6c;
    }
    ctx->pc = 0x4B0E64u;
    SET_GPR_U32(ctx, 31, 0x4B0E6Cu);
    ctx->pc = 0x4B0E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E64u;
            // 0x4b0e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E6Cu; }
        if (ctx->pc != 0x4B0E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E6Cu; }
        if (ctx->pc != 0x4B0E6Cu) { return; }
    }
    ctx->pc = 0x4B0E6Cu;
label_4b0e6c:
    // 0x4b0e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b0e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b0e70:
    // 0x4b0e70: 0xc07753c  jal         func_1DD4F0
label_4b0e74:
    if (ctx->pc == 0x4B0E74u) {
        ctx->pc = 0x4B0E74u;
            // 0x4b0e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0E78u;
        goto label_4b0e78;
    }
    ctx->pc = 0x4B0E70u;
    SET_GPR_U32(ctx, 31, 0x4B0E78u);
    ctx->pc = 0x4B0E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E70u;
            // 0x4b0e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E78u; }
        if (ctx->pc != 0x4B0E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E78u; }
        if (ctx->pc != 0x4B0E78u) { return; }
    }
    ctx->pc = 0x4B0E78u;
label_4b0e78:
    // 0x4b0e78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4b0e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b0e7c:
    // 0x4b0e7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b0e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b0e80:
    // 0x4b0e80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b0e84:
    // 0x4b0e84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b0e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0e88:
    // 0x4b0e88: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4b0e88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4b0e8c:
    // 0x4b0e8c: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x4b0e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4b0e90:
    // 0x4b0e90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b0e90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0e94:
    // 0x4b0e94: 0xc0bb404  jal         func_2ED010
label_4b0e98:
    if (ctx->pc == 0x4B0E98u) {
        ctx->pc = 0x4B0E98u;
            // 0x4b0e98: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B0E9Cu;
        goto label_4b0e9c;
    }
    ctx->pc = 0x4B0E94u;
    SET_GPR_U32(ctx, 31, 0x4B0E9Cu);
    ctx->pc = 0x4B0E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0E94u;
            // 0x4b0e98: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E9Cu; }
        if (ctx->pc != 0x4B0E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0E9Cu; }
        if (ctx->pc != 0x4B0E9Cu) { return; }
    }
    ctx->pc = 0x4B0E9Cu;
label_4b0e9c:
    // 0x4b0e9c: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_4b0ea0:
    if (ctx->pc == 0x4B0EA0u) {
        ctx->pc = 0x4B0EA4u;
        goto label_4b0ea4;
    }
    ctx->pc = 0x4B0E9Cu;
    {
        const bool branch_taken_0x4b0e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0e9c) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0EA4u;
label_4b0ea4:
    // 0x4b0ea4: 0xc0efddc  jal         func_3BF770
label_4b0ea8:
    if (ctx->pc == 0x4B0EA8u) {
        ctx->pc = 0x4B0EACu;
        goto label_4b0eac;
    }
    ctx->pc = 0x4B0EA4u;
    SET_GPR_U32(ctx, 31, 0x4B0EACu);
    ctx->pc = 0x3BF770u;
    if (runtime->hasFunction(0x3BF770u)) {
        auto targetFn = runtime->lookupFunction(0x3BF770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0EACu; }
        if (ctx->pc != 0x4B0EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF770_0x3bf770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0EACu; }
        if (ctx->pc != 0x4B0EACu) { return; }
    }
    ctx->pc = 0x4B0EACu;
label_4b0eac:
    // 0x4b0eac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b0eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b0eb0:
    // 0x4b0eb0: 0x0  nop
    ctx->pc = 0x4b0eb0u;
    // NOP
label_4b0eb4:
    // 0x4b0eb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4b0eb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0eb8:
    // 0x4b0eb8: 0x450101cf  bc1t        . + 4 + (0x1CF << 2)
label_4b0ebc:
    if (ctx->pc == 0x4B0EBCu) {
        ctx->pc = 0x4B0EC0u;
        goto label_4b0ec0;
    }
    ctx->pc = 0x4B0EB8u;
    {
        const bool branch_taken_0x4b0eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0eb8) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0EC0u;
label_4b0ec0:
    // 0x4b0ec0: 0xc077324  jal         func_1DCC90
label_4b0ec4:
    if (ctx->pc == 0x4B0EC4u) {
        ctx->pc = 0x4B0EC4u;
            // 0x4b0ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0EC8u;
        goto label_4b0ec8;
    }
    ctx->pc = 0x4B0EC0u;
    SET_GPR_U32(ctx, 31, 0x4B0EC8u);
    ctx->pc = 0x4B0EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0EC0u;
            // 0x4b0ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0EC8u; }
        if (ctx->pc != 0x4B0EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0EC8u; }
        if (ctx->pc != 0x4B0EC8u) { return; }
    }
    ctx->pc = 0x4B0EC8u;
label_4b0ec8:
    // 0x4b0ec8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x4b0ec8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4b0ecc:
    // 0x4b0ecc: 0xc077258  jal         func_1DC960
label_4b0ed0:
    if (ctx->pc == 0x4B0ED0u) {
        ctx->pc = 0x4B0ED0u;
            // 0x4b0ed0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0ED4u;
        goto label_4b0ed4;
    }
    ctx->pc = 0x4B0ECCu;
    SET_GPR_U32(ctx, 31, 0x4B0ED4u);
    ctx->pc = 0x4B0ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0ECCu;
            // 0x4b0ed0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0ED4u; }
        if (ctx->pc != 0x4B0ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0ED4u; }
        if (ctx->pc != 0x4B0ED4u) { return; }
    }
    ctx->pc = 0x4B0ED4u;
label_4b0ed4:
    // 0x4b0ed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b0ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b0ed8:
    // 0x4b0ed8: 0xc07753c  jal         func_1DD4F0
label_4b0edc:
    if (ctx->pc == 0x4B0EDCu) {
        ctx->pc = 0x4B0EDCu;
            // 0x4b0edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B0EE0u;
        goto label_4b0ee0;
    }
    ctx->pc = 0x4B0ED8u;
    SET_GPR_U32(ctx, 31, 0x4B0EE0u);
    ctx->pc = 0x4B0EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0ED8u;
            // 0x4b0edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0EE0u; }
        if (ctx->pc != 0x4B0EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0EE0u; }
        if (ctx->pc != 0x4B0EE0u) { return; }
    }
    ctx->pc = 0x4B0EE0u;
label_4b0ee0:
    // 0x4b0ee0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4b0ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b0ee4:
    // 0x4b0ee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b0ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b0ee8:
    // 0x4b0ee8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b0eec:
    // 0x4b0eec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b0eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b0ef0:
    // 0x4b0ef0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4b0ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4b0ef4:
    // 0x4b0ef4: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x4b0ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_4b0ef8:
    // 0x4b0ef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b0ef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b0efc:
    // 0x4b0efc: 0xc0bb404  jal         func_2ED010
label_4b0f00:
    if (ctx->pc == 0x4B0F00u) {
        ctx->pc = 0x4B0F00u;
            // 0x4b0f00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B0F04u;
        goto label_4b0f04;
    }
    ctx->pc = 0x4B0EFCu;
    SET_GPR_U32(ctx, 31, 0x4B0F04u);
    ctx->pc = 0x4B0F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0EFCu;
            // 0x4b0f00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0F04u; }
        if (ctx->pc != 0x4B0F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0F04u; }
        if (ctx->pc != 0x4B0F04u) { return; }
    }
    ctx->pc = 0x4B0F04u;
label_4b0f04:
    // 0x4b0f04: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_4b0f08:
    if (ctx->pc == 0x4B0F08u) {
        ctx->pc = 0x4B0F0Cu;
        goto label_4b0f0c;
    }
    ctx->pc = 0x4B0F04u;
    {
        const bool branch_taken_0x4b0f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0f04) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0F0Cu;
label_4b0f0c:
    // 0x4b0f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b0f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b0f10:
    // 0x4b0f10: 0xc12c5e0  jal         func_4B1780
label_4b0f14:
    if (ctx->pc == 0x4B0F14u) {
        ctx->pc = 0x4B0F18u;
        goto label_4b0f18;
    }
    ctx->pc = 0x4B0F10u;
    SET_GPR_U32(ctx, 31, 0x4B0F18u);
    ctx->pc = 0x4B1780u;
    if (runtime->hasFunction(0x4B1780u)) {
        auto targetFn = runtime->lookupFunction(0x4B1780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0F18u; }
        if (ctx->pc != 0x4B0F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B1780_0x4b1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0F18u; }
        if (ctx->pc != 0x4B0F18u) { return; }
    }
    ctx->pc = 0x4B0F18u;
label_4b0f18:
    // 0x4b0f18: 0x100001b7  b           . + 4 + (0x1B7 << 2)
label_4b0f1c:
    if (ctx->pc == 0x4B0F1Cu) {
        ctx->pc = 0x4B0F20u;
        goto label_4b0f20;
    }
    ctx->pc = 0x4B0F18u;
    {
        const bool branch_taken_0x4b0f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0f18) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0F20u;
label_4b0f20:
    // 0x4b0f20: 0xc6430de4  lwc1        $f3, 0xDE4($s2)
    ctx->pc = 0x4b0f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b0f24:
    // 0x4b0f24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4b0f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b0f28:
    // 0x4b0f28: 0x0  nop
    ctx->pc = 0x4b0f28u;
    // NOP
label_4b0f2c:
    // 0x4b0f2c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4b0f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0f30:
    // 0x4b0f30: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_4b0f34:
    if (ctx->pc == 0x4B0F34u) {
        ctx->pc = 0x4B0F38u;
        goto label_4b0f38;
    }
    ctx->pc = 0x4B0F30u;
    {
        const bool branch_taken_0x4b0f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0f30) {
            ctx->pc = 0x4B0F68u;
            goto label_4b0f68;
        }
    }
    ctx->pc = 0x4B0F38u;
label_4b0f38:
    // 0x4b0f38: 0xc6400e88  lwc1        $f0, 0xE88($s2)
    ctx->pc = 0x4b0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b0f3c:
    // 0x4b0f3c: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x4b0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_4b0f40:
    // 0x4b0f40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b0f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b0f44:
    // 0x4b0f44: 0x0  nop
    ctx->pc = 0x4b0f44u;
    // NOP
label_4b0f48:
    // 0x4b0f48: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4b0f48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4b0f4c:
    // 0x4b0f4c: 0x0  nop
    ctx->pc = 0x4b0f4cu;
    // NOP
label_4b0f50:
    // 0x4b0f50: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x4b0f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4b0f54:
    // 0x4b0f54: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4b0f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0f58:
    // 0x4b0f58: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b0f5c:
    if (ctx->pc == 0x4B0F5Cu) {
        ctx->pc = 0x4B0F5Cu;
            // 0x4b0f5c: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x4B0F60u;
        goto label_4b0f60;
    }
    ctx->pc = 0x4B0F58u;
    {
        const bool branch_taken_0x4b0f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b0f58) {
            ctx->pc = 0x4B0F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0F58u;
            // 0x4b0f5c: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B0F68u;
            goto label_4b0f68;
        }
    }
    ctx->pc = 0x4B0F60u;
label_4b0f60:
    // 0x4b0f60: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4b0f60u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4b0f64:
    // 0x4b0f64: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x4b0f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_4b0f68:
    // 0x4b0f68: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b0f6c:
    // 0x4b0f6c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b0f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b0f70:
    // 0x4b0f70: 0xc6410e90  lwc1        $f1, 0xE90($s2)
    ctx->pc = 0x4b0f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0f74:
    // 0x4b0f74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b0f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0f78:
    // 0x4b0f78: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b0f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b0f7c:
    // 0x4b0f7c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b0f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4b0f80:
    // 0x4b0f80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b0f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b0f84:
    // 0x4b0f84: 0x4500019c  bc1f        . + 4 + (0x19C << 2)
label_4b0f88:
    if (ctx->pc == 0x4B0F88u) {
        ctx->pc = 0x4B0F88u;
            // 0x4b0f88: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->pc = 0x4B0F8Cu;
        goto label_4b0f8c;
    }
    ctx->pc = 0x4B0F84u;
    {
        const bool branch_taken_0x4b0f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B0F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0F84u;
            // 0x4b0f88: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0f84) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0F8Cu;
label_4b0f8c:
    // 0x4b0f8c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x4b0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_4b0f90:
    // 0x4b0f90: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4b0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b0f94:
    // 0x4b0f94: 0xae440e90  sw          $a0, 0xE90($s2)
    ctx->pc = 0x4b0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3728), GPR_U32(ctx, 4));
label_4b0f98:
    // 0x4b0f98: 0xae400e94  sw          $zero, 0xE94($s2)
    ctx->pc = 0x4b0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3732), GPR_U32(ctx, 0));
label_4b0f9c:
    // 0x4b0f9c: 0x10000196  b           . + 4 + (0x196 << 2)
label_4b0fa0:
    if (ctx->pc == 0x4B0FA0u) {
        ctx->pc = 0x4B0FA0u;
            // 0x4b0fa0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x4B0FA4u;
        goto label_4b0fa4;
    }
    ctx->pc = 0x4B0F9Cu;
    {
        const bool branch_taken_0x4b0f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0F9Cu;
            // 0x4b0fa0: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0f9c) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B0FA4u;
label_4b0fa4:
    // 0x4b0fa4: 0xc6410e90  lwc1        $f1, 0xE90($s2)
    ctx->pc = 0x4b0fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b0fa8:
    // 0x4b0fa8: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x4b0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_4b0fac:
    // 0x4b0fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0fb0:
    // 0x4b0fb0: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x4b0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_4b0fb4:
    // 0x4b0fb4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x4b0fb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_4b0fb8:
    // 0x4b0fb8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x4b0fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_4b0fbc:
    // 0x4b0fbc: 0x0  nop
    ctx->pc = 0x4b0fbcu;
    // NOP
label_4b0fc0:
    // 0x4b0fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b0fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b0fc4:
    // 0x4b0fc4: 0xc0477a8  jal         func_11DEA0
label_4b0fc8:
    if (ctx->pc == 0x4B0FC8u) {
        ctx->pc = 0x4B0FC8u;
            // 0x4b0fc8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4B0FCCu;
        goto label_4b0fcc;
    }
    ctx->pc = 0x4B0FC4u;
    SET_GPR_U32(ctx, 31, 0x4B0FCCu);
    ctx->pc = 0x4B0FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B0FC4u;
            // 0x4b0fc8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0FCCu; }
        if (ctx->pc != 0x4B0FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B0FCCu; }
        if (ctx->pc != 0x4B0FCCu) { return; }
    }
    ctx->pc = 0x4B0FCCu;
label_4b0fcc:
    // 0x4b0fcc: 0x3c034563  lui         $v1, 0x4563
    ctx->pc = 0x4b0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17763 << 16));
label_4b0fd0:
    // 0x4b0fd0: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x4b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
label_4b0fd4:
    // 0x4b0fd4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4b0fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_4b0fd8:
    // 0x4b0fd8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x4b0fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_4b0fdc:
    // 0x4b0fdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b0fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b0fe0:
    // 0x4b0fe0: 0x0  nop
    ctx->pc = 0x4b0fe0u;
    // NOP
label_4b0fe4:
    // 0x4b0fe4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4b0fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_4b0fe8:
    // 0x4b0fe8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4b0fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b0fec:
    // 0x4b0fec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b0fecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b0ff0:
    // 0x4b0ff0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b0ff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b0ff4:
    // 0x4b0ff4: 0x0  nop
    ctx->pc = 0x4b0ff4u;
    // NOP
label_4b0ff8:
    // 0x4b0ff8: 0xae430af4  sw          $v1, 0xAF4($s2)
    ctx->pc = 0x4b0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2804), GPR_U32(ctx, 3));
label_4b0ffc:
    // 0x4b0ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b0ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b1000:
    // 0x4b1000: 0xc6400e90  lwc1        $f0, 0xE90($s2)
    ctx->pc = 0x4b1000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1004:
    // 0x4b1004: 0xc0477a8  jal         func_11DEA0
label_4b1008:
    if (ctx->pc == 0x4B1008u) {
        ctx->pc = 0x4B1008u;
            // 0x4b1008: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B100Cu;
        goto label_4b100c;
    }
    ctx->pc = 0x4B1004u;
    SET_GPR_U32(ctx, 31, 0x4B100Cu);
    ctx->pc = 0x4B1008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1004u;
            // 0x4b1008: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B100Cu; }
        if (ctx->pc != 0x4B100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B100Cu; }
        if (ctx->pc != 0x4B100Cu) { return; }
    }
    ctx->pc = 0x4B100Cu;
label_4b100c:
    // 0x4b100c: 0x3c0345aa  lui         $v1, 0x45AA
    ctx->pc = 0x4b100cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17834 << 16));
label_4b1010:
    // 0x4b1010: 0x3463a800  ori         $v1, $v1, 0xA800
    ctx->pc = 0x4b1010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43008);
label_4b1014:
    // 0x4b1014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b1014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b1018:
    // 0x4b1018: 0x0  nop
    ctx->pc = 0x4b1018u;
    // NOP
label_4b101c:
    // 0x4b101c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4b101cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_4b1020:
    // 0x4b1020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4b1020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b1024:
    // 0x4b1024: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b1024u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b1028:
    // 0x4b1028: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b1028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b102c:
    // 0x4b102c: 0x0  nop
    ctx->pc = 0x4b102cu;
    // NOP
label_4b1030:
    // 0x4b1030: 0xae430af8  sw          $v1, 0xAF8($s2)
    ctx->pc = 0x4b1030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2808), GPR_U32(ctx, 3));
label_4b1034:
    // 0x4b1034: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4b1034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b1038:
    // 0x4b1038: 0xc6430de4  lwc1        $f3, 0xDE4($s2)
    ctx->pc = 0x4b1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b103c:
    // 0x4b103c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4b103cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b1040:
    // 0x4b1040: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_4b1044:
    if (ctx->pc == 0x4B1044u) {
        ctx->pc = 0x4B1048u;
        goto label_4b1048;
    }
    ctx->pc = 0x4B1040u;
    {
        const bool branch_taken_0x4b1040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b1040) {
            ctx->pc = 0x4B1078u;
            goto label_4b1078;
        }
    }
    ctx->pc = 0x4B1048u;
label_4b1048:
    // 0x4b1048: 0xc6400e88  lwc1        $f0, 0xE88($s2)
    ctx->pc = 0x4b1048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b104c:
    // 0x4b104c: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x4b104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
label_4b1050:
    // 0x4b1050: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b1050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b1054:
    // 0x4b1054: 0x0  nop
    ctx->pc = 0x4b1054u;
    // NOP
label_4b1058:
    // 0x4b1058: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4b1058u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4b105c:
    // 0x4b105c: 0x0  nop
    ctx->pc = 0x4b105cu;
    // NOP
label_4b1060:
    // 0x4b1060: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x4b1060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4b1064:
    // 0x4b1064: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4b1064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b1068:
    // 0x4b1068: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b106c:
    if (ctx->pc == 0x4B106Cu) {
        ctx->pc = 0x4B106Cu;
            // 0x4b106c: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x4B1070u;
        goto label_4b1070;
    }
    ctx->pc = 0x4B1068u;
    {
        const bool branch_taken_0x4b1068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b1068) {
            ctx->pc = 0x4B106Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1068u;
            // 0x4b106c: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1078u;
            goto label_4b1078;
        }
    }
    ctx->pc = 0x4B1070u;
label_4b1070:
    // 0x4b1070: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4b1070u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4b1074:
    // 0x4b1074: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x4b1074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_4b1078:
    // 0x4b1078: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b1078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b107c:
    // 0x4b107c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b1080:
    // 0x4b1080: 0xc6410e90  lwc1        $f1, 0xE90($s2)
    ctx->pc = 0x4b1080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b1084:
    // 0x4b1084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b1084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b1088:
    // 0x4b1088: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b1088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b108c:
    // 0x4b108c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b108cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4b1090:
    // 0x4b1090: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b1090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b1094:
    // 0x4b1094: 0x45000158  bc1f        . + 4 + (0x158 << 2)
label_4b1098:
    if (ctx->pc == 0x4B1098u) {
        ctx->pc = 0x4B1098u;
            // 0x4b1098: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->pc = 0x4B109Cu;
        goto label_4b109c;
    }
    ctx->pc = 0x4B1094u;
    {
        const bool branch_taken_0x4b1094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B1098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1094u;
            // 0x4b1098: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1094) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B109Cu;
label_4b109c:
    // 0x4b109c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4b109cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b10a0:
    // 0x4b10a0: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x4b10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_4b10a4:
    // 0x4b10a4: 0xae430e30  sw          $v1, 0xE30($s2)
    ctx->pc = 0x4b10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
label_4b10a8:
    // 0x4b10a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b10ac:
    // 0x4b10ac: 0xae440e90  sw          $a0, 0xE90($s2)
    ctx->pc = 0x4b10acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3728), GPR_U32(ctx, 4));
label_4b10b0:
    // 0x4b10b0: 0x10000151  b           . + 4 + (0x151 << 2)
label_4b10b4:
    if (ctx->pc == 0x4B10B4u) {
        ctx->pc = 0x4B10B4u;
            // 0x4b10b4: 0xae430e94  sw          $v1, 0xE94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3732), GPR_U32(ctx, 3));
        ctx->pc = 0x4B10B8u;
        goto label_4b10b8;
    }
    ctx->pc = 0x4B10B0u;
    {
        const bool branch_taken_0x4b10b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B10B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B10B0u;
            // 0x4b10b4: 0xae430e94  sw          $v1, 0xE94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b10b0) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B10B8u;
label_4b10b8:
    // 0x4b10b8: 0xc6410e90  lwc1        $f1, 0xE90($s2)
    ctx->pc = 0x4b10b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b10bc:
    // 0x4b10bc: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x4b10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_4b10c0:
    // 0x4b10c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b10c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b10c4:
    // 0x4b10c4: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x4b10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_4b10c8:
    // 0x4b10c8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x4b10c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_4b10cc:
    // 0x4b10cc: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x4b10ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_4b10d0:
    // 0x4b10d0: 0x0  nop
    ctx->pc = 0x4b10d0u;
    // NOP
label_4b10d4:
    // 0x4b10d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b10d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b10d8:
    // 0x4b10d8: 0xc0477a8  jal         func_11DEA0
label_4b10dc:
    if (ctx->pc == 0x4B10DCu) {
        ctx->pc = 0x4B10DCu;
            // 0x4b10dc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4B10E0u;
        goto label_4b10e0;
    }
    ctx->pc = 0x4B10D8u;
    SET_GPR_U32(ctx, 31, 0x4B10E0u);
    ctx->pc = 0x4B10DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B10D8u;
            // 0x4b10dc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B10E0u; }
        if (ctx->pc != 0x4B10E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B10E0u; }
        if (ctx->pc != 0x4B10E0u) { return; }
    }
    ctx->pc = 0x4B10E0u;
label_4b10e0:
    // 0x4b10e0: 0x3c0345c7  lui         $v1, 0x45C7
    ctx->pc = 0x4b10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17863 << 16));
label_4b10e4:
    // 0x4b10e4: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x4b10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
label_4b10e8:
    // 0x4b10e8: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x4b10e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
label_4b10ec:
    // 0x4b10ec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x4b10ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_4b10f0:
    // 0x4b10f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b10f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b10f4:
    // 0x4b10f4: 0x0  nop
    ctx->pc = 0x4b10f4u;
    // NOP
label_4b10f8:
    // 0x4b10f8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4b10f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_4b10fc:
    // 0x4b10fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4b10fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b1100:
    // 0x4b1100: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b1100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b1104:
    // 0x4b1104: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b1104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b1108:
    // 0x4b1108: 0x0  nop
    ctx->pc = 0x4b1108u;
    // NOP
label_4b110c:
    // 0x4b110c: 0xae430af4  sw          $v1, 0xAF4($s2)
    ctx->pc = 0x4b110cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2804), GPR_U32(ctx, 3));
label_4b1110:
    // 0x4b1110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b1110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b1114:
    // 0x4b1114: 0xc6400e90  lwc1        $f0, 0xE90($s2)
    ctx->pc = 0x4b1114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1118:
    // 0x4b1118: 0xc0477a8  jal         func_11DEA0
label_4b111c:
    if (ctx->pc == 0x4B111Cu) {
        ctx->pc = 0x4B111Cu;
            // 0x4b111c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B1120u;
        goto label_4b1120;
    }
    ctx->pc = 0x4B1118u;
    SET_GPR_U32(ctx, 31, 0x4B1120u);
    ctx->pc = 0x4B111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1118u;
            // 0x4b111c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1120u; }
        if (ctx->pc != 0x4B1120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1120u; }
        if (ctx->pc != 0x4B1120u) { return; }
    }
    ctx->pc = 0x4B1120u;
label_4b1120:
    // 0x4b1120: 0x3c03460e  lui         $v1, 0x460E
    ctx->pc = 0x4b1120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17934 << 16));
label_4b1124:
    // 0x4b1124: 0x34633800  ori         $v1, $v1, 0x3800
    ctx->pc = 0x4b1124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14336);
label_4b1128:
    // 0x4b1128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b1128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b112c:
    // 0x4b112c: 0x0  nop
    ctx->pc = 0x4b112cu;
    // NOP
label_4b1130:
    // 0x4b1130: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4b1130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_4b1134:
    // 0x4b1134: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4b1134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4b1138:
    // 0x4b1138: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b1138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b113c:
    // 0x4b113c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b113cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b1140:
    // 0x4b1140: 0x0  nop
    ctx->pc = 0x4b1140u;
    // NOP
label_4b1144:
    // 0x4b1144: 0xae430af8  sw          $v1, 0xAF8($s2)
    ctx->pc = 0x4b1144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2808), GPR_U32(ctx, 3));
label_4b1148:
    // 0x4b1148: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4b1148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b114c:
    // 0x4b114c: 0xc6430de4  lwc1        $f3, 0xDE4($s2)
    ctx->pc = 0x4b114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b1150:
    // 0x4b1150: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4b1150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b1154:
    // 0x4b1154: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_4b1158:
    if (ctx->pc == 0x4B1158u) {
        ctx->pc = 0x4B115Cu;
        goto label_4b115c;
    }
    ctx->pc = 0x4B1154u;
    {
        const bool branch_taken_0x4b1154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b1154) {
            ctx->pc = 0x4B118Cu;
            goto label_4b118c;
        }
    }
    ctx->pc = 0x4B115Cu;
label_4b115c:
    // 0x4b115c: 0xc6400e88  lwc1        $f0, 0xE88($s2)
    ctx->pc = 0x4b115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1160:
    // 0x4b1160: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x4b1160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
label_4b1164:
    // 0x4b1164: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b1164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b1168:
    // 0x4b1168: 0x0  nop
    ctx->pc = 0x4b1168u;
    // NOP
label_4b116c:
    // 0x4b116c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4b116cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_4b1170:
    // 0x4b1170: 0x0  nop
    ctx->pc = 0x4b1170u;
    // NOP
label_4b1174:
    // 0x4b1174: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x4b1174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4b1178:
    // 0x4b1178: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4b1178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b117c:
    // 0x4b117c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b1180:
    if (ctx->pc == 0x4B1180u) {
        ctx->pc = 0x4B1180u;
            // 0x4b1180: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x4B1184u;
        goto label_4b1184;
    }
    ctx->pc = 0x4B117Cu;
    {
        const bool branch_taken_0x4b117c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b117c) {
            ctx->pc = 0x4B1180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B117Cu;
            // 0x4b1180: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B118Cu;
            goto label_4b118c;
        }
    }
    ctx->pc = 0x4B1184u;
label_4b1184:
    // 0x4b1184: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x4b1184u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_4b1188:
    // 0x4b1188: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x4b1188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_4b118c:
    // 0x4b118c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b118cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b1190:
    // 0x4b1190: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b1194:
    // 0x4b1194: 0xc6410e90  lwc1        $f1, 0xE90($s2)
    ctx->pc = 0x4b1194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b1198:
    // 0x4b1198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b1198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b119c:
    // 0x4b119c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b11a0:
    // 0x4b11a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b11a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4b11a4:
    // 0x4b11a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b11a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b11a8:
    // 0x4b11a8: 0x45000113  bc1f        . + 4 + (0x113 << 2)
label_4b11ac:
    if (ctx->pc == 0x4B11ACu) {
        ctx->pc = 0x4B11ACu;
            // 0x4b11ac: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->pc = 0x4B11B0u;
        goto label_4b11b0;
    }
    ctx->pc = 0x4B11A8u;
    {
        const bool branch_taken_0x4b11a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B11ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B11A8u;
            // 0x4b11ac: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b11a8) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B11B0u;
label_4b11b0:
    // 0x4b11b0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4b11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4b11b4:
    // 0x4b11b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b11b8:
    // 0x4b11b8: 0xae430e90  sw          $v1, 0xE90($s2)
    ctx->pc = 0x4b11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3728), GPR_U32(ctx, 3));
label_4b11bc:
    // 0x4b11bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4b11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b11c0:
    // 0x4b11c0: 0xae440e94  sw          $a0, 0xE94($s2)
    ctx->pc = 0x4b11c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3732), GPR_U32(ctx, 4));
label_4b11c4:
    // 0x4b11c4: 0x1000010c  b           . + 4 + (0x10C << 2)
label_4b11c8:
    if (ctx->pc == 0x4B11C8u) {
        ctx->pc = 0x4B11C8u;
            // 0x4b11c8: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x4B11CCu;
        goto label_4b11cc;
    }
    ctx->pc = 0x4B11C4u;
    {
        const bool branch_taken_0x4b11c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B11C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B11C4u;
            // 0x4b11c8: 0xae430e30  sw          $v1, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b11c4) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B11CCu;
label_4b11cc:
    // 0x4b11cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b11d0:
    // 0x4b11d0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b11d4:
    // 0x4b11d4: 0xc6410e90  lwc1        $f1, 0xE90($s2)
    ctx->pc = 0x4b11d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b11d8:
    // 0x4b11d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b11d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b11dc:
    // 0x4b11dc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4b11dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b11e0:
    // 0x4b11e0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b11e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4b11e4:
    // 0x4b11e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b11e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b11e8:
    // 0x4b11e8: 0x45000103  bc1f        . + 4 + (0x103 << 2)
label_4b11ec:
    if (ctx->pc == 0x4B11ECu) {
        ctx->pc = 0x4B11ECu;
            // 0x4b11ec: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->pc = 0x4B11F0u;
        goto label_4b11f0;
    }
    ctx->pc = 0x4B11E8u;
    {
        const bool branch_taken_0x4b11e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B11ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B11E8u;
            // 0x4b11ec: 0xe6410e90  swc1        $f1, 0xE90($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b11e8) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B11F0u;
label_4b11f0:
    // 0x4b11f0: 0x8e430e94  lw          $v1, 0xE94($s2)
    ctx->pc = 0x4b11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3732)));
label_4b11f4:
    // 0x4b11f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b11f8:
    // 0x4b11f8: 0x506200d3  beql        $v1, $v0, . + 4 + (0xD3 << 2)
label_4b11fc:
    if (ctx->pc == 0x4B11FCu) {
        ctx->pc = 0x4B11FCu;
            // 0x4b11fc: 0x3c033ebd  lui         $v1, 0x3EBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
        ctx->pc = 0x4B1200u;
        goto label_4b1200;
    }
    ctx->pc = 0x4B11F8u;
    {
        const bool branch_taken_0x4b11f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b11f8) {
            ctx->pc = 0x4B11FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B11F8u;
            // 0x4b11fc: 0x3c033ebd  lui         $v1, 0x3EBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1548u;
            goto label_4b1548;
        }
    }
    ctx->pc = 0x4B1200u;
label_4b1200:
    // 0x4b1200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1204:
    // 0x4b1204: 0x506200c7  beql        $v1, $v0, . + 4 + (0xC7 << 2)
label_4b1208:
    if (ctx->pc == 0x4B1208u) {
        ctx->pc = 0x4B1208u;
            // 0x4b1208: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x4B120Cu;
        goto label_4b120c;
    }
    ctx->pc = 0x4B1204u;
    {
        const bool branch_taken_0x4b1204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b1204) {
            ctx->pc = 0x4B1208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1204u;
            // 0x4b1208: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1524u;
            goto label_4b1524;
        }
    }
    ctx->pc = 0x4B120Cu;
label_4b120c:
    // 0x4b120c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4b1210:
    if (ctx->pc == 0x4B1210u) {
        ctx->pc = 0x4B1210u;
            // 0x4b1210: 0x3c023ebd  lui         $v0, 0x3EBD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
        ctx->pc = 0x4B1214u;
        goto label_4b1214;
    }
    ctx->pc = 0x4B120Cu;
    {
        const bool branch_taken_0x4b120c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b120c) {
            ctx->pc = 0x4B1210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B120Cu;
            // 0x4b1210: 0x3c023ebd  lui         $v0, 0x3EBD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B121Cu;
            goto label_4b121c;
        }
    }
    ctx->pc = 0x4B1214u;
label_4b1214:
    // 0x4b1214: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_4b1218:
    if (ctx->pc == 0x4B1218u) {
        ctx->pc = 0x4B1218u;
            // 0x4b1218: 0xae400af4  sw          $zero, 0xAF4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2804), GPR_U32(ctx, 0));
        ctx->pc = 0x4B121Cu;
        goto label_4b121c;
    }
    ctx->pc = 0x4B1214u;
    {
        const bool branch_taken_0x4b1214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1214u;
            // 0x4b1218: 0xae400af4  sw          $zero, 0xAF4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1214) {
            ctx->pc = 0x4B156Cu;
            goto label_4b156c;
        }
    }
    ctx->pc = 0x4B121Cu;
label_4b121c:
    // 0x4b121c: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x4b121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_4b1220:
    // 0x4b1220: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4b1220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b1224:
    // 0x4b1224: 0xc6400e88  lwc1        $f0, 0xE88($s2)
    ctx->pc = 0x4b1224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1228:
    // 0x4b1228: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4b1228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b122c:
    // 0x4b122c: 0x0  nop
    ctx->pc = 0x4b122cu;
    // NOP
label_4b1230:
    // 0x4b1230: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x4b1230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4b1234:
    // 0x4b1234: 0xc6400e84  lwc1        $f0, 0xE84($s2)
    ctx->pc = 0x4b1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1238:
    // 0x4b1238: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4b1238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4b123c:
    // 0x4b123c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x4b123cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_4b1240:
    // 0x4b1240: 0x0  nop
    ctx->pc = 0x4b1240u;
    // NOP
label_4b1244:
    // 0x4b1244: 0x0  nop
    ctx->pc = 0x4b1244u;
    // NOP
label_4b1248:
    // 0x4b1248: 0xc0754b4  jal         func_1D52D0
label_4b124c:
    if (ctx->pc == 0x4B124Cu) {
        ctx->pc = 0x4B1250u;
        goto label_4b1250;
    }
    ctx->pc = 0x4B1248u;
    SET_GPR_U32(ctx, 31, 0x4B1250u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1250u; }
        if (ctx->pc != 0x4B1250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1250u; }
        if (ctx->pc != 0x4B1250u) { return; }
    }
    ctx->pc = 0x4B1250u;
label_4b1250:
    // 0x4b1250: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4b1250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1254:
    // 0x4b1254: 0xc6410e80  lwc1        $f1, 0xE80($s2)
    ctx->pc = 0x4b1254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b1258:
    // 0x4b1258: 0x3c023ebd  lui         $v0, 0x3EBD
    ctx->pc = 0x4b1258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16061 << 16));
label_4b125c:
    // 0x4b125c: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x4b125cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b1260:
    // 0x4b1260: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4b1260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b1264:
    // 0x4b1264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b1264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b1268:
    // 0x4b1268: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x4b1268u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_4b126c:
    // 0x4b126c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4b126cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4b1270:
    // 0x4b1270: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x4b1270u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_4b1274:
    // 0x4b1274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b1274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b1278:
    // 0x4b1278: 0x0  nop
    ctx->pc = 0x4b1278u;
    // NOP
label_4b127c:
    // 0x4b127c: 0x0  nop
    ctx->pc = 0x4b127cu;
    // NOP
label_4b1280:
    // 0x4b1280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b1280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b1284:
    // 0x4b1284: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4b1288:
    if (ctx->pc == 0x4B1288u) {
        ctx->pc = 0x4B128Cu;
        goto label_4b128c;
    }
    ctx->pc = 0x4B1284u;
    {
        const bool branch_taken_0x4b1284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b1284) {
            ctx->pc = 0x4B1294u;
            goto label_4b1294;
        }
    }
    ctx->pc = 0x4B128Cu;
label_4b128c:
    // 0x4b128c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b1290:
    if (ctx->pc == 0x4B1290u) {
        ctx->pc = 0x4B1290u;
            // 0x4b1290: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4B1294u;
        goto label_4b1294;
    }
    ctx->pc = 0x4B128Cu;
    {
        const bool branch_taken_0x4b128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B128Cu;
            // 0x4b1290: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b128c) {
            ctx->pc = 0x4B12ACu;
            goto label_4b12ac;
        }
    }
    ctx->pc = 0x4B1294u;
label_4b1294:
    // 0x4b1294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b1294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b1298:
    // 0x4b1298: 0x0  nop
    ctx->pc = 0x4b1298u;
    // NOP
label_4b129c:
    // 0x4b129c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b129cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b12a0:
    // 0x4b12a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b12a4:
    if (ctx->pc == 0x4B12A4u) {
        ctx->pc = 0x4B12A4u;
            // 0x4b12a4: 0x3c023e0e  lui         $v0, 0x3E0E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
        ctx->pc = 0x4B12A8u;
        goto label_4b12a8;
    }
    ctx->pc = 0x4B12A0u;
    {
        const bool branch_taken_0x4b12a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b12a0) {
            ctx->pc = 0x4B12A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B12A0u;
            // 0x4b12a4: 0x3c023e0e  lui         $v0, 0x3E0E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B12B0u;
            goto label_4b12b0;
        }
    }
    ctx->pc = 0x4B12A8u;
label_4b12a8:
    // 0x4b12a8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4b12a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_4b12ac:
    // 0x4b12ac: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x4b12acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_4b12b0:
    // 0x4b12b0: 0x344438e4  ori         $a0, $v0, 0x38E4
    ctx->pc = 0x4b12b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_4b12b4:
    // 0x4b12b4: 0x3c023dbd  lui         $v0, 0x3DBD
    ctx->pc = 0x4b12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15805 << 16));
label_4b12b8:
    // 0x4b12b8: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x4b12b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4b12bc:
    // 0x4b12bc: 0x46140942  mul.s       $f5, $f1, $f20
    ctx->pc = 0x4b12bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_4b12c0:
    // 0x4b12c0: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x4b12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_4b12c4:
    // 0x4b12c4: 0x344225ed  ori         $v0, $v0, 0x25ED
    ctx->pc = 0x4b12c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
label_4b12c8:
    // 0x4b12c8: 0xc6430e88  lwc1        $f3, 0xE88($s2)
    ctx->pc = 0x4b12c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b12cc:
    // 0x4b12cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b12ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b12d0:
    // 0x4b12d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b12d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b12d4:
    // 0x4b12d4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x4b12d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4b12d8:
    // 0x4b12d8: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x4b12d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4b12dc:
    // 0x4b12dc: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4b12dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b12e0:
    // 0x4b12e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b12e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b12e4:
    // 0x4b12e4: 0x4605205c  madd.s      $f1, $f4, $f5
    ctx->pc = 0x4b12e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_4b12e8:
    // 0x4b12e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b12e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b12ec:
    // 0x4b12ec: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_4b12f0:
    if (ctx->pc == 0x4B12F0u) {
        ctx->pc = 0x4B12F0u;
            // 0x4b12f0: 0xe6410de4  swc1        $f1, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x4B12F4u;
        goto label_4b12f4;
    }
    ctx->pc = 0x4B12ECu;
    {
        const bool branch_taken_0x4b12ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b12ec) {
            ctx->pc = 0x4B12F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B12ECu;
            // 0x4b12f0: 0xe6410de4  swc1        $f1, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B12FCu;
            goto label_4b12fc;
        }
    }
    ctx->pc = 0x4B12F4u;
label_4b12f4:
    // 0x4b12f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4b12f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_4b12f8:
    // 0x4b12f8: 0xe6410de4  swc1        $f1, 0xDE4($s2)
    ctx->pc = 0x4b12f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_4b12fc:
    // 0x4b12fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b12fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b1300:
    // 0x4b1300: 0xc07649c  jal         func_1D9270
label_4b1304:
    if (ctx->pc == 0x4B1304u) {
        ctx->pc = 0x4B1304u;
            // 0x4b1304: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B1308u;
        goto label_4b1308;
    }
    ctx->pc = 0x4B1300u;
    SET_GPR_U32(ctx, 31, 0x4B1308u);
    ctx->pc = 0x4B1304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1300u;
            // 0x4b1304: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1308u; }
        if (ctx->pc != 0x4B1308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1308u; }
        if (ctx->pc != 0x4B1308u) { return; }
    }
    ctx->pc = 0x4B1308u;
label_4b1308:
    // 0x4b1308: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x4b1308u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_4b130c:
    // 0x4b130c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b130cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1310:
    // 0x4b1310: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b1310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b1314:
    // 0x4b1314: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4b1314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1318:
    // 0x4b1318: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b1318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b131c:
    // 0x4b131c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b1320:
    // 0x4b1320: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4b1320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b1324:
    // 0x4b1324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b1324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1328:
    // 0x4b1328: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4b1328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4b132c:
    // 0x4b132c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b1330:
    // 0x4b1330: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b1330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4b1334:
    // 0x4b1334: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4b1334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4b1338:
    // 0x4b1338: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4b1338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4b133c:
    // 0x4b133c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b133cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b1340:
    // 0x4b1340: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b1340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b1344:
    // 0x4b1344: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b1344u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b1348:
    // 0x4b1348: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b1348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b134c:
    // 0x4b134c: 0x320f809  jalr        $t9
label_4b1350:
    if (ctx->pc == 0x4B1350u) {
        ctx->pc = 0x4B1350u;
            // 0x4b1350: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B1354u;
        goto label_4b1354;
    }
    ctx->pc = 0x4B134Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B1354u);
        ctx->pc = 0x4B1350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B134Cu;
            // 0x4b1350: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B1354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B1354u; }
            if (ctx->pc != 0x4B1354u) { return; }
        }
        }
    }
    ctx->pc = 0x4B1354u;
label_4b1354:
    // 0x4b1354: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b1354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b1358:
    // 0x4b1358: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4b1358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4b135c:
    // 0x4b135c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x4b135cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4b1360:
    // 0x4b1360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b1360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b1364:
    // 0x4b1364: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b1364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b1368:
    // 0x4b1368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b1368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b136c:
    // 0x4b136c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4b136cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4b1370:
    // 0x4b1370: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x4b1370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4b1374:
    // 0x4b1374: 0x320f809  jalr        $t9
label_4b1378:
    if (ctx->pc == 0x4B1378u) {
        ctx->pc = 0x4B1378u;
            // 0x4b1378: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B137Cu;
        goto label_4b137c;
    }
    ctx->pc = 0x4B1374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B137Cu);
        ctx->pc = 0x4B1378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1374u;
            // 0x4b1378: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B137Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B137Cu; }
            if (ctx->pc != 0x4B137Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B137Cu;
label_4b137c:
    // 0x4b137c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4b137cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4b1380:
    // 0x4b1380: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4b1380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1384:
    // 0x4b1384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b1384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b1388:
    // 0x4b1388: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4b1388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4b138c:
    // 0x4b138c: 0x320f809  jalr        $t9
label_4b1390:
    if (ctx->pc == 0x4B1390u) {
        ctx->pc = 0x4B1390u;
            // 0x4b1390: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1394u;
        goto label_4b1394;
    }
    ctx->pc = 0x4B138Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B1394u);
        ctx->pc = 0x4B1390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B138Cu;
            // 0x4b1390: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B1394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B1394u; }
            if (ctx->pc != 0x4B1394u) { return; }
        }
        }
    }
    ctx->pc = 0x4B1394u;
label_4b1394:
    // 0x4b1394: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b1394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b1398:
    // 0x4b1398: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x4b1398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b139c:
    // 0x4b139c: 0xc077228  jal         func_1DC8A0
label_4b13a0:
    if (ctx->pc == 0x4B13A0u) {
        ctx->pc = 0x4B13A0u;
            // 0x4b13a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B13A4u;
        goto label_4b13a4;
    }
    ctx->pc = 0x4B139Cu;
    SET_GPR_U32(ctx, 31, 0x4B13A4u);
    ctx->pc = 0x4B13A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B139Cu;
            // 0x4b13a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC8A0u;
    if (runtime->hasFunction(0x1DC8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13A4u; }
        if (ctx->pc != 0x4B13A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC8A0_0x1dc8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13A4u; }
        if (ctx->pc != 0x4B13A4u) { return; }
    }
    ctx->pc = 0x4B13A4u;
label_4b13a4:
    // 0x4b13a4: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
label_4b13a8:
    if (ctx->pc == 0x4B13A8u) {
        ctx->pc = 0x4B13A8u;
            // 0x4b13a8: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x4B13ACu;
        goto label_4b13ac;
    }
    ctx->pc = 0x4B13A4u;
    {
        const bool branch_taken_0x4b13a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b13a4) {
            ctx->pc = 0x4B13A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13A4u;
            // 0x4b13a8: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1508u;
            goto label_4b1508;
        }
    }
    ctx->pc = 0x4B13ACu;
label_4b13ac:
    // 0x4b13ac: 0xc07732c  jal         func_1DCCB0
label_4b13b0:
    if (ctx->pc == 0x4B13B0u) {
        ctx->pc = 0x4B13B0u;
            // 0x4b13b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B13B4u;
        goto label_4b13b4;
    }
    ctx->pc = 0x4B13ACu;
    SET_GPR_U32(ctx, 31, 0x4B13B4u);
    ctx->pc = 0x4B13B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13ACu;
            // 0x4b13b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13B4u; }
        if (ctx->pc != 0x4B13B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13B4u; }
        if (ctx->pc != 0x4B13B4u) { return; }
    }
    ctx->pc = 0x4B13B4u;
label_4b13b4:
    // 0x4b13b4: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_4b13b8:
    if (ctx->pc == 0x4B13B8u) {
        ctx->pc = 0x4B13BCu;
        goto label_4b13bc;
    }
    ctx->pc = 0x4B13B4u;
    {
        const bool branch_taken_0x4b13b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b13b4) {
            ctx->pc = 0x4B1504u;
            goto label_4b1504;
        }
    }
    ctx->pc = 0x4B13BCu;
label_4b13bc:
    // 0x4b13bc: 0xc077320  jal         func_1DCC80
label_4b13c0:
    if (ctx->pc == 0x4B13C0u) {
        ctx->pc = 0x4B13C0u;
            // 0x4b13c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B13C4u;
        goto label_4b13c4;
    }
    ctx->pc = 0x4B13BCu;
    SET_GPR_U32(ctx, 31, 0x4B13C4u);
    ctx->pc = 0x4B13C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13BCu;
            // 0x4b13c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13C4u; }
        if (ctx->pc != 0x4B13C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13C4u; }
        if (ctx->pc != 0x4B13C4u) { return; }
    }
    ctx->pc = 0x4B13C4u;
label_4b13c4:
    // 0x4b13c4: 0xc0d4290  jal         func_350A40
label_4b13c8:
    if (ctx->pc == 0x4B13C8u) {
        ctx->pc = 0x4B13C8u;
            // 0x4b13c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B13CCu;
        goto label_4b13cc;
    }
    ctx->pc = 0x4B13C4u;
    SET_GPR_U32(ctx, 31, 0x4B13CCu);
    ctx->pc = 0x4B13C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13C4u;
            // 0x4b13c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350A40u;
    if (runtime->hasFunction(0x350A40u)) {
        auto targetFn = runtime->lookupFunction(0x350A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13CCu; }
        if (ctx->pc != 0x4B13CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350A40_0x350a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13CCu; }
        if (ctx->pc != 0x4B13CCu) { return; }
    }
    ctx->pc = 0x4B13CCu;
label_4b13cc:
    // 0x4b13cc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_4b13d0:
    if (ctx->pc == 0x4B13D0u) {
        ctx->pc = 0x4B13D0u;
            // 0x4b13d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B13D4u;
        goto label_4b13d4;
    }
    ctx->pc = 0x4B13CCu;
    {
        const bool branch_taken_0x4b13cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b13cc) {
            ctx->pc = 0x4B13D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13CCu;
            // 0x4b13d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1438u;
            goto label_4b1438;
        }
    }
    ctx->pc = 0x4B13D4u;
label_4b13d4:
    // 0x4b13d4: 0xc040180  jal         func_100600
label_4b13d8:
    if (ctx->pc == 0x4B13D8u) {
        ctx->pc = 0x4B13D8u;
            // 0x4b13d8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4B13DCu;
        goto label_4b13dc;
    }
    ctx->pc = 0x4B13D4u;
    SET_GPR_U32(ctx, 31, 0x4B13DCu);
    ctx->pc = 0x4B13D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13D4u;
            // 0x4b13d8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13DCu; }
        if (ctx->pc != 0x4B13DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13DCu; }
        if (ctx->pc != 0x4B13DCu) { return; }
    }
    ctx->pc = 0x4B13DCu;
label_4b13dc:
    // 0x4b13dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b13dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b13e0:
    // 0x4b13e0: 0x12a00014  beqz        $s5, . + 4 + (0x14 << 2)
label_4b13e4:
    if (ctx->pc == 0x4B13E4u) {
        ctx->pc = 0x4B13E8u;
        goto label_4b13e8;
    }
    ctx->pc = 0x4B13E0u;
    {
        const bool branch_taken_0x4b13e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b13e0) {
            ctx->pc = 0x4B1434u;
            goto label_4b1434;
        }
    }
    ctx->pc = 0x4B13E8u;
label_4b13e8:
    // 0x4b13e8: 0xc0d428c  jal         func_350A30
label_4b13ec:
    if (ctx->pc == 0x4B13ECu) {
        ctx->pc = 0x4B13ECu;
            // 0x4b13ec: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->pc = 0x4B13F0u;
        goto label_4b13f0;
    }
    ctx->pc = 0x4B13E8u;
    SET_GPR_U32(ctx, 31, 0x4B13F0u);
    ctx->pc = 0x4B13ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13E8u;
            // 0x4b13ec: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350A30u;
    if (runtime->hasFunction(0x350A30u)) {
        auto targetFn = runtime->lookupFunction(0x350A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13F0u; }
        if (ctx->pc != 0x4B13F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350A30_0x350a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13F0u; }
        if (ctx->pc != 0x4B13F0u) { return; }
    }
    ctx->pc = 0x4B13F0u;
label_4b13f0:
    // 0x4b13f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b13f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b13f4:
    // 0x4b13f4: 0xc077324  jal         func_1DCC90
label_4b13f8:
    if (ctx->pc == 0x4B13F8u) {
        ctx->pc = 0x4B13F8u;
            // 0x4b13f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B13FCu;
        goto label_4b13fc;
    }
    ctx->pc = 0x4B13F4u;
    SET_GPR_U32(ctx, 31, 0x4B13FCu);
    ctx->pc = 0x4B13F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B13F4u;
            // 0x4b13f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13FCu; }
        if (ctx->pc != 0x4B13FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B13FCu; }
        if (ctx->pc != 0x4B13FCu) { return; }
    }
    ctx->pc = 0x4B13FCu;
label_4b13fc:
    // 0x4b13fc: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x4b13fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_4b1400:
    // 0x4b1400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b1400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b1404:
    // 0x4b1404: 0xc077320  jal         func_1DCC80
label_4b1408:
    if (ctx->pc == 0x4B1408u) {
        ctx->pc = 0x4B1408u;
            // 0x4b1408: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->pc = 0x4B140Cu;
        goto label_4b140c;
    }
    ctx->pc = 0x4B1404u;
    SET_GPR_U32(ctx, 31, 0x4B140Cu);
    ctx->pc = 0x4B1408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1404u;
            // 0x4b1408: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B140Cu; }
        if (ctx->pc != 0x4B140Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B140Cu; }
        if (ctx->pc != 0x4B140Cu) { return; }
    }
    ctx->pc = 0x4B140Cu;
label_4b140c:
    // 0x4b140c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4b140cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1410:
    // 0x4b1410: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b1410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b1414:
    // 0x4b1414: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4b1414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4b1418:
    // 0x4b1418: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4b1418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b141c:
    // 0x4b141c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4b141cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b1420:
    // 0x4b1420: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4b1420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4b1424:
    // 0x4b1424: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x4b1424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_4b1428:
    // 0x4b1428: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x4b1428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_4b142c:
    // 0x4b142c: 0xc0d4270  jal         func_3509C0
label_4b1430:
    if (ctx->pc == 0x4B1430u) {
        ctx->pc = 0x4B1430u;
            // 0x4b1430: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1434u;
        goto label_4b1434;
    }
    ctx->pc = 0x4B142Cu;
    SET_GPR_U32(ctx, 31, 0x4B1434u);
    ctx->pc = 0x4B1430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B142Cu;
            // 0x4b1430: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3509C0u;
    if (runtime->hasFunction(0x3509C0u)) {
        auto targetFn = runtime->lookupFunction(0x3509C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1434u; }
        if (ctx->pc != 0x4B1434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003509C0_0x3509c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1434u; }
        if (ctx->pc != 0x4B1434u) { return; }
    }
    ctx->pc = 0x4B1434u;
label_4b1434:
    // 0x4b1434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b1434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b1438:
    // 0x4b1438: 0xc0d426c  jal         func_3509B0
label_4b143c:
    if (ctx->pc == 0x4B143Cu) {
        ctx->pc = 0x4B1440u;
        goto label_4b1440;
    }
    ctx->pc = 0x4B1438u;
    SET_GPR_U32(ctx, 31, 0x4B1440u);
    ctx->pc = 0x3509B0u;
    if (runtime->hasFunction(0x3509B0u)) {
        auto targetFn = runtime->lookupFunction(0x3509B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1440u; }
        if (ctx->pc != 0x4B1440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003509B0_0x3509b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1440u; }
        if (ctx->pc != 0x4B1440u) { return; }
    }
    ctx->pc = 0x4B1440u;
label_4b1440:
    // 0x4b1440: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_4b1444:
    if (ctx->pc == 0x4B1444u) {
        ctx->pc = 0x4B1448u;
        goto label_4b1448;
    }
    ctx->pc = 0x4B1440u;
    {
        const bool branch_taken_0x4b1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1440) {
            ctx->pc = 0x4B1504u;
            goto label_4b1504;
        }
    }
    ctx->pc = 0x4B1448u;
label_4b1448:
    // 0x4b1448: 0xc07732c  jal         func_1DCCB0
label_4b144c:
    if (ctx->pc == 0x4B144Cu) {
        ctx->pc = 0x4B144Cu;
            // 0x4b144c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1450u;
        goto label_4b1450;
    }
    ctx->pc = 0x4B1448u;
    SET_GPR_U32(ctx, 31, 0x4B1450u);
    ctx->pc = 0x4B144Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1448u;
            // 0x4b144c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1450u; }
        if (ctx->pc != 0x4B1450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1450u; }
        if (ctx->pc != 0x4B1450u) { return; }
    }
    ctx->pc = 0x4B1450u;
label_4b1450:
    // 0x4b1450: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_4b1454:
    if (ctx->pc == 0x4B1454u) {
        ctx->pc = 0x4B1458u;
        goto label_4b1458;
    }
    ctx->pc = 0x4B1450u;
    {
        const bool branch_taken_0x4b1450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1450) {
            ctx->pc = 0x4B1504u;
            goto label_4b1504;
        }
    }
    ctx->pc = 0x4B1458u;
label_4b1458:
    // 0x4b1458: 0xc0770e4  jal         func_1DC390
label_4b145c:
    if (ctx->pc == 0x4B145Cu) {
        ctx->pc = 0x4B145Cu;
            // 0x4b145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1460u;
        goto label_4b1460;
    }
    ctx->pc = 0x4B1458u;
    SET_GPR_U32(ctx, 31, 0x4B1460u);
    ctx->pc = 0x4B145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1458u;
            // 0x4b145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1460u; }
        if (ctx->pc != 0x4B1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1460u; }
        if (ctx->pc != 0x4B1460u) { return; }
    }
    ctx->pc = 0x4B1460u;
label_4b1460:
    // 0x4b1460: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b1460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b1464:
    // 0x4b1464: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_4b1468:
    if (ctx->pc == 0x4B1468u) {
        ctx->pc = 0x4B146Cu;
        goto label_4b146c;
    }
    ctx->pc = 0x4B1464u;
    {
        const bool branch_taken_0x4b1464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b1464) {
            ctx->pc = 0x4B1474u;
            goto label_4b1474;
        }
    }
    ctx->pc = 0x4B146Cu;
label_4b146c:
    // 0x4b146c: 0x10000025  b           . + 4 + (0x25 << 2)
label_4b1470:
    if (ctx->pc == 0x4B1470u) {
        ctx->pc = 0x4B1474u;
        goto label_4b1474;
    }
    ctx->pc = 0x4B146Cu;
    {
        const bool branch_taken_0x4b146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b146c) {
            ctx->pc = 0x4B1504u;
            goto label_4b1504;
        }
    }
    ctx->pc = 0x4B1474u;
label_4b1474:
    // 0x4b1474: 0xc0576f4  jal         func_15DBD0
label_4b1478:
    if (ctx->pc == 0x4B1478u) {
        ctx->pc = 0x4B147Cu;
        goto label_4b147c;
    }
    ctx->pc = 0x4B1474u;
    SET_GPR_U32(ctx, 31, 0x4B147Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B147Cu; }
        if (ctx->pc != 0x4B147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B147Cu; }
        if (ctx->pc != 0x4B147Cu) { return; }
    }
    ctx->pc = 0x4B147Cu;
label_4b147c:
    // 0x4b147c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b147cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b1480:
    // 0x4b1480: 0xc077320  jal         func_1DCC80
label_4b1484:
    if (ctx->pc == 0x4B1484u) {
        ctx->pc = 0x4B1484u;
            // 0x4b1484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1488u;
        goto label_4b1488;
    }
    ctx->pc = 0x4B1480u;
    SET_GPR_U32(ctx, 31, 0x4B1488u);
    ctx->pc = 0x4B1484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1480u;
            // 0x4b1484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1488u; }
        if (ctx->pc != 0x4B1488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1488u; }
        if (ctx->pc != 0x4B1488u) { return; }
    }
    ctx->pc = 0x4B1488u;
label_4b1488:
    // 0x4b1488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b148c:
    // 0x4b148c: 0xc076984  jal         func_1DA610
label_4b1490:
    if (ctx->pc == 0x4B1490u) {
        ctx->pc = 0x4B1490u;
            // 0x4b1490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1494u;
        goto label_4b1494;
    }
    ctx->pc = 0x4B148Cu;
    SET_GPR_U32(ctx, 31, 0x4B1494u);
    ctx->pc = 0x4B1490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B148Cu;
            // 0x4b1490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1494u; }
        if (ctx->pc != 0x4B1494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1494u; }
        if (ctx->pc != 0x4B1494u) { return; }
    }
    ctx->pc = 0x4B1494u;
label_4b1494:
    // 0x4b1494: 0xc076980  jal         func_1DA600
label_4b1498:
    if (ctx->pc == 0x4B1498u) {
        ctx->pc = 0x4B1498u;
            // 0x4b1498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B149Cu;
        goto label_4b149c;
    }
    ctx->pc = 0x4B1494u;
    SET_GPR_U32(ctx, 31, 0x4B149Cu);
    ctx->pc = 0x4B1498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1494u;
            // 0x4b1498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B149Cu; }
        if (ctx->pc != 0x4B149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B149Cu; }
        if (ctx->pc != 0x4B149Cu) { return; }
    }
    ctx->pc = 0x4B149Cu;
label_4b149c:
    // 0x4b149c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4b149cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b14a0:
    // 0x4b14a0: 0xc077324  jal         func_1DCC90
label_4b14a4:
    if (ctx->pc == 0x4B14A4u) {
        ctx->pc = 0x4B14A4u;
            // 0x4b14a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B14A8u;
        goto label_4b14a8;
    }
    ctx->pc = 0x4B14A0u;
    SET_GPR_U32(ctx, 31, 0x4B14A8u);
    ctx->pc = 0x4B14A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B14A0u;
            // 0x4b14a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14A8u; }
        if (ctx->pc != 0x4B14A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14A8u; }
        if (ctx->pc != 0x4B14A8u) { return; }
    }
    ctx->pc = 0x4B14A8u;
label_4b14a8:
    // 0x4b14a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4b14a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4b14ac:
    // 0x4b14ac: 0xc077258  jal         func_1DC960
label_4b14b0:
    if (ctx->pc == 0x4B14B0u) {
        ctx->pc = 0x4B14B0u;
            // 0x4b14b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B14B4u;
        goto label_4b14b4;
    }
    ctx->pc = 0x4B14ACu;
    SET_GPR_U32(ctx, 31, 0x4B14B4u);
    ctx->pc = 0x4B14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B14ACu;
            // 0x4b14b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14B4u; }
        if (ctx->pc != 0x4B14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14B4u; }
        if (ctx->pc != 0x4B14B4u) { return; }
    }
    ctx->pc = 0x4B14B4u;
label_4b14b4:
    // 0x4b14b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4b14b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b14b8:
    // 0x4b14b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b14b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b14bc:
    // 0x4b14bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b14c0:
    // 0x4b14c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4b14c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b14c4:
    // 0x4b14c4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4b14c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4b14c8:
    // 0x4b14c8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x4b14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_4b14cc:
    // 0x4b14cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b14ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b14d0:
    // 0x4b14d0: 0xc0bb404  jal         func_2ED010
label_4b14d4:
    if (ctx->pc == 0x4B14D4u) {
        ctx->pc = 0x4B14D4u;
            // 0x4b14d4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4B14D8u;
        goto label_4b14d8;
    }
    ctx->pc = 0x4B14D0u;
    SET_GPR_U32(ctx, 31, 0x4B14D8u);
    ctx->pc = 0x4B14D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B14D0u;
            // 0x4b14d4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14D8u; }
        if (ctx->pc != 0x4B14D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14D8u; }
        if (ctx->pc != 0x4B14D8u) { return; }
    }
    ctx->pc = 0x4B14D8u;
label_4b14d8:
    // 0x4b14d8: 0xc077324  jal         func_1DCC90
label_4b14dc:
    if (ctx->pc == 0x4B14DCu) {
        ctx->pc = 0x4B14DCu;
            // 0x4b14dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B14E0u;
        goto label_4b14e0;
    }
    ctx->pc = 0x4B14D8u;
    SET_GPR_U32(ctx, 31, 0x4B14E0u);
    ctx->pc = 0x4B14DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B14D8u;
            // 0x4b14dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14E0u; }
        if (ctx->pc != 0x4B14E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B14E0u; }
        if (ctx->pc != 0x4B14E0u) { return; }
    }
    ctx->pc = 0x4B14E0u;
label_4b14e0:
    // 0x4b14e0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x4b14e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_4b14e4:
    // 0x4b14e4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4b14e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4b14e8:
    // 0x4b14e8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4b14e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4b14ec:
    // 0x4b14ec: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x4b14ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_4b14f0:
    // 0x4b14f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b14f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b14f4:
    // 0x4b14f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b14f8:
    // 0x4b14f8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4b14f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4b14fc:
    // 0x4b14fc: 0xc077554  jal         func_1DD550
label_4b1500:
    if (ctx->pc == 0x4B1500u) {
        ctx->pc = 0x4B1500u;
            // 0x4b1500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B1504u;
        goto label_4b1504;
    }
    ctx->pc = 0x4B14FCu;
    SET_GPR_U32(ctx, 31, 0x4B1504u);
    ctx->pc = 0x4B1500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B14FCu;
            // 0x4b1500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1504u; }
        if (ctx->pc != 0x4B1504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1504u; }
        if (ctx->pc != 0x4B1504u) { return; }
    }
    ctx->pc = 0x4B1504u;
label_4b1504:
    // 0x4b1504: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x4b1504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4b1508:
    // 0x4b1508: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x4b1508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_4b150c:
    // 0x4b150c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4b150cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4b1510:
    // 0x4b1510: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4b1510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4b1514:
    // 0x4b1514: 0x320f809  jalr        $t9
label_4b1518:
    if (ctx->pc == 0x4B1518u) {
        ctx->pc = 0x4B1518u;
            // 0x4b1518: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4B151Cu;
        goto label_4b151c;
    }
    ctx->pc = 0x4B1514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B151Cu);
        ctx->pc = 0x4B1518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1514u;
            // 0x4b1518: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B151Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B151Cu; }
            if (ctx->pc != 0x4B151Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B151Cu;
label_4b151c:
    // 0x4b151c: 0x10000012  b           . + 4 + (0x12 << 2)
label_4b1520:
    if (ctx->pc == 0x4B1520u) {
        ctx->pc = 0x4B1524u;
        goto label_4b1524;
    }
    ctx->pc = 0x4B151Cu;
    {
        const bool branch_taken_0x4b151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b151c) {
            ctx->pc = 0x4B1568u;
            goto label_4b1568;
        }
    }
    ctx->pc = 0x4B1524u;
label_4b1524:
    // 0x4b1524: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x4b1524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_4b1528:
    // 0x4b1528: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4b1528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4b152c:
    // 0x4b152c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4b152cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4b1530:
    // 0x4b1530: 0x320f809  jalr        $t9
label_4b1534:
    if (ctx->pc == 0x4B1534u) {
        ctx->pc = 0x4B1534u;
            // 0x4b1534: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4B1538u;
        goto label_4b1538;
    }
    ctx->pc = 0x4B1530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B1538u);
        ctx->pc = 0x4B1534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1530u;
            // 0x4b1534: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B1538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B1538u; }
            if (ctx->pc != 0x4B1538u) { return; }
        }
        }
    }
    ctx->pc = 0x4B1538u;
label_4b1538:
    // 0x4b1538: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x4b1538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
label_4b153c:
    // 0x4b153c: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x4b153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_4b1540:
    // 0x4b1540: 0x10000009  b           . + 4 + (0x9 << 2)
label_4b1544:
    if (ctx->pc == 0x4B1544u) {
        ctx->pc = 0x4B1544u;
            // 0x4b1544: 0xae420de4  sw          $v0, 0xDE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 2));
        ctx->pc = 0x4B1548u;
        goto label_4b1548;
    }
    ctx->pc = 0x4B1540u;
    {
        const bool branch_taken_0x4b1540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1540u;
            // 0x4b1544: 0xae420de4  sw          $v0, 0xDE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1540) {
            ctx->pc = 0x4B1568u;
            goto label_4b1568;
        }
    }
    ctx->pc = 0x4B1548u;
label_4b1548:
    // 0x4b1548: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x4b1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_4b154c:
    // 0x4b154c: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x4b154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_4b1550:
    // 0x4b1550: 0xae430de4  sw          $v1, 0xDE4($s2)
    ctx->pc = 0x4b1550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 3));
label_4b1554:
    // 0x4b1554: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x4b1554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4b1558:
    // 0x4b1558: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4b1558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4b155c:
    // 0x4b155c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4b155cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4b1560:
    // 0x4b1560: 0x320f809  jalr        $t9
label_4b1564:
    if (ctx->pc == 0x4B1564u) {
        ctx->pc = 0x4B1564u;
            // 0x4b1564: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4B1568u;
        goto label_4b1568;
    }
    ctx->pc = 0x4B1560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B1568u);
        ctx->pc = 0x4B1564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1560u;
            // 0x4b1564: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B1568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B1568u; }
            if (ctx->pc != 0x4B1568u) { return; }
        }
        }
    }
    ctx->pc = 0x4B1568u;
label_4b1568:
    // 0x4b1568: 0xae400af4  sw          $zero, 0xAF4($s2)
    ctx->pc = 0x4b1568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2804), GPR_U32(ctx, 0));
label_4b156c:
    // 0x4b156c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b156cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b1570:
    // 0x4b1570: 0xae400af8  sw          $zero, 0xAF8($s2)
    ctx->pc = 0x4b1570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2808), GPR_U32(ctx, 0));
label_4b1574:
    // 0x4b1574: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x4b1574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_4b1578:
    // 0x4b1578: 0xae400b00  sw          $zero, 0xB00($s2)
    ctx->pc = 0x4b1578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2816), GPR_U32(ctx, 0));
label_4b157c:
    // 0x4b157c: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x4b157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b1580:
    // 0x4b1580: 0xc0c753c  jal         func_31D4F0
label_4b1584:
    if (ctx->pc == 0x4B1584u) {
        ctx->pc = 0x4B1584u;
            // 0x4b1584: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4B1588u;
        goto label_4b1588;
    }
    ctx->pc = 0x4B1580u;
    SET_GPR_U32(ctx, 31, 0x4B1588u);
    ctx->pc = 0x4B1584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1580u;
            // 0x4b1584: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1588u; }
        if (ctx->pc != 0x4B1588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1588u; }
        if (ctx->pc != 0x4B1588u) { return; }
    }
    ctx->pc = 0x4B1588u;
label_4b1588:
    // 0x4b1588: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4b1588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4b158c:
    // 0x4b158c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b1590:
    // 0x4b1590: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4b1590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4b1594:
    // 0x4b1594: 0x320f809  jalr        $t9
label_4b1598:
    if (ctx->pc == 0x4B1598u) {
        ctx->pc = 0x4B1598u;
            // 0x4b1598: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4B159Cu;
        goto label_4b159c;
    }
    ctx->pc = 0x4B1594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B159Cu);
        ctx->pc = 0x4B1598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1594u;
            // 0x4b1598: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B159Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B159Cu; }
            if (ctx->pc != 0x4B159Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B159Cu;
label_4b159c:
    // 0x4b159c: 0x8e430d9c  lw          $v1, 0xD9C($s2)
    ctx->pc = 0x4b159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_4b15a0:
    // 0x4b15a0: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4b15a0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4b15a4:
    // 0x4b15a4: 0x34630018  ori         $v1, $v1, 0x18
    ctx->pc = 0x4b15a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
label_4b15a8:
    // 0x4b15a8: 0xae430d9c  sw          $v1, 0xD9C($s2)
    ctx->pc = 0x4b15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 3));
label_4b15ac:
    // 0x4b15ac: 0xae400dc4  sw          $zero, 0xDC4($s2)
    ctx->pc = 0x4b15acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
label_4b15b0:
    // 0x4b15b0: 0x8e430e38  lw          $v1, 0xE38($s2)
    ctx->pc = 0x4b15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_4b15b4:
    // 0x4b15b4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4b15b8:
    if (ctx->pc == 0x4B15B8u) {
        ctx->pc = 0x4B15B8u;
            // 0x4b15b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B15BCu;
        goto label_4b15bc;
    }
    ctx->pc = 0x4B15B4u;
    {
        const bool branch_taken_0x4b15b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B15B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B15B4u;
            // 0x4b15b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b15b4) {
            ctx->pc = 0x4B15CCu;
            goto label_4b15cc;
        }
    }
    ctx->pc = 0x4B15BCu;
label_4b15bc:
    // 0x4b15bc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4b15bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4b15c0:
    // 0x4b15c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4b15c4:
    if (ctx->pc == 0x4B15C4u) {
        ctx->pc = 0x4B15C8u;
        goto label_4b15c8;
    }
    ctx->pc = 0x4B15C0u;
    {
        const bool branch_taken_0x4b15c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b15c0) {
            ctx->pc = 0x4B15CCu;
            goto label_4b15cc;
        }
    }
    ctx->pc = 0x4B15C8u;
label_4b15c8:
    // 0x4b15c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b15c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b15cc:
    // 0x4b15cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4b15d0:
    if (ctx->pc == 0x4B15D0u) {
        ctx->pc = 0x4B15D4u;
        goto label_4b15d4;
    }
    ctx->pc = 0x4B15CCu;
    {
        const bool branch_taken_0x4b15cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b15cc) {
            ctx->pc = 0x4B15E8u;
            goto label_4b15e8;
        }
    }
    ctx->pc = 0x4B15D4u;
label_4b15d4:
    // 0x4b15d4: 0xc075eb4  jal         func_1D7AD0
label_4b15d8:
    if (ctx->pc == 0x4B15D8u) {
        ctx->pc = 0x4B15D8u;
            // 0x4b15d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B15DCu;
        goto label_4b15dc;
    }
    ctx->pc = 0x4B15D4u;
    SET_GPR_U32(ctx, 31, 0x4B15DCu);
    ctx->pc = 0x4B15D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B15D4u;
            // 0x4b15d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B15DCu; }
        if (ctx->pc != 0x4B15DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B15DCu; }
        if (ctx->pc != 0x4B15DCu) { return; }
    }
    ctx->pc = 0x4B15DCu;
label_4b15dc:
    // 0x4b15dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4b15e0:
    if (ctx->pc == 0x4B15E0u) {
        ctx->pc = 0x4B15E4u;
        goto label_4b15e4;
    }
    ctx->pc = 0x4B15DCu;
    {
        const bool branch_taken_0x4b15dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b15dc) {
            ctx->pc = 0x4B15E8u;
            goto label_4b15e8;
        }
    }
    ctx->pc = 0x4B15E4u;
label_4b15e4:
    // 0x4b15e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b15e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b15e8:
    // 0x4b15e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_4b15ec:
    if (ctx->pc == 0x4B15ECu) {
        ctx->pc = 0x4B15F0u;
        goto label_4b15f0;
    }
    ctx->pc = 0x4B15E8u;
    {
        const bool branch_taken_0x4b15e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b15e8) {
            ctx->pc = 0x4B15F8u;
            goto label_4b15f8;
        }
    }
    ctx->pc = 0x4B15F0u;
label_4b15f0:
    // 0x4b15f0: 0xc072aaa  jal         func_1CAAA8
label_4b15f4:
    if (ctx->pc == 0x4B15F4u) {
        ctx->pc = 0x4B15F4u;
            // 0x4b15f4: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->pc = 0x4B15F8u;
        goto label_4b15f8;
    }
    ctx->pc = 0x4B15F0u;
    SET_GPR_U32(ctx, 31, 0x4B15F8u);
    ctx->pc = 0x4B15F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B15F0u;
            // 0x4b15f4: 0x9244008c  lbu         $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B15F8u; }
        if (ctx->pc != 0x4B15F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B15F8u; }
        if (ctx->pc != 0x4B15F8u) { return; }
    }
    ctx->pc = 0x4B15F8u;
label_4b15f8:
    // 0x4b15f8: 0x8224010f  lb          $a0, 0x10F($s1)
    ctx->pc = 0x4b15f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 271)));
label_4b15fc:
    // 0x4b15fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b1600:
    // 0x4b1600: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_4b1604:
    if (ctx->pc == 0x4B1604u) {
        ctx->pc = 0x4B1604u;
            // 0x4b1604: 0x8e430e30  lw          $v1, 0xE30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
        ctx->pc = 0x4B1608u;
        goto label_4b1608;
    }
    ctx->pc = 0x4B1600u;
    {
        const bool branch_taken_0x4b1600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b1600) {
            ctx->pc = 0x4B1604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1600u;
            // 0x4b1604: 0x8e430e30  lw          $v1, 0xE30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B1618u;
            goto label_4b1618;
        }
    }
    ctx->pc = 0x4B1608u;
label_4b1608:
    // 0x4b1608: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4b1608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4b160c:
    // 0x4b160c: 0x1483004f  bne         $a0, $v1, . + 4 + (0x4F << 2)
label_4b1610:
    if (ctx->pc == 0x4B1610u) {
        ctx->pc = 0x4B1614u;
        goto label_4b1614;
    }
    ctx->pc = 0x4B160Cu;
    {
        const bool branch_taken_0x4b160c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b160c) {
            ctx->pc = 0x4B174Cu;
            goto label_4b174c;
        }
    }
    ctx->pc = 0x4B1614u;
label_4b1614:
    // 0x4b1614: 0x8e430e30  lw          $v1, 0xE30($s2)
    ctx->pc = 0x4b1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_4b1618:
    // 0x4b1618: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x4b1618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4b161c:
    // 0x4b161c: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_4b1620:
    if (ctx->pc == 0x4B1620u) {
        ctx->pc = 0x4B1624u;
        goto label_4b1624;
    }
    ctx->pc = 0x4B161Cu;
    {
        const bool branch_taken_0x4b161c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b161c) {
            ctx->pc = 0x4B174Cu;
            goto label_4b174c;
        }
    }
    ctx->pc = 0x4B1624u;
label_4b1624:
    // 0x4b1624: 0x8e440d6c  lw          $a0, 0xD6C($s2)
    ctx->pc = 0x4b1624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3436)));
label_4b1628:
    // 0x4b1628: 0xc6410e78  lwc1        $f1, 0xE78($s2)
    ctx->pc = 0x4b1628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b162c:
    // 0x4b162c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b162cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b1630:
    // 0x4b1630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b1630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b1634:
    // 0x4b1634: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4b1634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4b1638:
    // 0x4b1638: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b1638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b163c:
    // 0x4b163c: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x4b163cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_4b1640:
    // 0x4b1640: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4b1640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4b1644:
    // 0x4b1644: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4b1648:
    if (ctx->pc == 0x4B1648u) {
        ctx->pc = 0x4B1648u;
            // 0x4b1648: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4B164Cu;
        goto label_4b164c;
    }
    ctx->pc = 0x4B1644u;
    {
        const bool branch_taken_0x4b1644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B1648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1644u;
            // 0x4b1648: 0x2c850001  sltiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1644) {
            ctx->pc = 0x4B1650u;
            goto label_4b1650;
        }
    }
    ctx->pc = 0x4B164Cu;
label_4b164c:
    // 0x4b164c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b164cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1650:
    // 0x4b1650: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4b1650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4b1654:
    // 0x4b1654: 0x3c033ebd  lui         $v1, 0x3EBD
    ctx->pc = 0x4b1654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
label_4b1658:
    // 0x4b1658: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x4b1658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_4b165c:
    // 0x4b165c: 0xc6400e84  lwc1        $f0, 0xE84($s2)
    ctx->pc = 0x4b165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b1660:
    // 0x4b1660: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4b1660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b1664:
    // 0x4b1664: 0x0  nop
    ctx->pc = 0x4b1664u;
    // NOP
label_4b1668:
    // 0x4b1668: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4b1668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b166c:
    // 0x4b166c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_4b1670:
    if (ctx->pc == 0x4B1670u) {
        ctx->pc = 0x4B1670u;
            // 0x4b1670: 0x858026  xor         $s0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->pc = 0x4B1674u;
        goto label_4b1674;
    }
    ctx->pc = 0x4B166Cu;
    {
        const bool branch_taken_0x4b166c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B1670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B166Cu;
            // 0x4b1670: 0x858026  xor         $s0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b166c) {
            ctx->pc = 0x4B16B0u;
            goto label_4b16b0;
        }
    }
    ctx->pc = 0x4B1674u;
label_4b1674:
    // 0x4b1674: 0xc6540de4  lwc1        $f20, 0xDE4($s2)
    ctx->pc = 0x4b1674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b1678:
    // 0x4b1678: 0xc0754b4  jal         func_1D52D0
label_4b167c:
    if (ctx->pc == 0x4B167Cu) {
        ctx->pc = 0x4B167Cu;
            // 0x4b167c: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x4B1680u;
        goto label_4b1680;
    }
    ctx->pc = 0x4B1678u;
    SET_GPR_U32(ctx, 31, 0x4B1680u);
    ctx->pc = 0x4B167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B1678u;
            // 0x4b167c: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1680u; }
        if (ctx->pc != 0x4B1680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B1680u; }
        if (ctx->pc != 0x4B1680u) { return; }
    }
    ctx->pc = 0x4B1680u;
label_4b1680:
    // 0x4b1680: 0x3c033ebd  lui         $v1, 0x3EBD
    ctx->pc = 0x4b1680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
label_4b1684:
    // 0x4b1684: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x4b1684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_4b1688:
    // 0x4b1688: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4b1688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b168c:
    // 0x4b168c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b168cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b1690:
    // 0x4b1690: 0x0  nop
    ctx->pc = 0x4b1690u;
    // NOP
label_4b1694:
    // 0x4b1694: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4b1694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4b1698:
    // 0x4b1698: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4b1698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4b169c:
    // 0x4b169c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x4b169cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_4b16a0:
    // 0x4b16a0: 0x0  nop
    ctx->pc = 0x4b16a0u;
    // NOP
label_4b16a4:
    // 0x4b16a4: 0x0  nop
    ctx->pc = 0x4b16a4u;
    // NOP
label_4b16a8:
    // 0x4b16a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b16ac:
    if (ctx->pc == 0x4B16ACu) {
        ctx->pc = 0x4B16B0u;
        goto label_4b16b0;
    }
    ctx->pc = 0x4B16A8u;
    {
        const bool branch_taken_0x4b16a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b16a8) {
            ctx->pc = 0x4B16C0u;
            goto label_4b16c0;
        }
    }
    ctx->pc = 0x4B16B0u;
label_4b16b0:
    // 0x4b16b0: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x4b16b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b16b4:
    // 0x4b16b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4b16b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_4b16b8:
    // 0x4b16b8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4b16b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4b16bc:
    // 0x4b16bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x4b16bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_4b16c0:
    // 0x4b16c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4b16c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4b16c4:
    // 0x4b16c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b16c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b16c8:
    // 0x4b16c8: 0x0  nop
    ctx->pc = 0x4b16c8u;
    // NOP
label_4b16cc:
    // 0x4b16cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b16ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b16d0:
    // 0x4b16d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4b16d4:
    if (ctx->pc == 0x4B16D4u) {
        ctx->pc = 0x4B16D8u;
        goto label_4b16d8;
    }
    ctx->pc = 0x4B16D0u;
    {
        const bool branch_taken_0x4b16d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b16d0) {
            ctx->pc = 0x4B16E0u;
            goto label_4b16e0;
        }
    }
    ctx->pc = 0x4B16D8u;
label_4b16d8:
    // 0x4b16d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b16dc:
    if (ctx->pc == 0x4B16DCu) {
        ctx->pc = 0x4B16DCu;
            // 0x4b16dc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4B16E0u;
        goto label_4b16e0;
    }
    ctx->pc = 0x4B16D8u;
    {
        const bool branch_taken_0x4b16d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B16DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B16D8u;
            // 0x4b16dc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b16d8) {
            ctx->pc = 0x4B16F8u;
            goto label_4b16f8;
        }
    }
    ctx->pc = 0x4B16E0u;
label_4b16e0:
    // 0x4b16e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b16e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b16e4:
    // 0x4b16e4: 0x0  nop
    ctx->pc = 0x4b16e4u;
    // NOP
label_4b16e8:
    // 0x4b16e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b16e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b16ec:
    // 0x4b16ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4b16f0:
    if (ctx->pc == 0x4B16F0u) {
        ctx->pc = 0x4B16F4u;
        goto label_4b16f4;
    }
    ctx->pc = 0x4B16ECu;
    {
        const bool branch_taken_0x4b16ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b16ec) {
            ctx->pc = 0x4B16F8u;
            goto label_4b16f8;
        }
    }
    ctx->pc = 0x4B16F4u;
label_4b16f4:
    // 0x4b16f4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4b16f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_4b16f8:
    // 0x4b16f8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4b16fc:
    // 0x4b16fc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x4b16fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4b1700:
    // 0x4b1700: 0x246357f8  addiu       $v1, $v1, 0x57F8
    ctx->pc = 0x4b1700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22520));
label_4b1704:
    // 0x4b1704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b1704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b1708:
    // 0x4b1708: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b1708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b170c:
    // 0x4b170c: 0xa2230111  sb          $v1, 0x111($s1)
    ctx->pc = 0x4b170cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 273), (uint8_t)GPR_U32(ctx, 3));
label_4b1710:
    // 0x4b1710: 0x82240114  lb          $a0, 0x114($s1)
    ctx->pc = 0x4b1710u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 276)));
label_4b1714:
    // 0x4b1714: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x4b1714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_4b1718:
    // 0x4b1718: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4b1718u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4b171c:
    // 0x4b171c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b171cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b1720:
    // 0x4b1720: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4b1720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4b1724:
    // 0x4b1724: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x4b1724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_4b1728:
    // 0x4b1728: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x4b1728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4b172c:
    // 0x4b172c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b1730:
    // 0x4b1730: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4b1730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4b1734:
    // 0x4b1734: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x4b1734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_4b1738:
    // 0x4b1738: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x4b1738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4b173c:
    // 0x4b173c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4b173cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_4b1740:
    // 0x4b1740: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x4b1740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_4b1744:
    // 0x4b1744: 0xe6210050  swc1        $f1, 0x50($s1)
    ctx->pc = 0x4b1744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_4b1748:
    // 0x4b1748: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x4b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_4b174c:
    // 0x4b174c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4b174cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4b1750:
    // 0x4b1750: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b1750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b1754:
    // 0x4b1754: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4b1754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b1758:
    // 0x4b1758: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4b1758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b175c:
    // 0x4b175c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4b175cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b1760:
    // 0x4b1760: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b1760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b1764:
    // 0x4b1764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b1764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b1768:
    // 0x4b1768: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b1768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b176c:
    // 0x4b176c: 0x3e00008  jr          $ra
label_4b1770:
    if (ctx->pc == 0x4B1770u) {
        ctx->pc = 0x4B1770u;
            // 0x4b1770: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B1774u;
        goto label_4b1774;
    }
    ctx->pc = 0x4B176Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B176Cu;
            // 0x4b1770: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B1774u;
label_4b1774:
    // 0x4b1774: 0x0  nop
    ctx->pc = 0x4b1774u;
    // NOP
label_4b1778:
    // 0x4b1778: 0x0  nop
    ctx->pc = 0x4b1778u;
    // NOP
label_4b177c:
    // 0x4b177c: 0x0  nop
    ctx->pc = 0x4b177cu;
    // NOP
}
