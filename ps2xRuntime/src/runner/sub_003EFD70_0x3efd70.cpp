#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EFD70
// Address: 0x3efd70 - 0x3f03a0
void sub_003EFD70_0x3efd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFD70_0x3efd70");
#endif

    switch (ctx->pc) {
        case 0x3efd70u: goto label_3efd70;
        case 0x3efd74u: goto label_3efd74;
        case 0x3efd78u: goto label_3efd78;
        case 0x3efd7cu: goto label_3efd7c;
        case 0x3efd80u: goto label_3efd80;
        case 0x3efd84u: goto label_3efd84;
        case 0x3efd88u: goto label_3efd88;
        case 0x3efd8cu: goto label_3efd8c;
        case 0x3efd90u: goto label_3efd90;
        case 0x3efd94u: goto label_3efd94;
        case 0x3efd98u: goto label_3efd98;
        case 0x3efd9cu: goto label_3efd9c;
        case 0x3efda0u: goto label_3efda0;
        case 0x3efda4u: goto label_3efda4;
        case 0x3efda8u: goto label_3efda8;
        case 0x3efdacu: goto label_3efdac;
        case 0x3efdb0u: goto label_3efdb0;
        case 0x3efdb4u: goto label_3efdb4;
        case 0x3efdb8u: goto label_3efdb8;
        case 0x3efdbcu: goto label_3efdbc;
        case 0x3efdc0u: goto label_3efdc0;
        case 0x3efdc4u: goto label_3efdc4;
        case 0x3efdc8u: goto label_3efdc8;
        case 0x3efdccu: goto label_3efdcc;
        case 0x3efdd0u: goto label_3efdd0;
        case 0x3efdd4u: goto label_3efdd4;
        case 0x3efdd8u: goto label_3efdd8;
        case 0x3efddcu: goto label_3efddc;
        case 0x3efde0u: goto label_3efde0;
        case 0x3efde4u: goto label_3efde4;
        case 0x3efde8u: goto label_3efde8;
        case 0x3efdecu: goto label_3efdec;
        case 0x3efdf0u: goto label_3efdf0;
        case 0x3efdf4u: goto label_3efdf4;
        case 0x3efdf8u: goto label_3efdf8;
        case 0x3efdfcu: goto label_3efdfc;
        case 0x3efe00u: goto label_3efe00;
        case 0x3efe04u: goto label_3efe04;
        case 0x3efe08u: goto label_3efe08;
        case 0x3efe0cu: goto label_3efe0c;
        case 0x3efe10u: goto label_3efe10;
        case 0x3efe14u: goto label_3efe14;
        case 0x3efe18u: goto label_3efe18;
        case 0x3efe1cu: goto label_3efe1c;
        case 0x3efe20u: goto label_3efe20;
        case 0x3efe24u: goto label_3efe24;
        case 0x3efe28u: goto label_3efe28;
        case 0x3efe2cu: goto label_3efe2c;
        case 0x3efe30u: goto label_3efe30;
        case 0x3efe34u: goto label_3efe34;
        case 0x3efe38u: goto label_3efe38;
        case 0x3efe3cu: goto label_3efe3c;
        case 0x3efe40u: goto label_3efe40;
        case 0x3efe44u: goto label_3efe44;
        case 0x3efe48u: goto label_3efe48;
        case 0x3efe4cu: goto label_3efe4c;
        case 0x3efe50u: goto label_3efe50;
        case 0x3efe54u: goto label_3efe54;
        case 0x3efe58u: goto label_3efe58;
        case 0x3efe5cu: goto label_3efe5c;
        case 0x3efe60u: goto label_3efe60;
        case 0x3efe64u: goto label_3efe64;
        case 0x3efe68u: goto label_3efe68;
        case 0x3efe6cu: goto label_3efe6c;
        case 0x3efe70u: goto label_3efe70;
        case 0x3efe74u: goto label_3efe74;
        case 0x3efe78u: goto label_3efe78;
        case 0x3efe7cu: goto label_3efe7c;
        case 0x3efe80u: goto label_3efe80;
        case 0x3efe84u: goto label_3efe84;
        case 0x3efe88u: goto label_3efe88;
        case 0x3efe8cu: goto label_3efe8c;
        case 0x3efe90u: goto label_3efe90;
        case 0x3efe94u: goto label_3efe94;
        case 0x3efe98u: goto label_3efe98;
        case 0x3efe9cu: goto label_3efe9c;
        case 0x3efea0u: goto label_3efea0;
        case 0x3efea4u: goto label_3efea4;
        case 0x3efea8u: goto label_3efea8;
        case 0x3efeacu: goto label_3efeac;
        case 0x3efeb0u: goto label_3efeb0;
        case 0x3efeb4u: goto label_3efeb4;
        case 0x3efeb8u: goto label_3efeb8;
        case 0x3efebcu: goto label_3efebc;
        case 0x3efec0u: goto label_3efec0;
        case 0x3efec4u: goto label_3efec4;
        case 0x3efec8u: goto label_3efec8;
        case 0x3efeccu: goto label_3efecc;
        case 0x3efed0u: goto label_3efed0;
        case 0x3efed4u: goto label_3efed4;
        case 0x3efed8u: goto label_3efed8;
        case 0x3efedcu: goto label_3efedc;
        case 0x3efee0u: goto label_3efee0;
        case 0x3efee4u: goto label_3efee4;
        case 0x3efee8u: goto label_3efee8;
        case 0x3efeecu: goto label_3efeec;
        case 0x3efef0u: goto label_3efef0;
        case 0x3efef4u: goto label_3efef4;
        case 0x3efef8u: goto label_3efef8;
        case 0x3efefcu: goto label_3efefc;
        case 0x3eff00u: goto label_3eff00;
        case 0x3eff04u: goto label_3eff04;
        case 0x3eff08u: goto label_3eff08;
        case 0x3eff0cu: goto label_3eff0c;
        case 0x3eff10u: goto label_3eff10;
        case 0x3eff14u: goto label_3eff14;
        case 0x3eff18u: goto label_3eff18;
        case 0x3eff1cu: goto label_3eff1c;
        case 0x3eff20u: goto label_3eff20;
        case 0x3eff24u: goto label_3eff24;
        case 0x3eff28u: goto label_3eff28;
        case 0x3eff2cu: goto label_3eff2c;
        case 0x3eff30u: goto label_3eff30;
        case 0x3eff34u: goto label_3eff34;
        case 0x3eff38u: goto label_3eff38;
        case 0x3eff3cu: goto label_3eff3c;
        case 0x3eff40u: goto label_3eff40;
        case 0x3eff44u: goto label_3eff44;
        case 0x3eff48u: goto label_3eff48;
        case 0x3eff4cu: goto label_3eff4c;
        case 0x3eff50u: goto label_3eff50;
        case 0x3eff54u: goto label_3eff54;
        case 0x3eff58u: goto label_3eff58;
        case 0x3eff5cu: goto label_3eff5c;
        case 0x3eff60u: goto label_3eff60;
        case 0x3eff64u: goto label_3eff64;
        case 0x3eff68u: goto label_3eff68;
        case 0x3eff6cu: goto label_3eff6c;
        case 0x3eff70u: goto label_3eff70;
        case 0x3eff74u: goto label_3eff74;
        case 0x3eff78u: goto label_3eff78;
        case 0x3eff7cu: goto label_3eff7c;
        case 0x3eff80u: goto label_3eff80;
        case 0x3eff84u: goto label_3eff84;
        case 0x3eff88u: goto label_3eff88;
        case 0x3eff8cu: goto label_3eff8c;
        case 0x3eff90u: goto label_3eff90;
        case 0x3eff94u: goto label_3eff94;
        case 0x3eff98u: goto label_3eff98;
        case 0x3eff9cu: goto label_3eff9c;
        case 0x3effa0u: goto label_3effa0;
        case 0x3effa4u: goto label_3effa4;
        case 0x3effa8u: goto label_3effa8;
        case 0x3effacu: goto label_3effac;
        case 0x3effb0u: goto label_3effb0;
        case 0x3effb4u: goto label_3effb4;
        case 0x3effb8u: goto label_3effb8;
        case 0x3effbcu: goto label_3effbc;
        case 0x3effc0u: goto label_3effc0;
        case 0x3effc4u: goto label_3effc4;
        case 0x3effc8u: goto label_3effc8;
        case 0x3effccu: goto label_3effcc;
        case 0x3effd0u: goto label_3effd0;
        case 0x3effd4u: goto label_3effd4;
        case 0x3effd8u: goto label_3effd8;
        case 0x3effdcu: goto label_3effdc;
        case 0x3effe0u: goto label_3effe0;
        case 0x3effe4u: goto label_3effe4;
        case 0x3effe8u: goto label_3effe8;
        case 0x3effecu: goto label_3effec;
        case 0x3efff0u: goto label_3efff0;
        case 0x3efff4u: goto label_3efff4;
        case 0x3efff8u: goto label_3efff8;
        case 0x3efffcu: goto label_3efffc;
        case 0x3f0000u: goto label_3f0000;
        case 0x3f0004u: goto label_3f0004;
        case 0x3f0008u: goto label_3f0008;
        case 0x3f000cu: goto label_3f000c;
        case 0x3f0010u: goto label_3f0010;
        case 0x3f0014u: goto label_3f0014;
        case 0x3f0018u: goto label_3f0018;
        case 0x3f001cu: goto label_3f001c;
        case 0x3f0020u: goto label_3f0020;
        case 0x3f0024u: goto label_3f0024;
        case 0x3f0028u: goto label_3f0028;
        case 0x3f002cu: goto label_3f002c;
        case 0x3f0030u: goto label_3f0030;
        case 0x3f0034u: goto label_3f0034;
        case 0x3f0038u: goto label_3f0038;
        case 0x3f003cu: goto label_3f003c;
        case 0x3f0040u: goto label_3f0040;
        case 0x3f0044u: goto label_3f0044;
        case 0x3f0048u: goto label_3f0048;
        case 0x3f004cu: goto label_3f004c;
        case 0x3f0050u: goto label_3f0050;
        case 0x3f0054u: goto label_3f0054;
        case 0x3f0058u: goto label_3f0058;
        case 0x3f005cu: goto label_3f005c;
        case 0x3f0060u: goto label_3f0060;
        case 0x3f0064u: goto label_3f0064;
        case 0x3f0068u: goto label_3f0068;
        case 0x3f006cu: goto label_3f006c;
        case 0x3f0070u: goto label_3f0070;
        case 0x3f0074u: goto label_3f0074;
        case 0x3f0078u: goto label_3f0078;
        case 0x3f007cu: goto label_3f007c;
        case 0x3f0080u: goto label_3f0080;
        case 0x3f0084u: goto label_3f0084;
        case 0x3f0088u: goto label_3f0088;
        case 0x3f008cu: goto label_3f008c;
        case 0x3f0090u: goto label_3f0090;
        case 0x3f0094u: goto label_3f0094;
        case 0x3f0098u: goto label_3f0098;
        case 0x3f009cu: goto label_3f009c;
        case 0x3f00a0u: goto label_3f00a0;
        case 0x3f00a4u: goto label_3f00a4;
        case 0x3f00a8u: goto label_3f00a8;
        case 0x3f00acu: goto label_3f00ac;
        case 0x3f00b0u: goto label_3f00b0;
        case 0x3f00b4u: goto label_3f00b4;
        case 0x3f00b8u: goto label_3f00b8;
        case 0x3f00bcu: goto label_3f00bc;
        case 0x3f00c0u: goto label_3f00c0;
        case 0x3f00c4u: goto label_3f00c4;
        case 0x3f00c8u: goto label_3f00c8;
        case 0x3f00ccu: goto label_3f00cc;
        case 0x3f00d0u: goto label_3f00d0;
        case 0x3f00d4u: goto label_3f00d4;
        case 0x3f00d8u: goto label_3f00d8;
        case 0x3f00dcu: goto label_3f00dc;
        case 0x3f00e0u: goto label_3f00e0;
        case 0x3f00e4u: goto label_3f00e4;
        case 0x3f00e8u: goto label_3f00e8;
        case 0x3f00ecu: goto label_3f00ec;
        case 0x3f00f0u: goto label_3f00f0;
        case 0x3f00f4u: goto label_3f00f4;
        case 0x3f00f8u: goto label_3f00f8;
        case 0x3f00fcu: goto label_3f00fc;
        case 0x3f0100u: goto label_3f0100;
        case 0x3f0104u: goto label_3f0104;
        case 0x3f0108u: goto label_3f0108;
        case 0x3f010cu: goto label_3f010c;
        case 0x3f0110u: goto label_3f0110;
        case 0x3f0114u: goto label_3f0114;
        case 0x3f0118u: goto label_3f0118;
        case 0x3f011cu: goto label_3f011c;
        case 0x3f0120u: goto label_3f0120;
        case 0x3f0124u: goto label_3f0124;
        case 0x3f0128u: goto label_3f0128;
        case 0x3f012cu: goto label_3f012c;
        case 0x3f0130u: goto label_3f0130;
        case 0x3f0134u: goto label_3f0134;
        case 0x3f0138u: goto label_3f0138;
        case 0x3f013cu: goto label_3f013c;
        case 0x3f0140u: goto label_3f0140;
        case 0x3f0144u: goto label_3f0144;
        case 0x3f0148u: goto label_3f0148;
        case 0x3f014cu: goto label_3f014c;
        case 0x3f0150u: goto label_3f0150;
        case 0x3f0154u: goto label_3f0154;
        case 0x3f0158u: goto label_3f0158;
        case 0x3f015cu: goto label_3f015c;
        case 0x3f0160u: goto label_3f0160;
        case 0x3f0164u: goto label_3f0164;
        case 0x3f0168u: goto label_3f0168;
        case 0x3f016cu: goto label_3f016c;
        case 0x3f0170u: goto label_3f0170;
        case 0x3f0174u: goto label_3f0174;
        case 0x3f0178u: goto label_3f0178;
        case 0x3f017cu: goto label_3f017c;
        case 0x3f0180u: goto label_3f0180;
        case 0x3f0184u: goto label_3f0184;
        case 0x3f0188u: goto label_3f0188;
        case 0x3f018cu: goto label_3f018c;
        case 0x3f0190u: goto label_3f0190;
        case 0x3f0194u: goto label_3f0194;
        case 0x3f0198u: goto label_3f0198;
        case 0x3f019cu: goto label_3f019c;
        case 0x3f01a0u: goto label_3f01a0;
        case 0x3f01a4u: goto label_3f01a4;
        case 0x3f01a8u: goto label_3f01a8;
        case 0x3f01acu: goto label_3f01ac;
        case 0x3f01b0u: goto label_3f01b0;
        case 0x3f01b4u: goto label_3f01b4;
        case 0x3f01b8u: goto label_3f01b8;
        case 0x3f01bcu: goto label_3f01bc;
        case 0x3f01c0u: goto label_3f01c0;
        case 0x3f01c4u: goto label_3f01c4;
        case 0x3f01c8u: goto label_3f01c8;
        case 0x3f01ccu: goto label_3f01cc;
        case 0x3f01d0u: goto label_3f01d0;
        case 0x3f01d4u: goto label_3f01d4;
        case 0x3f01d8u: goto label_3f01d8;
        case 0x3f01dcu: goto label_3f01dc;
        case 0x3f01e0u: goto label_3f01e0;
        case 0x3f01e4u: goto label_3f01e4;
        case 0x3f01e8u: goto label_3f01e8;
        case 0x3f01ecu: goto label_3f01ec;
        case 0x3f01f0u: goto label_3f01f0;
        case 0x3f01f4u: goto label_3f01f4;
        case 0x3f01f8u: goto label_3f01f8;
        case 0x3f01fcu: goto label_3f01fc;
        case 0x3f0200u: goto label_3f0200;
        case 0x3f0204u: goto label_3f0204;
        case 0x3f0208u: goto label_3f0208;
        case 0x3f020cu: goto label_3f020c;
        case 0x3f0210u: goto label_3f0210;
        case 0x3f0214u: goto label_3f0214;
        case 0x3f0218u: goto label_3f0218;
        case 0x3f021cu: goto label_3f021c;
        case 0x3f0220u: goto label_3f0220;
        case 0x3f0224u: goto label_3f0224;
        case 0x3f0228u: goto label_3f0228;
        case 0x3f022cu: goto label_3f022c;
        case 0x3f0230u: goto label_3f0230;
        case 0x3f0234u: goto label_3f0234;
        case 0x3f0238u: goto label_3f0238;
        case 0x3f023cu: goto label_3f023c;
        case 0x3f0240u: goto label_3f0240;
        case 0x3f0244u: goto label_3f0244;
        case 0x3f0248u: goto label_3f0248;
        case 0x3f024cu: goto label_3f024c;
        case 0x3f0250u: goto label_3f0250;
        case 0x3f0254u: goto label_3f0254;
        case 0x3f0258u: goto label_3f0258;
        case 0x3f025cu: goto label_3f025c;
        case 0x3f0260u: goto label_3f0260;
        case 0x3f0264u: goto label_3f0264;
        case 0x3f0268u: goto label_3f0268;
        case 0x3f026cu: goto label_3f026c;
        case 0x3f0270u: goto label_3f0270;
        case 0x3f0274u: goto label_3f0274;
        case 0x3f0278u: goto label_3f0278;
        case 0x3f027cu: goto label_3f027c;
        case 0x3f0280u: goto label_3f0280;
        case 0x3f0284u: goto label_3f0284;
        case 0x3f0288u: goto label_3f0288;
        case 0x3f028cu: goto label_3f028c;
        case 0x3f0290u: goto label_3f0290;
        case 0x3f0294u: goto label_3f0294;
        case 0x3f0298u: goto label_3f0298;
        case 0x3f029cu: goto label_3f029c;
        case 0x3f02a0u: goto label_3f02a0;
        case 0x3f02a4u: goto label_3f02a4;
        case 0x3f02a8u: goto label_3f02a8;
        case 0x3f02acu: goto label_3f02ac;
        case 0x3f02b0u: goto label_3f02b0;
        case 0x3f02b4u: goto label_3f02b4;
        case 0x3f02b8u: goto label_3f02b8;
        case 0x3f02bcu: goto label_3f02bc;
        case 0x3f02c0u: goto label_3f02c0;
        case 0x3f02c4u: goto label_3f02c4;
        case 0x3f02c8u: goto label_3f02c8;
        case 0x3f02ccu: goto label_3f02cc;
        case 0x3f02d0u: goto label_3f02d0;
        case 0x3f02d4u: goto label_3f02d4;
        case 0x3f02d8u: goto label_3f02d8;
        case 0x3f02dcu: goto label_3f02dc;
        case 0x3f02e0u: goto label_3f02e0;
        case 0x3f02e4u: goto label_3f02e4;
        case 0x3f02e8u: goto label_3f02e8;
        case 0x3f02ecu: goto label_3f02ec;
        case 0x3f02f0u: goto label_3f02f0;
        case 0x3f02f4u: goto label_3f02f4;
        case 0x3f02f8u: goto label_3f02f8;
        case 0x3f02fcu: goto label_3f02fc;
        case 0x3f0300u: goto label_3f0300;
        case 0x3f0304u: goto label_3f0304;
        case 0x3f0308u: goto label_3f0308;
        case 0x3f030cu: goto label_3f030c;
        case 0x3f0310u: goto label_3f0310;
        case 0x3f0314u: goto label_3f0314;
        case 0x3f0318u: goto label_3f0318;
        case 0x3f031cu: goto label_3f031c;
        case 0x3f0320u: goto label_3f0320;
        case 0x3f0324u: goto label_3f0324;
        case 0x3f0328u: goto label_3f0328;
        case 0x3f032cu: goto label_3f032c;
        case 0x3f0330u: goto label_3f0330;
        case 0x3f0334u: goto label_3f0334;
        case 0x3f0338u: goto label_3f0338;
        case 0x3f033cu: goto label_3f033c;
        case 0x3f0340u: goto label_3f0340;
        case 0x3f0344u: goto label_3f0344;
        case 0x3f0348u: goto label_3f0348;
        case 0x3f034cu: goto label_3f034c;
        case 0x3f0350u: goto label_3f0350;
        case 0x3f0354u: goto label_3f0354;
        case 0x3f0358u: goto label_3f0358;
        case 0x3f035cu: goto label_3f035c;
        case 0x3f0360u: goto label_3f0360;
        case 0x3f0364u: goto label_3f0364;
        case 0x3f0368u: goto label_3f0368;
        case 0x3f036cu: goto label_3f036c;
        case 0x3f0370u: goto label_3f0370;
        case 0x3f0374u: goto label_3f0374;
        case 0x3f0378u: goto label_3f0378;
        case 0x3f037cu: goto label_3f037c;
        case 0x3f0380u: goto label_3f0380;
        case 0x3f0384u: goto label_3f0384;
        case 0x3f0388u: goto label_3f0388;
        case 0x3f038cu: goto label_3f038c;
        case 0x3f0390u: goto label_3f0390;
        case 0x3f0394u: goto label_3f0394;
        case 0x3f0398u: goto label_3f0398;
        case 0x3f039cu: goto label_3f039c;
        default: break;
    }

    ctx->pc = 0x3efd70u;

label_3efd70:
    // 0x3efd70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efd74:
    // 0x3efd74: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x3efd74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_3efd78:
    // 0x3efd78: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x3efd78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3efd7c:
    // 0x3efd7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efd80:
    // 0x3efd80: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x3efd80u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3efd84:
    // 0x3efd84: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x3efd84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_3efd88:
    // 0x3efd88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efd8c:
    // 0x3efd8c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x3efd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3efd90:
    // 0x3efd90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efd94:
    // 0x3efd94: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x3efd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3efd98:
    // 0x3efd98: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x3efd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_3efd9c:
    // 0x3efd9c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x3efd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_3efda0:
    // 0x3efda0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x3efda0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3efda4:
    // 0x3efda4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3efda4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3efda8:
    // 0x3efda8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x3efda8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_3efdac:
    // 0x3efdac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efdb0:
    // 0x3efdb0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3efdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_3efdb4:
    // 0x3efdb4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3efdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3efdb8:
    // 0x3efdb8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x3efdb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_3efdbc:
    // 0x3efdbc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3efdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3efdc0:
    // 0x3efdc0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x3efdc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_3efdc4:
    // 0x3efdc4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3efdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_3efdc8:
    // 0x3efdc8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x3efdc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3efdcc:
    // 0x3efdcc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x3efdccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_3efdd0:
    // 0x3efdd0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x3efdd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_3efdd4:
    // 0x3efdd4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3efdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_3efdd8:
    // 0x3efdd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3efdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3efddc:
    // 0x3efddc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x3efddcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_3efde0:
    // 0x3efde0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x3efde0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_3efde4:
    // 0x3efde4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x3efde4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3efde8:
    // 0x3efde8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x3efde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_3efdec:
    // 0x3efdec: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x3efdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_3efdf0:
    // 0x3efdf0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x3efdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_3efdf4:
    // 0x3efdf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3efdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3efdf8:
    // 0x3efdf8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x3efdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_3efdfc:
    // 0x3efdfc: 0x3e00008  jr          $ra
label_3efe00:
    if (ctx->pc == 0x3EFE00u) {
        ctx->pc = 0x3EFE00u;
            // 0x3efe00: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x3EFE04u;
        goto label_3efe04;
    }
    ctx->pc = 0x3EFDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFDFCu;
            // 0x3efe00: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EFE04u;
label_3efe04:
    // 0x3efe04: 0x0  nop
    ctx->pc = 0x3efe04u;
    // NOP
label_3efe08:
    // 0x3efe08: 0x0  nop
    ctx->pc = 0x3efe08u;
    // NOP
label_3efe0c:
    // 0x3efe0c: 0x0  nop
    ctx->pc = 0x3efe0cu;
    // NOP
label_3efe10:
    // 0x3efe10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3efe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3efe14:
    // 0x3efe14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3efe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3efe18:
    // 0x3efe18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3efe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3efe1c:
    // 0x3efe1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3efe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3efe20:
    // 0x3efe20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3efe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3efe24:
    // 0x3efe24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3efe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3efe28:
    // 0x3efe28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3efe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3efe2c:
    // 0x3efe2c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3efe2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3efe30:
    // 0x3efe30: 0x10a30045  beq         $a1, $v1, . + 4 + (0x45 << 2)
label_3efe34:
    if (ctx->pc == 0x3EFE34u) {
        ctx->pc = 0x3EFE34u;
            // 0x3efe34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EFE38u;
        goto label_3efe38;
    }
    ctx->pc = 0x3EFE30u;
    {
        const bool branch_taken_0x3efe30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EFE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFE30u;
            // 0x3efe34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efe30) {
            ctx->pc = 0x3EFF48u;
            goto label_3eff48;
        }
    }
    ctx->pc = 0x3EFE38u;
label_3efe38:
    // 0x3efe38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3efe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3efe3c:
    // 0x3efe3c: 0x50a3003f  beql        $a1, $v1, . + 4 + (0x3F << 2)
label_3efe40:
    if (ctx->pc == 0x3EFE40u) {
        ctx->pc = 0x3EFE40u;
            // 0x3efe40: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3EFE44u;
        goto label_3efe44;
    }
    ctx->pc = 0x3EFE3Cu;
    {
        const bool branch_taken_0x3efe3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3efe3c) {
            ctx->pc = 0x3EFE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFE3Cu;
            // 0x3efe40: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EFF3Cu;
            goto label_3eff3c;
        }
    }
    ctx->pc = 0x3EFE44u;
label_3efe44:
    // 0x3efe44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3efe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3efe48:
    // 0x3efe48: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3efe4c:
    if (ctx->pc == 0x3EFE4Cu) {
        ctx->pc = 0x3EFE50u;
        goto label_3efe50;
    }
    ctx->pc = 0x3EFE48u;
    {
        const bool branch_taken_0x3efe48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3efe48) {
            ctx->pc = 0x3EFE58u;
            goto label_3efe58;
        }
    }
    ctx->pc = 0x3EFE50u;
label_3efe50:
    // 0x3efe50: 0x100000ad  b           . + 4 + (0xAD << 2)
label_3efe54:
    if (ctx->pc == 0x3EFE54u) {
        ctx->pc = 0x3EFE58u;
        goto label_3efe58;
    }
    ctx->pc = 0x3EFE50u;
    {
        const bool branch_taken_0x3efe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efe50) {
            ctx->pc = 0x3F0108u;
            goto label_3f0108;
        }
    }
    ctx->pc = 0x3EFE58u;
label_3efe58:
    // 0x3efe58: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3efe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3efe5c:
    // 0x3efe5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3efe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3efe60:
    // 0x3efe60: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3efe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3efe64:
    // 0x3efe64: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3efe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3efe68:
    // 0x3efe68: 0x106400a7  beq         $v1, $a0, . + 4 + (0xA7 << 2)
label_3efe6c:
    if (ctx->pc == 0x3EFE6Cu) {
        ctx->pc = 0x3EFE70u;
        goto label_3efe70;
    }
    ctx->pc = 0x3EFE68u;
    {
        const bool branch_taken_0x3efe68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3efe68) {
            ctx->pc = 0x3F0108u;
            goto label_3f0108;
        }
    }
    ctx->pc = 0x3EFE70u;
label_3efe70:
    // 0x3efe70: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x3efe70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3efe74:
    // 0x3efe74: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3efe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3efe78:
    // 0x3efe78: 0x8c66fa48  lw          $a2, -0x5B8($v1)
    ctx->pc = 0x3efe78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965832)));
label_3efe7c:
    // 0x3efe7c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3efe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3efe80:
    // 0x3efe80: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x3efe80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_3efe84:
    // 0x3efe84: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x3efe84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3efe88:
    // 0x3efe88: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3efe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3efe8c:
    // 0x3efe8c: 0x8d08001c  lw          $t0, 0x1C($t0)
    ctx->pc = 0x3efe8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3efe90:
    // 0x3efe90: 0xc03827  not         $a3, $a2
    ctx->pc = 0x3efe90u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_3efe94:
    // 0x3efe94: 0x8d060050  lw          $a2, 0x50($t0)
    ctx->pc = 0x3efe94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
label_3efe98:
    // 0x3efe98: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x3efe98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_3efe9c:
    // 0x3efe9c: 0xad060050  sw          $a2, 0x50($t0)
    ctx->pc = 0x3efe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 6));
label_3efea0:
    // 0x3efea0: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x3efea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3efea4:
    // 0x3efea4: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x3efea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3efea8:
    // 0x3efea8: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x3efea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3efeac:
    // 0x3efeac: 0x24c6005c  addiu       $a2, $a2, 0x5C
    ctx->pc = 0x3efeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
label_3efeb0:
    // 0x3efeb0: 0xae060098  sw          $a2, 0x98($s0)
    ctx->pc = 0x3efeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 6));
label_3efeb4:
    // 0x3efeb4: 0x8ca5fa50  lw          $a1, -0x5B0($a1)
    ctx->pc = 0x3efeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965840)));
label_3efeb8:
    // 0x3efeb8: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x3efeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3efebc:
    // 0x3efebc: 0xa03027  not         $a2, $a1
    ctx->pc = 0x3efebcu;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_3efec0:
    // 0x3efec0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3efec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3efec4:
    // 0x3efec4: 0x8ca70014  lw          $a3, 0x14($a1)
    ctx->pc = 0x3efec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3efec8:
    // 0x3efec8: 0x8ce50050  lw          $a1, 0x50($a3)
    ctx->pc = 0x3efec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_3efecc:
    // 0x3efecc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x3efeccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_3efed0:
    // 0x3efed0: 0xace50050  sw          $a1, 0x50($a3)
    ctx->pc = 0x3efed0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 5));
label_3efed4:
    // 0x3efed4: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x3efed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3efed8:
    // 0x3efed8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3efed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3efedc:
    // 0x3efedc: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3efedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3efee0:
    // 0x3efee0: 0x24a5005c  addiu       $a1, $a1, 0x5C
    ctx->pc = 0x3efee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
label_3efee4:
    // 0x3efee4: 0xae05009c  sw          $a1, 0x9C($s0)
    ctx->pc = 0x3efee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 5));
label_3efee8:
    // 0x3efee8: 0x8c84fa58  lw          $a0, -0x5A8($a0)
    ctx->pc = 0x3efee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965848)));
label_3efeec:
    // 0x3efeec: 0x8e06008c  lw          $a2, 0x8C($s0)
    ctx->pc = 0x3efeecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_3efef0:
    // 0x3efef0: 0x802827  not         $a1, $a0
    ctx->pc = 0x3efef0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_3efef4:
    // 0x3efef4: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x3efef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3efef8:
    // 0x3efef8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x3efef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3efefc:
    // 0x3efefc: 0x8cc40050  lw          $a0, 0x50($a2)
    ctx->pc = 0x3efefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_3eff00:
    // 0x3eff00: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x3eff00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_3eff04:
    // 0x3eff04: 0xacc40050  sw          $a0, 0x50($a2)
    ctx->pc = 0x3eff04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 4));
label_3eff08:
    // 0x3eff08: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x3eff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_3eff0c:
    // 0x3eff0c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3eff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3eff10:
    // 0x3eff10: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3eff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3eff14:
    // 0x3eff14: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x3eff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
label_3eff18:
    // 0x3eff18: 0xae0400a0  sw          $a0, 0xA0($s0)
    ctx->pc = 0x3eff18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 4));
label_3eff1c:
    // 0x3eff1c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x3eff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_3eff20:
    // 0x3eff20: 0x8c63fa60  lw          $v1, -0x5A0($v1)
    ctx->pc = 0x3eff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965856)));
label_3eff24:
    // 0x3eff24: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3eff24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3eff28:
    // 0x3eff28: 0x602027  not         $a0, $v1
    ctx->pc = 0x3eff28u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3eff2c:
    // 0x3eff2c: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x3eff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_3eff30:
    // 0x3eff30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3eff30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3eff34:
    // 0x3eff34: 0x10000074  b           . + 4 + (0x74 << 2)
label_3eff38:
    if (ctx->pc == 0x3EFF38u) {
        ctx->pc = 0x3EFF38u;
            // 0x3eff38: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->pc = 0x3EFF3Cu;
        goto label_3eff3c;
    }
    ctx->pc = 0x3EFF34u;
    {
        const bool branch_taken_0x3eff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFF34u;
            // 0x3eff38: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff34) {
            ctx->pc = 0x3F0108u;
            goto label_3f0108;
        }
    }
    ctx->pc = 0x3EFF3Cu;
label_3eff3c:
    // 0x3eff3c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3eff3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3eff40:
    // 0x3eff40: 0x320f809  jalr        $t9
label_3eff44:
    if (ctx->pc == 0x3EFF44u) {
        ctx->pc = 0x3EFF48u;
        goto label_3eff48;
    }
    ctx->pc = 0x3EFF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EFF48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EFF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EFF48u; }
            if (ctx->pc != 0x3EFF48u) { return; }
        }
        }
    }
    ctx->pc = 0x3EFF48u;
label_3eff48:
    // 0x3eff48: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x3eff48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_3eff4c:
    // 0x3eff4c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3eff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3eff50:
    // 0x3eff50: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3eff50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3eff54:
    // 0x3eff54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3eff54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3eff58:
    // 0x3eff58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eff58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eff5c:
    // 0x3eff5c: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x3eff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3eff60:
    // 0x3eff60: 0x3c03bca3  lui         $v1, 0xBCA3
    ctx->pc = 0x3eff60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48291 << 16));
label_3eff64:
    // 0x3eff64: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x3eff64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_3eff68:
    // 0x3eff68: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x3eff68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
label_3eff6c:
    // 0x3eff6c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x3eff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3eff70:
    // 0x3eff70: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3eff70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3eff74:
    // 0x3eff74: 0x0  nop
    ctx->pc = 0x3eff74u;
    // NOP
label_3eff78:
    // 0x3eff78: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3eff78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3eff7c:
    // 0x3eff7c: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3eff7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3eff80:
    // 0x3eff80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eff80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eff84:
    // 0x3eff84: 0x0  nop
    ctx->pc = 0x3eff84u;
    // NOP
label_3eff88:
    // 0x3eff88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3eff88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eff8c:
    // 0x3eff8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3eff90:
    if (ctx->pc == 0x3EFF90u) {
        ctx->pc = 0x3EFF90u;
            // 0x3eff90: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x3EFF94u;
        goto label_3eff94;
    }
    ctx->pc = 0x3EFF8Cu;
    {
        const bool branch_taken_0x3eff8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EFF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFF8Cu;
            // 0x3eff90: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eff8c) {
            ctx->pc = 0x3EFF98u;
            goto label_3eff98;
        }
    }
    ctx->pc = 0x3EFF94u;
label_3eff94:
    // 0x3eff94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eff94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eff98:
    // 0x3eff98: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3eff9c:
    if (ctx->pc == 0x3EFF9Cu) {
        ctx->pc = 0x3EFF9Cu;
            // 0x3eff9c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3EFFA0u;
        goto label_3effa0;
    }
    ctx->pc = 0x3EFF98u;
    {
        const bool branch_taken_0x3eff98 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3eff98) {
            ctx->pc = 0x3EFF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFF98u;
            // 0x3eff9c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EFFACu;
            goto label_3effac;
        }
    }
    ctx->pc = 0x3EFFA0u;
label_3effa0:
    // 0x3effa0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3effa0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3effa4:
    // 0x3effa4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3effa8:
    if (ctx->pc == 0x3EFFA8u) {
        ctx->pc = 0x3EFFA8u;
            // 0x3effa8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3EFFACu;
        goto label_3effac;
    }
    ctx->pc = 0x3EFFA4u;
    {
        const bool branch_taken_0x3effa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EFFA4u;
            // 0x3effa8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3effa4) {
            ctx->pc = 0x3EFFC4u;
            goto label_3effc4;
        }
    }
    ctx->pc = 0x3EFFACu;
label_3effac:
    // 0x3effac: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3effacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3effb0:
    // 0x3effb0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3effb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3effb4:
    // 0x3effb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3effb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3effb8:
    // 0x3effb8: 0x0  nop
    ctx->pc = 0x3effb8u;
    // NOP
label_3effbc:
    // 0x3effbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3effbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3effc0:
    // 0x3effc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3effc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3effc4:
    // 0x3effc4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3effc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3effc8:
    // 0x3effc8: 0x3c05bca3  lui         $a1, 0xBCA3
    ctx->pc = 0x3effc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48291 << 16));
label_3effcc:
    // 0x3effcc: 0x34a6d70a  ori         $a2, $a1, 0xD70A
    ctx->pc = 0x3effccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
label_3effd0:
    // 0x3effd0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3effd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3effd4:
    // 0x3effd4: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x3effd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_3effd8:
    // 0x3effd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3effd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3effdc:
    // 0x3effdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3effdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3effe0:
    // 0x3effe0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3effe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3effe4:
    // 0x3effe4: 0x8e07009c  lw          $a3, 0x9C($s0)
    ctx->pc = 0x3effe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_3effe8:
    // 0x3effe8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3effe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3effec:
    // 0x3effec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3effecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3efff0:
    // 0x3efff0: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x3efff0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3efff4:
    // 0x3efff4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3efff4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3efff8:
    // 0x3efff8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x3efff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3efffc:
    // 0x3efffc: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x3efffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3f0000:
    // 0x3f0000: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3f0000u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f0004:
    // 0x3f0004: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x3f0004u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3f0008:
    // 0x3f0008: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f0008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f000c:
    // 0x3f000c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f0010:
    if (ctx->pc == 0x3F0010u) {
        ctx->pc = 0x3F0010u;
            // 0x3f0010: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x3F0014u;
        goto label_3f0014;
    }
    ctx->pc = 0x3F000Cu;
    {
        const bool branch_taken_0x3f000c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F0010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F000Cu;
            // 0x3f0010: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f000c) {
            ctx->pc = 0x3F0018u;
            goto label_3f0018;
        }
    }
    ctx->pc = 0x3F0014u;
label_3f0014:
    // 0x3f0014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0018:
    // 0x3f0018: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3f001c:
    if (ctx->pc == 0x3F001Cu) {
        ctx->pc = 0x3F001Cu;
            // 0x3f001c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3F0020u;
        goto label_3f0020;
    }
    ctx->pc = 0x3F0018u;
    {
        const bool branch_taken_0x3f0018 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3f0018) {
            ctx->pc = 0x3F001Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0018u;
            // 0x3f001c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F002Cu;
            goto label_3f002c;
        }
    }
    ctx->pc = 0x3F0020u;
label_3f0020:
    // 0x3f0020: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f0020u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0024:
    // 0x3f0024: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f0028:
    if (ctx->pc == 0x3F0028u) {
        ctx->pc = 0x3F0028u;
            // 0x3f0028: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F002Cu;
        goto label_3f002c;
    }
    ctx->pc = 0x3F0024u;
    {
        const bool branch_taken_0x3f0024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0024u;
            // 0x3f0028: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0024) {
            ctx->pc = 0x3F0044u;
            goto label_3f0044;
        }
    }
    ctx->pc = 0x3F002Cu;
label_3f002c:
    // 0x3f002c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3f002cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3f0030:
    // 0x3f0030: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3f0030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3f0034:
    // 0x3f0034: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f0034u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0038:
    // 0x3f0038: 0x0  nop
    ctx->pc = 0x3f0038u;
    // NOP
label_3f003c:
    // 0x3f003c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3f003cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f0040:
    // 0x3f0040: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3f0040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3f0044:
    // 0x3f0044: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3f0044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0048:
    // 0x3f0048: 0x3c05bca3  lui         $a1, 0xBCA3
    ctx->pc = 0x3f0048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48291 << 16));
label_3f004c:
    // 0x3f004c: 0x34a6d70a  ori         $a2, $a1, 0xD70A
    ctx->pc = 0x3f004cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
label_3f0050:
    // 0x3f0050: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f0050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f0054:
    // 0x3f0054: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x3f0054u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0058:
    // 0x3f0058: 0x3c04c0a0  lui         $a0, 0xC0A0
    ctx->pc = 0x3f0058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49312 << 16));
label_3f005c:
    // 0x3f005c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f005cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f0060:
    // 0x3f0060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f0060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0064:
    // 0x3f0064: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3f0064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_3f0068:
    // 0x3f0068: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x3f0068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3f006c:
    // 0x3f006c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f006cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0070:
    // 0x3f0070: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f0070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f0074:
    // 0x3f0074: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f0074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0078:
    // 0x3f0078: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3f0078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f007c:
    // 0x3f007c: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x3f007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3f0080:
    // 0x3f0080: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3f0080u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f0084:
    // 0x3f0084: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3f0084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3f0088:
    // 0x3f0088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f0088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f008c:
    // 0x3f008c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3f0090:
    if (ctx->pc == 0x3F0090u) {
        ctx->pc = 0x3F0090u;
            // 0x3f0090: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = 0x3F0094u;
        goto label_3f0094;
    }
    ctx->pc = 0x3F008Cu;
    {
        const bool branch_taken_0x3f008c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F0090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F008Cu;
            // 0x3f0090: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f008c) {
            ctx->pc = 0x3F0098u;
            goto label_3f0098;
        }
    }
    ctx->pc = 0x3F0094u;
label_3f0094:
    // 0x3f0094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0098:
    // 0x3f0098: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3f009c:
    if (ctx->pc == 0x3F009Cu) {
        ctx->pc = 0x3F009Cu;
            // 0x3f009c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3F00A0u;
        goto label_3f00a0;
    }
    ctx->pc = 0x3F0098u;
    {
        const bool branch_taken_0x3f0098 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3f0098) {
            ctx->pc = 0x3F009Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0098u;
            // 0x3f009c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F00ACu;
            goto label_3f00ac;
        }
    }
    ctx->pc = 0x3F00A0u;
label_3f00a0:
    // 0x3f00a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f00a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f00a4:
    // 0x3f00a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f00a8:
    if (ctx->pc == 0x3F00A8u) {
        ctx->pc = 0x3F00A8u;
            // 0x3f00a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F00ACu;
        goto label_3f00ac;
    }
    ctx->pc = 0x3F00A4u;
    {
        const bool branch_taken_0x3f00a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F00A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F00A4u;
            // 0x3f00a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00a4) {
            ctx->pc = 0x3F00C4u;
            goto label_3f00c4;
        }
    }
    ctx->pc = 0x3F00ACu;
label_3f00ac:
    // 0x3f00ac: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3f00acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3f00b0:
    // 0x3f00b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3f00b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3f00b4:
    // 0x3f00b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f00b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f00b8:
    // 0x3f00b8: 0x0  nop
    ctx->pc = 0x3f00b8u;
    // NOP
label_3f00bc:
    // 0x3f00bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3f00bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f00c0:
    // 0x3f00c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3f00c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3f00c4:
    // 0x3f00c4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3f00c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f00c8:
    // 0x3f00c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f00c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f00cc:
    // 0x3f00cc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3f00ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3f00d0:
    // 0x3f00d0: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3f00d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3f00d4:
    // 0x3f00d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3f00d8:
    if (ctx->pc == 0x3F00D8u) {
        ctx->pc = 0x3F00DCu;
        goto label_3f00dc;
    }
    ctx->pc = 0x3F00D4u;
    {
        const bool branch_taken_0x3f00d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f00d4) {
            ctx->pc = 0x3F0108u;
            goto label_3f0108;
        }
    }
    ctx->pc = 0x3F00DCu;
label_3f00dc:
    // 0x3f00dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f00dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f00e0:
    // 0x3f00e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f00e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f00e4:
    // 0x3f00e4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3f00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3f00e8:
    // 0x3f00e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3f00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3f00ec:
    // 0x3f00ec: 0xc0e3658  jal         func_38D960
label_3f00f0:
    if (ctx->pc == 0x3F00F0u) {
        ctx->pc = 0x3F00F0u;
            // 0x3f00f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3F00F4u;
        goto label_3f00f4;
    }
    ctx->pc = 0x3F00ECu;
    SET_GPR_U32(ctx, 31, 0x3F00F4u);
    ctx->pc = 0x3F00F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F00ECu;
            // 0x3f00f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F00F4u; }
        if (ctx->pc != 0x3F00F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F00F4u; }
        if (ctx->pc != 0x3F00F4u) { return; }
    }
    ctx->pc = 0x3F00F4u;
label_3f00f4:
    // 0x3f00f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3f00f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3f00f8:
    // 0x3f00f8: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3f00f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3f00fc:
    // 0x3f00fc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3f0100:
    if (ctx->pc == 0x3F0100u) {
        ctx->pc = 0x3F0100u;
            // 0x3f0100: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3F0104u;
        goto label_3f0104;
    }
    ctx->pc = 0x3F00FCu;
    {
        const bool branch_taken_0x3f00fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F00FCu;
            // 0x3f0100: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00fc) {
            ctx->pc = 0x3F00E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f00e4;
        }
    }
    ctx->pc = 0x3F0104u;
label_3f0104:
    // 0x3f0104: 0x0  nop
    ctx->pc = 0x3f0104u;
    // NOP
label_3f0108:
    // 0x3f0108: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f010c:
    // 0x3f010c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f010cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0110:
    // 0x3f0110: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0114:
    // 0x3f0114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0118:
    // 0x3f0118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f011c:
    // 0x3f011c: 0x3e00008  jr          $ra
label_3f0120:
    if (ctx->pc == 0x3F0120u) {
        ctx->pc = 0x3F0120u;
            // 0x3f0120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F0124u;
        goto label_3f0124;
    }
    ctx->pc = 0x3F011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F011Cu;
            // 0x3f0120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0124u;
label_3f0124:
    // 0x3f0124: 0x0  nop
    ctx->pc = 0x3f0124u;
    // NOP
label_3f0128:
    // 0x3f0128: 0x0  nop
    ctx->pc = 0x3f0128u;
    // NOP
label_3f012c:
    // 0x3f012c: 0x0  nop
    ctx->pc = 0x3f012cu;
    // NOP
label_3f0130:
    // 0x3f0130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f0134:
    // 0x3f0134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f0138:
    // 0x3f0138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f0138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f013c:
    // 0x3f013c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0140:
    // 0x3f0140: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f0140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f0144:
    // 0x3f0144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0148:
    // 0x3f0148: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3f0148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3f014c:
    // 0x3f014c: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_3f0150:
    if (ctx->pc == 0x3F0150u) {
        ctx->pc = 0x3F0150u;
            // 0x3f0150: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x3F0154u;
        goto label_3f0154;
    }
    ctx->pc = 0x3F014Cu;
    {
        const bool branch_taken_0x3f014c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F014Cu;
            // 0x3f0150: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f014c) {
            ctx->pc = 0x3F0300u;
            goto label_3f0300;
        }
    }
    ctx->pc = 0x3F0154u;
label_3f0154:
    // 0x3f0154: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3f0154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f0158:
    // 0x3f0158: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x3f0158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_3f015c:
    // 0x3f015c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f015cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f0160:
    // 0x3f0160: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3f0160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3f0164:
    // 0x3f0164: 0x320f809  jalr        $t9
label_3f0168:
    if (ctx->pc == 0x3F0168u) {
        ctx->pc = 0x3F016Cu;
        goto label_3f016c;
    }
    ctx->pc = 0x3F0164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F016Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F016Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F016Cu; }
            if (ctx->pc != 0x3F016Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F016Cu;
label_3f016c:
    // 0x3f016c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f016cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0170:
    // 0x3f0170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0174:
    // 0x3f0174: 0xc075128  jal         func_1D44A0
label_3f0178:
    if (ctx->pc == 0x3F0178u) {
        ctx->pc = 0x3F0178u;
            // 0x3f0178: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3F017Cu;
        goto label_3f017c;
    }
    ctx->pc = 0x3F0174u;
    SET_GPR_U32(ctx, 31, 0x3F017Cu);
    ctx->pc = 0x3F0178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0174u;
            // 0x3f0178: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F017Cu; }
        if (ctx->pc != 0x3F017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F017Cu; }
        if (ctx->pc != 0x3F017Cu) { return; }
    }
    ctx->pc = 0x3F017Cu;
label_3f017c:
    // 0x3f017c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0180:
    // 0x3f0180: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0184:
    // 0x3f0184: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3f0188:
    // 0x3f0188: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3f0188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3f018c:
    // 0x3f018c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f018cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f0190:
    // 0x3f0190: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f0194:
    if (ctx->pc == 0x3F0194u) {
        ctx->pc = 0x3F0194u;
            // 0x3f0194: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3F0198u;
        goto label_3f0198;
    }
    ctx->pc = 0x3F0190u;
    {
        const bool branch_taken_0x3f0190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0190) {
            ctx->pc = 0x3F0194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0190u;
            // 0x3f0194: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F01A4u;
            goto label_3f01a4;
        }
    }
    ctx->pc = 0x3F0198u;
label_3f0198:
    // 0x3f0198: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f019c:
    // 0x3f019c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3f019cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3f01a0:
    // 0x3f01a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f01a4:
    // 0x3f01a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f01a8:
    // 0x3f01a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3f01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3f01ac:
    // 0x3f01ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3f01acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3f01b0:
    // 0x3f01b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f01b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f01b4:
    // 0x3f01b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f01b8:
    if (ctx->pc == 0x3F01B8u) {
        ctx->pc = 0x3F01B8u;
            // 0x3f01b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3F01BCu;
        goto label_3f01bc;
    }
    ctx->pc = 0x3F01B4u;
    {
        const bool branch_taken_0x3f01b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f01b4) {
            ctx->pc = 0x3F01B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F01B4u;
            // 0x3f01b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F01C8u;
            goto label_3f01c8;
        }
    }
    ctx->pc = 0x3F01BCu;
label_3f01bc:
    // 0x3f01bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f01c0:
    // 0x3f01c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3f01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3f01c4:
    // 0x3f01c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f01c8:
    // 0x3f01c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f01cc:
    // 0x3f01cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3f01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3f01d0:
    // 0x3f01d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3f01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3f01d4:
    // 0x3f01d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f01d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f01d8:
    // 0x3f01d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f01dc:
    if (ctx->pc == 0x3F01DCu) {
        ctx->pc = 0x3F01DCu;
            // 0x3f01dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3F01E0u;
        goto label_3f01e0;
    }
    ctx->pc = 0x3F01D8u;
    {
        const bool branch_taken_0x3f01d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f01d8) {
            ctx->pc = 0x3F01DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F01D8u;
            // 0x3f01dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F01ECu;
            goto label_3f01ec;
        }
    }
    ctx->pc = 0x3F01E0u;
label_3f01e0:
    // 0x3f01e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f01e4:
    // 0x3f01e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3f01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3f01e8:
    // 0x3f01e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f01ec:
    // 0x3f01ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f01f0:
    // 0x3f01f0: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3f01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3f01f4:
    // 0x3f01f4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3f01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3f01f8:
    // 0x3f01f8: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x3f01f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3f01fc:
    // 0x3f01fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f01fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f0200:
    // 0x3f0200: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f0204:
    if (ctx->pc == 0x3F0204u) {
        ctx->pc = 0x3F0204u;
            // 0x3f0204: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3F0208u;
        goto label_3f0208;
    }
    ctx->pc = 0x3F0200u;
    {
        const bool branch_taken_0x3f0200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0200) {
            ctx->pc = 0x3F0204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0200u;
            // 0x3f0204: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0214u;
            goto label_3f0214;
        }
    }
    ctx->pc = 0x3F0208u;
label_3f0208:
    // 0x3f0208: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f020c:
    // 0x3f020c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3f020cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3f0210:
    // 0x3f0210: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0214:
    // 0x3f0214: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0218:
    // 0x3f0218: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3f0218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3f021c:
    // 0x3f021c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3f021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3f0220:
    // 0x3f0220: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x3f0220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3f0224:
    // 0x3f0224: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3f0224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f0228:
    // 0x3f0228: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f022c:
    if (ctx->pc == 0x3F022Cu) {
        ctx->pc = 0x3F022Cu;
            // 0x3f022c: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x3F0230u;
        goto label_3f0230;
    }
    ctx->pc = 0x3F0228u;
    {
        const bool branch_taken_0x3f0228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0228) {
            ctx->pc = 0x3F022Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0228u;
            // 0x3f022c: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F023Cu;
            goto label_3f023c;
        }
    }
    ctx->pc = 0x3F0230u;
label_3f0230:
    // 0x3f0230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f0230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f0234:
    // 0x3f0234: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3f0234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3f0238:
    // 0x3f0238: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3f0238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3f023c:
    // 0x3f023c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3f023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3f0240:
    // 0x3f0240: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3f0240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3f0244:
    // 0x3f0244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f0244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0248:
    // 0x3f0248: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f0248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f024c:
    // 0x3f024c: 0xc074f30  jal         func_1D3CC0
label_3f0250:
    if (ctx->pc == 0x3F0250u) {
        ctx->pc = 0x3F0250u;
            // 0x3f0250: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3F0254u;
        goto label_3f0254;
    }
    ctx->pc = 0x3F024Cu;
    SET_GPR_U32(ctx, 31, 0x3F0254u);
    ctx->pc = 0x3F0250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F024Cu;
            // 0x3f0250: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0254u; }
        if (ctx->pc != 0x3F0254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0254u; }
        if (ctx->pc != 0x3F0254u) { return; }
    }
    ctx->pc = 0x3F0254u;
label_3f0254:
    // 0x3f0254: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x3f0254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3f0258:
    // 0x3f0258: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3f0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_3f025c:
    // 0x3f025c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f025cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0260:
    // 0x3f0260: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x3f0260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3f0264:
    // 0x3f0264: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3f0264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3f0268:
    // 0x3f0268: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x3f0268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3f026c:
    // 0x3f026c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3f026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3f0270:
    // 0x3f0270: 0xc0751b8  jal         func_1D46E0
label_3f0274:
    if (ctx->pc == 0x3F0274u) {
        ctx->pc = 0x3F0274u;
            // 0x3f0274: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3F0278u;
        goto label_3f0278;
    }
    ctx->pc = 0x3F0270u;
    SET_GPR_U32(ctx, 31, 0x3F0278u);
    ctx->pc = 0x3F0274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0270u;
            // 0x3f0274: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0278u; }
        if (ctx->pc != 0x3F0278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F0278u; }
        if (ctx->pc != 0x3F0278u) { return; }
    }
    ctx->pc = 0x3F0278u;
label_3f0278:
    // 0x3f0278: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3f0278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3f027c:
    // 0x3f027c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f0280:
    // 0x3f0280: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3f0280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3f0284:
    // 0x3f0284: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3f0284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3f0288:
    // 0x3f0288: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x3f0288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3f028c:
    // 0x3f028c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3f028cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f0290:
    // 0x3f0290: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f0294:
    if (ctx->pc == 0x3F0294u) {
        ctx->pc = 0x3F0294u;
            // 0x3f0294: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x3F0298u;
        goto label_3f0298;
    }
    ctx->pc = 0x3F0290u;
    {
        const bool branch_taken_0x3f0290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0290) {
            ctx->pc = 0x3F0294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0290u;
            // 0x3f0294: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F02A4u;
            goto label_3f02a4;
        }
    }
    ctx->pc = 0x3F0298u;
label_3f0298:
    // 0x3f0298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f0298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f029c:
    // 0x3f029c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3f029cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3f02a0:
    // 0x3f02a0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3f02a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3f02a4:
    // 0x3f02a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f02a8:
    // 0x3f02a8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3f02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3f02ac:
    // 0x3f02ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3f02acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3f02b0:
    // 0x3f02b0: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x3f02b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3f02b4:
    // 0x3f02b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3f02b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f02b8:
    // 0x3f02b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3f02bc:
    if (ctx->pc == 0x3F02BCu) {
        ctx->pc = 0x3F02C0u;
        goto label_3f02c0;
    }
    ctx->pc = 0x3F02B8u;
    {
        const bool branch_taken_0x3f02b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f02b8) {
            ctx->pc = 0x3F02C8u;
            goto label_3f02c8;
        }
    }
    ctx->pc = 0x3F02C0u;
label_3f02c0:
    // 0x3f02c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f02c4:
    // 0x3f02c4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3f02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3f02c8:
    // 0x3f02c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f02cc:
    // 0x3f02cc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3f02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3f02d0:
    // 0x3f02d0: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3f02d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3f02d4:
    // 0x3f02d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3f02d8:
    if (ctx->pc == 0x3F02D8u) {
        ctx->pc = 0x3F02DCu;
        goto label_3f02dc;
    }
    ctx->pc = 0x3F02D4u;
    {
        const bool branch_taken_0x3f02d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f02d4) {
            ctx->pc = 0x3F02E4u;
            goto label_3f02e4;
        }
    }
    ctx->pc = 0x3F02DCu;
label_3f02dc:
    // 0x3f02dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f02e0:
    // 0x3f02e0: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x3f02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_3f02e4:
    // 0x3f02e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f02e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f02e8:
    // 0x3f02e8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3f02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3f02ec:
    // 0x3f02ec: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3f02ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3f02f0:
    // 0x3f02f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3f02f4:
    if (ctx->pc == 0x3F02F4u) {
        ctx->pc = 0x3F02F4u;
            // 0x3f02f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3F02F8u;
        goto label_3f02f8;
    }
    ctx->pc = 0x3F02F0u;
    {
        const bool branch_taken_0x3f02f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f02f0) {
            ctx->pc = 0x3F02F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F02F0u;
            // 0x3f02f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F0304u;
            goto label_3f0304;
        }
    }
    ctx->pc = 0x3F02F8u;
label_3f02f8:
    // 0x3f02f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3f02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3f02fc:
    // 0x3f02fc: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x3f02fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_3f0300:
    // 0x3f0300: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f0300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0304:
    // 0x3f0304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0308:
    // 0x3f0308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f030c:
    // 0x3f030c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f030cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0310:
    // 0x3f0310: 0x3e00008  jr          $ra
label_3f0314:
    if (ctx->pc == 0x3F0314u) {
        ctx->pc = 0x3F0314u;
            // 0x3f0314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F0318u;
        goto label_3f0318;
    }
    ctx->pc = 0x3F0310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0310u;
            // 0x3f0314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0318u;
label_3f0318:
    // 0x3f0318: 0x0  nop
    ctx->pc = 0x3f0318u;
    // NOP
label_3f031c:
    // 0x3f031c: 0x0  nop
    ctx->pc = 0x3f031cu;
    // NOP
label_3f0320:
    // 0x3f0320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f0324:
    // 0x3f0324: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f0328:
    // 0x3f0328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f0328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f032c:
    // 0x3f032c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f0330:
    // 0x3f0330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0334:
    // 0x3f0334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0338:
    // 0x3f0338: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3f0338u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3f033c:
    // 0x3f033c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3f0340:
    if (ctx->pc == 0x3F0340u) {
        ctx->pc = 0x3F0340u;
            // 0x3f0340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F0344u;
        goto label_3f0344;
    }
    ctx->pc = 0x3F033Cu;
    {
        const bool branch_taken_0x3f033c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F0340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F033Cu;
            // 0x3f0340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f033c) {
            ctx->pc = 0x3F0378u;
            goto label_3f0378;
        }
    }
    ctx->pc = 0x3F0344u;
label_3f0344:
    // 0x3f0344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3f0344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0348:
    // 0x3f0348: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f0348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f034c:
    // 0x3f034c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3f034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3f0350:
    // 0x3f0350: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3f0350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3f0354:
    // 0x3f0354: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3f0354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0358:
    // 0x3f0358: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f0358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f035c:
    // 0x3f035c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3f035cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3f0360:
    // 0x3f0360: 0x320f809  jalr        $t9
label_3f0364:
    if (ctx->pc == 0x3F0364u) {
        ctx->pc = 0x3F0368u;
        goto label_3f0368;
    }
    ctx->pc = 0x3F0360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F0368u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F0368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F0368u; }
            if (ctx->pc != 0x3F0368u) { return; }
        }
        }
    }
    ctx->pc = 0x3F0368u;
label_3f0368:
    // 0x3f0368: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3f0368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3f036c:
    // 0x3f036c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3f036cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3f0370:
    // 0x3f0370: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3f0374:
    if (ctx->pc == 0x3F0374u) {
        ctx->pc = 0x3F0374u;
            // 0x3f0374: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3F0378u;
        goto label_3f0378;
    }
    ctx->pc = 0x3F0370u;
    {
        const bool branch_taken_0x3f0370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F0374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F0370u;
            // 0x3f0374: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0370) {
            ctx->pc = 0x3F034Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f034c;
        }
    }
    ctx->pc = 0x3F0378u;
label_3f0378:
    // 0x3f0378: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f037c:
    // 0x3f037c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f037cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0380:
    // 0x3f0380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0384:
    // 0x3f0384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0388:
    // 0x3f0388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f038c:
    // 0x3f038c: 0x3e00008  jr          $ra
label_3f0390:
    if (ctx->pc == 0x3F0390u) {
        ctx->pc = 0x3F0390u;
            // 0x3f0390: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F0394u;
        goto label_3f0394;
    }
    ctx->pc = 0x3F038Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F038Cu;
            // 0x3f0390: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0394u;
label_3f0394:
    // 0x3f0394: 0x0  nop
    ctx->pc = 0x3f0394u;
    // NOP
label_3f0398:
    // 0x3f0398: 0x0  nop
    ctx->pc = 0x3f0398u;
    // NOP
label_3f039c:
    // 0x3f039c: 0x0  nop
    ctx->pc = 0x3f039cu;
    // NOP
}
