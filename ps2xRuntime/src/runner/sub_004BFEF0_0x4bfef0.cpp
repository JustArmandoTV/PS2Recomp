#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BFEF0
// Address: 0x4bfef0 - 0x4c0d30
void sub_004BFEF0_0x4bfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFEF0_0x4bfef0");
#endif

    switch (ctx->pc) {
        case 0x4bfef0u: goto label_4bfef0;
        case 0x4bfef4u: goto label_4bfef4;
        case 0x4bfef8u: goto label_4bfef8;
        case 0x4bfefcu: goto label_4bfefc;
        case 0x4bff00u: goto label_4bff00;
        case 0x4bff04u: goto label_4bff04;
        case 0x4bff08u: goto label_4bff08;
        case 0x4bff0cu: goto label_4bff0c;
        case 0x4bff10u: goto label_4bff10;
        case 0x4bff14u: goto label_4bff14;
        case 0x4bff18u: goto label_4bff18;
        case 0x4bff1cu: goto label_4bff1c;
        case 0x4bff20u: goto label_4bff20;
        case 0x4bff24u: goto label_4bff24;
        case 0x4bff28u: goto label_4bff28;
        case 0x4bff2cu: goto label_4bff2c;
        case 0x4bff30u: goto label_4bff30;
        case 0x4bff34u: goto label_4bff34;
        case 0x4bff38u: goto label_4bff38;
        case 0x4bff3cu: goto label_4bff3c;
        case 0x4bff40u: goto label_4bff40;
        case 0x4bff44u: goto label_4bff44;
        case 0x4bff48u: goto label_4bff48;
        case 0x4bff4cu: goto label_4bff4c;
        case 0x4bff50u: goto label_4bff50;
        case 0x4bff54u: goto label_4bff54;
        case 0x4bff58u: goto label_4bff58;
        case 0x4bff5cu: goto label_4bff5c;
        case 0x4bff60u: goto label_4bff60;
        case 0x4bff64u: goto label_4bff64;
        case 0x4bff68u: goto label_4bff68;
        case 0x4bff6cu: goto label_4bff6c;
        case 0x4bff70u: goto label_4bff70;
        case 0x4bff74u: goto label_4bff74;
        case 0x4bff78u: goto label_4bff78;
        case 0x4bff7cu: goto label_4bff7c;
        case 0x4bff80u: goto label_4bff80;
        case 0x4bff84u: goto label_4bff84;
        case 0x4bff88u: goto label_4bff88;
        case 0x4bff8cu: goto label_4bff8c;
        case 0x4bff90u: goto label_4bff90;
        case 0x4bff94u: goto label_4bff94;
        case 0x4bff98u: goto label_4bff98;
        case 0x4bff9cu: goto label_4bff9c;
        case 0x4bffa0u: goto label_4bffa0;
        case 0x4bffa4u: goto label_4bffa4;
        case 0x4bffa8u: goto label_4bffa8;
        case 0x4bffacu: goto label_4bffac;
        case 0x4bffb0u: goto label_4bffb0;
        case 0x4bffb4u: goto label_4bffb4;
        case 0x4bffb8u: goto label_4bffb8;
        case 0x4bffbcu: goto label_4bffbc;
        case 0x4bffc0u: goto label_4bffc0;
        case 0x4bffc4u: goto label_4bffc4;
        case 0x4bffc8u: goto label_4bffc8;
        case 0x4bffccu: goto label_4bffcc;
        case 0x4bffd0u: goto label_4bffd0;
        case 0x4bffd4u: goto label_4bffd4;
        case 0x4bffd8u: goto label_4bffd8;
        case 0x4bffdcu: goto label_4bffdc;
        case 0x4bffe0u: goto label_4bffe0;
        case 0x4bffe4u: goto label_4bffe4;
        case 0x4bffe8u: goto label_4bffe8;
        case 0x4bffecu: goto label_4bffec;
        case 0x4bfff0u: goto label_4bfff0;
        case 0x4bfff4u: goto label_4bfff4;
        case 0x4bfff8u: goto label_4bfff8;
        case 0x4bfffcu: goto label_4bfffc;
        case 0x4c0000u: goto label_4c0000;
        case 0x4c0004u: goto label_4c0004;
        case 0x4c0008u: goto label_4c0008;
        case 0x4c000cu: goto label_4c000c;
        case 0x4c0010u: goto label_4c0010;
        case 0x4c0014u: goto label_4c0014;
        case 0x4c0018u: goto label_4c0018;
        case 0x4c001cu: goto label_4c001c;
        case 0x4c0020u: goto label_4c0020;
        case 0x4c0024u: goto label_4c0024;
        case 0x4c0028u: goto label_4c0028;
        case 0x4c002cu: goto label_4c002c;
        case 0x4c0030u: goto label_4c0030;
        case 0x4c0034u: goto label_4c0034;
        case 0x4c0038u: goto label_4c0038;
        case 0x4c003cu: goto label_4c003c;
        case 0x4c0040u: goto label_4c0040;
        case 0x4c0044u: goto label_4c0044;
        case 0x4c0048u: goto label_4c0048;
        case 0x4c004cu: goto label_4c004c;
        case 0x4c0050u: goto label_4c0050;
        case 0x4c0054u: goto label_4c0054;
        case 0x4c0058u: goto label_4c0058;
        case 0x4c005cu: goto label_4c005c;
        case 0x4c0060u: goto label_4c0060;
        case 0x4c0064u: goto label_4c0064;
        case 0x4c0068u: goto label_4c0068;
        case 0x4c006cu: goto label_4c006c;
        case 0x4c0070u: goto label_4c0070;
        case 0x4c0074u: goto label_4c0074;
        case 0x4c0078u: goto label_4c0078;
        case 0x4c007cu: goto label_4c007c;
        case 0x4c0080u: goto label_4c0080;
        case 0x4c0084u: goto label_4c0084;
        case 0x4c0088u: goto label_4c0088;
        case 0x4c008cu: goto label_4c008c;
        case 0x4c0090u: goto label_4c0090;
        case 0x4c0094u: goto label_4c0094;
        case 0x4c0098u: goto label_4c0098;
        case 0x4c009cu: goto label_4c009c;
        case 0x4c00a0u: goto label_4c00a0;
        case 0x4c00a4u: goto label_4c00a4;
        case 0x4c00a8u: goto label_4c00a8;
        case 0x4c00acu: goto label_4c00ac;
        case 0x4c00b0u: goto label_4c00b0;
        case 0x4c00b4u: goto label_4c00b4;
        case 0x4c00b8u: goto label_4c00b8;
        case 0x4c00bcu: goto label_4c00bc;
        case 0x4c00c0u: goto label_4c00c0;
        case 0x4c00c4u: goto label_4c00c4;
        case 0x4c00c8u: goto label_4c00c8;
        case 0x4c00ccu: goto label_4c00cc;
        case 0x4c00d0u: goto label_4c00d0;
        case 0x4c00d4u: goto label_4c00d4;
        case 0x4c00d8u: goto label_4c00d8;
        case 0x4c00dcu: goto label_4c00dc;
        case 0x4c00e0u: goto label_4c00e0;
        case 0x4c00e4u: goto label_4c00e4;
        case 0x4c00e8u: goto label_4c00e8;
        case 0x4c00ecu: goto label_4c00ec;
        case 0x4c00f0u: goto label_4c00f0;
        case 0x4c00f4u: goto label_4c00f4;
        case 0x4c00f8u: goto label_4c00f8;
        case 0x4c00fcu: goto label_4c00fc;
        case 0x4c0100u: goto label_4c0100;
        case 0x4c0104u: goto label_4c0104;
        case 0x4c0108u: goto label_4c0108;
        case 0x4c010cu: goto label_4c010c;
        case 0x4c0110u: goto label_4c0110;
        case 0x4c0114u: goto label_4c0114;
        case 0x4c0118u: goto label_4c0118;
        case 0x4c011cu: goto label_4c011c;
        case 0x4c0120u: goto label_4c0120;
        case 0x4c0124u: goto label_4c0124;
        case 0x4c0128u: goto label_4c0128;
        case 0x4c012cu: goto label_4c012c;
        case 0x4c0130u: goto label_4c0130;
        case 0x4c0134u: goto label_4c0134;
        case 0x4c0138u: goto label_4c0138;
        case 0x4c013cu: goto label_4c013c;
        case 0x4c0140u: goto label_4c0140;
        case 0x4c0144u: goto label_4c0144;
        case 0x4c0148u: goto label_4c0148;
        case 0x4c014cu: goto label_4c014c;
        case 0x4c0150u: goto label_4c0150;
        case 0x4c0154u: goto label_4c0154;
        case 0x4c0158u: goto label_4c0158;
        case 0x4c015cu: goto label_4c015c;
        case 0x4c0160u: goto label_4c0160;
        case 0x4c0164u: goto label_4c0164;
        case 0x4c0168u: goto label_4c0168;
        case 0x4c016cu: goto label_4c016c;
        case 0x4c0170u: goto label_4c0170;
        case 0x4c0174u: goto label_4c0174;
        case 0x4c0178u: goto label_4c0178;
        case 0x4c017cu: goto label_4c017c;
        case 0x4c0180u: goto label_4c0180;
        case 0x4c0184u: goto label_4c0184;
        case 0x4c0188u: goto label_4c0188;
        case 0x4c018cu: goto label_4c018c;
        case 0x4c0190u: goto label_4c0190;
        case 0x4c0194u: goto label_4c0194;
        case 0x4c0198u: goto label_4c0198;
        case 0x4c019cu: goto label_4c019c;
        case 0x4c01a0u: goto label_4c01a0;
        case 0x4c01a4u: goto label_4c01a4;
        case 0x4c01a8u: goto label_4c01a8;
        case 0x4c01acu: goto label_4c01ac;
        case 0x4c01b0u: goto label_4c01b0;
        case 0x4c01b4u: goto label_4c01b4;
        case 0x4c01b8u: goto label_4c01b8;
        case 0x4c01bcu: goto label_4c01bc;
        case 0x4c01c0u: goto label_4c01c0;
        case 0x4c01c4u: goto label_4c01c4;
        case 0x4c01c8u: goto label_4c01c8;
        case 0x4c01ccu: goto label_4c01cc;
        case 0x4c01d0u: goto label_4c01d0;
        case 0x4c01d4u: goto label_4c01d4;
        case 0x4c01d8u: goto label_4c01d8;
        case 0x4c01dcu: goto label_4c01dc;
        case 0x4c01e0u: goto label_4c01e0;
        case 0x4c01e4u: goto label_4c01e4;
        case 0x4c01e8u: goto label_4c01e8;
        case 0x4c01ecu: goto label_4c01ec;
        case 0x4c01f0u: goto label_4c01f0;
        case 0x4c01f4u: goto label_4c01f4;
        case 0x4c01f8u: goto label_4c01f8;
        case 0x4c01fcu: goto label_4c01fc;
        case 0x4c0200u: goto label_4c0200;
        case 0x4c0204u: goto label_4c0204;
        case 0x4c0208u: goto label_4c0208;
        case 0x4c020cu: goto label_4c020c;
        case 0x4c0210u: goto label_4c0210;
        case 0x4c0214u: goto label_4c0214;
        case 0x4c0218u: goto label_4c0218;
        case 0x4c021cu: goto label_4c021c;
        case 0x4c0220u: goto label_4c0220;
        case 0x4c0224u: goto label_4c0224;
        case 0x4c0228u: goto label_4c0228;
        case 0x4c022cu: goto label_4c022c;
        case 0x4c0230u: goto label_4c0230;
        case 0x4c0234u: goto label_4c0234;
        case 0x4c0238u: goto label_4c0238;
        case 0x4c023cu: goto label_4c023c;
        case 0x4c0240u: goto label_4c0240;
        case 0x4c0244u: goto label_4c0244;
        case 0x4c0248u: goto label_4c0248;
        case 0x4c024cu: goto label_4c024c;
        case 0x4c0250u: goto label_4c0250;
        case 0x4c0254u: goto label_4c0254;
        case 0x4c0258u: goto label_4c0258;
        case 0x4c025cu: goto label_4c025c;
        case 0x4c0260u: goto label_4c0260;
        case 0x4c0264u: goto label_4c0264;
        case 0x4c0268u: goto label_4c0268;
        case 0x4c026cu: goto label_4c026c;
        case 0x4c0270u: goto label_4c0270;
        case 0x4c0274u: goto label_4c0274;
        case 0x4c0278u: goto label_4c0278;
        case 0x4c027cu: goto label_4c027c;
        case 0x4c0280u: goto label_4c0280;
        case 0x4c0284u: goto label_4c0284;
        case 0x4c0288u: goto label_4c0288;
        case 0x4c028cu: goto label_4c028c;
        case 0x4c0290u: goto label_4c0290;
        case 0x4c0294u: goto label_4c0294;
        case 0x4c0298u: goto label_4c0298;
        case 0x4c029cu: goto label_4c029c;
        case 0x4c02a0u: goto label_4c02a0;
        case 0x4c02a4u: goto label_4c02a4;
        case 0x4c02a8u: goto label_4c02a8;
        case 0x4c02acu: goto label_4c02ac;
        case 0x4c02b0u: goto label_4c02b0;
        case 0x4c02b4u: goto label_4c02b4;
        case 0x4c02b8u: goto label_4c02b8;
        case 0x4c02bcu: goto label_4c02bc;
        case 0x4c02c0u: goto label_4c02c0;
        case 0x4c02c4u: goto label_4c02c4;
        case 0x4c02c8u: goto label_4c02c8;
        case 0x4c02ccu: goto label_4c02cc;
        case 0x4c02d0u: goto label_4c02d0;
        case 0x4c02d4u: goto label_4c02d4;
        case 0x4c02d8u: goto label_4c02d8;
        case 0x4c02dcu: goto label_4c02dc;
        case 0x4c02e0u: goto label_4c02e0;
        case 0x4c02e4u: goto label_4c02e4;
        case 0x4c02e8u: goto label_4c02e8;
        case 0x4c02ecu: goto label_4c02ec;
        case 0x4c02f0u: goto label_4c02f0;
        case 0x4c02f4u: goto label_4c02f4;
        case 0x4c02f8u: goto label_4c02f8;
        case 0x4c02fcu: goto label_4c02fc;
        case 0x4c0300u: goto label_4c0300;
        case 0x4c0304u: goto label_4c0304;
        case 0x4c0308u: goto label_4c0308;
        case 0x4c030cu: goto label_4c030c;
        case 0x4c0310u: goto label_4c0310;
        case 0x4c0314u: goto label_4c0314;
        case 0x4c0318u: goto label_4c0318;
        case 0x4c031cu: goto label_4c031c;
        case 0x4c0320u: goto label_4c0320;
        case 0x4c0324u: goto label_4c0324;
        case 0x4c0328u: goto label_4c0328;
        case 0x4c032cu: goto label_4c032c;
        case 0x4c0330u: goto label_4c0330;
        case 0x4c0334u: goto label_4c0334;
        case 0x4c0338u: goto label_4c0338;
        case 0x4c033cu: goto label_4c033c;
        case 0x4c0340u: goto label_4c0340;
        case 0x4c0344u: goto label_4c0344;
        case 0x4c0348u: goto label_4c0348;
        case 0x4c034cu: goto label_4c034c;
        case 0x4c0350u: goto label_4c0350;
        case 0x4c0354u: goto label_4c0354;
        case 0x4c0358u: goto label_4c0358;
        case 0x4c035cu: goto label_4c035c;
        case 0x4c0360u: goto label_4c0360;
        case 0x4c0364u: goto label_4c0364;
        case 0x4c0368u: goto label_4c0368;
        case 0x4c036cu: goto label_4c036c;
        case 0x4c0370u: goto label_4c0370;
        case 0x4c0374u: goto label_4c0374;
        case 0x4c0378u: goto label_4c0378;
        case 0x4c037cu: goto label_4c037c;
        case 0x4c0380u: goto label_4c0380;
        case 0x4c0384u: goto label_4c0384;
        case 0x4c0388u: goto label_4c0388;
        case 0x4c038cu: goto label_4c038c;
        case 0x4c0390u: goto label_4c0390;
        case 0x4c0394u: goto label_4c0394;
        case 0x4c0398u: goto label_4c0398;
        case 0x4c039cu: goto label_4c039c;
        case 0x4c03a0u: goto label_4c03a0;
        case 0x4c03a4u: goto label_4c03a4;
        case 0x4c03a8u: goto label_4c03a8;
        case 0x4c03acu: goto label_4c03ac;
        case 0x4c03b0u: goto label_4c03b0;
        case 0x4c03b4u: goto label_4c03b4;
        case 0x4c03b8u: goto label_4c03b8;
        case 0x4c03bcu: goto label_4c03bc;
        case 0x4c03c0u: goto label_4c03c0;
        case 0x4c03c4u: goto label_4c03c4;
        case 0x4c03c8u: goto label_4c03c8;
        case 0x4c03ccu: goto label_4c03cc;
        case 0x4c03d0u: goto label_4c03d0;
        case 0x4c03d4u: goto label_4c03d4;
        case 0x4c03d8u: goto label_4c03d8;
        case 0x4c03dcu: goto label_4c03dc;
        case 0x4c03e0u: goto label_4c03e0;
        case 0x4c03e4u: goto label_4c03e4;
        case 0x4c03e8u: goto label_4c03e8;
        case 0x4c03ecu: goto label_4c03ec;
        case 0x4c03f0u: goto label_4c03f0;
        case 0x4c03f4u: goto label_4c03f4;
        case 0x4c03f8u: goto label_4c03f8;
        case 0x4c03fcu: goto label_4c03fc;
        case 0x4c0400u: goto label_4c0400;
        case 0x4c0404u: goto label_4c0404;
        case 0x4c0408u: goto label_4c0408;
        case 0x4c040cu: goto label_4c040c;
        case 0x4c0410u: goto label_4c0410;
        case 0x4c0414u: goto label_4c0414;
        case 0x4c0418u: goto label_4c0418;
        case 0x4c041cu: goto label_4c041c;
        case 0x4c0420u: goto label_4c0420;
        case 0x4c0424u: goto label_4c0424;
        case 0x4c0428u: goto label_4c0428;
        case 0x4c042cu: goto label_4c042c;
        case 0x4c0430u: goto label_4c0430;
        case 0x4c0434u: goto label_4c0434;
        case 0x4c0438u: goto label_4c0438;
        case 0x4c043cu: goto label_4c043c;
        case 0x4c0440u: goto label_4c0440;
        case 0x4c0444u: goto label_4c0444;
        case 0x4c0448u: goto label_4c0448;
        case 0x4c044cu: goto label_4c044c;
        case 0x4c0450u: goto label_4c0450;
        case 0x4c0454u: goto label_4c0454;
        case 0x4c0458u: goto label_4c0458;
        case 0x4c045cu: goto label_4c045c;
        case 0x4c0460u: goto label_4c0460;
        case 0x4c0464u: goto label_4c0464;
        case 0x4c0468u: goto label_4c0468;
        case 0x4c046cu: goto label_4c046c;
        case 0x4c0470u: goto label_4c0470;
        case 0x4c0474u: goto label_4c0474;
        case 0x4c0478u: goto label_4c0478;
        case 0x4c047cu: goto label_4c047c;
        case 0x4c0480u: goto label_4c0480;
        case 0x4c0484u: goto label_4c0484;
        case 0x4c0488u: goto label_4c0488;
        case 0x4c048cu: goto label_4c048c;
        case 0x4c0490u: goto label_4c0490;
        case 0x4c0494u: goto label_4c0494;
        case 0x4c0498u: goto label_4c0498;
        case 0x4c049cu: goto label_4c049c;
        case 0x4c04a0u: goto label_4c04a0;
        case 0x4c04a4u: goto label_4c04a4;
        case 0x4c04a8u: goto label_4c04a8;
        case 0x4c04acu: goto label_4c04ac;
        case 0x4c04b0u: goto label_4c04b0;
        case 0x4c04b4u: goto label_4c04b4;
        case 0x4c04b8u: goto label_4c04b8;
        case 0x4c04bcu: goto label_4c04bc;
        case 0x4c04c0u: goto label_4c04c0;
        case 0x4c04c4u: goto label_4c04c4;
        case 0x4c04c8u: goto label_4c04c8;
        case 0x4c04ccu: goto label_4c04cc;
        case 0x4c04d0u: goto label_4c04d0;
        case 0x4c04d4u: goto label_4c04d4;
        case 0x4c04d8u: goto label_4c04d8;
        case 0x4c04dcu: goto label_4c04dc;
        case 0x4c04e0u: goto label_4c04e0;
        case 0x4c04e4u: goto label_4c04e4;
        case 0x4c04e8u: goto label_4c04e8;
        case 0x4c04ecu: goto label_4c04ec;
        case 0x4c04f0u: goto label_4c04f0;
        case 0x4c04f4u: goto label_4c04f4;
        case 0x4c04f8u: goto label_4c04f8;
        case 0x4c04fcu: goto label_4c04fc;
        case 0x4c0500u: goto label_4c0500;
        case 0x4c0504u: goto label_4c0504;
        case 0x4c0508u: goto label_4c0508;
        case 0x4c050cu: goto label_4c050c;
        case 0x4c0510u: goto label_4c0510;
        case 0x4c0514u: goto label_4c0514;
        case 0x4c0518u: goto label_4c0518;
        case 0x4c051cu: goto label_4c051c;
        case 0x4c0520u: goto label_4c0520;
        case 0x4c0524u: goto label_4c0524;
        case 0x4c0528u: goto label_4c0528;
        case 0x4c052cu: goto label_4c052c;
        case 0x4c0530u: goto label_4c0530;
        case 0x4c0534u: goto label_4c0534;
        case 0x4c0538u: goto label_4c0538;
        case 0x4c053cu: goto label_4c053c;
        case 0x4c0540u: goto label_4c0540;
        case 0x4c0544u: goto label_4c0544;
        case 0x4c0548u: goto label_4c0548;
        case 0x4c054cu: goto label_4c054c;
        case 0x4c0550u: goto label_4c0550;
        case 0x4c0554u: goto label_4c0554;
        case 0x4c0558u: goto label_4c0558;
        case 0x4c055cu: goto label_4c055c;
        case 0x4c0560u: goto label_4c0560;
        case 0x4c0564u: goto label_4c0564;
        case 0x4c0568u: goto label_4c0568;
        case 0x4c056cu: goto label_4c056c;
        case 0x4c0570u: goto label_4c0570;
        case 0x4c0574u: goto label_4c0574;
        case 0x4c0578u: goto label_4c0578;
        case 0x4c057cu: goto label_4c057c;
        case 0x4c0580u: goto label_4c0580;
        case 0x4c0584u: goto label_4c0584;
        case 0x4c0588u: goto label_4c0588;
        case 0x4c058cu: goto label_4c058c;
        case 0x4c0590u: goto label_4c0590;
        case 0x4c0594u: goto label_4c0594;
        case 0x4c0598u: goto label_4c0598;
        case 0x4c059cu: goto label_4c059c;
        case 0x4c05a0u: goto label_4c05a0;
        case 0x4c05a4u: goto label_4c05a4;
        case 0x4c05a8u: goto label_4c05a8;
        case 0x4c05acu: goto label_4c05ac;
        case 0x4c05b0u: goto label_4c05b0;
        case 0x4c05b4u: goto label_4c05b4;
        case 0x4c05b8u: goto label_4c05b8;
        case 0x4c05bcu: goto label_4c05bc;
        case 0x4c05c0u: goto label_4c05c0;
        case 0x4c05c4u: goto label_4c05c4;
        case 0x4c05c8u: goto label_4c05c8;
        case 0x4c05ccu: goto label_4c05cc;
        case 0x4c05d0u: goto label_4c05d0;
        case 0x4c05d4u: goto label_4c05d4;
        case 0x4c05d8u: goto label_4c05d8;
        case 0x4c05dcu: goto label_4c05dc;
        case 0x4c05e0u: goto label_4c05e0;
        case 0x4c05e4u: goto label_4c05e4;
        case 0x4c05e8u: goto label_4c05e8;
        case 0x4c05ecu: goto label_4c05ec;
        case 0x4c05f0u: goto label_4c05f0;
        case 0x4c05f4u: goto label_4c05f4;
        case 0x4c05f8u: goto label_4c05f8;
        case 0x4c05fcu: goto label_4c05fc;
        case 0x4c0600u: goto label_4c0600;
        case 0x4c0604u: goto label_4c0604;
        case 0x4c0608u: goto label_4c0608;
        case 0x4c060cu: goto label_4c060c;
        case 0x4c0610u: goto label_4c0610;
        case 0x4c0614u: goto label_4c0614;
        case 0x4c0618u: goto label_4c0618;
        case 0x4c061cu: goto label_4c061c;
        case 0x4c0620u: goto label_4c0620;
        case 0x4c0624u: goto label_4c0624;
        case 0x4c0628u: goto label_4c0628;
        case 0x4c062cu: goto label_4c062c;
        case 0x4c0630u: goto label_4c0630;
        case 0x4c0634u: goto label_4c0634;
        case 0x4c0638u: goto label_4c0638;
        case 0x4c063cu: goto label_4c063c;
        case 0x4c0640u: goto label_4c0640;
        case 0x4c0644u: goto label_4c0644;
        case 0x4c0648u: goto label_4c0648;
        case 0x4c064cu: goto label_4c064c;
        case 0x4c0650u: goto label_4c0650;
        case 0x4c0654u: goto label_4c0654;
        case 0x4c0658u: goto label_4c0658;
        case 0x4c065cu: goto label_4c065c;
        case 0x4c0660u: goto label_4c0660;
        case 0x4c0664u: goto label_4c0664;
        case 0x4c0668u: goto label_4c0668;
        case 0x4c066cu: goto label_4c066c;
        case 0x4c0670u: goto label_4c0670;
        case 0x4c0674u: goto label_4c0674;
        case 0x4c0678u: goto label_4c0678;
        case 0x4c067cu: goto label_4c067c;
        case 0x4c0680u: goto label_4c0680;
        case 0x4c0684u: goto label_4c0684;
        case 0x4c0688u: goto label_4c0688;
        case 0x4c068cu: goto label_4c068c;
        case 0x4c0690u: goto label_4c0690;
        case 0x4c0694u: goto label_4c0694;
        case 0x4c0698u: goto label_4c0698;
        case 0x4c069cu: goto label_4c069c;
        case 0x4c06a0u: goto label_4c06a0;
        case 0x4c06a4u: goto label_4c06a4;
        case 0x4c06a8u: goto label_4c06a8;
        case 0x4c06acu: goto label_4c06ac;
        case 0x4c06b0u: goto label_4c06b0;
        case 0x4c06b4u: goto label_4c06b4;
        case 0x4c06b8u: goto label_4c06b8;
        case 0x4c06bcu: goto label_4c06bc;
        case 0x4c06c0u: goto label_4c06c0;
        case 0x4c06c4u: goto label_4c06c4;
        case 0x4c06c8u: goto label_4c06c8;
        case 0x4c06ccu: goto label_4c06cc;
        case 0x4c06d0u: goto label_4c06d0;
        case 0x4c06d4u: goto label_4c06d4;
        case 0x4c06d8u: goto label_4c06d8;
        case 0x4c06dcu: goto label_4c06dc;
        case 0x4c06e0u: goto label_4c06e0;
        case 0x4c06e4u: goto label_4c06e4;
        case 0x4c06e8u: goto label_4c06e8;
        case 0x4c06ecu: goto label_4c06ec;
        case 0x4c06f0u: goto label_4c06f0;
        case 0x4c06f4u: goto label_4c06f4;
        case 0x4c06f8u: goto label_4c06f8;
        case 0x4c06fcu: goto label_4c06fc;
        case 0x4c0700u: goto label_4c0700;
        case 0x4c0704u: goto label_4c0704;
        case 0x4c0708u: goto label_4c0708;
        case 0x4c070cu: goto label_4c070c;
        case 0x4c0710u: goto label_4c0710;
        case 0x4c0714u: goto label_4c0714;
        case 0x4c0718u: goto label_4c0718;
        case 0x4c071cu: goto label_4c071c;
        case 0x4c0720u: goto label_4c0720;
        case 0x4c0724u: goto label_4c0724;
        case 0x4c0728u: goto label_4c0728;
        case 0x4c072cu: goto label_4c072c;
        case 0x4c0730u: goto label_4c0730;
        case 0x4c0734u: goto label_4c0734;
        case 0x4c0738u: goto label_4c0738;
        case 0x4c073cu: goto label_4c073c;
        case 0x4c0740u: goto label_4c0740;
        case 0x4c0744u: goto label_4c0744;
        case 0x4c0748u: goto label_4c0748;
        case 0x4c074cu: goto label_4c074c;
        case 0x4c0750u: goto label_4c0750;
        case 0x4c0754u: goto label_4c0754;
        case 0x4c0758u: goto label_4c0758;
        case 0x4c075cu: goto label_4c075c;
        case 0x4c0760u: goto label_4c0760;
        case 0x4c0764u: goto label_4c0764;
        case 0x4c0768u: goto label_4c0768;
        case 0x4c076cu: goto label_4c076c;
        case 0x4c0770u: goto label_4c0770;
        case 0x4c0774u: goto label_4c0774;
        case 0x4c0778u: goto label_4c0778;
        case 0x4c077cu: goto label_4c077c;
        case 0x4c0780u: goto label_4c0780;
        case 0x4c0784u: goto label_4c0784;
        case 0x4c0788u: goto label_4c0788;
        case 0x4c078cu: goto label_4c078c;
        case 0x4c0790u: goto label_4c0790;
        case 0x4c0794u: goto label_4c0794;
        case 0x4c0798u: goto label_4c0798;
        case 0x4c079cu: goto label_4c079c;
        case 0x4c07a0u: goto label_4c07a0;
        case 0x4c07a4u: goto label_4c07a4;
        case 0x4c07a8u: goto label_4c07a8;
        case 0x4c07acu: goto label_4c07ac;
        case 0x4c07b0u: goto label_4c07b0;
        case 0x4c07b4u: goto label_4c07b4;
        case 0x4c07b8u: goto label_4c07b8;
        case 0x4c07bcu: goto label_4c07bc;
        case 0x4c07c0u: goto label_4c07c0;
        case 0x4c07c4u: goto label_4c07c4;
        case 0x4c07c8u: goto label_4c07c8;
        case 0x4c07ccu: goto label_4c07cc;
        case 0x4c07d0u: goto label_4c07d0;
        case 0x4c07d4u: goto label_4c07d4;
        case 0x4c07d8u: goto label_4c07d8;
        case 0x4c07dcu: goto label_4c07dc;
        case 0x4c07e0u: goto label_4c07e0;
        case 0x4c07e4u: goto label_4c07e4;
        case 0x4c07e8u: goto label_4c07e8;
        case 0x4c07ecu: goto label_4c07ec;
        case 0x4c07f0u: goto label_4c07f0;
        case 0x4c07f4u: goto label_4c07f4;
        case 0x4c07f8u: goto label_4c07f8;
        case 0x4c07fcu: goto label_4c07fc;
        case 0x4c0800u: goto label_4c0800;
        case 0x4c0804u: goto label_4c0804;
        case 0x4c0808u: goto label_4c0808;
        case 0x4c080cu: goto label_4c080c;
        case 0x4c0810u: goto label_4c0810;
        case 0x4c0814u: goto label_4c0814;
        case 0x4c0818u: goto label_4c0818;
        case 0x4c081cu: goto label_4c081c;
        case 0x4c0820u: goto label_4c0820;
        case 0x4c0824u: goto label_4c0824;
        case 0x4c0828u: goto label_4c0828;
        case 0x4c082cu: goto label_4c082c;
        case 0x4c0830u: goto label_4c0830;
        case 0x4c0834u: goto label_4c0834;
        case 0x4c0838u: goto label_4c0838;
        case 0x4c083cu: goto label_4c083c;
        case 0x4c0840u: goto label_4c0840;
        case 0x4c0844u: goto label_4c0844;
        case 0x4c0848u: goto label_4c0848;
        case 0x4c084cu: goto label_4c084c;
        case 0x4c0850u: goto label_4c0850;
        case 0x4c0854u: goto label_4c0854;
        case 0x4c0858u: goto label_4c0858;
        case 0x4c085cu: goto label_4c085c;
        case 0x4c0860u: goto label_4c0860;
        case 0x4c0864u: goto label_4c0864;
        case 0x4c0868u: goto label_4c0868;
        case 0x4c086cu: goto label_4c086c;
        case 0x4c0870u: goto label_4c0870;
        case 0x4c0874u: goto label_4c0874;
        case 0x4c0878u: goto label_4c0878;
        case 0x4c087cu: goto label_4c087c;
        case 0x4c0880u: goto label_4c0880;
        case 0x4c0884u: goto label_4c0884;
        case 0x4c0888u: goto label_4c0888;
        case 0x4c088cu: goto label_4c088c;
        case 0x4c0890u: goto label_4c0890;
        case 0x4c0894u: goto label_4c0894;
        case 0x4c0898u: goto label_4c0898;
        case 0x4c089cu: goto label_4c089c;
        case 0x4c08a0u: goto label_4c08a0;
        case 0x4c08a4u: goto label_4c08a4;
        case 0x4c08a8u: goto label_4c08a8;
        case 0x4c08acu: goto label_4c08ac;
        case 0x4c08b0u: goto label_4c08b0;
        case 0x4c08b4u: goto label_4c08b4;
        case 0x4c08b8u: goto label_4c08b8;
        case 0x4c08bcu: goto label_4c08bc;
        case 0x4c08c0u: goto label_4c08c0;
        case 0x4c08c4u: goto label_4c08c4;
        case 0x4c08c8u: goto label_4c08c8;
        case 0x4c08ccu: goto label_4c08cc;
        case 0x4c08d0u: goto label_4c08d0;
        case 0x4c08d4u: goto label_4c08d4;
        case 0x4c08d8u: goto label_4c08d8;
        case 0x4c08dcu: goto label_4c08dc;
        case 0x4c08e0u: goto label_4c08e0;
        case 0x4c08e4u: goto label_4c08e4;
        case 0x4c08e8u: goto label_4c08e8;
        case 0x4c08ecu: goto label_4c08ec;
        case 0x4c08f0u: goto label_4c08f0;
        case 0x4c08f4u: goto label_4c08f4;
        case 0x4c08f8u: goto label_4c08f8;
        case 0x4c08fcu: goto label_4c08fc;
        case 0x4c0900u: goto label_4c0900;
        case 0x4c0904u: goto label_4c0904;
        case 0x4c0908u: goto label_4c0908;
        case 0x4c090cu: goto label_4c090c;
        case 0x4c0910u: goto label_4c0910;
        case 0x4c0914u: goto label_4c0914;
        case 0x4c0918u: goto label_4c0918;
        case 0x4c091cu: goto label_4c091c;
        case 0x4c0920u: goto label_4c0920;
        case 0x4c0924u: goto label_4c0924;
        case 0x4c0928u: goto label_4c0928;
        case 0x4c092cu: goto label_4c092c;
        case 0x4c0930u: goto label_4c0930;
        case 0x4c0934u: goto label_4c0934;
        case 0x4c0938u: goto label_4c0938;
        case 0x4c093cu: goto label_4c093c;
        case 0x4c0940u: goto label_4c0940;
        case 0x4c0944u: goto label_4c0944;
        case 0x4c0948u: goto label_4c0948;
        case 0x4c094cu: goto label_4c094c;
        case 0x4c0950u: goto label_4c0950;
        case 0x4c0954u: goto label_4c0954;
        case 0x4c0958u: goto label_4c0958;
        case 0x4c095cu: goto label_4c095c;
        case 0x4c0960u: goto label_4c0960;
        case 0x4c0964u: goto label_4c0964;
        case 0x4c0968u: goto label_4c0968;
        case 0x4c096cu: goto label_4c096c;
        case 0x4c0970u: goto label_4c0970;
        case 0x4c0974u: goto label_4c0974;
        case 0x4c0978u: goto label_4c0978;
        case 0x4c097cu: goto label_4c097c;
        case 0x4c0980u: goto label_4c0980;
        case 0x4c0984u: goto label_4c0984;
        case 0x4c0988u: goto label_4c0988;
        case 0x4c098cu: goto label_4c098c;
        case 0x4c0990u: goto label_4c0990;
        case 0x4c0994u: goto label_4c0994;
        case 0x4c0998u: goto label_4c0998;
        case 0x4c099cu: goto label_4c099c;
        case 0x4c09a0u: goto label_4c09a0;
        case 0x4c09a4u: goto label_4c09a4;
        case 0x4c09a8u: goto label_4c09a8;
        case 0x4c09acu: goto label_4c09ac;
        case 0x4c09b0u: goto label_4c09b0;
        case 0x4c09b4u: goto label_4c09b4;
        case 0x4c09b8u: goto label_4c09b8;
        case 0x4c09bcu: goto label_4c09bc;
        case 0x4c09c0u: goto label_4c09c0;
        case 0x4c09c4u: goto label_4c09c4;
        case 0x4c09c8u: goto label_4c09c8;
        case 0x4c09ccu: goto label_4c09cc;
        case 0x4c09d0u: goto label_4c09d0;
        case 0x4c09d4u: goto label_4c09d4;
        case 0x4c09d8u: goto label_4c09d8;
        case 0x4c09dcu: goto label_4c09dc;
        case 0x4c09e0u: goto label_4c09e0;
        case 0x4c09e4u: goto label_4c09e4;
        case 0x4c09e8u: goto label_4c09e8;
        case 0x4c09ecu: goto label_4c09ec;
        case 0x4c09f0u: goto label_4c09f0;
        case 0x4c09f4u: goto label_4c09f4;
        case 0x4c09f8u: goto label_4c09f8;
        case 0x4c09fcu: goto label_4c09fc;
        case 0x4c0a00u: goto label_4c0a00;
        case 0x4c0a04u: goto label_4c0a04;
        case 0x4c0a08u: goto label_4c0a08;
        case 0x4c0a0cu: goto label_4c0a0c;
        case 0x4c0a10u: goto label_4c0a10;
        case 0x4c0a14u: goto label_4c0a14;
        case 0x4c0a18u: goto label_4c0a18;
        case 0x4c0a1cu: goto label_4c0a1c;
        case 0x4c0a20u: goto label_4c0a20;
        case 0x4c0a24u: goto label_4c0a24;
        case 0x4c0a28u: goto label_4c0a28;
        case 0x4c0a2cu: goto label_4c0a2c;
        case 0x4c0a30u: goto label_4c0a30;
        case 0x4c0a34u: goto label_4c0a34;
        case 0x4c0a38u: goto label_4c0a38;
        case 0x4c0a3cu: goto label_4c0a3c;
        case 0x4c0a40u: goto label_4c0a40;
        case 0x4c0a44u: goto label_4c0a44;
        case 0x4c0a48u: goto label_4c0a48;
        case 0x4c0a4cu: goto label_4c0a4c;
        case 0x4c0a50u: goto label_4c0a50;
        case 0x4c0a54u: goto label_4c0a54;
        case 0x4c0a58u: goto label_4c0a58;
        case 0x4c0a5cu: goto label_4c0a5c;
        case 0x4c0a60u: goto label_4c0a60;
        case 0x4c0a64u: goto label_4c0a64;
        case 0x4c0a68u: goto label_4c0a68;
        case 0x4c0a6cu: goto label_4c0a6c;
        case 0x4c0a70u: goto label_4c0a70;
        case 0x4c0a74u: goto label_4c0a74;
        case 0x4c0a78u: goto label_4c0a78;
        case 0x4c0a7cu: goto label_4c0a7c;
        case 0x4c0a80u: goto label_4c0a80;
        case 0x4c0a84u: goto label_4c0a84;
        case 0x4c0a88u: goto label_4c0a88;
        case 0x4c0a8cu: goto label_4c0a8c;
        case 0x4c0a90u: goto label_4c0a90;
        case 0x4c0a94u: goto label_4c0a94;
        case 0x4c0a98u: goto label_4c0a98;
        case 0x4c0a9cu: goto label_4c0a9c;
        case 0x4c0aa0u: goto label_4c0aa0;
        case 0x4c0aa4u: goto label_4c0aa4;
        case 0x4c0aa8u: goto label_4c0aa8;
        case 0x4c0aacu: goto label_4c0aac;
        case 0x4c0ab0u: goto label_4c0ab0;
        case 0x4c0ab4u: goto label_4c0ab4;
        case 0x4c0ab8u: goto label_4c0ab8;
        case 0x4c0abcu: goto label_4c0abc;
        case 0x4c0ac0u: goto label_4c0ac0;
        case 0x4c0ac4u: goto label_4c0ac4;
        case 0x4c0ac8u: goto label_4c0ac8;
        case 0x4c0accu: goto label_4c0acc;
        case 0x4c0ad0u: goto label_4c0ad0;
        case 0x4c0ad4u: goto label_4c0ad4;
        case 0x4c0ad8u: goto label_4c0ad8;
        case 0x4c0adcu: goto label_4c0adc;
        case 0x4c0ae0u: goto label_4c0ae0;
        case 0x4c0ae4u: goto label_4c0ae4;
        case 0x4c0ae8u: goto label_4c0ae8;
        case 0x4c0aecu: goto label_4c0aec;
        case 0x4c0af0u: goto label_4c0af0;
        case 0x4c0af4u: goto label_4c0af4;
        case 0x4c0af8u: goto label_4c0af8;
        case 0x4c0afcu: goto label_4c0afc;
        case 0x4c0b00u: goto label_4c0b00;
        case 0x4c0b04u: goto label_4c0b04;
        case 0x4c0b08u: goto label_4c0b08;
        case 0x4c0b0cu: goto label_4c0b0c;
        case 0x4c0b10u: goto label_4c0b10;
        case 0x4c0b14u: goto label_4c0b14;
        case 0x4c0b18u: goto label_4c0b18;
        case 0x4c0b1cu: goto label_4c0b1c;
        case 0x4c0b20u: goto label_4c0b20;
        case 0x4c0b24u: goto label_4c0b24;
        case 0x4c0b28u: goto label_4c0b28;
        case 0x4c0b2cu: goto label_4c0b2c;
        case 0x4c0b30u: goto label_4c0b30;
        case 0x4c0b34u: goto label_4c0b34;
        case 0x4c0b38u: goto label_4c0b38;
        case 0x4c0b3cu: goto label_4c0b3c;
        case 0x4c0b40u: goto label_4c0b40;
        case 0x4c0b44u: goto label_4c0b44;
        case 0x4c0b48u: goto label_4c0b48;
        case 0x4c0b4cu: goto label_4c0b4c;
        case 0x4c0b50u: goto label_4c0b50;
        case 0x4c0b54u: goto label_4c0b54;
        case 0x4c0b58u: goto label_4c0b58;
        case 0x4c0b5cu: goto label_4c0b5c;
        case 0x4c0b60u: goto label_4c0b60;
        case 0x4c0b64u: goto label_4c0b64;
        case 0x4c0b68u: goto label_4c0b68;
        case 0x4c0b6cu: goto label_4c0b6c;
        case 0x4c0b70u: goto label_4c0b70;
        case 0x4c0b74u: goto label_4c0b74;
        case 0x4c0b78u: goto label_4c0b78;
        case 0x4c0b7cu: goto label_4c0b7c;
        case 0x4c0b80u: goto label_4c0b80;
        case 0x4c0b84u: goto label_4c0b84;
        case 0x4c0b88u: goto label_4c0b88;
        case 0x4c0b8cu: goto label_4c0b8c;
        case 0x4c0b90u: goto label_4c0b90;
        case 0x4c0b94u: goto label_4c0b94;
        case 0x4c0b98u: goto label_4c0b98;
        case 0x4c0b9cu: goto label_4c0b9c;
        case 0x4c0ba0u: goto label_4c0ba0;
        case 0x4c0ba4u: goto label_4c0ba4;
        case 0x4c0ba8u: goto label_4c0ba8;
        case 0x4c0bacu: goto label_4c0bac;
        case 0x4c0bb0u: goto label_4c0bb0;
        case 0x4c0bb4u: goto label_4c0bb4;
        case 0x4c0bb8u: goto label_4c0bb8;
        case 0x4c0bbcu: goto label_4c0bbc;
        case 0x4c0bc0u: goto label_4c0bc0;
        case 0x4c0bc4u: goto label_4c0bc4;
        case 0x4c0bc8u: goto label_4c0bc8;
        case 0x4c0bccu: goto label_4c0bcc;
        case 0x4c0bd0u: goto label_4c0bd0;
        case 0x4c0bd4u: goto label_4c0bd4;
        case 0x4c0bd8u: goto label_4c0bd8;
        case 0x4c0bdcu: goto label_4c0bdc;
        case 0x4c0be0u: goto label_4c0be0;
        case 0x4c0be4u: goto label_4c0be4;
        case 0x4c0be8u: goto label_4c0be8;
        case 0x4c0becu: goto label_4c0bec;
        case 0x4c0bf0u: goto label_4c0bf0;
        case 0x4c0bf4u: goto label_4c0bf4;
        case 0x4c0bf8u: goto label_4c0bf8;
        case 0x4c0bfcu: goto label_4c0bfc;
        case 0x4c0c00u: goto label_4c0c00;
        case 0x4c0c04u: goto label_4c0c04;
        case 0x4c0c08u: goto label_4c0c08;
        case 0x4c0c0cu: goto label_4c0c0c;
        case 0x4c0c10u: goto label_4c0c10;
        case 0x4c0c14u: goto label_4c0c14;
        case 0x4c0c18u: goto label_4c0c18;
        case 0x4c0c1cu: goto label_4c0c1c;
        case 0x4c0c20u: goto label_4c0c20;
        case 0x4c0c24u: goto label_4c0c24;
        case 0x4c0c28u: goto label_4c0c28;
        case 0x4c0c2cu: goto label_4c0c2c;
        case 0x4c0c30u: goto label_4c0c30;
        case 0x4c0c34u: goto label_4c0c34;
        case 0x4c0c38u: goto label_4c0c38;
        case 0x4c0c3cu: goto label_4c0c3c;
        case 0x4c0c40u: goto label_4c0c40;
        case 0x4c0c44u: goto label_4c0c44;
        case 0x4c0c48u: goto label_4c0c48;
        case 0x4c0c4cu: goto label_4c0c4c;
        case 0x4c0c50u: goto label_4c0c50;
        case 0x4c0c54u: goto label_4c0c54;
        case 0x4c0c58u: goto label_4c0c58;
        case 0x4c0c5cu: goto label_4c0c5c;
        case 0x4c0c60u: goto label_4c0c60;
        case 0x4c0c64u: goto label_4c0c64;
        case 0x4c0c68u: goto label_4c0c68;
        case 0x4c0c6cu: goto label_4c0c6c;
        case 0x4c0c70u: goto label_4c0c70;
        case 0x4c0c74u: goto label_4c0c74;
        case 0x4c0c78u: goto label_4c0c78;
        case 0x4c0c7cu: goto label_4c0c7c;
        case 0x4c0c80u: goto label_4c0c80;
        case 0x4c0c84u: goto label_4c0c84;
        case 0x4c0c88u: goto label_4c0c88;
        case 0x4c0c8cu: goto label_4c0c8c;
        case 0x4c0c90u: goto label_4c0c90;
        case 0x4c0c94u: goto label_4c0c94;
        case 0x4c0c98u: goto label_4c0c98;
        case 0x4c0c9cu: goto label_4c0c9c;
        case 0x4c0ca0u: goto label_4c0ca0;
        case 0x4c0ca4u: goto label_4c0ca4;
        case 0x4c0ca8u: goto label_4c0ca8;
        case 0x4c0cacu: goto label_4c0cac;
        case 0x4c0cb0u: goto label_4c0cb0;
        case 0x4c0cb4u: goto label_4c0cb4;
        case 0x4c0cb8u: goto label_4c0cb8;
        case 0x4c0cbcu: goto label_4c0cbc;
        case 0x4c0cc0u: goto label_4c0cc0;
        case 0x4c0cc4u: goto label_4c0cc4;
        case 0x4c0cc8u: goto label_4c0cc8;
        case 0x4c0cccu: goto label_4c0ccc;
        case 0x4c0cd0u: goto label_4c0cd0;
        case 0x4c0cd4u: goto label_4c0cd4;
        case 0x4c0cd8u: goto label_4c0cd8;
        case 0x4c0cdcu: goto label_4c0cdc;
        case 0x4c0ce0u: goto label_4c0ce0;
        case 0x4c0ce4u: goto label_4c0ce4;
        case 0x4c0ce8u: goto label_4c0ce8;
        case 0x4c0cecu: goto label_4c0cec;
        case 0x4c0cf0u: goto label_4c0cf0;
        case 0x4c0cf4u: goto label_4c0cf4;
        case 0x4c0cf8u: goto label_4c0cf8;
        case 0x4c0cfcu: goto label_4c0cfc;
        case 0x4c0d00u: goto label_4c0d00;
        case 0x4c0d04u: goto label_4c0d04;
        case 0x4c0d08u: goto label_4c0d08;
        case 0x4c0d0cu: goto label_4c0d0c;
        case 0x4c0d10u: goto label_4c0d10;
        case 0x4c0d14u: goto label_4c0d14;
        case 0x4c0d18u: goto label_4c0d18;
        case 0x4c0d1cu: goto label_4c0d1c;
        case 0x4c0d20u: goto label_4c0d20;
        case 0x4c0d24u: goto label_4c0d24;
        case 0x4c0d28u: goto label_4c0d28;
        case 0x4c0d2cu: goto label_4c0d2c;
        default: break;
    }

    ctx->pc = 0x4bfef0u;

label_4bfef0:
    // 0x4bfef0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4bfef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4bfef4:
    // 0x4bfef4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4bfef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4bfef8:
    // 0x4bfef8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bfef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bfefc:
    // 0x4bfefc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bfefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bff00:
    // 0x4bff00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bff04:
    // 0x4bff04: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4bff04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4bff08:
    // 0x4bff08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bff0c:
    // 0x4bff0c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4bff0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4bff10:
    // 0x4bff10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bff14:
    // 0x4bff14: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4bff14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4bff18:
    // 0x4bff18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bff1c:
    // 0x4bff1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bff1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bff20:
    // 0x4bff20: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x4bff20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4bff24:
    // 0x4bff24: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_4bff28:
    if (ctx->pc == 0x4BFF28u) {
        ctx->pc = 0x4BFF28u;
            // 0x4bff28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BFF2Cu;
        goto label_4bff2c;
    }
    ctx->pc = 0x4BFF24u;
    {
        const bool branch_taken_0x4bff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFF24u;
            // 0x4bff28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bff24) {
            ctx->pc = 0x4C0120u;
            goto label_4c0120;
        }
    }
    ctx->pc = 0x4BFF2Cu;
label_4bff2c:
    // 0x4bff2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bff30:
    // 0x4bff30: 0xc04f278  jal         func_13C9E0
label_4bff34:
    if (ctx->pc == 0x4BFF34u) {
        ctx->pc = 0x4BFF34u;
            // 0x4bff34: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4BFF38u;
        goto label_4bff38;
    }
    ctx->pc = 0x4BFF30u;
    SET_GPR_U32(ctx, 31, 0x4BFF38u);
    ctx->pc = 0x4BFF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFF30u;
            // 0x4bff34: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF38u; }
        if (ctx->pc != 0x4BFF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF38u; }
        if (ctx->pc != 0x4BFF38u) { return; }
    }
    ctx->pc = 0x4BFF38u;
label_4bff38:
    // 0x4bff38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bff3c:
    // 0x4bff3c: 0xc04ce80  jal         func_133A00
label_4bff40:
    if (ctx->pc == 0x4BFF40u) {
        ctx->pc = 0x4BFF40u;
            // 0x4bff40: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4BFF44u;
        goto label_4bff44;
    }
    ctx->pc = 0x4BFF3Cu;
    SET_GPR_U32(ctx, 31, 0x4BFF44u);
    ctx->pc = 0x4BFF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFF3Cu;
            // 0x4bff40: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF44u; }
        if (ctx->pc != 0x4BFF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF44u; }
        if (ctx->pc != 0x4BFF44u) { return; }
    }
    ctx->pc = 0x4BFF44u;
label_4bff44:
    // 0x4bff44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bff48:
    // 0x4bff48: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x4bff48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_4bff4c:
    // 0x4bff4c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4bff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4bff50:
    // 0x4bff50: 0xc07698c  jal         func_1DA630
label_4bff54:
    if (ctx->pc == 0x4BFF54u) {
        ctx->pc = 0x4BFF54u;
            // 0x4bff54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BFF58u;
        goto label_4bff58;
    }
    ctx->pc = 0x4BFF50u;
    SET_GPR_U32(ctx, 31, 0x4BFF58u);
    ctx->pc = 0x4BFF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFF50u;
            // 0x4bff54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF58u; }
        if (ctx->pc != 0x4BFF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF58u; }
        if (ctx->pc != 0x4BFF58u) { return; }
    }
    ctx->pc = 0x4BFF58u;
label_4bff58:
    // 0x4bff58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4bff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bff5c:
    // 0x4bff5c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4bff60:
    if (ctx->pc == 0x4BFF60u) {
        ctx->pc = 0x4BFF64u;
        goto label_4bff64;
    }
    ctx->pc = 0x4BFF5Cu;
    {
        const bool branch_taken_0x4bff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bff5c) {
            ctx->pc = 0x4BFF6Cu;
            goto label_4bff6c;
        }
    }
    ctx->pc = 0x4BFF64u;
label_4bff64:
    // 0x4bff64: 0x10000033  b           . + 4 + (0x33 << 2)
label_4bff68:
    if (ctx->pc == 0x4BFF68u) {
        ctx->pc = 0x4BFF68u;
            // 0x4bff68: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4BFF6Cu;
        goto label_4bff6c;
    }
    ctx->pc = 0x4BFF64u;
    {
        const bool branch_taken_0x4bff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFF64u;
            // 0x4bff68: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bff64) {
            ctx->pc = 0x4C0034u;
            goto label_4c0034;
        }
    }
    ctx->pc = 0x4BFF6Cu;
label_4bff6c:
    // 0x4bff6c: 0xc0576f4  jal         func_15DBD0
label_4bff70:
    if (ctx->pc == 0x4BFF70u) {
        ctx->pc = 0x4BFF74u;
        goto label_4bff74;
    }
    ctx->pc = 0x4BFF6Cu;
    SET_GPR_U32(ctx, 31, 0x4BFF74u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF74u; }
        if (ctx->pc != 0x4BFF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF74u; }
        if (ctx->pc != 0x4BFF74u) { return; }
    }
    ctx->pc = 0x4BFF74u;
label_4bff74:
    // 0x4bff74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bff78:
    // 0x4bff78: 0xc076984  jal         func_1DA610
label_4bff7c:
    if (ctx->pc == 0x4BFF7Cu) {
        ctx->pc = 0x4BFF7Cu;
            // 0x4bff7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BFF80u;
        goto label_4bff80;
    }
    ctx->pc = 0x4BFF78u;
    SET_GPR_U32(ctx, 31, 0x4BFF80u);
    ctx->pc = 0x4BFF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFF78u;
            // 0x4bff7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF80u; }
        if (ctx->pc != 0x4BFF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFF80u; }
        if (ctx->pc != 0x4BFF80u) { return; }
    }
    ctx->pc = 0x4BFF80u;
label_4bff80:
    // 0x4bff80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bff80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bff84:
    // 0x4bff84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4bff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4bff88:
    // 0x4bff88: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4bff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4bff8c:
    // 0x4bff8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4bff8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bff90:
    // 0x4bff90: 0xc442c7b0  lwc1        $f2, -0x3850($v0)
    ctx->pc = 0x4bff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bff94:
    // 0x4bff94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4bff94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bff98:
    // 0x4bff98: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4bff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4bff9c:
    // 0x4bff9c: 0xc441c7b8  lwc1        $f1, -0x3848($v0)
    ctx->pc = 0x4bff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bffa0:
    // 0x4bffa0: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4bffa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4bffa4:
    // 0x4bffa4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4bffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4bffa8:
    // 0x4bffa8: 0xc440c7bc  lwc1        $f0, -0x3844($v0)
    ctx->pc = 0x4bffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bffac:
    // 0x4bffac: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4bffacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4bffb0:
    // 0x4bffb0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4bffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4bffb4:
    // 0x4bffb4: 0x8c42c7b4  lw          $v0, -0x384C($v0)
    ctx->pc = 0x4bffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
label_4bffb8:
    // 0x4bffb8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4bffb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4bffbc:
    // 0x4bffbc: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4bffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4bffc0:
    // 0x4bffc0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4bffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bffc4:
    // 0x4bffc4: 0xc04cca0  jal         func_133280
label_4bffc8:
    if (ctx->pc == 0x4BFFC8u) {
        ctx->pc = 0x4BFFC8u;
            // 0x4bffc8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4BFFCCu;
        goto label_4bffcc;
    }
    ctx->pc = 0x4BFFC4u;
    SET_GPR_U32(ctx, 31, 0x4BFFCCu);
    ctx->pc = 0x4BFFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFFC4u;
            // 0x4bffc8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFFCCu; }
        if (ctx->pc != 0x4BFFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFFCCu; }
        if (ctx->pc != 0x4BFFCCu) { return; }
    }
    ctx->pc = 0x4BFFCCu;
label_4bffcc:
    // 0x4bffcc: 0xc076980  jal         func_1DA600
label_4bffd0:
    if (ctx->pc == 0x4BFFD0u) {
        ctx->pc = 0x4BFFD0u;
            // 0x4bffd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BFFD4u;
        goto label_4bffd4;
    }
    ctx->pc = 0x4BFFCCu;
    SET_GPR_U32(ctx, 31, 0x4BFFD4u);
    ctx->pc = 0x4BFFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFFCCu;
            // 0x4bffd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFFD4u; }
        if (ctx->pc != 0x4BFFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFFD4u; }
        if (ctx->pc != 0x4BFFD4u) { return; }
    }
    ctx->pc = 0x4BFFD4u;
label_4bffd4:
    // 0x4bffd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4bffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4bffd8:
    // 0x4bffd8: 0xc04cc34  jal         func_1330D0
label_4bffdc:
    if (ctx->pc == 0x4BFFDCu) {
        ctx->pc = 0x4BFFDCu;
            // 0x4bffdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BFFE0u;
        goto label_4bffe0;
    }
    ctx->pc = 0x4BFFD8u;
    SET_GPR_U32(ctx, 31, 0x4BFFE0u);
    ctx->pc = 0x4BFFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFFD8u;
            // 0x4bffdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFFE0u; }
        if (ctx->pc != 0x4BFFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BFFE0u; }
        if (ctx->pc != 0x4BFFE0u) { return; }
    }
    ctx->pc = 0x4BFFE0u;
label_4bffe0:
    // 0x4bffe0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4bffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4bffe4:
    // 0x4bffe4: 0xc4617028  lwc1        $f1, 0x7028($v1)
    ctx->pc = 0x4bffe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bffe8:
    // 0x4bffe8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4bffe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bffec:
    // 0x4bffec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4bfff0:
    if (ctx->pc == 0x4BFFF0u) {
        ctx->pc = 0x4BFFF0u;
            // 0x4bfff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BFFF4u;
        goto label_4bfff4;
    }
    ctx->pc = 0x4BFFECu;
    {
        const bool branch_taken_0x4bffec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bffec) {
            ctx->pc = 0x4BFFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFFECu;
            // 0x4bfff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BFFFCu;
            goto label_4bfffc;
        }
    }
    ctx->pc = 0x4BFFF4u;
label_4bfff4:
    // 0x4bfff4: 0x1000000f  b           . + 4 + (0xF << 2)
label_4bfff8:
    if (ctx->pc == 0x4BFFF8u) {
        ctx->pc = 0x4BFFF8u;
            // 0x4bfff8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4BFFFCu;
        goto label_4bfffc;
    }
    ctx->pc = 0x4BFFF4u;
    {
        const bool branch_taken_0x4bfff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BFFF4u;
            // 0x4bfff8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfff4) {
            ctx->pc = 0x4C0034u;
            goto label_4c0034;
        }
    }
    ctx->pc = 0x4BFFFCu;
label_4bfffc:
    // 0x4bfffc: 0xc07697c  jal         func_1DA5F0
label_4c0000:
    if (ctx->pc == 0x4C0000u) {
        ctx->pc = 0x4C0004u;
        goto label_4c0004;
    }
    ctx->pc = 0x4BFFFCu;
    SET_GPR_U32(ctx, 31, 0x4C0004u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0004u; }
        if (ctx->pc != 0x4C0004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0004u; }
        if (ctx->pc != 0x4C0004u) { return; }
    }
    ctx->pc = 0x4C0004u;
label_4c0004:
    // 0x4c0004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c0004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0008:
    // 0x4c0008: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4c0008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4c000c:
    // 0x4c000c: 0xc04cd60  jal         func_133580
label_4c0010:
    if (ctx->pc == 0x4C0010u) {
        ctx->pc = 0x4C0010u;
            // 0x4c0010: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0014u;
        goto label_4c0014;
    }
    ctx->pc = 0x4C000Cu;
    SET_GPR_U32(ctx, 31, 0x4C0014u);
    ctx->pc = 0x4C0010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C000Cu;
            // 0x4c0010: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0014u; }
        if (ctx->pc != 0x4C0014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0014u; }
        if (ctx->pc != 0x4C0014u) { return; }
    }
    ctx->pc = 0x4C0014u;
label_4c0014:
    // 0x4c0014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c0018:
    // 0x4c0018: 0xc04c650  jal         func_131940
label_4c001c:
    if (ctx->pc == 0x4C001Cu) {
        ctx->pc = 0x4C001Cu;
            // 0x4c001c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C0020u;
        goto label_4c0020;
    }
    ctx->pc = 0x4C0018u;
    SET_GPR_U32(ctx, 31, 0x4C0020u);
    ctx->pc = 0x4C001Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0018u;
            // 0x4c001c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0020u; }
        if (ctx->pc != 0x4C0020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0020u; }
        if (ctx->pc != 0x4C0020u) { return; }
    }
    ctx->pc = 0x4C0020u;
label_4c0020:
    // 0x4c0020: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c0020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c0024:
    // 0x4c0024: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4c0024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c0028:
    // 0x4c0028: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4c0028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4c002c:
    // 0x4c002c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c0030:
    // 0x4c0030: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4c0030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0034:
    // 0x4c0034: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4c0034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4c0038:
    // 0x4c0038: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_4c003c:
    if (ctx->pc == 0x4C003Cu) {
        ctx->pc = 0x4C003Cu;
            // 0x4c003c: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4C0040u;
        goto label_4c0040;
    }
    ctx->pc = 0x4C0038u;
    {
        const bool branch_taken_0x4c0038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0038u;
            // 0x4c003c: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0038) {
            ctx->pc = 0x4C0138u;
            goto label_4c0138;
        }
    }
    ctx->pc = 0x4C0040u;
label_4c0040:
    // 0x4c0040: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0044:
    // 0x4c0044: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0048:
    // 0x4c0048: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4c0048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c004c:
    // 0x4c004c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4c004cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4c0050:
    // 0x4c0050: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4c0050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4c0054:
    // 0x4c0054: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0058:
    // 0x4c0058: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4c0058u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4c005c:
    // 0x4c005c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c005cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0060:
    // 0x4c0060: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4c0060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4c0064:
    // 0x4c0064: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4c0064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4c0068:
    // 0x4c0068: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4c0068u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4c006c:
    // 0x4c006c: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x4c006cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4c0070:
    // 0x4c0070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0074:
    // 0x4c0074: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4c0074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_4c0078:
    // 0x4c0078: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c007c:
    // 0x4c007c: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x4c007cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_4c0080:
    // 0x4c0080: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4c0080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4c0084:
    // 0x4c0084: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4c0084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4c0088:
    // 0x4c0088: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4c0088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4c008c:
    // 0x4c008c: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x4c008cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4c0090:
    // 0x4c0090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c0090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c0094:
    // 0x4c0094: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x4c0094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_4c0098:
    // 0x4c0098: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4c0098u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4c009c:
    // 0x4c009c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c009cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c00a0:
    // 0x4c00a0: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x4c00a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4c00a4:
    // 0x4c00a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c00a8:
    // 0x4c00a8: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x4c00a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_4c00ac:
    // 0x4c00ac: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x4c00acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_4c00b0:
    // 0x4c00b0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4c00b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c00b4:
    // 0x4c00b4: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x4c00b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4c00b8:
    // 0x4c00b8: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x4c00b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_4c00bc:
    // 0x4c00bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c00c0:
    // 0x4c00c0: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x4c00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_4c00c4:
    // 0x4c00c4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x4c00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4c00c8:
    // 0x4c00c8: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x4c00c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_4c00cc:
    // 0x4c00cc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4c00ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4c00d0:
    // 0x4c00d0: 0xc04e4a4  jal         func_139290
label_4c00d4:
    if (ctx->pc == 0x4C00D4u) {
        ctx->pc = 0x4C00D4u;
            // 0x4c00d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C00D8u;
        goto label_4c00d8;
    }
    ctx->pc = 0x4C00D0u;
    SET_GPR_U32(ctx, 31, 0x4C00D8u);
    ctx->pc = 0x4C00D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C00D0u;
            // 0x4c00d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C00D8u; }
        if (ctx->pc != 0x4C00D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C00D8u; }
        if (ctx->pc != 0x4C00D8u) { return; }
    }
    ctx->pc = 0x4C00D8u;
label_4c00d8:
    // 0x4c00d8: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x4c00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4c00dc:
    // 0x4c00dc: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x4c00dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_4c00e0:
    // 0x4c00e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4c00e4:
    if (ctx->pc == 0x4C00E4u) {
        ctx->pc = 0x4C00E4u;
            // 0x4c00e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C00E8u;
        goto label_4c00e8;
    }
    ctx->pc = 0x4C00E0u;
    {
        const bool branch_taken_0x4c00e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c00e0) {
            ctx->pc = 0x4C00E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C00E0u;
            // 0x4c00e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C00F0u;
            goto label_4c00f0;
        }
    }
    ctx->pc = 0x4C00E8u;
label_4c00e8:
    // 0x4c00e8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4c00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4c00ec:
    // 0x4c00ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c00ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c00f0:
    // 0x4c00f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c00f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c00f4:
    // 0x4c00f4: 0xc04cd60  jal         func_133580
label_4c00f8:
    if (ctx->pc == 0x4C00F8u) {
        ctx->pc = 0x4C00F8u;
            // 0x4c00f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C00FCu;
        goto label_4c00fc;
    }
    ctx->pc = 0x4C00F4u;
    SET_GPR_U32(ctx, 31, 0x4C00FCu);
    ctx->pc = 0x4C00F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C00F4u;
            // 0x4c00f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C00FCu; }
        if (ctx->pc != 0x4C00FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C00FCu; }
        if (ctx->pc != 0x4C00FCu) { return; }
    }
    ctx->pc = 0x4C00FCu;
label_4c00fc:
    // 0x4c00fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4c00fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4c0100:
    // 0x4c0100: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4c0100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4c0104:
    // 0x4c0104: 0x320f809  jalr        $t9
label_4c0108:
    if (ctx->pc == 0x4C0108u) {
        ctx->pc = 0x4C0108u;
            // 0x4c0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C010Cu;
        goto label_4c010c;
    }
    ctx->pc = 0x4C0104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C010Cu);
        ctx->pc = 0x4C0108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0104u;
            // 0x4c0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C010Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C010Cu; }
            if (ctx->pc != 0x4C010Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C010Cu;
label_4c010c:
    // 0x4c010c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c0110:
    // 0x4c0110: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c0110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c0114:
    // 0x4c0114: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4c0114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0118:
    // 0x4c0118: 0xc054fd4  jal         func_153F50
label_4c011c:
    if (ctx->pc == 0x4C011Cu) {
        ctx->pc = 0x4C011Cu;
            // 0x4c011c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0120u;
        goto label_4c0120;
    }
    ctx->pc = 0x4C0118u;
    SET_GPR_U32(ctx, 31, 0x4C0120u);
    ctx->pc = 0x4C011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0118u;
            // 0x4c011c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0120u; }
        if (ctx->pc != 0x4C0120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0120u; }
        if (ctx->pc != 0x4C0120u) { return; }
    }
    ctx->pc = 0x4C0120u;
label_4c0120:
    // 0x4c0120: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c0120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c0124:
    // 0x4c0124: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x4c0124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4c0128:
    // 0x4c0128: 0xc44c7028  lwc1        $f12, 0x7028($v0)
    ctx->pc = 0x4c0128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c012c:
    // 0x4c012c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c012cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c0130:
    // 0x4c0130: 0xc0e31f8  jal         func_38C7E0
label_4c0134:
    if (ctx->pc == 0x4C0134u) {
        ctx->pc = 0x4C0134u;
            // 0x4c0134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0138u;
        goto label_4c0138;
    }
    ctx->pc = 0x4C0130u;
    SET_GPR_U32(ctx, 31, 0x4C0138u);
    ctx->pc = 0x4C0134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0130u;
            // 0x4c0134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0138u; }
        if (ctx->pc != 0x4C0138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0138u; }
        if (ctx->pc != 0x4C0138u) { return; }
    }
    ctx->pc = 0x4C0138u;
label_4c0138:
    // 0x4c0138: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4c0138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4c013c:
    // 0x4c013c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c013cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c0140:
    // 0x4c0140: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c0140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c0144:
    // 0x4c0144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c0144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c0148:
    // 0x4c0148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c0148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c014c:
    // 0x4c014c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c014cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0150:
    // 0x4c0150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0154:
    // 0x4c0154: 0x3e00008  jr          $ra
label_4c0158:
    if (ctx->pc == 0x4C0158u) {
        ctx->pc = 0x4C0158u;
            // 0x4c0158: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C015Cu;
        goto label_4c015c;
    }
    ctx->pc = 0x4C0154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0154u;
            // 0x4c0158: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C015Cu;
label_4c015c:
    // 0x4c015c: 0x0  nop
    ctx->pc = 0x4c015cu;
    // NOP
label_4c0160:
    // 0x4c0160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c0160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c0164:
    // 0x4c0164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c0164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c0168:
    // 0x4c0168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c0168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c016c:
    // 0x4c016c: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4c016cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4c0170:
    // 0x4c0170: 0x50a3001f  beql        $a1, $v1, . + 4 + (0x1F << 2)
label_4c0174:
    if (ctx->pc == 0x4C0174u) {
        ctx->pc = 0x4C0174u;
            // 0x4c0174: 0x90830090  lbu         $v1, 0x90($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->pc = 0x4C0178u;
        goto label_4c0178;
    }
    ctx->pc = 0x4C0170u;
    {
        const bool branch_taken_0x4c0170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c0170) {
            ctx->pc = 0x4C0174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0170u;
            // 0x4c0174: 0x90830090  lbu         $v1, 0x90($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C01F0u;
            goto label_4c01f0;
        }
    }
    ctx->pc = 0x4C0178u;
label_4c0178:
    // 0x4c0178: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4c017c:
    if (ctx->pc == 0x4C017Cu) {
        ctx->pc = 0x4C0180u;
        goto label_4c0180;
    }
    ctx->pc = 0x4C0178u;
    {
        const bool branch_taken_0x4c0178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0178) {
            ctx->pc = 0x4C0188u;
            goto label_4c0188;
        }
    }
    ctx->pc = 0x4C0180u;
label_4c0180:
    // 0x4c0180: 0x10000028  b           . + 4 + (0x28 << 2)
label_4c0184:
    if (ctx->pc == 0x4C0184u) {
        ctx->pc = 0x4C0184u;
            // 0x4c0184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4C0188u;
        goto label_4c0188;
    }
    ctx->pc = 0x4C0180u;
    {
        const bool branch_taken_0x4c0180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0180u;
            // 0x4c0184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0180) {
            ctx->pc = 0x4C0224u;
            goto label_4c0224;
        }
    }
    ctx->pc = 0x4C0188u;
label_4c0188:
    // 0x4c0188: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4c0188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4c018c:
    // 0x4c018c: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x4c018cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4c0190:
    // 0x4c0190: 0x8c63a9e8  lw          $v1, -0x5618($v1)
    ctx->pc = 0x4c0190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945256)));
label_4c0194:
    // 0x4c0194: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4c0194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4c0198:
    // 0x4c0198: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x4c0198u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4c019c:
    // 0x4c019c: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x4c019cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_4c01a0:
    // 0x4c01a0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c01a4:
    // 0x4c01a4: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x4c01a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c01a8:
    // 0x4c01a8: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x4c01a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4c01ac:
    // 0x4c01ac: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4c01acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4c01b0:
    // 0x4c01b0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4c01b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4c01b4:
    // 0x4c01b4: 0x8c65c7a0  lw          $a1, -0x3860($v1)
    ctx->pc = 0x4c01b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952864)));
label_4c01b8:
    // 0x4c01b8: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x4c01b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_4c01bc:
    // 0x4c01bc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4c01bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_4c01c0:
    // 0x4c01c0: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4c01c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4c01c4:
    // 0x4c01c4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4c01c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4c01c8:
    // 0x4c01c8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4c01c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4c01cc:
    // 0x4c01cc: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x4c01ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_4c01d0:
    // 0x4c01d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4c01d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c01d4:
    // 0x4c01d4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x4c01d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_4c01d8:
    // 0x4c01d8: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x4c01d8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4c01dc:
    // 0x4c01dc: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_4c01e0:
    if (ctx->pc == 0x4C01E0u) {
        ctx->pc = 0x4C01E0u;
            // 0x4c01e0: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4C01E4u;
        goto label_4c01e4;
    }
    ctx->pc = 0x4C01DCu;
    {
        const bool branch_taken_0x4c01dc = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x4C01E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C01DCu;
            // 0x4c01e0: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01dc) {
            ctx->pc = 0x4C01ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c01ac;
        }
    }
    ctx->pc = 0x4C01E4u;
label_4c01e4:
    // 0x4c01e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c01e8:
    // 0x4c01e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_4c01ec:
    if (ctx->pc == 0x4C01ECu) {
        ctx->pc = 0x4C01ECu;
            // 0x4c01ec: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4C01F0u;
        goto label_4c01f0;
    }
    ctx->pc = 0x4C01E8u;
    {
        const bool branch_taken_0x4c01e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C01ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C01E8u;
            // 0x4c01ec: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01e8) {
            ctx->pc = 0x4C0220u;
            goto label_4c0220;
        }
    }
    ctx->pc = 0x4C01F0u;
label_4c01f0:
    // 0x4c01f0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_4c01f4:
    if (ctx->pc == 0x4C01F4u) {
        ctx->pc = 0x4C01F4u;
            // 0x4c01f4: 0x8c850050  lw          $a1, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x4C01F8u;
        goto label_4c01f8;
    }
    ctx->pc = 0x4C01F0u;
    {
        const bool branch_taken_0x4c01f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C01F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C01F0u;
            // 0x4c01f4: 0x8c850050  lw          $a1, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c01f0) {
            ctx->pc = 0x4C0220u;
            goto label_4c0220;
        }
    }
    ctx->pc = 0x4C01F8u;
label_4c01f8:
    // 0x4c01f8: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x4c01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4c01fc:
    // 0x4c01fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0200:
    // 0x4c0200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c0200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0204:
    // 0x4c0204: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4c0204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4c0208:
    // 0x4c0208: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4c0208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4c020c:
    // 0x4c020c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4c020cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4c0210:
    // 0x4c0210: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c0214:
    // 0x4c0214: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c0214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c0218:
    // 0x4c0218: 0xc08bff0  jal         func_22FFC0
label_4c021c:
    if (ctx->pc == 0x4C021Cu) {
        ctx->pc = 0x4C021Cu;
            // 0x4c021c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0220u;
        goto label_4c0220;
    }
    ctx->pc = 0x4C0218u;
    SET_GPR_U32(ctx, 31, 0x4C0220u);
    ctx->pc = 0x4C021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0218u;
            // 0x4c021c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0220u; }
        if (ctx->pc != 0x4C0220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0220u; }
        if (ctx->pc != 0x4C0220u) { return; }
    }
    ctx->pc = 0x4C0220u;
label_4c0220:
    // 0x4c0220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c0220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0224:
    // 0x4c0224: 0x3e00008  jr          $ra
label_4c0228:
    if (ctx->pc == 0x4C0228u) {
        ctx->pc = 0x4C0228u;
            // 0x4c0228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4C022Cu;
        goto label_4c022c;
    }
    ctx->pc = 0x4C0224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0224u;
            // 0x4c0228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C022Cu;
label_4c022c:
    // 0x4c022c: 0x0  nop
    ctx->pc = 0x4c022cu;
    // NOP
label_4c0230:
    // 0x4c0230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c0230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c0234:
    // 0x4c0234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c0234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c0238:
    // 0x4c0238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c023c:
    // 0x4c023c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0240:
    // 0x4c0240: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4c0240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4c0244:
    // 0x4c0244: 0xc0e393c  jal         func_38E4F0
label_4c0248:
    if (ctx->pc == 0x4C0248u) {
        ctx->pc = 0x4C0248u;
            // 0x4c0248: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C024Cu;
        goto label_4c024c;
    }
    ctx->pc = 0x4C0244u;
    SET_GPR_U32(ctx, 31, 0x4C024Cu);
    ctx->pc = 0x4C0248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0244u;
            // 0x4c0248: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C024Cu; }
        if (ctx->pc != 0x4C024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C024Cu; }
        if (ctx->pc != 0x4C024Cu) { return; }
    }
    ctx->pc = 0x4C024Cu;
label_4c024c:
    // 0x4c024c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4c024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4c0250:
    // 0x4c0250: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4c0250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4c0254:
    // 0x4c0254: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c0254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c0258:
    // 0x4c0258: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4c0258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4c025c:
    // 0x4c025c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4c025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4c0260:
    // 0x4c0260: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0264:
    // 0x4c0264: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4c0264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4c0268:
    // 0x4c0268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c0268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c026c:
    // 0x4c026c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4c026cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4c0270:
    // 0x4c0270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c0270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0274:
    // 0x4c0274: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c0278:
    // 0x4c0278: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c0278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c027c:
    // 0x4c027c: 0xc08bff0  jal         func_22FFC0
label_4c0280:
    if (ctx->pc == 0x4C0280u) {
        ctx->pc = 0x4C0280u;
            // 0x4c0280: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0284u;
        goto label_4c0284;
    }
    ctx->pc = 0x4C027Cu;
    SET_GPR_U32(ctx, 31, 0x4C0284u);
    ctx->pc = 0x4C0280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C027Cu;
            // 0x4c0280: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0284u; }
        if (ctx->pc != 0x4C0284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0284u; }
        if (ctx->pc != 0x4C0284u) { return; }
    }
    ctx->pc = 0x4C0284u;
label_4c0284:
    // 0x4c0284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c0288:
    // 0x4c0288: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c0288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c028c:
    // 0x4c028c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c028cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c0290:
    // 0x4c0290: 0xc08914c  jal         func_224530
label_4c0294:
    if (ctx->pc == 0x4C0294u) {
        ctx->pc = 0x4C0294u;
            // 0x4c0294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0298u;
        goto label_4c0298;
    }
    ctx->pc = 0x4C0290u;
    SET_GPR_U32(ctx, 31, 0x4C0298u);
    ctx->pc = 0x4C0294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0290u;
            // 0x4c0294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0298u; }
        if (ctx->pc != 0x4C0298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0298u; }
        if (ctx->pc != 0x4C0298u) { return; }
    }
    ctx->pc = 0x4C0298u;
label_4c0298:
    // 0x4c0298: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4c0298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c029c:
    // 0x4c029c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c02a0:
    // 0x4c02a0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4c02a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c02a4:
    // 0x4c02a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4c02a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c02a8:
    // 0x4c02a8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4c02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c02ac:
    // 0x4c02ac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4c02acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4c02b0:
    // 0x4c02b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4c02b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c02b4:
    // 0x4c02b4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4c02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4c02b8:
    // 0x4c02b8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c02b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c02bc:
    // 0x4c02bc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4c02bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c02c0:
    // 0x4c02c0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4c02c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c02c4:
    // 0x4c02c4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4c02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c02c8:
    // 0x4c02c8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4c02c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c02cc:
    // 0x4c02cc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4c02ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c02d0:
    // 0x4c02d0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4c02d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4c02d4:
    // 0x4c02d4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4c02d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4c02d8:
    // 0x4c02d8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4c02d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4c02dc:
    // 0x4c02dc: 0xc0892b0  jal         func_224AC0
label_4c02e0:
    if (ctx->pc == 0x4C02E0u) {
        ctx->pc = 0x4C02E0u;
            // 0x4c02e0: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4C02E4u;
        goto label_4c02e4;
    }
    ctx->pc = 0x4C02DCu;
    SET_GPR_U32(ctx, 31, 0x4C02E4u);
    ctx->pc = 0x4C02E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C02DCu;
            // 0x4c02e0: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C02E4u; }
        if (ctx->pc != 0x4C02E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C02E4u; }
        if (ctx->pc != 0x4C02E4u) { return; }
    }
    ctx->pc = 0x4C02E4u;
label_4c02e4:
    // 0x4c02e4: 0xc088b74  jal         func_222DD0
label_4c02e8:
    if (ctx->pc == 0x4C02E8u) {
        ctx->pc = 0x4C02E8u;
            // 0x4c02e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C02ECu;
        goto label_4c02ec;
    }
    ctx->pc = 0x4C02E4u;
    SET_GPR_U32(ctx, 31, 0x4C02ECu);
    ctx->pc = 0x4C02E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C02E4u;
            // 0x4c02e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C02ECu; }
        if (ctx->pc != 0x4C02ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C02ECu; }
        if (ctx->pc != 0x4C02ECu) { return; }
    }
    ctx->pc = 0x4C02ECu;
label_4c02ec:
    // 0x4c02ec: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4c02ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c02f0:
    // 0x4c02f0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4c02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4c02f4:
    // 0x4c02f4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c02f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c02f8:
    // 0x4c02f8: 0x320f809  jalr        $t9
label_4c02fc:
    if (ctx->pc == 0x4C02FCu) {
        ctx->pc = 0x4C02FCu;
            // 0x4c02fc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C0300u;
        goto label_4c0300;
    }
    ctx->pc = 0x4C02F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C0300u);
        ctx->pc = 0x4C02FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C02F8u;
            // 0x4c02fc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C0300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C0300u; }
            if (ctx->pc != 0x4C0300u) { return; }
        }
        }
    }
    ctx->pc = 0x4C0300u;
label_4c0300:
    // 0x4c0300: 0xc088b74  jal         func_222DD0
label_4c0304:
    if (ctx->pc == 0x4C0304u) {
        ctx->pc = 0x4C0304u;
            // 0x4c0304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0308u;
        goto label_4c0308;
    }
    ctx->pc = 0x4C0300u;
    SET_GPR_U32(ctx, 31, 0x4C0308u);
    ctx->pc = 0x4C0304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0300u;
            // 0x4c0304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0308u; }
        if (ctx->pc != 0x4C0308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0308u; }
        if (ctx->pc != 0x4C0308u) { return; }
    }
    ctx->pc = 0x4C0308u;
label_4c0308:
    // 0x4c0308: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4c0308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c030c:
    // 0x4c030c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4c030cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4c0310:
    // 0x4c0310: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4c0310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4c0314:
    // 0x4c0314: 0x320f809  jalr        $t9
label_4c0318:
    if (ctx->pc == 0x4C0318u) {
        ctx->pc = 0x4C0318u;
            // 0x4c0318: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C031Cu;
        goto label_4c031c;
    }
    ctx->pc = 0x4C0314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C031Cu);
        ctx->pc = 0x4C0318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0314u;
            // 0x4c0318: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C031Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C031Cu; }
            if (ctx->pc != 0x4C031Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C031Cu;
label_4c031c:
    // 0x4c031c: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x4c031cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_4c0320:
    // 0x4c0320: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x4c0320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_4c0324:
    // 0x4c0324: 0x34857084  ori         $a1, $a0, 0x7084
    ctx->pc = 0x4c0324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_4c0328:
    // 0x4c0328: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x4c0328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_4c032c:
    // 0x4c032c: 0xae050154  sw          $a1, 0x154($s0)
    ctx->pc = 0x4c032cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 5));
label_4c0330:
    // 0x4c0330: 0xae040158  sw          $a0, 0x158($s0)
    ctx->pc = 0x4c0330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 4));
label_4c0334:
    // 0x4c0334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c0334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c0338:
    // 0x4c0338: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x4c0338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_4c033c:
    // 0x4c033c: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x4c033cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_4c0340:
    // 0x4c0340: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x4c0340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_4c0344:
    // 0x4c0344: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4c0344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4c0348:
    // 0x4c0348: 0xae250078  sw          $a1, 0x78($s1)
    ctx->pc = 0x4c0348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 5));
label_4c034c:
    // 0x4c034c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c0350:
    // 0x4c0350: 0xae240080  sw          $a0, 0x80($s1)
    ctx->pc = 0x4c0350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 4));
label_4c0354:
    // 0x4c0354: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x4c0354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_4c0358:
    // 0x4c0358: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x4c0358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_4c035c:
    // 0x4c035c: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x4c035cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_4c0360:
    // 0x4c0360: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x4c0360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_4c0364:
    // 0x4c0364: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x4c0364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_4c0368:
    // 0x4c0368: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x4c0368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_4c036c:
    // 0x4c036c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c0370:
    // 0x4c0370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c0370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0374:
    // 0x4c0374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0378:
    // 0x4c0378: 0x3e00008  jr          $ra
label_4c037c:
    if (ctx->pc == 0x4C037Cu) {
        ctx->pc = 0x4C037Cu;
            // 0x4c037c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C0380u;
        goto label_4c0380;
    }
    ctx->pc = 0x4C0378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0378u;
            // 0x4c037c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0380u;
label_4c0380:
    // 0x4c0380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c0384:
    // 0x4c0384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c0384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c0388:
    // 0x4c0388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c038c:
    // 0x4c038c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0390:
    // 0x4c0390: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x4c0390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4c0394:
    // 0x4c0394: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4c0398:
    if (ctx->pc == 0x4C0398u) {
        ctx->pc = 0x4C0398u;
            // 0x4c0398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C039Cu;
        goto label_4c039c;
    }
    ctx->pc = 0x4C0394u;
    {
        const bool branch_taken_0x4c0394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0394u;
            // 0x4c0398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0394) {
            ctx->pc = 0x4C03CCu;
            goto label_4c03cc;
        }
    }
    ctx->pc = 0x4C039Cu;
label_4c039c:
    // 0x4c039c: 0xc04008c  jal         func_100230
label_4c03a0:
    if (ctx->pc == 0x4C03A0u) {
        ctx->pc = 0x4C03A0u;
            // 0x4c03a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C03A4u;
        goto label_4c03a4;
    }
    ctx->pc = 0x4C039Cu;
    SET_GPR_U32(ctx, 31, 0x4C03A4u);
    ctx->pc = 0x4C03A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C039Cu;
            // 0x4c03a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03A4u; }
        if (ctx->pc != 0x4C03A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03A4u; }
        if (ctx->pc != 0x4C03A4u) { return; }
    }
    ctx->pc = 0x4C03A4u;
label_4c03a4:
    // 0x4c03a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4c03a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c03a8:
    // 0x4c03a8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4c03a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4c03ac:
    // 0x4c03ac: 0xc0407c0  jal         func_101F00
label_4c03b0:
    if (ctx->pc == 0x4C03B0u) {
        ctx->pc = 0x4C03B0u;
            // 0x4c03b0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4C03B4u;
        goto label_4c03b4;
    }
    ctx->pc = 0x4C03ACu;
    SET_GPR_U32(ctx, 31, 0x4C03B4u);
    ctx->pc = 0x4C03B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C03ACu;
            // 0x4c03b0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03B4u; }
        if (ctx->pc != 0x4C03B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03B4u; }
        if (ctx->pc != 0x4C03B4u) { return; }
    }
    ctx->pc = 0x4C03B4u;
label_4c03b4:
    // 0x4c03b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4c03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4c03b8:
    // 0x4c03b8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4c03b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4c03bc:
    // 0x4c03bc: 0xc0407c0  jal         func_101F00
label_4c03c0:
    if (ctx->pc == 0x4C03C0u) {
        ctx->pc = 0x4C03C0u;
            // 0x4c03c0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x4C03C4u;
        goto label_4c03c4;
    }
    ctx->pc = 0x4C03BCu;
    SET_GPR_U32(ctx, 31, 0x4C03C4u);
    ctx->pc = 0x4C03C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C03BCu;
            // 0x4c03c0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03C4u; }
        if (ctx->pc != 0x4C03C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03C4u; }
        if (ctx->pc != 0x4C03C4u) { return; }
    }
    ctx->pc = 0x4C03C4u;
label_4c03c4:
    // 0x4c03c4: 0xc0400a8  jal         func_1002A0
label_4c03c8:
    if (ctx->pc == 0x4C03C8u) {
        ctx->pc = 0x4C03C8u;
            // 0x4c03c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C03CCu;
        goto label_4c03cc;
    }
    ctx->pc = 0x4C03C4u;
    SET_GPR_U32(ctx, 31, 0x4C03CCu);
    ctx->pc = 0x4C03C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C03C4u;
            // 0x4c03c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03CCu; }
        if (ctx->pc != 0x4C03CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C03CCu; }
        if (ctx->pc != 0x4C03CCu) { return; }
    }
    ctx->pc = 0x4C03CCu;
label_4c03cc:
    // 0x4c03cc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4c03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4c03d0:
    // 0x4c03d0: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x4c03d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4c03d4:
    // 0x4c03d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c03d8:
    if (ctx->pc == 0x4C03D8u) {
        ctx->pc = 0x4C03D8u;
            // 0x4c03d8: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x4C03DCu;
        goto label_4c03dc;
    }
    ctx->pc = 0x4C03D4u;
    {
        const bool branch_taken_0x4c03d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c03d4) {
            ctx->pc = 0x4C03D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C03D4u;
            // 0x4c03d8: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C03F0u;
            goto label_4c03f0;
        }
    }
    ctx->pc = 0x4C03DCu;
label_4c03dc:
    // 0x4c03dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c03dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c03e0:
    // 0x4c03e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c03e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c03e4:
    // 0x4c03e4: 0x320f809  jalr        $t9
label_4c03e8:
    if (ctx->pc == 0x4C03E8u) {
        ctx->pc = 0x4C03E8u;
            // 0x4c03e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C03ECu;
        goto label_4c03ec;
    }
    ctx->pc = 0x4C03E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C03ECu);
        ctx->pc = 0x4C03E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C03E4u;
            // 0x4c03e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C03ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C03ECu; }
            if (ctx->pc != 0x4C03ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4C03ECu;
label_4c03ec:
    // 0x4c03ec: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x4c03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_4c03f0:
    // 0x4c03f0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4c03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4c03f4:
    // 0x4c03f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c03f8:
    if (ctx->pc == 0x4C03F8u) {
        ctx->pc = 0x4C03F8u;
            // 0x4c03f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4C03FCu;
        goto label_4c03fc;
    }
    ctx->pc = 0x4C03F4u;
    {
        const bool branch_taken_0x4c03f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c03f4) {
            ctx->pc = 0x4C03F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C03F4u;
            // 0x4c03f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0410u;
            goto label_4c0410;
        }
    }
    ctx->pc = 0x4C03FCu;
label_4c03fc:
    // 0x4c03fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c03fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0400:
    // 0x4c0400: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c0400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c0404:
    // 0x4c0404: 0x320f809  jalr        $t9
label_4c0408:
    if (ctx->pc == 0x4C0408u) {
        ctx->pc = 0x4C0408u;
            // 0x4c0408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C040Cu;
        goto label_4c040c;
    }
    ctx->pc = 0x4C0404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C040Cu);
        ctx->pc = 0x4C0408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0404u;
            // 0x4c0408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C040Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C040Cu; }
            if (ctx->pc != 0x4C040Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C040Cu;
label_4c040c:
    // 0x4c040c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4c040cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4c0410:
    // 0x4c0410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c0410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c0414:
    // 0x4c0414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c0414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0418:
    // 0x4c0418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c041c:
    // 0x4c041c: 0x3e00008  jr          $ra
label_4c0420:
    if (ctx->pc == 0x4C0420u) {
        ctx->pc = 0x4C0420u;
            // 0x4c0420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C0424u;
        goto label_4c0424;
    }
    ctx->pc = 0x4C041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C041Cu;
            // 0x4c0420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0424u;
label_4c0424:
    // 0x4c0424: 0x0  nop
    ctx->pc = 0x4c0424u;
    // NOP
label_4c0428:
    // 0x4c0428: 0x0  nop
    ctx->pc = 0x4c0428u;
    // NOP
label_4c042c:
    // 0x4c042c: 0x0  nop
    ctx->pc = 0x4c042cu;
    // NOP
label_4c0430:
    // 0x4c0430: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4c0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4c0434:
    // 0x4c0434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4c0438:
    // 0x4c0438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c043c:
    // 0x4c043c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c043cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0440:
    // 0x4c0440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c0444:
    // 0x4c0444: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4c0444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4c0448:
    // 0x4c0448: 0xc0892d0  jal         func_224B40
label_4c044c:
    if (ctx->pc == 0x4C044Cu) {
        ctx->pc = 0x4C044Cu;
            // 0x4c044c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C0450u;
        goto label_4c0450;
    }
    ctx->pc = 0x4C0448u;
    SET_GPR_U32(ctx, 31, 0x4C0450u);
    ctx->pc = 0x4C044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0448u;
            // 0x4c044c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0450u; }
        if (ctx->pc != 0x4C0450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0450u; }
        if (ctx->pc != 0x4C0450u) { return; }
    }
    ctx->pc = 0x4C0450u;
label_4c0450:
    // 0x4c0450: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c0450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c0454:
    // 0x4c0454: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0458:
    // 0x4c0458: 0x8c42a9e8  lw          $v0, -0x5618($v0)
    ctx->pc = 0x4c0458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945256)));
label_4c045c:
    // 0x4c045c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c0460:
    // 0x4c0460: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x4c0460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4c0464:
    // 0x4c0464: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x4c0464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4c0468:
    // 0x4c0468: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4c0468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4c046c:
    // 0x4c046c: 0xc0b6e68  jal         func_2DB9A0
label_4c0470:
    if (ctx->pc == 0x4C0470u) {
        ctx->pc = 0x4C0470u;
            // 0x4c0470: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4C0474u;
        goto label_4c0474;
    }
    ctx->pc = 0x4C046Cu;
    SET_GPR_U32(ctx, 31, 0x4C0474u);
    ctx->pc = 0x4C0470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C046Cu;
            // 0x4c0470: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0474u; }
        if (ctx->pc != 0x4C0474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0474u; }
        if (ctx->pc != 0x4C0474u) { return; }
    }
    ctx->pc = 0x4C0474u;
label_4c0474:
    // 0x4c0474: 0xc0b6dac  jal         func_2DB6B0
label_4c0478:
    if (ctx->pc == 0x4C0478u) {
        ctx->pc = 0x4C0478u;
            // 0x4c0478: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C047Cu;
        goto label_4c047c;
    }
    ctx->pc = 0x4C0474u;
    SET_GPR_U32(ctx, 31, 0x4C047Cu);
    ctx->pc = 0x4C0478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0474u;
            // 0x4c0478: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C047Cu; }
        if (ctx->pc != 0x4C047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C047Cu; }
        if (ctx->pc != 0x4C047Cu) { return; }
    }
    ctx->pc = 0x4C047Cu;
label_4c047c:
    // 0x4c047c: 0xc0cac94  jal         func_32B250
label_4c0480:
    if (ctx->pc == 0x4C0480u) {
        ctx->pc = 0x4C0480u;
            // 0x4c0480: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4C0484u;
        goto label_4c0484;
    }
    ctx->pc = 0x4C047Cu;
    SET_GPR_U32(ctx, 31, 0x4C0484u);
    ctx->pc = 0x4C0480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C047Cu;
            // 0x4c0480: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0484u; }
        if (ctx->pc != 0x4C0484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0484u; }
        if (ctx->pc != 0x4C0484u) { return; }
    }
    ctx->pc = 0x4C0484u;
label_4c0484:
    // 0x4c0484: 0xc0cac84  jal         func_32B210
label_4c0488:
    if (ctx->pc == 0x4C0488u) {
        ctx->pc = 0x4C0488u;
            // 0x4c0488: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C048Cu;
        goto label_4c048c;
    }
    ctx->pc = 0x4C0484u;
    SET_GPR_U32(ctx, 31, 0x4C048Cu);
    ctx->pc = 0x4C0488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0484u;
            // 0x4c0488: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C048Cu; }
        if (ctx->pc != 0x4C048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C048Cu; }
        if (ctx->pc != 0x4C048Cu) { return; }
    }
    ctx->pc = 0x4C048Cu;
label_4c048c:
    // 0x4c048c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4c048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4c0490:
    // 0x4c0490: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4c0490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4c0494:
    // 0x4c0494: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x4c0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c0498:
    // 0x4c0498: 0xc0a5a68  jal         func_2969A0
label_4c049c:
    if (ctx->pc == 0x4C049Cu) {
        ctx->pc = 0x4C049Cu;
            // 0x4c049c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C04A0u;
        goto label_4c04a0;
    }
    ctx->pc = 0x4C0498u;
    SET_GPR_U32(ctx, 31, 0x4C04A0u);
    ctx->pc = 0x4C049Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0498u;
            // 0x4c049c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C04A0u; }
        if (ctx->pc != 0x4C04A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C04A0u; }
        if (ctx->pc != 0x4C04A0u) { return; }
    }
    ctx->pc = 0x4C04A0u;
label_4c04a0:
    // 0x4c04a0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c04a4:
    // 0x4c04a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4c04a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c04a8:
    // 0x4c04a8: 0x8c44a9e8  lw          $a0, -0x5618($v0)
    ctx->pc = 0x4c04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945256)));
label_4c04ac:
    // 0x4c04ac: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x4c04acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c04b0:
    // 0x4c04b0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x4c04b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c04b4:
    // 0x4c04b4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4c04b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c04b8:
    // 0x4c04b8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4c04b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c04bc:
    // 0x4c04bc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4c04bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4c04c0:
    // 0x4c04c0: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x4c04c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4c04c4:
    // 0x4c04c4: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x4c04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_4c04c8:
    // 0x4c04c8: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x4c04c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_4c04cc:
    // 0x4c04cc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4c04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4c04d0:
    // 0x4c04d0: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x4c04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_4c04d4:
    // 0x4c04d4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c04d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c04d8:
    // 0x4c04d8: 0xc6490018  lwc1        $f9, 0x18($s2)
    ctx->pc = 0x4c04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_4c04dc:
    // 0x4c04dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c04e0:
    // 0x4c04e0: 0xc6480014  lwc1        $f8, 0x14($s2)
    ctx->pc = 0x4c04e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_4c04e4:
    // 0x4c04e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c04e8:
    // 0x4c04e8: 0xc6470010  lwc1        $f7, 0x10($s2)
    ctx->pc = 0x4c04e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4c04ec:
    // 0x4c04ec: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x4c04ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c04f0:
    // 0x4c04f0: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x4c04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c04f4:
    // 0x4c04f4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x4c04f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4c04f8:
    // 0x4c04f8: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4c04f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4c04fc:
    // 0x4c04fc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x4c04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0500:
    // 0x4c0500: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4c0500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4c0504:
    // 0x4c0504: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x4c0504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4c0508:
    // 0x4c0508: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4c0508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4c050c:
    // 0x4c050c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x4c050cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4c0510:
    // 0x4c0510: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4c0510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4c0514:
    // 0x4c0514: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x4c0514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4c0518:
    // 0x4c0518: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x4c0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c051c:
    // 0x4c051c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x4c051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0520:
    // 0x4c0520: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x4c0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0524:
    // 0x4c0524: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x4c0524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4c0528:
    // 0x4c0528: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x4c0528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4c052c:
    // 0x4c052c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x4c052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4c0530:
    // 0x4c0530: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x4c0530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0534:
    // 0x4c0534: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x4c0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0538:
    // 0x4c0538: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4c0538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c053c:
    // 0x4c053c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x4c053cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4c0540:
    // 0x4c0540: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x4c0540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4c0544:
    // 0x4c0544: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4c0544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4c0548:
    // 0x4c0548: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x4c0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c054c:
    // 0x4c054c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x4c054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c0550:
    // 0x4c0550: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x4c0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0554:
    // 0x4c0554: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x4c0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0558:
    // 0x4c0558: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4c0558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c055c:
    // 0x4c055c: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x4c055cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4c0560:
    // 0x4c0560: 0xe7a800d4  swc1        $f8, 0xD4($sp)
    ctx->pc = 0x4c0560u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4c0564:
    // 0x4c0564: 0xe7a900d8  swc1        $f9, 0xD8($sp)
    ctx->pc = 0x4c0564u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4c0568:
    // 0x4c0568: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x4c0568u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4c056c:
    // 0x4c056c: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x4c056cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4c0570:
    // 0x4c0570: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x4c0570u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4c0574:
    // 0x4c0574: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x4c0574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4c0578:
    // 0x4c0578: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4c0578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4c057c:
    // 0x4c057c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x4c057cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4c0580:
    // 0x4c0580: 0xc0a7a88  jal         func_29EA20
label_4c0584:
    if (ctx->pc == 0x4C0584u) {
        ctx->pc = 0x4C0584u;
            // 0x4c0584: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4C0588u;
        goto label_4c0588;
    }
    ctx->pc = 0x4C0580u;
    SET_GPR_U32(ctx, 31, 0x4C0588u);
    ctx->pc = 0x4C0584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0580u;
            // 0x4c0584: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0588u; }
        if (ctx->pc != 0x4C0588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0588u; }
        if (ctx->pc != 0x4C0588u) { return; }
    }
    ctx->pc = 0x4C0588u;
label_4c0588:
    // 0x4c0588: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4c0588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c058c:
    // 0x4c058c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c058cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0590:
    // 0x4c0590: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4c0594:
    if (ctx->pc == 0x4C0594u) {
        ctx->pc = 0x4C0594u;
            // 0x4c0594: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C0598u;
        goto label_4c0598;
    }
    ctx->pc = 0x4C0590u;
    {
        const bool branch_taken_0x4c0590 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0590u;
            // 0x4c0594: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0590) {
            ctx->pc = 0x4C05E0u;
            goto label_4c05e0;
        }
    }
    ctx->pc = 0x4C0598u;
label_4c0598:
    // 0x4c0598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c0598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c059c:
    // 0x4c059c: 0xc088ef4  jal         func_223BD0
label_4c05a0:
    if (ctx->pc == 0x4C05A0u) {
        ctx->pc = 0x4C05A0u;
            // 0x4c05a0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C05A4u;
        goto label_4c05a4;
    }
    ctx->pc = 0x4C059Cu;
    SET_GPR_U32(ctx, 31, 0x4C05A4u);
    ctx->pc = 0x4C05A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C059Cu;
            // 0x4c05a0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C05A4u; }
        if (ctx->pc != 0x4C05A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C05A4u; }
        if (ctx->pc != 0x4C05A4u) { return; }
    }
    ctx->pc = 0x4C05A4u;
label_4c05a4:
    // 0x4c05a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c05a8:
    // 0x4c05a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c05a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c05ac:
    // 0x4c05ac: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4c05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4c05b0:
    // 0x4c05b0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4c05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4c05b4:
    // 0x4c05b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c05b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c05b8:
    // 0x4c05b8: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x4c05b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_4c05bc:
    // 0x4c05bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c05c0:
    // 0x4c05c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c05c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c05c4:
    // 0x4c05c4: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x4c05c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_4c05c8:
    // 0x4c05c8: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x4c05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_4c05cc:
    // 0x4c05cc: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4c05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4c05d0:
    // 0x4c05d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c05d4:
    // 0x4c05d4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4c05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4c05d8:
    // 0x4c05d8: 0xc088b38  jal         func_222CE0
label_4c05dc:
    if (ctx->pc == 0x4C05DCu) {
        ctx->pc = 0x4C05DCu;
            // 0x4c05dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C05E0u;
        goto label_4c05e0;
    }
    ctx->pc = 0x4C05D8u;
    SET_GPR_U32(ctx, 31, 0x4C05E0u);
    ctx->pc = 0x4C05DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C05D8u;
            // 0x4c05dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C05E0u; }
        if (ctx->pc != 0x4C05E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C05E0u; }
        if (ctx->pc != 0x4C05E0u) { return; }
    }
    ctx->pc = 0x4C05E0u;
label_4c05e0:
    // 0x4c05e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4c05e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c05e4:
    // 0x4c05e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c05e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c05e8:
    // 0x4c05e8: 0xc08c164  jal         func_230590
label_4c05ec:
    if (ctx->pc == 0x4C05ECu) {
        ctx->pc = 0x4C05ECu;
            // 0x4c05ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C05F0u;
        goto label_4c05f0;
    }
    ctx->pc = 0x4C05E8u;
    SET_GPR_U32(ctx, 31, 0x4C05F0u);
    ctx->pc = 0x4C05ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C05E8u;
            // 0x4c05ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C05F0u; }
        if (ctx->pc != 0x4C05F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C05F0u; }
        if (ctx->pc != 0x4C05F0u) { return; }
    }
    ctx->pc = 0x4C05F0u;
label_4c05f0:
    // 0x4c05f0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4c05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4c05f4:
    // 0x4c05f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c05f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c05f8:
    // 0x4c05f8: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x4c05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_4c05fc:
    // 0x4c05fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c0600:
    // 0x4c0600: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x4c0600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_4c0604:
    // 0x4c0604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c0604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c0608:
    // 0x4c0608: 0xc08914c  jal         func_224530
label_4c060c:
    if (ctx->pc == 0x4C060Cu) {
        ctx->pc = 0x4C060Cu;
            // 0x4c060c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0610u;
        goto label_4c0610;
    }
    ctx->pc = 0x4C0608u;
    SET_GPR_U32(ctx, 31, 0x4C0610u);
    ctx->pc = 0x4C060Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0608u;
            // 0x4c060c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0610u; }
        if (ctx->pc != 0x4C0610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0610u; }
        if (ctx->pc != 0x4C0610u) { return; }
    }
    ctx->pc = 0x4C0610u;
label_4c0610:
    // 0x4c0610: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4c0610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4c0614:
    // 0x4c0614: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4c0614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4c0618:
    // 0x4c0618: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x4c0618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4c061c:
    // 0x4c061c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4c061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4c0620:
    // 0x4c0620: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x4c0620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_4c0624:
    // 0x4c0624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c0624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c0628:
    // 0x4c0628: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x4c0628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_4c062c:
    // 0x4c062c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4c062cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c0630:
    // 0x4c0630: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4c0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0634:
    // 0x4c0634: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4c0634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c0638:
    // 0x4c0638: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4c0638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c063c:
    // 0x4c063c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4c063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0640:
    // 0x4c0640: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4c0640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4c0644:
    // 0x4c0644: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4c0644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4c0648:
    // 0x4c0648: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4c0648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4c064c:
    // 0x4c064c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4c064cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4c0650:
    // 0x4c0650: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4c0650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c0654:
    // 0x4c0654: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4c0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0658:
    // 0x4c0658: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4c0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c065c:
    // 0x4c065c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4c065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0660:
    // 0x4c0660: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4c0660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c0664:
    // 0x4c0664: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c0664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c0668:
    // 0x4c0668: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4c0668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c066c:
    // 0x4c066c: 0xc0892b0  jal         func_224AC0
label_4c0670:
    if (ctx->pc == 0x4C0670u) {
        ctx->pc = 0x4C0670u;
            // 0x4c0670: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4C0674u;
        goto label_4c0674;
    }
    ctx->pc = 0x4C066Cu;
    SET_GPR_U32(ctx, 31, 0x4C0674u);
    ctx->pc = 0x4C0670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C066Cu;
            // 0x4c0670: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0674u; }
        if (ctx->pc != 0x4C0674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0674u; }
        if (ctx->pc != 0x4C0674u) { return; }
    }
    ctx->pc = 0x4C0674u;
label_4c0674:
    // 0x4c0674: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4c0674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4c0678:
    // 0x4c0678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c0678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c067c:
    // 0x4c067c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4c067cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4c0680:
    // 0x4c0680: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4c0680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c0684:
    // 0x4c0684: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4c0684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4c0688:
    // 0x4c0688: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4c0688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4c068c:
    // 0x4c068c: 0xc0891d8  jal         func_224760
label_4c0690:
    if (ctx->pc == 0x4C0690u) {
        ctx->pc = 0x4C0690u;
            // 0x4c0690: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4C0694u;
        goto label_4c0694;
    }
    ctx->pc = 0x4C068Cu;
    SET_GPR_U32(ctx, 31, 0x4C0694u);
    ctx->pc = 0x4C0690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C068Cu;
            // 0x4c0690: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0694u; }
        if (ctx->pc != 0x4C0694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0694u; }
        if (ctx->pc != 0x4C0694u) { return; }
    }
    ctx->pc = 0x4C0694u;
label_4c0694:
    // 0x4c0694: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4c0694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4c0698:
    // 0x4c0698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c069c:
    // 0x4c069c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c06a0:
    // 0x4c06a0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4c06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c06a4:
    // 0x4c06a4: 0xc0a7a88  jal         func_29EA20
label_4c06a8:
    if (ctx->pc == 0x4C06A8u) {
        ctx->pc = 0x4C06A8u;
            // 0x4c06a8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4C06ACu;
        goto label_4c06ac;
    }
    ctx->pc = 0x4C06A4u;
    SET_GPR_U32(ctx, 31, 0x4C06ACu);
    ctx->pc = 0x4C06A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C06A4u;
            // 0x4c06a8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06ACu; }
        if (ctx->pc != 0x4C06ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06ACu; }
        if (ctx->pc != 0x4C06ACu) { return; }
    }
    ctx->pc = 0x4C06ACu;
label_4c06ac:
    // 0x4c06ac: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4c06acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c06b0:
    // 0x4c06b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c06b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c06b4:
    // 0x4c06b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4c06b8:
    if (ctx->pc == 0x4C06B8u) {
        ctx->pc = 0x4C06B8u;
            // 0x4c06b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C06BCu;
        goto label_4c06bc;
    }
    ctx->pc = 0x4C06B4u;
    {
        const bool branch_taken_0x4c06b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C06B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C06B4u;
            // 0x4c06b8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c06b4) {
            ctx->pc = 0x4C06D8u;
            goto label_4c06d8;
        }
    }
    ctx->pc = 0x4C06BCu;
label_4c06bc:
    // 0x4c06bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c06bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c06c0:
    // 0x4c06c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c06c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c06c4:
    // 0x4c06c4: 0xc0869d0  jal         func_21A740
label_4c06c8:
    if (ctx->pc == 0x4C06C8u) {
        ctx->pc = 0x4C06C8u;
            // 0x4c06c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C06CCu;
        goto label_4c06cc;
    }
    ctx->pc = 0x4C06C4u;
    SET_GPR_U32(ctx, 31, 0x4C06CCu);
    ctx->pc = 0x4C06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C06C4u;
            // 0x4c06c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06CCu; }
        if (ctx->pc != 0x4C06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06CCu; }
        if (ctx->pc != 0x4C06CCu) { return; }
    }
    ctx->pc = 0x4C06CCu;
label_4c06cc:
    // 0x4c06cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c06d0:
    // 0x4c06d0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4c06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4c06d4:
    // 0x4c06d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4c06d8:
    // 0x4c06d8: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x4c06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_4c06dc:
    // 0x4c06dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c06e0:
    // 0x4c06e0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c06e4:
    // 0x4c06e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c06e8:
    // 0x4c06e8: 0xc08c650  jal         func_231940
label_4c06ec:
    if (ctx->pc == 0x4C06ECu) {
        ctx->pc = 0x4C06ECu;
            // 0x4c06ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C06F0u;
        goto label_4c06f0;
    }
    ctx->pc = 0x4C06E8u;
    SET_GPR_U32(ctx, 31, 0x4C06F0u);
    ctx->pc = 0x4C06ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C06E8u;
            // 0x4c06ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06F0u; }
        if (ctx->pc != 0x4C06F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06F0u; }
        if (ctx->pc != 0x4C06F0u) { return; }
    }
    ctx->pc = 0x4C06F0u;
label_4c06f0:
    // 0x4c06f0: 0xc040180  jal         func_100600
label_4c06f4:
    if (ctx->pc == 0x4C06F4u) {
        ctx->pc = 0x4C06F4u;
            // 0x4c06f4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x4C06F8u;
        goto label_4c06f8;
    }
    ctx->pc = 0x4C06F0u;
    SET_GPR_U32(ctx, 31, 0x4C06F8u);
    ctx->pc = 0x4C06F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C06F0u;
            // 0x4c06f4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06F8u; }
        if (ctx->pc != 0x4C06F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C06F8u; }
        if (ctx->pc != 0x4C06F8u) { return; }
    }
    ctx->pc = 0x4C06F8u;
label_4c06f8:
    // 0x4c06f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c06f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c06fc:
    // 0x4c06fc: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_4c0700:
    if (ctx->pc == 0x4C0700u) {
        ctx->pc = 0x4C0704u;
        goto label_4c0704;
    }
    ctx->pc = 0x4C06FCu;
    {
        const bool branch_taken_0x4c06fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c06fc) {
            ctx->pc = 0x4C0780u;
            goto label_4c0780;
        }
    }
    ctx->pc = 0x4C0704u;
label_4c0704:
    // 0x4c0704: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4c0704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4c0708:
    // 0x4c0708: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4c0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c070c:
    // 0x4c070c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4c070cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4c0710:
    // 0x4c0710: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x4c0710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4c0714:
    // 0x4c0714: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4c0714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4c0718:
    // 0x4c0718: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4c0718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4c071c:
    // 0x4c071c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4c071cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4c0720:
    // 0x4c0720: 0xc040138  jal         func_1004E0
label_4c0724:
    if (ctx->pc == 0x4C0724u) {
        ctx->pc = 0x4C0724u;
            // 0x4c0724: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4C0728u;
        goto label_4c0728;
    }
    ctx->pc = 0x4C0720u;
    SET_GPR_U32(ctx, 31, 0x4C0728u);
    ctx->pc = 0x4C0724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0720u;
            // 0x4c0724: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0728u; }
        if (ctx->pc != 0x4C0728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0728u; }
        if (ctx->pc != 0x4C0728u) { return; }
    }
    ctx->pc = 0x4C0728u;
label_4c0728:
    // 0x4c0728: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c0728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4c072c:
    // 0x4c072c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c072cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0730:
    // 0x4c0730: 0xc040138  jal         func_1004E0
label_4c0734:
    if (ctx->pc == 0x4C0734u) {
        ctx->pc = 0x4C0734u;
            // 0x4c0734: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->pc = 0x4C0738u;
        goto label_4c0738;
    }
    ctx->pc = 0x4C0730u;
    SET_GPR_U32(ctx, 31, 0x4C0738u);
    ctx->pc = 0x4C0734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0730u;
            // 0x4c0734: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0738u; }
        if (ctx->pc != 0x4C0738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0738u; }
        if (ctx->pc != 0x4C0738u) { return; }
    }
    ctx->pc = 0x4C0738u;
label_4c0738:
    // 0x4c0738: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x4c0738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_4c073c:
    // 0x4c073c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x4c073cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_4c0740:
    // 0x4c0740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c0740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0744:
    // 0x4c0744: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x4c0744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_4c0748:
    // 0x4c0748: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x4c0748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_4c074c:
    // 0x4c074c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4c074cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4c0750:
    // 0x4c0750: 0xc040840  jal         func_102100
label_4c0754:
    if (ctx->pc == 0x4C0754u) {
        ctx->pc = 0x4C0754u;
            // 0x4c0754: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4C0758u;
        goto label_4c0758;
    }
    ctx->pc = 0x4C0750u;
    SET_GPR_U32(ctx, 31, 0x4C0758u);
    ctx->pc = 0x4C0754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0750u;
            // 0x4c0754: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0758u; }
        if (ctx->pc != 0x4C0758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0758u; }
        if (ctx->pc != 0x4C0758u) { return; }
    }
    ctx->pc = 0x4C0758u;
label_4c0758:
    // 0x4c0758: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c0758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c075c:
    // 0x4c075c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4c075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0760:
    // 0x4c0760: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c0764:
    // 0x4c0764: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c0764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c0768:
    // 0x4c0768: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x4c0768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_4c076c:
    // 0x4c076c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x4c076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_4c0770:
    // 0x4c0770: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4c0770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4c0774:
    // 0x4c0774: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4c0778:
    if (ctx->pc == 0x4C0778u) {
        ctx->pc = 0x4C077Cu;
        goto label_4c077c;
    }
    ctx->pc = 0x4C0774u;
    {
        const bool branch_taken_0x4c0774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c0774) {
            ctx->pc = 0x4C0760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c0760;
        }
    }
    ctx->pc = 0x4C077Cu;
label_4c077c:
    // 0x4c077c: 0x0  nop
    ctx->pc = 0x4c077cu;
    // NOP
label_4c0780:
    // 0x4c0780: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x4c0780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_4c0784:
    // 0x4c0784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4c0784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c0788:
    // 0x4c0788: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4c0788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4c078c:
    // 0x4c078c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c078cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c0790:
    // 0x4c0790: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c0790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c0794:
    // 0x4c0794: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c0794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0798:
    // 0x4c0798: 0xc0e7d2c  jal         func_39F4B0
label_4c079c:
    if (ctx->pc == 0x4C079Cu) {
        ctx->pc = 0x4C079Cu;
            // 0x4c079c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C07A0u;
        goto label_4c07a0;
    }
    ctx->pc = 0x4C0798u;
    SET_GPR_U32(ctx, 31, 0x4C07A0u);
    ctx->pc = 0x4C079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0798u;
            // 0x4c079c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C07A0u; }
        if (ctx->pc != 0x4C07A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C07A0u; }
        if (ctx->pc != 0x4C07A0u) { return; }
    }
    ctx->pc = 0x4C07A0u;
label_4c07a0:
    // 0x4c07a0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4c07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4c07a4:
    // 0x4c07a4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4c07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4c07a8:
    // 0x4c07a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c07a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c07ac:
    // 0x4c07ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4c07acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c07b0:
    // 0x4c07b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c07b4:
    // 0x4c07b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c07b8:
    // 0x4c07b8: 0xc0e7d2c  jal         func_39F4B0
label_4c07bc:
    if (ctx->pc == 0x4C07BCu) {
        ctx->pc = 0x4C07BCu;
            // 0x4c07bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C07C0u;
        goto label_4c07c0;
    }
    ctx->pc = 0x4C07B8u;
    SET_GPR_U32(ctx, 31, 0x4C07C0u);
    ctx->pc = 0x4C07BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C07B8u;
            // 0x4c07bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C07C0u; }
        if (ctx->pc != 0x4C07C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C07C0u; }
        if (ctx->pc != 0x4C07C0u) { return; }
    }
    ctx->pc = 0x4C07C0u;
label_4c07c0:
    // 0x4c07c0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4c07c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4c07c4:
    // 0x4c07c4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4c07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4c07c8:
    // 0x4c07c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c07c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c07cc:
    // 0x4c07cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4c07ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c07d0:
    // 0x4c07d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c07d4:
    // 0x4c07d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4c07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4c07d8:
    // 0x4c07d8: 0xc0e7d2c  jal         func_39F4B0
label_4c07dc:
    if (ctx->pc == 0x4C07DCu) {
        ctx->pc = 0x4C07DCu;
            // 0x4c07dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C07E0u;
        goto label_4c07e0;
    }
    ctx->pc = 0x4C07D8u;
    SET_GPR_U32(ctx, 31, 0x4C07E0u);
    ctx->pc = 0x4C07DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C07D8u;
            // 0x4c07dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C07E0u; }
        if (ctx->pc != 0x4C07E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C07E0u; }
        if (ctx->pc != 0x4C07E0u) { return; }
    }
    ctx->pc = 0x4C07E0u;
label_4c07e0:
    // 0x4c07e0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4c07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4c07e4:
    // 0x4c07e4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4c07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4c07e8:
    // 0x4c07e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c07e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c07ec:
    // 0x4c07ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4c07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c07f0:
    // 0x4c07f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c07f4:
    // 0x4c07f4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4c07f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4c07f8:
    // 0x4c07f8: 0xc0e7d2c  jal         func_39F4B0
label_4c07fc:
    if (ctx->pc == 0x4C07FCu) {
        ctx->pc = 0x4C07FCu;
            // 0x4c07fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0800u;
        goto label_4c0800;
    }
    ctx->pc = 0x4C07F8u;
    SET_GPR_U32(ctx, 31, 0x4C0800u);
    ctx->pc = 0x4C07FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C07F8u;
            // 0x4c07fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0800u; }
        if (ctx->pc != 0x4C0800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0800u; }
        if (ctx->pc != 0x4C0800u) { return; }
    }
    ctx->pc = 0x4C0800u;
label_4c0800:
    // 0x4c0800: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x4c0800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4c0804:
    // 0x4c0804: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4c0804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4c0808:
    // 0x4c0808: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c0808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c080c:
    // 0x4c080c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c0810:
    // 0x4c0810: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c0810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0814:
    // 0x4c0814: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x4c0814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4c0818:
    // 0x4c0818: 0xc0e7d2c  jal         func_39F4B0
label_4c081c:
    if (ctx->pc == 0x4C081Cu) {
        ctx->pc = 0x4C081Cu;
            // 0x4c081c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0820u;
        goto label_4c0820;
    }
    ctx->pc = 0x4C0818u;
    SET_GPR_U32(ctx, 31, 0x4C0820u);
    ctx->pc = 0x4C081Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0818u;
            // 0x4c081c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0820u; }
        if (ctx->pc != 0x4C0820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0820u; }
        if (ctx->pc != 0x4C0820u) { return; }
    }
    ctx->pc = 0x4C0820u;
label_4c0820:
    // 0x4c0820: 0x8e4700b0  lw          $a3, 0xB0($s2)
    ctx->pc = 0x4c0820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4c0824:
    // 0x4c0824: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x4c0824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4c0828:
    // 0x4c0828: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c0828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c082c:
    // 0x4c082c: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x4c082cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_4c0830:
    // 0x4c0830: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x4c0830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_4c0834:
    // 0x4c0834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c0834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c0838:
    // 0x4c0838: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4c0838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_4c083c:
    // 0x4c083c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x4c083cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_4c0840:
    // 0x4c0840: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4c0840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c0844:
    // 0x4c0844: 0xae4700b0  sw          $a3, 0xB0($s2)
    ctx->pc = 0x4c0844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 7));
label_4c0848:
    // 0x4c0848: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x4c0848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_4c084c:
    // 0x4c084c: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x4c084cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_4c0850:
    // 0x4c0850: 0xae450078  sw          $a1, 0x78($s2)
    ctx->pc = 0x4c0850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 5));
label_4c0854:
    // 0x4c0854: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x4c0854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_4c0858:
    // 0x4c0858: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x4c0858u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
label_4c085c:
    // 0x4c085c: 0xa2400065  sb          $zero, 0x65($s2)
    ctx->pc = 0x4c085cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 0));
label_4c0860:
    // 0x4c0860: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x4c0860u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_4c0864:
    // 0x4c0864: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x4c0864u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_4c0868:
    // 0x4c0868: 0xa242006a  sb          $v0, 0x6A($s2)
    ctx->pc = 0x4c0868u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
label_4c086c:
    // 0x4c086c: 0xc040180  jal         func_100600
label_4c0870:
    if (ctx->pc == 0x4C0870u) {
        ctx->pc = 0x4C0870u;
            // 0x4c0870: 0xa240006b  sb          $zero, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4C0874u;
        goto label_4c0874;
    }
    ctx->pc = 0x4C086Cu;
    SET_GPR_U32(ctx, 31, 0x4C0874u);
    ctx->pc = 0x4C0870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C086Cu;
            // 0x4c0870: 0xa240006b  sb          $zero, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0874u; }
        if (ctx->pc != 0x4C0874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0874u; }
        if (ctx->pc != 0x4C0874u) { return; }
    }
    ctx->pc = 0x4C0874u;
label_4c0874:
    // 0x4c0874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c0874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c0878:
    // 0x4c0878: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4c087c:
    if (ctx->pc == 0x4C087Cu) {
        ctx->pc = 0x4C087Cu;
            // 0x4c087c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4C0880u;
        goto label_4c0880;
    }
    ctx->pc = 0x4C0878u;
    {
        const bool branch_taken_0x4c0878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0878) {
            ctx->pc = 0x4C087Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0878u;
            // 0x4c087c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C08B8u;
            goto label_4c08b8;
        }
    }
    ctx->pc = 0x4C0880u;
label_4c0880:
    // 0x4c0880: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c0880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c0884:
    // 0x4c0884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c0888:
    // 0x4c0888: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4c0888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4c088c:
    // 0x4c088c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4c088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4c0890:
    // 0x4c0890: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c0890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c0894:
    // 0x4c0894: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4c0894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4c0898:
    // 0x4c0898: 0xc040138  jal         func_1004E0
label_4c089c:
    if (ctx->pc == 0x4C089Cu) {
        ctx->pc = 0x4C089Cu;
            // 0x4c089c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C08A0u;
        goto label_4c08a0;
    }
    ctx->pc = 0x4C0898u;
    SET_GPR_U32(ctx, 31, 0x4C08A0u);
    ctx->pc = 0x4C089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0898u;
            // 0x4c089c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C08A0u; }
        if (ctx->pc != 0x4C08A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C08A0u; }
        if (ctx->pc != 0x4C08A0u) { return; }
    }
    ctx->pc = 0x4C08A0u;
label_4c08a0:
    // 0x4c08a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c08a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c08a4:
    // 0x4c08a4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4c08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4c08a8:
    // 0x4c08a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c08a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c08ac:
    // 0x4c08ac: 0xc04a576  jal         func_1295D8
label_4c08b0:
    if (ctx->pc == 0x4C08B0u) {
        ctx->pc = 0x4C08B0u;
            // 0x4c08b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4C08B4u;
        goto label_4c08b4;
    }
    ctx->pc = 0x4C08ACu;
    SET_GPR_U32(ctx, 31, 0x4C08B4u);
    ctx->pc = 0x4C08B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C08ACu;
            // 0x4c08b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C08B4u; }
        if (ctx->pc != 0x4C08B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C08B4u; }
        if (ctx->pc != 0x4C08B4u) { return; }
    }
    ctx->pc = 0x4C08B4u;
label_4c08b4:
    // 0x4c08b4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4c08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4c08b8:
    // 0x4c08b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c08b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c08bc:
    // 0x4c08bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4c08bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4c08c0:
    // 0x4c08c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c08c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c08c4:
    // 0x4c08c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c08c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c08c8:
    // 0x4c08c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c08c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c08cc:
    // 0x4c08cc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4c08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4c08d0:
    // 0x4c08d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c08d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c08d4:
    // 0x4c08d4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4c08d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c08d8:
    // 0x4c08d8: 0x34461aae  ori         $a2, $v0, 0x1AAE
    ctx->pc = 0x4c08d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6830);
label_4c08dc:
    // 0x4c08dc: 0xc122cd8  jal         func_48B360
label_4c08e0:
    if (ctx->pc == 0x4C08E0u) {
        ctx->pc = 0x4C08E0u;
            // 0x4c08e0: 0xae5000d4  sw          $s0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x4C08E4u;
        goto label_4c08e4;
    }
    ctx->pc = 0x4C08DCu;
    SET_GPR_U32(ctx, 31, 0x4C08E4u);
    ctx->pc = 0x4C08E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C08DCu;
            // 0x4c08e0: 0xae5000d4  sw          $s0, 0xD4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C08E4u; }
        if (ctx->pc != 0x4C08E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C08E4u; }
        if (ctx->pc != 0x4C08E4u) { return; }
    }
    ctx->pc = 0x4C08E4u;
label_4c08e4:
    // 0x4c08e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c08e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c08e8:
    // 0x4c08e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c08e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c08ec:
    // 0x4c08ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c08ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c08f0:
    // 0x4c08f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c08f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c08f4:
    // 0x4c08f4: 0x3e00008  jr          $ra
label_4c08f8:
    if (ctx->pc == 0x4C08F8u) {
        ctx->pc = 0x4C08F8u;
            // 0x4c08f8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4C08FCu;
        goto label_4c08fc;
    }
    ctx->pc = 0x4C08F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C08F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C08F4u;
            // 0x4c08f8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C08FCu;
label_4c08fc:
    // 0x4c08fc: 0x0  nop
    ctx->pc = 0x4c08fcu;
    // NOP
label_4c0900:
    // 0x4c0900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c0904:
    // 0x4c0904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c0908:
    // 0x4c0908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c090c:
    // 0x4c090c: 0xc0aeebc  jal         func_2BBAF0
label_4c0910:
    if (ctx->pc == 0x4C0910u) {
        ctx->pc = 0x4C0910u;
            // 0x4c0910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0914u;
        goto label_4c0914;
    }
    ctx->pc = 0x4C090Cu;
    SET_GPR_U32(ctx, 31, 0x4C0914u);
    ctx->pc = 0x4C0910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C090Cu;
            // 0x4c0910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0914u; }
        if (ctx->pc != 0x4C0914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0914u; }
        if (ctx->pc != 0x4C0914u) { return; }
    }
    ctx->pc = 0x4C0914u;
label_4c0914:
    // 0x4c0914: 0xc0aeeb4  jal         func_2BBAD0
label_4c0918:
    if (ctx->pc == 0x4C0918u) {
        ctx->pc = 0x4C0918u;
            // 0x4c0918: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4C091Cu;
        goto label_4c091c;
    }
    ctx->pc = 0x4C0914u;
    SET_GPR_U32(ctx, 31, 0x4C091Cu);
    ctx->pc = 0x4C0918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0914u;
            // 0x4c0918: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C091Cu; }
        if (ctx->pc != 0x4C091Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C091Cu; }
        if (ctx->pc != 0x4C091Cu) { return; }
    }
    ctx->pc = 0x4C091Cu;
label_4c091c:
    // 0x4c091c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c0920:
    // 0x4c0920: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c0920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c0924:
    // 0x4c0924: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4c0924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4c0928:
    // 0x4c0928: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4c0928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4c092c:
    // 0x4c092c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c092cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c0930:
    // 0x4c0930: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4c0930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4c0934:
    // 0x4c0934: 0xc0aeea4  jal         func_2BBA90
label_4c0938:
    if (ctx->pc == 0x4C0938u) {
        ctx->pc = 0x4C0938u;
            // 0x4c0938: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4C093Cu;
        goto label_4c093c;
    }
    ctx->pc = 0x4C0934u;
    SET_GPR_U32(ctx, 31, 0x4C093Cu);
    ctx->pc = 0x4C0938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0934u;
            // 0x4c0938: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C093Cu; }
        if (ctx->pc != 0x4C093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C093Cu; }
        if (ctx->pc != 0x4C093Cu) { return; }
    }
    ctx->pc = 0x4C093Cu;
label_4c093c:
    // 0x4c093c: 0xc0aee8c  jal         func_2BBA30
label_4c0940:
    if (ctx->pc == 0x4C0940u) {
        ctx->pc = 0x4C0940u;
            // 0x4c0940: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4C0944u;
        goto label_4c0944;
    }
    ctx->pc = 0x4C093Cu;
    SET_GPR_U32(ctx, 31, 0x4C0944u);
    ctx->pc = 0x4C0940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C093Cu;
            // 0x4c0940: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0944u; }
        if (ctx->pc != 0x4C0944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0944u; }
        if (ctx->pc != 0x4C0944u) { return; }
    }
    ctx->pc = 0x4C0944u;
label_4c0944:
    // 0x4c0944: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4c0944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4c0948:
    // 0x4c0948: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4c0948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4c094c:
    // 0x4c094c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4c094cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4c0950:
    // 0x4c0950: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4c0950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4c0954:
    // 0x4c0954: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4c0954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4c0958:
    // 0x4c0958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c0958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c095c:
    // 0x4c095c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4c095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4c0960:
    // 0x4c0960: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4c0960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c0964:
    // 0x4c0964: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4c0964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4c0968:
    // 0x4c0968: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4c0968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4c096c:
    // 0x4c096c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4c096cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4c0970:
    // 0x4c0970: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4c0970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4c0974:
    // 0x4c0974: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4c0974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4c0978:
    // 0x4c0978: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4c0978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4c097c:
    // 0x4c097c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4c097cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4c0980:
    // 0x4c0980: 0xc0775b8  jal         func_1DD6E0
label_4c0984:
    if (ctx->pc == 0x4C0984u) {
        ctx->pc = 0x4C0984u;
            // 0x4c0984: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C0988u;
        goto label_4c0988;
    }
    ctx->pc = 0x4C0980u;
    SET_GPR_U32(ctx, 31, 0x4C0988u);
    ctx->pc = 0x4C0984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0980u;
            // 0x4c0984: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0988u; }
        if (ctx->pc != 0x4C0988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0988u; }
        if (ctx->pc != 0x4C0988u) { return; }
    }
    ctx->pc = 0x4C0988u;
label_4c0988:
    // 0x4c0988: 0xc077314  jal         func_1DCC50
label_4c098c:
    if (ctx->pc == 0x4C098Cu) {
        ctx->pc = 0x4C098Cu;
            // 0x4c098c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4C0990u;
        goto label_4c0990;
    }
    ctx->pc = 0x4C0988u;
    SET_GPR_U32(ctx, 31, 0x4C0990u);
    ctx->pc = 0x4C098Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0988u;
            // 0x4c098c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0990u; }
        if (ctx->pc != 0x4C0990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0990u; }
        if (ctx->pc != 0x4C0990u) { return; }
    }
    ctx->pc = 0x4C0990u;
label_4c0990:
    // 0x4c0990: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4c0990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4c0994:
    // 0x4c0994: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4c0994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4c0998:
    // 0x4c0998: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4c0998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4c099c:
    // 0x4c099c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4c099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c09a0:
    // 0x4c09a0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c09a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c09a4:
    // 0x4c09a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c09a8:
    // 0x4c09a8: 0x246311f0  addiu       $v1, $v1, 0x11F0
    ctx->pc = 0x4c09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4592));
label_4c09ac:
    // 0x4c09ac: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4c09acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4c09b0:
    // 0x4c09b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c09b4:
    // 0x4c09b4: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x4c09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
label_4c09b8:
    // 0x4c09b8: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4c09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_4c09bc:
    // 0x4c09bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c09c0:
    // 0x4c09c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c09c4:
    // 0x4c09c4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4c09c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4c09c8:
    // 0x4c09c8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4c09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4c09cc:
    // 0x4c09cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c09ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c09d0:
    // 0x4c09d0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4c09d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4c09d4:
    // 0x4c09d4: 0x320f809  jalr        $t9
label_4c09d8:
    if (ctx->pc == 0x4C09D8u) {
        ctx->pc = 0x4C09D8u;
            // 0x4c09d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C09DCu;
        goto label_4c09dc;
    }
    ctx->pc = 0x4C09D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C09DCu);
        ctx->pc = 0x4C09D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C09D4u;
            // 0x4c09d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C09DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C09DCu; }
            if (ctx->pc != 0x4C09DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4C09DCu;
label_4c09dc:
    // 0x4c09dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c09dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c09e0:
    // 0x4c09e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c09e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c09e4:
    // 0x4c09e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c09e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c09e8:
    // 0x4c09e8: 0x3e00008  jr          $ra
label_4c09ec:
    if (ctx->pc == 0x4C09ECu) {
        ctx->pc = 0x4C09ECu;
            // 0x4c09ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C09F0u;
        goto label_4c09f0;
    }
    ctx->pc = 0x4C09E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C09ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C09E8u;
            // 0x4c09ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C09F0u;
label_4c09f0:
    // 0x4c09f0: 0x3e00008  jr          $ra
label_4c09f4:
    if (ctx->pc == 0x4C09F4u) {
        ctx->pc = 0x4C09F8u;
        goto label_4c09f8;
    }
    ctx->pc = 0x4C09F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C09F8u;
label_4c09f8:
    // 0x4c09f8: 0x0  nop
    ctx->pc = 0x4c09f8u;
    // NOP
label_4c09fc:
    // 0x4c09fc: 0x0  nop
    ctx->pc = 0x4c09fcu;
    // NOP
label_4c0a00:
    // 0x4c0a00: 0x3e00008  jr          $ra
label_4c0a04:
    if (ctx->pc == 0x4C0A04u) {
        ctx->pc = 0x4C0A04u;
            // 0x4c0a04: 0x24026d88  addiu       $v0, $zero, 0x6D88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28040));
        ctx->pc = 0x4C0A08u;
        goto label_4c0a08;
    }
    ctx->pc = 0x4C0A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0A00u;
            // 0x4c0a04: 0x24026d88  addiu       $v0, $zero, 0x6D88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0A08u;
label_4c0a08:
    // 0x4c0a08: 0x0  nop
    ctx->pc = 0x4c0a08u;
    // NOP
label_4c0a0c:
    // 0x4c0a0c: 0x0  nop
    ctx->pc = 0x4c0a0cu;
    // NOP
label_4c0a10:
    // 0x4c0a10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c0a14:
    // 0x4c0a14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c0a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c0a18:
    // 0x4c0a18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c0a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c0a1c:
    // 0x4c0a1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c0a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c0a20:
    // 0x4c0a20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c0a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a24:
    // 0x4c0a24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c0a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c0a28:
    // 0x4c0a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c0a2c:
    // 0x4c0a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0a30:
    // 0x4c0a30: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4c0a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c0a34:
    // 0x4c0a34: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4c0a38:
    if (ctx->pc == 0x4C0A38u) {
        ctx->pc = 0x4C0A38u;
            // 0x4c0a38: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0A3Cu;
        goto label_4c0a3c;
    }
    ctx->pc = 0x4C0A34u;
    {
        const bool branch_taken_0x4c0a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0A34u;
            // 0x4c0a38: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0a34) {
            ctx->pc = 0x4C0A78u;
            goto label_4c0a78;
        }
    }
    ctx->pc = 0x4C0A3Cu;
label_4c0a3c:
    // 0x4c0a3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c0a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a40:
    // 0x4c0a40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c0a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a44:
    // 0x4c0a44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c0a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a48:
    // 0x4c0a48: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4c0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4c0a4c:
    // 0x4c0a4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c0a50:
    // 0x4c0a50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c0a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0a54:
    // 0x4c0a54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c0a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0a58:
    // 0x4c0a58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c0a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c0a5c:
    // 0x4c0a5c: 0x320f809  jalr        $t9
label_4c0a60:
    if (ctx->pc == 0x4C0A60u) {
        ctx->pc = 0x4C0A64u;
        goto label_4c0a64;
    }
    ctx->pc = 0x4C0A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C0A64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C0A64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C0A64u; }
            if (ctx->pc != 0x4C0A64u) { return; }
        }
        }
    }
    ctx->pc = 0x4C0A64u;
label_4c0a64:
    // 0x4c0a64: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4c0a64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4c0a68:
    // 0x4c0a68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c0a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c0a6c:
    // 0x4c0a6c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4c0a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c0a70:
    // 0x4c0a70: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4c0a74:
    if (ctx->pc == 0x4C0A74u) {
        ctx->pc = 0x4C0A74u;
            // 0x4c0a74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C0A78u;
        goto label_4c0a78;
    }
    ctx->pc = 0x4C0A70u;
    {
        const bool branch_taken_0x4c0a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C0A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0A70u;
            // 0x4c0a74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0a70) {
            ctx->pc = 0x4C0A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c0a48;
        }
    }
    ctx->pc = 0x4C0A78u;
label_4c0a78:
    // 0x4c0a78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c0a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c0a7c:
    // 0x4c0a7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c0a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c0a80:
    // 0x4c0a80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c0a80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c0a84:
    // 0x4c0a84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c0a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c0a88:
    // 0x4c0a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c0a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c0a8c:
    // 0x4c0a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c0a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0a90:
    // 0x4c0a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0a94:
    // 0x4c0a94: 0x3e00008  jr          $ra
label_4c0a98:
    if (ctx->pc == 0x4C0A98u) {
        ctx->pc = 0x4C0A98u;
            // 0x4c0a98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C0A9Cu;
        goto label_4c0a9c;
    }
    ctx->pc = 0x4C0A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0A94u;
            // 0x4c0a98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0A9Cu;
label_4c0a9c:
    // 0x4c0a9c: 0x0  nop
    ctx->pc = 0x4c0a9cu;
    // NOP
label_4c0aa0:
    // 0x4c0aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c0aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c0aa4:
    // 0x4c0aa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c0aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c0aa8:
    // 0x4c0aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c0aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c0aac:
    // 0x4c0aac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4c0aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4c0ab0:
    // 0x4c0ab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0ab4:
    // 0x4c0ab4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4c0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c0ab8:
    // 0x4c0ab8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c0ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c0abc:
    // 0x4c0abc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4c0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4c0ac0:
    // 0x4c0ac0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c0ac4:
    // 0x4c0ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c0ac8:
    // 0x4c0ac8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4c0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4c0acc:
    // 0x4c0acc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4c0accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0ad0:
    // 0x4c0ad0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4c0ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c0ad4:
    // 0x4c0ad4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4c0ad8:
    // 0x4c0ad8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4c0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4c0adc:
    // 0x4c0adc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4c0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4c0ae0:
    // 0x4c0ae0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4c0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c0ae4:
    // 0x4c0ae4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c0ae8:
    // 0x4c0ae8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4c0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4c0aec:
    // 0x4c0aec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4c0aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c0af0:
    // 0x4c0af0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4c0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4c0af4:
    // 0x4c0af4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c0af8:
    // 0x4c0af8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4c0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c0afc:
    // 0x4c0afc: 0xc0a997c  jal         func_2A65F0
label_4c0b00:
    if (ctx->pc == 0x4C0B00u) {
        ctx->pc = 0x4C0B00u;
            // 0x4c0b00: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4C0B04u;
        goto label_4c0b04;
    }
    ctx->pc = 0x4C0AFCu;
    SET_GPR_U32(ctx, 31, 0x4C0B04u);
    ctx->pc = 0x4C0B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0AFCu;
            // 0x4c0b00: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0B04u; }
        if (ctx->pc != 0x4C0B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0B04u; }
        if (ctx->pc != 0x4C0B04u) { return; }
    }
    ctx->pc = 0x4C0B04u;
label_4c0b04:
    // 0x4c0b04: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4c0b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4c0b08:
    // 0x4c0b08: 0xc0d879c  jal         func_361E70
label_4c0b0c:
    if (ctx->pc == 0x4C0B0Cu) {
        ctx->pc = 0x4C0B0Cu;
            // 0x4c0b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0B10u;
        goto label_4c0b10;
    }
    ctx->pc = 0x4C0B08u;
    SET_GPR_U32(ctx, 31, 0x4C0B10u);
    ctx->pc = 0x4C0B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0B08u;
            // 0x4c0b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0B10u; }
        if (ctx->pc != 0x4C0B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0B10u; }
        if (ctx->pc != 0x4C0B10u) { return; }
    }
    ctx->pc = 0x4C0B10u;
label_4c0b10:
    // 0x4c0b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c0b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0b14:
    // 0x4c0b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0b18:
    // 0x4c0b18: 0x3e00008  jr          $ra
label_4c0b1c:
    if (ctx->pc == 0x4C0B1Cu) {
        ctx->pc = 0x4C0B1Cu;
            // 0x4c0b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C0B20u;
        goto label_4c0b20;
    }
    ctx->pc = 0x4C0B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0B18u;
            // 0x4c0b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0B20u;
label_4c0b20:
    // 0x4c0b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c0b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c0b24:
    // 0x4c0b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c0b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c0b28:
    // 0x4c0b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0b2c:
    // 0x4c0b2c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4c0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4c0b30:
    // 0x4c0b30: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4c0b34:
    if (ctx->pc == 0x4C0B34u) {
        ctx->pc = 0x4C0B34u;
            // 0x4c0b34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0B38u;
        goto label_4c0b38;
    }
    ctx->pc = 0x4C0B30u;
    {
        const bool branch_taken_0x4c0b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0B30u;
            // 0x4c0b34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0b30) {
            ctx->pc = 0x4C0C50u;
            goto label_4c0c50;
        }
    }
    ctx->pc = 0x4C0B38u;
label_4c0b38:
    // 0x4c0b38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c0b3c:
    // 0x4c0b3c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4c0b40:
    // 0x4c0b40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c0b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c0b44:
    // 0x4c0b44: 0xc075128  jal         func_1D44A0
label_4c0b48:
    if (ctx->pc == 0x4C0B48u) {
        ctx->pc = 0x4C0B48u;
            // 0x4c0b48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4C0B4Cu;
        goto label_4c0b4c;
    }
    ctx->pc = 0x4C0B44u;
    SET_GPR_U32(ctx, 31, 0x4C0B4Cu);
    ctx->pc = 0x4C0B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0B44u;
            // 0x4c0b48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0B4Cu; }
        if (ctx->pc != 0x4C0B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0B4Cu; }
        if (ctx->pc != 0x4C0B4Cu) { return; }
    }
    ctx->pc = 0x4C0B4Cu;
label_4c0b4c:
    // 0x4c0b4c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4c0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c0b50:
    // 0x4c0b50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0b54:
    // 0x4c0b54: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4c0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4c0b58:
    // 0x4c0b58: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4c0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4c0b5c:
    // 0x4c0b5c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c0b5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0b60:
    // 0x4c0b60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c0b64:
    if (ctx->pc == 0x4C0B64u) {
        ctx->pc = 0x4C0B64u;
            // 0x4c0b64: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4C0B68u;
        goto label_4c0b68;
    }
    ctx->pc = 0x4C0B60u;
    {
        const bool branch_taken_0x4c0b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0B60u;
            // 0x4c0b64: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0b60) {
            ctx->pc = 0x4C0B70u;
            goto label_4c0b70;
        }
    }
    ctx->pc = 0x4C0B68u;
label_4c0b68:
    // 0x4c0b68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0b6c:
    // 0x4c0b6c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4c0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4c0b70:
    // 0x4c0b70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0b74:
    // 0x4c0b74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0b78:
    // 0x4c0b78: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4c0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4c0b7c:
    // 0x4c0b7c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c0b80:
    // 0x4c0b80: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c0b80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0b84:
    // 0x4c0b84: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c0b88:
    if (ctx->pc == 0x4C0B88u) {
        ctx->pc = 0x4C0B88u;
            // 0x4c0b88: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C0B8Cu;
        goto label_4c0b8c;
    }
    ctx->pc = 0x4C0B84u;
    {
        const bool branch_taken_0x4c0b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0b84) {
            ctx->pc = 0x4C0B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0B84u;
            // 0x4c0b88: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0B98u;
            goto label_4c0b98;
        }
    }
    ctx->pc = 0x4C0B8Cu;
label_4c0b8c:
    // 0x4c0b8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0b90:
    // 0x4c0b90: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4c0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4c0b94:
    // 0x4c0b94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0b98:
    // 0x4c0b98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0b9c:
    // 0x4c0b9c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4c0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4c0ba0:
    // 0x4c0ba0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c0ba4:
    // 0x4c0ba4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c0ba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c0ba8:
    // 0x4c0ba8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c0bac:
    if (ctx->pc == 0x4C0BACu) {
        ctx->pc = 0x4C0BACu;
            // 0x4c0bac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C0BB0u;
        goto label_4c0bb0;
    }
    ctx->pc = 0x4C0BA8u;
    {
        const bool branch_taken_0x4c0ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0ba8) {
            ctx->pc = 0x4C0BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0BA8u;
            // 0x4c0bac: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0BBCu;
            goto label_4c0bbc;
        }
    }
    ctx->pc = 0x4C0BB0u;
label_4c0bb0:
    // 0x4c0bb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0bb4:
    // 0x4c0bb4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4c0bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4c0bb8:
    // 0x4c0bb8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c0bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c0bbc:
    // 0x4c0bbc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c0bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c0bc0:
    // 0x4c0bc0: 0x320f809  jalr        $t9
label_4c0bc4:
    if (ctx->pc == 0x4C0BC4u) {
        ctx->pc = 0x4C0BC4u;
            // 0x4c0bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0BC8u;
        goto label_4c0bc8;
    }
    ctx->pc = 0x4C0BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C0BC8u);
        ctx->pc = 0x4C0BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0BC0u;
            // 0x4c0bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C0BC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C0BC8u; }
            if (ctx->pc != 0x4C0BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x4C0BC8u;
label_4c0bc8:
    // 0x4c0bc8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c0bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c0bcc:
    // 0x4c0bcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0bd0:
    // 0x4c0bd0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4c0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4c0bd4:
    // 0x4c0bd4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c0bd8:
    // 0x4c0bd8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c0bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c0bdc:
    // 0x4c0bdc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c0bdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c0be0:
    // 0x4c0be0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c0be4:
    if (ctx->pc == 0x4C0BE4u) {
        ctx->pc = 0x4C0BE4u;
            // 0x4c0be4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4C0BE8u;
        goto label_4c0be8;
    }
    ctx->pc = 0x4C0BE0u;
    {
        const bool branch_taken_0x4c0be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0be0) {
            ctx->pc = 0x4C0BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0BE0u;
            // 0x4c0be4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0BF4u;
            goto label_4c0bf4;
        }
    }
    ctx->pc = 0x4C0BE8u;
label_4c0be8:
    // 0x4c0be8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0bec:
    // 0x4c0bec: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4c0becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4c0bf0:
    // 0x4c0bf0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c0bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c0bf4:
    // 0x4c0bf4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0bf8:
    // 0x4c0bf8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4c0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4c0bfc:
    // 0x4c0bfc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c0c00:
    // 0x4c0c00: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c0c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c0c04:
    // 0x4c0c04: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c0c04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c0c08:
    // 0x4c0c08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c0c0c:
    if (ctx->pc == 0x4C0C0Cu) {
        ctx->pc = 0x4C0C10u;
        goto label_4c0c10;
    }
    ctx->pc = 0x4C0C08u;
    {
        const bool branch_taken_0x4c0c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0c08) {
            ctx->pc = 0x4C0C18u;
            goto label_4c0c18;
        }
    }
    ctx->pc = 0x4C0C10u;
label_4c0c10:
    // 0x4c0c10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0c14:
    // 0x4c0c14: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4c0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4c0c18:
    // 0x4c0c18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0c1c:
    // 0x4c0c1c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4c0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4c0c20:
    // 0x4c0c20: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c0c20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c0c24:
    // 0x4c0c24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c0c28:
    if (ctx->pc == 0x4C0C28u) {
        ctx->pc = 0x4C0C2Cu;
        goto label_4c0c2c;
    }
    ctx->pc = 0x4C0C24u;
    {
        const bool branch_taken_0x4c0c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0c24) {
            ctx->pc = 0x4C0C34u;
            goto label_4c0c34;
        }
    }
    ctx->pc = 0x4C0C2Cu;
label_4c0c2c:
    // 0x4c0c2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0c30:
    // 0x4c0c30: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4c0c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4c0c34:
    // 0x4c0c34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0c38:
    // 0x4c0c38: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4c0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4c0c3c:
    // 0x4c0c3c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c0c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c0c40:
    // 0x4c0c40: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c0c44:
    if (ctx->pc == 0x4C0C44u) {
        ctx->pc = 0x4C0C44u;
            // 0x4c0c44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4C0C48u;
        goto label_4c0c48;
    }
    ctx->pc = 0x4C0C40u;
    {
        const bool branch_taken_0x4c0c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0c40) {
            ctx->pc = 0x4C0C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0C40u;
            // 0x4c0c44: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0C54u;
            goto label_4c0c54;
        }
    }
    ctx->pc = 0x4C0C48u;
label_4c0c48:
    // 0x4c0c48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0c4c:
    // 0x4c0c4c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4c0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4c0c50:
    // 0x4c0c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c0c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0c54:
    // 0x4c0c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0c58:
    // 0x4c0c58: 0x3e00008  jr          $ra
label_4c0c5c:
    if (ctx->pc == 0x4C0C5Cu) {
        ctx->pc = 0x4C0C5Cu;
            // 0x4c0c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C0C60u;
        goto label_4c0c60;
    }
    ctx->pc = 0x4C0C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0C58u;
            // 0x4c0c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0C60u;
label_4c0c60:
    // 0x4c0c60: 0x812fdac  j           func_4BF6B0
label_4c0c64:
    if (ctx->pc == 0x4C0C64u) {
        ctx->pc = 0x4C0C64u;
            // 0x4c0c64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4C0C68u;
        goto label_4c0c68;
    }
    ctx->pc = 0x4C0C60u;
    ctx->pc = 0x4C0C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0C60u;
            // 0x4c0c64: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BF6B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4BF6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C0C68u;
label_4c0c68:
    // 0x4c0c68: 0x0  nop
    ctx->pc = 0x4c0c68u;
    // NOP
label_4c0c6c:
    // 0x4c0c6c: 0x0  nop
    ctx->pc = 0x4c0c6cu;
    // NOP
label_4c0c70:
    // 0x4c0c70: 0x812fecc  j           func_4BFB30
label_4c0c74:
    if (ctx->pc == 0x4C0C74u) {
        ctx->pc = 0x4C0C74u;
            // 0x4c0c74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C0C78u;
        goto label_4c0c78;
    }
    ctx->pc = 0x4C0C70u;
    ctx->pc = 0x4C0C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0C70u;
            // 0x4c0c74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BFB30u;
    {
        auto targetFn = runtime->lookupFunction(0x4BFB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C0C78u;
label_4c0c78:
    // 0x4c0c78: 0x0  nop
    ctx->pc = 0x4c0c78u;
    // NOP
label_4c0c7c:
    // 0x4c0c7c: 0x0  nop
    ctx->pc = 0x4c0c7cu;
    // NOP
label_4c0c80:
    // 0x4c0c80: 0x812fd54  j           func_4BF550
label_4c0c84:
    if (ctx->pc == 0x4C0C84u) {
        ctx->pc = 0x4C0C84u;
            // 0x4c0c84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C0C88u;
        goto label_4c0c88;
    }
    ctx->pc = 0x4C0C80u;
    ctx->pc = 0x4C0C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0C80u;
            // 0x4c0c84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BF550u;
    if (runtime->hasFunction(0x4BF550u)) {
        auto targetFn = runtime->lookupFunction(0x4BF550u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004BF550_0x4bf550(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4C0C88u;
label_4c0c88:
    // 0x4c0c88: 0x0  nop
    ctx->pc = 0x4c0c88u;
    // NOP
label_4c0c8c:
    // 0x4c0c8c: 0x0  nop
    ctx->pc = 0x4c0c8cu;
    // NOP
label_4c0c90:
    // 0x4c0c90: 0x812fd30  j           func_4BF4C0
label_4c0c94:
    if (ctx->pc == 0x4C0C94u) {
        ctx->pc = 0x4C0C94u;
            // 0x4c0c94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C0C98u;
        goto label_4c0c98;
    }
    ctx->pc = 0x4C0C90u;
    ctx->pc = 0x4C0C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0C90u;
            // 0x4c0c94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BF4C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4BF4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C0C98u;
label_4c0c98:
    // 0x4c0c98: 0x0  nop
    ctx->pc = 0x4c0c98u;
    // NOP
label_4c0c9c:
    // 0x4c0c9c: 0x0  nop
    ctx->pc = 0x4c0c9cu;
    // NOP
label_4c0ca0:
    // 0x4c0ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c0ca4:
    // 0x4c0ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c0ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c0ca8:
    // 0x4c0ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c0cac:
    // 0x4c0cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0cb0:
    // 0x4c0cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c0cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0cb4:
    // 0x4c0cb4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4c0cb8:
    if (ctx->pc == 0x4C0CB8u) {
        ctx->pc = 0x4C0CB8u;
            // 0x4c0cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0CBCu;
        goto label_4c0cbc;
    }
    ctx->pc = 0x4C0CB4u;
    {
        const bool branch_taken_0x4c0cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0CB4u;
            // 0x4c0cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0cb4) {
            ctx->pc = 0x4C0D10u;
            goto label_4c0d10;
        }
    }
    ctx->pc = 0x4C0CBCu;
label_4c0cbc:
    // 0x4c0cbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c0cc0:
    // 0x4c0cc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c0cc4:
    // 0x4c0cc4: 0x24631290  addiu       $v1, $v1, 0x1290
    ctx->pc = 0x4c0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4752));
label_4c0cc8:
    // 0x4c0cc8: 0x244212c8  addiu       $v0, $v0, 0x12C8
    ctx->pc = 0x4c0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4808));
label_4c0ccc:
    // 0x4c0ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c0cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c0cd0:
    // 0x4c0cd0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4c0cd4:
    if (ctx->pc == 0x4C0CD4u) {
        ctx->pc = 0x4C0CD4u;
            // 0x4c0cd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4C0CD8u;
        goto label_4c0cd8;
    }
    ctx->pc = 0x4C0CD0u;
    {
        const bool branch_taken_0x4c0cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0CD0u;
            // 0x4c0cd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0cd0) {
            ctx->pc = 0x4C0CF8u;
            goto label_4c0cf8;
        }
    }
    ctx->pc = 0x4C0CD8u;
label_4c0cd8:
    // 0x4c0cd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c0cdc:
    // 0x4c0cdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c0ce0:
    // 0x4c0ce0: 0x246313f0  addiu       $v1, $v1, 0x13F0
    ctx->pc = 0x4c0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5104));
label_4c0ce4:
    // 0x4c0ce4: 0x24421428  addiu       $v0, $v0, 0x1428
    ctx->pc = 0x4c0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5160));
label_4c0ce8:
    // 0x4c0ce8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c0cec:
    // 0x4c0cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c0cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c0cf0:
    // 0x4c0cf0: 0xc13034c  jal         func_4C0D30
label_4c0cf4:
    if (ctx->pc == 0x4C0CF4u) {
        ctx->pc = 0x4C0CF4u;
            // 0x4c0cf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4C0CF8u;
        goto label_4c0cf8;
    }
    ctx->pc = 0x4C0CF0u;
    SET_GPR_U32(ctx, 31, 0x4C0CF8u);
    ctx->pc = 0x4C0CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0CF0u;
            // 0x4c0cf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C0D30u;
    if (runtime->hasFunction(0x4C0D30u)) {
        auto targetFn = runtime->lookupFunction(0x4C0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0CF8u; }
        if (ctx->pc != 0x4C0CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C0D30_0x4c0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0CF8u; }
        if (ctx->pc != 0x4C0CF8u) { return; }
    }
    ctx->pc = 0x4C0CF8u;
label_4c0cf8:
    // 0x4c0cf8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c0cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4c0cfc:
    // 0x4c0cfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c0cfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c0d00:
    // 0x4c0d00: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c0d04:
    if (ctx->pc == 0x4C0D04u) {
        ctx->pc = 0x4C0D04u;
            // 0x4c0d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0D08u;
        goto label_4c0d08;
    }
    ctx->pc = 0x4C0D00u;
    {
        const bool branch_taken_0x4c0d00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c0d00) {
            ctx->pc = 0x4C0D04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D00u;
            // 0x4c0d04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0D14u;
            goto label_4c0d14;
        }
    }
    ctx->pc = 0x4C0D08u;
label_4c0d08:
    // 0x4c0d08: 0xc0400a8  jal         func_1002A0
label_4c0d0c:
    if (ctx->pc == 0x4C0D0Cu) {
        ctx->pc = 0x4C0D0Cu;
            // 0x4c0d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0D10u;
        goto label_4c0d10;
    }
    ctx->pc = 0x4C0D08u;
    SET_GPR_U32(ctx, 31, 0x4C0D10u);
    ctx->pc = 0x4C0D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D08u;
            // 0x4c0d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0D10u; }
        if (ctx->pc != 0x4C0D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0D10u; }
        if (ctx->pc != 0x4C0D10u) { return; }
    }
    ctx->pc = 0x4C0D10u;
label_4c0d10:
    // 0x4c0d10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c0d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c0d14:
    // 0x4c0d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c0d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c0d18:
    // 0x4c0d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c0d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0d1c:
    // 0x4c0d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0d20:
    // 0x4c0d20: 0x3e00008  jr          $ra
label_4c0d24:
    if (ctx->pc == 0x4C0D24u) {
        ctx->pc = 0x4C0D24u;
            // 0x4c0d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C0D28u;
        goto label_4c0d28;
    }
    ctx->pc = 0x4C0D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D20u;
            // 0x4c0d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0D28u;
label_4c0d28:
    // 0x4c0d28: 0x0  nop
    ctx->pc = 0x4c0d28u;
    // NOP
label_4c0d2c:
    // 0x4c0d2c: 0x0  nop
    ctx->pc = 0x4c0d2cu;
    // NOP
}
