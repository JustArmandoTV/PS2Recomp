#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CFDD0
// Address: 0x3cfdd0 - 0x3d0bc0
void sub_003CFDD0_0x3cfdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CFDD0_0x3cfdd0");
#endif

    switch (ctx->pc) {
        case 0x3cfdd0u: goto label_3cfdd0;
        case 0x3cfdd4u: goto label_3cfdd4;
        case 0x3cfdd8u: goto label_3cfdd8;
        case 0x3cfddcu: goto label_3cfddc;
        case 0x3cfde0u: goto label_3cfde0;
        case 0x3cfde4u: goto label_3cfde4;
        case 0x3cfde8u: goto label_3cfde8;
        case 0x3cfdecu: goto label_3cfdec;
        case 0x3cfdf0u: goto label_3cfdf0;
        case 0x3cfdf4u: goto label_3cfdf4;
        case 0x3cfdf8u: goto label_3cfdf8;
        case 0x3cfdfcu: goto label_3cfdfc;
        case 0x3cfe00u: goto label_3cfe00;
        case 0x3cfe04u: goto label_3cfe04;
        case 0x3cfe08u: goto label_3cfe08;
        case 0x3cfe0cu: goto label_3cfe0c;
        case 0x3cfe10u: goto label_3cfe10;
        case 0x3cfe14u: goto label_3cfe14;
        case 0x3cfe18u: goto label_3cfe18;
        case 0x3cfe1cu: goto label_3cfe1c;
        case 0x3cfe20u: goto label_3cfe20;
        case 0x3cfe24u: goto label_3cfe24;
        case 0x3cfe28u: goto label_3cfe28;
        case 0x3cfe2cu: goto label_3cfe2c;
        case 0x3cfe30u: goto label_3cfe30;
        case 0x3cfe34u: goto label_3cfe34;
        case 0x3cfe38u: goto label_3cfe38;
        case 0x3cfe3cu: goto label_3cfe3c;
        case 0x3cfe40u: goto label_3cfe40;
        case 0x3cfe44u: goto label_3cfe44;
        case 0x3cfe48u: goto label_3cfe48;
        case 0x3cfe4cu: goto label_3cfe4c;
        case 0x3cfe50u: goto label_3cfe50;
        case 0x3cfe54u: goto label_3cfe54;
        case 0x3cfe58u: goto label_3cfe58;
        case 0x3cfe5cu: goto label_3cfe5c;
        case 0x3cfe60u: goto label_3cfe60;
        case 0x3cfe64u: goto label_3cfe64;
        case 0x3cfe68u: goto label_3cfe68;
        case 0x3cfe6cu: goto label_3cfe6c;
        case 0x3cfe70u: goto label_3cfe70;
        case 0x3cfe74u: goto label_3cfe74;
        case 0x3cfe78u: goto label_3cfe78;
        case 0x3cfe7cu: goto label_3cfe7c;
        case 0x3cfe80u: goto label_3cfe80;
        case 0x3cfe84u: goto label_3cfe84;
        case 0x3cfe88u: goto label_3cfe88;
        case 0x3cfe8cu: goto label_3cfe8c;
        case 0x3cfe90u: goto label_3cfe90;
        case 0x3cfe94u: goto label_3cfe94;
        case 0x3cfe98u: goto label_3cfe98;
        case 0x3cfe9cu: goto label_3cfe9c;
        case 0x3cfea0u: goto label_3cfea0;
        case 0x3cfea4u: goto label_3cfea4;
        case 0x3cfea8u: goto label_3cfea8;
        case 0x3cfeacu: goto label_3cfeac;
        case 0x3cfeb0u: goto label_3cfeb0;
        case 0x3cfeb4u: goto label_3cfeb4;
        case 0x3cfeb8u: goto label_3cfeb8;
        case 0x3cfebcu: goto label_3cfebc;
        case 0x3cfec0u: goto label_3cfec0;
        case 0x3cfec4u: goto label_3cfec4;
        case 0x3cfec8u: goto label_3cfec8;
        case 0x3cfeccu: goto label_3cfecc;
        case 0x3cfed0u: goto label_3cfed0;
        case 0x3cfed4u: goto label_3cfed4;
        case 0x3cfed8u: goto label_3cfed8;
        case 0x3cfedcu: goto label_3cfedc;
        case 0x3cfee0u: goto label_3cfee0;
        case 0x3cfee4u: goto label_3cfee4;
        case 0x3cfee8u: goto label_3cfee8;
        case 0x3cfeecu: goto label_3cfeec;
        case 0x3cfef0u: goto label_3cfef0;
        case 0x3cfef4u: goto label_3cfef4;
        case 0x3cfef8u: goto label_3cfef8;
        case 0x3cfefcu: goto label_3cfefc;
        case 0x3cff00u: goto label_3cff00;
        case 0x3cff04u: goto label_3cff04;
        case 0x3cff08u: goto label_3cff08;
        case 0x3cff0cu: goto label_3cff0c;
        case 0x3cff10u: goto label_3cff10;
        case 0x3cff14u: goto label_3cff14;
        case 0x3cff18u: goto label_3cff18;
        case 0x3cff1cu: goto label_3cff1c;
        case 0x3cff20u: goto label_3cff20;
        case 0x3cff24u: goto label_3cff24;
        case 0x3cff28u: goto label_3cff28;
        case 0x3cff2cu: goto label_3cff2c;
        case 0x3cff30u: goto label_3cff30;
        case 0x3cff34u: goto label_3cff34;
        case 0x3cff38u: goto label_3cff38;
        case 0x3cff3cu: goto label_3cff3c;
        case 0x3cff40u: goto label_3cff40;
        case 0x3cff44u: goto label_3cff44;
        case 0x3cff48u: goto label_3cff48;
        case 0x3cff4cu: goto label_3cff4c;
        case 0x3cff50u: goto label_3cff50;
        case 0x3cff54u: goto label_3cff54;
        case 0x3cff58u: goto label_3cff58;
        case 0x3cff5cu: goto label_3cff5c;
        case 0x3cff60u: goto label_3cff60;
        case 0x3cff64u: goto label_3cff64;
        case 0x3cff68u: goto label_3cff68;
        case 0x3cff6cu: goto label_3cff6c;
        case 0x3cff70u: goto label_3cff70;
        case 0x3cff74u: goto label_3cff74;
        case 0x3cff78u: goto label_3cff78;
        case 0x3cff7cu: goto label_3cff7c;
        case 0x3cff80u: goto label_3cff80;
        case 0x3cff84u: goto label_3cff84;
        case 0x3cff88u: goto label_3cff88;
        case 0x3cff8cu: goto label_3cff8c;
        case 0x3cff90u: goto label_3cff90;
        case 0x3cff94u: goto label_3cff94;
        case 0x3cff98u: goto label_3cff98;
        case 0x3cff9cu: goto label_3cff9c;
        case 0x3cffa0u: goto label_3cffa0;
        case 0x3cffa4u: goto label_3cffa4;
        case 0x3cffa8u: goto label_3cffa8;
        case 0x3cffacu: goto label_3cffac;
        case 0x3cffb0u: goto label_3cffb0;
        case 0x3cffb4u: goto label_3cffb4;
        case 0x3cffb8u: goto label_3cffb8;
        case 0x3cffbcu: goto label_3cffbc;
        case 0x3cffc0u: goto label_3cffc0;
        case 0x3cffc4u: goto label_3cffc4;
        case 0x3cffc8u: goto label_3cffc8;
        case 0x3cffccu: goto label_3cffcc;
        case 0x3cffd0u: goto label_3cffd0;
        case 0x3cffd4u: goto label_3cffd4;
        case 0x3cffd8u: goto label_3cffd8;
        case 0x3cffdcu: goto label_3cffdc;
        case 0x3cffe0u: goto label_3cffe0;
        case 0x3cffe4u: goto label_3cffe4;
        case 0x3cffe8u: goto label_3cffe8;
        case 0x3cffecu: goto label_3cffec;
        case 0x3cfff0u: goto label_3cfff0;
        case 0x3cfff4u: goto label_3cfff4;
        case 0x3cfff8u: goto label_3cfff8;
        case 0x3cfffcu: goto label_3cfffc;
        case 0x3d0000u: goto label_3d0000;
        case 0x3d0004u: goto label_3d0004;
        case 0x3d0008u: goto label_3d0008;
        case 0x3d000cu: goto label_3d000c;
        case 0x3d0010u: goto label_3d0010;
        case 0x3d0014u: goto label_3d0014;
        case 0x3d0018u: goto label_3d0018;
        case 0x3d001cu: goto label_3d001c;
        case 0x3d0020u: goto label_3d0020;
        case 0x3d0024u: goto label_3d0024;
        case 0x3d0028u: goto label_3d0028;
        case 0x3d002cu: goto label_3d002c;
        case 0x3d0030u: goto label_3d0030;
        case 0x3d0034u: goto label_3d0034;
        case 0x3d0038u: goto label_3d0038;
        case 0x3d003cu: goto label_3d003c;
        case 0x3d0040u: goto label_3d0040;
        case 0x3d0044u: goto label_3d0044;
        case 0x3d0048u: goto label_3d0048;
        case 0x3d004cu: goto label_3d004c;
        case 0x3d0050u: goto label_3d0050;
        case 0x3d0054u: goto label_3d0054;
        case 0x3d0058u: goto label_3d0058;
        case 0x3d005cu: goto label_3d005c;
        case 0x3d0060u: goto label_3d0060;
        case 0x3d0064u: goto label_3d0064;
        case 0x3d0068u: goto label_3d0068;
        case 0x3d006cu: goto label_3d006c;
        case 0x3d0070u: goto label_3d0070;
        case 0x3d0074u: goto label_3d0074;
        case 0x3d0078u: goto label_3d0078;
        case 0x3d007cu: goto label_3d007c;
        case 0x3d0080u: goto label_3d0080;
        case 0x3d0084u: goto label_3d0084;
        case 0x3d0088u: goto label_3d0088;
        case 0x3d008cu: goto label_3d008c;
        case 0x3d0090u: goto label_3d0090;
        case 0x3d0094u: goto label_3d0094;
        case 0x3d0098u: goto label_3d0098;
        case 0x3d009cu: goto label_3d009c;
        case 0x3d00a0u: goto label_3d00a0;
        case 0x3d00a4u: goto label_3d00a4;
        case 0x3d00a8u: goto label_3d00a8;
        case 0x3d00acu: goto label_3d00ac;
        case 0x3d00b0u: goto label_3d00b0;
        case 0x3d00b4u: goto label_3d00b4;
        case 0x3d00b8u: goto label_3d00b8;
        case 0x3d00bcu: goto label_3d00bc;
        case 0x3d00c0u: goto label_3d00c0;
        case 0x3d00c4u: goto label_3d00c4;
        case 0x3d00c8u: goto label_3d00c8;
        case 0x3d00ccu: goto label_3d00cc;
        case 0x3d00d0u: goto label_3d00d0;
        case 0x3d00d4u: goto label_3d00d4;
        case 0x3d00d8u: goto label_3d00d8;
        case 0x3d00dcu: goto label_3d00dc;
        case 0x3d00e0u: goto label_3d00e0;
        case 0x3d00e4u: goto label_3d00e4;
        case 0x3d00e8u: goto label_3d00e8;
        case 0x3d00ecu: goto label_3d00ec;
        case 0x3d00f0u: goto label_3d00f0;
        case 0x3d00f4u: goto label_3d00f4;
        case 0x3d00f8u: goto label_3d00f8;
        case 0x3d00fcu: goto label_3d00fc;
        case 0x3d0100u: goto label_3d0100;
        case 0x3d0104u: goto label_3d0104;
        case 0x3d0108u: goto label_3d0108;
        case 0x3d010cu: goto label_3d010c;
        case 0x3d0110u: goto label_3d0110;
        case 0x3d0114u: goto label_3d0114;
        case 0x3d0118u: goto label_3d0118;
        case 0x3d011cu: goto label_3d011c;
        case 0x3d0120u: goto label_3d0120;
        case 0x3d0124u: goto label_3d0124;
        case 0x3d0128u: goto label_3d0128;
        case 0x3d012cu: goto label_3d012c;
        case 0x3d0130u: goto label_3d0130;
        case 0x3d0134u: goto label_3d0134;
        case 0x3d0138u: goto label_3d0138;
        case 0x3d013cu: goto label_3d013c;
        case 0x3d0140u: goto label_3d0140;
        case 0x3d0144u: goto label_3d0144;
        case 0x3d0148u: goto label_3d0148;
        case 0x3d014cu: goto label_3d014c;
        case 0x3d0150u: goto label_3d0150;
        case 0x3d0154u: goto label_3d0154;
        case 0x3d0158u: goto label_3d0158;
        case 0x3d015cu: goto label_3d015c;
        case 0x3d0160u: goto label_3d0160;
        case 0x3d0164u: goto label_3d0164;
        case 0x3d0168u: goto label_3d0168;
        case 0x3d016cu: goto label_3d016c;
        case 0x3d0170u: goto label_3d0170;
        case 0x3d0174u: goto label_3d0174;
        case 0x3d0178u: goto label_3d0178;
        case 0x3d017cu: goto label_3d017c;
        case 0x3d0180u: goto label_3d0180;
        case 0x3d0184u: goto label_3d0184;
        case 0x3d0188u: goto label_3d0188;
        case 0x3d018cu: goto label_3d018c;
        case 0x3d0190u: goto label_3d0190;
        case 0x3d0194u: goto label_3d0194;
        case 0x3d0198u: goto label_3d0198;
        case 0x3d019cu: goto label_3d019c;
        case 0x3d01a0u: goto label_3d01a0;
        case 0x3d01a4u: goto label_3d01a4;
        case 0x3d01a8u: goto label_3d01a8;
        case 0x3d01acu: goto label_3d01ac;
        case 0x3d01b0u: goto label_3d01b0;
        case 0x3d01b4u: goto label_3d01b4;
        case 0x3d01b8u: goto label_3d01b8;
        case 0x3d01bcu: goto label_3d01bc;
        case 0x3d01c0u: goto label_3d01c0;
        case 0x3d01c4u: goto label_3d01c4;
        case 0x3d01c8u: goto label_3d01c8;
        case 0x3d01ccu: goto label_3d01cc;
        case 0x3d01d0u: goto label_3d01d0;
        case 0x3d01d4u: goto label_3d01d4;
        case 0x3d01d8u: goto label_3d01d8;
        case 0x3d01dcu: goto label_3d01dc;
        case 0x3d01e0u: goto label_3d01e0;
        case 0x3d01e4u: goto label_3d01e4;
        case 0x3d01e8u: goto label_3d01e8;
        case 0x3d01ecu: goto label_3d01ec;
        case 0x3d01f0u: goto label_3d01f0;
        case 0x3d01f4u: goto label_3d01f4;
        case 0x3d01f8u: goto label_3d01f8;
        case 0x3d01fcu: goto label_3d01fc;
        case 0x3d0200u: goto label_3d0200;
        case 0x3d0204u: goto label_3d0204;
        case 0x3d0208u: goto label_3d0208;
        case 0x3d020cu: goto label_3d020c;
        case 0x3d0210u: goto label_3d0210;
        case 0x3d0214u: goto label_3d0214;
        case 0x3d0218u: goto label_3d0218;
        case 0x3d021cu: goto label_3d021c;
        case 0x3d0220u: goto label_3d0220;
        case 0x3d0224u: goto label_3d0224;
        case 0x3d0228u: goto label_3d0228;
        case 0x3d022cu: goto label_3d022c;
        case 0x3d0230u: goto label_3d0230;
        case 0x3d0234u: goto label_3d0234;
        case 0x3d0238u: goto label_3d0238;
        case 0x3d023cu: goto label_3d023c;
        case 0x3d0240u: goto label_3d0240;
        case 0x3d0244u: goto label_3d0244;
        case 0x3d0248u: goto label_3d0248;
        case 0x3d024cu: goto label_3d024c;
        case 0x3d0250u: goto label_3d0250;
        case 0x3d0254u: goto label_3d0254;
        case 0x3d0258u: goto label_3d0258;
        case 0x3d025cu: goto label_3d025c;
        case 0x3d0260u: goto label_3d0260;
        case 0x3d0264u: goto label_3d0264;
        case 0x3d0268u: goto label_3d0268;
        case 0x3d026cu: goto label_3d026c;
        case 0x3d0270u: goto label_3d0270;
        case 0x3d0274u: goto label_3d0274;
        case 0x3d0278u: goto label_3d0278;
        case 0x3d027cu: goto label_3d027c;
        case 0x3d0280u: goto label_3d0280;
        case 0x3d0284u: goto label_3d0284;
        case 0x3d0288u: goto label_3d0288;
        case 0x3d028cu: goto label_3d028c;
        case 0x3d0290u: goto label_3d0290;
        case 0x3d0294u: goto label_3d0294;
        case 0x3d0298u: goto label_3d0298;
        case 0x3d029cu: goto label_3d029c;
        case 0x3d02a0u: goto label_3d02a0;
        case 0x3d02a4u: goto label_3d02a4;
        case 0x3d02a8u: goto label_3d02a8;
        case 0x3d02acu: goto label_3d02ac;
        case 0x3d02b0u: goto label_3d02b0;
        case 0x3d02b4u: goto label_3d02b4;
        case 0x3d02b8u: goto label_3d02b8;
        case 0x3d02bcu: goto label_3d02bc;
        case 0x3d02c0u: goto label_3d02c0;
        case 0x3d02c4u: goto label_3d02c4;
        case 0x3d02c8u: goto label_3d02c8;
        case 0x3d02ccu: goto label_3d02cc;
        case 0x3d02d0u: goto label_3d02d0;
        case 0x3d02d4u: goto label_3d02d4;
        case 0x3d02d8u: goto label_3d02d8;
        case 0x3d02dcu: goto label_3d02dc;
        case 0x3d02e0u: goto label_3d02e0;
        case 0x3d02e4u: goto label_3d02e4;
        case 0x3d02e8u: goto label_3d02e8;
        case 0x3d02ecu: goto label_3d02ec;
        case 0x3d02f0u: goto label_3d02f0;
        case 0x3d02f4u: goto label_3d02f4;
        case 0x3d02f8u: goto label_3d02f8;
        case 0x3d02fcu: goto label_3d02fc;
        case 0x3d0300u: goto label_3d0300;
        case 0x3d0304u: goto label_3d0304;
        case 0x3d0308u: goto label_3d0308;
        case 0x3d030cu: goto label_3d030c;
        case 0x3d0310u: goto label_3d0310;
        case 0x3d0314u: goto label_3d0314;
        case 0x3d0318u: goto label_3d0318;
        case 0x3d031cu: goto label_3d031c;
        case 0x3d0320u: goto label_3d0320;
        case 0x3d0324u: goto label_3d0324;
        case 0x3d0328u: goto label_3d0328;
        case 0x3d032cu: goto label_3d032c;
        case 0x3d0330u: goto label_3d0330;
        case 0x3d0334u: goto label_3d0334;
        case 0x3d0338u: goto label_3d0338;
        case 0x3d033cu: goto label_3d033c;
        case 0x3d0340u: goto label_3d0340;
        case 0x3d0344u: goto label_3d0344;
        case 0x3d0348u: goto label_3d0348;
        case 0x3d034cu: goto label_3d034c;
        case 0x3d0350u: goto label_3d0350;
        case 0x3d0354u: goto label_3d0354;
        case 0x3d0358u: goto label_3d0358;
        case 0x3d035cu: goto label_3d035c;
        case 0x3d0360u: goto label_3d0360;
        case 0x3d0364u: goto label_3d0364;
        case 0x3d0368u: goto label_3d0368;
        case 0x3d036cu: goto label_3d036c;
        case 0x3d0370u: goto label_3d0370;
        case 0x3d0374u: goto label_3d0374;
        case 0x3d0378u: goto label_3d0378;
        case 0x3d037cu: goto label_3d037c;
        case 0x3d0380u: goto label_3d0380;
        case 0x3d0384u: goto label_3d0384;
        case 0x3d0388u: goto label_3d0388;
        case 0x3d038cu: goto label_3d038c;
        case 0x3d0390u: goto label_3d0390;
        case 0x3d0394u: goto label_3d0394;
        case 0x3d0398u: goto label_3d0398;
        case 0x3d039cu: goto label_3d039c;
        case 0x3d03a0u: goto label_3d03a0;
        case 0x3d03a4u: goto label_3d03a4;
        case 0x3d03a8u: goto label_3d03a8;
        case 0x3d03acu: goto label_3d03ac;
        case 0x3d03b0u: goto label_3d03b0;
        case 0x3d03b4u: goto label_3d03b4;
        case 0x3d03b8u: goto label_3d03b8;
        case 0x3d03bcu: goto label_3d03bc;
        case 0x3d03c0u: goto label_3d03c0;
        case 0x3d03c4u: goto label_3d03c4;
        case 0x3d03c8u: goto label_3d03c8;
        case 0x3d03ccu: goto label_3d03cc;
        case 0x3d03d0u: goto label_3d03d0;
        case 0x3d03d4u: goto label_3d03d4;
        case 0x3d03d8u: goto label_3d03d8;
        case 0x3d03dcu: goto label_3d03dc;
        case 0x3d03e0u: goto label_3d03e0;
        case 0x3d03e4u: goto label_3d03e4;
        case 0x3d03e8u: goto label_3d03e8;
        case 0x3d03ecu: goto label_3d03ec;
        case 0x3d03f0u: goto label_3d03f0;
        case 0x3d03f4u: goto label_3d03f4;
        case 0x3d03f8u: goto label_3d03f8;
        case 0x3d03fcu: goto label_3d03fc;
        case 0x3d0400u: goto label_3d0400;
        case 0x3d0404u: goto label_3d0404;
        case 0x3d0408u: goto label_3d0408;
        case 0x3d040cu: goto label_3d040c;
        case 0x3d0410u: goto label_3d0410;
        case 0x3d0414u: goto label_3d0414;
        case 0x3d0418u: goto label_3d0418;
        case 0x3d041cu: goto label_3d041c;
        case 0x3d0420u: goto label_3d0420;
        case 0x3d0424u: goto label_3d0424;
        case 0x3d0428u: goto label_3d0428;
        case 0x3d042cu: goto label_3d042c;
        case 0x3d0430u: goto label_3d0430;
        case 0x3d0434u: goto label_3d0434;
        case 0x3d0438u: goto label_3d0438;
        case 0x3d043cu: goto label_3d043c;
        case 0x3d0440u: goto label_3d0440;
        case 0x3d0444u: goto label_3d0444;
        case 0x3d0448u: goto label_3d0448;
        case 0x3d044cu: goto label_3d044c;
        case 0x3d0450u: goto label_3d0450;
        case 0x3d0454u: goto label_3d0454;
        case 0x3d0458u: goto label_3d0458;
        case 0x3d045cu: goto label_3d045c;
        case 0x3d0460u: goto label_3d0460;
        case 0x3d0464u: goto label_3d0464;
        case 0x3d0468u: goto label_3d0468;
        case 0x3d046cu: goto label_3d046c;
        case 0x3d0470u: goto label_3d0470;
        case 0x3d0474u: goto label_3d0474;
        case 0x3d0478u: goto label_3d0478;
        case 0x3d047cu: goto label_3d047c;
        case 0x3d0480u: goto label_3d0480;
        case 0x3d0484u: goto label_3d0484;
        case 0x3d0488u: goto label_3d0488;
        case 0x3d048cu: goto label_3d048c;
        case 0x3d0490u: goto label_3d0490;
        case 0x3d0494u: goto label_3d0494;
        case 0x3d0498u: goto label_3d0498;
        case 0x3d049cu: goto label_3d049c;
        case 0x3d04a0u: goto label_3d04a0;
        case 0x3d04a4u: goto label_3d04a4;
        case 0x3d04a8u: goto label_3d04a8;
        case 0x3d04acu: goto label_3d04ac;
        case 0x3d04b0u: goto label_3d04b0;
        case 0x3d04b4u: goto label_3d04b4;
        case 0x3d04b8u: goto label_3d04b8;
        case 0x3d04bcu: goto label_3d04bc;
        case 0x3d04c0u: goto label_3d04c0;
        case 0x3d04c4u: goto label_3d04c4;
        case 0x3d04c8u: goto label_3d04c8;
        case 0x3d04ccu: goto label_3d04cc;
        case 0x3d04d0u: goto label_3d04d0;
        case 0x3d04d4u: goto label_3d04d4;
        case 0x3d04d8u: goto label_3d04d8;
        case 0x3d04dcu: goto label_3d04dc;
        case 0x3d04e0u: goto label_3d04e0;
        case 0x3d04e4u: goto label_3d04e4;
        case 0x3d04e8u: goto label_3d04e8;
        case 0x3d04ecu: goto label_3d04ec;
        case 0x3d04f0u: goto label_3d04f0;
        case 0x3d04f4u: goto label_3d04f4;
        case 0x3d04f8u: goto label_3d04f8;
        case 0x3d04fcu: goto label_3d04fc;
        case 0x3d0500u: goto label_3d0500;
        case 0x3d0504u: goto label_3d0504;
        case 0x3d0508u: goto label_3d0508;
        case 0x3d050cu: goto label_3d050c;
        case 0x3d0510u: goto label_3d0510;
        case 0x3d0514u: goto label_3d0514;
        case 0x3d0518u: goto label_3d0518;
        case 0x3d051cu: goto label_3d051c;
        case 0x3d0520u: goto label_3d0520;
        case 0x3d0524u: goto label_3d0524;
        case 0x3d0528u: goto label_3d0528;
        case 0x3d052cu: goto label_3d052c;
        case 0x3d0530u: goto label_3d0530;
        case 0x3d0534u: goto label_3d0534;
        case 0x3d0538u: goto label_3d0538;
        case 0x3d053cu: goto label_3d053c;
        case 0x3d0540u: goto label_3d0540;
        case 0x3d0544u: goto label_3d0544;
        case 0x3d0548u: goto label_3d0548;
        case 0x3d054cu: goto label_3d054c;
        case 0x3d0550u: goto label_3d0550;
        case 0x3d0554u: goto label_3d0554;
        case 0x3d0558u: goto label_3d0558;
        case 0x3d055cu: goto label_3d055c;
        case 0x3d0560u: goto label_3d0560;
        case 0x3d0564u: goto label_3d0564;
        case 0x3d0568u: goto label_3d0568;
        case 0x3d056cu: goto label_3d056c;
        case 0x3d0570u: goto label_3d0570;
        case 0x3d0574u: goto label_3d0574;
        case 0x3d0578u: goto label_3d0578;
        case 0x3d057cu: goto label_3d057c;
        case 0x3d0580u: goto label_3d0580;
        case 0x3d0584u: goto label_3d0584;
        case 0x3d0588u: goto label_3d0588;
        case 0x3d058cu: goto label_3d058c;
        case 0x3d0590u: goto label_3d0590;
        case 0x3d0594u: goto label_3d0594;
        case 0x3d0598u: goto label_3d0598;
        case 0x3d059cu: goto label_3d059c;
        case 0x3d05a0u: goto label_3d05a0;
        case 0x3d05a4u: goto label_3d05a4;
        case 0x3d05a8u: goto label_3d05a8;
        case 0x3d05acu: goto label_3d05ac;
        case 0x3d05b0u: goto label_3d05b0;
        case 0x3d05b4u: goto label_3d05b4;
        case 0x3d05b8u: goto label_3d05b8;
        case 0x3d05bcu: goto label_3d05bc;
        case 0x3d05c0u: goto label_3d05c0;
        case 0x3d05c4u: goto label_3d05c4;
        case 0x3d05c8u: goto label_3d05c8;
        case 0x3d05ccu: goto label_3d05cc;
        case 0x3d05d0u: goto label_3d05d0;
        case 0x3d05d4u: goto label_3d05d4;
        case 0x3d05d8u: goto label_3d05d8;
        case 0x3d05dcu: goto label_3d05dc;
        case 0x3d05e0u: goto label_3d05e0;
        case 0x3d05e4u: goto label_3d05e4;
        case 0x3d05e8u: goto label_3d05e8;
        case 0x3d05ecu: goto label_3d05ec;
        case 0x3d05f0u: goto label_3d05f0;
        case 0x3d05f4u: goto label_3d05f4;
        case 0x3d05f8u: goto label_3d05f8;
        case 0x3d05fcu: goto label_3d05fc;
        case 0x3d0600u: goto label_3d0600;
        case 0x3d0604u: goto label_3d0604;
        case 0x3d0608u: goto label_3d0608;
        case 0x3d060cu: goto label_3d060c;
        case 0x3d0610u: goto label_3d0610;
        case 0x3d0614u: goto label_3d0614;
        case 0x3d0618u: goto label_3d0618;
        case 0x3d061cu: goto label_3d061c;
        case 0x3d0620u: goto label_3d0620;
        case 0x3d0624u: goto label_3d0624;
        case 0x3d0628u: goto label_3d0628;
        case 0x3d062cu: goto label_3d062c;
        case 0x3d0630u: goto label_3d0630;
        case 0x3d0634u: goto label_3d0634;
        case 0x3d0638u: goto label_3d0638;
        case 0x3d063cu: goto label_3d063c;
        case 0x3d0640u: goto label_3d0640;
        case 0x3d0644u: goto label_3d0644;
        case 0x3d0648u: goto label_3d0648;
        case 0x3d064cu: goto label_3d064c;
        case 0x3d0650u: goto label_3d0650;
        case 0x3d0654u: goto label_3d0654;
        case 0x3d0658u: goto label_3d0658;
        case 0x3d065cu: goto label_3d065c;
        case 0x3d0660u: goto label_3d0660;
        case 0x3d0664u: goto label_3d0664;
        case 0x3d0668u: goto label_3d0668;
        case 0x3d066cu: goto label_3d066c;
        case 0x3d0670u: goto label_3d0670;
        case 0x3d0674u: goto label_3d0674;
        case 0x3d0678u: goto label_3d0678;
        case 0x3d067cu: goto label_3d067c;
        case 0x3d0680u: goto label_3d0680;
        case 0x3d0684u: goto label_3d0684;
        case 0x3d0688u: goto label_3d0688;
        case 0x3d068cu: goto label_3d068c;
        case 0x3d0690u: goto label_3d0690;
        case 0x3d0694u: goto label_3d0694;
        case 0x3d0698u: goto label_3d0698;
        case 0x3d069cu: goto label_3d069c;
        case 0x3d06a0u: goto label_3d06a0;
        case 0x3d06a4u: goto label_3d06a4;
        case 0x3d06a8u: goto label_3d06a8;
        case 0x3d06acu: goto label_3d06ac;
        case 0x3d06b0u: goto label_3d06b0;
        case 0x3d06b4u: goto label_3d06b4;
        case 0x3d06b8u: goto label_3d06b8;
        case 0x3d06bcu: goto label_3d06bc;
        case 0x3d06c0u: goto label_3d06c0;
        case 0x3d06c4u: goto label_3d06c4;
        case 0x3d06c8u: goto label_3d06c8;
        case 0x3d06ccu: goto label_3d06cc;
        case 0x3d06d0u: goto label_3d06d0;
        case 0x3d06d4u: goto label_3d06d4;
        case 0x3d06d8u: goto label_3d06d8;
        case 0x3d06dcu: goto label_3d06dc;
        case 0x3d06e0u: goto label_3d06e0;
        case 0x3d06e4u: goto label_3d06e4;
        case 0x3d06e8u: goto label_3d06e8;
        case 0x3d06ecu: goto label_3d06ec;
        case 0x3d06f0u: goto label_3d06f0;
        case 0x3d06f4u: goto label_3d06f4;
        case 0x3d06f8u: goto label_3d06f8;
        case 0x3d06fcu: goto label_3d06fc;
        case 0x3d0700u: goto label_3d0700;
        case 0x3d0704u: goto label_3d0704;
        case 0x3d0708u: goto label_3d0708;
        case 0x3d070cu: goto label_3d070c;
        case 0x3d0710u: goto label_3d0710;
        case 0x3d0714u: goto label_3d0714;
        case 0x3d0718u: goto label_3d0718;
        case 0x3d071cu: goto label_3d071c;
        case 0x3d0720u: goto label_3d0720;
        case 0x3d0724u: goto label_3d0724;
        case 0x3d0728u: goto label_3d0728;
        case 0x3d072cu: goto label_3d072c;
        case 0x3d0730u: goto label_3d0730;
        case 0x3d0734u: goto label_3d0734;
        case 0x3d0738u: goto label_3d0738;
        case 0x3d073cu: goto label_3d073c;
        case 0x3d0740u: goto label_3d0740;
        case 0x3d0744u: goto label_3d0744;
        case 0x3d0748u: goto label_3d0748;
        case 0x3d074cu: goto label_3d074c;
        case 0x3d0750u: goto label_3d0750;
        case 0x3d0754u: goto label_3d0754;
        case 0x3d0758u: goto label_3d0758;
        case 0x3d075cu: goto label_3d075c;
        case 0x3d0760u: goto label_3d0760;
        case 0x3d0764u: goto label_3d0764;
        case 0x3d0768u: goto label_3d0768;
        case 0x3d076cu: goto label_3d076c;
        case 0x3d0770u: goto label_3d0770;
        case 0x3d0774u: goto label_3d0774;
        case 0x3d0778u: goto label_3d0778;
        case 0x3d077cu: goto label_3d077c;
        case 0x3d0780u: goto label_3d0780;
        case 0x3d0784u: goto label_3d0784;
        case 0x3d0788u: goto label_3d0788;
        case 0x3d078cu: goto label_3d078c;
        case 0x3d0790u: goto label_3d0790;
        case 0x3d0794u: goto label_3d0794;
        case 0x3d0798u: goto label_3d0798;
        case 0x3d079cu: goto label_3d079c;
        case 0x3d07a0u: goto label_3d07a0;
        case 0x3d07a4u: goto label_3d07a4;
        case 0x3d07a8u: goto label_3d07a8;
        case 0x3d07acu: goto label_3d07ac;
        case 0x3d07b0u: goto label_3d07b0;
        case 0x3d07b4u: goto label_3d07b4;
        case 0x3d07b8u: goto label_3d07b8;
        case 0x3d07bcu: goto label_3d07bc;
        case 0x3d07c0u: goto label_3d07c0;
        case 0x3d07c4u: goto label_3d07c4;
        case 0x3d07c8u: goto label_3d07c8;
        case 0x3d07ccu: goto label_3d07cc;
        case 0x3d07d0u: goto label_3d07d0;
        case 0x3d07d4u: goto label_3d07d4;
        case 0x3d07d8u: goto label_3d07d8;
        case 0x3d07dcu: goto label_3d07dc;
        case 0x3d07e0u: goto label_3d07e0;
        case 0x3d07e4u: goto label_3d07e4;
        case 0x3d07e8u: goto label_3d07e8;
        case 0x3d07ecu: goto label_3d07ec;
        case 0x3d07f0u: goto label_3d07f0;
        case 0x3d07f4u: goto label_3d07f4;
        case 0x3d07f8u: goto label_3d07f8;
        case 0x3d07fcu: goto label_3d07fc;
        case 0x3d0800u: goto label_3d0800;
        case 0x3d0804u: goto label_3d0804;
        case 0x3d0808u: goto label_3d0808;
        case 0x3d080cu: goto label_3d080c;
        case 0x3d0810u: goto label_3d0810;
        case 0x3d0814u: goto label_3d0814;
        case 0x3d0818u: goto label_3d0818;
        case 0x3d081cu: goto label_3d081c;
        case 0x3d0820u: goto label_3d0820;
        case 0x3d0824u: goto label_3d0824;
        case 0x3d0828u: goto label_3d0828;
        case 0x3d082cu: goto label_3d082c;
        case 0x3d0830u: goto label_3d0830;
        case 0x3d0834u: goto label_3d0834;
        case 0x3d0838u: goto label_3d0838;
        case 0x3d083cu: goto label_3d083c;
        case 0x3d0840u: goto label_3d0840;
        case 0x3d0844u: goto label_3d0844;
        case 0x3d0848u: goto label_3d0848;
        case 0x3d084cu: goto label_3d084c;
        case 0x3d0850u: goto label_3d0850;
        case 0x3d0854u: goto label_3d0854;
        case 0x3d0858u: goto label_3d0858;
        case 0x3d085cu: goto label_3d085c;
        case 0x3d0860u: goto label_3d0860;
        case 0x3d0864u: goto label_3d0864;
        case 0x3d0868u: goto label_3d0868;
        case 0x3d086cu: goto label_3d086c;
        case 0x3d0870u: goto label_3d0870;
        case 0x3d0874u: goto label_3d0874;
        case 0x3d0878u: goto label_3d0878;
        case 0x3d087cu: goto label_3d087c;
        case 0x3d0880u: goto label_3d0880;
        case 0x3d0884u: goto label_3d0884;
        case 0x3d0888u: goto label_3d0888;
        case 0x3d088cu: goto label_3d088c;
        case 0x3d0890u: goto label_3d0890;
        case 0x3d0894u: goto label_3d0894;
        case 0x3d0898u: goto label_3d0898;
        case 0x3d089cu: goto label_3d089c;
        case 0x3d08a0u: goto label_3d08a0;
        case 0x3d08a4u: goto label_3d08a4;
        case 0x3d08a8u: goto label_3d08a8;
        case 0x3d08acu: goto label_3d08ac;
        case 0x3d08b0u: goto label_3d08b0;
        case 0x3d08b4u: goto label_3d08b4;
        case 0x3d08b8u: goto label_3d08b8;
        case 0x3d08bcu: goto label_3d08bc;
        case 0x3d08c0u: goto label_3d08c0;
        case 0x3d08c4u: goto label_3d08c4;
        case 0x3d08c8u: goto label_3d08c8;
        case 0x3d08ccu: goto label_3d08cc;
        case 0x3d08d0u: goto label_3d08d0;
        case 0x3d08d4u: goto label_3d08d4;
        case 0x3d08d8u: goto label_3d08d8;
        case 0x3d08dcu: goto label_3d08dc;
        case 0x3d08e0u: goto label_3d08e0;
        case 0x3d08e4u: goto label_3d08e4;
        case 0x3d08e8u: goto label_3d08e8;
        case 0x3d08ecu: goto label_3d08ec;
        case 0x3d08f0u: goto label_3d08f0;
        case 0x3d08f4u: goto label_3d08f4;
        case 0x3d08f8u: goto label_3d08f8;
        case 0x3d08fcu: goto label_3d08fc;
        case 0x3d0900u: goto label_3d0900;
        case 0x3d0904u: goto label_3d0904;
        case 0x3d0908u: goto label_3d0908;
        case 0x3d090cu: goto label_3d090c;
        case 0x3d0910u: goto label_3d0910;
        case 0x3d0914u: goto label_3d0914;
        case 0x3d0918u: goto label_3d0918;
        case 0x3d091cu: goto label_3d091c;
        case 0x3d0920u: goto label_3d0920;
        case 0x3d0924u: goto label_3d0924;
        case 0x3d0928u: goto label_3d0928;
        case 0x3d092cu: goto label_3d092c;
        case 0x3d0930u: goto label_3d0930;
        case 0x3d0934u: goto label_3d0934;
        case 0x3d0938u: goto label_3d0938;
        case 0x3d093cu: goto label_3d093c;
        case 0x3d0940u: goto label_3d0940;
        case 0x3d0944u: goto label_3d0944;
        case 0x3d0948u: goto label_3d0948;
        case 0x3d094cu: goto label_3d094c;
        case 0x3d0950u: goto label_3d0950;
        case 0x3d0954u: goto label_3d0954;
        case 0x3d0958u: goto label_3d0958;
        case 0x3d095cu: goto label_3d095c;
        case 0x3d0960u: goto label_3d0960;
        case 0x3d0964u: goto label_3d0964;
        case 0x3d0968u: goto label_3d0968;
        case 0x3d096cu: goto label_3d096c;
        case 0x3d0970u: goto label_3d0970;
        case 0x3d0974u: goto label_3d0974;
        case 0x3d0978u: goto label_3d0978;
        case 0x3d097cu: goto label_3d097c;
        case 0x3d0980u: goto label_3d0980;
        case 0x3d0984u: goto label_3d0984;
        case 0x3d0988u: goto label_3d0988;
        case 0x3d098cu: goto label_3d098c;
        case 0x3d0990u: goto label_3d0990;
        case 0x3d0994u: goto label_3d0994;
        case 0x3d0998u: goto label_3d0998;
        case 0x3d099cu: goto label_3d099c;
        case 0x3d09a0u: goto label_3d09a0;
        case 0x3d09a4u: goto label_3d09a4;
        case 0x3d09a8u: goto label_3d09a8;
        case 0x3d09acu: goto label_3d09ac;
        case 0x3d09b0u: goto label_3d09b0;
        case 0x3d09b4u: goto label_3d09b4;
        case 0x3d09b8u: goto label_3d09b8;
        case 0x3d09bcu: goto label_3d09bc;
        case 0x3d09c0u: goto label_3d09c0;
        case 0x3d09c4u: goto label_3d09c4;
        case 0x3d09c8u: goto label_3d09c8;
        case 0x3d09ccu: goto label_3d09cc;
        case 0x3d09d0u: goto label_3d09d0;
        case 0x3d09d4u: goto label_3d09d4;
        case 0x3d09d8u: goto label_3d09d8;
        case 0x3d09dcu: goto label_3d09dc;
        case 0x3d09e0u: goto label_3d09e0;
        case 0x3d09e4u: goto label_3d09e4;
        case 0x3d09e8u: goto label_3d09e8;
        case 0x3d09ecu: goto label_3d09ec;
        case 0x3d09f0u: goto label_3d09f0;
        case 0x3d09f4u: goto label_3d09f4;
        case 0x3d09f8u: goto label_3d09f8;
        case 0x3d09fcu: goto label_3d09fc;
        case 0x3d0a00u: goto label_3d0a00;
        case 0x3d0a04u: goto label_3d0a04;
        case 0x3d0a08u: goto label_3d0a08;
        case 0x3d0a0cu: goto label_3d0a0c;
        case 0x3d0a10u: goto label_3d0a10;
        case 0x3d0a14u: goto label_3d0a14;
        case 0x3d0a18u: goto label_3d0a18;
        case 0x3d0a1cu: goto label_3d0a1c;
        case 0x3d0a20u: goto label_3d0a20;
        case 0x3d0a24u: goto label_3d0a24;
        case 0x3d0a28u: goto label_3d0a28;
        case 0x3d0a2cu: goto label_3d0a2c;
        case 0x3d0a30u: goto label_3d0a30;
        case 0x3d0a34u: goto label_3d0a34;
        case 0x3d0a38u: goto label_3d0a38;
        case 0x3d0a3cu: goto label_3d0a3c;
        case 0x3d0a40u: goto label_3d0a40;
        case 0x3d0a44u: goto label_3d0a44;
        case 0x3d0a48u: goto label_3d0a48;
        case 0x3d0a4cu: goto label_3d0a4c;
        case 0x3d0a50u: goto label_3d0a50;
        case 0x3d0a54u: goto label_3d0a54;
        case 0x3d0a58u: goto label_3d0a58;
        case 0x3d0a5cu: goto label_3d0a5c;
        case 0x3d0a60u: goto label_3d0a60;
        case 0x3d0a64u: goto label_3d0a64;
        case 0x3d0a68u: goto label_3d0a68;
        case 0x3d0a6cu: goto label_3d0a6c;
        case 0x3d0a70u: goto label_3d0a70;
        case 0x3d0a74u: goto label_3d0a74;
        case 0x3d0a78u: goto label_3d0a78;
        case 0x3d0a7cu: goto label_3d0a7c;
        case 0x3d0a80u: goto label_3d0a80;
        case 0x3d0a84u: goto label_3d0a84;
        case 0x3d0a88u: goto label_3d0a88;
        case 0x3d0a8cu: goto label_3d0a8c;
        case 0x3d0a90u: goto label_3d0a90;
        case 0x3d0a94u: goto label_3d0a94;
        case 0x3d0a98u: goto label_3d0a98;
        case 0x3d0a9cu: goto label_3d0a9c;
        case 0x3d0aa0u: goto label_3d0aa0;
        case 0x3d0aa4u: goto label_3d0aa4;
        case 0x3d0aa8u: goto label_3d0aa8;
        case 0x3d0aacu: goto label_3d0aac;
        case 0x3d0ab0u: goto label_3d0ab0;
        case 0x3d0ab4u: goto label_3d0ab4;
        case 0x3d0ab8u: goto label_3d0ab8;
        case 0x3d0abcu: goto label_3d0abc;
        case 0x3d0ac0u: goto label_3d0ac0;
        case 0x3d0ac4u: goto label_3d0ac4;
        case 0x3d0ac8u: goto label_3d0ac8;
        case 0x3d0accu: goto label_3d0acc;
        case 0x3d0ad0u: goto label_3d0ad0;
        case 0x3d0ad4u: goto label_3d0ad4;
        case 0x3d0ad8u: goto label_3d0ad8;
        case 0x3d0adcu: goto label_3d0adc;
        case 0x3d0ae0u: goto label_3d0ae0;
        case 0x3d0ae4u: goto label_3d0ae4;
        case 0x3d0ae8u: goto label_3d0ae8;
        case 0x3d0aecu: goto label_3d0aec;
        case 0x3d0af0u: goto label_3d0af0;
        case 0x3d0af4u: goto label_3d0af4;
        case 0x3d0af8u: goto label_3d0af8;
        case 0x3d0afcu: goto label_3d0afc;
        case 0x3d0b00u: goto label_3d0b00;
        case 0x3d0b04u: goto label_3d0b04;
        case 0x3d0b08u: goto label_3d0b08;
        case 0x3d0b0cu: goto label_3d0b0c;
        case 0x3d0b10u: goto label_3d0b10;
        case 0x3d0b14u: goto label_3d0b14;
        case 0x3d0b18u: goto label_3d0b18;
        case 0x3d0b1cu: goto label_3d0b1c;
        case 0x3d0b20u: goto label_3d0b20;
        case 0x3d0b24u: goto label_3d0b24;
        case 0x3d0b28u: goto label_3d0b28;
        case 0x3d0b2cu: goto label_3d0b2c;
        case 0x3d0b30u: goto label_3d0b30;
        case 0x3d0b34u: goto label_3d0b34;
        case 0x3d0b38u: goto label_3d0b38;
        case 0x3d0b3cu: goto label_3d0b3c;
        case 0x3d0b40u: goto label_3d0b40;
        case 0x3d0b44u: goto label_3d0b44;
        case 0x3d0b48u: goto label_3d0b48;
        case 0x3d0b4cu: goto label_3d0b4c;
        case 0x3d0b50u: goto label_3d0b50;
        case 0x3d0b54u: goto label_3d0b54;
        case 0x3d0b58u: goto label_3d0b58;
        case 0x3d0b5cu: goto label_3d0b5c;
        case 0x3d0b60u: goto label_3d0b60;
        case 0x3d0b64u: goto label_3d0b64;
        case 0x3d0b68u: goto label_3d0b68;
        case 0x3d0b6cu: goto label_3d0b6c;
        case 0x3d0b70u: goto label_3d0b70;
        case 0x3d0b74u: goto label_3d0b74;
        case 0x3d0b78u: goto label_3d0b78;
        case 0x3d0b7cu: goto label_3d0b7c;
        case 0x3d0b80u: goto label_3d0b80;
        case 0x3d0b84u: goto label_3d0b84;
        case 0x3d0b88u: goto label_3d0b88;
        case 0x3d0b8cu: goto label_3d0b8c;
        case 0x3d0b90u: goto label_3d0b90;
        case 0x3d0b94u: goto label_3d0b94;
        case 0x3d0b98u: goto label_3d0b98;
        case 0x3d0b9cu: goto label_3d0b9c;
        case 0x3d0ba0u: goto label_3d0ba0;
        case 0x3d0ba4u: goto label_3d0ba4;
        case 0x3d0ba8u: goto label_3d0ba8;
        case 0x3d0bacu: goto label_3d0bac;
        case 0x3d0bb0u: goto label_3d0bb0;
        case 0x3d0bb4u: goto label_3d0bb4;
        case 0x3d0bb8u: goto label_3d0bb8;
        case 0x3d0bbcu: goto label_3d0bbc;
        default: break;
    }

    ctx->pc = 0x3cfdd0u;

label_3cfdd0:
    // 0x3cfdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cfdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3cfdd4:
    // 0x3cfdd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3cfdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3cfdd8:
    // 0x3cfdd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cfdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cfddc:
    // 0x3cfddc: 0x2463ca60  addiu       $v1, $v1, -0x35A0
    ctx->pc = 0x3cfddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
label_3cfde0:
    // 0x3cfde0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cfde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cfde4:
    // 0x3cfde4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cfde8:
    // 0x3cfde8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3cfde8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3cfdec:
    // 0x3cfdec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cfdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cfdf0:
    // 0x3cfdf0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3cfdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3cfdf4:
    // 0x3cfdf4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3cfdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_3cfdf8:
    // 0x3cfdf8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3cfdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_3cfdfc:
    // 0x3cfdfc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3cfdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_3cfe00:
    // 0x3cfe00: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3cfe00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_3cfe04:
    // 0x3cfe04: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3cfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_3cfe08:
    // 0x3cfe08: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x3cfe08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
label_3cfe0c:
    // 0x3cfe0c: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x3cfe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
label_3cfe10:
    // 0x3cfe10: 0x8c4267d8  lw          $v0, 0x67D8($v0)
    ctx->pc = 0x3cfe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26584)));
label_3cfe14:
    // 0x3cfe14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cfe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cfe18:
    // 0x3cfe18: 0x40f809  jalr        $v0
label_3cfe1c:
    if (ctx->pc == 0x3CFE1Cu) {
        ctx->pc = 0x3CFE1Cu;
            // 0x3cfe1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFE20u;
        goto label_3cfe20;
    }
    ctx->pc = 0x3CFE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CFE20u);
        ctx->pc = 0x3CFE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFE18u;
            // 0x3cfe1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CFE20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CFE20u; }
            if (ctx->pc != 0x3CFE20u) { return; }
        }
        }
    }
    ctx->pc = 0x3CFE20u;
label_3cfe20:
    // 0x3cfe20: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3cfe20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_3cfe24:
    // 0x3cfe24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cfe24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cfe28:
    // 0x3cfe28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cfe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cfe2c:
    // 0x3cfe2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cfe2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cfe30:
    // 0x3cfe30: 0x3e00008  jr          $ra
label_3cfe34:
    if (ctx->pc == 0x3CFE34u) {
        ctx->pc = 0x3CFE34u;
            // 0x3cfe34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3CFE38u;
        goto label_3cfe38;
    }
    ctx->pc = 0x3CFE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CFE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFE30u;
            // 0x3cfe34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CFE38u;
label_3cfe38:
    // 0x3cfe38: 0x0  nop
    ctx->pc = 0x3cfe38u;
    // NOP
label_3cfe3c:
    // 0x3cfe3c: 0x0  nop
    ctx->pc = 0x3cfe3cu;
    // NOP
label_3cfe40:
    // 0x3cfe40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3cfe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3cfe44:
    // 0x3cfe44: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3cfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3cfe48:
    // 0x3cfe48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3cfe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3cfe4c:
    // 0x3cfe4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3cfe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cfe50:
    // 0x3cfe50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cfe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3cfe54:
    // 0x3cfe54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3cfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3cfe58:
    // 0x3cfe58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cfe58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3cfe5c:
    // 0x3cfe5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cfe5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cfe60:
    // 0x3cfe60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cfe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cfe64:
    // 0x3cfe64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cfe64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cfe68:
    // 0x3cfe68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cfe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3cfe6c:
    // 0x3cfe6c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3cfe6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cfe70:
    // 0x3cfe70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cfe70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cfe74:
    // 0x3cfe74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3cfe74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cfe78:
    // 0x3cfe78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3cfe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3cfe7c:
    // 0x3cfe7c: 0x8c7100c8  lw          $s1, 0xC8($v1)
    ctx->pc = 0x3cfe7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_3cfe80:
    // 0x3cfe80: 0xc6200dec  lwc1        $f0, 0xDEC($s1)
    ctx->pc = 0x3cfe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cfe84:
    // 0x3cfe84: 0x8e320df8  lw          $s2, 0xDF8($s1)
    ctx->pc = 0x3cfe84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3576)));
label_3cfe88:
    // 0x3cfe88: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x3cfe88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_3cfe8c:
    // 0x3cfe8c: 0x4600151c  madd.s      $f20, $f2, $f0
    ctx->pc = 0x3cfe8cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_3cfe90:
    // 0x3cfe90: 0xc04ce84  jal         func_133A10
label_3cfe94:
    if (ctx->pc == 0x3CFE94u) {
        ctx->pc = 0x3CFE94u;
            // 0x3cfe94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFE98u;
        goto label_3cfe98;
    }
    ctx->pc = 0x3CFE90u;
    SET_GPR_U32(ctx, 31, 0x3CFE98u);
    ctx->pc = 0x3CFE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFE90u;
            // 0x3cfe94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFE98u; }
        if (ctx->pc != 0x3CFE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFE98u; }
        if (ctx->pc != 0x3CFE98u) { return; }
    }
    ctx->pc = 0x3CFE98u;
label_3cfe98:
    // 0x3cfe98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3cfe9c:
    // 0x3cfe9c: 0xc4419230  lwc1        $f1, -0x6DD0($v0)
    ctx->pc = 0x3cfe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cfea0:
    // 0x3cfea0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3cfea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3cfea4:
    // 0x3cfea4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cfea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cfea8:
    // 0x3cfea8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cfeac:
    // 0x3cfeac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3cfeacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cfeb0:
    // 0x3cfeb0: 0xc04f2d4  jal         func_13CB50
label_3cfeb4:
    if (ctx->pc == 0x3CFEB4u) {
        ctx->pc = 0x3CFEB4u;
            // 0x3cfeb4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3CFEB8u;
        goto label_3cfeb8;
    }
    ctx->pc = 0x3CFEB0u;
    SET_GPR_U32(ctx, 31, 0x3CFEB8u);
    ctx->pc = 0x3CFEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFEB0u;
            // 0x3cfeb4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFEB8u; }
        if (ctx->pc != 0x3CFEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFEB8u; }
        if (ctx->pc != 0x3CFEB8u) { return; }
    }
    ctx->pc = 0x3CFEB8u;
label_3cfeb8:
    // 0x3cfeb8: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x3cfeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3cfebc:
    // 0x3cfebc: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3cfebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3cfec0:
    // 0x3cfec0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3cfec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3cfec4:
    // 0x3cfec4: 0x320f809  jalr        $t9
label_3cfec8:
    if (ctx->pc == 0x3CFEC8u) {
        ctx->pc = 0x3CFEC8u;
            // 0x3cfec8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x3CFECCu;
        goto label_3cfecc;
    }
    ctx->pc = 0x3CFEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CFECCu);
        ctx->pc = 0x3CFEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFEC4u;
            // 0x3cfec8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CFECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CFECCu; }
            if (ctx->pc != 0x3CFECCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CFECCu;
label_3cfecc:
    // 0x3cfecc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cfeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cfed0:
    // 0x3cfed0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3cfed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3cfed4:
    // 0x3cfed4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3cfed4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3cfed8:
    // 0x3cfed8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3cfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3cfedc:
    // 0x3cfedc: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x3cfedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3cfee0:
    // 0x3cfee0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3cfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3cfee4:
    // 0x3cfee4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cfee8:
    // 0x3cfee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cfeec:
    // 0x3cfeec: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x3cfeecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3cfef0:
    // 0x3cfef0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3cfef4:
    if (ctx->pc == 0x3CFEF4u) {
        ctx->pc = 0x3CFEF4u;
            // 0x3cfef4: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3CFEF8u;
        goto label_3cfef8;
    }
    ctx->pc = 0x3CFEF0u;
    {
        const bool branch_taken_0x3cfef0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3cfef0) {
            ctx->pc = 0x3CFEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFEF0u;
            // 0x3cfef4: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFF00u;
            goto label_3cff00;
        }
    }
    ctx->pc = 0x3CFEF8u;
label_3cfef8:
    // 0x3cfef8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cfefc:
    if (ctx->pc == 0x3CFEFCu) {
        ctx->pc = 0x3CFEFCu;
            // 0x3cfefc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF00u;
        goto label_3cff00;
    }
    ctx->pc = 0x3CFEF8u;
    {
        const bool branch_taken_0x3cfef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFEF8u;
            // 0x3cfefc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfef8) {
            ctx->pc = 0x3CFF08u;
            goto label_3cff08;
        }
    }
    ctx->pc = 0x3CFF00u;
label_3cff00:
    // 0x3cff00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3cff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3cff04:
    // 0x3cff04: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3cff04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cff08:
    // 0x3cff08: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3cff0c:
    if (ctx->pc == 0x3CFF0Cu) {
        ctx->pc = 0x3CFF0Cu;
            // 0x3cff0c: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x3CFF10u;
        goto label_3cff10;
    }
    ctx->pc = 0x3CFF08u;
    {
        const bool branch_taken_0x3cff08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cff08) {
            ctx->pc = 0x3CFF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFF08u;
            // 0x3cff0c: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFF20u;
            goto label_3cff20;
        }
    }
    ctx->pc = 0x3CFF10u;
label_3cff10:
    // 0x3cff10: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3cff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3cff14:
    // 0x3cff14: 0xc04cd60  jal         func_133580
label_3cff18:
    if (ctx->pc == 0x3CFF18u) {
        ctx->pc = 0x3CFF18u;
            // 0x3cff18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF1Cu;
        goto label_3cff1c;
    }
    ctx->pc = 0x3CFF14u;
    SET_GPR_U32(ctx, 31, 0x3CFF1Cu);
    ctx->pc = 0x3CFF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFF14u;
            // 0x3cff18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFF1Cu; }
        if (ctx->pc != 0x3CFF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFF1Cu; }
        if (ctx->pc != 0x3CFF1Cu) { return; }
    }
    ctx->pc = 0x3CFF1Cu;
label_3cff1c:
    // 0x3cff1c: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x3cff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3cff20:
    // 0x3cff20: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3cff20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3cff24:
    // 0x3cff24: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3cff24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3cff28:
    // 0x3cff28: 0x320f809  jalr        $t9
label_3cff2c:
    if (ctx->pc == 0x3CFF2Cu) {
        ctx->pc = 0x3CFF2Cu;
            // 0x3cff2c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x3CFF30u;
        goto label_3cff30;
    }
    ctx->pc = 0x3CFF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CFF30u);
        ctx->pc = 0x3CFF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFF28u;
            // 0x3cff2c: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CFF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CFF30u; }
            if (ctx->pc != 0x3CFF30u) { return; }
        }
        }
    }
    ctx->pc = 0x3CFF30u;
label_3cff30:
    // 0x3cff30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cff34:
    // 0x3cff34: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3cff34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3cff38:
    // 0x3cff38: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3cff38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3cff3c:
    // 0x3cff3c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3cff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3cff40:
    // 0x3cff40: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x3cff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3cff44:
    // 0x3cff44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3cff44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3cff48:
    // 0x3cff48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cff48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3cff4c:
    // 0x3cff4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cff50:
    // 0x3cff50: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x3cff50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3cff54:
    // 0x3cff54: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3cff58:
    if (ctx->pc == 0x3CFF58u) {
        ctx->pc = 0x3CFF58u;
            // 0x3cff58: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3CFF5Cu;
        goto label_3cff5c;
    }
    ctx->pc = 0x3CFF54u;
    {
        const bool branch_taken_0x3cff54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3cff54) {
            ctx->pc = 0x3CFF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFF54u;
            // 0x3cff58: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFF64u;
            goto label_3cff64;
        }
    }
    ctx->pc = 0x3CFF5Cu;
label_3cff5c:
    // 0x3cff5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3cff60:
    if (ctx->pc == 0x3CFF60u) {
        ctx->pc = 0x3CFF60u;
            // 0x3cff60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF64u;
        goto label_3cff64;
    }
    ctx->pc = 0x3CFF5Cu;
    {
        const bool branch_taken_0x3cff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFF5Cu;
            // 0x3cff60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cff5c) {
            ctx->pc = 0x3CFF6Cu;
            goto label_3cff6c;
        }
    }
    ctx->pc = 0x3CFF64u;
label_3cff64:
    // 0x3cff64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3cff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3cff68:
    // 0x3cff68: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3cff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cff6c:
    // 0x3cff6c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3cff70:
    if (ctx->pc == 0x3CFF70u) {
        ctx->pc = 0x3CFF70u;
            // 0x3cff70: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x3CFF74u;
        goto label_3cff74;
    }
    ctx->pc = 0x3CFF6Cu;
    {
        const bool branch_taken_0x3cff6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cff6c) {
            ctx->pc = 0x3CFF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFF6Cu;
            // 0x3cff70: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CFF84u;
            goto label_3cff84;
        }
    }
    ctx->pc = 0x3CFF74u;
label_3cff74:
    // 0x3cff74: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3cff74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3cff78:
    // 0x3cff78: 0xc04cd60  jal         func_133580
label_3cff7c:
    if (ctx->pc == 0x3CFF7Cu) {
        ctx->pc = 0x3CFF7Cu;
            // 0x3cff7c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF80u;
        goto label_3cff80;
    }
    ctx->pc = 0x3CFF78u;
    SET_GPR_U32(ctx, 31, 0x3CFF80u);
    ctx->pc = 0x3CFF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFF78u;
            // 0x3cff7c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFF80u; }
        if (ctx->pc != 0x3CFF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFF80u; }
        if (ctx->pc != 0x3CFF80u) { return; }
    }
    ctx->pc = 0x3CFF80u;
label_3cff80:
    // 0x3cff80: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x3cff80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_3cff84:
    // 0x3cff84: 0xc04ce84  jal         func_133A10
label_3cff88:
    if (ctx->pc == 0x3CFF88u) {
        ctx->pc = 0x3CFF8Cu;
        goto label_3cff8c;
    }
    ctx->pc = 0x3CFF84u;
    SET_GPR_U32(ctx, 31, 0x3CFF8Cu);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFF8Cu; }
        if (ctx->pc != 0x3CFF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFF8Cu; }
        if (ctx->pc != 0x3CFF8Cu) { return; }
    }
    ctx->pc = 0x3CFF8Cu;
label_3cff8c:
    // 0x3cff8c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3cff90:
    // 0x3cff90: 0xc4419238  lwc1        $f1, -0x6DC8($v0)
    ctx->pc = 0x3cff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cff94:
    // 0x3cff94: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3cff94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3cff98:
    // 0x3cff98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cff98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cff9c:
    // 0x3cff9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cff9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cffa0:
    // 0x3cffa0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3cffa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cffa4:
    // 0x3cffa4: 0xc04f2d4  jal         func_13CB50
label_3cffa8:
    if (ctx->pc == 0x3CFFA8u) {
        ctx->pc = 0x3CFFA8u;
            // 0x3cffa8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3CFFACu;
        goto label_3cffac;
    }
    ctx->pc = 0x3CFFA4u;
    SET_GPR_U32(ctx, 31, 0x3CFFACu);
    ctx->pc = 0x3CFFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFFA4u;
            // 0x3cffa8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFFACu; }
        if (ctx->pc != 0x3CFFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFFACu; }
        if (ctx->pc != 0x3CFFACu) { return; }
    }
    ctx->pc = 0x3CFFACu;
label_3cffac:
    // 0x3cffac: 0xc04ce84  jal         func_133A10
label_3cffb0:
    if (ctx->pc == 0x3CFFB0u) {
        ctx->pc = 0x3CFFB0u;
            // 0x3cffb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CFFB4u;
        goto label_3cffb4;
    }
    ctx->pc = 0x3CFFACu;
    SET_GPR_U32(ctx, 31, 0x3CFFB4u);
    ctx->pc = 0x3CFFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFFACu;
            // 0x3cffb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFFB4u; }
        if (ctx->pc != 0x3CFFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFFB4u; }
        if (ctx->pc != 0x3CFFB4u) { return; }
    }
    ctx->pc = 0x3CFFB4u;
label_3cffb4:
    // 0x3cffb4: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x3cffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_3cffb8:
    // 0x3cffb8: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x3cffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3cffbc:
    // 0x3cffbc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3cffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_3cffc0:
    // 0x3cffc0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3cffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cffc4:
    // 0x3cffc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3cffc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cffc8:
    // 0x3cffc8: 0x0  nop
    ctx->pc = 0x3cffc8u;
    // NOP
label_3cffcc:
    // 0x3cffcc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3cffccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3cffd0:
    // 0x3cffd0: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x3cffd0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cffd4:
    // 0x3cffd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3cffd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cffd8:
    // 0x3cffd8: 0xc04ce64  jal         func_133990
label_3cffdc:
    if (ctx->pc == 0x3CFFDCu) {
        ctx->pc = 0x3CFFDCu;
            // 0x3cffdc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3CFFE0u;
        goto label_3cffe0;
    }
    ctx->pc = 0x3CFFD8u;
    SET_GPR_U32(ctx, 31, 0x3CFFE0u);
    ctx->pc = 0x3CFFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFFD8u;
            // 0x3cffdc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFFE0u; }
        if (ctx->pc != 0x3CFFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CFFE0u; }
        if (ctx->pc != 0x3CFFE0u) { return; }
    }
    ctx->pc = 0x3CFFE0u;
label_3cffe0:
    // 0x3cffe0: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x3cffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3cffe4:
    // 0x3cffe4: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3cffe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3cffe8:
    // 0x3cffe8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3cffe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3cffec:
    // 0x3cffec: 0x320f809  jalr        $t9
label_3cfff0:
    if (ctx->pc == 0x3CFFF0u) {
        ctx->pc = 0x3CFFF0u;
            // 0x3cfff0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x3CFFF4u;
        goto label_3cfff4;
    }
    ctx->pc = 0x3CFFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CFFF4u);
        ctx->pc = 0x3CFFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFFECu;
            // 0x3cfff0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CFFF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CFFF4u; }
            if (ctx->pc != 0x3CFFF4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CFFF4u;
label_3cfff4:
    // 0x3cfff4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cfff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cfff8:
    // 0x3cfff8: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3cfff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3cfffc:
    // 0x3cfffc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3cfffcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3d0000:
    // 0x3d0000: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3d0000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3d0004:
    // 0x3d0004: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x3d0004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3d0008:
    // 0x3d0008: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d0008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d000c:
    // 0x3d000c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d0010:
    // 0x3d0010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0014:
    // 0x3d0014: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x3d0014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3d0018:
    // 0x3d0018: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3d001c:
    if (ctx->pc == 0x3D001Cu) {
        ctx->pc = 0x3D001Cu;
            // 0x3d001c: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3D0020u;
        goto label_3d0020;
    }
    ctx->pc = 0x3D0018u;
    {
        const bool branch_taken_0x3d0018 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3d0018) {
            ctx->pc = 0x3D001Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0018u;
            // 0x3d001c: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0028u;
            goto label_3d0028;
        }
    }
    ctx->pc = 0x3D0020u;
label_3d0020:
    // 0x3d0020: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d0024:
    if (ctx->pc == 0x3D0024u) {
        ctx->pc = 0x3D0024u;
            // 0x3d0024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0028u;
        goto label_3d0028;
    }
    ctx->pc = 0x3D0020u;
    {
        const bool branch_taken_0x3d0020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0020u;
            // 0x3d0024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0020) {
            ctx->pc = 0x3D0030u;
            goto label_3d0030;
        }
    }
    ctx->pc = 0x3D0028u;
label_3d0028:
    // 0x3d0028: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d002c:
    // 0x3d002c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3d002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0030:
    // 0x3d0030: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d0034:
    if (ctx->pc == 0x3D0034u) {
        ctx->pc = 0x3D0034u;
            // 0x3d0034: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x3D0038u;
        goto label_3d0038;
    }
    ctx->pc = 0x3D0030u;
    {
        const bool branch_taken_0x3d0030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0030) {
            ctx->pc = 0x3D0034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0030u;
            // 0x3d0034: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0048u;
            goto label_3d0048;
        }
    }
    ctx->pc = 0x3D0038u;
label_3d0038:
    // 0x3d0038: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x3d0038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3d003c:
    // 0x3d003c: 0xc04cd60  jal         func_133580
label_3d0040:
    if (ctx->pc == 0x3D0040u) {
        ctx->pc = 0x3D0040u;
            // 0x3d0040: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0044u;
        goto label_3d0044;
    }
    ctx->pc = 0x3D003Cu;
    SET_GPR_U32(ctx, 31, 0x3D0044u);
    ctx->pc = 0x3D0040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D003Cu;
            // 0x3d0040: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0044u; }
        if (ctx->pc != 0x3D0044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0044u; }
        if (ctx->pc != 0x3D0044u) { return; }
    }
    ctx->pc = 0x3D0044u;
label_3d0044:
    // 0x3d0044: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x3d0044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3d0048:
    // 0x3d0048: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3d0048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3d004c:
    // 0x3d004c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d004cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d0050:
    // 0x3d0050: 0x320f809  jalr        $t9
label_3d0054:
    if (ctx->pc == 0x3D0054u) {
        ctx->pc = 0x3D0054u;
            // 0x3d0054: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3D0058u;
        goto label_3d0058;
    }
    ctx->pc = 0x3D0050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D0058u);
        ctx->pc = 0x3D0054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0050u;
            // 0x3d0054: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D0058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D0058u; }
            if (ctx->pc != 0x3D0058u) { return; }
        }
        }
    }
    ctx->pc = 0x3D0058u;
label_3d0058:
    // 0x3d0058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d005c:
    // 0x3d005c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3d005cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3d0060:
    // 0x3d0060: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3d0060u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3d0064:
    // 0x3d0064: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3d0064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3d0068:
    // 0x3d0068: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x3d0068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3d006c:
    // 0x3d006c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d0070:
    // 0x3d0070: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d0070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d0074:
    // 0x3d0074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0078:
    // 0x3d0078: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x3d0078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3d007c:
    // 0x3d007c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3d0080:
    if (ctx->pc == 0x3D0080u) {
        ctx->pc = 0x3D0080u;
            // 0x3d0080: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3D0084u;
        goto label_3d0084;
    }
    ctx->pc = 0x3D007Cu;
    {
        const bool branch_taken_0x3d007c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3d007c) {
            ctx->pc = 0x3D0080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D007Cu;
            // 0x3d0080: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D008Cu;
            goto label_3d008c;
        }
    }
    ctx->pc = 0x3D0084u;
label_3d0084:
    // 0x3d0084: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d0088:
    if (ctx->pc == 0x3D0088u) {
        ctx->pc = 0x3D0088u;
            // 0x3d0088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D008Cu;
        goto label_3d008c;
    }
    ctx->pc = 0x3D0084u;
    {
        const bool branch_taken_0x3d0084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0084u;
            // 0x3d0088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0084) {
            ctx->pc = 0x3D0094u;
            goto label_3d0094;
        }
    }
    ctx->pc = 0x3D008Cu;
label_3d008c:
    // 0x3d008c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d0090:
    // 0x3d0090: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3d0090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0094:
    // 0x3d0094: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d0098:
    if (ctx->pc == 0x3D0098u) {
        ctx->pc = 0x3D0098u;
            // 0x3d0098: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x3D009Cu;
        goto label_3d009c;
    }
    ctx->pc = 0x3D0094u;
    {
        const bool branch_taken_0x3d0094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0094) {
            ctx->pc = 0x3D0098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0094u;
            // 0x3d0098: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D00ACu;
            goto label_3d00ac;
        }
    }
    ctx->pc = 0x3D009Cu;
label_3d009c:
    // 0x3d009c: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x3d009cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3d00a0:
    // 0x3d00a0: 0xc04cd60  jal         func_133580
label_3d00a4:
    if (ctx->pc == 0x3D00A4u) {
        ctx->pc = 0x3D00A4u;
            // 0x3d00a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D00A8u;
        goto label_3d00a8;
    }
    ctx->pc = 0x3D00A0u;
    SET_GPR_U32(ctx, 31, 0x3D00A8u);
    ctx->pc = 0x3D00A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D00A0u;
            // 0x3d00a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D00A8u; }
        if (ctx->pc != 0x3D00A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D00A8u; }
        if (ctx->pc != 0x3D00A8u) { return; }
    }
    ctx->pc = 0x3D00A8u;
label_3d00a8:
    // 0x3d00a8: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x3d00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3d00ac:
    // 0x3d00ac: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3d00acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3d00b0:
    // 0x3d00b0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d00b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d00b4:
    // 0x3d00b4: 0x320f809  jalr        $t9
label_3d00b8:
    if (ctx->pc == 0x3D00B8u) {
        ctx->pc = 0x3D00B8u;
            // 0x3d00b8: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x3D00BCu;
        goto label_3d00bc;
    }
    ctx->pc = 0x3D00B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D00BCu);
        ctx->pc = 0x3D00B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D00B4u;
            // 0x3d00b8: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D00BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D00BCu; }
            if (ctx->pc != 0x3D00BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D00BCu;
label_3d00bc:
    // 0x3d00bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d00c0:
    // 0x3d00c0: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3d00c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_3d00c4:
    // 0x3d00c4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3d00c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3d00c8:
    // 0x3d00c8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3d00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3d00cc:
    // 0x3d00cc: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x3d00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3d00d0:
    // 0x3d00d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d00d4:
    // 0x3d00d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d00d8:
    // 0x3d00d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d00dc:
    // 0x3d00dc: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x3d00dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3d00e0:
    // 0x3d00e0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3d00e4:
    if (ctx->pc == 0x3D00E4u) {
        ctx->pc = 0x3D00E4u;
            // 0x3d00e4: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3D00E8u;
        goto label_3d00e8;
    }
    ctx->pc = 0x3D00E0u;
    {
        const bool branch_taken_0x3d00e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3d00e0) {
            ctx->pc = 0x3D00E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D00E0u;
            // 0x3d00e4: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D00F0u;
            goto label_3d00f0;
        }
    }
    ctx->pc = 0x3D00E8u;
label_3d00e8:
    // 0x3d00e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d00ec:
    if (ctx->pc == 0x3D00ECu) {
        ctx->pc = 0x3D00ECu;
            // 0x3d00ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D00F0u;
        goto label_3d00f0;
    }
    ctx->pc = 0x3D00E8u;
    {
        const bool branch_taken_0x3d00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D00ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D00E8u;
            // 0x3d00ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d00e8) {
            ctx->pc = 0x3D00F8u;
            goto label_3d00f8;
        }
    }
    ctx->pc = 0x3D00F0u;
label_3d00f0:
    // 0x3d00f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d00f4:
    // 0x3d00f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3d00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d00f8:
    // 0x3d00f8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d00fc:
    if (ctx->pc == 0x3D00FCu) {
        ctx->pc = 0x3D00FCu;
            // 0x3d00fc: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x3D0100u;
        goto label_3d0100;
    }
    ctx->pc = 0x3D00F8u;
    {
        const bool branch_taken_0x3d00f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d00f8) {
            ctx->pc = 0x3D00FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D00F8u;
            // 0x3d00fc: 0x8e240d6c  lw          $a0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0110u;
            goto label_3d0110;
        }
    }
    ctx->pc = 0x3D0100u;
label_3d0100:
    // 0x3d0100: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x3d0100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3d0104:
    // 0x3d0104: 0xc04cd60  jal         func_133580
label_3d0108:
    if (ctx->pc == 0x3D0108u) {
        ctx->pc = 0x3D0108u;
            // 0x3d0108: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D010Cu;
        goto label_3d010c;
    }
    ctx->pc = 0x3D0104u;
    SET_GPR_U32(ctx, 31, 0x3D010Cu);
    ctx->pc = 0x3D0108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0104u;
            // 0x3d0108: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D010Cu; }
        if (ctx->pc != 0x3D010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D010Cu; }
        if (ctx->pc != 0x3D010Cu) { return; }
    }
    ctx->pc = 0x3D010Cu;
label_3d010c:
    // 0x3d010c: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x3d010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_3d0110:
    // 0x3d0110: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3d0110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3d0114:
    // 0x3d0114: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d0114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d0118:
    // 0x3d0118: 0x320f809  jalr        $t9
label_3d011c:
    if (ctx->pc == 0x3D011Cu) {
        ctx->pc = 0x3D011Cu;
            // 0x3d011c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x3D0120u;
        goto label_3d0120;
    }
    ctx->pc = 0x3D0118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D0120u);
        ctx->pc = 0x3D011Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0118u;
            // 0x3d011c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D0120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D0120u; }
            if (ctx->pc != 0x3D0120u) { return; }
        }
        }
    }
    ctx->pc = 0x3D0120u;
label_3d0120:
    // 0x3d0120: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d0120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d0124:
    // 0x3d0124: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3d0124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3d0128:
    // 0x3d0128: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3d0128u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_3d012c:
    // 0x3d012c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3d012cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3d0130:
    // 0x3d0130: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x3d0130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3d0134:
    // 0x3d0134: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d0134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d0138:
    // 0x3d0138: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d0138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3d013c:
    // 0x3d013c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d0140:
    // 0x3d0140: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x3d0140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_3d0144:
    // 0x3d0144: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
label_3d0148:
    if (ctx->pc == 0x3D0148u) {
        ctx->pc = 0x3D0148u;
            // 0x3d0148: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->pc = 0x3D014Cu;
        goto label_3d014c;
    }
    ctx->pc = 0x3D0144u;
    {
        const bool branch_taken_0x3d0144 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3d0144) {
            ctx->pc = 0x3D0148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0144u;
            // 0x3d0148: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0154u;
            goto label_3d0154;
        }
    }
    ctx->pc = 0x3D014Cu;
label_3d014c:
    // 0x3d014c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d0150:
    if (ctx->pc == 0x3D0150u) {
        ctx->pc = 0x3D0150u;
            // 0x3d0150: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0154u;
        goto label_3d0154;
    }
    ctx->pc = 0x3D014Cu;
    {
        const bool branch_taken_0x3d014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D014Cu;
            // 0x3d0150: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d014c) {
            ctx->pc = 0x3D015Cu;
            goto label_3d015c;
        }
    }
    ctx->pc = 0x3D0154u;
label_3d0154:
    // 0x3d0154: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d0154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d0158:
    // 0x3d0158: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3d0158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d015c:
    // 0x3d015c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d0160:
    if (ctx->pc == 0x3D0160u) {
        ctx->pc = 0x3D0160u;
            // 0x3d0160: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3D0164u;
        goto label_3d0164;
    }
    ctx->pc = 0x3D015Cu;
    {
        const bool branch_taken_0x3d015c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d015c) {
            ctx->pc = 0x3D0160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D015Cu;
            // 0x3d0160: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0174u;
            goto label_3d0174;
        }
    }
    ctx->pc = 0x3D0164u;
label_3d0164:
    // 0x3d0164: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x3d0164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3d0168:
    // 0x3d0168: 0xc04cd60  jal         func_133580
label_3d016c:
    if (ctx->pc == 0x3D016Cu) {
        ctx->pc = 0x3D016Cu;
            // 0x3d016c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0170u;
        goto label_3d0170;
    }
    ctx->pc = 0x3D0168u;
    SET_GPR_U32(ctx, 31, 0x3D0170u);
    ctx->pc = 0x3D016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0168u;
            // 0x3d016c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0170u; }
        if (ctx->pc != 0x3D0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0170u; }
        if (ctx->pc != 0x3D0170u) { return; }
    }
    ctx->pc = 0x3D0170u;
label_3d0170:
    // 0x3d0170: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d0170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d0174:
    // 0x3d0174: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d0174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d0178:
    // 0x3d0178: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d0178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d017c:
    // 0x3d017c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d017cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d0180:
    // 0x3d0180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d0180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0184:
    // 0x3d0184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d0184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d0188:
    // 0x3d0188: 0x3e00008  jr          $ra
label_3d018c:
    if (ctx->pc == 0x3D018Cu) {
        ctx->pc = 0x3D018Cu;
            // 0x3d018c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3D0190u;
        goto label_3d0190;
    }
    ctx->pc = 0x3D0188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0188u;
            // 0x3d018c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D0190u;
label_3d0190:
    // 0x3d0190: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3d0190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3d0194:
    // 0x3d0194: 0x3c0244e3  lui         $v0, 0x44E3
    ctx->pc = 0x3d0194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17635 << 16));
label_3d0198:
    // 0x3d0198: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d0198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d019c:
    // 0x3d019c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3d01a0:
    // 0x3d01a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d01a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d01a4:
    // 0x3d01a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d01a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d01a8:
    // 0x3d01a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d01a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d01ac:
    // 0x3d01ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d01acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d01b0:
    // 0x3d01b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d01b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d01b4:
    // 0x3d01b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d01b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d01b8:
    // 0x3d01b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3d01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3d01bc:
    // 0x3d01bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d01bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d01c0:
    // 0x3d01c0: 0x8c7000c8  lw          $s0, 0xC8($v1)
    ctx->pc = 0x3d01c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_3d01c4:
    // 0x3d01c4: 0xc6010dc4  lwc1        $f1, 0xDC4($s0)
    ctx->pc = 0x3d01c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d01c8:
    // 0x3d01c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d01c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d01cc:
    // 0x3d01cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d01ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d01d0:
    // 0x3d01d0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3d01d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3d01d4:
    // 0x3d01d4: 0xc04f308  jal         func_13CC20
label_3d01d8:
    if (ctx->pc == 0x3D01D8u) {
        ctx->pc = 0x3D01D8u;
            // 0x3d01d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D01DCu;
        goto label_3d01dc;
    }
    ctx->pc = 0x3D01D4u;
    SET_GPR_U32(ctx, 31, 0x3D01DCu);
    ctx->pc = 0x3D01D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D01D4u;
            // 0x3d01d8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CC20u;
    if (runtime->hasFunction(0x13CC20u)) {
        auto targetFn = runtime->lookupFunction(0x13CC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D01DCu; }
        if (ctx->pc != 0x3D01DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CC20_0x13cc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D01DCu; }
        if (ctx->pc != 0x3D01DCu) { return; }
    }
    ctx->pc = 0x3D01DCu;
label_3d01dc:
    // 0x3d01dc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3d01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3d01e0:
    // 0x3d01e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d01e4:
    // 0x3d01e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d01e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d01e8:
    // 0x3d01e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3d01e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d01ec:
    // 0x3d01ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d01ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d01f0:
    // 0x3d01f0: 0xc04f3fc  jal         func_13CFF0
label_3d01f4:
    if (ctx->pc == 0x3D01F4u) {
        ctx->pc = 0x3D01F4u;
            // 0x3d01f4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D01F8u;
        goto label_3d01f8;
    }
    ctx->pc = 0x3D01F0u;
    SET_GPR_U32(ctx, 31, 0x3D01F8u);
    ctx->pc = 0x3D01F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D01F0u;
            // 0x3d01f4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D01F8u; }
        if (ctx->pc != 0x3D01F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D01F8u; }
        if (ctx->pc != 0x3D01F8u) { return; }
    }
    ctx->pc = 0x3D01F8u;
label_3d01f8:
    // 0x3d01f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d01f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d01fc:
    // 0x3d01fc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3d01fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d0200:
    // 0x3d0200: 0xc04cd60  jal         func_133580
label_3d0204:
    if (ctx->pc == 0x3D0204u) {
        ctx->pc = 0x3D0204u;
            // 0x3d0204: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0208u;
        goto label_3d0208;
    }
    ctx->pc = 0x3D0200u;
    SET_GPR_U32(ctx, 31, 0x3D0208u);
    ctx->pc = 0x3D0204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0200u;
            // 0x3d0204: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0208u; }
        if (ctx->pc != 0x3D0208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0208u; }
        if (ctx->pc != 0x3D0208u) { return; }
    }
    ctx->pc = 0x3D0208u;
label_3d0208:
    // 0x3d0208: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x3d0208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_3d020c:
    // 0x3d020c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d020cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d0210:
    // 0x3d0210: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d0210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d0214:
    // 0x3d0214: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3d0214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d0218:
    // 0x3d0218: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3d0218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3d021c:
    // 0x3d021c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d021cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d0220:
    // 0x3d0220: 0xc04ce64  jal         func_133990
label_3d0224:
    if (ctx->pc == 0x3D0224u) {
        ctx->pc = 0x3D0224u;
            // 0x3d0224: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D0228u;
        goto label_3d0228;
    }
    ctx->pc = 0x3D0220u;
    SET_GPR_U32(ctx, 31, 0x3D0228u);
    ctx->pc = 0x3D0224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0220u;
            // 0x3d0224: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0228u; }
        if (ctx->pc != 0x3D0228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0228u; }
        if (ctx->pc != 0x3D0228u) { return; }
    }
    ctx->pc = 0x3D0228u;
label_3d0228:
    // 0x3d0228: 0xc6140dc0  lwc1        $f20, 0xDC0($s0)
    ctx->pc = 0x3d0228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d022c:
    // 0x3d022c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d0230:
    // 0x3d0230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0234:
    // 0x3d0234: 0x0  nop
    ctx->pc = 0x3d0234u;
    // NOP
label_3d0238:
    // 0x3d0238: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3d0238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d023c:
    // 0x3d023c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3d0240:
    if (ctx->pc == 0x3D0240u) {
        ctx->pc = 0x3D0240u;
            // 0x3d0240: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x3D0244u;
        goto label_3d0244;
    }
    ctx->pc = 0x3D023Cu;
    {
        const bool branch_taken_0x3d023c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d023c) {
            ctx->pc = 0x3D0240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D023Cu;
            // 0x3d0240: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D024Cu;
            goto label_3d024c;
        }
    }
    ctx->pc = 0x3D0244u;
label_3d0244:
    // 0x3d0244: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d0248:
    if (ctx->pc == 0x3D0248u) {
        ctx->pc = 0x3D0248u;
            // 0x3d0248: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3D024Cu;
        goto label_3d024c;
    }
    ctx->pc = 0x3D0244u;
    {
        const bool branch_taken_0x3d0244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0244u;
            // 0x3d0248: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0244) {
            ctx->pc = 0x3D0264u;
            goto label_3d0264;
        }
    }
    ctx->pc = 0x3D024Cu;
label_3d024c:
    // 0x3d024c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d024cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0250:
    // 0x3d0250: 0x0  nop
    ctx->pc = 0x3d0250u;
    // NOP
label_3d0254:
    // 0x3d0254: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3d0254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0258:
    // 0x3d0258: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3d025c:
    if (ctx->pc == 0x3D025Cu) {
        ctx->pc = 0x3D025Cu;
            // 0x3d025c: 0xc6010dd4  lwc1        $f1, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3D0260u;
        goto label_3d0260;
    }
    ctx->pc = 0x3D0258u;
    {
        const bool branch_taken_0x3d0258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0258) {
            ctx->pc = 0x3D025Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0258u;
            // 0x3d025c: 0xc6010dd4  lwc1        $f1, 0xDD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0268u;
            goto label_3d0268;
        }
    }
    ctx->pc = 0x3D0260u;
label_3d0260:
    // 0x3d0260: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d0260u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d0264:
    // 0x3d0264: 0xc6010dd4  lwc1        $f1, 0xDD4($s0)
    ctx->pc = 0x3d0264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d0268:
    // 0x3d0268: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d0268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3d026c:
    // 0x3d026c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d026cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0270:
    // 0x3d0270: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x3d0270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
label_3d0274:
    // 0x3d0274: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3d0274u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_3d0278:
    // 0x3d0278: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x3d0278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_3d027c:
    // 0x3d027c: 0x0  nop
    ctx->pc = 0x3d027cu;
    // NOP
label_3d0280:
    // 0x3d0280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0284:
    // 0x3d0284: 0xc0477a8  jal         func_11DEA0
label_3d0288:
    if (ctx->pc == 0x3D0288u) {
        ctx->pc = 0x3D0288u;
            // 0x3d0288: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3D028Cu;
        goto label_3d028c;
    }
    ctx->pc = 0x3D0284u;
    SET_GPR_U32(ctx, 31, 0x3D028Cu);
    ctx->pc = 0x3D0288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0284u;
            // 0x3d0288: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D028Cu; }
        if (ctx->pc != 0x3D028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D028Cu; }
        if (ctx->pc != 0x3D028Cu) { return; }
    }
    ctx->pc = 0x3D028Cu;
label_3d028c:
    // 0x3d028c: 0xc6030dd4  lwc1        $f3, 0xDD4($s0)
    ctx->pc = 0x3d028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d0290:
    // 0x3d0290: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d0290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3d0294:
    // 0x3d0294: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3d0294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d0298:
    // 0x3d0298: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d0298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d029c:
    // 0x3d029c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d02a0:
    // 0x3d02a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d02a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d02a4:
    // 0x3d02a4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x3d02a4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_3d02a8:
    // 0x3d02a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d02a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d02ac:
    // 0x3d02ac: 0x0  nop
    ctx->pc = 0x3d02acu;
    // NOP
label_3d02b0:
    // 0x3d02b0: 0x460208c1  sub.s       $f3, $f1, $f2
    ctx->pc = 0x3d02b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3d02b4:
    // 0x3d02b4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x3d02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_3d02b8:
    // 0x3d02b8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3d02b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3d02bc:
    // 0x3d02bc: 0xc6020dec  lwc1        $f2, 0xDEC($s0)
    ctx->pc = 0x3d02bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d02c0:
    // 0x3d02c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d02c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d02c4:
    // 0x3d02c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d02c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d02c8:
    // 0x3d02c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d02c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3d02cc:
    // 0x3d02cc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3d02ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3d02d0:
    // 0x3d02d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d02d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d02d4:
    // 0x3d02d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3d02d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3d02d8:
    // 0x3d02d8: 0x4600a342  mul.s       $f13, $f20, $f0
    ctx->pc = 0x3d02d8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3d02dc:
    // 0x3d02dc: 0xc04ce64  jal         func_133990
label_3d02e0:
    if (ctx->pc == 0x3D02E0u) {
        ctx->pc = 0x3D02E0u;
            // 0x3d02e0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3D02E4u;
        goto label_3d02e4;
    }
    ctx->pc = 0x3D02DCu;
    SET_GPR_U32(ctx, 31, 0x3D02E4u);
    ctx->pc = 0x3D02E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D02DCu;
            // 0x3d02e0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D02E4u; }
        if (ctx->pc != 0x3D02E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D02E4u; }
        if (ctx->pc != 0x3D02E4u) { return; }
    }
    ctx->pc = 0x3D02E4u;
label_3d02e4:
    // 0x3d02e4: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x3d02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_3d02e8:
    // 0x3d02e8: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x3d02e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3d02ec:
    // 0x3d02ec: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d02ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d02f0:
    // 0x3d02f0: 0x320f809  jalr        $t9
label_3d02f4:
    if (ctx->pc == 0x3D02F4u) {
        ctx->pc = 0x3D02F4u;
            // 0x3d02f4: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3D02F8u;
        goto label_3d02f8;
    }
    ctx->pc = 0x3D02F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D02F8u);
        ctx->pc = 0x3D02F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D02F0u;
            // 0x3d02f4: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D02F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D02F8u; }
            if (ctx->pc != 0x3D02F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D02F8u;
label_3d02f8:
    // 0x3d02f8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3d02f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3d02fc:
    // 0x3d02fc: 0x8e040550  lw          $a0, 0x550($s0)
    ctx->pc = 0x3d02fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_3d0300:
    // 0x3d0300: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3d0300u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3d0304:
    // 0x3d0304: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3d0304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d0308:
    // 0x3d0308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d030c:
    // 0x3d030c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d0310:
    // 0x3d0310: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d0310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d0314:
    // 0x3d0314: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x3d0314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3d0318:
    // 0x3d0318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d031c:
    // 0x3d031c: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x3d031cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3d0320:
    // 0x3d0320: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_3d0324:
    if (ctx->pc == 0x3D0324u) {
        ctx->pc = 0x3D0324u;
            // 0x3d0324: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x3D0328u;
        goto label_3d0328;
    }
    ctx->pc = 0x3D0320u;
    {
        const bool branch_taken_0x3d0320 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3d0320) {
            ctx->pc = 0x3D0324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0320u;
            // 0x3d0324: 0x21980  sll         $v1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0330u;
            goto label_3d0330;
        }
    }
    ctx->pc = 0x3D0328u;
label_3d0328:
    // 0x3d0328: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d032c:
    if (ctx->pc == 0x3D032Cu) {
        ctx->pc = 0x3D032Cu;
            // 0x3d032c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0330u;
        goto label_3d0330;
    }
    ctx->pc = 0x3D0328u;
    {
        const bool branch_taken_0x3d0328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0328u;
            // 0x3d032c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0328) {
            ctx->pc = 0x3D0338u;
            goto label_3d0338;
        }
    }
    ctx->pc = 0x3D0330u;
label_3d0330:
    // 0x3d0330: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d0330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3d0334:
    // 0x3d0334: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3d0334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0338:
    // 0x3d0338: 0xc04cce8  jal         func_1333A0
label_3d033c:
    if (ctx->pc == 0x3D033Cu) {
        ctx->pc = 0x3D033Cu;
            // 0x3d033c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D0340u;
        goto label_3d0340;
    }
    ctx->pc = 0x3D0338u;
    SET_GPR_U32(ctx, 31, 0x3D0340u);
    ctx->pc = 0x3D033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0338u;
            // 0x3d033c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0340u; }
        if (ctx->pc != 0x3D0340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0340u; }
        if (ctx->pc != 0x3D0340u) { return; }
    }
    ctx->pc = 0x3D0340u;
label_3d0340:
    // 0x3d0340: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d0340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3d0344:
    // 0x3d0344: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d0344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d0348:
    // 0x3d0348: 0xc04ce80  jal         func_133A00
label_3d034c:
    if (ctx->pc == 0x3D034Cu) {
        ctx->pc = 0x3D034Cu;
            // 0x3d034c: 0x24a59270  addiu       $a1, $a1, -0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939248));
        ctx->pc = 0x3D0350u;
        goto label_3d0350;
    }
    ctx->pc = 0x3D0348u;
    SET_GPR_U32(ctx, 31, 0x3D0350u);
    ctx->pc = 0x3D034Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0348u;
            // 0x3d034c: 0x24a59270  addiu       $a1, $a1, -0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0350u; }
        if (ctx->pc != 0x3D0350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0350u; }
        if (ctx->pc != 0x3D0350u) { return; }
    }
    ctx->pc = 0x3D0350u;
label_3d0350:
    // 0x3d0350: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d0350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d0354:
    // 0x3d0354: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d0354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d0358:
    // 0x3d0358: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d0358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d035c:
    // 0x3d035c: 0xc04cca0  jal         func_133280
label_3d0360:
    if (ctx->pc == 0x3D0360u) {
        ctx->pc = 0x3D0360u;
            // 0x3d0360: 0x24c69260  addiu       $a2, $a2, -0x6DA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
        ctx->pc = 0x3D0364u;
        goto label_3d0364;
    }
    ctx->pc = 0x3D035Cu;
    SET_GPR_U32(ctx, 31, 0x3D0364u);
    ctx->pc = 0x3D0360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D035Cu;
            // 0x3d0360: 0x24c69260  addiu       $a2, $a2, -0x6DA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0364u; }
        if (ctx->pc != 0x3D0364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0364u; }
        if (ctx->pc != 0x3D0364u) { return; }
    }
    ctx->pc = 0x3D0364u;
label_3d0364:
    // 0x3d0364: 0x3c02458e  lui         $v0, 0x458E
    ctx->pc = 0x3d0364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17806 << 16));
label_3d0368:
    // 0x3d0368: 0x34423800  ori         $v0, $v0, 0x3800
    ctx->pc = 0x3d0368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14336);
label_3d036c:
    // 0x3d036c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d036cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d0370:
    // 0x3d0370: 0x0  nop
    ctx->pc = 0x3d0370u;
    // NOP
label_3d0374:
    // 0x3d0374: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x3d0374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3d0378:
    // 0x3d0378: 0xc6000dec  lwc1        $f0, 0xDEC($s0)
    ctx->pc = 0x3d0378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d037c:
    // 0x3d037c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x3d037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d0380:
    // 0x3d0380: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x3d0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d0384:
    // 0x3d0384: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d0384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d0388:
    // 0x3d0388: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d0388u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d038c:
    // 0x3d038c: 0xc7ae0048  lwc1        $f14, 0x48($sp)
    ctx->pc = 0x3d038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d0390:
    // 0x3d0390: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d0390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3d0394:
    // 0x3d0394: 0xc04f3bc  jal         func_13CEF0
label_3d0398:
    if (ctx->pc == 0x3D0398u) {
        ctx->pc = 0x3D0398u;
            // 0x3d0398: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D039Cu;
        goto label_3d039c;
    }
    ctx->pc = 0x3D0394u;
    SET_GPR_U32(ctx, 31, 0x3D039Cu);
    ctx->pc = 0x3D0398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0394u;
            // 0x3d0398: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CEF0u;
    if (runtime->hasFunction(0x13CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D039Cu; }
        if (ctx->pc != 0x3D039Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CEF0_0x13cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D039Cu; }
        if (ctx->pc != 0x3D039Cu) { return; }
    }
    ctx->pc = 0x3D039Cu;
label_3d039c:
    // 0x3d039c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d03a0:
    // 0x3d03a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3d03a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d03a4:
    // 0x3d03a4: 0xc04cd60  jal         func_133580
label_3d03a8:
    if (ctx->pc == 0x3D03A8u) {
        ctx->pc = 0x3D03A8u;
            // 0x3d03a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D03ACu;
        goto label_3d03ac;
    }
    ctx->pc = 0x3D03A4u;
    SET_GPR_U32(ctx, 31, 0x3D03ACu);
    ctx->pc = 0x3D03A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D03A4u;
            // 0x3d03a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D03ACu; }
        if (ctx->pc != 0x3D03ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D03ACu; }
        if (ctx->pc != 0x3D03ACu) { return; }
    }
    ctx->pc = 0x3D03ACu;
label_3d03ac:
    // 0x3d03ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d03acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d03b0:
    // 0x3d03b0: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x3d03b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3d03b4:
    // 0x3d03b4: 0xc04cd60  jal         func_133580
label_3d03b8:
    if (ctx->pc == 0x3D03B8u) {
        ctx->pc = 0x3D03B8u;
            // 0x3d03b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D03BCu;
        goto label_3d03bc;
    }
    ctx->pc = 0x3D03B4u;
    SET_GPR_U32(ctx, 31, 0x3D03BCu);
    ctx->pc = 0x3D03B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D03B4u;
            // 0x3d03b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D03BCu; }
        if (ctx->pc != 0x3D03BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D03BCu; }
        if (ctx->pc != 0x3D03BCu) { return; }
    }
    ctx->pc = 0x3D03BCu;
label_3d03bc:
    // 0x3d03bc: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x3d03bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_3d03c0:
    // 0x3d03c0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3d03c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d03c4:
    // 0x3d03c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3d03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3d03c8:
    // 0x3d03c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3d03cc:
    // 0x3d03cc: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x3d03ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_3d03d0:
    // 0x3d03d0: 0xc04cd60  jal         func_133580
label_3d03d4:
    if (ctx->pc == 0x3D03D4u) {
        ctx->pc = 0x3D03D4u;
            // 0x3d03d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D03D8u;
        goto label_3d03d8;
    }
    ctx->pc = 0x3D03D0u;
    SET_GPR_U32(ctx, 31, 0x3D03D8u);
    ctx->pc = 0x3D03D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D03D0u;
            // 0x3d03d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D03D8u; }
        if (ctx->pc != 0x3D03D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D03D8u; }
        if (ctx->pc != 0x3D03D8u) { return; }
    }
    ctx->pc = 0x3D03D8u;
label_3d03d8:
    // 0x3d03d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d03d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d03dc:
    // 0x3d03dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d03dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d03e0:
    // 0x3d03e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d03e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d03e4:
    // 0x3d03e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d03e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d03e8:
    // 0x3d03e8: 0x3e00008  jr          $ra
label_3d03ec:
    if (ctx->pc == 0x3D03ECu) {
        ctx->pc = 0x3D03ECu;
            // 0x3d03ec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3D03F0u;
        goto label_3d03f0;
    }
    ctx->pc = 0x3D03E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D03ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D03E8u;
            // 0x3d03ec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D03F0u;
label_3d03f0:
    // 0x3d03f0: 0x8102f00  j           func_40BC00
label_3d03f4:
    if (ctx->pc == 0x3D03F4u) {
        ctx->pc = 0x3D03F8u;
        goto label_3d03f8;
    }
    ctx->pc = 0x3D03F0u;
    ctx->pc = 0x40BC00u;
    if (runtime->hasFunction(0x40BC00u)) {
        auto targetFn = runtime->lookupFunction(0x40BC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0040BC00_0x40bc00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3D03F8u;
label_3d03f8:
    // 0x3d03f8: 0x0  nop
    ctx->pc = 0x3d03f8u;
    // NOP
label_3d03fc:
    // 0x3d03fc: 0x0  nop
    ctx->pc = 0x3d03fcu;
    // NOP
label_3d0400:
    // 0x3d0400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d0404:
    // 0x3d0404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d0404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d0408:
    // 0x3d0408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d0408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d040c:
    // 0x3d040c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d0410:
    // 0x3d0410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d0410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d0414:
    // 0x3d0414: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3d0418:
    if (ctx->pc == 0x3D0418u) {
        ctx->pc = 0x3D0418u;
            // 0x3d0418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D041Cu;
        goto label_3d041c;
    }
    ctx->pc = 0x3D0414u;
    {
        const bool branch_taken_0x3d0414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0414u;
            // 0x3d0418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0414) {
            ctx->pc = 0x3D0458u;
            goto label_3d0458;
        }
    }
    ctx->pc = 0x3D041Cu;
label_3d041c:
    // 0x3d041c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d0420:
    // 0x3d0420: 0x244291c0  addiu       $v0, $v0, -0x6E40
    ctx->pc = 0x3d0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
label_3d0424:
    // 0x3d0424: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3d0428:
    if (ctx->pc == 0x3D0428u) {
        ctx->pc = 0x3D0428u;
            // 0x3d0428: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D042Cu;
        goto label_3d042c;
    }
    ctx->pc = 0x3D0424u;
    {
        const bool branch_taken_0x3d0424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0424u;
            // 0x3d0428: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0424) {
            ctx->pc = 0x3D0440u;
            goto label_3d0440;
        }
    }
    ctx->pc = 0x3D042Cu;
label_3d042c:
    // 0x3d042c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d0430:
    // 0x3d0430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d0430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0434:
    // 0x3d0434: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3d0434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3d0438:
    // 0x3d0438: 0xc057a68  jal         func_15E9A0
label_3d043c:
    if (ctx->pc == 0x3D043Cu) {
        ctx->pc = 0x3D043Cu;
            // 0x3d043c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3D0440u;
        goto label_3d0440;
    }
    ctx->pc = 0x3D0438u;
    SET_GPR_U32(ctx, 31, 0x3D0440u);
    ctx->pc = 0x3D043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0438u;
            // 0x3d043c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0440u; }
        if (ctx->pc != 0x3D0440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0440u; }
        if (ctx->pc != 0x3D0440u) { return; }
    }
    ctx->pc = 0x3D0440u;
label_3d0440:
    // 0x3d0440: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3d0440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3d0444:
    // 0x3d0444: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d0444u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d0448:
    // 0x3d0448: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d044c:
    if (ctx->pc == 0x3D044Cu) {
        ctx->pc = 0x3D044Cu;
            // 0x3d044c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0450u;
        goto label_3d0450;
    }
    ctx->pc = 0x3D0448u;
    {
        const bool branch_taken_0x3d0448 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d0448) {
            ctx->pc = 0x3D044Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0448u;
            // 0x3d044c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D045Cu;
            goto label_3d045c;
        }
    }
    ctx->pc = 0x3D0450u;
label_3d0450:
    // 0x3d0450: 0xc0400a8  jal         func_1002A0
label_3d0454:
    if (ctx->pc == 0x3D0454u) {
        ctx->pc = 0x3D0454u;
            // 0x3d0454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0458u;
        goto label_3d0458;
    }
    ctx->pc = 0x3D0450u;
    SET_GPR_U32(ctx, 31, 0x3D0458u);
    ctx->pc = 0x3D0454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0450u;
            // 0x3d0454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0458u; }
        if (ctx->pc != 0x3D0458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0458u; }
        if (ctx->pc != 0x3D0458u) { return; }
    }
    ctx->pc = 0x3D0458u;
label_3d0458:
    // 0x3d0458: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d0458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d045c:
    // 0x3d045c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d045cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0460:
    // 0x3d0460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d0460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d0464:
    // 0x3d0464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d0464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d0468:
    // 0x3d0468: 0x3e00008  jr          $ra
label_3d046c:
    if (ctx->pc == 0x3D046Cu) {
        ctx->pc = 0x3D046Cu;
            // 0x3d046c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D0470u;
        goto label_3d0470;
    }
    ctx->pc = 0x3D0468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0468u;
            // 0x3d046c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D0470u;
label_3d0470:
    // 0x3d0470: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3d0470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3d0474:
    // 0x3d0474: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d0478:
    // 0x3d0478: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d0478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d047c:
    // 0x3d047c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d0480:
    // 0x3d0480: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d0480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d0484:
    // 0x3d0484: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d0484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d0488:
    // 0x3d0488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d0488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d048c:
    // 0x3d048c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d048cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d0490:
    // 0x3d0490: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3d0490u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d0494:
    // 0x3d0494: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3d0498:
    if (ctx->pc == 0x3D0498u) {
        ctx->pc = 0x3D049Cu;
        goto label_3d049c;
    }
    ctx->pc = 0x3D0494u;
    {
        const bool branch_taken_0x3d0494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d0494) {
            ctx->pc = 0x3D04A4u;
            goto label_3d04a4;
        }
    }
    ctx->pc = 0x3D049Cu;
label_3d049c:
    // 0x3d049c: 0x100000ba  b           . + 4 + (0xBA << 2)
label_3d04a0:
    if (ctx->pc == 0x3D04A0u) {
        ctx->pc = 0x3D04A0u;
            // 0x3d04a0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3D04A4u;
        goto label_3d04a4;
    }
    ctx->pc = 0x3D049Cu;
    {
        const bool branch_taken_0x3d049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D04A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D049Cu;
            // 0x3d04a0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d049c) {
            ctx->pc = 0x3D0788u;
            goto label_3d0788;
        }
    }
    ctx->pc = 0x3D04A4u;
label_3d04a4:
    // 0x3d04a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d04a8:
    // 0x3d04a8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x3d04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_3d04ac:
    // 0x3d04ac: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x3d04acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3d04b0:
    // 0x3d04b0: 0x8c86d130  lw          $a2, -0x2ED0($a0)
    ctx->pc = 0x3d04b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_3d04b4:
    // 0x3d04b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3d04b8:
    // 0x3d04b8: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x3d04b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3d04bc:
    // 0x3d04bc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d04c0:
    // 0x3d04c0: 0x8c91e370  lw          $s1, -0x1C90($a0)
    ctx->pc = 0x3d04c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_3d04c4:
    // 0x3d04c4: 0x8cc60130  lw          $a2, 0x130($a2)
    ctx->pc = 0x3d04c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3d04c8:
    // 0x3d04c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d04cc:
    // 0x3d04cc: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3d04ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3d04d0:
    // 0x3d04d0: 0x8c67e360  lw          $a3, -0x1CA0($v1)
    ctx->pc = 0x3d04d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_3d04d4:
    // 0x3d04d4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3d04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3d04d8:
    // 0x3d04d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3d04d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3d04dc:
    // 0x3d04dc: 0x24844680  addiu       $a0, $a0, 0x4680
    ctx->pc = 0x3d04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
label_3d04e0:
    // 0x3d04e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3d04e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3d04e4:
    // 0x3d04e4: 0x8e6300ac  lw          $v1, 0xAC($s3)
    ctx->pc = 0x3d04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_3d04e8:
    // 0x3d04e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3d04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3d04ec:
    // 0x3d04ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d04f0:
    // 0x3d04f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3d04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3d04f4:
    // 0x3d04f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d04f8:
    // 0x3d04f8: 0x108000a2  beqz        $a0, . + 4 + (0xA2 << 2)
label_3d04fc:
    if (ctx->pc == 0x3D04FCu) {
        ctx->pc = 0x3D04FCu;
            // 0x3d04fc: 0x24b00010  addiu       $s0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x3D0500u;
        goto label_3d0500;
    }
    ctx->pc = 0x3D04F8u;
    {
        const bool branch_taken_0x3d04f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D04FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D04F8u;
            // 0x3d04fc: 0x24b00010  addiu       $s0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d04f8) {
            ctx->pc = 0x3D0784u;
            goto label_3d0784;
        }
    }
    ctx->pc = 0x3D0500u;
label_3d0500:
    // 0x3d0500: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x3d0500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_3d0504:
    // 0x3d0504: 0xc0d9e28  jal         func_3678A0
label_3d0508:
    if (ctx->pc == 0x3D0508u) {
        ctx->pc = 0x3D0508u;
            // 0x3d0508: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3D050Cu;
        goto label_3d050c;
    }
    ctx->pc = 0x3D0504u;
    SET_GPR_U32(ctx, 31, 0x3D050Cu);
    ctx->pc = 0x3D0508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0504u;
            // 0x3d0508: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3678A0u;
    if (runtime->hasFunction(0x3678A0u)) {
        auto targetFn = runtime->lookupFunction(0x3678A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D050Cu; }
        if (ctx->pc != 0x3D050Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003678A0_0x3678a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D050Cu; }
        if (ctx->pc != 0x3D050Cu) { return; }
    }
    ctx->pc = 0x3D050Cu;
label_3d050c:
    // 0x3d050c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3d050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3d0510:
    // 0x3d0510: 0x266600b4  addiu       $a2, $s3, 0xB4
    ctx->pc = 0x3d0510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
label_3d0514:
    // 0x3d0514: 0xc04cafc  jal         func_132BF0
label_3d0518:
    if (ctx->pc == 0x3D0518u) {
        ctx->pc = 0x3D0518u;
            // 0x3d0518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D051Cu;
        goto label_3d051c;
    }
    ctx->pc = 0x3D0514u;
    SET_GPR_U32(ctx, 31, 0x3D051Cu);
    ctx->pc = 0x3D0518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0514u;
            // 0x3d0518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D051Cu; }
        if (ctx->pc != 0x3D051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D051Cu; }
        if (ctx->pc != 0x3D051Cu) { return; }
    }
    ctx->pc = 0x3D051Cu;
label_3d051c:
    // 0x3d051c: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x3d051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d0520:
    // 0x3d0520: 0xc7ad0134  lwc1        $f13, 0x134($sp)
    ctx->pc = 0x3d0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d0524:
    // 0x3d0524: 0xc7ae0138  lwc1        $f14, 0x138($sp)
    ctx->pc = 0x3d0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d0528:
    // 0x3d0528: 0xc04f3fc  jal         func_13CFF0
label_3d052c:
    if (ctx->pc == 0x3D052Cu) {
        ctx->pc = 0x3D052Cu;
            // 0x3d052c: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x3D0530u;
        goto label_3d0530;
    }
    ctx->pc = 0x3D0528u;
    SET_GPR_U32(ctx, 31, 0x3D0530u);
    ctx->pc = 0x3D052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0528u;
            // 0x3d052c: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0530u; }
        if (ctx->pc != 0x3D0530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0530u; }
        if (ctx->pc != 0x3D0530u) { return; }
    }
    ctx->pc = 0x3D0530u;
label_3d0530:
    // 0x3d0530: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x3d0530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d0534:
    // 0x3d0534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d0534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d0538:
    // 0x3d0538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d053c:
    // 0x3d053c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3d053cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3d0540:
    // 0x3d0540: 0xc04e4a4  jal         func_139290
label_3d0544:
    if (ctx->pc == 0x3D0544u) {
        ctx->pc = 0x3D0544u;
            // 0x3d0544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0548u;
        goto label_3d0548;
    }
    ctx->pc = 0x3D0540u;
    SET_GPR_U32(ctx, 31, 0x3D0548u);
    ctx->pc = 0x3D0544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0540u;
            // 0x3d0544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0548u; }
        if (ctx->pc != 0x3D0548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0548u; }
        if (ctx->pc != 0x3D0548u) { return; }
    }
    ctx->pc = 0x3D0548u;
label_3d0548:
    // 0x3d0548: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d0548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d054c:
    // 0x3d054c: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x3d054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d0550:
    // 0x3d0550: 0x8c42f6b0  lw          $v0, -0x950($v0)
    ctx->pc = 0x3d0550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964912)));
label_3d0554:
    // 0x3d0554: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d0558:
    // 0x3d0558: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_3d055c:
    if (ctx->pc == 0x3D055Cu) {
        ctx->pc = 0x3D055Cu;
            // 0x3d055c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0560u;
        goto label_3d0560;
    }
    ctx->pc = 0x3D0558u;
    {
        const bool branch_taken_0x3d0558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0558) {
            ctx->pc = 0x3D055Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0558u;
            // 0x3d055c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D05A0u;
            goto label_3d05a0;
        }
    }
    ctx->pc = 0x3D0560u;
label_3d0560:
    // 0x3d0560: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3d0560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3d0564:
    // 0x3d0564: 0xc04ccf4  jal         func_1333D0
label_3d0568:
    if (ctx->pc == 0x3D0568u) {
        ctx->pc = 0x3D0568u;
            // 0x3d0568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D056Cu;
        goto label_3d056c;
    }
    ctx->pc = 0x3D0564u;
    SET_GPR_U32(ctx, 31, 0x3D056Cu);
    ctx->pc = 0x3D0568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0564u;
            // 0x3d0568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D056Cu; }
        if (ctx->pc != 0x3D056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D056Cu; }
        if (ctx->pc != 0x3D056Cu) { return; }
    }
    ctx->pc = 0x3D056Cu;
label_3d056c:
    // 0x3d056c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d056cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d0570:
    // 0x3d0570: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3d0570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3d0574:
    // 0x3d0574: 0x26660060  addiu       $a2, $s3, 0x60
    ctx->pc = 0x3d0574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_3d0578:
    // 0x3d0578: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x3d0578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_3d057c:
    // 0x3d057c: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x3d057cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_3d0580:
    // 0x3d0580: 0xc04cd60  jal         func_133580
label_3d0584:
    if (ctx->pc == 0x3D0584u) {
        ctx->pc = 0x3D0584u;
            // 0x3d0584: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->pc = 0x3D0588u;
        goto label_3d0588;
    }
    ctx->pc = 0x3D0580u;
    SET_GPR_U32(ctx, 31, 0x3D0588u);
    ctx->pc = 0x3D0584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0580u;
            // 0x3d0584: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0588u; }
        if (ctx->pc != 0x3D0588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0588u; }
        if (ctx->pc != 0x3D0588u) { return; }
    }
    ctx->pc = 0x3D0588u;
label_3d0588:
    // 0x3d0588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d0588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d058c:
    // 0x3d058c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3d058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3d0590:
    // 0x3d0590: 0xc04cd60  jal         func_133580
label_3d0594:
    if (ctx->pc == 0x3D0594u) {
        ctx->pc = 0x3D0594u;
            // 0x3d0594: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3D0598u;
        goto label_3d0598;
    }
    ctx->pc = 0x3D0590u;
    SET_GPR_U32(ctx, 31, 0x3D0598u);
    ctx->pc = 0x3D0594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0590u;
            // 0x3d0594: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0598u; }
        if (ctx->pc != 0x3D0598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0598u; }
        if (ctx->pc != 0x3D0598u) { return; }
    }
    ctx->pc = 0x3D0598u;
label_3d0598:
    // 0x3d0598: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d059c:
    if (ctx->pc == 0x3D059Cu) {
        ctx->pc = 0x3D05A0u;
        goto label_3d05a0;
    }
    ctx->pc = 0x3D0598u;
    {
        const bool branch_taken_0x3d0598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0598) {
            ctx->pc = 0x3D05ACu;
            goto label_3d05ac;
        }
    }
    ctx->pc = 0x3D05A0u;
label_3d05a0:
    // 0x3d05a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d05a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d05a4:
    // 0x3d05a4: 0xc04cd60  jal         func_133580
label_3d05a8:
    if (ctx->pc == 0x3D05A8u) {
        ctx->pc = 0x3D05A8u;
            // 0x3d05a8: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x3D05ACu;
        goto label_3d05ac;
    }
    ctx->pc = 0x3D05A4u;
    SET_GPR_U32(ctx, 31, 0x3D05ACu);
    ctx->pc = 0x3D05A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D05A4u;
            // 0x3d05a8: 0x26660060  addiu       $a2, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D05ACu; }
        if (ctx->pc != 0x3D05ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D05ACu; }
        if (ctx->pc != 0x3D05ACu) { return; }
    }
    ctx->pc = 0x3D05ACu;
label_3d05ac:
    // 0x3d05ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d05b0:
    // 0x3d05b0: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x3d05b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d05b4:
    // 0x3d05b4: 0x8c42f6b8  lw          $v0, -0x948($v0)
    ctx->pc = 0x3d05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964920)));
label_3d05b8:
    // 0x3d05b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d05b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d05bc:
    // 0x3d05bc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3d05c0:
    if (ctx->pc == 0x3D05C0u) {
        ctx->pc = 0x3D05C0u;
            // 0x3d05c0: 0x8e6200dc  lw          $v0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x3D05C4u;
        goto label_3d05c4;
    }
    ctx->pc = 0x3D05BCu;
    {
        const bool branch_taken_0x3d05bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d05bc) {
            ctx->pc = 0x3D05C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D05BCu;
            // 0x3d05c0: 0x8e6200dc  lw          $v0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D05FCu;
            goto label_3d05fc;
        }
    }
    ctx->pc = 0x3D05C4u;
label_3d05c4:
    // 0x3d05c4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3d05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3d05c8:
    // 0x3d05c8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3d05c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d05cc:
    // 0x3d05cc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x3d05ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d05d0:
    // 0x3d05d0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3d05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3d05d4:
    // 0x3d05d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d05d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d05d8:
    // 0x3d05d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3d05d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d05dc:
    // 0x3d05dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d05dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3d05e0:
    // 0x3d05e0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x3d05e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_3d05e4:
    // 0x3d05e4: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x3d05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d05e8:
    // 0x3d05e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d05e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d05ec:
    // 0x3d05ec: 0x0  nop
    ctx->pc = 0x3d05ecu;
    // NOP
label_3d05f0:
    // 0x3d05f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3d05f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3d05f4:
    // 0x3d05f4: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3d05f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_3d05f8:
    // 0x3d05f8: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x3d05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d05fc:
    // 0x3d05fc: 0xc04e738  jal         func_139CE0
label_3d0600:
    if (ctx->pc == 0x3D0600u) {
        ctx->pc = 0x3D0600u;
            // 0x3d0600: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x3D0604u;
        goto label_3d0604;
    }
    ctx->pc = 0x3D05FCu;
    SET_GPR_U32(ctx, 31, 0x3D0604u);
    ctx->pc = 0x3D0600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D05FCu;
            // 0x3d0600: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0604u; }
        if (ctx->pc != 0x3D0604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0604u; }
        if (ctx->pc != 0x3D0604u) { return; }
    }
    ctx->pc = 0x3D0604u;
label_3d0604:
    // 0x3d0604: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x3d0604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d0608:
    // 0x3d0608: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3d0608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d060c:
    // 0x3d060c: 0x50e0000c  beql        $a3, $zero, . + 4 + (0xC << 2)
label_3d0610:
    if (ctx->pc == 0x3D0610u) {
        ctx->pc = 0x3D0610u;
            // 0x3d0610: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3D0614u;
        goto label_3d0614;
    }
    ctx->pc = 0x3D060Cu;
    {
        const bool branch_taken_0x3d060c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d060c) {
            ctx->pc = 0x3D0610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D060Cu;
            // 0x3d0610: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0640u;
            goto label_3d0640;
        }
    }
    ctx->pc = 0x3D0614u;
label_3d0614:
    // 0x3d0614: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3d0614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d0618:
    // 0x3d0618: 0xc66c00d0  lwc1        $f12, 0xD0($s3)
    ctx->pc = 0x3d0618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d061c:
    // 0x3d061c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3d061cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3d0620:
    // 0x3d0620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d0620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0624:
    // 0x3d0624: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d0624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d0628:
    // 0x3d0628: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3d0628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d062c:
    // 0x3d062c: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3d062cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_3d0630:
    // 0x3d0630: 0xc04cff4  jal         func_133FD0
label_3d0634:
    if (ctx->pc == 0x3D0634u) {
        ctx->pc = 0x3D0634u;
            // 0x3d0634: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0638u;
        goto label_3d0638;
    }
    ctx->pc = 0x3D0630u;
    SET_GPR_U32(ctx, 31, 0x3D0638u);
    ctx->pc = 0x3D0634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0630u;
            // 0x3d0634: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0638u; }
        if (ctx->pc != 0x3D0638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0638u; }
        if (ctx->pc != 0x3D0638u) { return; }
    }
    ctx->pc = 0x3D0638u;
label_3d0638:
    // 0x3d0638: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d063c:
    if (ctx->pc == 0x3D063Cu) {
        ctx->pc = 0x3D0640u;
        goto label_3d0640;
    }
    ctx->pc = 0x3D0638u;
    {
        const bool branch_taken_0x3d0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0638) {
            ctx->pc = 0x3D065Cu;
            goto label_3d065c;
        }
    }
    ctx->pc = 0x3D0640u;
label_3d0640:
    // 0x3d0640: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3d0640u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3d0644:
    // 0x3d0644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d0644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0648:
    // 0x3d0648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d0648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d064c:
    // 0x3d064c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3d064cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0650:
    // 0x3d0650: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3d0650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_3d0654:
    // 0x3d0654: 0xc04cfcc  jal         func_133F30
label_3d0658:
    if (ctx->pc == 0x3D0658u) {
        ctx->pc = 0x3D0658u;
            // 0x3d0658: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D065Cu;
        goto label_3d065c;
    }
    ctx->pc = 0x3D0654u;
    SET_GPR_U32(ctx, 31, 0x3D065Cu);
    ctx->pc = 0x3D0658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0654u;
            // 0x3d0658: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D065Cu; }
        if (ctx->pc != 0x3D065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D065Cu; }
        if (ctx->pc != 0x3D065Cu) { return; }
    }
    ctx->pc = 0x3D065Cu;
label_3d065c:
    // 0x3d065c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d065cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d0660:
    // 0x3d0660: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x3d0660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3d0664:
    // 0x3d0664: 0x8c42f6c0  lw          $v0, -0x940($v0)
    ctx->pc = 0x3d0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964928)));
label_3d0668:
    // 0x3d0668: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d0668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d066c:
    // 0x3d066c: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_3d0670:
    if (ctx->pc == 0x3D0670u) {
        ctx->pc = 0x3D0670u;
            // 0x3d0670: 0x8e6200dc  lw          $v0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x3D0674u;
        goto label_3d0674;
    }
    ctx->pc = 0x3D066Cu;
    {
        const bool branch_taken_0x3d066c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d066c) {
            ctx->pc = 0x3D0670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D066Cu;
            // 0x3d0670: 0x8e6200dc  lw          $v0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0730u;
            goto label_3d0730;
        }
    }
    ctx->pc = 0x3D0674u;
label_3d0674:
    // 0x3d0674: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x3d0674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d0678:
    // 0x3d0678: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d067c:
    // 0x3d067c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_3d0680:
    if (ctx->pc == 0x3D0680u) {
        ctx->pc = 0x3D0680u;
            // 0x3d0680: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x3D0684u;
        goto label_3d0684;
    }
    ctx->pc = 0x3D067Cu;
    {
        const bool branch_taken_0x3d067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d067c) {
            ctx->pc = 0x3D0680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D067Cu;
            // 0x3d0680: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D06E8u;
            goto label_3d06e8;
        }
    }
    ctx->pc = 0x3D0684u;
label_3d0684:
    // 0x3d0684: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3d0684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3d0688:
    // 0x3d0688: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3d0688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3d068c:
    // 0x3d068c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d0690:
    // 0x3d0690: 0xc074840  jal         func_1D2100
label_3d0694:
    if (ctx->pc == 0x3D0694u) {
        ctx->pc = 0x3D0694u;
            // 0x3d0694: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D0698u;
        goto label_3d0698;
    }
    ctx->pc = 0x3D0690u;
    SET_GPR_U32(ctx, 31, 0x3D0698u);
    ctx->pc = 0x3D0694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0690u;
            // 0x3d0694: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0698u; }
        if (ctx->pc != 0x3D0698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0698u; }
        if (ctx->pc != 0x3D0698u) { return; }
    }
    ctx->pc = 0x3D0698u;
label_3d0698:
    // 0x3d0698: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x3d0698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d069c:
    // 0x3d069c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3d069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d06a0:
    // 0x3d06a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d06a4:
    // 0x3d06a4: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x3d06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3d06a8:
    // 0x3d06a8: 0xc054bbc  jal         func_152EF0
label_3d06ac:
    if (ctx->pc == 0x3D06ACu) {
        ctx->pc = 0x3D06ACu;
            // 0x3d06ac: 0xc66c00d4  lwc1        $f12, 0xD4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3D06B0u;
        goto label_3d06b0;
    }
    ctx->pc = 0x3D06A8u;
    SET_GPR_U32(ctx, 31, 0x3D06B0u);
    ctx->pc = 0x3D06ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D06A8u;
            // 0x3d06ac: 0xc66c00d4  lwc1        $f12, 0xD4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06B0u; }
        if (ctx->pc != 0x3D06B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06B0u; }
        if (ctx->pc != 0x3D06B0u) { return; }
    }
    ctx->pc = 0x3D06B0u;
label_3d06b0:
    // 0x3d06b0: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x3d06b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d06b4:
    // 0x3d06b4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3d06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3d06b8:
    // 0x3d06b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d06b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d06bc:
    // 0x3d06bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d06bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d06c0:
    // 0x3d06c0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3d06c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3d06c4:
    // 0x3d06c4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3d06c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3d06c8:
    // 0x3d06c8: 0xc054c2c  jal         func_1530B0
label_3d06cc:
    if (ctx->pc == 0x3D06CCu) {
        ctx->pc = 0x3D06CCu;
            // 0x3d06cc: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x3D06D0u;
        goto label_3d06d0;
    }
    ctx->pc = 0x3D06C8u;
    SET_GPR_U32(ctx, 31, 0x3D06D0u);
    ctx->pc = 0x3D06CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D06C8u;
            // 0x3d06cc: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06D0u; }
        if (ctx->pc != 0x3D06D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06D0u; }
        if (ctx->pc != 0x3D06D0u) { return; }
    }
    ctx->pc = 0x3D06D0u;
label_3d06d0:
    // 0x3d06d0: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x3d06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d06d4:
    // 0x3d06d4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3d06d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d06d8:
    // 0x3d06d8: 0xc0747e8  jal         func_1D1FA0
label_3d06dc:
    if (ctx->pc == 0x3D06DCu) {
        ctx->pc = 0x3D06DCu;
            // 0x3d06dc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D06E0u;
        goto label_3d06e0;
    }
    ctx->pc = 0x3D06D8u;
    SET_GPR_U32(ctx, 31, 0x3D06E0u);
    ctx->pc = 0x3D06DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D06D8u;
            // 0x3d06dc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06E0u; }
        if (ctx->pc != 0x3D06E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06E0u; }
        if (ctx->pc != 0x3D06E0u) { return; }
    }
    ctx->pc = 0x3D06E0u;
label_3d06e0:
    // 0x3d06e0: 0x10000028  b           . + 4 + (0x28 << 2)
label_3d06e4:
    if (ctx->pc == 0x3D06E4u) {
        ctx->pc = 0x3D06E8u;
        goto label_3d06e8;
    }
    ctx->pc = 0x3D06E0u;
    {
        const bool branch_taken_0x3d06e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d06e0) {
            ctx->pc = 0x3D0784u;
            goto label_3d0784;
        }
    }
    ctx->pc = 0x3D06E8u;
label_3d06e8:
    // 0x3d06e8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3d06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3d06ec:
    // 0x3d06ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d06ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d06f0:
    // 0x3d06f0: 0xc074840  jal         func_1D2100
label_3d06f4:
    if (ctx->pc == 0x3D06F4u) {
        ctx->pc = 0x3D06F4u;
            // 0x3d06f4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D06F8u;
        goto label_3d06f8;
    }
    ctx->pc = 0x3D06F0u;
    SET_GPR_U32(ctx, 31, 0x3D06F8u);
    ctx->pc = 0x3D06F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D06F0u;
            // 0x3d06f4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2100u;
    if (runtime->hasFunction(0x1D2100u)) {
        auto targetFn = runtime->lookupFunction(0x1D2100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06F8u; }
        if (ctx->pc != 0x3D06F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2100_0x1d2100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D06F8u; }
        if (ctx->pc != 0x3D06F8u) { return; }
    }
    ctx->pc = 0x3D06F8u;
label_3d06f8:
    // 0x3d06f8: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x3d06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d06fc:
    // 0x3d06fc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3d06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3d0700:
    // 0x3d0700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d0700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0704:
    // 0x3d0704: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d0704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d0708:
    // 0x3d0708: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3d0708u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3d070c:
    // 0x3d070c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d070cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d0710:
    // 0x3d0710: 0xc0538d8  jal         func_14E360
label_3d0714:
    if (ctx->pc == 0x3D0714u) {
        ctx->pc = 0x3D0714u;
            // 0x3d0714: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x3D0718u;
        goto label_3d0718;
    }
    ctx->pc = 0x3D0710u;
    SET_GPR_U32(ctx, 31, 0x3D0718u);
    ctx->pc = 0x3D0714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0710u;
            // 0x3d0714: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0718u; }
        if (ctx->pc != 0x3D0718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0718u; }
        if (ctx->pc != 0x3D0718u) { return; }
    }
    ctx->pc = 0x3D0718u;
label_3d0718:
    // 0x3d0718: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x3d0718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d071c:
    // 0x3d071c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d0720:
    // 0x3d0720: 0xc0747e8  jal         func_1D1FA0
label_3d0724:
    if (ctx->pc == 0x3D0724u) {
        ctx->pc = 0x3D0724u;
            // 0x3d0724: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D0728u;
        goto label_3d0728;
    }
    ctx->pc = 0x3D0720u;
    SET_GPR_U32(ctx, 31, 0x3D0728u);
    ctx->pc = 0x3D0724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0720u;
            // 0x3d0724: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FA0u;
    if (runtime->hasFunction(0x1D1FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D1FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0728u; }
        if (ctx->pc != 0x3D0728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1FA0_0x1d1fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0728u; }
        if (ctx->pc != 0x3D0728u) { return; }
    }
    ctx->pc = 0x3D0728u;
label_3d0728:
    // 0x3d0728: 0x10000016  b           . + 4 + (0x16 << 2)
label_3d072c:
    if (ctx->pc == 0x3D072Cu) {
        ctx->pc = 0x3D0730u;
        goto label_3d0730;
    }
    ctx->pc = 0x3D0728u;
    {
        const bool branch_taken_0x3d0728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0728) {
            ctx->pc = 0x3D0784u;
            goto label_3d0784;
        }
    }
    ctx->pc = 0x3D0730u;
label_3d0730:
    // 0x3d0730: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x3d0730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3d0734:
    // 0x3d0734: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
label_3d0738:
    if (ctx->pc == 0x3D0738u) {
        ctx->pc = 0x3D0738u;
            // 0x3d0738: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3D073Cu;
        goto label_3d073c;
    }
    ctx->pc = 0x3D0734u;
    {
        const bool branch_taken_0x3d0734 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0734) {
            ctx->pc = 0x3D0738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0734u;
            // 0x3d0738: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0770u;
            goto label_3d0770;
        }
    }
    ctx->pc = 0x3D073Cu;
label_3d073c:
    // 0x3d073c: 0xc66c00d4  lwc1        $f12, 0xD4($s3)
    ctx->pc = 0x3d073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d0740:
    // 0x3d0740: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d0740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d0744:
    // 0x3d0744: 0xc054bbc  jal         func_152EF0
label_3d0748:
    if (ctx->pc == 0x3D0748u) {
        ctx->pc = 0x3D0748u;
            // 0x3d0748: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x3D074Cu;
        goto label_3d074c;
    }
    ctx->pc = 0x3D0744u;
    SET_GPR_U32(ctx, 31, 0x3D074Cu);
    ctx->pc = 0x3D0748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0744u;
            // 0x3d0748: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D074Cu; }
        if (ctx->pc != 0x3D074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D074Cu; }
        if (ctx->pc != 0x3D074Cu) { return; }
    }
    ctx->pc = 0x3D074Cu;
label_3d074c:
    // 0x3d074c: 0x8e6200dc  lw          $v0, 0xDC($s3)
    ctx->pc = 0x3d074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_3d0750:
    // 0x3d0750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d0750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0754:
    // 0x3d0754: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d0754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d0758:
    // 0x3d0758: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3d0758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3d075c:
    // 0x3d075c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3d075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3d0760:
    // 0x3d0760: 0xc054c2c  jal         func_1530B0
label_3d0764:
    if (ctx->pc == 0x3D0764u) {
        ctx->pc = 0x3D0764u;
            // 0x3d0764: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3D0768u;
        goto label_3d0768;
    }
    ctx->pc = 0x3D0760u;
    SET_GPR_U32(ctx, 31, 0x3D0768u);
    ctx->pc = 0x3D0764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0760u;
            // 0x3d0764: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0768u; }
        if (ctx->pc != 0x3D0768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0768u; }
        if (ctx->pc != 0x3D0768u) { return; }
    }
    ctx->pc = 0x3D0768u;
label_3d0768:
    // 0x3d0768: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d076c:
    if (ctx->pc == 0x3D076Cu) {
        ctx->pc = 0x3D0770u;
        goto label_3d0770;
    }
    ctx->pc = 0x3D0768u;
    {
        const bool branch_taken_0x3d0768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0768) {
            ctx->pc = 0x3D0784u;
            goto label_3d0784;
        }
    }
    ctx->pc = 0x3D0770u;
label_3d0770:
    // 0x3d0770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d0770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0774:
    // 0x3d0774: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d0774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d0778:
    // 0x3d0778: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3d0778u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3d077c:
    // 0x3d077c: 0xc0538d8  jal         func_14E360
label_3d0780:
    if (ctx->pc == 0x3D0780u) {
        ctx->pc = 0x3D0780u;
            // 0x3d0780: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3D0784u;
        goto label_3d0784;
    }
    ctx->pc = 0x3D077Cu;
    SET_GPR_U32(ctx, 31, 0x3D0784u);
    ctx->pc = 0x3D0780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D077Cu;
            // 0x3d0780: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0784u; }
        if (ctx->pc != 0x3D0784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0784u; }
        if (ctx->pc != 0x3D0784u) { return; }
    }
    ctx->pc = 0x3D0784u;
label_3d0784:
    // 0x3d0784: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d0784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d0788:
    // 0x3d0788: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d0788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d078c:
    // 0x3d078c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d078cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0790:
    // 0x3d0790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d0790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d0794:
    // 0x3d0794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d0794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d0798:
    // 0x3d0798: 0x3e00008  jr          $ra
label_3d079c:
    if (ctx->pc == 0x3D079Cu) {
        ctx->pc = 0x3D079Cu;
            // 0x3d079c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3D07A0u;
        goto label_3d07a0;
    }
    ctx->pc = 0x3D0798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0798u;
            // 0x3d079c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D07A0u;
label_3d07a0:
    // 0x3d07a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d07a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d07a4:
    // 0x3d07a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d07a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d07a8:
    // 0x3d07a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d07ac:
    // 0x3d07ac: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3d07acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3d07b0:
    // 0x3d07b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d07b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d07b4:
    // 0x3d07b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d07b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d07b8:
    // 0x3d07b8: 0x8c630ea8  lw          $v1, 0xEA8($v1)
    ctx->pc = 0x3d07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3752)));
label_3d07bc:
    // 0x3d07bc: 0x8cb08a08  lw          $s0, -0x75F8($a1)
    ctx->pc = 0x3d07bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_3d07c0:
    // 0x3d07c0: 0x8c660790  lw          $a2, 0x790($v1)
    ctx->pc = 0x3d07c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1936)));
label_3d07c4:
    // 0x3d07c4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3d07c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_3d07c8:
    // 0x3d07c8: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x3d07c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3d07cc:
    // 0x3d07cc: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
label_3d07d0:
    if (ctx->pc == 0x3D07D0u) {
        ctx->pc = 0x3D07D0u;
            // 0x3d07d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D07D4u;
        goto label_3d07d4;
    }
    ctx->pc = 0x3D07CCu;
    {
        const bool branch_taken_0x3d07cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D07D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D07CCu;
            // 0x3d07d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d07cc) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D07D4u;
label_3d07d4:
    // 0x3d07d4: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x3d07d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_3d07d8:
    // 0x3d07d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d07dc:
    // 0x3d07dc: 0x10a30080  beq         $a1, $v1, . + 4 + (0x80 << 2)
label_3d07e0:
    if (ctx->pc == 0x3D07E0u) {
        ctx->pc = 0x3D07E4u;
        goto label_3d07e4;
    }
    ctx->pc = 0x3D07DCu;
    {
        const bool branch_taken_0x3d07dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d07dc) {
            ctx->pc = 0x3D09E0u;
            goto label_3d09e0;
        }
    }
    ctx->pc = 0x3D07E4u;
label_3d07e4:
    // 0x3d07e4: 0x50a00079  beql        $a1, $zero, . + 4 + (0x79 << 2)
label_3d07e8:
    if (ctx->pc == 0x3D07E8u) {
        ctx->pc = 0x3D07E8u;
            // 0x3d07e8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D07ECu;
        goto label_3d07ec;
    }
    ctx->pc = 0x3D07E4u;
    {
        const bool branch_taken_0x3d07e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d07e4) {
            ctx->pc = 0x3D07E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D07E4u;
            // 0x3d07e8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D09CCu;
            goto label_3d09cc;
        }
    }
    ctx->pc = 0x3D07ECu;
label_3d07ec:
    // 0x3d07ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d07f0:
    // 0x3d07f0: 0x50a3001f  beql        $a1, $v1, . + 4 + (0x1F << 2)
label_3d07f4:
    if (ctx->pc == 0x3D07F4u) {
        ctx->pc = 0x3D07F4u;
            // 0x3d07f4: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3D07F8u;
        goto label_3d07f8;
    }
    ctx->pc = 0x3D07F0u;
    {
        const bool branch_taken_0x3d07f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d07f0) {
            ctx->pc = 0x3D07F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D07F0u;
            // 0x3d07f4: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0870u;
            goto label_3d0870;
        }
    }
    ctx->pc = 0x3D07F8u;
label_3d07f8:
    // 0x3d07f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d07f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d07fc:
    // 0x3d07fc: 0x50a3000e  beql        $a1, $v1, . + 4 + (0xE << 2)
label_3d0800:
    if (ctx->pc == 0x3D0800u) {
        ctx->pc = 0x3D0800u;
            // 0x3d0800: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3D0804u;
        goto label_3d0804;
    }
    ctx->pc = 0x3D07FCu;
    {
        const bool branch_taken_0x3d07fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d07fc) {
            ctx->pc = 0x3D0800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D07FCu;
            // 0x3d0800: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0838u;
            goto label_3d0838;
        }
    }
    ctx->pc = 0x3D0804u;
label_3d0804:
    // 0x3d0804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d0808:
    // 0x3d0808: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3d080c:
    if (ctx->pc == 0x3D080Cu) {
        ctx->pc = 0x3D080Cu;
            // 0x3d080c: 0x3c033800  lui         $v1, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
        ctx->pc = 0x3D0810u;
        goto label_3d0810;
    }
    ctx->pc = 0x3D0808u;
    {
        const bool branch_taken_0x3d0808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d0808) {
            ctx->pc = 0x3D080Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0808u;
            // 0x3d080c: 0x3c033800  lui         $v1, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0818u;
            goto label_3d0818;
        }
    }
    ctx->pc = 0x3D0810u;
label_3d0810:
    // 0x3d0810: 0x10000079  b           . + 4 + (0x79 << 2)
label_3d0814:
    if (ctx->pc == 0x3D0814u) {
        ctx->pc = 0x3D0814u;
            // 0x3d0814: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3D0818u;
        goto label_3d0818;
    }
    ctx->pc = 0x3D0810u;
    {
        const bool branch_taken_0x3d0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0810u;
            // 0x3d0814: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0810) {
            ctx->pc = 0x3D09F8u;
            goto label_3d09f8;
        }
    }
    ctx->pc = 0x3D0818u;
label_3d0818:
    // 0x3d0818: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3d0818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_3d081c:
    // 0x3d081c: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
label_3d0820:
    if (ctx->pc == 0x3D0820u) {
        ctx->pc = 0x3D0824u;
        goto label_3d0824;
    }
    ctx->pc = 0x3D081Cu;
    {
        const bool branch_taken_0x3d081c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d081c) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D0824u;
label_3d0824:
    // 0x3d0824: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d0824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d0828:
    // 0x3d0828: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d0828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d082c:
    // 0x3d082c: 0x320f809  jalr        $t9
label_3d0830:
    if (ctx->pc == 0x3D0830u) {
        ctx->pc = 0x3D0834u;
        goto label_3d0834;
    }
    ctx->pc = 0x3D082Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D0834u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D0834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D0834u; }
            if (ctx->pc != 0x3D0834u) { return; }
        }
        }
    }
    ctx->pc = 0x3D0834u;
label_3d0834:
    // 0x3d0834: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3d0834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d0838:
    // 0x3d0838: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x3d0838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d083c:
    // 0x3d083c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3d083cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d0840:
    // 0x3d0840: 0xe62100c0  swc1        $f1, 0xC0($s1)
    ctx->pc = 0x3d0840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3d0844:
    // 0x3d0844: 0xc62000cc  lwc1        $f0, 0xCC($s1)
    ctx->pc = 0x3d0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0848:
    // 0x3d0848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d0848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d084c:
    // 0x3d084c: 0x45010069  bc1t        . + 4 + (0x69 << 2)
label_3d0850:
    if (ctx->pc == 0x3D0850u) {
        ctx->pc = 0x3D0854u;
        goto label_3d0854;
    }
    ctx->pc = 0x3D084Cu;
    {
        const bool branch_taken_0x3d084c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d084c) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D0854u;
label_3d0854:
    // 0x3d0854: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x3d0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0858:
    // 0x3d0858: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3d0858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3d085c:
    // 0x3d085c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3d085cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d0860:
    // 0x3d0860: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d0860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d0864:
    // 0x3d0864: 0x320f809  jalr        $t9
label_3d0868:
    if (ctx->pc == 0x3D0868u) {
        ctx->pc = 0x3D0868u;
            // 0x3d0868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D086Cu;
        goto label_3d086c;
    }
    ctx->pc = 0x3D0864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D086Cu);
        ctx->pc = 0x3D0868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0864u;
            // 0x3d0868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D086Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D086Cu; }
            if (ctx->pc != 0x3D086Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3D086Cu;
label_3d086c:
    // 0x3d086c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3d086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d0870:
    // 0x3d0870: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x3d0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0874:
    // 0x3d0874: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3d0874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d0878:
    // 0x3d0878: 0xe62100c0  swc1        $f1, 0xC0($s1)
    ctx->pc = 0x3d0878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3d087c:
    // 0x3d087c: 0xc62000c8  lwc1        $f0, 0xC8($s1)
    ctx->pc = 0x3d087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d0880:
    // 0x3d0880: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d0880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0884:
    // 0x3d0884: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_3d0888:
    if (ctx->pc == 0x3D0888u) {
        ctx->pc = 0x3D0888u;
            // 0x3d0888: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->pc = 0x3D088Cu;
        goto label_3d088c;
    }
    ctx->pc = 0x3D0884u;
    {
        const bool branch_taken_0x3d0884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0884) {
            ctx->pc = 0x3D0888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0884u;
            // 0x3d0888: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D08A8u;
            goto label_3d08a8;
        }
    }
    ctx->pc = 0x3D088Cu;
label_3d088c:
    // 0x3d088c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3d088cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d0890:
    // 0x3d0890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d0890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0894:
    // 0x3d0894: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3d0894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3d0898:
    // 0x3d0898: 0x320f809  jalr        $t9
label_3d089c:
    if (ctx->pc == 0x3D089Cu) {
        ctx->pc = 0x3D089Cu;
            // 0x3d089c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D08A0u;
        goto label_3d08a0;
    }
    ctx->pc = 0x3D0898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D08A0u);
        ctx->pc = 0x3D089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0898u;
            // 0x3d089c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D08A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D08A0u; }
            if (ctx->pc != 0x3D08A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3D08A0u;
label_3d08a0:
    // 0x3d08a0: 0x10000054  b           . + 4 + (0x54 << 2)
label_3d08a4:
    if (ctx->pc == 0x3D08A4u) {
        ctx->pc = 0x3D08A8u;
        goto label_3d08a8;
    }
    ctx->pc = 0x3D08A0u;
    {
        const bool branch_taken_0x3d08a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d08a0) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D08A8u;
label_3d08a8:
    // 0x3d08a8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3d08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d08ac:
    // 0x3d08ac: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
label_3d08b0:
    if (ctx->pc == 0x3D08B0u) {
        ctx->pc = 0x3D08B0u;
            // 0x3d08b0: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->pc = 0x3D08B4u;
        goto label_3d08b4;
    }
    ctx->pc = 0x3D08ACu;
    {
        const bool branch_taken_0x3d08ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d08ac) {
            ctx->pc = 0x3D08B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D08ACu;
            // 0x3d08b0: 0x8e2300dc  lw          $v1, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0938u;
            goto label_3d0938;
        }
    }
    ctx->pc = 0x3D08B4u;
label_3d08b4:
    // 0x3d08b4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3d08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d08b8:
    // 0x3d08b8: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x3d08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d08bc:
    // 0x3d08bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d08bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d08c0:
    // 0x3d08c0: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x3d08c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_3d08c4:
    // 0x3d08c4: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x3d08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_3d08c8:
    // 0x3d08c8: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x3d08c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d08cc:
    // 0x3d08cc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3d08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d08d0:
    // 0x3d08d0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3d08d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d08d4:
    // 0x3d08d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d08d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d08d8:
    // 0x3d08d8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_3d08dc:
    if (ctx->pc == 0x3D08DCu) {
        ctx->pc = 0x3D08E0u;
        goto label_3d08e0;
    }
    ctx->pc = 0x3D08D8u;
    {
        const bool branch_taken_0x3d08d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d08d8) {
            ctx->pc = 0x3D0934u;
            goto label_3d0934;
        }
    }
    ctx->pc = 0x3D08E0u;
label_3d08e0:
    // 0x3d08e0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d08e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d08e4:
    // 0x3d08e4: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x3d08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3d08e8:
    // 0x3d08e8: 0x8c63f690  lw          $v1, -0x970($v1)
    ctx->pc = 0x3d08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964880)));
label_3d08ec:
    // 0x3d08ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3d08ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d08f0:
    // 0x3d08f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d08f4:
    if (ctx->pc == 0x3D08F4u) {
        ctx->pc = 0x3D08F8u;
        goto label_3d08f8;
    }
    ctx->pc = 0x3D08F0u;
    {
        const bool branch_taken_0x3d08f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d08f0) {
            ctx->pc = 0x3D0904u;
            goto label_3d0904;
        }
    }
    ctx->pc = 0x3D08F8u;
label_3d08f8:
    // 0x3d08f8: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x3d08f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d08fc:
    // 0x3d08fc: 0x1000000d  b           . + 4 + (0xD << 2)
label_3d0900:
    if (ctx->pc == 0x3D0900u) {
        ctx->pc = 0x3D0900u;
            // 0x3d0900: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->pc = 0x3D0904u;
        goto label_3d0904;
    }
    ctx->pc = 0x3D08FCu;
    {
        const bool branch_taken_0x3d08fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D08FCu;
            // 0x3d0900: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d08fc) {
            ctx->pc = 0x3D0934u;
            goto label_3d0934;
        }
    }
    ctx->pc = 0x3D0904u;
label_3d0904:
    // 0x3d0904: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d0904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d0908:
    // 0x3d0908: 0x8c63f698  lw          $v1, -0x968($v1)
    ctx->pc = 0x3d0908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964888)));
label_3d090c:
    // 0x3d090c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3d090cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d0910:
    // 0x3d0910: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d0914:
    if (ctx->pc == 0x3D0914u) {
        ctx->pc = 0x3D0918u;
        goto label_3d0918;
    }
    ctx->pc = 0x3D0910u;
    {
        const bool branch_taken_0x3d0910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0910) {
            ctx->pc = 0x3D0920u;
            goto label_3d0920;
        }
    }
    ctx->pc = 0x3D0918u;
label_3d0918:
    // 0x3d0918: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d091c:
    if (ctx->pc == 0x3D091Cu) {
        ctx->pc = 0x3D091Cu;
            // 0x3d091c: 0xe62100d0  swc1        $f1, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->pc = 0x3D0920u;
        goto label_3d0920;
    }
    ctx->pc = 0x3D0918u;
    {
        const bool branch_taken_0x3d0918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D091Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0918u;
            // 0x3d091c: 0xe62100d0  swc1        $f1, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0918) {
            ctx->pc = 0x3D0934u;
            goto label_3d0934;
        }
    }
    ctx->pc = 0x3D0920u;
label_3d0920:
    // 0x3d0920: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d0920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d0924:
    // 0x3d0924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d0924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0928:
    // 0x3d0928: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3d0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d092c:
    // 0x3d092c: 0xc057b7c  jal         func_15EDF0
label_3d0930:
    if (ctx->pc == 0x3D0930u) {
        ctx->pc = 0x3D0930u;
            // 0x3d0930: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D0934u;
        goto label_3d0934;
    }
    ctx->pc = 0x3D092Cu;
    SET_GPR_U32(ctx, 31, 0x3D0934u);
    ctx->pc = 0x3D0930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D092Cu;
            // 0x3d0930: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0934u; }
        if (ctx->pc != 0x3D0934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0934u; }
        if (ctx->pc != 0x3D0934u) { return; }
    }
    ctx->pc = 0x3D0934u;
label_3d0934:
    // 0x3d0934: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x3d0934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_3d0938:
    // 0x3d0938: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3d0938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d093c:
    // 0x3d093c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_3d0940:
    if (ctx->pc == 0x3D0940u) {
        ctx->pc = 0x3D0944u;
        goto label_3d0944;
    }
    ctx->pc = 0x3D093Cu;
    {
        const bool branch_taken_0x3d093c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d093c) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D0944u;
label_3d0944:
    // 0x3d0944: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3d0944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d0948:
    // 0x3d0948: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x3d0948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d094c:
    // 0x3d094c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d094cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d0950:
    // 0x3d0950: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x3d0950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_3d0954:
    // 0x3d0954: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x3d0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_3d0958:
    // 0x3d0958: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x3d0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d095c:
    // 0x3d095c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3d095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d0960:
    // 0x3d0960: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3d0960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d0964:
    // 0x3d0964: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d0964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d0968:
    // 0x3d0968: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_3d096c:
    if (ctx->pc == 0x3D096Cu) {
        ctx->pc = 0x3D0970u;
        goto label_3d0970;
    }
    ctx->pc = 0x3D0968u;
    {
        const bool branch_taken_0x3d0968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d0968) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D0970u;
label_3d0970:
    // 0x3d0970: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d0970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d0974:
    // 0x3d0974: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x3d0974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3d0978:
    // 0x3d0978: 0x8c63f6a0  lw          $v1, -0x960($v1)
    ctx->pc = 0x3d0978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964896)));
label_3d097c:
    // 0x3d097c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3d097cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d0980:
    // 0x3d0980: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d0984:
    if (ctx->pc == 0x3D0984u) {
        ctx->pc = 0x3D0988u;
        goto label_3d0988;
    }
    ctx->pc = 0x3D0980u;
    {
        const bool branch_taken_0x3d0980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0980) {
            ctx->pc = 0x3D0994u;
            goto label_3d0994;
        }
    }
    ctx->pc = 0x3D0988u;
label_3d0988:
    // 0x3d0988: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x3d0988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d098c:
    // 0x3d098c: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d0990:
    if (ctx->pc == 0x3D0990u) {
        ctx->pc = 0x3D0990u;
            // 0x3d0990: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->pc = 0x3D0994u;
        goto label_3d0994;
    }
    ctx->pc = 0x3D098Cu;
    {
        const bool branch_taken_0x3d098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D098Cu;
            // 0x3d0990: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d098c) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D0994u;
label_3d0994:
    // 0x3d0994: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d0994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d0998:
    // 0x3d0998: 0x8c63f6a8  lw          $v1, -0x958($v1)
    ctx->pc = 0x3d0998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964904)));
label_3d099c:
    // 0x3d099c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3d099cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d09a0:
    // 0x3d09a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d09a4:
    if (ctx->pc == 0x3D09A4u) {
        ctx->pc = 0x3D09A8u;
        goto label_3d09a8;
    }
    ctx->pc = 0x3D09A0u;
    {
        const bool branch_taken_0x3d09a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d09a0) {
            ctx->pc = 0x3D09B0u;
            goto label_3d09b0;
        }
    }
    ctx->pc = 0x3D09A8u;
label_3d09a8:
    // 0x3d09a8: 0x10000012  b           . + 4 + (0x12 << 2)
label_3d09ac:
    if (ctx->pc == 0x3D09ACu) {
        ctx->pc = 0x3D09ACu;
            // 0x3d09ac: 0xe62100d4  swc1        $f1, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->pc = 0x3D09B0u;
        goto label_3d09b0;
    }
    ctx->pc = 0x3D09A8u;
    {
        const bool branch_taken_0x3d09a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D09ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D09A8u;
            // 0x3d09ac: 0xe62100d4  swc1        $f1, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d09a8) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D09B0u;
label_3d09b0:
    // 0x3d09b0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d09b4:
    // 0x3d09b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d09b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d09b8:
    // 0x3d09b8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3d09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d09bc:
    // 0x3d09bc: 0xc057b7c  jal         func_15EDF0
label_3d09c0:
    if (ctx->pc == 0x3D09C0u) {
        ctx->pc = 0x3D09C0u;
            // 0x3d09c0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D09C4u;
        goto label_3d09c4;
    }
    ctx->pc = 0x3D09BCu;
    SET_GPR_U32(ctx, 31, 0x3D09C4u);
    ctx->pc = 0x3D09C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D09BCu;
            // 0x3d09c0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D09C4u; }
        if (ctx->pc != 0x3D09C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D09C4u; }
        if (ctx->pc != 0x3D09C4u) { return; }
    }
    ctx->pc = 0x3D09C4u;
label_3d09c4:
    // 0x3d09c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3d09c8:
    if (ctx->pc == 0x3D09C8u) {
        ctx->pc = 0x3D09CCu;
        goto label_3d09cc;
    }
    ctx->pc = 0x3D09C4u;
    {
        const bool branch_taken_0x3d09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d09c4) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D09CCu;
label_3d09cc:
    // 0x3d09cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d09ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d09d0:
    // 0x3d09d0: 0x320f809  jalr        $t9
label_3d09d4:
    if (ctx->pc == 0x3D09D4u) {
        ctx->pc = 0x3D09D8u;
        goto label_3d09d8;
    }
    ctx->pc = 0x3D09D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D09D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D09D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D09D8u; }
            if (ctx->pc != 0x3D09D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D09D8u;
label_3d09d8:
    // 0x3d09d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d09dc:
    if (ctx->pc == 0x3D09DCu) {
        ctx->pc = 0x3D09E0u;
        goto label_3d09e0;
    }
    ctx->pc = 0x3D09D8u;
    {
        const bool branch_taken_0x3d09d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d09d8) {
            ctx->pc = 0x3D09F4u;
            goto label_3d09f4;
        }
    }
    ctx->pc = 0x3D09E0u;
label_3d09e0:
    // 0x3d09e0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3d09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3d09e4:
    // 0x3d09e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d09e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d09e8:
    // 0x3d09e8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3d09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3d09ec:
    // 0x3d09ec: 0xc057b7c  jal         func_15EDF0
label_3d09f0:
    if (ctx->pc == 0x3D09F0u) {
        ctx->pc = 0x3D09F0u;
            // 0x3d09f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D09F4u;
        goto label_3d09f4;
    }
    ctx->pc = 0x3D09ECu;
    SET_GPR_U32(ctx, 31, 0x3D09F4u);
    ctx->pc = 0x3D09F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D09ECu;
            // 0x3d09f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D09F4u; }
        if (ctx->pc != 0x3D09F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D09F4u; }
        if (ctx->pc != 0x3D09F4u) { return; }
    }
    ctx->pc = 0x3D09F4u;
label_3d09f4:
    // 0x3d09f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d09f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d09f8:
    // 0x3d09f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d09f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d09fc:
    // 0x3d09fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d09fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d0a00:
    // 0x3d0a00: 0x3e00008  jr          $ra
label_3d0a04:
    if (ctx->pc == 0x3D0A04u) {
        ctx->pc = 0x3D0A04u;
            // 0x3d0a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D0A08u;
        goto label_3d0a08;
    }
    ctx->pc = 0x3D0A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0A00u;
            // 0x3d0a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D0A08u;
label_3d0a08:
    // 0x3d0a08: 0x0  nop
    ctx->pc = 0x3d0a08u;
    // NOP
label_3d0a0c:
    // 0x3d0a0c: 0x0  nop
    ctx->pc = 0x3d0a0cu;
    // NOP
label_3d0a10:
    // 0x3d0a10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3d0a14:
    // 0x3d0a14: 0x248300a4  addiu       $v1, $a0, 0xA4
    ctx->pc = 0x3d0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_3d0a18:
    // 0x3d0a18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3d0a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3d0a1c:
    // 0x3d0a1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3d0a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3d0a20:
    // 0x3d0a20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d0a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3d0a24:
    // 0x3d0a24: 0x249e0064  addiu       $fp, $a0, 0x64
    ctx->pc = 0x3d0a24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_3d0a28:
    // 0x3d0a28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d0a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3d0a2c:
    // 0x3d0a2c: 0x24970054  addiu       $s7, $a0, 0x54
    ctx->pc = 0x3d0a2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_3d0a30:
    // 0x3d0a30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d0a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3d0a34:
    // 0x3d0a34: 0x24960094  addiu       $s6, $a0, 0x94
    ctx->pc = 0x3d0a34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
label_3d0a38:
    // 0x3d0a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d0a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d0a3c:
    // 0x3d0a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d0a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d0a40:
    // 0x3d0a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d0a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d0a44:
    // 0x3d0a44: 0x24930044  addiu       $s3, $a0, 0x44
    ctx->pc = 0x3d0a44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_3d0a48:
    // 0x3d0a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d0a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d0a4c:
    // 0x3d0a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d0a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d0a50:
    // 0x3d0a50: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3d0a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_3d0a54:
    // 0x3d0a54: 0x248300b4  addiu       $v1, $a0, 0xB4
    ctx->pc = 0x3d0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
label_3d0a58:
    // 0x3d0a58: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x3d0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_3d0a5c:
    // 0x3d0a5c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3d0a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3d0a60:
    // 0x3d0a60: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x3d0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_3d0a64:
    // 0x3d0a64: 0x8c950014  lw          $s5, 0x14($a0)
    ctx->pc = 0x3d0a64u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3d0a68:
    // 0x3d0a68: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x3d0a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_3d0a6c:
    // 0x3d0a6c: 0x8c940024  lw          $s4, 0x24($a0)
    ctx->pc = 0x3d0a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3d0a70:
    // 0x3d0a70: 0x620019  multu       $v1, $v0
    ctx->pc = 0x3d0a70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3d0a74:
    // 0x3d0a74: 0x8c920074  lw          $s2, 0x74($a0)
    ctx->pc = 0x3d0a74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3d0a78:
    // 0x3d0a78: 0x8c910084  lw          $s1, 0x84($a0)
    ctx->pc = 0x3d0a78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3d0a7c:
    // 0x3d0a7c: 0x1810  mfhi        $v1
    ctx->pc = 0x3d0a7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3d0a80:
    // 0x3d0a80: 0x32982  srl         $a1, $v1, 6
    ctx->pc = 0x3d0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_3d0a84:
    // 0x3d0a84: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_3d0a88:
    if (ctx->pc == 0x3D0A88u) {
        ctx->pc = 0x3D0A88u;
            // 0x3d0a88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A8Cu;
        goto label_3d0a8c;
    }
    ctx->pc = 0x3D0A84u;
    {
        const bool branch_taken_0x3d0a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0A84u;
            // 0x3d0a88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0a84) {
            ctx->pc = 0x3D0A90u;
            goto label_3d0a90;
        }
    }
    ctx->pc = 0x3D0A8Cu;
label_3d0a8c:
    // 0x3d0a8c: 0x36100040  ori         $s0, $s0, 0x40
    ctx->pc = 0x3d0a8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
label_3d0a90:
    // 0x3d0a90: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x3d0a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3d0a94:
    // 0x3d0a94: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x3d0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_3d0a98:
    // 0x3d0a98: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3d0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d0a9c:
    // 0x3d0a9c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x3d0a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_3d0aa0:
    // 0x3d0aa0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0aa4:
    // 0x3d0aa4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d0aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d0aa8:
    // 0x3d0aa8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3d0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3d0aac:
    // 0x3d0aac: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x3d0aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d0ab0:
    // 0x3d0ab0: 0x660019  multu       $v1, $a2
    ctx->pc = 0x3d0ab0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3d0ab4:
    // 0x3d0ab4: 0x1010  mfhi        $v0
    ctx->pc = 0x3d0ab4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3d0ab8:
    // 0x3d0ab8: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x3d0ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_3d0abc:
    // 0x3d0abc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3d0ac0:
    if (ctx->pc == 0x3D0AC0u) {
        ctx->pc = 0x3D0AC0u;
            // 0x3d0ac0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x3D0AC4u;
        goto label_3d0ac4;
    }
    ctx->pc = 0x3D0ABCu;
    {
        const bool branch_taken_0x3d0abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0abc) {
            ctx->pc = 0x3D0AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0ABCu;
            // 0x3d0ac0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0ACCu;
            goto label_3d0acc;
        }
    }
    ctx->pc = 0x3D0AC4u;
label_3d0ac4:
    // 0x3d0ac4: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x3d0ac4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_3d0ac8:
    // 0x3d0ac8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3d0ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0acc:
    // 0x3d0acc: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3d0accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_3d0ad0:
    // 0x3d0ad0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x3d0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d0ad4:
    // 0x3d0ad4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3d0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3d0ad8:
    // 0x3d0ad8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3d0ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d0adc:
    // 0x3d0adc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3d0adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3d0ae0:
    // 0x3d0ae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d0ae4:
    // 0x3d0ae4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d0ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0ae8:
    // 0x3d0ae8: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x3d0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3d0aec:
    // 0x3d0aec: 0x640019  multu       $v1, $a0
    ctx->pc = 0x3d0aecu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3d0af0:
    // 0x3d0af0: 0x1810  mfhi        $v1
    ctx->pc = 0x3d0af0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3d0af4:
    // 0x3d0af4: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3d0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_3d0af8:
    // 0x3d0af8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_3d0afc:
    if (ctx->pc == 0x3D0AFCu) {
        ctx->pc = 0x3D0AFCu;
            // 0x3d0afc: 0x36100030  ori         $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)48);
        ctx->pc = 0x3D0B00u;
        goto label_3d0b00;
    }
    ctx->pc = 0x3D0AF8u;
    {
        const bool branch_taken_0x3d0af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d0af8) {
            ctx->pc = 0x3D0AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0AF8u;
            // 0x3d0afc: 0x36100030  ori         $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0B0Cu;
            goto label_3d0b0c;
        }
    }
    ctx->pc = 0x3D0B00u;
label_3d0b00:
    // 0x3d0b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d0b04:
    // 0x3d0b04: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3d0b08:
    if (ctx->pc == 0x3D0B08u) {
        ctx->pc = 0x3D0B08u;
            // 0x3d0b08: 0x36100006  ori         $s0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
        ctx->pc = 0x3D0B0Cu;
        goto label_3d0b0c;
    }
    ctx->pc = 0x3D0B04u;
    {
        const bool branch_taken_0x3d0b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d0b04) {
            ctx->pc = 0x3D0B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0B04u;
            // 0x3d0b08: 0x36100006  ori         $s0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0B0Cu;
            goto label_3d0b0c;
        }
    }
    ctx->pc = 0x3D0B0Cu;
label_3d0b0c:
    // 0x3d0b0c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3d0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d0b10:
    // 0x3d0b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d0b14:
    // 0x3d0b14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3d0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3d0b18:
    // 0x3d0b18: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3d0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3d0b1c:
    // 0x3d0b1c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3d0b20:
    if (ctx->pc == 0x3D0B20u) {
        ctx->pc = 0x3D0B20u;
            // 0x3d0b20: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x3D0B24u;
        goto label_3d0b24;
    }
    ctx->pc = 0x3D0B1Cu;
    {
        const bool branch_taken_0x3d0b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0b1c) {
            ctx->pc = 0x3D0B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0B1Cu;
            // 0x3d0b20: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0B2Cu;
            goto label_3d0b2c;
        }
    }
    ctx->pc = 0x3D0B24u;
label_3d0b24:
    // 0x3d0b24: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x3d0b24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_3d0b28:
    // 0x3d0b28: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x3d0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_3d0b2c:
    // 0x3d0b2c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3d0b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3d0b30:
    // 0x3d0b30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d0b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d0b34:
    // 0x3d0b34: 0xc040140  jal         func_100500
label_3d0b38:
    if (ctx->pc == 0x3D0B38u) {
        ctx->pc = 0x3D0B38u;
            // 0x3d0b38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0B3Cu;
        goto label_3d0b3c;
    }
    ctx->pc = 0x3D0B34u;
    SET_GPR_U32(ctx, 31, 0x3D0B3Cu);
    ctx->pc = 0x3D0B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0B34u;
            // 0x3d0b38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0B3Cu; }
        if (ctx->pc != 0x3D0B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0B3Cu; }
        if (ctx->pc != 0x3D0B3Cu) { return; }
    }
    ctx->pc = 0x3D0B3Cu;
label_3d0b3c:
    // 0x3d0b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d0b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d0b40:
    // 0x3d0b40: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_3d0b44:
    if (ctx->pc == 0x3D0B44u) {
        ctx->pc = 0x3D0B44u;
            // 0x3d0b44: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3D0B48u;
        goto label_3d0b48;
    }
    ctx->pc = 0x3D0B40u;
    {
        const bool branch_taken_0x3d0b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0b40) {
            ctx->pc = 0x3D0B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0B40u;
            // 0x3d0b44: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D0B88u;
            goto label_3d0b88;
        }
    }
    ctx->pc = 0x3D0B48u;
label_3d0b48:
    // 0x3d0b48: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3d0b48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d0b4c:
    // 0x3d0b4c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x3d0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d0b50:
    // 0x3d0b50: 0xc6ed0000  lwc1        $f13, 0x0($s7)
    ctx->pc = 0x3d0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3d0b54:
    // 0x3d0b54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3d0b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d0b58:
    // 0x3d0b58: 0xc7ce0000  lwc1        $f14, 0x0($fp)
    ctx->pc = 0x3d0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3d0b5c:
    // 0x3d0b5c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3d0b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d0b60:
    // 0x3d0b60: 0xc4500000  lwc1        $f16, 0x0($v0)
    ctx->pc = 0x3d0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_3d0b64:
    // 0x3d0b64: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3d0b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d0b68:
    // 0x3d0b68: 0xc6cf0000  lwc1        $f15, 0x0($s6)
    ctx->pc = 0x3d0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3d0b6c:
    // 0x3d0b6c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3d0b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d0b70:
    // 0x3d0b70: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3d0b70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d0b74:
    // 0x3d0b74: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3d0b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d0b78:
    // 0x3d0b78: 0xc4510000  lwc1        $f17, 0x0($v0)
    ctx->pc = 0x3d0b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_3d0b7c:
    // 0x3d0b7c: 0xc0f42f0  jal         func_3D0BC0
label_3d0b80:
    if (ctx->pc == 0x3D0B80u) {
        ctx->pc = 0x3D0B80u;
            // 0x3d0b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D0B84u;
        goto label_3d0b84;
    }
    ctx->pc = 0x3D0B7Cu;
    SET_GPR_U32(ctx, 31, 0x3D0B84u);
    ctx->pc = 0x3D0B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0B7Cu;
            // 0x3d0b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D0BC0u;
    if (runtime->hasFunction(0x3D0BC0u)) {
        auto targetFn = runtime->lookupFunction(0x3D0BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0B84u; }
        if (ctx->pc != 0x3D0B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D0BC0_0x3d0bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D0B84u; }
        if (ctx->pc != 0x3D0B84u) { return; }
    }
    ctx->pc = 0x3D0B84u;
label_3d0b84:
    // 0x3d0b84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3d0b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3d0b88:
    // 0x3d0b88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3d0b88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d0b8c:
    // 0x3d0b8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d0b8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d0b90:
    // 0x3d0b90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d0b90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d0b94:
    // 0x3d0b94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d0b94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d0b98:
    // 0x3d0b98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d0b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d0b9c:
    // 0x3d0b9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d0b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d0ba0:
    // 0x3d0ba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d0ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0ba4:
    // 0x3d0ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d0ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d0ba8:
    // 0x3d0ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d0ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d0bac:
    // 0x3d0bac: 0x3e00008  jr          $ra
label_3d0bb0:
    if (ctx->pc == 0x3D0BB0u) {
        ctx->pc = 0x3D0BB0u;
            // 0x3d0bb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D0BB4u;
        goto label_3d0bb4;
    }
    ctx->pc = 0x3D0BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D0BACu;
            // 0x3d0bb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D0BB4u;
label_3d0bb4:
    // 0x3d0bb4: 0x0  nop
    ctx->pc = 0x3d0bb4u;
    // NOP
label_3d0bb8:
    // 0x3d0bb8: 0x0  nop
    ctx->pc = 0x3d0bb8u;
    // NOP
label_3d0bbc:
    // 0x3d0bbc: 0x0  nop
    ctx->pc = 0x3d0bbcu;
    // NOP
}
