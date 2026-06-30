#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EFC20
// Address: 0x2efc20 - 0x2f0330
void sub_002EFC20_0x2efc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFC20_0x2efc20");
#endif

    switch (ctx->pc) {
        case 0x2efc20u: goto label_2efc20;
        case 0x2efc24u: goto label_2efc24;
        case 0x2efc28u: goto label_2efc28;
        case 0x2efc2cu: goto label_2efc2c;
        case 0x2efc30u: goto label_2efc30;
        case 0x2efc34u: goto label_2efc34;
        case 0x2efc38u: goto label_2efc38;
        case 0x2efc3cu: goto label_2efc3c;
        case 0x2efc40u: goto label_2efc40;
        case 0x2efc44u: goto label_2efc44;
        case 0x2efc48u: goto label_2efc48;
        case 0x2efc4cu: goto label_2efc4c;
        case 0x2efc50u: goto label_2efc50;
        case 0x2efc54u: goto label_2efc54;
        case 0x2efc58u: goto label_2efc58;
        case 0x2efc5cu: goto label_2efc5c;
        case 0x2efc60u: goto label_2efc60;
        case 0x2efc64u: goto label_2efc64;
        case 0x2efc68u: goto label_2efc68;
        case 0x2efc6cu: goto label_2efc6c;
        case 0x2efc70u: goto label_2efc70;
        case 0x2efc74u: goto label_2efc74;
        case 0x2efc78u: goto label_2efc78;
        case 0x2efc7cu: goto label_2efc7c;
        case 0x2efc80u: goto label_2efc80;
        case 0x2efc84u: goto label_2efc84;
        case 0x2efc88u: goto label_2efc88;
        case 0x2efc8cu: goto label_2efc8c;
        case 0x2efc90u: goto label_2efc90;
        case 0x2efc94u: goto label_2efc94;
        case 0x2efc98u: goto label_2efc98;
        case 0x2efc9cu: goto label_2efc9c;
        case 0x2efca0u: goto label_2efca0;
        case 0x2efca4u: goto label_2efca4;
        case 0x2efca8u: goto label_2efca8;
        case 0x2efcacu: goto label_2efcac;
        case 0x2efcb0u: goto label_2efcb0;
        case 0x2efcb4u: goto label_2efcb4;
        case 0x2efcb8u: goto label_2efcb8;
        case 0x2efcbcu: goto label_2efcbc;
        case 0x2efcc0u: goto label_2efcc0;
        case 0x2efcc4u: goto label_2efcc4;
        case 0x2efcc8u: goto label_2efcc8;
        case 0x2efcccu: goto label_2efccc;
        case 0x2efcd0u: goto label_2efcd0;
        case 0x2efcd4u: goto label_2efcd4;
        case 0x2efcd8u: goto label_2efcd8;
        case 0x2efcdcu: goto label_2efcdc;
        case 0x2efce0u: goto label_2efce0;
        case 0x2efce4u: goto label_2efce4;
        case 0x2efce8u: goto label_2efce8;
        case 0x2efcecu: goto label_2efcec;
        case 0x2efcf0u: goto label_2efcf0;
        case 0x2efcf4u: goto label_2efcf4;
        case 0x2efcf8u: goto label_2efcf8;
        case 0x2efcfcu: goto label_2efcfc;
        case 0x2efd00u: goto label_2efd00;
        case 0x2efd04u: goto label_2efd04;
        case 0x2efd08u: goto label_2efd08;
        case 0x2efd0cu: goto label_2efd0c;
        case 0x2efd10u: goto label_2efd10;
        case 0x2efd14u: goto label_2efd14;
        case 0x2efd18u: goto label_2efd18;
        case 0x2efd1cu: goto label_2efd1c;
        case 0x2efd20u: goto label_2efd20;
        case 0x2efd24u: goto label_2efd24;
        case 0x2efd28u: goto label_2efd28;
        case 0x2efd2cu: goto label_2efd2c;
        case 0x2efd30u: goto label_2efd30;
        case 0x2efd34u: goto label_2efd34;
        case 0x2efd38u: goto label_2efd38;
        case 0x2efd3cu: goto label_2efd3c;
        case 0x2efd40u: goto label_2efd40;
        case 0x2efd44u: goto label_2efd44;
        case 0x2efd48u: goto label_2efd48;
        case 0x2efd4cu: goto label_2efd4c;
        case 0x2efd50u: goto label_2efd50;
        case 0x2efd54u: goto label_2efd54;
        case 0x2efd58u: goto label_2efd58;
        case 0x2efd5cu: goto label_2efd5c;
        case 0x2efd60u: goto label_2efd60;
        case 0x2efd64u: goto label_2efd64;
        case 0x2efd68u: goto label_2efd68;
        case 0x2efd6cu: goto label_2efd6c;
        case 0x2efd70u: goto label_2efd70;
        case 0x2efd74u: goto label_2efd74;
        case 0x2efd78u: goto label_2efd78;
        case 0x2efd7cu: goto label_2efd7c;
        case 0x2efd80u: goto label_2efd80;
        case 0x2efd84u: goto label_2efd84;
        case 0x2efd88u: goto label_2efd88;
        case 0x2efd8cu: goto label_2efd8c;
        case 0x2efd90u: goto label_2efd90;
        case 0x2efd94u: goto label_2efd94;
        case 0x2efd98u: goto label_2efd98;
        case 0x2efd9cu: goto label_2efd9c;
        case 0x2efda0u: goto label_2efda0;
        case 0x2efda4u: goto label_2efda4;
        case 0x2efda8u: goto label_2efda8;
        case 0x2efdacu: goto label_2efdac;
        case 0x2efdb0u: goto label_2efdb0;
        case 0x2efdb4u: goto label_2efdb4;
        case 0x2efdb8u: goto label_2efdb8;
        case 0x2efdbcu: goto label_2efdbc;
        case 0x2efdc0u: goto label_2efdc0;
        case 0x2efdc4u: goto label_2efdc4;
        case 0x2efdc8u: goto label_2efdc8;
        case 0x2efdccu: goto label_2efdcc;
        case 0x2efdd0u: goto label_2efdd0;
        case 0x2efdd4u: goto label_2efdd4;
        case 0x2efdd8u: goto label_2efdd8;
        case 0x2efddcu: goto label_2efddc;
        case 0x2efde0u: goto label_2efde0;
        case 0x2efde4u: goto label_2efde4;
        case 0x2efde8u: goto label_2efde8;
        case 0x2efdecu: goto label_2efdec;
        case 0x2efdf0u: goto label_2efdf0;
        case 0x2efdf4u: goto label_2efdf4;
        case 0x2efdf8u: goto label_2efdf8;
        case 0x2efdfcu: goto label_2efdfc;
        case 0x2efe00u: goto label_2efe00;
        case 0x2efe04u: goto label_2efe04;
        case 0x2efe08u: goto label_2efe08;
        case 0x2efe0cu: goto label_2efe0c;
        case 0x2efe10u: goto label_2efe10;
        case 0x2efe14u: goto label_2efe14;
        case 0x2efe18u: goto label_2efe18;
        case 0x2efe1cu: goto label_2efe1c;
        case 0x2efe20u: goto label_2efe20;
        case 0x2efe24u: goto label_2efe24;
        case 0x2efe28u: goto label_2efe28;
        case 0x2efe2cu: goto label_2efe2c;
        case 0x2efe30u: goto label_2efe30;
        case 0x2efe34u: goto label_2efe34;
        case 0x2efe38u: goto label_2efe38;
        case 0x2efe3cu: goto label_2efe3c;
        case 0x2efe40u: goto label_2efe40;
        case 0x2efe44u: goto label_2efe44;
        case 0x2efe48u: goto label_2efe48;
        case 0x2efe4cu: goto label_2efe4c;
        case 0x2efe50u: goto label_2efe50;
        case 0x2efe54u: goto label_2efe54;
        case 0x2efe58u: goto label_2efe58;
        case 0x2efe5cu: goto label_2efe5c;
        case 0x2efe60u: goto label_2efe60;
        case 0x2efe64u: goto label_2efe64;
        case 0x2efe68u: goto label_2efe68;
        case 0x2efe6cu: goto label_2efe6c;
        case 0x2efe70u: goto label_2efe70;
        case 0x2efe74u: goto label_2efe74;
        case 0x2efe78u: goto label_2efe78;
        case 0x2efe7cu: goto label_2efe7c;
        case 0x2efe80u: goto label_2efe80;
        case 0x2efe84u: goto label_2efe84;
        case 0x2efe88u: goto label_2efe88;
        case 0x2efe8cu: goto label_2efe8c;
        case 0x2efe90u: goto label_2efe90;
        case 0x2efe94u: goto label_2efe94;
        case 0x2efe98u: goto label_2efe98;
        case 0x2efe9cu: goto label_2efe9c;
        case 0x2efea0u: goto label_2efea0;
        case 0x2efea4u: goto label_2efea4;
        case 0x2efea8u: goto label_2efea8;
        case 0x2efeacu: goto label_2efeac;
        case 0x2efeb0u: goto label_2efeb0;
        case 0x2efeb4u: goto label_2efeb4;
        case 0x2efeb8u: goto label_2efeb8;
        case 0x2efebcu: goto label_2efebc;
        case 0x2efec0u: goto label_2efec0;
        case 0x2efec4u: goto label_2efec4;
        case 0x2efec8u: goto label_2efec8;
        case 0x2efeccu: goto label_2efecc;
        case 0x2efed0u: goto label_2efed0;
        case 0x2efed4u: goto label_2efed4;
        case 0x2efed8u: goto label_2efed8;
        case 0x2efedcu: goto label_2efedc;
        case 0x2efee0u: goto label_2efee0;
        case 0x2efee4u: goto label_2efee4;
        case 0x2efee8u: goto label_2efee8;
        case 0x2efeecu: goto label_2efeec;
        case 0x2efef0u: goto label_2efef0;
        case 0x2efef4u: goto label_2efef4;
        case 0x2efef8u: goto label_2efef8;
        case 0x2efefcu: goto label_2efefc;
        case 0x2eff00u: goto label_2eff00;
        case 0x2eff04u: goto label_2eff04;
        case 0x2eff08u: goto label_2eff08;
        case 0x2eff0cu: goto label_2eff0c;
        case 0x2eff10u: goto label_2eff10;
        case 0x2eff14u: goto label_2eff14;
        case 0x2eff18u: goto label_2eff18;
        case 0x2eff1cu: goto label_2eff1c;
        case 0x2eff20u: goto label_2eff20;
        case 0x2eff24u: goto label_2eff24;
        case 0x2eff28u: goto label_2eff28;
        case 0x2eff2cu: goto label_2eff2c;
        case 0x2eff30u: goto label_2eff30;
        case 0x2eff34u: goto label_2eff34;
        case 0x2eff38u: goto label_2eff38;
        case 0x2eff3cu: goto label_2eff3c;
        case 0x2eff40u: goto label_2eff40;
        case 0x2eff44u: goto label_2eff44;
        case 0x2eff48u: goto label_2eff48;
        case 0x2eff4cu: goto label_2eff4c;
        case 0x2eff50u: goto label_2eff50;
        case 0x2eff54u: goto label_2eff54;
        case 0x2eff58u: goto label_2eff58;
        case 0x2eff5cu: goto label_2eff5c;
        case 0x2eff60u: goto label_2eff60;
        case 0x2eff64u: goto label_2eff64;
        case 0x2eff68u: goto label_2eff68;
        case 0x2eff6cu: goto label_2eff6c;
        case 0x2eff70u: goto label_2eff70;
        case 0x2eff74u: goto label_2eff74;
        case 0x2eff78u: goto label_2eff78;
        case 0x2eff7cu: goto label_2eff7c;
        case 0x2eff80u: goto label_2eff80;
        case 0x2eff84u: goto label_2eff84;
        case 0x2eff88u: goto label_2eff88;
        case 0x2eff8cu: goto label_2eff8c;
        case 0x2eff90u: goto label_2eff90;
        case 0x2eff94u: goto label_2eff94;
        case 0x2eff98u: goto label_2eff98;
        case 0x2eff9cu: goto label_2eff9c;
        case 0x2effa0u: goto label_2effa0;
        case 0x2effa4u: goto label_2effa4;
        case 0x2effa8u: goto label_2effa8;
        case 0x2effacu: goto label_2effac;
        case 0x2effb0u: goto label_2effb0;
        case 0x2effb4u: goto label_2effb4;
        case 0x2effb8u: goto label_2effb8;
        case 0x2effbcu: goto label_2effbc;
        case 0x2effc0u: goto label_2effc0;
        case 0x2effc4u: goto label_2effc4;
        case 0x2effc8u: goto label_2effc8;
        case 0x2effccu: goto label_2effcc;
        case 0x2effd0u: goto label_2effd0;
        case 0x2effd4u: goto label_2effd4;
        case 0x2effd8u: goto label_2effd8;
        case 0x2effdcu: goto label_2effdc;
        case 0x2effe0u: goto label_2effe0;
        case 0x2effe4u: goto label_2effe4;
        case 0x2effe8u: goto label_2effe8;
        case 0x2effecu: goto label_2effec;
        case 0x2efff0u: goto label_2efff0;
        case 0x2efff4u: goto label_2efff4;
        case 0x2efff8u: goto label_2efff8;
        case 0x2efffcu: goto label_2efffc;
        case 0x2f0000u: goto label_2f0000;
        case 0x2f0004u: goto label_2f0004;
        case 0x2f0008u: goto label_2f0008;
        case 0x2f000cu: goto label_2f000c;
        case 0x2f0010u: goto label_2f0010;
        case 0x2f0014u: goto label_2f0014;
        case 0x2f0018u: goto label_2f0018;
        case 0x2f001cu: goto label_2f001c;
        case 0x2f0020u: goto label_2f0020;
        case 0x2f0024u: goto label_2f0024;
        case 0x2f0028u: goto label_2f0028;
        case 0x2f002cu: goto label_2f002c;
        case 0x2f0030u: goto label_2f0030;
        case 0x2f0034u: goto label_2f0034;
        case 0x2f0038u: goto label_2f0038;
        case 0x2f003cu: goto label_2f003c;
        case 0x2f0040u: goto label_2f0040;
        case 0x2f0044u: goto label_2f0044;
        case 0x2f0048u: goto label_2f0048;
        case 0x2f004cu: goto label_2f004c;
        case 0x2f0050u: goto label_2f0050;
        case 0x2f0054u: goto label_2f0054;
        case 0x2f0058u: goto label_2f0058;
        case 0x2f005cu: goto label_2f005c;
        case 0x2f0060u: goto label_2f0060;
        case 0x2f0064u: goto label_2f0064;
        case 0x2f0068u: goto label_2f0068;
        case 0x2f006cu: goto label_2f006c;
        case 0x2f0070u: goto label_2f0070;
        case 0x2f0074u: goto label_2f0074;
        case 0x2f0078u: goto label_2f0078;
        case 0x2f007cu: goto label_2f007c;
        case 0x2f0080u: goto label_2f0080;
        case 0x2f0084u: goto label_2f0084;
        case 0x2f0088u: goto label_2f0088;
        case 0x2f008cu: goto label_2f008c;
        case 0x2f0090u: goto label_2f0090;
        case 0x2f0094u: goto label_2f0094;
        case 0x2f0098u: goto label_2f0098;
        case 0x2f009cu: goto label_2f009c;
        case 0x2f00a0u: goto label_2f00a0;
        case 0x2f00a4u: goto label_2f00a4;
        case 0x2f00a8u: goto label_2f00a8;
        case 0x2f00acu: goto label_2f00ac;
        case 0x2f00b0u: goto label_2f00b0;
        case 0x2f00b4u: goto label_2f00b4;
        case 0x2f00b8u: goto label_2f00b8;
        case 0x2f00bcu: goto label_2f00bc;
        case 0x2f00c0u: goto label_2f00c0;
        case 0x2f00c4u: goto label_2f00c4;
        case 0x2f00c8u: goto label_2f00c8;
        case 0x2f00ccu: goto label_2f00cc;
        case 0x2f00d0u: goto label_2f00d0;
        case 0x2f00d4u: goto label_2f00d4;
        case 0x2f00d8u: goto label_2f00d8;
        case 0x2f00dcu: goto label_2f00dc;
        case 0x2f00e0u: goto label_2f00e0;
        case 0x2f00e4u: goto label_2f00e4;
        case 0x2f00e8u: goto label_2f00e8;
        case 0x2f00ecu: goto label_2f00ec;
        case 0x2f00f0u: goto label_2f00f0;
        case 0x2f00f4u: goto label_2f00f4;
        case 0x2f00f8u: goto label_2f00f8;
        case 0x2f00fcu: goto label_2f00fc;
        case 0x2f0100u: goto label_2f0100;
        case 0x2f0104u: goto label_2f0104;
        case 0x2f0108u: goto label_2f0108;
        case 0x2f010cu: goto label_2f010c;
        case 0x2f0110u: goto label_2f0110;
        case 0x2f0114u: goto label_2f0114;
        case 0x2f0118u: goto label_2f0118;
        case 0x2f011cu: goto label_2f011c;
        case 0x2f0120u: goto label_2f0120;
        case 0x2f0124u: goto label_2f0124;
        case 0x2f0128u: goto label_2f0128;
        case 0x2f012cu: goto label_2f012c;
        case 0x2f0130u: goto label_2f0130;
        case 0x2f0134u: goto label_2f0134;
        case 0x2f0138u: goto label_2f0138;
        case 0x2f013cu: goto label_2f013c;
        case 0x2f0140u: goto label_2f0140;
        case 0x2f0144u: goto label_2f0144;
        case 0x2f0148u: goto label_2f0148;
        case 0x2f014cu: goto label_2f014c;
        case 0x2f0150u: goto label_2f0150;
        case 0x2f0154u: goto label_2f0154;
        case 0x2f0158u: goto label_2f0158;
        case 0x2f015cu: goto label_2f015c;
        case 0x2f0160u: goto label_2f0160;
        case 0x2f0164u: goto label_2f0164;
        case 0x2f0168u: goto label_2f0168;
        case 0x2f016cu: goto label_2f016c;
        case 0x2f0170u: goto label_2f0170;
        case 0x2f0174u: goto label_2f0174;
        case 0x2f0178u: goto label_2f0178;
        case 0x2f017cu: goto label_2f017c;
        case 0x2f0180u: goto label_2f0180;
        case 0x2f0184u: goto label_2f0184;
        case 0x2f0188u: goto label_2f0188;
        case 0x2f018cu: goto label_2f018c;
        case 0x2f0190u: goto label_2f0190;
        case 0x2f0194u: goto label_2f0194;
        case 0x2f0198u: goto label_2f0198;
        case 0x2f019cu: goto label_2f019c;
        case 0x2f01a0u: goto label_2f01a0;
        case 0x2f01a4u: goto label_2f01a4;
        case 0x2f01a8u: goto label_2f01a8;
        case 0x2f01acu: goto label_2f01ac;
        case 0x2f01b0u: goto label_2f01b0;
        case 0x2f01b4u: goto label_2f01b4;
        case 0x2f01b8u: goto label_2f01b8;
        case 0x2f01bcu: goto label_2f01bc;
        case 0x2f01c0u: goto label_2f01c0;
        case 0x2f01c4u: goto label_2f01c4;
        case 0x2f01c8u: goto label_2f01c8;
        case 0x2f01ccu: goto label_2f01cc;
        case 0x2f01d0u: goto label_2f01d0;
        case 0x2f01d4u: goto label_2f01d4;
        case 0x2f01d8u: goto label_2f01d8;
        case 0x2f01dcu: goto label_2f01dc;
        case 0x2f01e0u: goto label_2f01e0;
        case 0x2f01e4u: goto label_2f01e4;
        case 0x2f01e8u: goto label_2f01e8;
        case 0x2f01ecu: goto label_2f01ec;
        case 0x2f01f0u: goto label_2f01f0;
        case 0x2f01f4u: goto label_2f01f4;
        case 0x2f01f8u: goto label_2f01f8;
        case 0x2f01fcu: goto label_2f01fc;
        case 0x2f0200u: goto label_2f0200;
        case 0x2f0204u: goto label_2f0204;
        case 0x2f0208u: goto label_2f0208;
        case 0x2f020cu: goto label_2f020c;
        case 0x2f0210u: goto label_2f0210;
        case 0x2f0214u: goto label_2f0214;
        case 0x2f0218u: goto label_2f0218;
        case 0x2f021cu: goto label_2f021c;
        case 0x2f0220u: goto label_2f0220;
        case 0x2f0224u: goto label_2f0224;
        case 0x2f0228u: goto label_2f0228;
        case 0x2f022cu: goto label_2f022c;
        case 0x2f0230u: goto label_2f0230;
        case 0x2f0234u: goto label_2f0234;
        case 0x2f0238u: goto label_2f0238;
        case 0x2f023cu: goto label_2f023c;
        case 0x2f0240u: goto label_2f0240;
        case 0x2f0244u: goto label_2f0244;
        case 0x2f0248u: goto label_2f0248;
        case 0x2f024cu: goto label_2f024c;
        case 0x2f0250u: goto label_2f0250;
        case 0x2f0254u: goto label_2f0254;
        case 0x2f0258u: goto label_2f0258;
        case 0x2f025cu: goto label_2f025c;
        case 0x2f0260u: goto label_2f0260;
        case 0x2f0264u: goto label_2f0264;
        case 0x2f0268u: goto label_2f0268;
        case 0x2f026cu: goto label_2f026c;
        case 0x2f0270u: goto label_2f0270;
        case 0x2f0274u: goto label_2f0274;
        case 0x2f0278u: goto label_2f0278;
        case 0x2f027cu: goto label_2f027c;
        case 0x2f0280u: goto label_2f0280;
        case 0x2f0284u: goto label_2f0284;
        case 0x2f0288u: goto label_2f0288;
        case 0x2f028cu: goto label_2f028c;
        case 0x2f0290u: goto label_2f0290;
        case 0x2f0294u: goto label_2f0294;
        case 0x2f0298u: goto label_2f0298;
        case 0x2f029cu: goto label_2f029c;
        case 0x2f02a0u: goto label_2f02a0;
        case 0x2f02a4u: goto label_2f02a4;
        case 0x2f02a8u: goto label_2f02a8;
        case 0x2f02acu: goto label_2f02ac;
        case 0x2f02b0u: goto label_2f02b0;
        case 0x2f02b4u: goto label_2f02b4;
        case 0x2f02b8u: goto label_2f02b8;
        case 0x2f02bcu: goto label_2f02bc;
        case 0x2f02c0u: goto label_2f02c0;
        case 0x2f02c4u: goto label_2f02c4;
        case 0x2f02c8u: goto label_2f02c8;
        case 0x2f02ccu: goto label_2f02cc;
        case 0x2f02d0u: goto label_2f02d0;
        case 0x2f02d4u: goto label_2f02d4;
        case 0x2f02d8u: goto label_2f02d8;
        case 0x2f02dcu: goto label_2f02dc;
        case 0x2f02e0u: goto label_2f02e0;
        case 0x2f02e4u: goto label_2f02e4;
        case 0x2f02e8u: goto label_2f02e8;
        case 0x2f02ecu: goto label_2f02ec;
        case 0x2f02f0u: goto label_2f02f0;
        case 0x2f02f4u: goto label_2f02f4;
        case 0x2f02f8u: goto label_2f02f8;
        case 0x2f02fcu: goto label_2f02fc;
        case 0x2f0300u: goto label_2f0300;
        case 0x2f0304u: goto label_2f0304;
        case 0x2f0308u: goto label_2f0308;
        case 0x2f030cu: goto label_2f030c;
        case 0x2f0310u: goto label_2f0310;
        case 0x2f0314u: goto label_2f0314;
        case 0x2f0318u: goto label_2f0318;
        case 0x2f031cu: goto label_2f031c;
        case 0x2f0320u: goto label_2f0320;
        case 0x2f0324u: goto label_2f0324;
        case 0x2f0328u: goto label_2f0328;
        case 0x2f032cu: goto label_2f032c;
        default: break;
    }

    ctx->pc = 0x2efc20u;

label_2efc20:
    // 0x2efc20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2efc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2efc24:
    // 0x2efc24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2efc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2efc28:
    // 0x2efc28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2efc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2efc2c:
    // 0x2efc2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2efc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2efc30:
    // 0x2efc30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2efc34:
    // 0x2efc34: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2efc34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2efc38:
    // 0x2efc38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2efc3c:
    // 0x2efc3c: 0xc04f26c  jal         func_13C9B0
label_2efc40:
    if (ctx->pc == 0x2EFC40u) {
        ctx->pc = 0x2EFC40u;
            // 0x2efc40: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2EFC44u;
        goto label_2efc44;
    }
    ctx->pc = 0x2EFC3Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC44u);
    ctx->pc = 0x2EFC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC3Cu;
            // 0x2efc40: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC44u; }
        if (ctx->pc != 0x2EFC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC44u; }
        if (ctx->pc != 0x2EFC44u) { return; }
    }
    ctx->pc = 0x2EFC44u;
label_2efc44:
    // 0x2efc44: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x2efc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2efc48:
    // 0x2efc48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2efc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2efc4c:
    // 0x2efc4c: 0x50600084  beql        $v1, $zero, . + 4 + (0x84 << 2)
label_2efc50:
    if (ctx->pc == 0x2EFC50u) {
        ctx->pc = 0x2EFC50u;
            // 0x2efc50: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->pc = 0x2EFC54u;
        goto label_2efc54;
    }
    ctx->pc = 0x2EFC4Cu;
    {
        const bool branch_taken_0x2efc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efc4c) {
            ctx->pc = 0x2EFC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC4Cu;
            // 0x2efc50: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFE60u;
            goto label_2efe60;
        }
    }
    ctx->pc = 0x2EFC54u;
label_2efc54:
    // 0x2efc54: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x2efc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2efc58:
    // 0x2efc58: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2efc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2efc5c:
    // 0x2efc5c: 0xc04cc70  jal         func_1331C0
label_2efc60:
    if (ctx->pc == 0x2EFC60u) {
        ctx->pc = 0x2EFC60u;
            // 0x2efc60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC64u;
        goto label_2efc64;
    }
    ctx->pc = 0x2EFC5Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC64u);
    ctx->pc = 0x2EFC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC5Cu;
            // 0x2efc60: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC64u; }
        if (ctx->pc != 0x2EFC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC64u; }
        if (ctx->pc != 0x2EFC64u) { return; }
    }
    ctx->pc = 0x2EFC64u;
label_2efc64:
    // 0x2efc64: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2efc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2efc68:
    // 0x2efc68: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x2efc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2efc6c:
    // 0x2efc6c: 0xc04cbe0  jal         func_132F80
label_2efc70:
    if (ctx->pc == 0x2EFC70u) {
        ctx->pc = 0x2EFC70u;
            // 0x2efc70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC74u;
        goto label_2efc74;
    }
    ctx->pc = 0x2EFC6Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC74u);
    ctx->pc = 0x2EFC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC6Cu;
            // 0x2efc70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC74u; }
        if (ctx->pc != 0x2EFC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC74u; }
        if (ctx->pc != 0x2EFC74u) { return; }
    }
    ctx->pc = 0x2EFC74u;
label_2efc74:
    // 0x2efc74: 0xc60c00e4  lwc1        $f12, 0xE4($s0)
    ctx->pc = 0x2efc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2efc78:
    // 0x2efc78: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2efc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2efc7c:
    // 0x2efc7c: 0xc04cc70  jal         func_1331C0
label_2efc80:
    if (ctx->pc == 0x2EFC80u) {
        ctx->pc = 0x2EFC80u;
            // 0x2efc80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC84u;
        goto label_2efc84;
    }
    ctx->pc = 0x2EFC7Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC84u);
    ctx->pc = 0x2EFC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC7Cu;
            // 0x2efc80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC84u; }
        if (ctx->pc != 0x2EFC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC84u; }
        if (ctx->pc != 0x2EFC84u) { return; }
    }
    ctx->pc = 0x2EFC84u;
label_2efc84:
    // 0x2efc84: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2efc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2efc88:
    // 0x2efc88: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x2efc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_2efc8c:
    // 0x2efc8c: 0xc04cbe0  jal         func_132F80
label_2efc90:
    if (ctx->pc == 0x2EFC90u) {
        ctx->pc = 0x2EFC90u;
            // 0x2efc90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC94u;
        goto label_2efc94;
    }
    ctx->pc = 0x2EFC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC94u);
    ctx->pc = 0x2EFC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFC8Cu;
            // 0x2efc90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC94u; }
        if (ctx->pc != 0x2EFC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFC94u; }
        if (ctx->pc != 0x2EFC94u) { return; }
    }
    ctx->pc = 0x2EFC94u;
label_2efc94:
    // 0x2efc94: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2efc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2efc98:
    // 0x2efc98: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2efc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2efc9c:
    // 0x2efc9c: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2efc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2efca0:
    // 0x2efca0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2efca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efca4:
    // 0x2efca4: 0x0  nop
    ctx->pc = 0x2efca4u;
    // NOP
label_2efca8:
    // 0x2efca8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2efcac:
    // 0x2efcac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efcacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efcb0:
    // 0x2efcb0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2efcb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2efcb4:
    // 0x2efcb4: 0xc04ce84  jal         func_133A10
label_2efcb8:
    if (ctx->pc == 0x2EFCB8u) {
        ctx->pc = 0x2EFCBCu;
        goto label_2efcbc;
    }
    ctx->pc = 0x2EFCB4u;
    SET_GPR_U32(ctx, 31, 0x2EFCBCu);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCBCu; }
        if (ctx->pc != 0x2EFCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCBCu; }
        if (ctx->pc != 0x2EFCBCu) { return; }
    }
    ctx->pc = 0x2EFCBCu;
label_2efcbc:
    // 0x2efcbc: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x2efcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2efcc0:
    // 0x2efcc0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2efcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2efcc4:
    // 0x2efcc4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2efcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2efcc8:
    // 0x2efcc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2efcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efccc:
    // 0x2efccc: 0x0  nop
    ctx->pc = 0x2efcccu;
    // NOP
label_2efcd0:
    // 0x2efcd0: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x2efcd0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2efcd4:
    // 0x2efcd4: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x2efcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2efcd8:
    // 0x2efcd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efcd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2efcdc:
    // 0x2efcdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efcdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efce0:
    // 0x2efce0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2efce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2efce4:
    // 0x2efce4: 0xc04ce84  jal         func_133A10
label_2efce8:
    if (ctx->pc == 0x2EFCE8u) {
        ctx->pc = 0x2EFCECu;
        goto label_2efcec;
    }
    ctx->pc = 0x2EFCE4u;
    SET_GPR_U32(ctx, 31, 0x2EFCECu);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCECu; }
        if (ctx->pc != 0x2EFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFCECu; }
        if (ctx->pc != 0x2EFCECu) { return; }
    }
    ctx->pc = 0x2EFCECu;
label_2efcec:
    // 0x2efcec: 0xc6020074  lwc1        $f2, 0x74($s0)
    ctx->pc = 0x2efcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2efcf0:
    // 0x2efcf0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2efcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2efcf4:
    // 0x2efcf4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2efcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2efcf8:
    // 0x2efcf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2efcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efcfc:
    // 0x2efcfc: 0x0  nop
    ctx->pc = 0x2efcfcu;
    // NOP
label_2efd00:
    // 0x2efd00: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x2efd00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2efd04:
    // 0x2efd04: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x2efd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2efd08:
    // 0x2efd08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2efd0c:
    // 0x2efd0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efd0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efd10:
    // 0x2efd10: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2efd10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2efd14:
    // 0x2efd14: 0xc04ce84  jal         func_133A10
label_2efd18:
    if (ctx->pc == 0x2EFD18u) {
        ctx->pc = 0x2EFD1Cu;
        goto label_2efd1c;
    }
    ctx->pc = 0x2EFD14u;
    SET_GPR_U32(ctx, 31, 0x2EFD1Cu);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD1Cu; }
        if (ctx->pc != 0x2EFD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD1Cu; }
        if (ctx->pc != 0x2EFD1Cu) { return; }
    }
    ctx->pc = 0x2EFD1Cu;
label_2efd1c:
    // 0x2efd1c: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x2efd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2efd20:
    // 0x2efd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efd24:
    // 0x2efd24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2efd24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2efd28:
    // 0x2efd28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efd2c:
    // 0x2efd2c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2efd2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2efd30:
    // 0x2efd30: 0xc04ce64  jal         func_133990
label_2efd34:
    if (ctx->pc == 0x2EFD34u) {
        ctx->pc = 0x2EFD34u;
            // 0x2efd34: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2EFD38u;
        goto label_2efd38;
    }
    ctx->pc = 0x2EFD30u;
    SET_GPR_U32(ctx, 31, 0x2EFD38u);
    ctx->pc = 0x2EFD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD30u;
            // 0x2efd34: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD38u; }
        if (ctx->pc != 0x2EFD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD38u; }
        if (ctx->pc != 0x2EFD38u) { return; }
    }
    ctx->pc = 0x2EFD38u;
label_2efd38:
    // 0x2efd38: 0xc60c00d0  lwc1        $f12, 0xD0($s0)
    ctx->pc = 0x2efd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2efd3c:
    // 0x2efd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efd40:
    // 0x2efd40: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x2efd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2efd44:
    // 0x2efd44: 0xc60e00d8  lwc1        $f14, 0xD8($s0)
    ctx->pc = 0x2efd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2efd48:
    // 0x2efd48: 0xc04ce64  jal         func_133990
label_2efd4c:
    if (ctx->pc == 0x2EFD4Cu) {
        ctx->pc = 0x2EFD4Cu;
            // 0x2efd4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD50u;
        goto label_2efd50;
    }
    ctx->pc = 0x2EFD48u;
    SET_GPR_U32(ctx, 31, 0x2EFD50u);
    ctx->pc = 0x2EFD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD48u;
            // 0x2efd4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD50u; }
        if (ctx->pc != 0x2EFD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD50u; }
        if (ctx->pc != 0x2EFD50u) { return; }
    }
    ctx->pc = 0x2EFD50u;
label_2efd50:
    // 0x2efd50: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2efd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2efd54:
    // 0x2efd54: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2efd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2efd58:
    // 0x2efd58: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x2efd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2efd5c:
    // 0x2efd5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2efd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efd60:
    // 0x2efd60: 0x0  nop
    ctx->pc = 0x2efd60u;
    // NOP
label_2efd64:
    // 0x2efd64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efd64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2efd68:
    // 0x2efd68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efd68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efd6c:
    // 0x2efd6c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2efd6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2efd70:
    // 0x2efd70: 0xc04ce84  jal         func_133A10
label_2efd74:
    if (ctx->pc == 0x2EFD74u) {
        ctx->pc = 0x2EFD78u;
        goto label_2efd78;
    }
    ctx->pc = 0x2EFD70u;
    SET_GPR_U32(ctx, 31, 0x2EFD78u);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD78u; }
        if (ctx->pc != 0x2EFD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD78u; }
        if (ctx->pc != 0x2EFD78u) { return; }
    }
    ctx->pc = 0x2EFD78u;
label_2efd78:
    // 0x2efd78: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2efd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2efd7c:
    // 0x2efd7c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2efd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2efd80:
    // 0x2efd80: 0xc60200a0  lwc1        $f2, 0xA0($s0)
    ctx->pc = 0x2efd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2efd84:
    // 0x2efd84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2efd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2efd88:
    // 0x2efd88: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x2efd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2efd8c:
    // 0x2efd8c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2efd8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2efd90:
    // 0x2efd90: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efd90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2efd94:
    // 0x2efd94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2efd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2efd98:
    // 0x2efd98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2efd98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2efd9c:
    // 0x2efd9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efd9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efda0:
    // 0x2efda0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2efda0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2efda4:
    // 0x2efda4: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x2efda4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_2efda8:
    // 0x2efda8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efda8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efdac:
    // 0x2efdac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2efdacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2efdb0:
    // 0x2efdb0: 0xc04ce84  jal         func_133A10
label_2efdb4:
    if (ctx->pc == 0x2EFDB4u) {
        ctx->pc = 0x2EFDB8u;
        goto label_2efdb8;
    }
    ctx->pc = 0x2EFDB0u;
    SET_GPR_U32(ctx, 31, 0x2EFDB8u);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDB8u; }
        if (ctx->pc != 0x2EFDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDB8u; }
        if (ctx->pc != 0x2EFDB8u) { return; }
    }
    ctx->pc = 0x2EFDB8u;
label_2efdb8:
    // 0x2efdb8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2efdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2efdbc:
    // 0x2efdbc: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2efdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2efdc0:
    // 0x2efdc0: 0xc60200a4  lwc1        $f2, 0xA4($s0)
    ctx->pc = 0x2efdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2efdc4:
    // 0x2efdc4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2efdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2efdc8:
    // 0x2efdc8: 0xc60100b8  lwc1        $f1, 0xB8($s0)
    ctx->pc = 0x2efdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2efdcc:
    // 0x2efdcc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2efdccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2efdd0:
    // 0x2efdd0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efdd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_2efdd4:
    // 0x2efdd4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2efdd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2efdd8:
    // 0x2efdd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2efdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2efddc:
    // 0x2efddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efde0:
    // 0x2efde0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2efde0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2efde4:
    // 0x2efde4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x2efde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_2efde8:
    // 0x2efde8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efde8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efdec:
    // 0x2efdec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2efdecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2efdf0:
    // 0x2efdf0: 0xc04ce84  jal         func_133A10
label_2efdf4:
    if (ctx->pc == 0x2EFDF4u) {
        ctx->pc = 0x2EFDF8u;
        goto label_2efdf8;
    }
    ctx->pc = 0x2EFDF0u;
    SET_GPR_U32(ctx, 31, 0x2EFDF8u);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDF8u; }
        if (ctx->pc != 0x2EFDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFDF8u; }
        if (ctx->pc != 0x2EFDF8u) { return; }
    }
    ctx->pc = 0x2EFDF8u;
label_2efdf8:
    // 0x2efdf8: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2efdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2efdfc:
    // 0x2efdfc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2efdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2efe00:
    // 0x2efe00: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2efe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2efe04:
    // 0x2efe04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2efe04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efe08:
    // 0x2efe08: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x2efe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2efe0c:
    // 0x2efe0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efe10:
    // 0x2efe10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2efe10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2efe14:
    // 0x2efe14: 0x0  nop
    ctx->pc = 0x2efe14u;
    // NOP
label_2efe18:
    // 0x2efe18: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2efe18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2efe1c:
    // 0x2efe1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efe1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2efe20:
    // 0x2efe20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2efe20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2efe24:
    // 0x2efe24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2efe24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2efe28:
    // 0x2efe28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efe28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2efe2c:
    // 0x2efe2c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2efe2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2efe30:
    // 0x2efe30: 0xc04ce30  jal         func_1338C0
label_2efe34:
    if (ctx->pc == 0x2EFE34u) {
        ctx->pc = 0x2EFE34u;
            // 0x2efe34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE38u;
        goto label_2efe38;
    }
    ctx->pc = 0x2EFE30u;
    SET_GPR_U32(ctx, 31, 0x2EFE38u);
    ctx->pc = 0x2EFE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE30u;
            // 0x2efe34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE38u; }
        if (ctx->pc != 0x2EFE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE38u; }
        if (ctx->pc != 0x2EFE38u) { return; }
    }
    ctx->pc = 0x2EFE38u;
label_2efe38:
    // 0x2efe38: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x2efe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2efe3c:
    // 0x2efe3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2efe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efe40:
    // 0x2efe40: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2efe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2efe44:
    // 0x2efe44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2efe44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2efe48:
    // 0x2efe48: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x2efe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2efe4c:
    // 0x2efe4c: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x2efe4cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
label_2efe50:
    // 0x2efe50: 0x46000b47  neg.s       $f13, $f1
    ctx->pc = 0x2efe50u;
    ctx->f[13] = FPU_NEG_S(ctx->f[1]);
label_2efe54:
    // 0x2efe54: 0xc04ce64  jal         func_133990
label_2efe58:
    if (ctx->pc == 0x2EFE58u) {
        ctx->pc = 0x2EFE58u;
            // 0x2efe58: 0x46000387  neg.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x2EFE5Cu;
        goto label_2efe5c;
    }
    ctx->pc = 0x2EFE54u;
    SET_GPR_U32(ctx, 31, 0x2EFE5Cu);
    ctx->pc = 0x2EFE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE54u;
            // 0x2efe58: 0x46000387  neg.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE5Cu; }
        if (ctx->pc != 0x2EFE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFE5Cu; }
        if (ctx->pc != 0x2EFE5Cu) { return; }
    }
    ctx->pc = 0x2EFE5Cu;
label_2efe5c:
    // 0x2efe5c: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x2efe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2efe60:
    // 0x2efe60: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2efe60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2efe64:
    // 0x2efe64: 0x5060004a  beql        $v1, $zero, . + 4 + (0x4A << 2)
label_2efe68:
    if (ctx->pc == 0x2EFE68u) {
        ctx->pc = 0x2EFE68u;
            // 0x2efe68: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->pc = 0x2EFE6Cu;
        goto label_2efe6c;
    }
    ctx->pc = 0x2EFE64u;
    {
        const bool branch_taken_0x2efe64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efe64) {
            ctx->pc = 0x2EFE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE64u;
            // 0x2efe68: 0x8e030100  lw          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFF90u;
            goto label_2eff90;
        }
    }
    ctx->pc = 0x2EFE6Cu;
label_2efe6c:
    // 0x2efe6c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2efe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2efe70:
    // 0x2efe70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2efe70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efe74:
    // 0x2efe74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2efe74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2efe78:
    // 0x2efe78: 0x0  nop
    ctx->pc = 0x2efe78u;
    // NOP
label_2efe7c:
    // 0x2efe7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2efe7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2efe80:
    // 0x2efe80: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2efe80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2efe84:
    // 0x2efe84: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_2efe88:
    if (ctx->pc == 0x2EFE88u) {
        ctx->pc = 0x2EFE88u;
            // 0x2efe88: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x2EFE8Cu;
        goto label_2efe8c;
    }
    ctx->pc = 0x2EFE84u;
    {
        const bool branch_taken_0x2efe84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efe84) {
            ctx->pc = 0x2EFE88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFE84u;
            // 0x2efe88: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFEB4u;
            goto label_2efeb4;
        }
    }
    ctx->pc = 0x2EFE8Cu;
label_2efe8c:
    // 0x2efe8c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2efe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2efe90:
    // 0x2efe90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2efe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2efe94:
    // 0x2efe94: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2efe94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_2efe98:
    // 0x2efe98: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2efe98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2efe9c:
    // 0x2efe9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2efe9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2efea0:
    // 0x2efea0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2efea4:
    if (ctx->pc == 0x2EFEA4u) {
        ctx->pc = 0x2EFEA8u;
        goto label_2efea8;
    }
    ctx->pc = 0x2EFEA0u;
    {
        const bool branch_taken_0x2efea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efea0) {
            ctx->pc = 0x2EFEB0u;
            goto label_2efeb0;
        }
    }
    ctx->pc = 0x2EFEA8u;
label_2efea8:
    // 0x2efea8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2efea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2efeac:
    // 0x2efeac: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2efeacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2efeb0:
    // 0x2efeb0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2efeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2efeb4:
    // 0x2efeb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2efeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efeb8:
    // 0x2efeb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2efeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2efebc:
    // 0x2efebc: 0x0  nop
    ctx->pc = 0x2efebcu;
    // NOP
label_2efec0:
    // 0x2efec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2efec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2efec4:
    // 0x2efec4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2efec4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2efec8:
    // 0x2efec8: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_2efecc:
    if (ctx->pc == 0x2EFECCu) {
        ctx->pc = 0x2EFECCu;
            // 0x2efecc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x2EFED0u;
        goto label_2efed0;
    }
    ctx->pc = 0x2EFEC8u;
    {
        const bool branch_taken_0x2efec8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efec8) {
            ctx->pc = 0x2EFECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFEC8u;
            // 0x2efecc: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFEF8u;
            goto label_2efef8;
        }
    }
    ctx->pc = 0x2EFED0u;
label_2efed0:
    // 0x2efed0: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x2efed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2efed4:
    // 0x2efed4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2efed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2efed8:
    // 0x2efed8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2efed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_2efedc:
    // 0x2efedc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2efedcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2efee0:
    // 0x2efee0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2efee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2efee4:
    // 0x2efee4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2efee8:
    if (ctx->pc == 0x2EFEE8u) {
        ctx->pc = 0x2EFEECu;
        goto label_2efeec;
    }
    ctx->pc = 0x2EFEE4u;
    {
        const bool branch_taken_0x2efee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efee4) {
            ctx->pc = 0x2EFEF4u;
            goto label_2efef4;
        }
    }
    ctx->pc = 0x2EFEECu;
label_2efeec:
    // 0x2efeec: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2efeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2efef0:
    // 0x2efef0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2efef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2efef4:
    // 0x2efef4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2efef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2efef8:
    // 0x2efef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2efef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2efefc:
    // 0x2efefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2efefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2eff00:
    // 0x2eff00: 0x0  nop
    ctx->pc = 0x2eff00u;
    // NOP
label_2eff04:
    // 0x2eff04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eff04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2eff08:
    // 0x2eff08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2eff08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2eff0c:
    // 0x2eff0c: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_2eff10:
    if (ctx->pc == 0x2EFF10u) {
        ctx->pc = 0x2EFF10u;
            // 0x2eff10: 0xc60c0060  lwc1        $f12, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2EFF14u;
        goto label_2eff14;
    }
    ctx->pc = 0x2EFF0Cu;
    {
        const bool branch_taken_0x2eff0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eff0c) {
            ctx->pc = 0x2EFF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF0Cu;
            // 0x2eff10: 0xc60c0060  lwc1        $f12, 0x60($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFF3Cu;
            goto label_2eff3c;
        }
    }
    ctx->pc = 0x2EFF14u;
label_2eff14:
    // 0x2eff14: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2eff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2eff18:
    // 0x2eff18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2eff1c:
    // 0x2eff1c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2eff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2eff20:
    // 0x2eff20: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2eff20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2eff24:
    // 0x2eff24: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2eff24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2eff28:
    // 0x2eff28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2eff2c:
    if (ctx->pc == 0x2EFF2Cu) {
        ctx->pc = 0x2EFF30u;
        goto label_2eff30;
    }
    ctx->pc = 0x2EFF28u;
    {
        const bool branch_taken_0x2eff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eff28) {
            ctx->pc = 0x2EFF38u;
            goto label_2eff38;
        }
    }
    ctx->pc = 0x2EFF30u;
label_2eff30:
    // 0x2eff30: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2eff30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2eff34:
    // 0x2eff34: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2eff34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2eff38:
    // 0x2eff38: 0xc60c0060  lwc1        $f12, 0x60($s0)
    ctx->pc = 0x2eff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2eff3c:
    // 0x2eff3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eff3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eff40:
    // 0x2eff40: 0xc60d0064  lwc1        $f13, 0x64($s0)
    ctx->pc = 0x2eff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2eff44:
    // 0x2eff44: 0xc60e0068  lwc1        $f14, 0x68($s0)
    ctx->pc = 0x2eff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2eff48:
    // 0x2eff48: 0xc04ce64  jal         func_133990
label_2eff4c:
    if (ctx->pc == 0x2EFF4Cu) {
        ctx->pc = 0x2EFF4Cu;
            // 0x2eff4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF50u;
        goto label_2eff50;
    }
    ctx->pc = 0x2EFF48u;
    SET_GPR_U32(ctx, 31, 0x2EFF50u);
    ctx->pc = 0x2EFF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF48u;
            // 0x2eff4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF50u; }
        if (ctx->pc != 0x2EFF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF50u; }
        if (ctx->pc != 0x2EFF50u) { return; }
    }
    ctx->pc = 0x2EFF50u;
label_2eff50:
    // 0x2eff50: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x2eff50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2eff54:
    // 0x2eff54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eff58:
    // 0x2eff58: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x2eff58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2eff5c:
    // 0x2eff5c: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x2eff5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2eff60:
    // 0x2eff60: 0xc04ce10  jal         func_133840
label_2eff64:
    if (ctx->pc == 0x2EFF64u) {
        ctx->pc = 0x2EFF64u;
            // 0x2eff64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF68u;
        goto label_2eff68;
    }
    ctx->pc = 0x2EFF60u;
    SET_GPR_U32(ctx, 31, 0x2EFF68u);
    ctx->pc = 0x2EFF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF60u;
            // 0x2eff64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133840u;
    if (runtime->hasFunction(0x133840u)) {
        auto targetFn = runtime->lookupFunction(0x133840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF68u; }
        if (ctx->pc != 0x2EFF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133840_0x133840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF68u; }
        if (ctx->pc != 0x2EFF68u) { return; }
    }
    ctx->pc = 0x2EFF68u;
label_2eff68:
    // 0x2eff68: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x2eff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2eff6c:
    // 0x2eff6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eff70:
    // 0x2eff70: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x2eff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2eff74:
    // 0x2eff74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eff78:
    // 0x2eff78: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2eff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eff7c:
    // 0x2eff7c: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x2eff7cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
label_2eff80:
    // 0x2eff80: 0x46000b47  neg.s       $f13, $f1
    ctx->pc = 0x2eff80u;
    ctx->f[13] = FPU_NEG_S(ctx->f[1]);
label_2eff84:
    // 0x2eff84: 0xc04ce64  jal         func_133990
label_2eff88:
    if (ctx->pc == 0x2EFF88u) {
        ctx->pc = 0x2EFF88u;
            // 0x2eff88: 0x46000387  neg.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x2EFF8Cu;
        goto label_2eff8c;
    }
    ctx->pc = 0x2EFF84u;
    SET_GPR_U32(ctx, 31, 0x2EFF8Cu);
    ctx->pc = 0x2EFF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF84u;
            // 0x2eff88: 0x46000387  neg.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF8Cu; }
        if (ctx->pc != 0x2EFF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFF8Cu; }
        if (ctx->pc != 0x2EFF8Cu) { return; }
    }
    ctx->pc = 0x2EFF8Cu;
label_2eff8c:
    // 0x2eff8c: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x2eff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2eff90:
    // 0x2eff90: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2eff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2eff94:
    // 0x2eff94: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_2eff98:
    if (ctx->pc == 0x2EFF98u) {
        ctx->pc = 0x2EFF98u;
            // 0x2eff98: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2EFF9Cu;
        goto label_2eff9c;
    }
    ctx->pc = 0x2EFF94u;
    {
        const bool branch_taken_0x2eff94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff94) {
            ctx->pc = 0x2EFF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFF94u;
            // 0x2eff98: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFF0u;
            goto label_2efff0;
        }
    }
    ctx->pc = 0x2EFF9Cu;
label_2eff9c:
    // 0x2eff9c: 0xc60c00f0  lwc1        $f12, 0xF0($s0)
    ctx->pc = 0x2eff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2effa0:
    // 0x2effa0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2effa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2effa4:
    // 0x2effa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2effa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2effa8:
    // 0x2effa8: 0x0  nop
    ctx->pc = 0x2effa8u;
    // NOP
label_2effac:
    // 0x2effac: 0x460c0832  c.eq.s      $f1, $f12
    ctx->pc = 0x2effacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2effb0:
    // 0x2effb0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_2effb4:
    if (ctx->pc == 0x2EFFB4u) {
        ctx->pc = 0x2EFFB4u;
            // 0x2effb4: 0xc60d00f4  lwc1        $f13, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x2EFFB8u;
        goto label_2effb8;
    }
    ctx->pc = 0x2EFFB0u;
    {
        const bool branch_taken_0x2effb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2effb0) {
            ctx->pc = 0x2EFFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFFB0u;
            // 0x2effb4: 0xc60d00f4  lwc1        $f13, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFFDCu;
            goto label_2effdc;
        }
    }
    ctx->pc = 0x2EFFB8u;
label_2effb8:
    // 0x2effb8: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x2effb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2effbc:
    // 0x2effbc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2effbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2effc0:
    // 0x2effc0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2effc4:
    if (ctx->pc == 0x2EFFC4u) {
        ctx->pc = 0x2EFFC8u;
        goto label_2effc8;
    }
    ctx->pc = 0x2EFFC0u;
    {
        const bool branch_taken_0x2effc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2effc0) {
            ctx->pc = 0x2EFFD8u;
            goto label_2effd8;
        }
    }
    ctx->pc = 0x2EFFC8u;
label_2effc8:
    // 0x2effc8: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x2effc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2effcc:
    // 0x2effcc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2effccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2effd0:
    // 0x2effd0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2effd4:
    if (ctx->pc == 0x2EFFD4u) {
        ctx->pc = 0x2EFFD8u;
        goto label_2effd8;
    }
    ctx->pc = 0x2EFFD0u;
    {
        const bool branch_taken_0x2effd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2effd0) {
            ctx->pc = 0x2EFFECu;
            goto label_2effec;
        }
    }
    ctx->pc = 0x2EFFD8u;
label_2effd8:
    // 0x2effd8: 0xc60d00f4  lwc1        $f13, 0xF4($s0)
    ctx->pc = 0x2effd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2effdc:
    // 0x2effdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2effdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2effe0:
    // 0x2effe0: 0xc60e00f8  lwc1        $f14, 0xF8($s0)
    ctx->pc = 0x2effe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2effe4:
    // 0x2effe4: 0xc04ce50  jal         func_133940
label_2effe8:
    if (ctx->pc == 0x2EFFE8u) {
        ctx->pc = 0x2EFFE8u;
            // 0x2effe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFECu;
        goto label_2effec;
    }
    ctx->pc = 0x2EFFE4u;
    SET_GPR_U32(ctx, 31, 0x2EFFECu);
    ctx->pc = 0x2EFFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFFE4u;
            // 0x2effe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFECu; }
        if (ctx->pc != 0x2EFFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFFECu; }
        if (ctx->pc != 0x2EFFECu) { return; }
    }
    ctx->pc = 0x2EFFECu;
label_2effec:
    // 0x2effec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2effecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2efff0:
    // 0x2efff0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2efff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2efff4:
    // 0x2efff4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2efff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2efff8:
    // 0x2efff8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2efff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2efffc:
    // 0x2efffc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2efffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0000:
    // 0x2f0000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f0000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0004:
    // 0x2f0004: 0x3e00008  jr          $ra
label_2f0008:
    if (ctx->pc == 0x2F0008u) {
        ctx->pc = 0x2F0008u;
            // 0x2f0008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2F000Cu;
        goto label_2f000c;
    }
    ctx->pc = 0x2F0004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0004u;
            // 0x2f0008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F000Cu;
label_2f000c:
    // 0x2f000c: 0x0  nop
    ctx->pc = 0x2f000cu;
    // NOP
label_2f0010:
    // 0x2f0010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f0014:
    // 0x2f0014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f0018:
    // 0x2f0018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f001c:
    // 0x2f001c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f0020:
    // 0x2f0020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0024:
    // 0x2f0024: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2f0028:
    if (ctx->pc == 0x2F0028u) {
        ctx->pc = 0x2F0028u;
            // 0x2f0028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F002Cu;
        goto label_2f002c;
    }
    ctx->pc = 0x2F0024u;
    {
        const bool branch_taken_0x2f0024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0024u;
            // 0x2f0028: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0024) {
            ctx->pc = 0x2F0068u;
            goto label_2f0068;
        }
    }
    ctx->pc = 0x2F002Cu;
label_2f002c:
    // 0x2f002c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f002cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f0030:
    // 0x2f0030: 0x244231c0  addiu       $v0, $v0, 0x31C0
    ctx->pc = 0x2f0030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12736));
label_2f0034:
    // 0x2f0034: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2f0038:
    if (ctx->pc == 0x2F0038u) {
        ctx->pc = 0x2F0038u;
            // 0x2f0038: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F003Cu;
        goto label_2f003c;
    }
    ctx->pc = 0x2F0034u;
    {
        const bool branch_taken_0x2f0034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0034u;
            // 0x2f0038: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0034) {
            ctx->pc = 0x2F0050u;
            goto label_2f0050;
        }
    }
    ctx->pc = 0x2F003Cu;
label_2f003c:
    // 0x2f003c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2f003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2f0040:
    // 0x2f0040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0044:
    // 0x2f0044: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2f0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2f0048:
    // 0x2f0048: 0xc057a68  jal         func_15E9A0
label_2f004c:
    if (ctx->pc == 0x2F004Cu) {
        ctx->pc = 0x2F004Cu;
            // 0x2f004c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2F0050u;
        goto label_2f0050;
    }
    ctx->pc = 0x2F0048u;
    SET_GPR_U32(ctx, 31, 0x2F0050u);
    ctx->pc = 0x2F004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0048u;
            // 0x2f004c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0050u; }
        if (ctx->pc != 0x2F0050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0050u; }
        if (ctx->pc != 0x2F0050u) { return; }
    }
    ctx->pc = 0x2F0050u;
label_2f0050:
    // 0x2f0050: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2f0050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2f0054:
    // 0x2f0054: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2f0054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2f0058:
    // 0x2f0058: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2f005c:
    if (ctx->pc == 0x2F005Cu) {
        ctx->pc = 0x2F005Cu;
            // 0x2f005c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0060u;
        goto label_2f0060;
    }
    ctx->pc = 0x2F0058u;
    {
        const bool branch_taken_0x2f0058 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f0058) {
            ctx->pc = 0x2F005Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0058u;
            // 0x2f005c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F006Cu;
            goto label_2f006c;
        }
    }
    ctx->pc = 0x2F0060u;
label_2f0060:
    // 0x2f0060: 0xc0400a8  jal         func_1002A0
label_2f0064:
    if (ctx->pc == 0x2F0064u) {
        ctx->pc = 0x2F0064u;
            // 0x2f0064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0068u;
        goto label_2f0068;
    }
    ctx->pc = 0x2F0060u;
    SET_GPR_U32(ctx, 31, 0x2F0068u);
    ctx->pc = 0x2F0064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0060u;
            // 0x2f0064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0068u; }
        if (ctx->pc != 0x2F0068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0068u; }
        if (ctx->pc != 0x2F0068u) { return; }
    }
    ctx->pc = 0x2F0068u;
label_2f0068:
    // 0x2f0068: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f0068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f006c:
    // 0x2f006c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f006cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0070:
    // 0x2f0070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0074:
    // 0x2f0074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0078:
    // 0x2f0078: 0x3e00008  jr          $ra
label_2f007c:
    if (ctx->pc == 0x2F007Cu) {
        ctx->pc = 0x2F007Cu;
            // 0x2f007c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2F0080u;
        goto label_2f0080;
    }
    ctx->pc = 0x2F0078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0078u;
            // 0x2f007c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0080u;
label_2f0080:
    // 0x2f0080: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f0080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2f0084:
    // 0x2f0084: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2f0084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_2f0088:
    // 0x2f0088: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f0088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f008c:
    // 0x2f008c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f0090:
    // 0x2f0090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f0090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f0094:
    // 0x2f0094: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f0094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0098:
    // 0x2f0098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f009c:
    // 0x2f009c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f00a0:
    // 0x2f00a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f00a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f00a4:
    // 0x2f00a4: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x2f00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_2f00a8:
    // 0x2f00a8: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x2f00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2f00ac:
    // 0x2f00ac: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2f00acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_2f00b0:
    // 0x2f00b0: 0x5483006f  bnel        $a0, $v1, . + 4 + (0x6F << 2)
label_2f00b4:
    if (ctx->pc == 0x2F00B4u) {
        ctx->pc = 0x2F00B4u;
            // 0x2f00b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2F00B8u;
        goto label_2f00b8;
    }
    ctx->pc = 0x2F00B0u;
    {
        const bool branch_taken_0x2f00b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f00b0) {
            ctx->pc = 0x2F00B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00B0u;
            // 0x2f00b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0270u;
            goto label_2f0270;
        }
    }
    ctx->pc = 0x2F00B8u;
label_2f00b8:
    // 0x2f00b8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2f00b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f00bc:
    // 0x2f00bc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f00c0:
    // 0x2f00c0: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x2f00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_2f00c4:
    // 0x2f00c4: 0x8e84005c  lw          $a0, 0x5C($s4)
    ctx->pc = 0x2f00c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_2f00c8:
    // 0x2f00c8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2f00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2f00cc:
    // 0x2f00cc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f00d0:
    // 0x2f00d0: 0x8c910550  lw          $s1, 0x550($a0)
    ctx->pc = 0x2f00d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2f00d4:
    // 0x2f00d4: 0x8c830d6c  lw          $v1, 0xD6C($a0)
    ctx->pc = 0x2f00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_2f00d8:
    // 0x2f00d8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2f00d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2f00dc:
    // 0x2f00dc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2f00dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f00e0:
    // 0x2f00e0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f00e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f00e4:
    // 0x2f00e4: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x2f00e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_2f00e8:
    // 0x2f00e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2f00ec:
    if (ctx->pc == 0x2F00ECu) {
        ctx->pc = 0x2F00ECu;
            // 0x2f00ec: 0x24b30010  addiu       $s3, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x2F00F0u;
        goto label_2f00f0;
    }
    ctx->pc = 0x2F00E8u;
    {
        const bool branch_taken_0x2f00e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F00ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00E8u;
            // 0x2f00ec: 0x24b30010  addiu       $s3, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00e8) {
            ctx->pc = 0x2F0100u;
            goto label_2f0100;
        }
    }
    ctx->pc = 0x2F00F0u;
label_2f00f0:
    // 0x2f00f0: 0xc04e738  jal         func_139CE0
label_2f00f4:
    if (ctx->pc == 0x2F00F4u) {
        ctx->pc = 0x2F00F4u;
            // 0x2f00f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2F00F8u;
        goto label_2f00f8;
    }
    ctx->pc = 0x2F00F0u;
    SET_GPR_U32(ctx, 31, 0x2F00F8u);
    ctx->pc = 0x2F00F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F00F0u;
            // 0x2f00f4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F00F8u; }
        if (ctx->pc != 0x2F00F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F00F8u; }
        if (ctx->pc != 0x2F00F8u) { return; }
    }
    ctx->pc = 0x2F00F8u;
label_2f00f8:
    // 0x2f00f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2f00fc:
    if (ctx->pc == 0x2F00FCu) {
        ctx->pc = 0x2F0100u;
        goto label_2f0100;
    }
    ctx->pc = 0x2F00F8u;
    {
        const bool branch_taken_0x2f00f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f00f8) {
            ctx->pc = 0x2F0128u;
            goto label_2f0128;
        }
    }
    ctx->pc = 0x2F0100u;
label_2f0100:
    // 0x2f0100: 0x8c8211d4  lw          $v0, 0x11D4($a0)
    ctx->pc = 0x2f0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4564)));
label_2f0104:
    // 0x2f0104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f0108:
    if (ctx->pc == 0x2F0108u) {
        ctx->pc = 0x2F010Cu;
        goto label_2f010c;
    }
    ctx->pc = 0x2F0104u;
    {
        const bool branch_taken_0x2f0104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0104) {
            ctx->pc = 0x2F011Cu;
            goto label_2f011c;
        }
    }
    ctx->pc = 0x2F010Cu;
label_2f010c:
    // 0x2f010c: 0xc04e738  jal         func_139CE0
label_2f0110:
    if (ctx->pc == 0x2F0110u) {
        ctx->pc = 0x2F0110u;
            // 0x2f0110: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2F0114u;
        goto label_2f0114;
    }
    ctx->pc = 0x2F010Cu;
    SET_GPR_U32(ctx, 31, 0x2F0114u);
    ctx->pc = 0x2F0110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F010Cu;
            // 0x2f0110: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0114u; }
        if (ctx->pc != 0x2F0114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0114u; }
        if (ctx->pc != 0x2F0114u) { return; }
    }
    ctx->pc = 0x2F0114u;
label_2f0114:
    // 0x2f0114: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f0118:
    if (ctx->pc == 0x2F0118u) {
        ctx->pc = 0x2F011Cu;
        goto label_2f011c;
    }
    ctx->pc = 0x2F0114u;
    {
        const bool branch_taken_0x2f0114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0114) {
            ctx->pc = 0x2F0128u;
            goto label_2f0128;
        }
    }
    ctx->pc = 0x2F011Cu;
label_2f011c:
    // 0x2f011c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f0120:
    // 0x2f0120: 0xc04e738  jal         func_139CE0
label_2f0124:
    if (ctx->pc == 0x2F0124u) {
        ctx->pc = 0x2F0124u;
            // 0x2f0124: 0x8c44f2b4  lw          $a0, -0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963892)));
        ctx->pc = 0x2F0128u;
        goto label_2f0128;
    }
    ctx->pc = 0x2F0120u;
    SET_GPR_U32(ctx, 31, 0x2F0128u);
    ctx->pc = 0x2F0124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0120u;
            // 0x2f0124: 0x8c44f2b4  lw          $a0, -0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0128u; }
        if (ctx->pc != 0x2F0128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0128u; }
        if (ctx->pc != 0x2F0128u) { return; }
    }
    ctx->pc = 0x2F0128u;
label_2f0128:
    // 0x2f0128: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f012c:
    // 0x2f012c: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x2f012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_2f0130:
    // 0x2f0130: 0x8c52e418  lw          $s2, -0x1BE8($v0)
    ctx->pc = 0x2f0130u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960152)));
label_2f0134:
    // 0x2f0134: 0x906511a5  lbu         $a1, 0x11A5($v1)
    ctx->pc = 0x2f0134u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4517)));
label_2f0138:
    // 0x2f0138: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f0138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f013c:
    // 0x2f013c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f013cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f0140:
    // 0x2f0140: 0x320f809  jalr        $t9
label_2f0144:
    if (ctx->pc == 0x2F0144u) {
        ctx->pc = 0x2F0144u;
            // 0x2f0144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0148u;
        goto label_2f0148;
    }
    ctx->pc = 0x2F0140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F0148u);
        ctx->pc = 0x2F0144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0140u;
            // 0x2f0144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F0148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F0148u; }
            if (ctx->pc != 0x2F0148u) { return; }
        }
        }
    }
    ctx->pc = 0x2F0148u;
label_2f0148:
    // 0x2f0148: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f0148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f014c:
    // 0x2f014c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2f014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2f0150:
    // 0x2f0150: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2f0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2f0154:
    // 0x2f0154: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f0154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f0158:
    // 0x2f0158: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_2f015c:
    if (ctx->pc == 0x2F015Cu) {
        ctx->pc = 0x2F015Cu;
            // 0x2f015c: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x2F0160u;
        goto label_2f0160;
    }
    ctx->pc = 0x2F0158u;
    {
        const bool branch_taken_0x2f0158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0158) {
            ctx->pc = 0x2F015Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0158u;
            // 0x2f015c: 0x8e83005c  lw          $v1, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F01E8u;
            goto label_2f01e8;
        }
    }
    ctx->pc = 0x2F0160u;
label_2f0160:
    // 0x2f0160: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x2f0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_2f0164:
    // 0x2f0164: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2f0168:
    // 0x2f0168: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x2f0168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f016c:
    // 0x2f016c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2f016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f0170:
    // 0x2f0170: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0174:
    // 0x2f0174: 0x90620e3d  lbu         $v0, 0xE3D($v1)
    ctx->pc = 0x2f0174u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3645)));
label_2f0178:
    // 0x2f0178: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f0178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f017c:
    // 0x2f017c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f017cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f0180:
    // 0x2f0180: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2f0180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2f0184:
    // 0x2f0184: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f0188:
    // 0x2f0188: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x2f0188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2f018c:
    // 0x2f018c: 0xc04ce64  jal         func_133990
label_2f0190:
    if (ctx->pc == 0x2F0190u) {
        ctx->pc = 0x2F0190u;
            // 0x2f0190: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2F0194u;
        goto label_2f0194;
    }
    ctx->pc = 0x2F018Cu;
    SET_GPR_U32(ctx, 31, 0x2F0194u);
    ctx->pc = 0x2F0190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F018Cu;
            // 0x2f0190: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0194u; }
        if (ctx->pc != 0x2F0194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0194u; }
        if (ctx->pc != 0x2F0194u) { return; }
    }
    ctx->pc = 0x2F0194u;
label_2f0194:
    // 0x2f0194: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f0194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0198:
    // 0x2f0198: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f019c:
    // 0x2f019c: 0xc04cd60  jal         func_133580
label_2f01a0:
    if (ctx->pc == 0x2F01A0u) {
        ctx->pc = 0x2F01A0u;
            // 0x2f01a0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2F01A4u;
        goto label_2f01a4;
    }
    ctx->pc = 0x2F019Cu;
    SET_GPR_U32(ctx, 31, 0x2F01A4u);
    ctx->pc = 0x2F01A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F019Cu;
            // 0x2f01a0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01A4u; }
        if (ctx->pc != 0x2F01A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01A4u; }
        if (ctx->pc != 0x2F01A4u) { return; }
    }
    ctx->pc = 0x2F01A4u;
label_2f01a4:
    // 0x2f01a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f01a8:
    // 0x2f01a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f01ac:
    // 0x2f01ac: 0x8c44e370  lw          $a0, -0x1C90($v0)
    ctx->pc = 0x2f01acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_2f01b0:
    // 0x2f01b0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2f01b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f01b4:
    // 0x2f01b4: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x2f01b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f01b8:
    // 0x2f01b8: 0xc04e4cc  jal         func_139330
label_2f01bc:
    if (ctx->pc == 0x2F01BCu) {
        ctx->pc = 0x2F01BCu;
            // 0x2f01bc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F01C0u;
        goto label_2f01c0;
    }
    ctx->pc = 0x2F01B8u;
    SET_GPR_U32(ctx, 31, 0x2F01C0u);
    ctx->pc = 0x2F01BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01B8u;
            // 0x2f01bc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01C0u; }
        if (ctx->pc != 0x2F01C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01C0u; }
        if (ctx->pc != 0x2F01C0u) { return; }
    }
    ctx->pc = 0x2F01C0u;
label_2f01c0:
    // 0x2f01c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f01c4:
    // 0x2f01c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f01c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f01c8:
    // 0x2f01c8: 0x8c45e370  lw          $a1, -0x1C90($v0)
    ctx->pc = 0x2f01c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_2f01cc:
    // 0x2f01cc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2f01ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_2f01d0:
    // 0x2f01d0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2f01d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2f01d4:
    // 0x2f01d4: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x2f01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_2f01d8:
    // 0x2f01d8: 0xc0538d8  jal         func_14E360
label_2f01dc:
    if (ctx->pc == 0x2F01DCu) {
        ctx->pc = 0x2F01DCu;
            // 0x2f01dc: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x2F01E0u;
        goto label_2f01e0;
    }
    ctx->pc = 0x2F01D8u;
    SET_GPR_U32(ctx, 31, 0x2F01E0u);
    ctx->pc = 0x2F01DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01D8u;
            // 0x2f01dc: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01E0u; }
        if (ctx->pc != 0x2F01E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F01E0u; }
        if (ctx->pc != 0x2F01E0u) { return; }
    }
    ctx->pc = 0x2F01E0u;
label_2f01e0:
    // 0x2f01e0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2f01e4:
    if (ctx->pc == 0x2F01E4u) {
        ctx->pc = 0x2F01E4u;
            // 0x2f01e4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2F01E8u;
        goto label_2f01e8;
    }
    ctx->pc = 0x2F01E0u;
    {
        const bool branch_taken_0x2f01e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F01E0u;
            // 0x2f01e4: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01e0) {
            ctx->pc = 0x2F025Cu;
            goto label_2f025c;
        }
    }
    ctx->pc = 0x2F01E8u;
label_2f01e8:
    // 0x2f01e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f01e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f01ec:
    // 0x2f01ec: 0xc68d0054  lwc1        $f13, 0x54($s4)
    ctx->pc = 0x2f01ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f01f0:
    // 0x2f01f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2f01f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f01f4:
    // 0x2f01f4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2f01f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2f01f8:
    // 0x2f01f8: 0x90620e3d  lbu         $v0, 0xE3D($v1)
    ctx->pc = 0x2f01f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3645)));
label_2f01fc:
    // 0x2f01fc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2f01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2f0200:
    // 0x2f0200: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f0200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f0204:
    // 0x2f0204: 0xc04ce64  jal         func_133990
label_2f0208:
    if (ctx->pc == 0x2F0208u) {
        ctx->pc = 0x2F0208u;
            // 0x2f0208: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x2F020Cu;
        goto label_2f020c;
    }
    ctx->pc = 0x2F0204u;
    SET_GPR_U32(ctx, 31, 0x2F020Cu);
    ctx->pc = 0x2F0208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0204u;
            // 0x2f0208: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F020Cu; }
        if (ctx->pc != 0x2F020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F020Cu; }
        if (ctx->pc != 0x2F020Cu) { return; }
    }
    ctx->pc = 0x2F020Cu;
label_2f020c:
    // 0x2f020c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f0210:
    // 0x2f0210: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f0210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f0214:
    // 0x2f0214: 0xc04cd60  jal         func_133580
label_2f0218:
    if (ctx->pc == 0x2F0218u) {
        ctx->pc = 0x2F0218u;
            // 0x2f0218: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2F021Cu;
        goto label_2f021c;
    }
    ctx->pc = 0x2F0214u;
    SET_GPR_U32(ctx, 31, 0x2F021Cu);
    ctx->pc = 0x2F0218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0214u;
            // 0x2f0218: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F021Cu; }
        if (ctx->pc != 0x2F021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F021Cu; }
        if (ctx->pc != 0x2F021Cu) { return; }
    }
    ctx->pc = 0x2F021Cu;
label_2f021c:
    // 0x2f021c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f0220:
    // 0x2f0220: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f0220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f0224:
    // 0x2f0224: 0x8c44e370  lw          $a0, -0x1C90($v0)
    ctx->pc = 0x2f0224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_2f0228:
    // 0x2f0228: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2f0228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f022c:
    // 0x2f022c: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x2f022cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2f0230:
    // 0x2f0230: 0xc04e4cc  jal         func_139330
label_2f0234:
    if (ctx->pc == 0x2F0234u) {
        ctx->pc = 0x2F0234u;
            // 0x2f0234: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F0238u;
        goto label_2f0238;
    }
    ctx->pc = 0x2F0230u;
    SET_GPR_U32(ctx, 31, 0x2F0238u);
    ctx->pc = 0x2F0234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0230u;
            // 0x2f0234: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0238u; }
        if (ctx->pc != 0x2F0238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0238u; }
        if (ctx->pc != 0x2F0238u) { return; }
    }
    ctx->pc = 0x2F0238u;
label_2f0238:
    // 0x2f0238: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f023c:
    // 0x2f023c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f023cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f0240:
    // 0x2f0240: 0x8c45e370  lw          $a1, -0x1C90($v0)
    ctx->pc = 0x2f0240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_2f0244:
    // 0x2f0244: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2f0244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_2f0248:
    // 0x2f0248: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2f0248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2f024c:
    // 0x2f024c: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x2f024cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_2f0250:
    // 0x2f0250: 0xc0538d8  jal         func_14E360
label_2f0254:
    if (ctx->pc == 0x2F0254u) {
        ctx->pc = 0x2F0254u;
            // 0x2f0254: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x2F0258u;
        goto label_2f0258;
    }
    ctx->pc = 0x2F0250u;
    SET_GPR_U32(ctx, 31, 0x2F0258u);
    ctx->pc = 0x2F0254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0250u;
            // 0x2f0254: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0258u; }
        if (ctx->pc != 0x2F0258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0258u; }
        if (ctx->pc != 0x2F0258u) { return; }
    }
    ctx->pc = 0x2F0258u;
label_2f0258:
    // 0x2f0258: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f0258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f025c:
    // 0x2f025c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0260:
    // 0x2f0260: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f0260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f0264:
    // 0x2f0264: 0x320f809  jalr        $t9
label_2f0268:
    if (ctx->pc == 0x2F0268u) {
        ctx->pc = 0x2F0268u;
            // 0x2f0268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F026Cu;
        goto label_2f026c;
    }
    ctx->pc = 0x2F0264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F026Cu);
        ctx->pc = 0x2F0268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0264u;
            // 0x2f0268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F026Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F026Cu; }
            if (ctx->pc != 0x2F026Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F026Cu;
label_2f026c:
    // 0x2f026c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f026cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0270:
    // 0x2f0270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f0270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0274:
    // 0x2f0274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f0274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0278:
    // 0x2f0278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f027c:
    // 0x2f027c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f027cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0280:
    // 0x2f0280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0284:
    // 0x2f0284: 0x3e00008  jr          $ra
label_2f0288:
    if (ctx->pc == 0x2F0288u) {
        ctx->pc = 0x2F0288u;
            // 0x2f0288: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2F028Cu;
        goto label_2f028c;
    }
    ctx->pc = 0x2F0284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0284u;
            // 0x2f0288: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F028Cu;
label_2f028c:
    // 0x2f028c: 0x0  nop
    ctx->pc = 0x2f028cu;
    // NOP
label_2f0290:
    // 0x2f0290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f0294:
    // 0x2f0294: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2f0294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
label_2f0298:
    // 0x2f0298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f029c:
    // 0x2f029c: 0x34425604  ori         $v0, $v0, 0x5604
    ctx->pc = 0x2f029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22020);
label_2f02a0:
    // 0x2f02a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f02a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f02a4:
    // 0x2f02a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f02a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f02a8:
    // 0x2f02a8: 0xc4820054  lwc1        $f2, 0x54($a0)
    ctx->pc = 0x2f02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f02ac:
    // 0x2f02ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f02acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f02b0:
    // 0x2f02b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f02b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f02b4:
    // 0x2f02b4: 0x0  nop
    ctx->pc = 0x2f02b4u;
    // NOP
label_2f02b8:
    // 0x2f02b8: 0x46000018  adda.s      $f0, $f0
    ctx->pc = 0x2f02b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f02bc:
    // 0x2f02bc: 0x4601131c  madd.s      $f12, $f2, $f1
    ctx->pc = 0x2f02bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2f02c0:
    // 0x2f02c0: 0xc049514  jal         func_125450
label_2f02c4:
    if (ctx->pc == 0x2F02C4u) {
        ctx->pc = 0x2F02C4u;
            // 0x2f02c4: 0xe48c0054  swc1        $f12, 0x54($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->pc = 0x2F02C8u;
        goto label_2f02c8;
    }
    ctx->pc = 0x2F02C0u;
    SET_GPR_U32(ctx, 31, 0x2F02C8u);
    ctx->pc = 0x2F02C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02C0u;
            // 0x2f02c4: 0xe48c0054  swc1        $f12, 0x54($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02C8u; }
        if (ctx->pc != 0x2F02C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02C8u; }
        if (ctx->pc != 0x2F02C8u) { return; }
    }
    ctx->pc = 0x2F02C8u;
label_2f02c8:
    // 0x2f02c8: 0x3c04bf99  lui         $a0, 0xBF99
    ctx->pc = 0x2f02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49049 << 16));
label_2f02cc:
    // 0x2f02cc: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x2f02ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39321);
label_2f02d0:
    // 0x2f02d0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x2f02d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
label_2f02d4:
    // 0x2f02d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2f02d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2f02d8:
    // 0x2f02d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2f02d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_2f02dc:
    // 0x2f02dc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2f02dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_2f02e0:
    // 0x2f02e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f02e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2f02e4:
    // 0x2f02e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f02e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f02e8:
    // 0x2f02e8: 0xc040220  jal         func_100880
label_2f02ec:
    if (ctx->pc == 0x2F02ECu) {
        ctx->pc = 0x2F02ECu;
            // 0x2f02ec: 0x70032389  pcpyld      $a0, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->pc = 0x2F02F0u;
        goto label_2f02f0;
    }
    ctx->pc = 0x2F02E8u;
    SET_GPR_U32(ctx, 31, 0x2F02F0u);
    ctx->pc = 0x2F02ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F02E8u;
            // 0x2f02ec: 0x70032389  pcpyld      $a0, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (runtime->hasFunction(0x100880u)) {
        auto targetFn = runtime->lookupFunction(0x100880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02F0u; }
        if (ctx->pc != 0x2F02F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100880_0x100880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F02F0u; }
        if (ctx->pc != 0x2F02F0u) { return; }
    }
    ctx->pc = 0x2F02F0u;
label_2f02f0:
    // 0x2f02f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2f02f4:
    if (ctx->pc == 0x2F02F4u) {
        ctx->pc = 0x2F02F8u;
        goto label_2f02f8;
    }
    ctx->pc = 0x2F02F0u;
    {
        const bool branch_taken_0x2f02f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f02f0) {
            ctx->pc = 0x2F030Cu;
            goto label_2f030c;
        }
    }
    ctx->pc = 0x2F02F8u;
label_2f02f8:
    // 0x2f02f8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2f02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2f02fc:
    // 0x2f02fc: 0x8c630a74  lw          $v1, 0xA74($v1)
    ctx->pc = 0x2f02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2676)));
label_2f0300:
    // 0x2f0300: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2f0300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f0304:
    // 0x2f0304: 0x54200007  bnel        $at, $zero, . + 4 + (0x7 << 2)
label_2f0308:
    if (ctx->pc == 0x2F0308u) {
        ctx->pc = 0x2F0308u;
            // 0x2f0308: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2F030Cu;
        goto label_2f030c;
    }
    ctx->pc = 0x2F0304u;
    {
        const bool branch_taken_0x2f0304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0304) {
            ctx->pc = 0x2F0308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0304u;
            // 0x2f0308: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F0324u;
            goto label_2f0324;
        }
    }
    ctx->pc = 0x2F030Cu;
label_2f030c:
    // 0x2f030c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2f030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2f0310:
    // 0x2f0310: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f0310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0314:
    // 0x2f0314: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x2f0314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_2f0318:
    // 0x2f0318: 0xc057b7c  jal         func_15EDF0
label_2f031c:
    if (ctx->pc == 0x2F031Cu) {
        ctx->pc = 0x2F031Cu;
            // 0x2f031c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2F0320u;
        goto label_2f0320;
    }
    ctx->pc = 0x2F0318u;
    SET_GPR_U32(ctx, 31, 0x2F0320u);
    ctx->pc = 0x2F031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0318u;
            // 0x2f031c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0320u; }
        if (ctx->pc != 0x2F0320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0320u; }
        if (ctx->pc != 0x2F0320u) { return; }
    }
    ctx->pc = 0x2F0320u;
label_2f0320:
    // 0x2f0320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0324:
    // 0x2f0324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0328:
    // 0x2f0328: 0x3e00008  jr          $ra
label_2f032c:
    if (ctx->pc == 0x2F032Cu) {
        ctx->pc = 0x2F032Cu;
            // 0x2f032c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F0330u;
        goto label_fallthrough_0x2f0328;
    }
    ctx->pc = 0x2F0328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F032Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0328u;
            // 0x2f032c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f0328:
    ctx->pc = 0x2F0330u;
}
