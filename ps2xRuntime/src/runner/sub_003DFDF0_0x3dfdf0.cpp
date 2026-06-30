#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DFDF0
// Address: 0x3dfdf0 - 0x3e05a0
void sub_003DFDF0_0x3dfdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFDF0_0x3dfdf0");
#endif

    switch (ctx->pc) {
        case 0x3dfdf0u: goto label_3dfdf0;
        case 0x3dfdf4u: goto label_3dfdf4;
        case 0x3dfdf8u: goto label_3dfdf8;
        case 0x3dfdfcu: goto label_3dfdfc;
        case 0x3dfe00u: goto label_3dfe00;
        case 0x3dfe04u: goto label_3dfe04;
        case 0x3dfe08u: goto label_3dfe08;
        case 0x3dfe0cu: goto label_3dfe0c;
        case 0x3dfe10u: goto label_3dfe10;
        case 0x3dfe14u: goto label_3dfe14;
        case 0x3dfe18u: goto label_3dfe18;
        case 0x3dfe1cu: goto label_3dfe1c;
        case 0x3dfe20u: goto label_3dfe20;
        case 0x3dfe24u: goto label_3dfe24;
        case 0x3dfe28u: goto label_3dfe28;
        case 0x3dfe2cu: goto label_3dfe2c;
        case 0x3dfe30u: goto label_3dfe30;
        case 0x3dfe34u: goto label_3dfe34;
        case 0x3dfe38u: goto label_3dfe38;
        case 0x3dfe3cu: goto label_3dfe3c;
        case 0x3dfe40u: goto label_3dfe40;
        case 0x3dfe44u: goto label_3dfe44;
        case 0x3dfe48u: goto label_3dfe48;
        case 0x3dfe4cu: goto label_3dfe4c;
        case 0x3dfe50u: goto label_3dfe50;
        case 0x3dfe54u: goto label_3dfe54;
        case 0x3dfe58u: goto label_3dfe58;
        case 0x3dfe5cu: goto label_3dfe5c;
        case 0x3dfe60u: goto label_3dfe60;
        case 0x3dfe64u: goto label_3dfe64;
        case 0x3dfe68u: goto label_3dfe68;
        case 0x3dfe6cu: goto label_3dfe6c;
        case 0x3dfe70u: goto label_3dfe70;
        case 0x3dfe74u: goto label_3dfe74;
        case 0x3dfe78u: goto label_3dfe78;
        case 0x3dfe7cu: goto label_3dfe7c;
        case 0x3dfe80u: goto label_3dfe80;
        case 0x3dfe84u: goto label_3dfe84;
        case 0x3dfe88u: goto label_3dfe88;
        case 0x3dfe8cu: goto label_3dfe8c;
        case 0x3dfe90u: goto label_3dfe90;
        case 0x3dfe94u: goto label_3dfe94;
        case 0x3dfe98u: goto label_3dfe98;
        case 0x3dfe9cu: goto label_3dfe9c;
        case 0x3dfea0u: goto label_3dfea0;
        case 0x3dfea4u: goto label_3dfea4;
        case 0x3dfea8u: goto label_3dfea8;
        case 0x3dfeacu: goto label_3dfeac;
        case 0x3dfeb0u: goto label_3dfeb0;
        case 0x3dfeb4u: goto label_3dfeb4;
        case 0x3dfeb8u: goto label_3dfeb8;
        case 0x3dfebcu: goto label_3dfebc;
        case 0x3dfec0u: goto label_3dfec0;
        case 0x3dfec4u: goto label_3dfec4;
        case 0x3dfec8u: goto label_3dfec8;
        case 0x3dfeccu: goto label_3dfecc;
        case 0x3dfed0u: goto label_3dfed0;
        case 0x3dfed4u: goto label_3dfed4;
        case 0x3dfed8u: goto label_3dfed8;
        case 0x3dfedcu: goto label_3dfedc;
        case 0x3dfee0u: goto label_3dfee0;
        case 0x3dfee4u: goto label_3dfee4;
        case 0x3dfee8u: goto label_3dfee8;
        case 0x3dfeecu: goto label_3dfeec;
        case 0x3dfef0u: goto label_3dfef0;
        case 0x3dfef4u: goto label_3dfef4;
        case 0x3dfef8u: goto label_3dfef8;
        case 0x3dfefcu: goto label_3dfefc;
        case 0x3dff00u: goto label_3dff00;
        case 0x3dff04u: goto label_3dff04;
        case 0x3dff08u: goto label_3dff08;
        case 0x3dff0cu: goto label_3dff0c;
        case 0x3dff10u: goto label_3dff10;
        case 0x3dff14u: goto label_3dff14;
        case 0x3dff18u: goto label_3dff18;
        case 0x3dff1cu: goto label_3dff1c;
        case 0x3dff20u: goto label_3dff20;
        case 0x3dff24u: goto label_3dff24;
        case 0x3dff28u: goto label_3dff28;
        case 0x3dff2cu: goto label_3dff2c;
        case 0x3dff30u: goto label_3dff30;
        case 0x3dff34u: goto label_3dff34;
        case 0x3dff38u: goto label_3dff38;
        case 0x3dff3cu: goto label_3dff3c;
        case 0x3dff40u: goto label_3dff40;
        case 0x3dff44u: goto label_3dff44;
        case 0x3dff48u: goto label_3dff48;
        case 0x3dff4cu: goto label_3dff4c;
        case 0x3dff50u: goto label_3dff50;
        case 0x3dff54u: goto label_3dff54;
        case 0x3dff58u: goto label_3dff58;
        case 0x3dff5cu: goto label_3dff5c;
        case 0x3dff60u: goto label_3dff60;
        case 0x3dff64u: goto label_3dff64;
        case 0x3dff68u: goto label_3dff68;
        case 0x3dff6cu: goto label_3dff6c;
        case 0x3dff70u: goto label_3dff70;
        case 0x3dff74u: goto label_3dff74;
        case 0x3dff78u: goto label_3dff78;
        case 0x3dff7cu: goto label_3dff7c;
        case 0x3dff80u: goto label_3dff80;
        case 0x3dff84u: goto label_3dff84;
        case 0x3dff88u: goto label_3dff88;
        case 0x3dff8cu: goto label_3dff8c;
        case 0x3dff90u: goto label_3dff90;
        case 0x3dff94u: goto label_3dff94;
        case 0x3dff98u: goto label_3dff98;
        case 0x3dff9cu: goto label_3dff9c;
        case 0x3dffa0u: goto label_3dffa0;
        case 0x3dffa4u: goto label_3dffa4;
        case 0x3dffa8u: goto label_3dffa8;
        case 0x3dffacu: goto label_3dffac;
        case 0x3dffb0u: goto label_3dffb0;
        case 0x3dffb4u: goto label_3dffb4;
        case 0x3dffb8u: goto label_3dffb8;
        case 0x3dffbcu: goto label_3dffbc;
        case 0x3dffc0u: goto label_3dffc0;
        case 0x3dffc4u: goto label_3dffc4;
        case 0x3dffc8u: goto label_3dffc8;
        case 0x3dffccu: goto label_3dffcc;
        case 0x3dffd0u: goto label_3dffd0;
        case 0x3dffd4u: goto label_3dffd4;
        case 0x3dffd8u: goto label_3dffd8;
        case 0x3dffdcu: goto label_3dffdc;
        case 0x3dffe0u: goto label_3dffe0;
        case 0x3dffe4u: goto label_3dffe4;
        case 0x3dffe8u: goto label_3dffe8;
        case 0x3dffecu: goto label_3dffec;
        case 0x3dfff0u: goto label_3dfff0;
        case 0x3dfff4u: goto label_3dfff4;
        case 0x3dfff8u: goto label_3dfff8;
        case 0x3dfffcu: goto label_3dfffc;
        case 0x3e0000u: goto label_3e0000;
        case 0x3e0004u: goto label_3e0004;
        case 0x3e0008u: goto label_3e0008;
        case 0x3e000cu: goto label_3e000c;
        case 0x3e0010u: goto label_3e0010;
        case 0x3e0014u: goto label_3e0014;
        case 0x3e0018u: goto label_3e0018;
        case 0x3e001cu: goto label_3e001c;
        case 0x3e0020u: goto label_3e0020;
        case 0x3e0024u: goto label_3e0024;
        case 0x3e0028u: goto label_3e0028;
        case 0x3e002cu: goto label_3e002c;
        case 0x3e0030u: goto label_3e0030;
        case 0x3e0034u: goto label_3e0034;
        case 0x3e0038u: goto label_3e0038;
        case 0x3e003cu: goto label_3e003c;
        case 0x3e0040u: goto label_3e0040;
        case 0x3e0044u: goto label_3e0044;
        case 0x3e0048u: goto label_3e0048;
        case 0x3e004cu: goto label_3e004c;
        case 0x3e0050u: goto label_3e0050;
        case 0x3e0054u: goto label_3e0054;
        case 0x3e0058u: goto label_3e0058;
        case 0x3e005cu: goto label_3e005c;
        case 0x3e0060u: goto label_3e0060;
        case 0x3e0064u: goto label_3e0064;
        case 0x3e0068u: goto label_3e0068;
        case 0x3e006cu: goto label_3e006c;
        case 0x3e0070u: goto label_3e0070;
        case 0x3e0074u: goto label_3e0074;
        case 0x3e0078u: goto label_3e0078;
        case 0x3e007cu: goto label_3e007c;
        case 0x3e0080u: goto label_3e0080;
        case 0x3e0084u: goto label_3e0084;
        case 0x3e0088u: goto label_3e0088;
        case 0x3e008cu: goto label_3e008c;
        case 0x3e0090u: goto label_3e0090;
        case 0x3e0094u: goto label_3e0094;
        case 0x3e0098u: goto label_3e0098;
        case 0x3e009cu: goto label_3e009c;
        case 0x3e00a0u: goto label_3e00a0;
        case 0x3e00a4u: goto label_3e00a4;
        case 0x3e00a8u: goto label_3e00a8;
        case 0x3e00acu: goto label_3e00ac;
        case 0x3e00b0u: goto label_3e00b0;
        case 0x3e00b4u: goto label_3e00b4;
        case 0x3e00b8u: goto label_3e00b8;
        case 0x3e00bcu: goto label_3e00bc;
        case 0x3e00c0u: goto label_3e00c0;
        case 0x3e00c4u: goto label_3e00c4;
        case 0x3e00c8u: goto label_3e00c8;
        case 0x3e00ccu: goto label_3e00cc;
        case 0x3e00d0u: goto label_3e00d0;
        case 0x3e00d4u: goto label_3e00d4;
        case 0x3e00d8u: goto label_3e00d8;
        case 0x3e00dcu: goto label_3e00dc;
        case 0x3e00e0u: goto label_3e00e0;
        case 0x3e00e4u: goto label_3e00e4;
        case 0x3e00e8u: goto label_3e00e8;
        case 0x3e00ecu: goto label_3e00ec;
        case 0x3e00f0u: goto label_3e00f0;
        case 0x3e00f4u: goto label_3e00f4;
        case 0x3e00f8u: goto label_3e00f8;
        case 0x3e00fcu: goto label_3e00fc;
        case 0x3e0100u: goto label_3e0100;
        case 0x3e0104u: goto label_3e0104;
        case 0x3e0108u: goto label_3e0108;
        case 0x3e010cu: goto label_3e010c;
        case 0x3e0110u: goto label_3e0110;
        case 0x3e0114u: goto label_3e0114;
        case 0x3e0118u: goto label_3e0118;
        case 0x3e011cu: goto label_3e011c;
        case 0x3e0120u: goto label_3e0120;
        case 0x3e0124u: goto label_3e0124;
        case 0x3e0128u: goto label_3e0128;
        case 0x3e012cu: goto label_3e012c;
        case 0x3e0130u: goto label_3e0130;
        case 0x3e0134u: goto label_3e0134;
        case 0x3e0138u: goto label_3e0138;
        case 0x3e013cu: goto label_3e013c;
        case 0x3e0140u: goto label_3e0140;
        case 0x3e0144u: goto label_3e0144;
        case 0x3e0148u: goto label_3e0148;
        case 0x3e014cu: goto label_3e014c;
        case 0x3e0150u: goto label_3e0150;
        case 0x3e0154u: goto label_3e0154;
        case 0x3e0158u: goto label_3e0158;
        case 0x3e015cu: goto label_3e015c;
        case 0x3e0160u: goto label_3e0160;
        case 0x3e0164u: goto label_3e0164;
        case 0x3e0168u: goto label_3e0168;
        case 0x3e016cu: goto label_3e016c;
        case 0x3e0170u: goto label_3e0170;
        case 0x3e0174u: goto label_3e0174;
        case 0x3e0178u: goto label_3e0178;
        case 0x3e017cu: goto label_3e017c;
        case 0x3e0180u: goto label_3e0180;
        case 0x3e0184u: goto label_3e0184;
        case 0x3e0188u: goto label_3e0188;
        case 0x3e018cu: goto label_3e018c;
        case 0x3e0190u: goto label_3e0190;
        case 0x3e0194u: goto label_3e0194;
        case 0x3e0198u: goto label_3e0198;
        case 0x3e019cu: goto label_3e019c;
        case 0x3e01a0u: goto label_3e01a0;
        case 0x3e01a4u: goto label_3e01a4;
        case 0x3e01a8u: goto label_3e01a8;
        case 0x3e01acu: goto label_3e01ac;
        case 0x3e01b0u: goto label_3e01b0;
        case 0x3e01b4u: goto label_3e01b4;
        case 0x3e01b8u: goto label_3e01b8;
        case 0x3e01bcu: goto label_3e01bc;
        case 0x3e01c0u: goto label_3e01c0;
        case 0x3e01c4u: goto label_3e01c4;
        case 0x3e01c8u: goto label_3e01c8;
        case 0x3e01ccu: goto label_3e01cc;
        case 0x3e01d0u: goto label_3e01d0;
        case 0x3e01d4u: goto label_3e01d4;
        case 0x3e01d8u: goto label_3e01d8;
        case 0x3e01dcu: goto label_3e01dc;
        case 0x3e01e0u: goto label_3e01e0;
        case 0x3e01e4u: goto label_3e01e4;
        case 0x3e01e8u: goto label_3e01e8;
        case 0x3e01ecu: goto label_3e01ec;
        case 0x3e01f0u: goto label_3e01f0;
        case 0x3e01f4u: goto label_3e01f4;
        case 0x3e01f8u: goto label_3e01f8;
        case 0x3e01fcu: goto label_3e01fc;
        case 0x3e0200u: goto label_3e0200;
        case 0x3e0204u: goto label_3e0204;
        case 0x3e0208u: goto label_3e0208;
        case 0x3e020cu: goto label_3e020c;
        case 0x3e0210u: goto label_3e0210;
        case 0x3e0214u: goto label_3e0214;
        case 0x3e0218u: goto label_3e0218;
        case 0x3e021cu: goto label_3e021c;
        case 0x3e0220u: goto label_3e0220;
        case 0x3e0224u: goto label_3e0224;
        case 0x3e0228u: goto label_3e0228;
        case 0x3e022cu: goto label_3e022c;
        case 0x3e0230u: goto label_3e0230;
        case 0x3e0234u: goto label_3e0234;
        case 0x3e0238u: goto label_3e0238;
        case 0x3e023cu: goto label_3e023c;
        case 0x3e0240u: goto label_3e0240;
        case 0x3e0244u: goto label_3e0244;
        case 0x3e0248u: goto label_3e0248;
        case 0x3e024cu: goto label_3e024c;
        case 0x3e0250u: goto label_3e0250;
        case 0x3e0254u: goto label_3e0254;
        case 0x3e0258u: goto label_3e0258;
        case 0x3e025cu: goto label_3e025c;
        case 0x3e0260u: goto label_3e0260;
        case 0x3e0264u: goto label_3e0264;
        case 0x3e0268u: goto label_3e0268;
        case 0x3e026cu: goto label_3e026c;
        case 0x3e0270u: goto label_3e0270;
        case 0x3e0274u: goto label_3e0274;
        case 0x3e0278u: goto label_3e0278;
        case 0x3e027cu: goto label_3e027c;
        case 0x3e0280u: goto label_3e0280;
        case 0x3e0284u: goto label_3e0284;
        case 0x3e0288u: goto label_3e0288;
        case 0x3e028cu: goto label_3e028c;
        case 0x3e0290u: goto label_3e0290;
        case 0x3e0294u: goto label_3e0294;
        case 0x3e0298u: goto label_3e0298;
        case 0x3e029cu: goto label_3e029c;
        case 0x3e02a0u: goto label_3e02a0;
        case 0x3e02a4u: goto label_3e02a4;
        case 0x3e02a8u: goto label_3e02a8;
        case 0x3e02acu: goto label_3e02ac;
        case 0x3e02b0u: goto label_3e02b0;
        case 0x3e02b4u: goto label_3e02b4;
        case 0x3e02b8u: goto label_3e02b8;
        case 0x3e02bcu: goto label_3e02bc;
        case 0x3e02c0u: goto label_3e02c0;
        case 0x3e02c4u: goto label_3e02c4;
        case 0x3e02c8u: goto label_3e02c8;
        case 0x3e02ccu: goto label_3e02cc;
        case 0x3e02d0u: goto label_3e02d0;
        case 0x3e02d4u: goto label_3e02d4;
        case 0x3e02d8u: goto label_3e02d8;
        case 0x3e02dcu: goto label_3e02dc;
        case 0x3e02e0u: goto label_3e02e0;
        case 0x3e02e4u: goto label_3e02e4;
        case 0x3e02e8u: goto label_3e02e8;
        case 0x3e02ecu: goto label_3e02ec;
        case 0x3e02f0u: goto label_3e02f0;
        case 0x3e02f4u: goto label_3e02f4;
        case 0x3e02f8u: goto label_3e02f8;
        case 0x3e02fcu: goto label_3e02fc;
        case 0x3e0300u: goto label_3e0300;
        case 0x3e0304u: goto label_3e0304;
        case 0x3e0308u: goto label_3e0308;
        case 0x3e030cu: goto label_3e030c;
        case 0x3e0310u: goto label_3e0310;
        case 0x3e0314u: goto label_3e0314;
        case 0x3e0318u: goto label_3e0318;
        case 0x3e031cu: goto label_3e031c;
        case 0x3e0320u: goto label_3e0320;
        case 0x3e0324u: goto label_3e0324;
        case 0x3e0328u: goto label_3e0328;
        case 0x3e032cu: goto label_3e032c;
        case 0x3e0330u: goto label_3e0330;
        case 0x3e0334u: goto label_3e0334;
        case 0x3e0338u: goto label_3e0338;
        case 0x3e033cu: goto label_3e033c;
        case 0x3e0340u: goto label_3e0340;
        case 0x3e0344u: goto label_3e0344;
        case 0x3e0348u: goto label_3e0348;
        case 0x3e034cu: goto label_3e034c;
        case 0x3e0350u: goto label_3e0350;
        case 0x3e0354u: goto label_3e0354;
        case 0x3e0358u: goto label_3e0358;
        case 0x3e035cu: goto label_3e035c;
        case 0x3e0360u: goto label_3e0360;
        case 0x3e0364u: goto label_3e0364;
        case 0x3e0368u: goto label_3e0368;
        case 0x3e036cu: goto label_3e036c;
        case 0x3e0370u: goto label_3e0370;
        case 0x3e0374u: goto label_3e0374;
        case 0x3e0378u: goto label_3e0378;
        case 0x3e037cu: goto label_3e037c;
        case 0x3e0380u: goto label_3e0380;
        case 0x3e0384u: goto label_3e0384;
        case 0x3e0388u: goto label_3e0388;
        case 0x3e038cu: goto label_3e038c;
        case 0x3e0390u: goto label_3e0390;
        case 0x3e0394u: goto label_3e0394;
        case 0x3e0398u: goto label_3e0398;
        case 0x3e039cu: goto label_3e039c;
        case 0x3e03a0u: goto label_3e03a0;
        case 0x3e03a4u: goto label_3e03a4;
        case 0x3e03a8u: goto label_3e03a8;
        case 0x3e03acu: goto label_3e03ac;
        case 0x3e03b0u: goto label_3e03b0;
        case 0x3e03b4u: goto label_3e03b4;
        case 0x3e03b8u: goto label_3e03b8;
        case 0x3e03bcu: goto label_3e03bc;
        case 0x3e03c0u: goto label_3e03c0;
        case 0x3e03c4u: goto label_3e03c4;
        case 0x3e03c8u: goto label_3e03c8;
        case 0x3e03ccu: goto label_3e03cc;
        case 0x3e03d0u: goto label_3e03d0;
        case 0x3e03d4u: goto label_3e03d4;
        case 0x3e03d8u: goto label_3e03d8;
        case 0x3e03dcu: goto label_3e03dc;
        case 0x3e03e0u: goto label_3e03e0;
        case 0x3e03e4u: goto label_3e03e4;
        case 0x3e03e8u: goto label_3e03e8;
        case 0x3e03ecu: goto label_3e03ec;
        case 0x3e03f0u: goto label_3e03f0;
        case 0x3e03f4u: goto label_3e03f4;
        case 0x3e03f8u: goto label_3e03f8;
        case 0x3e03fcu: goto label_3e03fc;
        case 0x3e0400u: goto label_3e0400;
        case 0x3e0404u: goto label_3e0404;
        case 0x3e0408u: goto label_3e0408;
        case 0x3e040cu: goto label_3e040c;
        case 0x3e0410u: goto label_3e0410;
        case 0x3e0414u: goto label_3e0414;
        case 0x3e0418u: goto label_3e0418;
        case 0x3e041cu: goto label_3e041c;
        case 0x3e0420u: goto label_3e0420;
        case 0x3e0424u: goto label_3e0424;
        case 0x3e0428u: goto label_3e0428;
        case 0x3e042cu: goto label_3e042c;
        case 0x3e0430u: goto label_3e0430;
        case 0x3e0434u: goto label_3e0434;
        case 0x3e0438u: goto label_3e0438;
        case 0x3e043cu: goto label_3e043c;
        case 0x3e0440u: goto label_3e0440;
        case 0x3e0444u: goto label_3e0444;
        case 0x3e0448u: goto label_3e0448;
        case 0x3e044cu: goto label_3e044c;
        case 0x3e0450u: goto label_3e0450;
        case 0x3e0454u: goto label_3e0454;
        case 0x3e0458u: goto label_3e0458;
        case 0x3e045cu: goto label_3e045c;
        case 0x3e0460u: goto label_3e0460;
        case 0x3e0464u: goto label_3e0464;
        case 0x3e0468u: goto label_3e0468;
        case 0x3e046cu: goto label_3e046c;
        case 0x3e0470u: goto label_3e0470;
        case 0x3e0474u: goto label_3e0474;
        case 0x3e0478u: goto label_3e0478;
        case 0x3e047cu: goto label_3e047c;
        case 0x3e0480u: goto label_3e0480;
        case 0x3e0484u: goto label_3e0484;
        case 0x3e0488u: goto label_3e0488;
        case 0x3e048cu: goto label_3e048c;
        case 0x3e0490u: goto label_3e0490;
        case 0x3e0494u: goto label_3e0494;
        case 0x3e0498u: goto label_3e0498;
        case 0x3e049cu: goto label_3e049c;
        case 0x3e04a0u: goto label_3e04a0;
        case 0x3e04a4u: goto label_3e04a4;
        case 0x3e04a8u: goto label_3e04a8;
        case 0x3e04acu: goto label_3e04ac;
        case 0x3e04b0u: goto label_3e04b0;
        case 0x3e04b4u: goto label_3e04b4;
        case 0x3e04b8u: goto label_3e04b8;
        case 0x3e04bcu: goto label_3e04bc;
        case 0x3e04c0u: goto label_3e04c0;
        case 0x3e04c4u: goto label_3e04c4;
        case 0x3e04c8u: goto label_3e04c8;
        case 0x3e04ccu: goto label_3e04cc;
        case 0x3e04d0u: goto label_3e04d0;
        case 0x3e04d4u: goto label_3e04d4;
        case 0x3e04d8u: goto label_3e04d8;
        case 0x3e04dcu: goto label_3e04dc;
        case 0x3e04e0u: goto label_3e04e0;
        case 0x3e04e4u: goto label_3e04e4;
        case 0x3e04e8u: goto label_3e04e8;
        case 0x3e04ecu: goto label_3e04ec;
        case 0x3e04f0u: goto label_3e04f0;
        case 0x3e04f4u: goto label_3e04f4;
        case 0x3e04f8u: goto label_3e04f8;
        case 0x3e04fcu: goto label_3e04fc;
        case 0x3e0500u: goto label_3e0500;
        case 0x3e0504u: goto label_3e0504;
        case 0x3e0508u: goto label_3e0508;
        case 0x3e050cu: goto label_3e050c;
        case 0x3e0510u: goto label_3e0510;
        case 0x3e0514u: goto label_3e0514;
        case 0x3e0518u: goto label_3e0518;
        case 0x3e051cu: goto label_3e051c;
        case 0x3e0520u: goto label_3e0520;
        case 0x3e0524u: goto label_3e0524;
        case 0x3e0528u: goto label_3e0528;
        case 0x3e052cu: goto label_3e052c;
        case 0x3e0530u: goto label_3e0530;
        case 0x3e0534u: goto label_3e0534;
        case 0x3e0538u: goto label_3e0538;
        case 0x3e053cu: goto label_3e053c;
        case 0x3e0540u: goto label_3e0540;
        case 0x3e0544u: goto label_3e0544;
        case 0x3e0548u: goto label_3e0548;
        case 0x3e054cu: goto label_3e054c;
        case 0x3e0550u: goto label_3e0550;
        case 0x3e0554u: goto label_3e0554;
        case 0x3e0558u: goto label_3e0558;
        case 0x3e055cu: goto label_3e055c;
        case 0x3e0560u: goto label_3e0560;
        case 0x3e0564u: goto label_3e0564;
        case 0x3e0568u: goto label_3e0568;
        case 0x3e056cu: goto label_3e056c;
        case 0x3e0570u: goto label_3e0570;
        case 0x3e0574u: goto label_3e0574;
        case 0x3e0578u: goto label_3e0578;
        case 0x3e057cu: goto label_3e057c;
        case 0x3e0580u: goto label_3e0580;
        case 0x3e0584u: goto label_3e0584;
        case 0x3e0588u: goto label_3e0588;
        case 0x3e058cu: goto label_3e058c;
        case 0x3e0590u: goto label_3e0590;
        case 0x3e0594u: goto label_3e0594;
        case 0x3e0598u: goto label_3e0598;
        case 0x3e059cu: goto label_3e059c;
        default: break;
    }

    ctx->pc = 0x3dfdf0u;

label_3dfdf0:
    // 0x3dfdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dfdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dfdf4:
    // 0x3dfdf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dfdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dfdf8:
    // 0x3dfdf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dfdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dfdfc:
    // 0x3dfdfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dfe00:
    // 0x3dfe00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dfe00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfe04:
    // 0x3dfe04: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3dfe08:
    if (ctx->pc == 0x3DFE08u) {
        ctx->pc = 0x3DFE08u;
            // 0x3dfe08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE0Cu;
        goto label_3dfe0c;
    }
    ctx->pc = 0x3DFE04u;
    {
        const bool branch_taken_0x3dfe04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFE04u;
            // 0x3dfe08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe04) {
            ctx->pc = 0x3DFE34u;
            goto label_3dfe34;
        }
    }
    ctx->pc = 0x3DFE0Cu;
label_3dfe0c:
    // 0x3dfe0c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_3dfe10:
    if (ctx->pc == 0x3DFE10u) {
        ctx->pc = 0x3DFE10u;
            // 0x3dfe10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3DFE14u;
        goto label_3dfe14;
    }
    ctx->pc = 0x3DFE0Cu;
    {
        const bool branch_taken_0x3dfe0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfe0c) {
            ctx->pc = 0x3DFE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFE0Cu;
            // 0x3dfe10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFE20u;
            goto label_3dfe20;
        }
    }
    ctx->pc = 0x3DFE14u;
label_3dfe14:
    // 0x3dfe14: 0xc07507c  jal         func_1D41F0
label_3dfe18:
    if (ctx->pc == 0x3DFE18u) {
        ctx->pc = 0x3DFE18u;
            // 0x3dfe18: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3DFE1Cu;
        goto label_3dfe1c;
    }
    ctx->pc = 0x3DFE14u;
    SET_GPR_U32(ctx, 31, 0x3DFE1Cu);
    ctx->pc = 0x3DFE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFE14u;
            // 0x3dfe18: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFE1Cu; }
        if (ctx->pc != 0x3DFE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFE1Cu; }
        if (ctx->pc != 0x3DFE1Cu) { return; }
    }
    ctx->pc = 0x3DFE1Cu;
label_3dfe1c:
    // 0x3dfe1c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3dfe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3dfe20:
    // 0x3dfe20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dfe20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3dfe24:
    // 0x3dfe24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3dfe28:
    if (ctx->pc == 0x3DFE28u) {
        ctx->pc = 0x3DFE28u;
            // 0x3dfe28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE2Cu;
        goto label_3dfe2c;
    }
    ctx->pc = 0x3DFE24u;
    {
        const bool branch_taken_0x3dfe24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dfe24) {
            ctx->pc = 0x3DFE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFE24u;
            // 0x3dfe28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFE38u;
            goto label_3dfe38;
        }
    }
    ctx->pc = 0x3DFE2Cu;
label_3dfe2c:
    // 0x3dfe2c: 0xc0400a8  jal         func_1002A0
label_3dfe30:
    if (ctx->pc == 0x3DFE30u) {
        ctx->pc = 0x3DFE30u;
            // 0x3dfe30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE34u;
        goto label_3dfe34;
    }
    ctx->pc = 0x3DFE2Cu;
    SET_GPR_U32(ctx, 31, 0x3DFE34u);
    ctx->pc = 0x3DFE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFE2Cu;
            // 0x3dfe30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFE34u; }
        if (ctx->pc != 0x3DFE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFE34u; }
        if (ctx->pc != 0x3DFE34u) { return; }
    }
    ctx->pc = 0x3DFE34u;
label_3dfe34:
    // 0x3dfe34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3dfe34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dfe38:
    // 0x3dfe38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dfe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dfe3c:
    // 0x3dfe3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dfe3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfe40:
    // 0x3dfe40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfe40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfe44:
    // 0x3dfe44: 0x3e00008  jr          $ra
label_3dfe48:
    if (ctx->pc == 0x3DFE48u) {
        ctx->pc = 0x3DFE48u;
            // 0x3dfe48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DFE4Cu;
        goto label_3dfe4c;
    }
    ctx->pc = 0x3DFE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFE44u;
            // 0x3dfe48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DFE4Cu;
label_3dfe4c:
    // 0x3dfe4c: 0x0  nop
    ctx->pc = 0x3dfe4cu;
    // NOP
label_3dfe50:
    // 0x3dfe50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dfe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dfe54:
    // 0x3dfe54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dfe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dfe58:
    // 0x3dfe58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dfe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dfe5c:
    // 0x3dfe5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dfe60:
    // 0x3dfe60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dfe60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfe64:
    // 0x3dfe64: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_3dfe68:
    if (ctx->pc == 0x3DFE68u) {
        ctx->pc = 0x3DFE68u;
            // 0x3dfe68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE6Cu;
        goto label_3dfe6c;
    }
    ctx->pc = 0x3DFE64u;
    {
        const bool branch_taken_0x3dfe64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFE64u;
            // 0x3dfe68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe64) {
            ctx->pc = 0x3DFF6Cu;
            goto label_3dff6c;
        }
    }
    ctx->pc = 0x3DFE6Cu;
label_3dfe6c:
    // 0x3dfe6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dfe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3dfe70:
    // 0x3dfe70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dfe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3dfe74:
    // 0x3dfe74: 0x24639b80  addiu       $v1, $v1, -0x6480
    ctx->pc = 0x3dfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941568));
label_3dfe78:
    // 0x3dfe78: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x3dfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_3dfe7c:
    // 0x3dfe7c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dfe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3dfe80:
    // 0x3dfe80: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3dfe80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3dfe84:
    // 0x3dfe84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dfe84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dfe88:
    // 0x3dfe88: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3dfe88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3dfe8c:
    // 0x3dfe8c: 0x320f809  jalr        $t9
label_3dfe90:
    if (ctx->pc == 0x3DFE90u) {
        ctx->pc = 0x3DFE94u;
        goto label_3dfe94;
    }
    ctx->pc = 0x3DFE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DFE94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DFE94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DFE94u; }
            if (ctx->pc != 0x3DFE94u) { return; }
        }
        }
    }
    ctx->pc = 0x3DFE94u;
label_3dfe94:
    // 0x3dfe94: 0x26220074  addiu       $v0, $s1, 0x74
    ctx->pc = 0x3dfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_3dfe98:
    // 0x3dfe98: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3dfe9c:
    if (ctx->pc == 0x3DFE9Cu) {
        ctx->pc = 0x3DFEA0u;
        goto label_3dfea0;
    }
    ctx->pc = 0x3DFE98u;
    {
        const bool branch_taken_0x3dfe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfe98) {
            ctx->pc = 0x3DFED4u;
            goto label_3dfed4;
        }
    }
    ctx->pc = 0x3DFEA0u;
label_3dfea0:
    // 0x3dfea0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3dfea4:
    if (ctx->pc == 0x3DFEA4u) {
        ctx->pc = 0x3DFEA8u;
        goto label_3dfea8;
    }
    ctx->pc = 0x3DFEA0u;
    {
        const bool branch_taken_0x3dfea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfea0) {
            ctx->pc = 0x3DFED4u;
            goto label_3dfed4;
        }
    }
    ctx->pc = 0x3DFEA8u;
label_3dfea8:
    // 0x3dfea8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3dfeac:
    if (ctx->pc == 0x3DFEACu) {
        ctx->pc = 0x3DFEB0u;
        goto label_3dfeb0;
    }
    ctx->pc = 0x3DFEA8u;
    {
        const bool branch_taken_0x3dfea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfea8) {
            ctx->pc = 0x3DFED4u;
            goto label_3dfed4;
        }
    }
    ctx->pc = 0x3DFEB0u;
label_3dfeb0:
    // 0x3dfeb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3dfeb4:
    if (ctx->pc == 0x3DFEB4u) {
        ctx->pc = 0x3DFEB8u;
        goto label_3dfeb8;
    }
    ctx->pc = 0x3DFEB0u;
    {
        const bool branch_taken_0x3dfeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfeb0) {
            ctx->pc = 0x3DFED4u;
            goto label_3dfed4;
        }
    }
    ctx->pc = 0x3DFEB8u;
label_3dfeb8:
    // 0x3dfeb8: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x3dfeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3dfebc:
    // 0x3dfebc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3dfec0:
    if (ctx->pc == 0x3DFEC0u) {
        ctx->pc = 0x3DFEC4u;
        goto label_3dfec4;
    }
    ctx->pc = 0x3DFEBCu;
    {
        const bool branch_taken_0x3dfebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfebc) {
            ctx->pc = 0x3DFED4u;
            goto label_3dfed4;
        }
    }
    ctx->pc = 0x3DFEC4u;
label_3dfec4:
    // 0x3dfec4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3dfec8:
    if (ctx->pc == 0x3DFEC8u) {
        ctx->pc = 0x3DFECCu;
        goto label_3dfecc;
    }
    ctx->pc = 0x3DFEC4u;
    {
        const bool branch_taken_0x3dfec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfec4) {
            ctx->pc = 0x3DFED4u;
            goto label_3dfed4;
        }
    }
    ctx->pc = 0x3DFECCu;
label_3dfecc:
    // 0x3dfecc: 0xc0fe48c  jal         func_3F9230
label_3dfed0:
    if (ctx->pc == 0x3DFED0u) {
        ctx->pc = 0x3DFED0u;
            // 0x3dfed0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3DFED4u;
        goto label_3dfed4;
    }
    ctx->pc = 0x3DFECCu;
    SET_GPR_U32(ctx, 31, 0x3DFED4u);
    ctx->pc = 0x3DFED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFECCu;
            // 0x3dfed0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFED4u; }
        if (ctx->pc != 0x3DFED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFED4u; }
        if (ctx->pc != 0x3DFED4u) { return; }
    }
    ctx->pc = 0x3DFED4u;
label_3dfed4:
    // 0x3dfed4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_3dfed8:
    if (ctx->pc == 0x3DFED8u) {
        ctx->pc = 0x3DFED8u;
            // 0x3dfed8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3DFEDCu;
        goto label_3dfedc;
    }
    ctx->pc = 0x3DFED4u;
    {
        const bool branch_taken_0x3dfed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfed4) {
            ctx->pc = 0x3DFED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFED4u;
            // 0x3dfed8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFF58u;
            goto label_3dff58;
        }
    }
    ctx->pc = 0x3DFEDCu;
label_3dfedc:
    // 0x3dfedc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dfedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dfee0:
    // 0x3dfee0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3dfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3dfee4:
    // 0x3dfee4: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x3dfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_3dfee8:
    // 0x3dfee8: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x3dfee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_3dfeec:
    // 0x3dfeec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3dfeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3dfef0:
    // 0x3dfef0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x3dfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3dfef4:
    // 0x3dfef4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3dfef8:
    if (ctx->pc == 0x3DFEF8u) {
        ctx->pc = 0x3DFEF8u;
            // 0x3dfef8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3DFEFCu;
        goto label_3dfefc;
    }
    ctx->pc = 0x3DFEF4u;
    {
        const bool branch_taken_0x3dfef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFEF4u;
            // 0x3dfef8: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfef4) {
            ctx->pc = 0x3DFF30u;
            goto label_3dff30;
        }
    }
    ctx->pc = 0x3DFEFCu;
label_3dfefc:
    // 0x3dfefc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dff00:
    // 0x3dff00: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x3dff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_3dff04:
    // 0x3dff04: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3dff04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3dff08:
    // 0x3dff08: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3dff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3dff0c:
    // 0x3dff0c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3dff10:
    if (ctx->pc == 0x3DFF10u) {
        ctx->pc = 0x3DFF14u;
        goto label_3dff14;
    }
    ctx->pc = 0x3DFF0Cu;
    {
        const bool branch_taken_0x3dff0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dff0c) {
            ctx->pc = 0x3DFF30u;
            goto label_3dff30;
        }
    }
    ctx->pc = 0x3DFF14u;
label_3dff14:
    // 0x3dff14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3dff18:
    if (ctx->pc == 0x3DFF18u) {
        ctx->pc = 0x3DFF18u;
            // 0x3dff18: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3DFF1Cu;
        goto label_3dff1c;
    }
    ctx->pc = 0x3DFF14u;
    {
        const bool branch_taken_0x3dff14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dff14) {
            ctx->pc = 0x3DFF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFF14u;
            // 0x3dff18: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFF30u;
            goto label_3dff30;
        }
    }
    ctx->pc = 0x3DFF1Cu;
label_3dff1c:
    // 0x3dff1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dff1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dff20:
    // 0x3dff20: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3dff20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3dff24:
    // 0x3dff24: 0x320f809  jalr        $t9
label_3dff28:
    if (ctx->pc == 0x3DFF28u) {
        ctx->pc = 0x3DFF28u;
            // 0x3dff28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DFF2Cu;
        goto label_3dff2c;
    }
    ctx->pc = 0x3DFF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DFF2Cu);
        ctx->pc = 0x3DFF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFF24u;
            // 0x3dff28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DFF2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DFF2Cu; }
            if (ctx->pc != 0x3DFF2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3DFF2Cu;
label_3dff2c:
    // 0x3dff2c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3dff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3dff30:
    // 0x3dff30: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3dff34:
    if (ctx->pc == 0x3DFF34u) {
        ctx->pc = 0x3DFF38u;
        goto label_3dff38;
    }
    ctx->pc = 0x3DFF30u;
    {
        const bool branch_taken_0x3dff30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dff30) {
            ctx->pc = 0x3DFF54u;
            goto label_3dff54;
        }
    }
    ctx->pc = 0x3DFF38u;
label_3dff38:
    // 0x3dff38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dff3c:
    // 0x3dff3c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3dff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3dff40:
    // 0x3dff40: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3dff44:
    if (ctx->pc == 0x3DFF44u) {
        ctx->pc = 0x3DFF44u;
            // 0x3dff44: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3DFF48u;
        goto label_3dff48;
    }
    ctx->pc = 0x3DFF40u;
    {
        const bool branch_taken_0x3dff40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFF40u;
            // 0x3dff44: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dff40) {
            ctx->pc = 0x3DFF54u;
            goto label_3dff54;
        }
    }
    ctx->pc = 0x3DFF48u;
label_3dff48:
    // 0x3dff48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3dff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3dff4c:
    // 0x3dff4c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3dff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3dff50:
    // 0x3dff50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3dff50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3dff54:
    // 0x3dff54: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3dff54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3dff58:
    // 0x3dff58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dff58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3dff5c:
    // 0x3dff5c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3dff60:
    if (ctx->pc == 0x3DFF60u) {
        ctx->pc = 0x3DFF60u;
            // 0x3dff60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF64u;
        goto label_3dff64;
    }
    ctx->pc = 0x3DFF5Cu;
    {
        const bool branch_taken_0x3dff5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dff5c) {
            ctx->pc = 0x3DFF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFF5Cu;
            // 0x3dff60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFF70u;
            goto label_3dff70;
        }
    }
    ctx->pc = 0x3DFF64u;
label_3dff64:
    // 0x3dff64: 0xc0400a8  jal         func_1002A0
label_3dff68:
    if (ctx->pc == 0x3DFF68u) {
        ctx->pc = 0x3DFF68u;
            // 0x3dff68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFF6Cu;
        goto label_3dff6c;
    }
    ctx->pc = 0x3DFF64u;
    SET_GPR_U32(ctx, 31, 0x3DFF6Cu);
    ctx->pc = 0x3DFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFF64u;
            // 0x3dff68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFF6Cu; }
        if (ctx->pc != 0x3DFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFF6Cu; }
        if (ctx->pc != 0x3DFF6Cu) { return; }
    }
    ctx->pc = 0x3DFF6Cu;
label_3dff6c:
    // 0x3dff6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3dff6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dff70:
    // 0x3dff70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dff70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dff74:
    // 0x3dff74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dff74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dff78:
    // 0x3dff78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dff78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dff7c:
    // 0x3dff7c: 0x3e00008  jr          $ra
label_3dff80:
    if (ctx->pc == 0x3DFF80u) {
        ctx->pc = 0x3DFF80u;
            // 0x3dff80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DFF84u;
        goto label_3dff84;
    }
    ctx->pc = 0x3DFF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFF7Cu;
            // 0x3dff80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DFF84u;
label_3dff84:
    // 0x3dff84: 0x0  nop
    ctx->pc = 0x3dff84u;
    // NOP
label_3dff88:
    // 0x3dff88: 0x0  nop
    ctx->pc = 0x3dff88u;
    // NOP
label_3dff8c:
    // 0x3dff8c: 0x0  nop
    ctx->pc = 0x3dff8cu;
    // NOP
label_3dff90:
    // 0x3dff90: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x3dff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_3dff94:
    // 0x3dff94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3dff94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3dff98:
    // 0x3dff98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3dff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3dff9c:
    // 0x3dff9c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3dff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3dffa0:
    // 0x3dffa0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3dffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3dffa4:
    // 0x3dffa4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3dffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3dffa8:
    // 0x3dffa8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3dffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3dffac:
    // 0x3dffac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3dffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3dffb0:
    // 0x3dffb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3dffb4:
    // 0x3dffb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3dffb8:
    // 0x3dffb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3dffbc:
    // 0x3dffbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3dffc0:
    // 0x3dffc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dffc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3dffc4:
    // 0x3dffc4: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3dffc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3dffc8:
    // 0x3dffc8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3dffc8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3dffcc:
    // 0x3dffcc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3dffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dffd0:
    // 0x3dffd0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3dffd4:
    if (ctx->pc == 0x3DFFD4u) {
        ctx->pc = 0x3DFFD4u;
            // 0x3dffd4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFFD8u;
        goto label_3dffd8;
    }
    ctx->pc = 0x3DFFD0u;
    {
        const bool branch_taken_0x3dffd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DFFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFFD0u;
            // 0x3dffd4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dffd0) {
            ctx->pc = 0x3E0014u;
            goto label_3e0014;
        }
    }
    ctx->pc = 0x3DFFD8u;
label_3dffd8:
    // 0x3dffd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dffdc:
    // 0x3dffdc: 0x50a30164  beql        $a1, $v1, . + 4 + (0x164 << 2)
label_3dffe0:
    if (ctx->pc == 0x3DFFE0u) {
        ctx->pc = 0x3DFFE0u;
            // 0x3dffe0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3DFFE4u;
        goto label_3dffe4;
    }
    ctx->pc = 0x3DFFDCu;
    {
        const bool branch_taken_0x3dffdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dffdc) {
            ctx->pc = 0x3DFFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFFDCu;
            // 0x3dffe0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0570u;
            goto label_3e0570;
        }
    }
    ctx->pc = 0x3DFFE4u;
label_3dffe4:
    // 0x3dffe4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dffe8:
    // 0x3dffe8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3dffec:
    if (ctx->pc == 0x3DFFECu) {
        ctx->pc = 0x3DFFECu;
            // 0x3dffec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3DFFF0u;
        goto label_3dfff0;
    }
    ctx->pc = 0x3DFFE8u;
    {
        const bool branch_taken_0x3dffe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dffe8) {
            ctx->pc = 0x3DFFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFFE8u;
            // 0x3dffec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFFF8u;
            goto label_3dfff8;
        }
    }
    ctx->pc = 0x3DFFF0u;
label_3dfff0:
    // 0x3dfff0: 0x1000015e  b           . + 4 + (0x15E << 2)
label_3dfff4:
    if (ctx->pc == 0x3DFFF4u) {
        ctx->pc = 0x3DFFF8u;
        goto label_3dfff8;
    }
    ctx->pc = 0x3DFFF0u;
    {
        const bool branch_taken_0x3dfff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfff0) {
            ctx->pc = 0x3E056Cu;
            goto label_3e056c;
        }
    }
    ctx->pc = 0x3DFFF8u;
label_3dfff8:
    // 0x3dfff8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3dfff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3dfffc:
    // 0x3dfffc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3dfffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3e0000:
    // 0x3e0000: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e0000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e0004:
    // 0x3e0004: 0x320f809  jalr        $t9
label_3e0008:
    if (ctx->pc == 0x3E0008u) {
        ctx->pc = 0x3E0008u;
            // 0x3e0008: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3E000Cu;
        goto label_3e000c;
    }
    ctx->pc = 0x3E0004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E000Cu);
        ctx->pc = 0x3E0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0004u;
            // 0x3e0008: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E000Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E000Cu; }
            if (ctx->pc != 0x3E000Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3E000Cu;
label_3e000c:
    // 0x3e000c: 0x10000157  b           . + 4 + (0x157 << 2)
label_3e0010:
    if (ctx->pc == 0x3E0010u) {
        ctx->pc = 0x3E0014u;
        goto label_3e0014;
    }
    ctx->pc = 0x3E000Cu;
    {
        const bool branch_taken_0x3e000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e000c) {
            ctx->pc = 0x3E056Cu;
            goto label_3e056c;
        }
    }
    ctx->pc = 0x3E0014u;
label_3e0014:
    // 0x3e0014: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x3e0014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_3e0018:
    // 0x3e0018: 0x10600154  beqz        $v1, . + 4 + (0x154 << 2)
label_3e001c:
    if (ctx->pc == 0x3E001Cu) {
        ctx->pc = 0x3E0020u;
        goto label_3e0020;
    }
    ctx->pc = 0x3E0018u;
    {
        const bool branch_taken_0x3e0018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0018) {
            ctx->pc = 0x3E056Cu;
            goto label_3e056c;
        }
    }
    ctx->pc = 0x3E0020u;
label_3e0020:
    // 0x3e0020: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3e0020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3e0024:
    // 0x3e0024: 0x8e450074  lw          $a1, 0x74($s2)
    ctx->pc = 0x3e0024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_3e0028:
    // 0x3e0028: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x3e0028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3e002c:
    // 0x3e002c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x3e002cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_3e0030:
    // 0x3e0030: 0x26530084  addiu       $s3, $s2, 0x84
    ctx->pc = 0x3e0030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_3e0034:
    // 0x3e0034: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x3e0034u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3e0038:
    // 0x3e0038: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e0038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e003c:
    // 0x3e003c: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x3e003cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3e0040:
    // 0x3e0040: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3e0040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3e0044:
    // 0x3e0044: 0x8cb0e370  lw          $s0, -0x1C90($a1)
    ctx->pc = 0x3e0044u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959984)));
label_3e0048:
    // 0x3e0048: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x3e0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3e004c:
    // 0x3e004c: 0x8c86d120  lw          $a2, -0x2EE0($a0)
    ctx->pc = 0x3e004cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
label_3e0050:
    // 0x3e0050: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x3e0050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e0054:
    // 0x3e0054: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e0054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3e0058:
    // 0x3e0058: 0x8c95e418  lw          $s5, -0x1BE8($a0)
    ctx->pc = 0x3e0058u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960152)));
label_3e005c:
    // 0x3e005c: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x3e005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3e0060:
    // 0x3e0060: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e0060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e0064:
    // 0x3e0064: 0x8e860060  lw          $a2, 0x60($s4)
    ctx->pc = 0x3e0064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3e0068:
    // 0x3e0068: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3e0068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e006c:
    // 0x3e006c: 0x28c40005  slti        $a0, $a2, 0x5
    ctx->pc = 0x3e006cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_3e0070:
    // 0x3e0070: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x3e0070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3e0074:
    // 0x3e0074: 0x28c40009  slti        $a0, $a2, 0x9
    ctx->pc = 0x3e0074u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_3e0078:
    // 0x3e0078: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3e0078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3e007c:
    // 0x3e007c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3e007cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_3e0080:
    // 0x3e0080: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3e0084:
    if (ctx->pc == 0x3E0084u) {
        ctx->pc = 0x3E0084u;
            // 0x3e0084: 0x24f70010  addiu       $s7, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x3E0088u;
        goto label_3e0088;
    }
    ctx->pc = 0x3E0080u;
    {
        const bool branch_taken_0x3e0080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0080u;
            // 0x3e0084: 0x24f70010  addiu       $s7, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0080) {
            ctx->pc = 0x3E00A0u;
            goto label_3e00a0;
        }
    }
    ctx->pc = 0x3E0088u;
label_3e0088:
    // 0x3e0088: 0x8e8402e0  lw          $a0, 0x2E0($s4)
    ctx->pc = 0x3e0088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
label_3e008c:
    // 0x3e008c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0090:
    // 0x3e0090: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x3e0090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_3e0094:
    // 0x3e0094: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3e0094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3e0098:
    // 0x3e0098: 0x10600134  beqz        $v1, . + 4 + (0x134 << 2)
label_3e009c:
    if (ctx->pc == 0x3E009Cu) {
        ctx->pc = 0x3E00A0u;
        goto label_3e00a0;
    }
    ctx->pc = 0x3E0098u;
    {
        const bool branch_taken_0x3e0098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0098) {
            ctx->pc = 0x3E056Cu;
            goto label_3e056c;
        }
    }
    ctx->pc = 0x3E00A0u;
label_3e00a0:
    // 0x3e00a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e00a4:
    // 0x3e00a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e00a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e00a8:
    // 0x3e00a8: 0x8e8302d4  lw          $v1, 0x2D4($s4)
    ctx->pc = 0x3e00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 724)));
label_3e00ac:
    // 0x3e00ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e00acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e00b0:
    // 0x3e00b0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3e00b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e00b4:
    // 0x3e00b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e00b8:
    // 0x3e00b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3e00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3e00bc:
    // 0x3e00bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e00c0:
    // 0x3e00c0: 0xc04e4a4  jal         func_139290
label_3e00c4:
    if (ctx->pc == 0x3E00C4u) {
        ctx->pc = 0x3E00C4u;
            // 0x3e00c4: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x3E00C8u;
        goto label_3e00c8;
    }
    ctx->pc = 0x3E00C0u;
    SET_GPR_U32(ctx, 31, 0x3E00C8u);
    ctx->pc = 0x3E00C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E00C0u;
            // 0x3e00c4: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E00C8u; }
        if (ctx->pc != 0x3E00C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E00C8u; }
        if (ctx->pc != 0x3E00C8u) { return; }
    }
    ctx->pc = 0x3E00C8u;
label_3e00c8:
    // 0x3e00c8: 0xc04e738  jal         func_139CE0
label_3e00cc:
    if (ctx->pc == 0x3E00CCu) {
        ctx->pc = 0x3E00CCu;
            // 0x3e00cc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3E00D0u;
        goto label_3e00d0;
    }
    ctx->pc = 0x3E00C8u;
    SET_GPR_U32(ctx, 31, 0x3E00D0u);
    ctx->pc = 0x3E00CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E00C8u;
            // 0x3e00cc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E00D0u; }
        if (ctx->pc != 0x3E00D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E00D0u; }
        if (ctx->pc != 0x3E00D0u) { return; }
    }
    ctx->pc = 0x3E00D0u;
label_3e00d0:
    // 0x3e00d0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3e00d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e00d4:
    // 0x3e00d4: 0x8e8502e4  lw          $a1, 0x2E4($s4)
    ctx->pc = 0x3e00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
label_3e00d8:
    // 0x3e00d8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e00d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e00dc:
    // 0x3e00dc: 0x320f809  jalr        $t9
label_3e00e0:
    if (ctx->pc == 0x3E00E0u) {
        ctx->pc = 0x3E00E0u;
            // 0x3e00e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E00E4u;
        goto label_3e00e4;
    }
    ctx->pc = 0x3E00DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E00E4u);
        ctx->pc = 0x3E00E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E00DCu;
            // 0x3e00e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E00E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E00E4u; }
            if (ctx->pc != 0x3E00E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E00E4u;
label_3e00e4:
    // 0x3e00e4: 0x928202d9  lbu         $v0, 0x2D9($s4)
    ctx->pc = 0x3e00e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 729)));
label_3e00e8:
    // 0x3e00e8: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_3e00ec:
    if (ctx->pc == 0x3E00ECu) {
        ctx->pc = 0x3E00ECu;
            // 0x3e00ec: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3E00F0u;
        goto label_3e00f0;
    }
    ctx->pc = 0x3E00E8u;
    {
        const bool branch_taken_0x3e00e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E00ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E00E8u;
            // 0x3e00ec: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e00e8) {
            ctx->pc = 0x3E03C8u;
            goto label_3e03c8;
        }
    }
    ctx->pc = 0x3E00F0u;
label_3e00f0:
    // 0x3e00f0: 0xc0d1c10  jal         func_347040
label_3e00f4:
    if (ctx->pc == 0x3E00F4u) {
        ctx->pc = 0x3E00F4u;
            // 0x3e00f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E00F8u;
        goto label_3e00f8;
    }
    ctx->pc = 0x3E00F0u;
    SET_GPR_U32(ctx, 31, 0x3E00F8u);
    ctx->pc = 0x3E00F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E00F0u;
            // 0x3e00f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E00F8u; }
        if (ctx->pc != 0x3E00F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E00F8u; }
        if (ctx->pc != 0x3E00F8u) { return; }
    }
    ctx->pc = 0x3E00F8u;
label_3e00f8:
    // 0x3e00f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e00f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e00fc:
    // 0x3e00fc: 0xc04cc04  jal         func_133010
label_3e0100:
    if (ctx->pc == 0x3E0100u) {
        ctx->pc = 0x3E0100u;
            // 0x3e0100: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x3E0104u;
        goto label_3e0104;
    }
    ctx->pc = 0x3E00FCu;
    SET_GPR_U32(ctx, 31, 0x3E0104u);
    ctx->pc = 0x3E0100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E00FCu;
            // 0x3e0100: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0104u; }
        if (ctx->pc != 0x3E0104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0104u; }
        if (ctx->pc != 0x3E0104u) { return; }
    }
    ctx->pc = 0x3E0104u;
label_3e0104:
    // 0x3e0104: 0xc0f81a8  jal         func_3E06A0
label_3e0108:
    if (ctx->pc == 0x3E0108u) {
        ctx->pc = 0x3E0108u;
            // 0x3e0108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E010Cu;
        goto label_3e010c;
    }
    ctx->pc = 0x3E0104u;
    SET_GPR_U32(ctx, 31, 0x3E010Cu);
    ctx->pc = 0x3E0108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0104u;
            // 0x3e0108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    if (runtime->hasFunction(0x3E06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E010Cu; }
        if (ctx->pc != 0x3E010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E06A0_0x3e06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E010Cu; }
        if (ctx->pc != 0x3E010Cu) { return; }
    }
    ctx->pc = 0x3E010Cu;
label_3e010c:
    // 0x3e010c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e010cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0110:
    // 0x3e0110: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_3e0114:
    if (ctx->pc == 0x3E0114u) {
        ctx->pc = 0x3E0114u;
            // 0x3e0114: 0xc694027c  lwc1        $f20, 0x27C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x3E0118u;
        goto label_3e0118;
    }
    ctx->pc = 0x3E0110u;
    {
        const bool branch_taken_0x3e0110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0110) {
            ctx->pc = 0x3E0114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0110u;
            // 0x3e0114: 0xc694027c  lwc1        $f20, 0x27C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E013Cu;
            goto label_3e013c;
        }
    }
    ctx->pc = 0x3E0118u;
label_3e0118:
    // 0x3e0118: 0xc0f81a8  jal         func_3E06A0
label_3e011c:
    if (ctx->pc == 0x3E011Cu) {
        ctx->pc = 0x3E011Cu;
            // 0x3e011c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0120u;
        goto label_3e0120;
    }
    ctx->pc = 0x3E0118u;
    SET_GPR_U32(ctx, 31, 0x3E0120u);
    ctx->pc = 0x3E011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0118u;
            // 0x3e011c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    if (runtime->hasFunction(0x3E06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0120u; }
        if (ctx->pc != 0x3E0120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E06A0_0x3e06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0120u; }
        if (ctx->pc != 0x3E0120u) { return; }
    }
    ctx->pc = 0x3E0120u;
label_3e0120:
    // 0x3e0120: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e0124:
    // 0x3e0124: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_3e0128:
    if (ctx->pc == 0x3E0128u) {
        ctx->pc = 0x3E012Cu;
        goto label_3e012c;
    }
    ctx->pc = 0x3E0124u;
    {
        const bool branch_taken_0x3e0124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e0124) {
            ctx->pc = 0x3E0138u;
            goto label_3e0138;
        }
    }
    ctx->pc = 0x3E012Cu;
label_3e012c:
    // 0x3e012c: 0x928202d8  lbu         $v0, 0x2D8($s4)
    ctx->pc = 0x3e012cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 728)));
label_3e0130:
    // 0x3e0130: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_3e0134:
    if (ctx->pc == 0x3E0134u) {
        ctx->pc = 0x3E0134u;
            // 0x3e0134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0138u;
        goto label_3e0138;
    }
    ctx->pc = 0x3E0130u;
    {
        const bool branch_taken_0x3e0130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0130) {
            ctx->pc = 0x3E0134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0130u;
            // 0x3e0134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E01F8u;
            goto label_3e01f8;
        }
    }
    ctx->pc = 0x3E0138u;
label_3e0138:
    // 0x3e0138: 0xc694027c  lwc1        $f20, 0x27C($s4)
    ctx->pc = 0x3e0138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e013c:
    // 0x3e013c: 0xc0f81a8  jal         func_3E06A0
label_3e0140:
    if (ctx->pc == 0x3E0140u) {
        ctx->pc = 0x3E0140u;
            // 0x3e0140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0144u;
        goto label_3e0144;
    }
    ctx->pc = 0x3E013Cu;
    SET_GPR_U32(ctx, 31, 0x3E0144u);
    ctx->pc = 0x3E0140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E013Cu;
            // 0x3e0140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    if (runtime->hasFunction(0x3E06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0144u; }
        if (ctx->pc != 0x3E0144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E06A0_0x3e06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0144u; }
        if (ctx->pc != 0x3E0144u) { return; }
    }
    ctx->pc = 0x3E0144u;
label_3e0144:
    // 0x3e0144: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e0144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e0148:
    // 0x3e0148: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_3e014c:
    if (ctx->pc == 0x3E014Cu) {
        ctx->pc = 0x3E014Cu;
            // 0x3e014c: 0xc681027c  lwc1        $f1, 0x27C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3E0150u;
        goto label_3e0150;
    }
    ctx->pc = 0x3E0148u;
    {
        const bool branch_taken_0x3e0148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0148) {
            ctx->pc = 0x3E014Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0148u;
            // 0x3e014c: 0xc681027c  lwc1        $f1, 0x27C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0164u;
            goto label_3e0164;
        }
    }
    ctx->pc = 0x3E0150u;
label_3e0150:
    // 0x3e0150: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3e0150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3e0154:
    // 0x3e0154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e0154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e0158:
    // 0x3e0158: 0x0  nop
    ctx->pc = 0x3e0158u;
    // NOP
label_3e015c:
    // 0x3e015c: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x3e015cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_3e0160:
    // 0x3e0160: 0xc681027c  lwc1        $f1, 0x27C($s4)
    ctx->pc = 0x3e0160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e0164:
    // 0x3e0164: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x3e0164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_3e0168:
    // 0x3e0168: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e0168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e016c:
    // 0x3e016c: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3e016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3e0170:
    // 0x3e0170: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3e0170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3e0174:
    // 0x3e0174: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3e0174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3e0178:
    // 0x3e0178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e0178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e017c:
    // 0x3e017c: 0x0  nop
    ctx->pc = 0x3e017cu;
    // NOP
label_3e0180:
    // 0x3e0180: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e0180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e0184:
    // 0x3e0184: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e0184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3e0188:
    // 0x3e0188: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3e0188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3e018c:
    // 0x3e018c: 0xc04f2d4  jal         func_13CB50
label_3e0190:
    if (ctx->pc == 0x3E0190u) {
        ctx->pc = 0x3E0190u;
            // 0x3e0190: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3E0194u;
        goto label_3e0194;
    }
    ctx->pc = 0x3E018Cu;
    SET_GPR_U32(ctx, 31, 0x3E0194u);
    ctx->pc = 0x3E0190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E018Cu;
            // 0x3e0190: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0194u; }
        if (ctx->pc != 0x3E0194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0194u; }
        if (ctx->pc != 0x3E0194u) { return; }
    }
    ctx->pc = 0x3E0194u;
label_3e0194:
    // 0x3e0194: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e0194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3e0198:
    // 0x3e0198: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3e0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3e019c:
    // 0x3e019c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3e019cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3e01a0:
    // 0x3e01a0: 0xc04cca0  jal         func_133280
label_3e01a4:
    if (ctx->pc == 0x3E01A4u) {
        ctx->pc = 0x3E01A4u;
            // 0x3e01a4: 0x24c6a070  addiu       $a2, $a2, -0x5F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
        ctx->pc = 0x3E01A8u;
        goto label_3e01a8;
    }
    ctx->pc = 0x3E01A0u;
    SET_GPR_U32(ctx, 31, 0x3E01A8u);
    ctx->pc = 0x3E01A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E01A0u;
            // 0x3e01a4: 0x24c6a070  addiu       $a2, $a2, -0x5F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01A8u; }
        if (ctx->pc != 0x3E01A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01A8u; }
        if (ctx->pc != 0x3E01A8u) { return; }
    }
    ctx->pc = 0x3E01A8u;
label_3e01a8:
    // 0x3e01a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e01ac:
    // 0x3e01ac: 0xc0d1c14  jal         func_347050
label_3e01b0:
    if (ctx->pc == 0x3E01B0u) {
        ctx->pc = 0x3E01B0u;
            // 0x3e01b0: 0xafa001b4  sw          $zero, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
        ctx->pc = 0x3E01B4u;
        goto label_3e01b4;
    }
    ctx->pc = 0x3E01ACu;
    SET_GPR_U32(ctx, 31, 0x3E01B4u);
    ctx->pc = 0x3E01B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E01ACu;
            // 0x3e01b0: 0xafa001b4  sw          $zero, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01B4u; }
        if (ctx->pc != 0x3E01B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01B4u; }
        if (ctx->pc != 0x3E01B4u) { return; }
    }
    ctx->pc = 0x3E01B4u;
label_3e01b4:
    // 0x3e01b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e01b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e01b8:
    // 0x3e01b8: 0xc04f278  jal         func_13C9E0
label_3e01bc:
    if (ctx->pc == 0x3E01BCu) {
        ctx->pc = 0x3E01BCu;
            // 0x3e01bc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3E01C0u;
        goto label_3e01c0;
    }
    ctx->pc = 0x3E01B8u;
    SET_GPR_U32(ctx, 31, 0x3E01C0u);
    ctx->pc = 0x3E01BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E01B8u;
            // 0x3e01bc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01C0u; }
        if (ctx->pc != 0x3E01C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01C0u; }
        if (ctx->pc != 0x3E01C0u) { return; }
    }
    ctx->pc = 0x3E01C0u;
label_3e01c0:
    // 0x3e01c0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3e01c4:
    // 0x3e01c4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3e01c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3e01c8:
    // 0x3e01c8: 0xc04cca0  jal         func_133280
label_3e01cc:
    if (ctx->pc == 0x3E01CCu) {
        ctx->pc = 0x3E01CCu;
            // 0x3e01cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E01D0u;
        goto label_3e01d0;
    }
    ctx->pc = 0x3E01C8u;
    SET_GPR_U32(ctx, 31, 0x3E01D0u);
    ctx->pc = 0x3E01CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E01C8u;
            // 0x3e01cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01D0u; }
        if (ctx->pc != 0x3E01D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01D0u; }
        if (ctx->pc != 0x3E01D0u) { return; }
    }
    ctx->pc = 0x3E01D0u;
label_3e01d0:
    // 0x3e01d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3e01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3e01d4:
    // 0x3e01d4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3e01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3e01d8:
    // 0x3e01d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e01d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e01dc:
    // 0x3e01dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e01dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e01e0:
    // 0x3e01e0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x3e01e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_3e01e4:
    // 0x3e01e4: 0x0  nop
    ctx->pc = 0x3e01e4u;
    // NOP
label_3e01e8:
    // 0x3e01e8: 0x0  nop
    ctx->pc = 0x3e01e8u;
    // NOP
label_3e01ec:
    // 0x3e01ec: 0xc04cc7c  jal         func_1331F0
label_3e01f0:
    if (ctx->pc == 0x3E01F0u) {
        ctx->pc = 0x3E01F0u;
            // 0x3e01f0: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x3E01F4u;
        goto label_3e01f4;
    }
    ctx->pc = 0x3E01ECu;
    SET_GPR_U32(ctx, 31, 0x3E01F4u);
    ctx->pc = 0x3E01F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E01ECu;
            // 0x3e01f0: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01F4u; }
        if (ctx->pc != 0x3E01F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E01F4u; }
        if (ctx->pc != 0x3E01F4u) { return; }
    }
    ctx->pc = 0x3E01F4u;
label_3e01f4:
    // 0x3e01f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e01f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e01f8:
    // 0x3e01f8: 0xc0d1c14  jal         func_347050
label_3e01fc:
    if (ctx->pc == 0x3E01FCu) {
        ctx->pc = 0x3E0200u;
        goto label_3e0200;
    }
    ctx->pc = 0x3E01F8u;
    SET_GPR_U32(ctx, 31, 0x3E0200u);
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0200u; }
        if (ctx->pc != 0x3E0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0200u; }
        if (ctx->pc != 0x3E0200u) { return; }
    }
    ctx->pc = 0x3E0200u;
label_3e0200:
    // 0x3e0200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0204:
    // 0x3e0204: 0xc04f278  jal         func_13C9E0
label_3e0208:
    if (ctx->pc == 0x3E0208u) {
        ctx->pc = 0x3E0208u;
            // 0x3e0208: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3E020Cu;
        goto label_3e020c;
    }
    ctx->pc = 0x3E0204u;
    SET_GPR_U32(ctx, 31, 0x3E020Cu);
    ctx->pc = 0x3E0208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0204u;
            // 0x3e0208: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E020Cu; }
        if (ctx->pc != 0x3E020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E020Cu; }
        if (ctx->pc != 0x3E020Cu) { return; }
    }
    ctx->pc = 0x3E020Cu;
label_3e020c:
    // 0x3e020c: 0xc0f81a8  jal         func_3E06A0
label_3e0210:
    if (ctx->pc == 0x3E0210u) {
        ctx->pc = 0x3E0210u;
            // 0x3e0210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0214u;
        goto label_3e0214;
    }
    ctx->pc = 0x3E020Cu;
    SET_GPR_U32(ctx, 31, 0x3E0214u);
    ctx->pc = 0x3E0210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E020Cu;
            // 0x3e0210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    if (runtime->hasFunction(0x3E06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0214u; }
        if (ctx->pc != 0x3E0214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E06A0_0x3e06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0214u; }
        if (ctx->pc != 0x3E0214u) { return; }
    }
    ctx->pc = 0x3E0214u;
label_3e0214:
    // 0x3e0214: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x3e0214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_3e0218:
    // 0x3e0218: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x3e0218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3e021c:
    // 0x3e021c: 0x50200010  beql        $at, $zero, . + 4 + (0x10 << 2)
label_3e0220:
    if (ctx->pc == 0x3E0220u) {
        ctx->pc = 0x3E0220u;
            // 0x3e0220: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3E0224u;
        goto label_3e0224;
    }
    ctx->pc = 0x3E021Cu;
    {
        const bool branch_taken_0x3e021c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e021c) {
            ctx->pc = 0x3E0220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E021Cu;
            // 0x3e0220: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0260u;
            goto label_3e0260;
        }
    }
    ctx->pc = 0x3E0224u;
label_3e0224:
    // 0x3e0224: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e0224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e0228:
    // 0x3e0228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e0228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e022c:
    // 0x3e022c: 0x24639ef0  addiu       $v1, $v1, -0x6110
    ctx->pc = 0x3e022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942448));
label_3e0230:
    // 0x3e0230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e0234:
    // 0x3e0234: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e0238:
    // 0x3e0238: 0x400008  jr          $v0
label_3e023c:
    if (ctx->pc == 0x3E023Cu) {
        ctx->pc = 0x3E0240u;
        goto label_3e0240;
    }
    ctx->pc = 0x3E0238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E0240u: goto label_3e0240;
            case 0x3E025Cu: goto label_3e025c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3E0240u;
label_3e0240:
    // 0x3e0240: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3e0240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3e0244:
    // 0x3e0244: 0xc04f2b8  jal         func_13CAE0
label_3e0248:
    if (ctx->pc == 0x3E0248u) {
        ctx->pc = 0x3E0248u;
            // 0x3e0248: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x3E024Cu;
        goto label_3e024c;
    }
    ctx->pc = 0x3E0244u;
    SET_GPR_U32(ctx, 31, 0x3E024Cu);
    ctx->pc = 0x3E0248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0244u;
            // 0x3e0248: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E024Cu; }
        if (ctx->pc != 0x3E024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E024Cu; }
        if (ctx->pc != 0x3E024Cu) { return; }
    }
    ctx->pc = 0x3E024Cu;
label_3e024c:
    // 0x3e024c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3e024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3e0250:
    // 0x3e0250: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x3e0250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3e0254:
    // 0x3e0254: 0xc04cd60  jal         func_133580
label_3e0258:
    if (ctx->pc == 0x3E0258u) {
        ctx->pc = 0x3E0258u;
            // 0x3e0258: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E025Cu;
        goto label_3e025c;
    }
    ctx->pc = 0x3E0254u;
    SET_GPR_U32(ctx, 31, 0x3E025Cu);
    ctx->pc = 0x3E0258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0254u;
            // 0x3e0258: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E025Cu; }
        if (ctx->pc != 0x3E025Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E025Cu; }
        if (ctx->pc != 0x3E025Cu) { return; }
    }
    ctx->pc = 0x3E025Cu;
label_3e025c:
    // 0x3e025c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3e025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3e0260:
    // 0x3e0260: 0xc04ce80  jal         func_133A00
label_3e0264:
    if (ctx->pc == 0x3E0264u) {
        ctx->pc = 0x3E0264u;
            // 0x3e0264: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x3E0268u;
        goto label_3e0268;
    }
    ctx->pc = 0x3E0260u;
    SET_GPR_U32(ctx, 31, 0x3E0268u);
    ctx->pc = 0x3E0264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0260u;
            // 0x3e0264: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0268u; }
        if (ctx->pc != 0x3E0268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0268u; }
        if (ctx->pc != 0x3E0268u) { return; }
    }
    ctx->pc = 0x3E0268u;
label_3e0268:
    // 0x3e0268: 0x26840360  addiu       $a0, $s4, 0x360
    ctx->pc = 0x3e0268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 864));
label_3e026c:
    // 0x3e026c: 0xc04cce8  jal         func_1333A0
label_3e0270:
    if (ctx->pc == 0x3E0270u) {
        ctx->pc = 0x3E0270u;
            // 0x3e0270: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3E0274u;
        goto label_3e0274;
    }
    ctx->pc = 0x3E026Cu;
    SET_GPR_U32(ctx, 31, 0x3E0274u);
    ctx->pc = 0x3E0270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E026Cu;
            // 0x3e0270: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0274u; }
        if (ctx->pc != 0x3E0274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0274u; }
        if (ctx->pc != 0x3E0274u) { return; }
    }
    ctx->pc = 0x3E0274u;
label_3e0274:
    // 0x3e0274: 0xc0d4108  jal         func_350420
label_3e0278:
    if (ctx->pc == 0x3E0278u) {
        ctx->pc = 0x3E027Cu;
        goto label_3e027c;
    }
    ctx->pc = 0x3E0274u;
    SET_GPR_U32(ctx, 31, 0x3E027Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E027Cu; }
        if (ctx->pc != 0x3E027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E027Cu; }
        if (ctx->pc != 0x3E027Cu) { return; }
    }
    ctx->pc = 0x3E027Cu;
label_3e027c:
    // 0x3e027c: 0xc0b36b4  jal         func_2CDAD0
label_3e0280:
    if (ctx->pc == 0x3E0280u) {
        ctx->pc = 0x3E0280u;
            // 0x3e0280: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0284u;
        goto label_3e0284;
    }
    ctx->pc = 0x3E027Cu;
    SET_GPR_U32(ctx, 31, 0x3E0284u);
    ctx->pc = 0x3E0280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E027Cu;
            // 0x3e0280: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0284u; }
        if (ctx->pc != 0x3E0284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0284u; }
        if (ctx->pc != 0x3E0284u) { return; }
    }
    ctx->pc = 0x3E0284u;
label_3e0284:
    // 0x3e0284: 0xc0b9c64  jal         func_2E7190
label_3e0288:
    if (ctx->pc == 0x3E0288u) {
        ctx->pc = 0x3E0288u;
            // 0x3e0288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E028Cu;
        goto label_3e028c;
    }
    ctx->pc = 0x3E0284u;
    SET_GPR_U32(ctx, 31, 0x3E028Cu);
    ctx->pc = 0x3E0288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0284u;
            // 0x3e0288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E028Cu; }
        if (ctx->pc != 0x3E028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E028Cu; }
        if (ctx->pc != 0x3E028Cu) { return; }
    }
    ctx->pc = 0x3E028Cu;
label_3e028c:
    // 0x3e028c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3e028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3e0290:
    // 0x3e0290: 0xc0d4104  jal         func_350410
label_3e0294:
    if (ctx->pc == 0x3E0294u) {
        ctx->pc = 0x3E0294u;
            // 0x3e0294: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0298u;
        goto label_3e0298;
    }
    ctx->pc = 0x3E0290u;
    SET_GPR_U32(ctx, 31, 0x3E0298u);
    ctx->pc = 0x3E0294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0290u;
            // 0x3e0294: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0298u; }
        if (ctx->pc != 0x3E0298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0298u; }
        if (ctx->pc != 0x3E0298u) { return; }
    }
    ctx->pc = 0x3E0298u;
label_3e0298:
    // 0x3e0298: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3e0298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3e029c:
    // 0x3e029c: 0xc0f81a4  jal         func_3E0690
label_3e02a0:
    if (ctx->pc == 0x3E02A0u) {
        ctx->pc = 0x3E02A0u;
            // 0x3e02a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E02A4u;
        goto label_3e02a4;
    }
    ctx->pc = 0x3E029Cu;
    SET_GPR_U32(ctx, 31, 0x3E02A4u);
    ctx->pc = 0x3E02A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E029Cu;
            // 0x3e02a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E0690u;
    if (runtime->hasFunction(0x3E0690u)) {
        auto targetFn = runtime->lookupFunction(0x3E0690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02A4u; }
        if (ctx->pc != 0x3E02A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E0690_0x3e0690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02A4u; }
        if (ctx->pc != 0x3E02A4u) { return; }
    }
    ctx->pc = 0x3E02A4u;
label_3e02a4:
    // 0x3e02a4: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x3e02a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3e02a8:
    // 0x3e02a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3e02a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e02ac:
    // 0x3e02ac: 0x7ba800b0  lq          $t0, 0xB0($sp)
    ctx->pc = 0x3e02acu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3e02b0:
    // 0x3e02b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3e02b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3e02b4:
    // 0x3e02b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e02b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e02b8:
    // 0x3e02b8: 0x27a701d0  addiu       $a3, $sp, 0x1D0
    ctx->pc = 0x3e02b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3e02bc:
    // 0x3e02bc: 0xc0d40ac  jal         func_3502B0
label_3e02c0:
    if (ctx->pc == 0x3E02C0u) {
        ctx->pc = 0x3E02C0u;
            // 0x3e02c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E02C4u;
        goto label_3e02c4;
    }
    ctx->pc = 0x3E02BCu;
    SET_GPR_U32(ctx, 31, 0x3E02C4u);
    ctx->pc = 0x3E02C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E02BCu;
            // 0x3e02c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02C4u; }
        if (ctx->pc != 0x3E02C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02C4u; }
        if (ctx->pc != 0x3E02C4u) { return; }
    }
    ctx->pc = 0x3E02C4u;
label_3e02c4:
    // 0x3e02c4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3e02c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e02c8:
    // 0x3e02c8: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_3e02cc:
    if (ctx->pc == 0x3E02CCu) {
        ctx->pc = 0x3E02CCu;
            // 0x3e02cc: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3E02D0u;
        goto label_3e02d0;
    }
    ctx->pc = 0x3E02C8u;
    {
        const bool branch_taken_0x3e02c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E02CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E02C8u;
            // 0x3e02cc: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e02c8) {
            ctx->pc = 0x3E03C8u;
            goto label_3e03c8;
        }
    }
    ctx->pc = 0x3E02D0u;
label_3e02d0:
    // 0x3e02d0: 0x8e8403a0  lw          $a0, 0x3A0($s4)
    ctx->pc = 0x3e02d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 928)));
label_3e02d4:
    // 0x3e02d4: 0xc0772c8  jal         func_1DCB20
label_3e02d8:
    if (ctx->pc == 0x3E02D8u) {
        ctx->pc = 0x3E02D8u;
            // 0x3e02d8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x3E02DCu;
        goto label_3e02dc;
    }
    ctx->pc = 0x3E02D4u;
    SET_GPR_U32(ctx, 31, 0x3E02DCu);
    ctx->pc = 0x3E02D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E02D4u;
            // 0x3e02d8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB20u;
    if (runtime->hasFunction(0x1DCB20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02DCu; }
        if (ctx->pc != 0x3E02DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB20_0x1dcb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02DCu; }
        if (ctx->pc != 0x3E02DCu) { return; }
    }
    ctx->pc = 0x3E02DCu;
label_3e02dc:
    // 0x3e02dc: 0x8e8403a4  lw          $a0, 0x3A4($s4)
    ctx->pc = 0x3e02dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 932)));
label_3e02e0:
    // 0x3e02e0: 0xc0772c8  jal         func_1DCB20
label_3e02e4:
    if (ctx->pc == 0x3E02E4u) {
        ctx->pc = 0x3E02E4u;
            // 0x3e02e4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x3E02E8u;
        goto label_3e02e8;
    }
    ctx->pc = 0x3E02E0u;
    SET_GPR_U32(ctx, 31, 0x3E02E8u);
    ctx->pc = 0x3E02E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E02E0u;
            // 0x3e02e4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB20u;
    if (runtime->hasFunction(0x1DCB20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02E8u; }
        if (ctx->pc != 0x3E02E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB20_0x1dcb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02E8u; }
        if (ctx->pc != 0x3E02E8u) { return; }
    }
    ctx->pc = 0x3E02E8u;
label_3e02e8:
    // 0x3e02e8: 0xc0f81a8  jal         func_3E06A0
label_3e02ec:
    if (ctx->pc == 0x3E02ECu) {
        ctx->pc = 0x3E02ECu;
            // 0x3e02ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E02F0u;
        goto label_3e02f0;
    }
    ctx->pc = 0x3E02E8u;
    SET_GPR_U32(ctx, 31, 0x3E02F0u);
    ctx->pc = 0x3E02ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E02E8u;
            // 0x3e02ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    if (runtime->hasFunction(0x3E06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02F0u; }
        if (ctx->pc != 0x3E02F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E06A0_0x3e06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E02F0u; }
        if (ctx->pc != 0x3E02F0u) { return; }
    }
    ctx->pc = 0x3E02F0u;
label_3e02f0:
    // 0x3e02f0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x3e02f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_3e02f4:
    // 0x3e02f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3e02f8:
    if (ctx->pc == 0x3E02F8u) {
        ctx->pc = 0x3E02F8u;
            // 0x3e02f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E02FCu;
        goto label_3e02fc;
    }
    ctx->pc = 0x3E02F4u;
    {
        const bool branch_taken_0x3e02f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e02f4) {
            ctx->pc = 0x3E02F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E02F4u;
            // 0x3e02f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0314u;
            goto label_3e0314;
        }
    }
    ctx->pc = 0x3E02FCu;
label_3e02fc:
    // 0x3e02fc: 0xc0f81a8  jal         func_3E06A0
label_3e0300:
    if (ctx->pc == 0x3E0300u) {
        ctx->pc = 0x3E0300u;
            // 0x3e0300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0304u;
        goto label_3e0304;
    }
    ctx->pc = 0x3E02FCu;
    SET_GPR_U32(ctx, 31, 0x3E0304u);
    ctx->pc = 0x3E0300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E02FCu;
            // 0x3e0300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E06A0u;
    if (runtime->hasFunction(0x3E06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0304u; }
        if (ctx->pc != 0x3E0304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E06A0_0x3e06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0304u; }
        if (ctx->pc != 0x3E0304u) { return; }
    }
    ctx->pc = 0x3E0304u;
label_3e0304:
    // 0x3e0304: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3e0304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3e0308:
    // 0x3e0308: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
label_3e030c:
    if (ctx->pc == 0x3E030Cu) {
        ctx->pc = 0x3E030Cu;
            // 0x3e030c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0310u;
        goto label_3e0310;
    }
    ctx->pc = 0x3E0308u;
    {
        const bool branch_taken_0x3e0308 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0308) {
            ctx->pc = 0x3E030Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0308u;
            // 0x3e030c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E032Cu;
            goto label_3e032c;
        }
    }
    ctx->pc = 0x3E0310u;
label_3e0310:
    // 0x3e0310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e0310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e0314:
    // 0x3e0314: 0xc0f81a8  jal         func_3E06A0
label_3e0318:
    if (ctx->pc == 0x3E0318u) {
        ctx->pc = 0x3E031Cu;
        goto label_3e031c;
    }
    ctx->pc = 0x3E0314u;
    SET_GPR_U32(ctx, 31, 0x3E031Cu);
    ctx->pc = 0x3E06A0u;
    if (runtime->hasFunction(0x3E06A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E031Cu; }
        if (ctx->pc != 0x3E031Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E06A0_0x3e06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E031Cu; }
        if (ctx->pc != 0x3E031Cu) { return; }
    }
    ctx->pc = 0x3E031Cu;
label_3e031c:
    // 0x3e031c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e0320:
    // 0x3e0320: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_3e0324:
    if (ctx->pc == 0x3E0324u) {
        ctx->pc = 0x3E0324u;
            // 0x3e0324: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3E0328u;
        goto label_3e0328;
    }
    ctx->pc = 0x3E0320u;
    {
        const bool branch_taken_0x3e0320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e0320) {
            ctx->pc = 0x3E0324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0320u;
            // 0x3e0324: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E036Cu;
            goto label_3e036c;
        }
    }
    ctx->pc = 0x3E0328u;
label_3e0328:
    // 0x3e0328: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3e0328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e032c:
    // 0x3e032c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0330:
    // 0x3e0330: 0xc04cd60  jal         func_133580
label_3e0334:
    if (ctx->pc == 0x3E0334u) {
        ctx->pc = 0x3E0334u;
            // 0x3e0334: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3E0338u;
        goto label_3e0338;
    }
    ctx->pc = 0x3E0330u;
    SET_GPR_U32(ctx, 31, 0x3E0338u);
    ctx->pc = 0x3E0334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0330u;
            // 0x3e0334: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0338u; }
        if (ctx->pc != 0x3E0338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0338u; }
        if (ctx->pc != 0x3E0338u) { return; }
    }
    ctx->pc = 0x3E0338u;
label_3e0338:
    // 0x3e0338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e033c:
    // 0x3e033c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e0340:
    // 0x3e0340: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e0340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0344:
    // 0x3e0344: 0xc054fd4  jal         func_153F50
label_3e0348:
    if (ctx->pc == 0x3E0348u) {
        ctx->pc = 0x3E0348u;
            // 0x3e0348: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E034Cu;
        goto label_3e034c;
    }
    ctx->pc = 0x3E0344u;
    SET_GPR_U32(ctx, 31, 0x3E034Cu);
    ctx->pc = 0x3E0348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0344u;
            // 0x3e0348: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E034Cu; }
        if (ctx->pc != 0x3E034Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E034Cu; }
        if (ctx->pc != 0x3E034Cu) { return; }
    }
    ctx->pc = 0x3E034Cu;
label_3e034c:
    // 0x3e034c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e0350:
    // 0x3e0350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e0350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0354:
    // 0x3e0354: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e0354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e0358:
    // 0x3e0358: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3e0358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3e035c:
    // 0x3e035c: 0xc0f8194  jal         func_3E0650
label_3e0360:
    if (ctx->pc == 0x3E0360u) {
        ctx->pc = 0x3E0360u;
            // 0x3e0360: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E0364u;
        goto label_3e0364;
    }
    ctx->pc = 0x3E035Cu;
    SET_GPR_U32(ctx, 31, 0x3E0364u);
    ctx->pc = 0x3E0360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E035Cu;
            // 0x3e0360: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E0650u;
    if (runtime->hasFunction(0x3E0650u)) {
        auto targetFn = runtime->lookupFunction(0x3E0650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0364u; }
        if (ctx->pc != 0x3E0364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E0650_0x3e0650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0364u; }
        if (ctx->pc != 0x3E0364u) { return; }
    }
    ctx->pc = 0x3E0364u;
label_3e0364:
    // 0x3e0364: 0x10000019  b           . + 4 + (0x19 << 2)
label_3e0368:
    if (ctx->pc == 0x3E0368u) {
        ctx->pc = 0x3E0368u;
            // 0x3e0368: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3E036Cu;
        goto label_3e036c;
    }
    ctx->pc = 0x3E0364u;
    {
        const bool branch_taken_0x3e0364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0364u;
            // 0x3e0368: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0364) {
            ctx->pc = 0x3E03CCu;
            goto label_3e03cc;
        }
    }
    ctx->pc = 0x3E036Cu;
label_3e036c:
    // 0x3e036c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3e036cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e0370:
    // 0x3e0370: 0xc04cd60  jal         func_133580
label_3e0374:
    if (ctx->pc == 0x3E0374u) {
        ctx->pc = 0x3E0374u;
            // 0x3e0374: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0378u;
        goto label_3e0378;
    }
    ctx->pc = 0x3E0370u;
    SET_GPR_U32(ctx, 31, 0x3E0378u);
    ctx->pc = 0x3E0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0370u;
            // 0x3e0374: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0378u; }
        if (ctx->pc != 0x3E0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0378u; }
        if (ctx->pc != 0x3E0378u) { return; }
    }
    ctx->pc = 0x3E0378u;
label_3e0378:
    // 0x3e0378: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3e0378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3e037c:
    // 0x3e037c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3e037cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3e0380:
    // 0x3e0380: 0x320f809  jalr        $t9
label_3e0384:
    if (ctx->pc == 0x3E0384u) {
        ctx->pc = 0x3E0384u;
            // 0x3e0384: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0388u;
        goto label_3e0388;
    }
    ctx->pc = 0x3E0380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E0388u);
        ctx->pc = 0x3E0384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0380u;
            // 0x3e0384: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E0388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E0388u; }
            if (ctx->pc != 0x3E0388u) { return; }
        }
        }
    }
    ctx->pc = 0x3E0388u;
label_3e0388:
    // 0x3e0388: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x3e0388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3e038c:
    // 0x3e038c: 0xc68c0284  lwc1        $f12, 0x284($s4)
    ctx->pc = 0x3e038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0390:
    // 0x3e0390: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3e0390u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3e0394:
    // 0x3e0394: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3e0394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0398:
    // 0x3e0398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e039c:
    // 0x3e039c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e039cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e03a0:
    // 0x3e03a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e03a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e03a4:
    // 0x3e03a4: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x3e03a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3e03a8:
    // 0x3e03a8: 0xc04cff4  jal         func_133FD0
label_3e03ac:
    if (ctx->pc == 0x3E03ACu) {
        ctx->pc = 0x3E03ACu;
            // 0x3e03ac: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x3E03B0u;
        goto label_3e03b0;
    }
    ctx->pc = 0x3E03A8u;
    SET_GPR_U32(ctx, 31, 0x3E03B0u);
    ctx->pc = 0x3E03ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E03A8u;
            // 0x3e03ac: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E03B0u; }
        if (ctx->pc != 0x3E03B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E03B0u; }
        if (ctx->pc != 0x3E03B0u) { return; }
    }
    ctx->pc = 0x3E03B0u;
label_3e03b0:
    // 0x3e03b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e03b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e03b4:
    // 0x3e03b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e03b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e03b8:
    // 0x3e03b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e03b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e03bc:
    // 0x3e03bc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3e03bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3e03c0:
    // 0x3e03c0: 0xc0f8184  jal         func_3E0610
label_3e03c4:
    if (ctx->pc == 0x3E03C4u) {
        ctx->pc = 0x3E03C4u;
            // 0x3e03c4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E03C8u;
        goto label_3e03c8;
    }
    ctx->pc = 0x3E03C0u;
    SET_GPR_U32(ctx, 31, 0x3E03C8u);
    ctx->pc = 0x3E03C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E03C0u;
            // 0x3e03c4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E0610u;
    if (runtime->hasFunction(0x3E0610u)) {
        auto targetFn = runtime->lookupFunction(0x3E0610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E03C8u; }
        if (ctx->pc != 0x3E03C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E0610_0x3e0610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E03C8u; }
        if (ctx->pc != 0x3E03C8u) { return; }
    }
    ctx->pc = 0x3E03C8u;
label_3e03c8:
    // 0x3e03c8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3e03c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e03cc:
    // 0x3e03cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e03ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e03d0:
    // 0x3e03d0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3e03d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3e03d4:
    // 0x3e03d4: 0x320f809  jalr        $t9
label_3e03d8:
    if (ctx->pc == 0x3E03D8u) {
        ctx->pc = 0x3E03D8u;
            // 0x3e03d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E03DCu;
        goto label_3e03dc;
    }
    ctx->pc = 0x3E03D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E03DCu);
        ctx->pc = 0x3E03D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E03D4u;
            // 0x3e03d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E03DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E03DCu; }
            if (ctx->pc != 0x3E03DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3E03DCu;
label_3e03dc:
    // 0x3e03dc: 0x8e8502d0  lw          $a1, 0x2D0($s4)
    ctx->pc = 0x3e03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
label_3e03e0:
    // 0x3e03e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e03e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e03e4:
    // 0x3e03e4: 0x50a4004a  beql        $a1, $a0, . + 4 + (0x4A << 2)
label_3e03e8:
    if (ctx->pc == 0x3E03E8u) {
        ctx->pc = 0x3E03E8u;
            // 0x3e03e8: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x3E03ECu;
        goto label_3e03ec;
    }
    ctx->pc = 0x3E03E4u;
    {
        const bool branch_taken_0x3e03e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e03e4) {
            ctx->pc = 0x3E03E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E03E4u;
            // 0x3e03e8: 0x8e420074  lw          $v0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0510u;
            goto label_3e0510;
        }
    }
    ctx->pc = 0x3E03ECu;
label_3e03ec:
    // 0x3e03ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e03f0:
    // 0x3e03f0: 0x50a30005  beql        $a1, $v1, . + 4 + (0x5 << 2)
label_3e03f4:
    if (ctx->pc == 0x3E03F4u) {
        ctx->pc = 0x3E03F4u;
            // 0x3e03f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E03F8u;
        goto label_3e03f8;
    }
    ctx->pc = 0x3E03F0u;
    {
        const bool branch_taken_0x3e03f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e03f0) {
            ctx->pc = 0x3E03F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E03F0u;
            // 0x3e03f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0408u;
            goto label_3e0408;
        }
    }
    ctx->pc = 0x3E03F8u;
label_3e03f8:
    // 0x3e03f8: 0x50a0005c  beql        $a1, $zero, . + 4 + (0x5C << 2)
label_3e03fc:
    if (ctx->pc == 0x3E03FCu) {
        ctx->pc = 0x3E03FCu;
            // 0x3e03fc: 0xae8002d0  sw          $zero, 0x2D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 0));
        ctx->pc = 0x3E0400u;
        goto label_3e0400;
    }
    ctx->pc = 0x3E03F8u;
    {
        const bool branch_taken_0x3e03f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e03f8) {
            ctx->pc = 0x3E03FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E03F8u;
            // 0x3e03fc: 0xae8002d0  sw          $zero, 0x2D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E056Cu;
            goto label_3e056c;
        }
    }
    ctx->pc = 0x3E0400u;
label_3e0400:
    // 0x3e0400: 0x10000059  b           . + 4 + (0x59 << 2)
label_3e0404:
    if (ctx->pc == 0x3E0404u) {
        ctx->pc = 0x3E0408u;
        goto label_3e0408;
    }
    ctx->pc = 0x3E0400u;
    {
        const bool branch_taken_0x3e0400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0400) {
            ctx->pc = 0x3E0568u;
            goto label_3e0568;
        }
    }
    ctx->pc = 0x3E0408u;
label_3e0408:
    // 0x3e0408: 0xc0f8180  jal         func_3E0600
label_3e040c:
    if (ctx->pc == 0x3E040Cu) {
        ctx->pc = 0x3E0410u;
        goto label_3e0410;
    }
    ctx->pc = 0x3E0408u;
    SET_GPR_U32(ctx, 31, 0x3E0410u);
    ctx->pc = 0x3E0600u;
    if (runtime->hasFunction(0x3E0600u)) {
        auto targetFn = runtime->lookupFunction(0x3E0600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0410u; }
        if (ctx->pc != 0x3E0410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E0600_0x3e0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0410u; }
        if (ctx->pc != 0x3E0410u) { return; }
    }
    ctx->pc = 0x3E0410u;
label_3e0410:
    // 0x3e0410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0414:
    // 0x3e0414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e0414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0418:
    // 0x3e0418: 0xc0f8178  jal         func_3E05E0
label_3e041c:
    if (ctx->pc == 0x3E041Cu) {
        ctx->pc = 0x3E041Cu;
            // 0x3e041c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0420u;
        goto label_3e0420;
    }
    ctx->pc = 0x3E0418u;
    SET_GPR_U32(ctx, 31, 0x3E0420u);
    ctx->pc = 0x3E041Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0418u;
            // 0x3e041c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0420u; }
        if (ctx->pc != 0x3E0420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0420u; }
        if (ctx->pc != 0x3E0420u) { return; }
    }
    ctx->pc = 0x3E0420u;
label_3e0420:
    // 0x3e0420: 0xc0f8174  jal         func_3E05D0
label_3e0424:
    if (ctx->pc == 0x3E0424u) {
        ctx->pc = 0x3E0424u;
            // 0x3e0424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0428u;
        goto label_3e0428;
    }
    ctx->pc = 0x3E0420u;
    SET_GPR_U32(ctx, 31, 0x3E0428u);
    ctx->pc = 0x3E0424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0420u;
            // 0x3e0424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05D0u;
    if (runtime->hasFunction(0x3E05D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0428u; }
        if (ctx->pc != 0x3E0428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05D0_0x3e05d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0428u; }
        if (ctx->pc != 0x3E0428u) { return; }
    }
    ctx->pc = 0x3E0428u;
label_3e0428:
    // 0x3e0428: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e0428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e042c:
    // 0x3e042c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0430:
    // 0x3e0430: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e0430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e0434:
    // 0x3e0434: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3e0434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e0438:
    // 0x3e0438: 0x8c51e360  lw          $s1, -0x1CA0($v0)
    ctx->pc = 0x3e0438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_3e043c:
    // 0x3e043c: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x3e043cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e0440:
    // 0x3e0440: 0xc0f8178  jal         func_3E05E0
label_3e0444:
    if (ctx->pc == 0x3E0444u) {
        ctx->pc = 0x3E0444u;
            // 0x3e0444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0448u;
        goto label_3e0448;
    }
    ctx->pc = 0x3E0440u;
    SET_GPR_U32(ctx, 31, 0x3E0448u);
    ctx->pc = 0x3E0444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0440u;
            // 0x3e0444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0448u; }
        if (ctx->pc != 0x3E0448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0448u; }
        if (ctx->pc != 0x3E0448u) { return; }
    }
    ctx->pc = 0x3E0448u;
label_3e0448:
    // 0x3e0448: 0xc0d1c14  jal         func_347050
label_3e044c:
    if (ctx->pc == 0x3E044Cu) {
        ctx->pc = 0x3E044Cu;
            // 0x3e044c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0450u;
        goto label_3e0450;
    }
    ctx->pc = 0x3E0448u;
    SET_GPR_U32(ctx, 31, 0x3E0450u);
    ctx->pc = 0x3E044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0448u;
            // 0x3e044c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0450u; }
        if (ctx->pc != 0x3E0450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0450u; }
        if (ctx->pc != 0x3E0450u) { return; }
    }
    ctx->pc = 0x3E0450u;
label_3e0450:
    // 0x3e0450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0454:
    // 0x3e0454: 0xc04f278  jal         func_13C9E0
label_3e0458:
    if (ctx->pc == 0x3E0458u) {
        ctx->pc = 0x3E0458u;
            // 0x3e0458: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3E045Cu;
        goto label_3e045c;
    }
    ctx->pc = 0x3E0454u;
    SET_GPR_U32(ctx, 31, 0x3E045Cu);
    ctx->pc = 0x3E0458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0454u;
            // 0x3e0458: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E045Cu; }
        if (ctx->pc != 0x3E045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E045Cu; }
        if (ctx->pc != 0x3E045Cu) { return; }
    }
    ctx->pc = 0x3E045Cu;
label_3e045c:
    // 0x3e045c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0460:
    // 0x3e0460: 0xc0f8178  jal         func_3E05E0
label_3e0464:
    if (ctx->pc == 0x3E0464u) {
        ctx->pc = 0x3E0464u;
            // 0x3e0464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0468u;
        goto label_3e0468;
    }
    ctx->pc = 0x3E0460u;
    SET_GPR_U32(ctx, 31, 0x3E0468u);
    ctx->pc = 0x3E0464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0460u;
            // 0x3e0464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0468u; }
        if (ctx->pc != 0x3E0468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0468u; }
        if (ctx->pc != 0x3E0468u) { return; }
    }
    ctx->pc = 0x3E0468u;
label_3e0468:
    // 0x3e0468: 0xc0d1c10  jal         func_347040
label_3e046c:
    if (ctx->pc == 0x3E046Cu) {
        ctx->pc = 0x3E046Cu;
            // 0x3e046c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0470u;
        goto label_3e0470;
    }
    ctx->pc = 0x3E0468u;
    SET_GPR_U32(ctx, 31, 0x3E0470u);
    ctx->pc = 0x3E046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0468u;
            // 0x3e046c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0470u; }
        if (ctx->pc != 0x3E0470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0470u; }
        if (ctx->pc != 0x3E0470u) { return; }
    }
    ctx->pc = 0x3E0470u;
label_3e0470:
    // 0x3e0470: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0474:
    // 0x3e0474: 0xc04ce80  jal         func_133A00
label_3e0478:
    if (ctx->pc == 0x3E0478u) {
        ctx->pc = 0x3E0478u;
            // 0x3e0478: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3E047Cu;
        goto label_3e047c;
    }
    ctx->pc = 0x3E0474u;
    SET_GPR_U32(ctx, 31, 0x3E047Cu);
    ctx->pc = 0x3E0478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0474u;
            // 0x3e0478: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E047Cu; }
        if (ctx->pc != 0x3E047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E047Cu; }
        if (ctx->pc != 0x3E047Cu) { return; }
    }
    ctx->pc = 0x3E047Cu;
label_3e047c:
    // 0x3e047c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e047cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0480:
    // 0x3e0480: 0xc0f8178  jal         func_3E05E0
label_3e0484:
    if (ctx->pc == 0x3E0484u) {
        ctx->pc = 0x3E0484u;
            // 0x3e0484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0488u;
        goto label_3e0488;
    }
    ctx->pc = 0x3E0480u;
    SET_GPR_U32(ctx, 31, 0x3E0488u);
    ctx->pc = 0x3E0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0480u;
            // 0x3e0484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0488u; }
        if (ctx->pc != 0x3E0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0488u; }
        if (ctx->pc != 0x3E0488u) { return; }
    }
    ctx->pc = 0x3E0488u;
label_3e0488:
    // 0x3e0488: 0xc0f8170  jal         func_3E05C0
label_3e048c:
    if (ctx->pc == 0x3E048Cu) {
        ctx->pc = 0x3E048Cu;
            // 0x3e048c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0490u;
        goto label_3e0490;
    }
    ctx->pc = 0x3E0488u;
    SET_GPR_U32(ctx, 31, 0x3E0490u);
    ctx->pc = 0x3E048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0488u;
            // 0x3e048c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05C0u;
    if (runtime->hasFunction(0x3E05C0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0490u; }
        if (ctx->pc != 0x3E0490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05C0_0x3e05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0490u; }
        if (ctx->pc != 0x3E0490u) { return; }
    }
    ctx->pc = 0x3E0490u;
label_3e0490:
    // 0x3e0490: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3e0490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e0494:
    // 0x3e0494: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3e0494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e0498:
    // 0x3e0498: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3e0498u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3e049c:
    // 0x3e049c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e04a0:
    // 0x3e04a0: 0xc0528ec  jal         func_14A3B0
label_3e04a4:
    if (ctx->pc == 0x3E04A4u) {
        ctx->pc = 0x3E04A4u;
            // 0x3e04a4: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3E04A8u;
        goto label_3e04a8;
    }
    ctx->pc = 0x3E04A0u;
    SET_GPR_U32(ctx, 31, 0x3E04A8u);
    ctx->pc = 0x3E04A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E04A0u;
            // 0x3e04a4: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04A8u; }
        if (ctx->pc != 0x3E04A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04A8u; }
        if (ctx->pc != 0x3E04A8u) { return; }
    }
    ctx->pc = 0x3E04A8u;
label_3e04a8:
    // 0x3e04a8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e04a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3e04ac:
    // 0x3e04ac: 0x26250300  addiu       $a1, $s1, 0x300
    ctx->pc = 0x3e04acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_3e04b0:
    // 0x3e04b0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3e04b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3e04b4:
    // 0x3e04b4: 0xc04cca0  jal         func_133280
label_3e04b8:
    if (ctx->pc == 0x3E04B8u) {
        ctx->pc = 0x3E04B8u;
            // 0x3e04b8: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->pc = 0x3E04BCu;
        goto label_3e04bc;
    }
    ctx->pc = 0x3E04B4u;
    SET_GPR_U32(ctx, 31, 0x3E04BCu);
    ctx->pc = 0x3E04B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E04B4u;
            // 0x3e04b8: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04BCu; }
        if (ctx->pc != 0x3E04BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04BCu; }
        if (ctx->pc != 0x3E04BCu) { return; }
    }
    ctx->pc = 0x3E04BCu;
label_3e04bc:
    // 0x3e04bc: 0xc0f816c  jal         func_3E05B0
label_3e04c0:
    if (ctx->pc == 0x3E04C0u) {
        ctx->pc = 0x3E04C4u;
        goto label_3e04c4;
    }
    ctx->pc = 0x3E04BCu;
    SET_GPR_U32(ctx, 31, 0x3E04C4u);
    ctx->pc = 0x3E05B0u;
    if (runtime->hasFunction(0x3E05B0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04C4u; }
        if (ctx->pc != 0x3E04C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05B0_0x3e05b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04C4u; }
        if (ctx->pc != 0x3E04C4u) { return; }
    }
    ctx->pc = 0x3E04C4u;
label_3e04c4:
    // 0x3e04c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e04c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e04c8:
    // 0x3e04c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e04c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e04cc:
    // 0x3e04cc: 0xc0f8178  jal         func_3E05E0
label_3e04d0:
    if (ctx->pc == 0x3E04D0u) {
        ctx->pc = 0x3E04D0u;
            // 0x3e04d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E04D4u;
        goto label_3e04d4;
    }
    ctx->pc = 0x3E04CCu;
    SET_GPR_U32(ctx, 31, 0x3E04D4u);
    ctx->pc = 0x3E04D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E04CCu;
            // 0x3e04d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04D4u; }
        if (ctx->pc != 0x3E04D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04D4u; }
        if (ctx->pc != 0x3E04D4u) { return; }
    }
    ctx->pc = 0x3E04D4u;
label_3e04d4:
    // 0x3e04d4: 0xc0f8168  jal         func_3E05A0
label_3e04d8:
    if (ctx->pc == 0x3E04D8u) {
        ctx->pc = 0x3E04D8u;
            // 0x3e04d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E04DCu;
        goto label_3e04dc;
    }
    ctx->pc = 0x3E04D4u;
    SET_GPR_U32(ctx, 31, 0x3E04DCu);
    ctx->pc = 0x3E04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E04D4u;
            // 0x3e04d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05A0u;
    if (runtime->hasFunction(0x3E05A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04DCu; }
        if (ctx->pc != 0x3E04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05A0_0x3e05a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04DCu; }
        if (ctx->pc != 0x3E04DCu) { return; }
    }
    ctx->pc = 0x3E04DCu;
label_3e04dc:
    // 0x3e04dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e04dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e04e0:
    // 0x3e04e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e04e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e04e4:
    // 0x3e04e4: 0xc0f8178  jal         func_3E05E0
label_3e04e8:
    if (ctx->pc == 0x3E04E8u) {
        ctx->pc = 0x3E04E8u;
            // 0x3e04e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E04ECu;
        goto label_3e04ec;
    }
    ctx->pc = 0x3E04E4u;
    SET_GPR_U32(ctx, 31, 0x3E04ECu);
    ctx->pc = 0x3E04E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E04E4u;
            // 0x3e04e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05E0u;
    if (runtime->hasFunction(0x3E05E0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04ECu; }
        if (ctx->pc != 0x3E04ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05E0_0x3e05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04ECu; }
        if (ctx->pc != 0x3E04ECu) { return; }
    }
    ctx->pc = 0x3E04ECu;
label_3e04ec:
    // 0x3e04ec: 0xc0f8168  jal         func_3E05A0
label_3e04f0:
    if (ctx->pc == 0x3E04F0u) {
        ctx->pc = 0x3E04F0u;
            // 0x3e04f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E04F4u;
        goto label_3e04f4;
    }
    ctx->pc = 0x3E04ECu;
    SET_GPR_U32(ctx, 31, 0x3E04F4u);
    ctx->pc = 0x3E04F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E04ECu;
            // 0x3e04f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E05A0u;
    if (runtime->hasFunction(0x3E05A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E05A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04F4u; }
        if (ctx->pc != 0x3E04F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E05A0_0x3e05a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E04F4u; }
        if (ctx->pc != 0x3E04F4u) { return; }
    }
    ctx->pc = 0x3E04F4u;
label_3e04f4:
    // 0x3e04f4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x3e04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e04f8:
    // 0x3e04f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e04f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e04fc:
    // 0x3e04fc: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x3e04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3e0500:
    // 0x3e0500: 0xc1077c0  jal         func_41DF00
label_3e0504:
    if (ctx->pc == 0x3E0504u) {
        ctx->pc = 0x3E0504u;
            // 0x3e0504: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3E0508u;
        goto label_3e0508;
    }
    ctx->pc = 0x3E0500u;
    SET_GPR_U32(ctx, 31, 0x3E0508u);
    ctx->pc = 0x3E0504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0500u;
            // 0x3e0504: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41DF00u;
    if (runtime->hasFunction(0x41DF00u)) {
        auto targetFn = runtime->lookupFunction(0x41DF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0508u; }
        if (ctx->pc != 0x3E0508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041DF00_0x41df00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0508u; }
        if (ctx->pc != 0x3E0508u) { return; }
    }
    ctx->pc = 0x3E0508u;
label_3e0508:
    // 0x3e0508: 0x10000017  b           . + 4 + (0x17 << 2)
label_3e050c:
    if (ctx->pc == 0x3E050Cu) {
        ctx->pc = 0x3E0510u;
        goto label_3e0510;
    }
    ctx->pc = 0x3E0508u;
    {
        const bool branch_taken_0x3e0508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0508) {
            ctx->pc = 0x3E0568u;
            goto label_3e0568;
        }
    }
    ctx->pc = 0x3E0510u;
label_3e0510:
    // 0x3e0510: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3e0510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e0514:
    // 0x3e0514: 0x8ca202cc  lw          $v0, 0x2CC($a1)
    ctx->pc = 0x3e0514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
label_3e0518:
    // 0x3e0518: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3e0518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e051c:
    // 0x3e051c: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
label_3e0520:
    if (ctx->pc == 0x3E0520u) {
        ctx->pc = 0x3E0520u;
            // 0x3e0520: 0x80a402e8  lb          $a0, 0x2E8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 744)));
        ctx->pc = 0x3E0524u;
        goto label_3e0524;
    }
    ctx->pc = 0x3E051Cu;
    {
        const bool branch_taken_0x3e051c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e051c) {
            ctx->pc = 0x3E0520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E051Cu;
            // 0x3e0520: 0x80a402e8  lb          $a0, 0x2E8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0540u;
            goto label_3e0540;
        }
    }
    ctx->pc = 0x3E0524u;
label_3e0524:
    // 0x3e0524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e0524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0528:
    // 0x3e0528: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_3e052c:
    if (ctx->pc == 0x3E052Cu) {
        ctx->pc = 0x3E052Cu;
            // 0x3e052c: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3E0530u;
        goto label_3e0530;
    }
    ctx->pc = 0x3E0528u;
    {
        const bool branch_taken_0x3e0528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e0528) {
            ctx->pc = 0x3E052Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0528u;
            // 0x3e052c: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0558u;
            goto label_3e0558;
        }
    }
    ctx->pc = 0x3E0530u;
label_3e0530:
    // 0x3e0530: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_3e0534:
    if (ctx->pc == 0x3E0534u) {
        ctx->pc = 0x3E0534u;
            // 0x3e0534: 0x2416fffe  addiu       $s6, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x3E0538u;
        goto label_3e0538;
    }
    ctx->pc = 0x3E0530u;
    {
        const bool branch_taken_0x3e0530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0530) {
            ctx->pc = 0x3E0534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0530u;
            // 0x3e0534: 0x2416fffe  addiu       $s6, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E0558u;
            goto label_3e0558;
        }
    }
    ctx->pc = 0x3E0538u;
label_3e0538:
    // 0x3e0538: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e053c:
    if (ctx->pc == 0x3E053Cu) {
        ctx->pc = 0x3E0540u;
        goto label_3e0540;
    }
    ctx->pc = 0x3E0538u;
    {
        const bool branch_taken_0x3e0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0538) {
            ctx->pc = 0x3E0558u;
            goto label_3e0558;
        }
    }
    ctx->pc = 0x3E0540u;
label_3e0540:
    // 0x3e0540: 0x80a202e9  lb          $v0, 0x2E9($a1)
    ctx->pc = 0x3e0540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 745)));
label_3e0544:
    // 0x3e0544: 0x801826  xor         $v1, $a0, $zero
    ctx->pc = 0x3e0544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_3e0548:
    // 0x3e0548: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3e0548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e054c:
    // 0x3e054c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3e054cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3e0550:
    // 0x3e0550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e0554:
    // 0x3e0554: 0x82b021  addu        $s6, $a0, $v0
    ctx->pc = 0x3e0554u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3e0558:
    // 0x3e0558: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e0558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e055c:
    // 0x3e055c: 0x8c446ed8  lw          $a0, 0x6ED8($v0)
    ctx->pc = 0x3e055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
label_3e0560:
    // 0x3e0560: 0xc10b94c  jal         func_42E530
label_3e0564:
    if (ctx->pc == 0x3E0564u) {
        ctx->pc = 0x3E0564u;
            // 0x3e0564: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E0568u;
        goto label_3e0568;
    }
    ctx->pc = 0x3E0560u;
    SET_GPR_U32(ctx, 31, 0x3E0568u);
    ctx->pc = 0x3E0564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0560u;
            // 0x3e0564: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42E530u;
    if (runtime->hasFunction(0x42E530u)) {
        auto targetFn = runtime->lookupFunction(0x42E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0568u; }
        if (ctx->pc != 0x3E0568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042E530_0x42e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E0568u; }
        if (ctx->pc != 0x3E0568u) { return; }
    }
    ctx->pc = 0x3E0568u;
label_3e0568:
    // 0x3e0568: 0xae8002d0  sw          $zero, 0x2D0($s4)
    ctx->pc = 0x3e0568u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 0));
label_3e056c:
    // 0x3e056c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3e056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3e0570:
    // 0x3e0570: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3e0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e0574:
    // 0x3e0574: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3e0574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e0578:
    // 0x3e0578: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3e0578u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e057c:
    // 0x3e057c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3e057cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e0580:
    // 0x3e0580: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3e0580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e0584:
    // 0x3e0584: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e0584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e0588:
    // 0x3e0588: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e0588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e058c:
    // 0x3e058c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e058cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0590:
    // 0x3e0590: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e0590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0594:
    // 0x3e0594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e0594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e0598:
    // 0x3e0598: 0x3e00008  jr          $ra
label_3e059c:
    if (ctx->pc == 0x3E059Cu) {
        ctx->pc = 0x3E059Cu;
            // 0x3e059c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x3E05A0u;
        goto label_fallthrough_0x3e0598;
    }
    ctx->pc = 0x3E0598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E0598u;
            // 0x3e059c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3e0598:
    ctx->pc = 0x3E05A0u;
}
