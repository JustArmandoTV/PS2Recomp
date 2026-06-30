#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DFBC0
// Address: 0x4dfbc0 - 0x4e0190
void sub_004DFBC0_0x4dfbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DFBC0_0x4dfbc0");
#endif

    switch (ctx->pc) {
        case 0x4dfbc0u: goto label_4dfbc0;
        case 0x4dfbc4u: goto label_4dfbc4;
        case 0x4dfbc8u: goto label_4dfbc8;
        case 0x4dfbccu: goto label_4dfbcc;
        case 0x4dfbd0u: goto label_4dfbd0;
        case 0x4dfbd4u: goto label_4dfbd4;
        case 0x4dfbd8u: goto label_4dfbd8;
        case 0x4dfbdcu: goto label_4dfbdc;
        case 0x4dfbe0u: goto label_4dfbe0;
        case 0x4dfbe4u: goto label_4dfbe4;
        case 0x4dfbe8u: goto label_4dfbe8;
        case 0x4dfbecu: goto label_4dfbec;
        case 0x4dfbf0u: goto label_4dfbf0;
        case 0x4dfbf4u: goto label_4dfbf4;
        case 0x4dfbf8u: goto label_4dfbf8;
        case 0x4dfbfcu: goto label_4dfbfc;
        case 0x4dfc00u: goto label_4dfc00;
        case 0x4dfc04u: goto label_4dfc04;
        case 0x4dfc08u: goto label_4dfc08;
        case 0x4dfc0cu: goto label_4dfc0c;
        case 0x4dfc10u: goto label_4dfc10;
        case 0x4dfc14u: goto label_4dfc14;
        case 0x4dfc18u: goto label_4dfc18;
        case 0x4dfc1cu: goto label_4dfc1c;
        case 0x4dfc20u: goto label_4dfc20;
        case 0x4dfc24u: goto label_4dfc24;
        case 0x4dfc28u: goto label_4dfc28;
        case 0x4dfc2cu: goto label_4dfc2c;
        case 0x4dfc30u: goto label_4dfc30;
        case 0x4dfc34u: goto label_4dfc34;
        case 0x4dfc38u: goto label_4dfc38;
        case 0x4dfc3cu: goto label_4dfc3c;
        case 0x4dfc40u: goto label_4dfc40;
        case 0x4dfc44u: goto label_4dfc44;
        case 0x4dfc48u: goto label_4dfc48;
        case 0x4dfc4cu: goto label_4dfc4c;
        case 0x4dfc50u: goto label_4dfc50;
        case 0x4dfc54u: goto label_4dfc54;
        case 0x4dfc58u: goto label_4dfc58;
        case 0x4dfc5cu: goto label_4dfc5c;
        case 0x4dfc60u: goto label_4dfc60;
        case 0x4dfc64u: goto label_4dfc64;
        case 0x4dfc68u: goto label_4dfc68;
        case 0x4dfc6cu: goto label_4dfc6c;
        case 0x4dfc70u: goto label_4dfc70;
        case 0x4dfc74u: goto label_4dfc74;
        case 0x4dfc78u: goto label_4dfc78;
        case 0x4dfc7cu: goto label_4dfc7c;
        case 0x4dfc80u: goto label_4dfc80;
        case 0x4dfc84u: goto label_4dfc84;
        case 0x4dfc88u: goto label_4dfc88;
        case 0x4dfc8cu: goto label_4dfc8c;
        case 0x4dfc90u: goto label_4dfc90;
        case 0x4dfc94u: goto label_4dfc94;
        case 0x4dfc98u: goto label_4dfc98;
        case 0x4dfc9cu: goto label_4dfc9c;
        case 0x4dfca0u: goto label_4dfca0;
        case 0x4dfca4u: goto label_4dfca4;
        case 0x4dfca8u: goto label_4dfca8;
        case 0x4dfcacu: goto label_4dfcac;
        case 0x4dfcb0u: goto label_4dfcb0;
        case 0x4dfcb4u: goto label_4dfcb4;
        case 0x4dfcb8u: goto label_4dfcb8;
        case 0x4dfcbcu: goto label_4dfcbc;
        case 0x4dfcc0u: goto label_4dfcc0;
        case 0x4dfcc4u: goto label_4dfcc4;
        case 0x4dfcc8u: goto label_4dfcc8;
        case 0x4dfcccu: goto label_4dfccc;
        case 0x4dfcd0u: goto label_4dfcd0;
        case 0x4dfcd4u: goto label_4dfcd4;
        case 0x4dfcd8u: goto label_4dfcd8;
        case 0x4dfcdcu: goto label_4dfcdc;
        case 0x4dfce0u: goto label_4dfce0;
        case 0x4dfce4u: goto label_4dfce4;
        case 0x4dfce8u: goto label_4dfce8;
        case 0x4dfcecu: goto label_4dfcec;
        case 0x4dfcf0u: goto label_4dfcf0;
        case 0x4dfcf4u: goto label_4dfcf4;
        case 0x4dfcf8u: goto label_4dfcf8;
        case 0x4dfcfcu: goto label_4dfcfc;
        case 0x4dfd00u: goto label_4dfd00;
        case 0x4dfd04u: goto label_4dfd04;
        case 0x4dfd08u: goto label_4dfd08;
        case 0x4dfd0cu: goto label_4dfd0c;
        case 0x4dfd10u: goto label_4dfd10;
        case 0x4dfd14u: goto label_4dfd14;
        case 0x4dfd18u: goto label_4dfd18;
        case 0x4dfd1cu: goto label_4dfd1c;
        case 0x4dfd20u: goto label_4dfd20;
        case 0x4dfd24u: goto label_4dfd24;
        case 0x4dfd28u: goto label_4dfd28;
        case 0x4dfd2cu: goto label_4dfd2c;
        case 0x4dfd30u: goto label_4dfd30;
        case 0x4dfd34u: goto label_4dfd34;
        case 0x4dfd38u: goto label_4dfd38;
        case 0x4dfd3cu: goto label_4dfd3c;
        case 0x4dfd40u: goto label_4dfd40;
        case 0x4dfd44u: goto label_4dfd44;
        case 0x4dfd48u: goto label_4dfd48;
        case 0x4dfd4cu: goto label_4dfd4c;
        case 0x4dfd50u: goto label_4dfd50;
        case 0x4dfd54u: goto label_4dfd54;
        case 0x4dfd58u: goto label_4dfd58;
        case 0x4dfd5cu: goto label_4dfd5c;
        case 0x4dfd60u: goto label_4dfd60;
        case 0x4dfd64u: goto label_4dfd64;
        case 0x4dfd68u: goto label_4dfd68;
        case 0x4dfd6cu: goto label_4dfd6c;
        case 0x4dfd70u: goto label_4dfd70;
        case 0x4dfd74u: goto label_4dfd74;
        case 0x4dfd78u: goto label_4dfd78;
        case 0x4dfd7cu: goto label_4dfd7c;
        case 0x4dfd80u: goto label_4dfd80;
        case 0x4dfd84u: goto label_4dfd84;
        case 0x4dfd88u: goto label_4dfd88;
        case 0x4dfd8cu: goto label_4dfd8c;
        case 0x4dfd90u: goto label_4dfd90;
        case 0x4dfd94u: goto label_4dfd94;
        case 0x4dfd98u: goto label_4dfd98;
        case 0x4dfd9cu: goto label_4dfd9c;
        case 0x4dfda0u: goto label_4dfda0;
        case 0x4dfda4u: goto label_4dfda4;
        case 0x4dfda8u: goto label_4dfda8;
        case 0x4dfdacu: goto label_4dfdac;
        case 0x4dfdb0u: goto label_4dfdb0;
        case 0x4dfdb4u: goto label_4dfdb4;
        case 0x4dfdb8u: goto label_4dfdb8;
        case 0x4dfdbcu: goto label_4dfdbc;
        case 0x4dfdc0u: goto label_4dfdc0;
        case 0x4dfdc4u: goto label_4dfdc4;
        case 0x4dfdc8u: goto label_4dfdc8;
        case 0x4dfdccu: goto label_4dfdcc;
        case 0x4dfdd0u: goto label_4dfdd0;
        case 0x4dfdd4u: goto label_4dfdd4;
        case 0x4dfdd8u: goto label_4dfdd8;
        case 0x4dfddcu: goto label_4dfddc;
        case 0x4dfde0u: goto label_4dfde0;
        case 0x4dfde4u: goto label_4dfde4;
        case 0x4dfde8u: goto label_4dfde8;
        case 0x4dfdecu: goto label_4dfdec;
        case 0x4dfdf0u: goto label_4dfdf0;
        case 0x4dfdf4u: goto label_4dfdf4;
        case 0x4dfdf8u: goto label_4dfdf8;
        case 0x4dfdfcu: goto label_4dfdfc;
        case 0x4dfe00u: goto label_4dfe00;
        case 0x4dfe04u: goto label_4dfe04;
        case 0x4dfe08u: goto label_4dfe08;
        case 0x4dfe0cu: goto label_4dfe0c;
        case 0x4dfe10u: goto label_4dfe10;
        case 0x4dfe14u: goto label_4dfe14;
        case 0x4dfe18u: goto label_4dfe18;
        case 0x4dfe1cu: goto label_4dfe1c;
        case 0x4dfe20u: goto label_4dfe20;
        case 0x4dfe24u: goto label_4dfe24;
        case 0x4dfe28u: goto label_4dfe28;
        case 0x4dfe2cu: goto label_4dfe2c;
        case 0x4dfe30u: goto label_4dfe30;
        case 0x4dfe34u: goto label_4dfe34;
        case 0x4dfe38u: goto label_4dfe38;
        case 0x4dfe3cu: goto label_4dfe3c;
        case 0x4dfe40u: goto label_4dfe40;
        case 0x4dfe44u: goto label_4dfe44;
        case 0x4dfe48u: goto label_4dfe48;
        case 0x4dfe4cu: goto label_4dfe4c;
        case 0x4dfe50u: goto label_4dfe50;
        case 0x4dfe54u: goto label_4dfe54;
        case 0x4dfe58u: goto label_4dfe58;
        case 0x4dfe5cu: goto label_4dfe5c;
        case 0x4dfe60u: goto label_4dfe60;
        case 0x4dfe64u: goto label_4dfe64;
        case 0x4dfe68u: goto label_4dfe68;
        case 0x4dfe6cu: goto label_4dfe6c;
        case 0x4dfe70u: goto label_4dfe70;
        case 0x4dfe74u: goto label_4dfe74;
        case 0x4dfe78u: goto label_4dfe78;
        case 0x4dfe7cu: goto label_4dfe7c;
        case 0x4dfe80u: goto label_4dfe80;
        case 0x4dfe84u: goto label_4dfe84;
        case 0x4dfe88u: goto label_4dfe88;
        case 0x4dfe8cu: goto label_4dfe8c;
        case 0x4dfe90u: goto label_4dfe90;
        case 0x4dfe94u: goto label_4dfe94;
        case 0x4dfe98u: goto label_4dfe98;
        case 0x4dfe9cu: goto label_4dfe9c;
        case 0x4dfea0u: goto label_4dfea0;
        case 0x4dfea4u: goto label_4dfea4;
        case 0x4dfea8u: goto label_4dfea8;
        case 0x4dfeacu: goto label_4dfeac;
        case 0x4dfeb0u: goto label_4dfeb0;
        case 0x4dfeb4u: goto label_4dfeb4;
        case 0x4dfeb8u: goto label_4dfeb8;
        case 0x4dfebcu: goto label_4dfebc;
        case 0x4dfec0u: goto label_4dfec0;
        case 0x4dfec4u: goto label_4dfec4;
        case 0x4dfec8u: goto label_4dfec8;
        case 0x4dfeccu: goto label_4dfecc;
        case 0x4dfed0u: goto label_4dfed0;
        case 0x4dfed4u: goto label_4dfed4;
        case 0x4dfed8u: goto label_4dfed8;
        case 0x4dfedcu: goto label_4dfedc;
        case 0x4dfee0u: goto label_4dfee0;
        case 0x4dfee4u: goto label_4dfee4;
        case 0x4dfee8u: goto label_4dfee8;
        case 0x4dfeecu: goto label_4dfeec;
        case 0x4dfef0u: goto label_4dfef0;
        case 0x4dfef4u: goto label_4dfef4;
        case 0x4dfef8u: goto label_4dfef8;
        case 0x4dfefcu: goto label_4dfefc;
        case 0x4dff00u: goto label_4dff00;
        case 0x4dff04u: goto label_4dff04;
        case 0x4dff08u: goto label_4dff08;
        case 0x4dff0cu: goto label_4dff0c;
        case 0x4dff10u: goto label_4dff10;
        case 0x4dff14u: goto label_4dff14;
        case 0x4dff18u: goto label_4dff18;
        case 0x4dff1cu: goto label_4dff1c;
        case 0x4dff20u: goto label_4dff20;
        case 0x4dff24u: goto label_4dff24;
        case 0x4dff28u: goto label_4dff28;
        case 0x4dff2cu: goto label_4dff2c;
        case 0x4dff30u: goto label_4dff30;
        case 0x4dff34u: goto label_4dff34;
        case 0x4dff38u: goto label_4dff38;
        case 0x4dff3cu: goto label_4dff3c;
        case 0x4dff40u: goto label_4dff40;
        case 0x4dff44u: goto label_4dff44;
        case 0x4dff48u: goto label_4dff48;
        case 0x4dff4cu: goto label_4dff4c;
        case 0x4dff50u: goto label_4dff50;
        case 0x4dff54u: goto label_4dff54;
        case 0x4dff58u: goto label_4dff58;
        case 0x4dff5cu: goto label_4dff5c;
        case 0x4dff60u: goto label_4dff60;
        case 0x4dff64u: goto label_4dff64;
        case 0x4dff68u: goto label_4dff68;
        case 0x4dff6cu: goto label_4dff6c;
        case 0x4dff70u: goto label_4dff70;
        case 0x4dff74u: goto label_4dff74;
        case 0x4dff78u: goto label_4dff78;
        case 0x4dff7cu: goto label_4dff7c;
        case 0x4dff80u: goto label_4dff80;
        case 0x4dff84u: goto label_4dff84;
        case 0x4dff88u: goto label_4dff88;
        case 0x4dff8cu: goto label_4dff8c;
        case 0x4dff90u: goto label_4dff90;
        case 0x4dff94u: goto label_4dff94;
        case 0x4dff98u: goto label_4dff98;
        case 0x4dff9cu: goto label_4dff9c;
        case 0x4dffa0u: goto label_4dffa0;
        case 0x4dffa4u: goto label_4dffa4;
        case 0x4dffa8u: goto label_4dffa8;
        case 0x4dffacu: goto label_4dffac;
        case 0x4dffb0u: goto label_4dffb0;
        case 0x4dffb4u: goto label_4dffb4;
        case 0x4dffb8u: goto label_4dffb8;
        case 0x4dffbcu: goto label_4dffbc;
        case 0x4dffc0u: goto label_4dffc0;
        case 0x4dffc4u: goto label_4dffc4;
        case 0x4dffc8u: goto label_4dffc8;
        case 0x4dffccu: goto label_4dffcc;
        case 0x4dffd0u: goto label_4dffd0;
        case 0x4dffd4u: goto label_4dffd4;
        case 0x4dffd8u: goto label_4dffd8;
        case 0x4dffdcu: goto label_4dffdc;
        case 0x4dffe0u: goto label_4dffe0;
        case 0x4dffe4u: goto label_4dffe4;
        case 0x4dffe8u: goto label_4dffe8;
        case 0x4dffecu: goto label_4dffec;
        case 0x4dfff0u: goto label_4dfff0;
        case 0x4dfff4u: goto label_4dfff4;
        case 0x4dfff8u: goto label_4dfff8;
        case 0x4dfffcu: goto label_4dfffc;
        case 0x4e0000u: goto label_4e0000;
        case 0x4e0004u: goto label_4e0004;
        case 0x4e0008u: goto label_4e0008;
        case 0x4e000cu: goto label_4e000c;
        case 0x4e0010u: goto label_4e0010;
        case 0x4e0014u: goto label_4e0014;
        case 0x4e0018u: goto label_4e0018;
        case 0x4e001cu: goto label_4e001c;
        case 0x4e0020u: goto label_4e0020;
        case 0x4e0024u: goto label_4e0024;
        case 0x4e0028u: goto label_4e0028;
        case 0x4e002cu: goto label_4e002c;
        case 0x4e0030u: goto label_4e0030;
        case 0x4e0034u: goto label_4e0034;
        case 0x4e0038u: goto label_4e0038;
        case 0x4e003cu: goto label_4e003c;
        case 0x4e0040u: goto label_4e0040;
        case 0x4e0044u: goto label_4e0044;
        case 0x4e0048u: goto label_4e0048;
        case 0x4e004cu: goto label_4e004c;
        case 0x4e0050u: goto label_4e0050;
        case 0x4e0054u: goto label_4e0054;
        case 0x4e0058u: goto label_4e0058;
        case 0x4e005cu: goto label_4e005c;
        case 0x4e0060u: goto label_4e0060;
        case 0x4e0064u: goto label_4e0064;
        case 0x4e0068u: goto label_4e0068;
        case 0x4e006cu: goto label_4e006c;
        case 0x4e0070u: goto label_4e0070;
        case 0x4e0074u: goto label_4e0074;
        case 0x4e0078u: goto label_4e0078;
        case 0x4e007cu: goto label_4e007c;
        case 0x4e0080u: goto label_4e0080;
        case 0x4e0084u: goto label_4e0084;
        case 0x4e0088u: goto label_4e0088;
        case 0x4e008cu: goto label_4e008c;
        case 0x4e0090u: goto label_4e0090;
        case 0x4e0094u: goto label_4e0094;
        case 0x4e0098u: goto label_4e0098;
        case 0x4e009cu: goto label_4e009c;
        case 0x4e00a0u: goto label_4e00a0;
        case 0x4e00a4u: goto label_4e00a4;
        case 0x4e00a8u: goto label_4e00a8;
        case 0x4e00acu: goto label_4e00ac;
        case 0x4e00b0u: goto label_4e00b0;
        case 0x4e00b4u: goto label_4e00b4;
        case 0x4e00b8u: goto label_4e00b8;
        case 0x4e00bcu: goto label_4e00bc;
        case 0x4e00c0u: goto label_4e00c0;
        case 0x4e00c4u: goto label_4e00c4;
        case 0x4e00c8u: goto label_4e00c8;
        case 0x4e00ccu: goto label_4e00cc;
        case 0x4e00d0u: goto label_4e00d0;
        case 0x4e00d4u: goto label_4e00d4;
        case 0x4e00d8u: goto label_4e00d8;
        case 0x4e00dcu: goto label_4e00dc;
        case 0x4e00e0u: goto label_4e00e0;
        case 0x4e00e4u: goto label_4e00e4;
        case 0x4e00e8u: goto label_4e00e8;
        case 0x4e00ecu: goto label_4e00ec;
        case 0x4e00f0u: goto label_4e00f0;
        case 0x4e00f4u: goto label_4e00f4;
        case 0x4e00f8u: goto label_4e00f8;
        case 0x4e00fcu: goto label_4e00fc;
        case 0x4e0100u: goto label_4e0100;
        case 0x4e0104u: goto label_4e0104;
        case 0x4e0108u: goto label_4e0108;
        case 0x4e010cu: goto label_4e010c;
        case 0x4e0110u: goto label_4e0110;
        case 0x4e0114u: goto label_4e0114;
        case 0x4e0118u: goto label_4e0118;
        case 0x4e011cu: goto label_4e011c;
        case 0x4e0120u: goto label_4e0120;
        case 0x4e0124u: goto label_4e0124;
        case 0x4e0128u: goto label_4e0128;
        case 0x4e012cu: goto label_4e012c;
        case 0x4e0130u: goto label_4e0130;
        case 0x4e0134u: goto label_4e0134;
        case 0x4e0138u: goto label_4e0138;
        case 0x4e013cu: goto label_4e013c;
        case 0x4e0140u: goto label_4e0140;
        case 0x4e0144u: goto label_4e0144;
        case 0x4e0148u: goto label_4e0148;
        case 0x4e014cu: goto label_4e014c;
        case 0x4e0150u: goto label_4e0150;
        case 0x4e0154u: goto label_4e0154;
        case 0x4e0158u: goto label_4e0158;
        case 0x4e015cu: goto label_4e015c;
        case 0x4e0160u: goto label_4e0160;
        case 0x4e0164u: goto label_4e0164;
        case 0x4e0168u: goto label_4e0168;
        case 0x4e016cu: goto label_4e016c;
        case 0x4e0170u: goto label_4e0170;
        case 0x4e0174u: goto label_4e0174;
        case 0x4e0178u: goto label_4e0178;
        case 0x4e017cu: goto label_4e017c;
        case 0x4e0180u: goto label_4e0180;
        case 0x4e0184u: goto label_4e0184;
        case 0x4e0188u: goto label_4e0188;
        case 0x4e018cu: goto label_4e018c;
        default: break;
    }

    ctx->pc = 0x4dfbc0u;

label_4dfbc0:
    // 0x4dfbc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dfbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4dfbc4:
    // 0x4dfbc4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4dfbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dfbc8:
    // 0x4dfbc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4dfbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4dfbcc:
    // 0x4dfbcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dfbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dfbd0:
    // 0x4dfbd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dfbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dfbd4:
    // 0x4dfbd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4dfbd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dfbd8:
    // 0x4dfbd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dfbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dfbdc:
    // 0x4dfbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dfbe0:
    // 0x4dfbe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dfbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dfbe4:
    // 0x4dfbe4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4dfbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4dfbe8:
    // 0x4dfbe8: 0xc10ca68  jal         func_4329A0
label_4dfbec:
    if (ctx->pc == 0x4DFBECu) {
        ctx->pc = 0x4DFBECu;
            // 0x4dfbec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4DFBF0u;
        goto label_4dfbf0;
    }
    ctx->pc = 0x4DFBE8u;
    SET_GPR_U32(ctx, 31, 0x4DFBF0u);
    ctx->pc = 0x4DFBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFBE8u;
            // 0x4dfbec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFBF0u; }
        if (ctx->pc != 0x4DFBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFBF0u; }
        if (ctx->pc != 0x4DFBF0u) { return; }
    }
    ctx->pc = 0x4DFBF0u;
label_4dfbf0:
    // 0x4dfbf0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4dfbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4dfbf4:
    // 0x4dfbf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4dfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4dfbf8:
    // 0x4dfbf8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4dfbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4dfbfc:
    // 0x4dfbfc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4dfbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4dfc00:
    // 0x4dfc00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4dfc00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4dfc04:
    // 0x4dfc04: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4dfc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4dfc08:
    // 0x4dfc08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4dfc08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4dfc0c:
    // 0x4dfc0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4dfc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4dfc10:
    // 0x4dfc10: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4dfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4dfc14:
    // 0x4dfc14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dfc18:
    // 0x4dfc18: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4dfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4dfc1c:
    // 0x4dfc1c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4dfc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4dfc20:
    // 0x4dfc20: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4dfc20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4dfc24:
    // 0x4dfc24: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4dfc24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4dfc28:
    // 0x4dfc28: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4dfc28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4dfc2c:
    // 0x4dfc2c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4dfc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4dfc30:
    // 0x4dfc30: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4dfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4dfc34:
    // 0x4dfc34: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4dfc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4dfc38:
    // 0x4dfc38: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4dfc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4dfc3c:
    // 0x4dfc3c: 0xc0582cc  jal         func_160B30
label_4dfc40:
    if (ctx->pc == 0x4DFC40u) {
        ctx->pc = 0x4DFC40u;
            // 0x4dfc40: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4DFC44u;
        goto label_4dfc44;
    }
    ctx->pc = 0x4DFC3Cu;
    SET_GPR_U32(ctx, 31, 0x4DFC44u);
    ctx->pc = 0x4DFC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFC3Cu;
            // 0x4dfc40: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFC44u; }
        if (ctx->pc != 0x4DFC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFC44u; }
        if (ctx->pc != 0x4DFC44u) { return; }
    }
    ctx->pc = 0x4DFC44u;
label_4dfc44:
    // 0x4dfc44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dfc48:
    // 0x4dfc48: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4dfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4dfc4c:
    // 0x4dfc4c: 0x246331f8  addiu       $v1, $v1, 0x31F8
    ctx->pc = 0x4dfc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12792));
label_4dfc50:
    // 0x4dfc50: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4dfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4dfc54:
    // 0x4dfc54: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4dfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4dfc58:
    // 0x4dfc58: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4dfc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4dfc5c:
    // 0x4dfc5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dfc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dfc60:
    // 0x4dfc60: 0xac44aa80  sw          $a0, -0x5580($v0)
    ctx->pc = 0x4dfc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945408), GPR_U32(ctx, 4));
label_4dfc64:
    // 0x4dfc64: 0x24633210  addiu       $v1, $v1, 0x3210
    ctx->pc = 0x4dfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12816));
label_4dfc68:
    // 0x4dfc68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dfc6c:
    // 0x4dfc6c: 0x24423248  addiu       $v0, $v0, 0x3248
    ctx->pc = 0x4dfc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12872));
label_4dfc70:
    // 0x4dfc70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4dfc70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4dfc74:
    // 0x4dfc74: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4dfc74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4dfc78:
    // 0x4dfc78: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4dfc78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4dfc7c:
    // 0x4dfc7c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4dfc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4dfc80:
    // 0x4dfc80: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4dfc80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4dfc84:
    // 0x4dfc84: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4dfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4dfc88:
    // 0x4dfc88: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4dfc88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4dfc8c:
    // 0x4dfc8c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4dfc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4dfc90:
    // 0x4dfc90: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4dfc90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4dfc94:
    // 0x4dfc94: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4dfc94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4dfc98:
    // 0x4dfc98: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4dfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4dfc9c:
    // 0x4dfc9c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4dfc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4dfca0:
    // 0x4dfca0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4dfca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4dfca4:
    // 0x4dfca4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4dfca8:
    if (ctx->pc == 0x4DFCA8u) {
        ctx->pc = 0x4DFCACu;
        goto label_4dfcac;
    }
    ctx->pc = 0x4DFCA4u;
    {
        const bool branch_taken_0x4dfca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfca4) {
            ctx->pc = 0x4DFD38u;
            goto label_4dfd38;
        }
    }
    ctx->pc = 0x4DFCACu;
label_4dfcac:
    // 0x4dfcac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4dfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4dfcb0:
    // 0x4dfcb0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4dfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4dfcb4:
    // 0x4dfcb4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4dfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4dfcb8:
    // 0x4dfcb8: 0xc040138  jal         func_1004E0
label_4dfcbc:
    if (ctx->pc == 0x4DFCBCu) {
        ctx->pc = 0x4DFCBCu;
            // 0x4dfcbc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4DFCC0u;
        goto label_4dfcc0;
    }
    ctx->pc = 0x4DFCB8u;
    SET_GPR_U32(ctx, 31, 0x4DFCC0u);
    ctx->pc = 0x4DFCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFCB8u;
            // 0x4dfcbc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFCC0u; }
        if (ctx->pc != 0x4DFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFCC0u; }
        if (ctx->pc != 0x4DFCC0u) { return; }
    }
    ctx->pc = 0x4DFCC0u;
label_4dfcc0:
    // 0x4dfcc0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4dfcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4dfcc4:
    // 0x4dfcc4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4dfcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4dfcc8:
    // 0x4dfcc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dfcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dfccc:
    // 0x4dfccc: 0x24a5fd60  addiu       $a1, $a1, -0x2A0
    ctx->pc = 0x4dfcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966624));
label_4dfcd0:
    // 0x4dfcd0: 0x24c6f510  addiu       $a2, $a2, -0xAF0
    ctx->pc = 0x4dfcd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964496));
label_4dfcd4:
    // 0x4dfcd4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4dfcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4dfcd8:
    // 0x4dfcd8: 0xc040840  jal         func_102100
label_4dfcdc:
    if (ctx->pc == 0x4DFCDCu) {
        ctx->pc = 0x4DFCDCu;
            // 0x4dfcdc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFCE0u;
        goto label_4dfce0;
    }
    ctx->pc = 0x4DFCD8u;
    SET_GPR_U32(ctx, 31, 0x4DFCE0u);
    ctx->pc = 0x4DFCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFCD8u;
            // 0x4dfcdc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFCE0u; }
        if (ctx->pc != 0x4DFCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFCE0u; }
        if (ctx->pc != 0x4DFCE0u) { return; }
    }
    ctx->pc = 0x4DFCE0u;
label_4dfce0:
    // 0x4dfce0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4dfce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4dfce4:
    // 0x4dfce4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4dfce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dfce8:
    // 0x4dfce8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4dfce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4dfcec:
    // 0x4dfcec: 0xc0788fc  jal         func_1E23F0
label_4dfcf0:
    if (ctx->pc == 0x4DFCF0u) {
        ctx->pc = 0x4DFCF0u;
            // 0x4dfcf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFCF4u;
        goto label_4dfcf4;
    }
    ctx->pc = 0x4DFCECu;
    SET_GPR_U32(ctx, 31, 0x4DFCF4u);
    ctx->pc = 0x4DFCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFCECu;
            // 0x4dfcf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFCF4u; }
        if (ctx->pc != 0x4DFCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFCF4u; }
        if (ctx->pc != 0x4DFCF4u) { return; }
    }
    ctx->pc = 0x4DFCF4u;
label_4dfcf4:
    // 0x4dfcf4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4dfcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4dfcf8:
    // 0x4dfcf8: 0xc0788fc  jal         func_1E23F0
label_4dfcfc:
    if (ctx->pc == 0x4DFCFCu) {
        ctx->pc = 0x4DFCFCu;
            // 0x4dfcfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFD00u;
        goto label_4dfd00;
    }
    ctx->pc = 0x4DFCF8u;
    SET_GPR_U32(ctx, 31, 0x4DFD00u);
    ctx->pc = 0x4DFCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFCF8u;
            // 0x4dfcfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFD00u; }
        if (ctx->pc != 0x4DFD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFD00u; }
        if (ctx->pc != 0x4DFD00u) { return; }
    }
    ctx->pc = 0x4DFD00u;
label_4dfd00:
    // 0x4dfd00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dfd00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dfd04:
    // 0x4dfd04: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4dfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4dfd08:
    // 0x4dfd08: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4dfd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4dfd0c:
    // 0x4dfd0c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4dfd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4dfd10:
    // 0x4dfd10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4dfd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dfd14:
    // 0x4dfd14: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4dfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4dfd18:
    // 0x4dfd18: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4dfd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4dfd1c:
    // 0x4dfd1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dfd20:
    // 0x4dfd20: 0xc0a997c  jal         func_2A65F0
label_4dfd24:
    if (ctx->pc == 0x4DFD24u) {
        ctx->pc = 0x4DFD24u;
            // 0x4dfd24: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4DFD28u;
        goto label_4dfd28;
    }
    ctx->pc = 0x4DFD20u;
    SET_GPR_U32(ctx, 31, 0x4DFD28u);
    ctx->pc = 0x4DFD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFD20u;
            // 0x4dfd24: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFD28u; }
        if (ctx->pc != 0x4DFD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFD28u; }
        if (ctx->pc != 0x4DFD28u) { return; }
    }
    ctx->pc = 0x4DFD28u;
label_4dfd28:
    // 0x4dfd28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4dfd28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4dfd2c:
    // 0x4dfd2c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4dfd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4dfd30:
    // 0x4dfd30: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4dfd34:
    if (ctx->pc == 0x4DFD34u) {
        ctx->pc = 0x4DFD34u;
            // 0x4dfd34: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4DFD38u;
        goto label_4dfd38;
    }
    ctx->pc = 0x4DFD30u;
    {
        const bool branch_taken_0x4dfd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DFD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFD30u;
            // 0x4dfd34: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfd30) {
            ctx->pc = 0x4DFD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dfd04;
        }
    }
    ctx->pc = 0x4DFD38u;
label_4dfd38:
    // 0x4dfd38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4dfd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dfd3c:
    // 0x4dfd3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4dfd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4dfd40:
    // 0x4dfd40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dfd40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dfd44:
    // 0x4dfd44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dfd44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dfd48:
    // 0x4dfd48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dfd48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfd4c:
    // 0x4dfd4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dfd50:
    // 0x4dfd50: 0x3e00008  jr          $ra
label_4dfd54:
    if (ctx->pc == 0x4DFD54u) {
        ctx->pc = 0x4DFD54u;
            // 0x4dfd54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DFD58u;
        goto label_4dfd58;
    }
    ctx->pc = 0x4DFD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFD50u;
            // 0x4dfd54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFD58u;
label_4dfd58:
    // 0x4dfd58: 0x0  nop
    ctx->pc = 0x4dfd58u;
    // NOP
label_4dfd5c:
    // 0x4dfd5c: 0x0  nop
    ctx->pc = 0x4dfd5cu;
    // NOP
label_4dfd60:
    // 0x4dfd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dfd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dfd64:
    // 0x4dfd64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dfd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dfd68:
    // 0x4dfd68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dfd6c:
    // 0x4dfd6c: 0xc12e6bc  jal         func_4B9AF0
label_4dfd70:
    if (ctx->pc == 0x4DFD70u) {
        ctx->pc = 0x4DFD70u;
            // 0x4dfd70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFD74u;
        goto label_4dfd74;
    }
    ctx->pc = 0x4DFD6Cu;
    SET_GPR_U32(ctx, 31, 0x4DFD74u);
    ctx->pc = 0x4DFD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFD6Cu;
            // 0x4dfd70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFD74u; }
        if (ctx->pc != 0x4DFD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFD74u; }
        if (ctx->pc != 0x4DFD74u) { return; }
    }
    ctx->pc = 0x4DFD74u;
label_4dfd74:
    // 0x4dfd74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dfd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dfd78:
    // 0x4dfd78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dfd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dfd7c:
    // 0x4dfd7c: 0x244232b0  addiu       $v0, $v0, 0x32B0
    ctx->pc = 0x4dfd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12976));
label_4dfd80:
    // 0x4dfd80: 0x246332f0  addiu       $v1, $v1, 0x32F0
    ctx->pc = 0x4dfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13040));
label_4dfd84:
    // 0x4dfd84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4dfd88:
    // 0x4dfd88: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4dfd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4dfd8c:
    // 0x4dfd8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dfd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dfd90:
    // 0x4dfd90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dfd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfd94:
    // 0x4dfd94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dfd98:
    // 0x4dfd98: 0x3e00008  jr          $ra
label_4dfd9c:
    if (ctx->pc == 0x4DFD9Cu) {
        ctx->pc = 0x4DFD9Cu;
            // 0x4dfd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DFDA0u;
        goto label_4dfda0;
    }
    ctx->pc = 0x4DFD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFD98u;
            // 0x4dfd9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFDA0u;
label_4dfda0:
    // 0x4dfda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dfda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dfda4:
    // 0x4dfda4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4dfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4dfda8:
    // 0x4dfda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dfda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dfdac:
    // 0x4dfdac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4dfdacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dfdb0:
    // 0x4dfdb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dfdb4:
    // 0x4dfdb4: 0x8c42aa80  lw          $v0, -0x5580($v0)
    ctx->pc = 0x4dfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945408)));
label_4dfdb8:
    // 0x4dfdb8: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4dfdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4dfdbc:
    // 0x4dfdbc: 0xc12e608  jal         func_4B9820
label_4dfdc0:
    if (ctx->pc == 0x4DFDC0u) {
        ctx->pc = 0x4DFDC0u;
            // 0x4dfdc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFDC4u;
        goto label_4dfdc4;
    }
    ctx->pc = 0x4DFDBCu;
    SET_GPR_U32(ctx, 31, 0x4DFDC4u);
    ctx->pc = 0x4DFDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFDBCu;
            // 0x4dfdc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFDC4u; }
        if (ctx->pc != 0x4DFDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFDC4u; }
        if (ctx->pc != 0x4DFDC4u) { return; }
    }
    ctx->pc = 0x4DFDC4u;
label_4dfdc4:
    // 0x4dfdc4: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4dfdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4dfdc8:
    // 0x4dfdc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dfdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfdcc:
    // 0x4dfdcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dfdd0:
    // 0x4dfdd0: 0x3e00008  jr          $ra
label_4dfdd4:
    if (ctx->pc == 0x4DFDD4u) {
        ctx->pc = 0x4DFDD4u;
            // 0x4dfdd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DFDD8u;
        goto label_4dfdd8;
    }
    ctx->pc = 0x4DFDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFDD0u;
            // 0x4dfdd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFDD8u;
label_4dfdd8:
    // 0x4dfdd8: 0x0  nop
    ctx->pc = 0x4dfdd8u;
    // NOP
label_4dfddc:
    // 0x4dfddc: 0x0  nop
    ctx->pc = 0x4dfddcu;
    // NOP
label_4dfde0:
    // 0x4dfde0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dfde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4dfde4:
    // 0x4dfde4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4dfde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4dfde8:
    // 0x4dfde8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4dfde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4dfdec:
    // 0x4dfdec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dfdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dfdf0:
    // 0x4dfdf0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4dfdf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dfdf4:
    // 0x4dfdf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dfdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dfdf8:
    // 0x4dfdf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dfdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dfdfc:
    // 0x4dfdfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dfe00:
    // 0x4dfe00: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4dfe00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4dfe04:
    // 0x4dfe04: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4dfe08:
    if (ctx->pc == 0x4DFE08u) {
        ctx->pc = 0x4DFE08u;
            // 0x4dfe08: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFE0Cu;
        goto label_4dfe0c;
    }
    ctx->pc = 0x4DFE04u;
    {
        const bool branch_taken_0x4dfe04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFE04u;
            // 0x4dfe08: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfe04) {
            ctx->pc = 0x4DFE48u;
            goto label_4dfe48;
        }
    }
    ctx->pc = 0x4DFE0Cu;
label_4dfe0c:
    // 0x4dfe0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dfe0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe10:
    // 0x4dfe10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4dfe10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe14:
    // 0x4dfe14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dfe14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe18:
    // 0x4dfe18: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4dfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4dfe1c:
    // 0x4dfe1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4dfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4dfe20:
    // 0x4dfe20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dfe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dfe24:
    // 0x4dfe24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dfe24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dfe28:
    // 0x4dfe28: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4dfe28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4dfe2c:
    // 0x4dfe2c: 0x320f809  jalr        $t9
label_4dfe30:
    if (ctx->pc == 0x4DFE30u) {
        ctx->pc = 0x4DFE34u;
        goto label_4dfe34;
    }
    ctx->pc = 0x4DFE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DFE34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DFE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DFE34u; }
            if (ctx->pc != 0x4DFE34u) { return; }
        }
        }
    }
    ctx->pc = 0x4DFE34u;
label_4dfe34:
    // 0x4dfe34: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4dfe34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4dfe38:
    // 0x4dfe38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4dfe38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4dfe3c:
    // 0x4dfe3c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4dfe3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4dfe40:
    // 0x4dfe40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4dfe44:
    if (ctx->pc == 0x4DFE44u) {
        ctx->pc = 0x4DFE44u;
            // 0x4dfe44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DFE48u;
        goto label_4dfe48;
    }
    ctx->pc = 0x4DFE40u;
    {
        const bool branch_taken_0x4dfe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DFE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFE40u;
            // 0x4dfe44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfe40) {
            ctx->pc = 0x4DFE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dfe18;
        }
    }
    ctx->pc = 0x4DFE48u;
label_4dfe48:
    // 0x4dfe48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4dfe48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe4c:
    // 0x4dfe4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4dfe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4dfe50:
    // 0x4dfe50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4dfe50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dfe54:
    // 0x4dfe54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dfe54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dfe58:
    // 0x4dfe58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dfe58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dfe5c:
    // 0x4dfe5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dfe5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfe60:
    // 0x4dfe60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfe60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dfe64:
    // 0x4dfe64: 0x3e00008  jr          $ra
label_4dfe68:
    if (ctx->pc == 0x4DFE68u) {
        ctx->pc = 0x4DFE68u;
            // 0x4dfe68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DFE6Cu;
        goto label_4dfe6c;
    }
    ctx->pc = 0x4DFE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFE64u;
            // 0x4dfe68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFE6Cu;
label_4dfe6c:
    // 0x4dfe6c: 0x0  nop
    ctx->pc = 0x4dfe6cu;
    // NOP
label_4dfe70:
    // 0x4dfe70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dfe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dfe74:
    // 0x4dfe74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4dfe74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dfe78:
    // 0x4dfe78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dfe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dfe7c:
    // 0x4dfe7c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4dfe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4dfe80:
    // 0x4dfe80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dfe84:
    // 0x4dfe84: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4dfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4dfe88:
    // 0x4dfe88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dfe88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe8c:
    // 0x4dfe8c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4dfe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4dfe90:
    // 0x4dfe90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dfe90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dfe94:
    // 0x4dfe94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4dfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4dfe98:
    // 0x4dfe98: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4dfe98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4dfe9c:
    // 0x4dfe9c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4dfe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dfea0:
    // 0x4dfea0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4dfea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4dfea4:
    // 0x4dfea4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4dfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4dfea8:
    // 0x4dfea8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4dfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4dfeac:
    // 0x4dfeac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4dfeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4dfeb0:
    // 0x4dfeb0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4dfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4dfeb4:
    // 0x4dfeb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dfeb8:
    // 0x4dfeb8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4dfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4dfebc:
    // 0x4dfebc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4dfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4dfec0:
    // 0x4dfec0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4dfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4dfec4:
    // 0x4dfec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dfec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dfec8:
    // 0x4dfec8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4dfec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4dfecc:
    // 0x4dfecc: 0xc0a997c  jal         func_2A65F0
label_4dfed0:
    if (ctx->pc == 0x4DFED0u) {
        ctx->pc = 0x4DFED0u;
            // 0x4dfed0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4DFED4u;
        goto label_4dfed4;
    }
    ctx->pc = 0x4DFECCu;
    SET_GPR_U32(ctx, 31, 0x4DFED4u);
    ctx->pc = 0x4DFED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFECCu;
            // 0x4dfed0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFED4u; }
        if (ctx->pc != 0x4DFED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFED4u; }
        if (ctx->pc != 0x4DFED4u) { return; }
    }
    ctx->pc = 0x4DFED4u;
label_4dfed4:
    // 0x4dfed4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4dfed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4dfed8:
    // 0x4dfed8: 0xc0d879c  jal         func_361E70
label_4dfedc:
    if (ctx->pc == 0x4DFEDCu) {
        ctx->pc = 0x4DFEDCu;
            // 0x4dfedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFEE0u;
        goto label_4dfee0;
    }
    ctx->pc = 0x4DFED8u;
    SET_GPR_U32(ctx, 31, 0x4DFEE0u);
    ctx->pc = 0x4DFEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFED8u;
            // 0x4dfedc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFEE0u; }
        if (ctx->pc != 0x4DFEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFEE0u; }
        if (ctx->pc != 0x4DFEE0u) { return; }
    }
    ctx->pc = 0x4DFEE0u;
label_4dfee0:
    // 0x4dfee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dfee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfee4:
    // 0x4dfee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dfee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dfee8:
    // 0x4dfee8: 0x3e00008  jr          $ra
label_4dfeec:
    if (ctx->pc == 0x4DFEECu) {
        ctx->pc = 0x4DFEECu;
            // 0x4dfeec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DFEF0u;
        goto label_4dfef0;
    }
    ctx->pc = 0x4DFEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFEE8u;
            // 0x4dfeec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DFEF0u;
label_4dfef0:
    // 0x4dfef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dfef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dfef4:
    // 0x4dfef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dfef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dfef8:
    // 0x4dfef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dfef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dfefc:
    // 0x4dfefc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4dfefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4dff00:
    // 0x4dff00: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4dff04:
    if (ctx->pc == 0x4DFF04u) {
        ctx->pc = 0x4DFF04u;
            // 0x4dff04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFF08u;
        goto label_4dff08;
    }
    ctx->pc = 0x4DFF00u;
    {
        const bool branch_taken_0x4dff00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFF00u;
            // 0x4dff04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dff00) {
            ctx->pc = 0x4E0020u;
            goto label_4e0020;
        }
    }
    ctx->pc = 0x4DFF08u;
label_4dff08:
    // 0x4dff08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dff0c:
    // 0x4dff0c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4dff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4dff10:
    // 0x4dff10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4dff10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4dff14:
    // 0x4dff14: 0xc075128  jal         func_1D44A0
label_4dff18:
    if (ctx->pc == 0x4DFF18u) {
        ctx->pc = 0x4DFF18u;
            // 0x4dff18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4DFF1Cu;
        goto label_4dff1c;
    }
    ctx->pc = 0x4DFF14u;
    SET_GPR_U32(ctx, 31, 0x4DFF1Cu);
    ctx->pc = 0x4DFF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFF14u;
            // 0x4dff18: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFF1Cu; }
        if (ctx->pc != 0x4DFF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DFF1Cu; }
        if (ctx->pc != 0x4DFF1Cu) { return; }
    }
    ctx->pc = 0x4DFF1Cu;
label_4dff1c:
    // 0x4dff1c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4dff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dff20:
    // 0x4dff20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dff20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dff24:
    // 0x4dff24: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4dff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4dff28:
    // 0x4dff28: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4dff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4dff2c:
    // 0x4dff2c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dff2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dff30:
    // 0x4dff30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dff34:
    if (ctx->pc == 0x4DFF34u) {
        ctx->pc = 0x4DFF34u;
            // 0x4dff34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4DFF38u;
        goto label_4dff38;
    }
    ctx->pc = 0x4DFF30u;
    {
        const bool branch_taken_0x4dff30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFF30u;
            // 0x4dff34: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dff30) {
            ctx->pc = 0x4DFF40u;
            goto label_4dff40;
        }
    }
    ctx->pc = 0x4DFF38u;
label_4dff38:
    // 0x4dff38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dff3c:
    // 0x4dff3c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4dff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4dff40:
    // 0x4dff40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dff44:
    // 0x4dff44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dff48:
    // 0x4dff48: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4dff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4dff4c:
    // 0x4dff4c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4dff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4dff50:
    // 0x4dff50: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dff50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dff54:
    // 0x4dff54: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dff58:
    if (ctx->pc == 0x4DFF58u) {
        ctx->pc = 0x4DFF58u;
            // 0x4dff58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DFF5Cu;
        goto label_4dff5c;
    }
    ctx->pc = 0x4DFF54u;
    {
        const bool branch_taken_0x4dff54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dff54) {
            ctx->pc = 0x4DFF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFF54u;
            // 0x4dff58: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DFF68u;
            goto label_4dff68;
        }
    }
    ctx->pc = 0x4DFF5Cu;
label_4dff5c:
    // 0x4dff5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dff60:
    // 0x4dff60: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4dff60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4dff64:
    // 0x4dff64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dff68:
    // 0x4dff68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dff6c:
    // 0x4dff6c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4dff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4dff70:
    // 0x4dff70: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4dff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4dff74:
    // 0x4dff74: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dff74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dff78:
    // 0x4dff78: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dff7c:
    if (ctx->pc == 0x4DFF7Cu) {
        ctx->pc = 0x4DFF7Cu;
            // 0x4dff7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4DFF80u;
        goto label_4dff80;
    }
    ctx->pc = 0x4DFF78u;
    {
        const bool branch_taken_0x4dff78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dff78) {
            ctx->pc = 0x4DFF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFF78u;
            // 0x4dff7c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DFF8Cu;
            goto label_4dff8c;
        }
    }
    ctx->pc = 0x4DFF80u;
label_4dff80:
    // 0x4dff80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dff84:
    // 0x4dff84: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4dff84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4dff88:
    // 0x4dff88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4dff88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dff8c:
    // 0x4dff8c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4dff8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4dff90:
    // 0x4dff90: 0x320f809  jalr        $t9
label_4dff94:
    if (ctx->pc == 0x4DFF94u) {
        ctx->pc = 0x4DFF94u;
            // 0x4dff94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DFF98u;
        goto label_4dff98;
    }
    ctx->pc = 0x4DFF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DFF98u);
        ctx->pc = 0x4DFF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFF90u;
            // 0x4dff94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DFF98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DFF98u; }
            if (ctx->pc != 0x4DFF98u) { return; }
        }
        }
    }
    ctx->pc = 0x4DFF98u;
label_4dff98:
    // 0x4dff98: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4dff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dff9c:
    // 0x4dff9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dffa0:
    // 0x4dffa0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4dffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4dffa4:
    // 0x4dffa4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4dffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dffa8:
    // 0x4dffa8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4dffa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4dffac:
    // 0x4dffac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4dffacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4dffb0:
    // 0x4dffb0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dffb4:
    if (ctx->pc == 0x4DFFB4u) {
        ctx->pc = 0x4DFFB4u;
            // 0x4dffb4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4DFFB8u;
        goto label_4dffb8;
    }
    ctx->pc = 0x4DFFB0u;
    {
        const bool branch_taken_0x4dffb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dffb0) {
            ctx->pc = 0x4DFFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DFFB0u;
            // 0x4dffb4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DFFC4u;
            goto label_4dffc4;
        }
    }
    ctx->pc = 0x4DFFB8u;
label_4dffb8:
    // 0x4dffb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dffbc:
    // 0x4dffbc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4dffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4dffc0:
    // 0x4dffc0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4dffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dffc4:
    // 0x4dffc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dffc8:
    // 0x4dffc8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4dffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4dffcc:
    // 0x4dffcc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4dffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dffd0:
    // 0x4dffd0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4dffd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4dffd4:
    // 0x4dffd4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4dffd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4dffd8:
    // 0x4dffd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dffdc:
    if (ctx->pc == 0x4DFFDCu) {
        ctx->pc = 0x4DFFE0u;
        goto label_4dffe0;
    }
    ctx->pc = 0x4DFFD8u;
    {
        const bool branch_taken_0x4dffd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dffd8) {
            ctx->pc = 0x4DFFE8u;
            goto label_4dffe8;
        }
    }
    ctx->pc = 0x4DFFE0u;
label_4dffe0:
    // 0x4dffe0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dffe4:
    // 0x4dffe4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4dffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4dffe8:
    // 0x4dffe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dffec:
    // 0x4dffec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4dffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4dfff0:
    // 0x4dfff0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4dfff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dfff4:
    // 0x4dfff4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dfff8:
    if (ctx->pc == 0x4DFFF8u) {
        ctx->pc = 0x4DFFFCu;
        goto label_4dfffc;
    }
    ctx->pc = 0x4DFFF4u;
    {
        const bool branch_taken_0x4dfff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfff4) {
            ctx->pc = 0x4E0004u;
            goto label_4e0004;
        }
    }
    ctx->pc = 0x4DFFFCu;
label_4dfffc:
    // 0x4dfffc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dfffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0000:
    // 0x4e0000: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4e0000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4e0004:
    // 0x4e0004: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e0008:
    // 0x4e0008: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4e0008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4e000c:
    // 0x4e000c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e000cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e0010:
    // 0x4e0010: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e0014:
    if (ctx->pc == 0x4E0014u) {
        ctx->pc = 0x4E0014u;
            // 0x4e0014: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4E0018u;
        goto label_4e0018;
    }
    ctx->pc = 0x4E0010u;
    {
        const bool branch_taken_0x4e0010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0010) {
            ctx->pc = 0x4E0014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0010u;
            // 0x4e0014: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E0024u;
            goto label_4e0024;
        }
    }
    ctx->pc = 0x4E0018u;
label_4e0018:
    // 0x4e0018: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e0018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e001c:
    // 0x4e001c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4e001cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4e0020:
    // 0x4e0020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e0020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0024:
    // 0x4e0024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0028:
    // 0x4e0028: 0x3e00008  jr          $ra
label_4e002c:
    if (ctx->pc == 0x4E002Cu) {
        ctx->pc = 0x4E002Cu;
            // 0x4e002c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E0030u;
        goto label_4e0030;
    }
    ctx->pc = 0x4E0028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0028u;
            // 0x4e002c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0030u;
label_4e0030:
    // 0x4e0030: 0x8137d44  j           func_4DF510
label_4e0034:
    if (ctx->pc == 0x4E0034u) {
        ctx->pc = 0x4E0034u;
            // 0x4e0034: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4E0038u;
        goto label_4e0038;
    }
    ctx->pc = 0x4E0030u;
    ctx->pc = 0x4E0034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0030u;
            // 0x4e0034: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DF510u;
    {
        auto targetFn = runtime->lookupFunction(0x4DF510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E0038u;
label_4e0038:
    // 0x4e0038: 0x0  nop
    ctx->pc = 0x4e0038u;
    // NOP
label_4e003c:
    // 0x4e003c: 0x0  nop
    ctx->pc = 0x4e003cu;
    // NOP
label_4e0040:
    // 0x4e0040: 0x8137e84  j           func_4DFA10
label_4e0044:
    if (ctx->pc == 0x4E0044u) {
        ctx->pc = 0x4E0044u;
            // 0x4e0044: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E0048u;
        goto label_4e0048;
    }
    ctx->pc = 0x4E0040u;
    ctx->pc = 0x4E0044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0040u;
            // 0x4e0044: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DFA10u;
    {
        auto targetFn = runtime->lookupFunction(0x4DFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E0048u;
label_4e0048:
    // 0x4e0048: 0x0  nop
    ctx->pc = 0x4e0048u;
    // NOP
label_4e004c:
    // 0x4e004c: 0x0  nop
    ctx->pc = 0x4e004cu;
    // NOP
label_4e0050:
    // 0x4e0050: 0x8137cec  j           func_4DF3B0
label_4e0054:
    if (ctx->pc == 0x4E0054u) {
        ctx->pc = 0x4E0054u;
            // 0x4e0054: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E0058u;
        goto label_4e0058;
    }
    ctx->pc = 0x4E0050u;
    ctx->pc = 0x4E0054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0050u;
            // 0x4e0054: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DF3B0u;
    if (runtime->hasFunction(0x4DF3B0u)) {
        auto targetFn = runtime->lookupFunction(0x4DF3B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004DF3B0_0x4df3b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4E0058u;
label_4e0058:
    // 0x4e0058: 0x0  nop
    ctx->pc = 0x4e0058u;
    // NOP
label_4e005c:
    // 0x4e005c: 0x0  nop
    ctx->pc = 0x4e005cu;
    // NOP
label_4e0060:
    // 0x4e0060: 0x8137cc8  j           func_4DF320
label_4e0064:
    if (ctx->pc == 0x4E0064u) {
        ctx->pc = 0x4E0064u;
            // 0x4e0064: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E0068u;
        goto label_4e0068;
    }
    ctx->pc = 0x4E0060u;
    ctx->pc = 0x4E0064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0060u;
            // 0x4e0064: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DF320u;
    {
        auto targetFn = runtime->lookupFunction(0x4DF320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E0068u;
label_4e0068:
    // 0x4e0068: 0x0  nop
    ctx->pc = 0x4e0068u;
    // NOP
label_4e006c:
    // 0x4e006c: 0x0  nop
    ctx->pc = 0x4e006cu;
    // NOP
label_4e0070:
    // 0x4e0070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e0070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e0074:
    // 0x4e0074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e0074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e0078:
    // 0x4e0078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e0078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e007c:
    // 0x4e007c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e007cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e0080:
    // 0x4e0080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e0080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e0084:
    // 0x4e0084: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
label_4e0088:
    if (ctx->pc == 0x4E0088u) {
        ctx->pc = 0x4E0088u;
            // 0x4e0088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E008Cu;
        goto label_4e008c;
    }
    ctx->pc = 0x4E0084u;
    {
        const bool branch_taken_0x4e0084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0084u;
            // 0x4e0088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0084) {
            ctx->pc = 0x4E0170u;
            goto label_4e0170;
        }
    }
    ctx->pc = 0x4E008Cu;
label_4e008c:
    // 0x4e008c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e008cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0090:
    // 0x4e0090: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e0094:
    // 0x4e0094: 0x24633350  addiu       $v1, $v1, 0x3350
    ctx->pc = 0x4e0094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13136));
label_4e0098:
    // 0x4e0098: 0x24423388  addiu       $v0, $v0, 0x3388
    ctx->pc = 0x4e0098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13192));
label_4e009c:
    // 0x4e009c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e009cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e00a0:
    // 0x4e00a0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4e00a4:
    // 0x4e00a4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x4e00a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_4e00a8:
    // 0x4e00a8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4e00a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4e00ac:
    // 0x4e00ac: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4e00b0:
    if (ctx->pc == 0x4E00B0u) {
        ctx->pc = 0x4E00B0u;
            // 0x4e00b0: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x4E00B4u;
        goto label_4e00b4;
    }
    ctx->pc = 0x4E00ACu;
    {
        const bool branch_taken_0x4e00ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e00ac) {
            ctx->pc = 0x4E00B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E00ACu;
            // 0x4e00b0: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E00ECu;
            goto label_4e00ec;
        }
    }
    ctx->pc = 0x4E00B4u;
label_4e00b4:
    // 0x4e00b4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4e00b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4e00b8:
    // 0x4e00b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e00bc:
    // 0x4e00bc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4e00bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_4e00c0:
    // 0x4e00c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4e00c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4e00c4:
    // 0x4e00c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e00c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e00c8:
    // 0x4e00c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4e00cc:
    if (ctx->pc == 0x4E00CCu) {
        ctx->pc = 0x4E00D0u;
        goto label_4e00d0;
    }
    ctx->pc = 0x4E00C8u;
    {
        const bool branch_taken_0x4e00c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e00c8) {
            ctx->pc = 0x4E00E8u;
            goto label_4e00e8;
        }
    }
    ctx->pc = 0x4E00D0u;
label_4e00d0:
    // 0x4e00d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4e00d4:
    if (ctx->pc == 0x4E00D4u) {
        ctx->pc = 0x4E00D8u;
        goto label_4e00d8;
    }
    ctx->pc = 0x4E00D0u;
    {
        const bool branch_taken_0x4e00d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e00d0) {
            ctx->pc = 0x4E00E8u;
            goto label_4e00e8;
        }
    }
    ctx->pc = 0x4E00D8u;
label_4e00d8:
    // 0x4e00d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e00d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e00dc:
    // 0x4e00dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e00dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e00e0:
    // 0x4e00e0: 0x320f809  jalr        $t9
label_4e00e4:
    if (ctx->pc == 0x4E00E4u) {
        ctx->pc = 0x4E00E4u;
            // 0x4e00e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E00E8u;
        goto label_4e00e8;
    }
    ctx->pc = 0x4E00E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E00E8u);
        ctx->pc = 0x4E00E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E00E0u;
            // 0x4e00e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E00E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E00E8u; }
            if (ctx->pc != 0x4E00E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E00E8u;
label_4e00e8:
    // 0x4e00e8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x4e00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_4e00ec:
    // 0x4e00ec: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4e00ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4e00f0:
    // 0x4e00f0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4e00f4:
    if (ctx->pc == 0x4E00F4u) {
        ctx->pc = 0x4E00F8u;
        goto label_4e00f8;
    }
    ctx->pc = 0x4E00F0u;
    {
        const bool branch_taken_0x4e00f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e00f0) {
            ctx->pc = 0x4E012Cu;
            goto label_4e012c;
        }
    }
    ctx->pc = 0x4E00F8u;
label_4e00f8:
    // 0x4e00f8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4e00f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4e00fc:
    // 0x4e00fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e0100:
    // 0x4e0100: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4e0100u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_4e0104:
    // 0x4e0104: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4e0104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4e0108:
    // 0x4e0108: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e0108u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e010c:
    // 0x4e010c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4e0110:
    if (ctx->pc == 0x4E0110u) {
        ctx->pc = 0x4E0114u;
        goto label_4e0114;
    }
    ctx->pc = 0x4E010Cu;
    {
        const bool branch_taken_0x4e010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e010c) {
            ctx->pc = 0x4E012Cu;
            goto label_4e012c;
        }
    }
    ctx->pc = 0x4E0114u;
label_4e0114:
    // 0x4e0114: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4e0118:
    if (ctx->pc == 0x4E0118u) {
        ctx->pc = 0x4E011Cu;
        goto label_4e011c;
    }
    ctx->pc = 0x4E0114u;
    {
        const bool branch_taken_0x4e0114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0114) {
            ctx->pc = 0x4E012Cu;
            goto label_4e012c;
        }
    }
    ctx->pc = 0x4E011Cu;
label_4e011c:
    // 0x4e011c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e011cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e0120:
    // 0x4e0120: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e0120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e0124:
    // 0x4e0124: 0x320f809  jalr        $t9
label_4e0128:
    if (ctx->pc == 0x4E0128u) {
        ctx->pc = 0x4E0128u;
            // 0x4e0128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E012Cu;
        goto label_4e012c;
    }
    ctx->pc = 0x4E0124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E012Cu);
        ctx->pc = 0x4E0128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0124u;
            // 0x4e0128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E012Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E012Cu; }
            if (ctx->pc != 0x4E012Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E012Cu;
label_4e012c:
    // 0x4e012c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_4e0130:
    if (ctx->pc == 0x4E0130u) {
        ctx->pc = 0x4E0130u;
            // 0x4e0130: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4E0134u;
        goto label_4e0134;
    }
    ctx->pc = 0x4E012Cu;
    {
        const bool branch_taken_0x4e012c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e012c) {
            ctx->pc = 0x4E0130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E012Cu;
            // 0x4e0130: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E015Cu;
            goto label_4e015c;
        }
    }
    ctx->pc = 0x4E0134u;
label_4e0134:
    // 0x4e0134: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e0134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e0138:
    // 0x4e0138: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e013c:
    // 0x4e013c: 0x24633400  addiu       $v1, $v1, 0x3400
    ctx->pc = 0x4e013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13312));
label_4e0140:
    // 0x4e0140: 0x24423438  addiu       $v0, $v0, 0x3438
    ctx->pc = 0x4e0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13368));
label_4e0144:
    // 0x4e0144: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e0144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e0148:
    // 0x4e0148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e0148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e014c:
    // 0x4e014c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e014cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4e0150:
    // 0x4e0150: 0xc138064  jal         func_4E0190
label_4e0154:
    if (ctx->pc == 0x4E0154u) {
        ctx->pc = 0x4E0154u;
            // 0x4e0154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0158u;
        goto label_4e0158;
    }
    ctx->pc = 0x4E0150u;
    SET_GPR_U32(ctx, 31, 0x4E0158u);
    ctx->pc = 0x4E0154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0150u;
            // 0x4e0154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E0190u;
    if (runtime->hasFunction(0x4E0190u)) {
        auto targetFn = runtime->lookupFunction(0x4E0190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0158u; }
        if (ctx->pc != 0x4E0158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E0190_0x4e0190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0158u; }
        if (ctx->pc != 0x4E0158u) { return; }
    }
    ctx->pc = 0x4E0158u;
label_4e0158:
    // 0x4e0158: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e015c:
    // 0x4e015c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e015cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e0160:
    // 0x4e0160: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e0164:
    if (ctx->pc == 0x4E0164u) {
        ctx->pc = 0x4E0164u;
            // 0x4e0164: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0168u;
        goto label_4e0168;
    }
    ctx->pc = 0x4E0160u;
    {
        const bool branch_taken_0x4e0160 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e0160) {
            ctx->pc = 0x4E0164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0160u;
            // 0x4e0164: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E0174u;
            goto label_4e0174;
        }
    }
    ctx->pc = 0x4E0168u;
label_4e0168:
    // 0x4e0168: 0xc0400a8  jal         func_1002A0
label_4e016c:
    if (ctx->pc == 0x4E016Cu) {
        ctx->pc = 0x4E016Cu;
            // 0x4e016c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E0170u;
        goto label_4e0170;
    }
    ctx->pc = 0x4E0168u;
    SET_GPR_U32(ctx, 31, 0x4E0170u);
    ctx->pc = 0x4E016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0168u;
            // 0x4e016c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0170u; }
        if (ctx->pc != 0x4E0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0170u; }
        if (ctx->pc != 0x4E0170u) { return; }
    }
    ctx->pc = 0x4E0170u;
label_4e0170:
    // 0x4e0170: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e0170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e0174:
    // 0x4e0174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e0174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e0178:
    // 0x4e0178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e0178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e017c:
    // 0x4e017c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e017cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e0180:
    // 0x4e0180: 0x3e00008  jr          $ra
label_4e0184:
    if (ctx->pc == 0x4E0184u) {
        ctx->pc = 0x4E0184u;
            // 0x4e0184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E0188u;
        goto label_4e0188;
    }
    ctx->pc = 0x4E0180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0180u;
            // 0x4e0184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0188u;
label_4e0188:
    // 0x4e0188: 0x0  nop
    ctx->pc = 0x4e0188u;
    // NOP
label_4e018c:
    // 0x4e018c: 0x0  nop
    ctx->pc = 0x4e018cu;
    // NOP
}
