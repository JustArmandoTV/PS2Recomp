#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AEB70
// Address: 0x3aeb70 - 0x3af180
void sub_003AEB70_0x3aeb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEB70_0x3aeb70");
#endif

    switch (ctx->pc) {
        case 0x3aeb70u: goto label_3aeb70;
        case 0x3aeb74u: goto label_3aeb74;
        case 0x3aeb78u: goto label_3aeb78;
        case 0x3aeb7cu: goto label_3aeb7c;
        case 0x3aeb80u: goto label_3aeb80;
        case 0x3aeb84u: goto label_3aeb84;
        case 0x3aeb88u: goto label_3aeb88;
        case 0x3aeb8cu: goto label_3aeb8c;
        case 0x3aeb90u: goto label_3aeb90;
        case 0x3aeb94u: goto label_3aeb94;
        case 0x3aeb98u: goto label_3aeb98;
        case 0x3aeb9cu: goto label_3aeb9c;
        case 0x3aeba0u: goto label_3aeba0;
        case 0x3aeba4u: goto label_3aeba4;
        case 0x3aeba8u: goto label_3aeba8;
        case 0x3aebacu: goto label_3aebac;
        case 0x3aebb0u: goto label_3aebb0;
        case 0x3aebb4u: goto label_3aebb4;
        case 0x3aebb8u: goto label_3aebb8;
        case 0x3aebbcu: goto label_3aebbc;
        case 0x3aebc0u: goto label_3aebc0;
        case 0x3aebc4u: goto label_3aebc4;
        case 0x3aebc8u: goto label_3aebc8;
        case 0x3aebccu: goto label_3aebcc;
        case 0x3aebd0u: goto label_3aebd0;
        case 0x3aebd4u: goto label_3aebd4;
        case 0x3aebd8u: goto label_3aebd8;
        case 0x3aebdcu: goto label_3aebdc;
        case 0x3aebe0u: goto label_3aebe0;
        case 0x3aebe4u: goto label_3aebe4;
        case 0x3aebe8u: goto label_3aebe8;
        case 0x3aebecu: goto label_3aebec;
        case 0x3aebf0u: goto label_3aebf0;
        case 0x3aebf4u: goto label_3aebf4;
        case 0x3aebf8u: goto label_3aebf8;
        case 0x3aebfcu: goto label_3aebfc;
        case 0x3aec00u: goto label_3aec00;
        case 0x3aec04u: goto label_3aec04;
        case 0x3aec08u: goto label_3aec08;
        case 0x3aec0cu: goto label_3aec0c;
        case 0x3aec10u: goto label_3aec10;
        case 0x3aec14u: goto label_3aec14;
        case 0x3aec18u: goto label_3aec18;
        case 0x3aec1cu: goto label_3aec1c;
        case 0x3aec20u: goto label_3aec20;
        case 0x3aec24u: goto label_3aec24;
        case 0x3aec28u: goto label_3aec28;
        case 0x3aec2cu: goto label_3aec2c;
        case 0x3aec30u: goto label_3aec30;
        case 0x3aec34u: goto label_3aec34;
        case 0x3aec38u: goto label_3aec38;
        case 0x3aec3cu: goto label_3aec3c;
        case 0x3aec40u: goto label_3aec40;
        case 0x3aec44u: goto label_3aec44;
        case 0x3aec48u: goto label_3aec48;
        case 0x3aec4cu: goto label_3aec4c;
        case 0x3aec50u: goto label_3aec50;
        case 0x3aec54u: goto label_3aec54;
        case 0x3aec58u: goto label_3aec58;
        case 0x3aec5cu: goto label_3aec5c;
        case 0x3aec60u: goto label_3aec60;
        case 0x3aec64u: goto label_3aec64;
        case 0x3aec68u: goto label_3aec68;
        case 0x3aec6cu: goto label_3aec6c;
        case 0x3aec70u: goto label_3aec70;
        case 0x3aec74u: goto label_3aec74;
        case 0x3aec78u: goto label_3aec78;
        case 0x3aec7cu: goto label_3aec7c;
        case 0x3aec80u: goto label_3aec80;
        case 0x3aec84u: goto label_3aec84;
        case 0x3aec88u: goto label_3aec88;
        case 0x3aec8cu: goto label_3aec8c;
        case 0x3aec90u: goto label_3aec90;
        case 0x3aec94u: goto label_3aec94;
        case 0x3aec98u: goto label_3aec98;
        case 0x3aec9cu: goto label_3aec9c;
        case 0x3aeca0u: goto label_3aeca0;
        case 0x3aeca4u: goto label_3aeca4;
        case 0x3aeca8u: goto label_3aeca8;
        case 0x3aecacu: goto label_3aecac;
        case 0x3aecb0u: goto label_3aecb0;
        case 0x3aecb4u: goto label_3aecb4;
        case 0x3aecb8u: goto label_3aecb8;
        case 0x3aecbcu: goto label_3aecbc;
        case 0x3aecc0u: goto label_3aecc0;
        case 0x3aecc4u: goto label_3aecc4;
        case 0x3aecc8u: goto label_3aecc8;
        case 0x3aecccu: goto label_3aeccc;
        case 0x3aecd0u: goto label_3aecd0;
        case 0x3aecd4u: goto label_3aecd4;
        case 0x3aecd8u: goto label_3aecd8;
        case 0x3aecdcu: goto label_3aecdc;
        case 0x3aece0u: goto label_3aece0;
        case 0x3aece4u: goto label_3aece4;
        case 0x3aece8u: goto label_3aece8;
        case 0x3aececu: goto label_3aecec;
        case 0x3aecf0u: goto label_3aecf0;
        case 0x3aecf4u: goto label_3aecf4;
        case 0x3aecf8u: goto label_3aecf8;
        case 0x3aecfcu: goto label_3aecfc;
        case 0x3aed00u: goto label_3aed00;
        case 0x3aed04u: goto label_3aed04;
        case 0x3aed08u: goto label_3aed08;
        case 0x3aed0cu: goto label_3aed0c;
        case 0x3aed10u: goto label_3aed10;
        case 0x3aed14u: goto label_3aed14;
        case 0x3aed18u: goto label_3aed18;
        case 0x3aed1cu: goto label_3aed1c;
        case 0x3aed20u: goto label_3aed20;
        case 0x3aed24u: goto label_3aed24;
        case 0x3aed28u: goto label_3aed28;
        case 0x3aed2cu: goto label_3aed2c;
        case 0x3aed30u: goto label_3aed30;
        case 0x3aed34u: goto label_3aed34;
        case 0x3aed38u: goto label_3aed38;
        case 0x3aed3cu: goto label_3aed3c;
        case 0x3aed40u: goto label_3aed40;
        case 0x3aed44u: goto label_3aed44;
        case 0x3aed48u: goto label_3aed48;
        case 0x3aed4cu: goto label_3aed4c;
        case 0x3aed50u: goto label_3aed50;
        case 0x3aed54u: goto label_3aed54;
        case 0x3aed58u: goto label_3aed58;
        case 0x3aed5cu: goto label_3aed5c;
        case 0x3aed60u: goto label_3aed60;
        case 0x3aed64u: goto label_3aed64;
        case 0x3aed68u: goto label_3aed68;
        case 0x3aed6cu: goto label_3aed6c;
        case 0x3aed70u: goto label_3aed70;
        case 0x3aed74u: goto label_3aed74;
        case 0x3aed78u: goto label_3aed78;
        case 0x3aed7cu: goto label_3aed7c;
        case 0x3aed80u: goto label_3aed80;
        case 0x3aed84u: goto label_3aed84;
        case 0x3aed88u: goto label_3aed88;
        case 0x3aed8cu: goto label_3aed8c;
        case 0x3aed90u: goto label_3aed90;
        case 0x3aed94u: goto label_3aed94;
        case 0x3aed98u: goto label_3aed98;
        case 0x3aed9cu: goto label_3aed9c;
        case 0x3aeda0u: goto label_3aeda0;
        case 0x3aeda4u: goto label_3aeda4;
        case 0x3aeda8u: goto label_3aeda8;
        case 0x3aedacu: goto label_3aedac;
        case 0x3aedb0u: goto label_3aedb0;
        case 0x3aedb4u: goto label_3aedb4;
        case 0x3aedb8u: goto label_3aedb8;
        case 0x3aedbcu: goto label_3aedbc;
        case 0x3aedc0u: goto label_3aedc0;
        case 0x3aedc4u: goto label_3aedc4;
        case 0x3aedc8u: goto label_3aedc8;
        case 0x3aedccu: goto label_3aedcc;
        case 0x3aedd0u: goto label_3aedd0;
        case 0x3aedd4u: goto label_3aedd4;
        case 0x3aedd8u: goto label_3aedd8;
        case 0x3aeddcu: goto label_3aeddc;
        case 0x3aede0u: goto label_3aede0;
        case 0x3aede4u: goto label_3aede4;
        case 0x3aede8u: goto label_3aede8;
        case 0x3aedecu: goto label_3aedec;
        case 0x3aedf0u: goto label_3aedf0;
        case 0x3aedf4u: goto label_3aedf4;
        case 0x3aedf8u: goto label_3aedf8;
        case 0x3aedfcu: goto label_3aedfc;
        case 0x3aee00u: goto label_3aee00;
        case 0x3aee04u: goto label_3aee04;
        case 0x3aee08u: goto label_3aee08;
        case 0x3aee0cu: goto label_3aee0c;
        case 0x3aee10u: goto label_3aee10;
        case 0x3aee14u: goto label_3aee14;
        case 0x3aee18u: goto label_3aee18;
        case 0x3aee1cu: goto label_3aee1c;
        case 0x3aee20u: goto label_3aee20;
        case 0x3aee24u: goto label_3aee24;
        case 0x3aee28u: goto label_3aee28;
        case 0x3aee2cu: goto label_3aee2c;
        case 0x3aee30u: goto label_3aee30;
        case 0x3aee34u: goto label_3aee34;
        case 0x3aee38u: goto label_3aee38;
        case 0x3aee3cu: goto label_3aee3c;
        case 0x3aee40u: goto label_3aee40;
        case 0x3aee44u: goto label_3aee44;
        case 0x3aee48u: goto label_3aee48;
        case 0x3aee4cu: goto label_3aee4c;
        case 0x3aee50u: goto label_3aee50;
        case 0x3aee54u: goto label_3aee54;
        case 0x3aee58u: goto label_3aee58;
        case 0x3aee5cu: goto label_3aee5c;
        case 0x3aee60u: goto label_3aee60;
        case 0x3aee64u: goto label_3aee64;
        case 0x3aee68u: goto label_3aee68;
        case 0x3aee6cu: goto label_3aee6c;
        case 0x3aee70u: goto label_3aee70;
        case 0x3aee74u: goto label_3aee74;
        case 0x3aee78u: goto label_3aee78;
        case 0x3aee7cu: goto label_3aee7c;
        case 0x3aee80u: goto label_3aee80;
        case 0x3aee84u: goto label_3aee84;
        case 0x3aee88u: goto label_3aee88;
        case 0x3aee8cu: goto label_3aee8c;
        case 0x3aee90u: goto label_3aee90;
        case 0x3aee94u: goto label_3aee94;
        case 0x3aee98u: goto label_3aee98;
        case 0x3aee9cu: goto label_3aee9c;
        case 0x3aeea0u: goto label_3aeea0;
        case 0x3aeea4u: goto label_3aeea4;
        case 0x3aeea8u: goto label_3aeea8;
        case 0x3aeeacu: goto label_3aeeac;
        case 0x3aeeb0u: goto label_3aeeb0;
        case 0x3aeeb4u: goto label_3aeeb4;
        case 0x3aeeb8u: goto label_3aeeb8;
        case 0x3aeebcu: goto label_3aeebc;
        case 0x3aeec0u: goto label_3aeec0;
        case 0x3aeec4u: goto label_3aeec4;
        case 0x3aeec8u: goto label_3aeec8;
        case 0x3aeeccu: goto label_3aeecc;
        case 0x3aeed0u: goto label_3aeed0;
        case 0x3aeed4u: goto label_3aeed4;
        case 0x3aeed8u: goto label_3aeed8;
        case 0x3aeedcu: goto label_3aeedc;
        case 0x3aeee0u: goto label_3aeee0;
        case 0x3aeee4u: goto label_3aeee4;
        case 0x3aeee8u: goto label_3aeee8;
        case 0x3aeeecu: goto label_3aeeec;
        case 0x3aeef0u: goto label_3aeef0;
        case 0x3aeef4u: goto label_3aeef4;
        case 0x3aeef8u: goto label_3aeef8;
        case 0x3aeefcu: goto label_3aeefc;
        case 0x3aef00u: goto label_3aef00;
        case 0x3aef04u: goto label_3aef04;
        case 0x3aef08u: goto label_3aef08;
        case 0x3aef0cu: goto label_3aef0c;
        case 0x3aef10u: goto label_3aef10;
        case 0x3aef14u: goto label_3aef14;
        case 0x3aef18u: goto label_3aef18;
        case 0x3aef1cu: goto label_3aef1c;
        case 0x3aef20u: goto label_3aef20;
        case 0x3aef24u: goto label_3aef24;
        case 0x3aef28u: goto label_3aef28;
        case 0x3aef2cu: goto label_3aef2c;
        case 0x3aef30u: goto label_3aef30;
        case 0x3aef34u: goto label_3aef34;
        case 0x3aef38u: goto label_3aef38;
        case 0x3aef3cu: goto label_3aef3c;
        case 0x3aef40u: goto label_3aef40;
        case 0x3aef44u: goto label_3aef44;
        case 0x3aef48u: goto label_3aef48;
        case 0x3aef4cu: goto label_3aef4c;
        case 0x3aef50u: goto label_3aef50;
        case 0x3aef54u: goto label_3aef54;
        case 0x3aef58u: goto label_3aef58;
        case 0x3aef5cu: goto label_3aef5c;
        case 0x3aef60u: goto label_3aef60;
        case 0x3aef64u: goto label_3aef64;
        case 0x3aef68u: goto label_3aef68;
        case 0x3aef6cu: goto label_3aef6c;
        case 0x3aef70u: goto label_3aef70;
        case 0x3aef74u: goto label_3aef74;
        case 0x3aef78u: goto label_3aef78;
        case 0x3aef7cu: goto label_3aef7c;
        case 0x3aef80u: goto label_3aef80;
        case 0x3aef84u: goto label_3aef84;
        case 0x3aef88u: goto label_3aef88;
        case 0x3aef8cu: goto label_3aef8c;
        case 0x3aef90u: goto label_3aef90;
        case 0x3aef94u: goto label_3aef94;
        case 0x3aef98u: goto label_3aef98;
        case 0x3aef9cu: goto label_3aef9c;
        case 0x3aefa0u: goto label_3aefa0;
        case 0x3aefa4u: goto label_3aefa4;
        case 0x3aefa8u: goto label_3aefa8;
        case 0x3aefacu: goto label_3aefac;
        case 0x3aefb0u: goto label_3aefb0;
        case 0x3aefb4u: goto label_3aefb4;
        case 0x3aefb8u: goto label_3aefb8;
        case 0x3aefbcu: goto label_3aefbc;
        case 0x3aefc0u: goto label_3aefc0;
        case 0x3aefc4u: goto label_3aefc4;
        case 0x3aefc8u: goto label_3aefc8;
        case 0x3aefccu: goto label_3aefcc;
        case 0x3aefd0u: goto label_3aefd0;
        case 0x3aefd4u: goto label_3aefd4;
        case 0x3aefd8u: goto label_3aefd8;
        case 0x3aefdcu: goto label_3aefdc;
        case 0x3aefe0u: goto label_3aefe0;
        case 0x3aefe4u: goto label_3aefe4;
        case 0x3aefe8u: goto label_3aefe8;
        case 0x3aefecu: goto label_3aefec;
        case 0x3aeff0u: goto label_3aeff0;
        case 0x3aeff4u: goto label_3aeff4;
        case 0x3aeff8u: goto label_3aeff8;
        case 0x3aeffcu: goto label_3aeffc;
        case 0x3af000u: goto label_3af000;
        case 0x3af004u: goto label_3af004;
        case 0x3af008u: goto label_3af008;
        case 0x3af00cu: goto label_3af00c;
        case 0x3af010u: goto label_3af010;
        case 0x3af014u: goto label_3af014;
        case 0x3af018u: goto label_3af018;
        case 0x3af01cu: goto label_3af01c;
        case 0x3af020u: goto label_3af020;
        case 0x3af024u: goto label_3af024;
        case 0x3af028u: goto label_3af028;
        case 0x3af02cu: goto label_3af02c;
        case 0x3af030u: goto label_3af030;
        case 0x3af034u: goto label_3af034;
        case 0x3af038u: goto label_3af038;
        case 0x3af03cu: goto label_3af03c;
        case 0x3af040u: goto label_3af040;
        case 0x3af044u: goto label_3af044;
        case 0x3af048u: goto label_3af048;
        case 0x3af04cu: goto label_3af04c;
        case 0x3af050u: goto label_3af050;
        case 0x3af054u: goto label_3af054;
        case 0x3af058u: goto label_3af058;
        case 0x3af05cu: goto label_3af05c;
        case 0x3af060u: goto label_3af060;
        case 0x3af064u: goto label_3af064;
        case 0x3af068u: goto label_3af068;
        case 0x3af06cu: goto label_3af06c;
        case 0x3af070u: goto label_3af070;
        case 0x3af074u: goto label_3af074;
        case 0x3af078u: goto label_3af078;
        case 0x3af07cu: goto label_3af07c;
        case 0x3af080u: goto label_3af080;
        case 0x3af084u: goto label_3af084;
        case 0x3af088u: goto label_3af088;
        case 0x3af08cu: goto label_3af08c;
        case 0x3af090u: goto label_3af090;
        case 0x3af094u: goto label_3af094;
        case 0x3af098u: goto label_3af098;
        case 0x3af09cu: goto label_3af09c;
        case 0x3af0a0u: goto label_3af0a0;
        case 0x3af0a4u: goto label_3af0a4;
        case 0x3af0a8u: goto label_3af0a8;
        case 0x3af0acu: goto label_3af0ac;
        case 0x3af0b0u: goto label_3af0b0;
        case 0x3af0b4u: goto label_3af0b4;
        case 0x3af0b8u: goto label_3af0b8;
        case 0x3af0bcu: goto label_3af0bc;
        case 0x3af0c0u: goto label_3af0c0;
        case 0x3af0c4u: goto label_3af0c4;
        case 0x3af0c8u: goto label_3af0c8;
        case 0x3af0ccu: goto label_3af0cc;
        case 0x3af0d0u: goto label_3af0d0;
        case 0x3af0d4u: goto label_3af0d4;
        case 0x3af0d8u: goto label_3af0d8;
        case 0x3af0dcu: goto label_3af0dc;
        case 0x3af0e0u: goto label_3af0e0;
        case 0x3af0e4u: goto label_3af0e4;
        case 0x3af0e8u: goto label_3af0e8;
        case 0x3af0ecu: goto label_3af0ec;
        case 0x3af0f0u: goto label_3af0f0;
        case 0x3af0f4u: goto label_3af0f4;
        case 0x3af0f8u: goto label_3af0f8;
        case 0x3af0fcu: goto label_3af0fc;
        case 0x3af100u: goto label_3af100;
        case 0x3af104u: goto label_3af104;
        case 0x3af108u: goto label_3af108;
        case 0x3af10cu: goto label_3af10c;
        case 0x3af110u: goto label_3af110;
        case 0x3af114u: goto label_3af114;
        case 0x3af118u: goto label_3af118;
        case 0x3af11cu: goto label_3af11c;
        case 0x3af120u: goto label_3af120;
        case 0x3af124u: goto label_3af124;
        case 0x3af128u: goto label_3af128;
        case 0x3af12cu: goto label_3af12c;
        case 0x3af130u: goto label_3af130;
        case 0x3af134u: goto label_3af134;
        case 0x3af138u: goto label_3af138;
        case 0x3af13cu: goto label_3af13c;
        case 0x3af140u: goto label_3af140;
        case 0x3af144u: goto label_3af144;
        case 0x3af148u: goto label_3af148;
        case 0x3af14cu: goto label_3af14c;
        case 0x3af150u: goto label_3af150;
        case 0x3af154u: goto label_3af154;
        case 0x3af158u: goto label_3af158;
        case 0x3af15cu: goto label_3af15c;
        case 0x3af160u: goto label_3af160;
        case 0x3af164u: goto label_3af164;
        case 0x3af168u: goto label_3af168;
        case 0x3af16cu: goto label_3af16c;
        case 0x3af170u: goto label_3af170;
        case 0x3af174u: goto label_3af174;
        case 0x3af178u: goto label_3af178;
        case 0x3af17cu: goto label_3af17c;
        default: break;
    }

    ctx->pc = 0x3aeb70u;

label_3aeb70:
    // 0x3aeb70: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3aeb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3aeb74:
    // 0x3aeb74: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3aeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3aeb78:
    // 0x3aeb78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3aeb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3aeb7c:
    // 0x3aeb7c: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x3aeb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
label_3aeb80:
    // 0x3aeb80: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3aeb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3aeb84:
    // 0x3aeb84: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3aeb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3aeb88:
    // 0x3aeb88: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3aeb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3aeb8c:
    // 0x3aeb8c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3aeb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3aeb90:
    // 0x3aeb90: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3aeb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3aeb94:
    // 0x3aeb94: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3aeb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3aeb98:
    // 0x3aeb98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3aeb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3aeb9c:
    // 0x3aeb9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3aeb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3aeba0:
    // 0x3aeba0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3aeba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3aeba4:
    // 0x3aeba4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3aeba4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3aeba8:
    // 0x3aeba8: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3aeba8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3aebac:
    // 0x3aebac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3aebacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3aebb0:
    // 0x3aebb0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3aebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3aebb4:
    // 0x3aebb4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3aebb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3aebb8:
    // 0x3aebb8: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x3aebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
label_3aebbc:
    // 0x3aebbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3aebbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3aebc0:
    // 0x3aebc0: 0x26102114  addiu       $s0, $s0, 0x2114
    ctx->pc = 0x3aebc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8468));
label_3aebc4:
    // 0x3aebc4: 0x8d020d70  lw          $v0, 0xD70($t0)
    ctx->pc = 0x3aebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3440)));
label_3aebc8:
    // 0x3aebc8: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x3aebc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3aebcc:
    // 0x3aebcc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3aebccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_3aebd0:
    // 0x3aebd0: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x3aebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_3aebd4:
    // 0x3aebd4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x3aebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_3aebd8:
    // 0x3aebd8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x3aebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3aebdc:
    // 0x3aebdc: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x3aebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_3aebe0:
    // 0x3aebe0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3aebe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3aebe4:
    // 0x3aebe4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x3aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3aebe8:
    // 0x3aebe8: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x3aebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_3aebec:
    // 0x3aebec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3aebf0:
    // 0x3aebf0: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
label_3aebf4:
    if (ctx->pc == 0x3AEBF4u) {
        ctx->pc = 0x3AEBF4u;
            // 0x3aebf4: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x3AEBF8u;
        goto label_3aebf8;
    }
    ctx->pc = 0x3AEBF0u;
    {
        const bool branch_taken_0x3aebf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AEBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEBF0u;
            // 0x3aebf4: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aebf0) {
            ctx->pc = 0x3AEC38u;
            goto label_3aec38;
        }
    }
    ctx->pc = 0x3AEBF8u;
label_3aebf8:
    // 0x3aebf8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3aebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3aebfc:
    // 0x3aebfc: 0x8d030da0  lw          $v1, 0xDA0($t0)
    ctx->pc = 0x3aebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3488)));
label_3aec00:
    // 0x3aec00: 0x8c42f500  lw          $v0, -0xB00($v0)
    ctx->pc = 0x3aec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964480)));
label_3aec04:
    // 0x3aec04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3aec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3aec08:
    // 0x3aec08: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3aec0c:
    if (ctx->pc == 0x3AEC0Cu) {
        ctx->pc = 0x3AEC0Cu;
            // 0x3aec0c: 0xa120000d  sb          $zero, 0xD($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3AEC10u;
        goto label_3aec10;
    }
    ctx->pc = 0x3AEC08u;
    {
        const bool branch_taken_0x3aec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aec08) {
            ctx->pc = 0x3AEC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEC08u;
            // 0x3aec0c: 0xa120000d  sb          $zero, 0xD($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AEC3Cu;
            goto label_3aec3c;
        }
    }
    ctx->pc = 0x3AEC10u;
label_3aec10:
    // 0x3aec10: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3aec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3aec14:
    // 0x3aec14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3aec14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3aec18:
    // 0x3aec18: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x3aec18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_3aec1c:
    // 0x3aec1c: 0x8d230080  lw          $v1, 0x80($t1)
    ctx->pc = 0x3aec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
label_3aec20:
    // 0x3aec20: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x3aec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aec24:
    // 0x3aec24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3aec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3aec28:
    // 0x3aec28: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3aec28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3aec2c:
    // 0x3aec2c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3aec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_3aec30:
    // 0x3aec30: 0x1000000d  b           . + 4 + (0xD << 2)
label_3aec34:
    if (ctx->pc == 0x3AEC34u) {
        ctx->pc = 0x3AEC34u;
            // 0x3aec34: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->pc = 0x3AEC38u;
        goto label_3aec38;
    }
    ctx->pc = 0x3AEC30u;
    {
        const bool branch_taken_0x3aec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEC30u;
            // 0x3aec34: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec30) {
            ctx->pc = 0x3AEC68u;
            goto label_3aec68;
        }
    }
    ctx->pc = 0x3AEC38u;
label_3aec38:
    // 0x3aec38: 0xa120000d  sb          $zero, 0xD($t1)
    ctx->pc = 0x3aec38u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 13), (uint8_t)GPR_U32(ctx, 0));
label_3aec3c:
    // 0x3aec3c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3aec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3aec40:
    // 0x3aec40: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x3aec40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3aec44:
    // 0x3aec44: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3aec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3aec48:
    // 0x3aec48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3aec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3aec4c:
    // 0x3aec4c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x3aec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_3aec50:
    // 0x3aec50: 0xad200074  sw          $zero, 0x74($t1)
    ctx->pc = 0x3aec50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 0));
label_3aec54:
    // 0x3aec54: 0xad200078  sw          $zero, 0x78($t1)
    ctx->pc = 0x3aec54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 0));
label_3aec58:
    // 0x3aec58: 0x8d240080  lw          $a0, 0x80($t1)
    ctx->pc = 0x3aec58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
label_3aec5c:
    // 0x3aec5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3aec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3aec60:
    // 0x3aec60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3aec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3aec64:
    // 0x3aec64: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3aec64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3aec68:
    // 0x3aec68: 0x92240015  lbu         $a0, 0x15($s1)
    ctx->pc = 0x3aec68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
label_3aec6c:
    // 0x3aec6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3aec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aec70:
    // 0x3aec70: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x3aec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_3aec74:
    // 0x3aec74: 0x922a0014  lbu         $t2, 0x14($s1)
    ctx->pc = 0x3aec74u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_3aec78:
    // 0x3aec78: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3aec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_3aec7c:
    // 0x3aec7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3aec7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aec80:
    // 0x3aec80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3aec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3aec84:
    // 0x3aec84: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3aec84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3aec88:
    // 0x3aec88: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x3aec88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_3aec8c:
    // 0x3aec8c: 0x90440116  lbu         $a0, 0x116($v0)
    ctx->pc = 0x3aec8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_3aec90:
    // 0x3aec90: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x3aec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_3aec94:
    // 0x3aec94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aec94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aec98:
    // 0x3aec98: 0x14e3000a  bne         $a3, $v1, . + 4 + (0xA << 2)
label_3aec9c:
    if (ctx->pc == 0x3AEC9Cu) {
        ctx->pc = 0x3AEC9Cu;
            // 0x3aec9c: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3AECA0u;
        goto label_3aeca0;
    }
    ctx->pc = 0x3AEC98u;
    {
        const bool branch_taken_0x3aec98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AEC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEC98u;
            // 0x3aec9c: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aec98) {
            ctx->pc = 0x3AECC4u;
            goto label_3aecc4;
        }
    }
    ctx->pc = 0x3AECA0u;
label_3aeca0:
    // 0x3aeca0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3aeca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3aeca4:
    // 0x3aeca4: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x3aeca4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_3aeca8:
    // 0x3aeca8: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x3aeca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_3aecac:
    // 0x3aecac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3aecb0:
    // 0x3aecb0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3aecb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3aecb4:
    // 0x3aecb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aecb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aecb8:
    // 0x3aecb8: 0x0  nop
    ctx->pc = 0x3aecb8u;
    // NOP
label_3aecbc:
    // 0x3aecbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aecbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3aecc0:
    // 0x3aecc0: 0x4600bdc1  sub.s       $f23, $f23, $f0
    ctx->pc = 0x3aecc0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_3aecc4:
    // 0x3aecc4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3aecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3aecc8:
    // 0x3aecc8: 0x8d030da0  lw          $v1, 0xDA0($t0)
    ctx->pc = 0x3aecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3488)));
label_3aeccc:
    // 0x3aeccc: 0x8c42f508  lw          $v0, -0xAF8($v0)
    ctx->pc = 0x3aecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964488)));
label_3aecd0:
    // 0x3aecd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3aecd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3aecd4:
    // 0x3aecd4: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_3aecd8:
    if (ctx->pc == 0x3AECD8u) {
        ctx->pc = 0x3AECD8u;
            // 0x3aecd8: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->pc = 0x3AECDCu;
        goto label_3aecdc;
    }
    ctx->pc = 0x3AECD4u;
    {
        const bool branch_taken_0x3aecd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aecd4) {
            ctx->pc = 0x3AECD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AECD4u;
            // 0x3aecd8: 0x4600b024  .word       0x4600B024                   # cvt.w.s     $f0, $f22 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[22]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AEDC0u;
            goto label_3aedc0;
        }
    }
    ctx->pc = 0x3AECDCu;
label_3aecdc:
    // 0x3aecdc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3aecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3aece0:
    // 0x3aece0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3aece0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3aece4:
    // 0x3aece4: 0xc4559b38  lwc1        $f21, -0x64C8($v0)
    ctx->pc = 0x3aece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3aece8:
    // 0x3aece8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3aece8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3aecec:
    // 0x3aecec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3aececu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aecf0:
    // 0x3aecf0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3aecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3aecf4:
    // 0x3aecf4: 0xc4549b3c  lwc1        $f20, -0x64C4($v0)
    ctx->pc = 0x3aecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3aecf8:
    // 0x3aecf8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3aecfc:
    // 0x3aecfc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3aecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3aed00:
    // 0x3aed00: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x3aed00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3aed04:
    // 0x3aed04: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x3aed04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3aed08:
    // 0x3aed08: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3aed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3aed0c:
    // 0x3aed0c: 0x92240016  lbu         $a0, 0x16($s1)
    ctx->pc = 0x3aed0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_3aed10:
    // 0x3aed10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3aed10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3aed14:
    // 0x3aed14: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x3aed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3aed18:
    // 0x3aed18: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3aed18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3aed1c:
    // 0x3aed1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aed1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aed20:
    // 0x3aed20: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3aed20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3aed24:
    // 0x3aed24: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3aed24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3aed28:
    // 0x3aed28: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3aed2c:
    // 0x3aed2c: 0x944018  mult        $t0, $a0, $s4
    ctx->pc = 0x3aed2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_3aed30:
    // 0x3aed30: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x3aed30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_3aed34:
    // 0x3aed34: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x3aed34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_3aed38:
    // 0x3aed38: 0x24a59b30  addiu       $a1, $a1, -0x64D0
    ctx->pc = 0x3aed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941488));
label_3aed3c:
    // 0x3aed3c: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x3aed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_3aed40:
    // 0x3aed40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3aed40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aed44:
    // 0x3aed44: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x3aed44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_3aed48:
    // 0x3aed48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3aed48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aed4c:
    // 0x3aed4c: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x3aed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_3aed50:
    // 0x3aed50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3aed54:
    // 0x3aed54: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3aed54u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aed58:
    // 0x3aed58: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x3aed58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_3aed5c:
    // 0x3aed5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aed5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3aed60:
    // 0x3aed60: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x3aed60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3aed64:
    // 0x3aed64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aed64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3aed68:
    // 0x3aed68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3aed68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3aed6c:
    // 0x3aed6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3aed6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aed70:
    // 0x3aed70: 0x0  nop
    ctx->pc = 0x3aed70u;
    // NOP
label_3aed74:
    // 0x3aed74: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3aed74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3aed78:
    // 0x3aed78: 0x4604a802  mul.s       $f0, $f21, $f4
    ctx->pc = 0x3aed78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
label_3aed7c:
    // 0x3aed7c: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x3aed7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3aed80:
    // 0x3aed80: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x3aed80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_3aed84:
    // 0x3aed84: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3aed84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3aed88:
    // 0x3aed88: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x3aed88u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3aed8c:
    // 0x3aed8c: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x3aed8cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3aed90:
    // 0x3aed90: 0x4600b341  sub.s       $f13, $f22, $f0
    ctx->pc = 0x3aed90u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_3aed94:
    // 0x3aed94: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3aed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3aed98:
    // 0x3aed98: 0xc0bc284  jal         func_2F0A10
label_3aed9c:
    if (ctx->pc == 0x3AED9Cu) {
        ctx->pc = 0x3AED9Cu;
            // 0x3aed9c: 0x4600b3c0  add.s       $f15, $f22, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x3AEDA0u;
        goto label_3aeda0;
    }
    ctx->pc = 0x3AED98u;
    SET_GPR_U32(ctx, 31, 0x3AEDA0u);
    ctx->pc = 0x3AED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AED98u;
            // 0x3aed9c: 0x4600b3c0  add.s       $f15, $f22, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AEDA0u; }
        if (ctx->pc != 0x3AEDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AEDA0u; }
        if (ctx->pc != 0x3AEDA0u) { return; }
    }
    ctx->pc = 0x3AEDA0u;
label_3aeda0:
    // 0x3aeda0: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x3aeda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3aeda4:
    // 0x3aeda4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3aeda4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3aeda8:
    // 0x3aeda8: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x3aeda8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_3aedac:
    // 0x3aedac: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3aedacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3aedb0:
    // 0x3aedb0: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_3aedb4:
    if (ctx->pc == 0x3AEDB4u) {
        ctx->pc = 0x3AEDB4u;
            // 0x3aedb4: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->pc = 0x3AEDB8u;
        goto label_3aedb8;
    }
    ctx->pc = 0x3AEDB0u;
    {
        const bool branch_taken_0x3aedb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEDB0u;
            // 0x3aedb4: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aedb0) {
            ctx->pc = 0x3AED04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3aed04;
        }
    }
    ctx->pc = 0x3AEDB8u;
label_3aedb8:
    // 0x3aedb8: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_3aedbc:
    if (ctx->pc == 0x3AEDBCu) {
        ctx->pc = 0x3AEDBCu;
            // 0x3aedbc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3AEDC0u;
        goto label_3aedc0;
    }
    ctx->pc = 0x3AEDB8u;
    {
        const bool branch_taken_0x3aedb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEDB8u;
            // 0x3aedbc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aedb8) {
            ctx->pc = 0x3AF144u;
            goto label_3af144;
        }
    }
    ctx->pc = 0x3AEDC0u;
label_3aedc0:
    // 0x3aedc0: 0x8fb300f0  lw          $s3, 0xF0($sp)
    ctx->pc = 0x3aedc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3aedc4:
    // 0x3aedc4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3aedc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3aedc8:
    // 0x3aedc8: 0x309e00ff  andi        $fp, $a0, 0xFF
    ctx->pc = 0x3aedc8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3aedcc:
    // 0x3aedcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3aedccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aedd0:
    // 0x3aedd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3aedd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3aedd4:
    // 0x3aedd4: 0x0  nop
    ctx->pc = 0x3aedd4u;
    // NOP
label_3aedd8:
    // 0x3aedd8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3aedd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3aeddc:
    // 0x3aeddc: 0x92250016  lbu         $a1, 0x16($s1)
    ctx->pc = 0x3aeddcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
label_3aede0:
    // 0x3aede0: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x3aede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3aede4:
    // 0x3aede4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3aede4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3aede8:
    // 0x3aede8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3aede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aedec:
    // 0x3aedec: 0x2417ff00  addiu       $s7, $zero, -0x100
    ctx->pc = 0x3aedecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3aedf0:
    // 0x3aedf0: 0xb42818  mult        $a1, $a1, $s4
    ctx->pc = 0x3aedf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3aedf4:
    // 0x3aedf4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3aedf4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aedf8:
    // 0x3aedf8: 0x0  nop
    ctx->pc = 0x3aedf8u;
    // NOP
label_3aedfc:
    // 0x3aedfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aedfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3aee00:
    // 0x3aee00: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x3aee00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3aee04:
    // 0x3aee04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aee04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3aee08:
    // 0x3aee08: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x3aee08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_3aee0c:
    // 0x3aee0c: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
label_3aee10:
    if (ctx->pc == 0x3AEE10u) {
        ctx->pc = 0x3AEE10u;
            // 0x3aee10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AEE14u;
        goto label_3aee14;
    }
    ctx->pc = 0x3AEE0Cu;
    {
        const bool branch_taken_0x3aee0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AEE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEE0Cu;
            // 0x3aee10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee0c) {
            ctx->pc = 0x3AEEF0u;
            goto label_3aeef0;
        }
    }
    ctx->pc = 0x3AEE14u;
label_3aee14:
    // 0x3aee14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3aee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aee18:
    // 0x3aee18: 0x1085002b  beq         $a0, $a1, . + 4 + (0x2B << 2)
label_3aee1c:
    if (ctx->pc == 0x3AEE1Cu) {
        ctx->pc = 0x3AEE20u;
        goto label_3aee20;
    }
    ctx->pc = 0x3AEE18u;
    {
        const bool branch_taken_0x3aee18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3aee18) {
            ctx->pc = 0x3AEEC8u;
            goto label_3aeec8;
        }
    }
    ctx->pc = 0x3AEE20u;
label_3aee20:
    // 0x3aee20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3aee24:
    if (ctx->pc == 0x3AEE24u) {
        ctx->pc = 0x3AEE28u;
        goto label_3aee28;
    }
    ctx->pc = 0x3AEE20u;
    {
        const bool branch_taken_0x3aee20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aee20) {
            ctx->pc = 0x3AEE30u;
            goto label_3aee30;
        }
    }
    ctx->pc = 0x3AEE28u;
label_3aee28:
    // 0x3aee28: 0x10000039  b           . + 4 + (0x39 << 2)
label_3aee2c:
    if (ctx->pc == 0x3AEE2Cu) {
        ctx->pc = 0x3AEE30u;
        goto label_3aee30;
    }
    ctx->pc = 0x3AEE28u;
    {
        const bool branch_taken_0x3aee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aee28) {
            ctx->pc = 0x3AEF10u;
            goto label_3aef10;
        }
    }
    ctx->pc = 0x3AEE30u;
label_3aee30:
    // 0x3aee30: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x3aee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3aee34:
    // 0x3aee34: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3aee34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3aee38:
    // 0x3aee38: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x3aee38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3aee3c:
    // 0x3aee3c: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x3aee3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3aee40:
    // 0x3aee40: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3aee40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3aee44:
    // 0x3aee44: 0x16830016  bne         $s4, $v1, . + 4 + (0x16 << 2)
label_3aee48:
    if (ctx->pc == 0x3AEE48u) {
        ctx->pc = 0x3AEE4Cu;
        goto label_3aee4c;
    }
    ctx->pc = 0x3AEE44u;
    {
        const bool branch_taken_0x3aee44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x3aee44) {
            ctx->pc = 0x3AEEA0u;
            goto label_3aeea0;
        }
    }
    ctx->pc = 0x3AEE4Cu;
label_3aee4c:
    // 0x3aee4c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3aee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3aee50:
    // 0x3aee50: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x3aee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3aee54:
    // 0x3aee54: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3aee58:
    if (ctx->pc == 0x3AEE58u) {
        ctx->pc = 0x3AEE58u;
            // 0x3aee58: 0x2643002c  addiu       $v1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->pc = 0x3AEE5Cu;
        goto label_3aee5c;
    }
    ctx->pc = 0x3AEE54u;
    {
        const bool branch_taken_0x3aee54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AEE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEE54u;
            // 0x3aee58: 0x2643002c  addiu       $v1, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee54) {
            ctx->pc = 0x3AEE98u;
            goto label_3aee98;
        }
    }
    ctx->pc = 0x3AEE5Cu;
label_3aee5c:
    // 0x3aee5c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3aee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3aee60:
    // 0x3aee60: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x3aee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_3aee64:
    // 0x3aee64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3aee64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3aee68:
    // 0x3aee68: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x3aee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_3aee6c:
    // 0x3aee6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3aee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3aee70:
    // 0x3aee70: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x3aee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aee74:
    // 0x3aee74: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x3aee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_3aee78:
    // 0x3aee78: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3aee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3aee7c:
    // 0x3aee7c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3aee80:
    // 0x3aee80: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x3aee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aee84:
    // 0x3aee84: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3aee84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3aee88:
    // 0x3aee88: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3aee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3aee8c:
    // 0x3aee8c: 0xac760010  sw          $s6, 0x10($v1)
    ctx->pc = 0x3aee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 22));
label_3aee90:
    // 0x3aee90: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x3aee90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_3aee94:
    // 0x3aee94: 0x0  nop
    ctx->pc = 0x3aee94u;
    // NOP
label_3aee98:
    // 0x3aee98: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3aee9c:
    if (ctx->pc == 0x3AEE9Cu) {
        ctx->pc = 0x3AEE9Cu;
            // 0x3aee9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3AEEA0u;
        goto label_3aeea0;
    }
    ctx->pc = 0x3AEE98u;
    {
        const bool branch_taken_0x3aee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEE98u;
            // 0x3aee9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aee98) {
            ctx->pc = 0x3AEF10u;
            goto label_3aef10;
        }
    }
    ctx->pc = 0x3AEEA0u;
label_3aeea0:
    // 0x3aeea0: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x3aeea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_3aeea4:
    // 0x3aeea4: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3aeea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3aeea8:
    // 0x3aeea8: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x3aeea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
label_3aeeac:
    // 0x3aeeac: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x3aeeacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_3aeeb0:
    // 0x3aeeb0: 0x34778000  ori         $s7, $v1, 0x8000
    ctx->pc = 0x3aeeb0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_3aeeb4:
    // 0x3aeeb4: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x3aeeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_3aeeb8:
    // 0x3aeeb8: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x3aeeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_3aeebc:
    // 0x3aeebc: 0x10000014  b           . + 4 + (0x14 << 2)
label_3aeec0:
    if (ctx->pc == 0x3AEEC0u) {
        ctx->pc = 0x3AEEC0u;
            // 0x3aeec0: 0xae400040  sw          $zero, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x3AEEC4u;
        goto label_3aeec4;
    }
    ctx->pc = 0x3AEEBCu;
    {
        const bool branch_taken_0x3aeebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEEBCu;
            // 0x3aeec0: 0xae400040  sw          $zero, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeebc) {
            ctx->pc = 0x3AEF10u;
            goto label_3aef10;
        }
    }
    ctx->pc = 0x3AEEC4u;
label_3aeec4:
    // 0x3aeec4: 0x0  nop
    ctx->pc = 0x3aeec4u;
    // NOP
label_3aeec8:
    // 0x3aeec8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x3aeec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_3aeecc:
    // 0x3aeecc: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3aeeccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3aeed0:
    // 0x3aeed0: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x3aeed0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_3aeed4:
    // 0x3aeed4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x3aeed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_3aeed8:
    // 0x3aeed8: 0x26b59b30  addiu       $s5, $s5, -0x64D0
    ctx->pc = 0x3aeed8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941488));
label_3aeedc:
    // 0x3aeedc: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x3aeedcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_3aeee0:
    // 0x3aeee0: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x3aeee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_3aeee4:
    // 0x3aeee4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3aeee8:
    if (ctx->pc == 0x3AEEE8u) {
        ctx->pc = 0x3AEEE8u;
            // 0x3aeee8: 0xae400040  sw          $zero, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x3AEEECu;
        goto label_3aeeec;
    }
    ctx->pc = 0x3AEEE4u;
    {
        const bool branch_taken_0x3aeee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEEE4u;
            // 0x3aeee8: 0xae400040  sw          $zero, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeee4) {
            ctx->pc = 0x3AEF10u;
            goto label_3aef10;
        }
    }
    ctx->pc = 0x3AEEECu;
label_3aeeec:
    // 0x3aeeec: 0x0  nop
    ctx->pc = 0x3aeeecu;
    // NOP
label_3aeef0:
    // 0x3aeef0: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x3aeef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_3aeef4:
    // 0x3aeef4: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3aeef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3aeef8:
    // 0x3aeef8: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x3aeef8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_3aeefc:
    // 0x3aeefc: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x3aeefcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_3aef00:
    // 0x3aef00: 0x26b59b40  addiu       $s5, $s5, -0x64C0
    ctx->pc = 0x3aef00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941504));
label_3aef04:
    // 0x3aef04: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x3aef04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_3aef08:
    // 0x3aef08: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x3aef08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_3aef0c:
    // 0x3aef0c: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x3aef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_3aef10:
    // 0x3aef10: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3aef10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3aef14:
    // 0x3aef14: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x3aef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3aef18:
    // 0x3aef18: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x3aef18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3aef1c:
    // 0x3aef1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3aef1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aef20:
    // 0x3aef20: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3aef20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3aef24:
    // 0x3aef24: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x3aef24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3aef28:
    // 0x3aef28: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x3aef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3aef2c:
    // 0x3aef2c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3aef2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3aef30:
    // 0x3aef30: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x3aef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_3aef34:
    // 0x3aef34: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x3aef34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3aef38:
    // 0x3aef38: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_3aef3c:
    if (ctx->pc == 0x3AEF3Cu) {
        ctx->pc = 0x3AEF3Cu;
            // 0x3aef3c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3AEF40u;
        goto label_3aef40;
    }
    ctx->pc = 0x3AEF38u;
    {
        const bool branch_taken_0x3aef38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AEF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEF38u;
            // 0x3aef3c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aef38) {
            ctx->pc = 0x3AEF90u;
            goto label_3aef90;
        }
    }
    ctx->pc = 0x3AEF40u;
label_3aef40:
    // 0x3aef40: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x3aef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_3aef44:
    // 0x3aef44: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_3aef48:
    if (ctx->pc == 0x3AEF48u) {
        ctx->pc = 0x3AEF4Cu;
        goto label_3aef4c;
    }
    ctx->pc = 0x3AEF44u;
    {
        const bool branch_taken_0x3aef44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aef44) {
            ctx->pc = 0x3AEF58u;
            goto label_3aef58;
        }
    }
    ctx->pc = 0x3AEF4Cu;
label_3aef4c:
    // 0x3aef4c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_3aef50:
    if (ctx->pc == 0x3AEF50u) {
        ctx->pc = 0x3AEF54u;
        goto label_3aef54;
    }
    ctx->pc = 0x3AEF4Cu;
    {
        const bool branch_taken_0x3aef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aef4c) {
            ctx->pc = 0x3AF0C0u;
            goto label_3af0c0;
        }
    }
    ctx->pc = 0x3AEF54u;
label_3aef54:
    // 0x3aef54: 0x0  nop
    ctx->pc = 0x3aef54u;
    // NOP
label_3aef58:
    // 0x3aef58: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3aef58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3aef5c:
    // 0x3aef5c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3aef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3aef60:
    // 0x3aef60: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_3aef64:
    if (ctx->pc == 0x3AEF64u) {
        ctx->pc = 0x3AEF68u;
        goto label_3aef68;
    }
    ctx->pc = 0x3AEF60u;
    {
        const bool branch_taken_0x3aef60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aef60) {
            ctx->pc = 0x3AEF90u;
            goto label_3aef90;
        }
    }
    ctx->pc = 0x3AEF68u;
label_3aef68:
    // 0x3aef68: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3aef68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3aef6c:
    // 0x3aef6c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_3aef70:
    if (ctx->pc == 0x3AEF70u) {
        ctx->pc = 0x3AEF74u;
        goto label_3aef74;
    }
    ctx->pc = 0x3AEF6Cu;
    {
        const bool branch_taken_0x3aef6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aef6c) {
            ctx->pc = 0x3AEF90u;
            goto label_3aef90;
        }
    }
    ctx->pc = 0x3AEF74u;
label_3aef74:
    // 0x3aef74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3aef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3aef78:
    // 0x3aef78: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_3aef7c:
    if (ctx->pc == 0x3AEF7Cu) {
        ctx->pc = 0x3AEF80u;
        goto label_3aef80;
    }
    ctx->pc = 0x3AEF78u;
    {
        const bool branch_taken_0x3aef78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aef78) {
            ctx->pc = 0x3AEF90u;
            goto label_3aef90;
        }
    }
    ctx->pc = 0x3AEF80u;
label_3aef80:
    // 0x3aef80: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x3aef80u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_3aef84:
    // 0x3aef84: 0x26b59b40  addiu       $s5, $s5, -0x64C0
    ctx->pc = 0x3aef84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941504));
label_3aef88:
    // 0x3aef88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aef88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aef8c:
    // 0x3aef8c: 0x0  nop
    ctx->pc = 0x3aef8cu;
    // NOP
label_3aef90:
    // 0x3aef90: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_3aef94:
    if (ctx->pc == 0x3AEF94u) {
        ctx->pc = 0x3AEF98u;
        goto label_3aef98;
    }
    ctx->pc = 0x3AEF90u;
    {
        const bool branch_taken_0x3aef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aef90) {
            ctx->pc = 0x3AF060u;
            goto label_3af060;
        }
    }
    ctx->pc = 0x3AEF98u;
label_3aef98:
    // 0x3aef98: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x3aef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3aef9c:
    // 0x3aef9c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3aef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3aefa0:
    // 0x3aefa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3aefa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3aefa4:
    // 0x3aefa4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3aefa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3aefa8:
    // 0x3aefa8: 0x320f809  jalr        $t9
label_3aefac:
    if (ctx->pc == 0x3AEFACu) {
        ctx->pc = 0x3AEFB0u;
        goto label_3aefb0;
    }
    ctx->pc = 0x3AEFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AEFB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AEFB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AEFB0u; }
            if (ctx->pc != 0x3AEFB0u) { return; }
        }
        }
    }
    ctx->pc = 0x3AEFB0u;
label_3aefb0:
    // 0x3aefb0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3aefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3aefb4:
    // 0x3aefb4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3aefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3aefb8:
    // 0x3aefb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3aefb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aefbc:
    // 0x3aefbc: 0x0  nop
    ctx->pc = 0x3aefbcu;
    // NOP
label_3aefc0:
    // 0x3aefc0: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x3aefc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3aefc4:
    // 0x3aefc4: 0x34430b60  ori         $v1, $v0, 0xB60
    ctx->pc = 0x3aefc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3aefc8:
    // 0x3aefc8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3aefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3aefcc:
    // 0x3aefcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3aefccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aefd0:
    // 0x3aefd0: 0x0  nop
    ctx->pc = 0x3aefd0u;
    // NOP
label_3aefd4:
    // 0x3aefd4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3aefd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3aefd8:
    // 0x3aefd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3aefd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aefdc:
    // 0x3aefdc: 0x0  nop
    ctx->pc = 0x3aefdcu;
    // NOP
label_3aefe0:
    // 0x3aefe0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3aefe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3aefe4:
    // 0x3aefe4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3aefe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3aefe8:
    // 0x3aefe8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3aefe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3aefec:
    // 0x3aefec: 0xc04f2b8  jal         func_13CAE0
label_3aeff0:
    if (ctx->pc == 0x3AEFF0u) {
        ctx->pc = 0x3AEFF0u;
            // 0x3aeff0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3AEFF4u;
        goto label_3aeff4;
    }
    ctx->pc = 0x3AEFECu;
    SET_GPR_U32(ctx, 31, 0x3AEFF4u);
    ctx->pc = 0x3AEFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AEFECu;
            // 0x3aeff0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AEFF4u; }
        if (ctx->pc != 0x3AEFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AEFF4u; }
        if (ctx->pc != 0x3AEFF4u) { return; }
    }
    ctx->pc = 0x3AEFF4u;
label_3aeff4:
    // 0x3aeff4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3aeff4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aeff8:
    // 0x3aeff8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3aeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3aeffc:
    // 0x3aeffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3aeffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3af000:
    // 0x3af000: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3af000u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3af004:
    // 0x3af004: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3af008:
    // 0x3af008: 0x2fe3025  or          $a2, $s7, $fp
    ctx->pc = 0x3af008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 30));
label_3af00c:
    // 0x3af00c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3af010:
    // 0x3af010: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3af010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3af014:
    // 0x3af014: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x3af014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3af018:
    // 0x3af018: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x3af018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_3af01c:
    // 0x3af01c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x3af01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3af020:
    // 0x3af020: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3af020u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af024:
    // 0x3af024: 0x0  nop
    ctx->pc = 0x3af024u;
    // NOP
label_3af028:
    // 0x3af028: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3af02c:
    // 0x3af02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af030:
    // 0x3af030: 0x0  nop
    ctx->pc = 0x3af030u;
    // NOP
label_3af034:
    // 0x3af034: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3af038:
    // 0x3af038: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x3af038u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_3af03c:
    // 0x3af03c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x3af03cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_3af040:
    // 0x3af040: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x3af040u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_3af044:
    // 0x3af044: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x3af044u;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
label_3af048:
    // 0x3af048: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3af04c:
    // 0x3af04c: 0xc0bc284  jal         func_2F0A10
label_3af050:
    if (ctx->pc == 0x3AF050u) {
        ctx->pc = 0x3AF050u;
            // 0x3af050: 0xe7b60154  swc1        $f22, 0x154($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
        ctx->pc = 0x3AF054u;
        goto label_3af054;
    }
    ctx->pc = 0x3AF04Cu;
    SET_GPR_U32(ctx, 31, 0x3AF054u);
    ctx->pc = 0x3AF050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF04Cu;
            // 0x3af050: 0xe7b60154  swc1        $f22, 0x154($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF054u; }
        if (ctx->pc != 0x3AF054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF054u; }
        if (ctx->pc != 0x3AF054u) { return; }
    }
    ctx->pc = 0x3AF054u;
label_3af054:
    // 0x3af054: 0x10000030  b           . + 4 + (0x30 << 2)
label_3af058:
    if (ctx->pc == 0x3AF058u) {
        ctx->pc = 0x3AF05Cu;
        goto label_3af05c;
    }
    ctx->pc = 0x3AF054u;
    {
        const bool branch_taken_0x3af054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af054) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AF05Cu;
label_3af05c:
    // 0x3af05c: 0x0  nop
    ctx->pc = 0x3af05cu;
    // NOP
label_3af060:
    // 0x3af060: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3af064:
    // 0x3af064: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3af064u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af068:
    // 0x3af068: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3af068u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3af06c:
    // 0x3af06c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3af06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3af070:
    // 0x3af070: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3af074:
    // 0x3af074: 0x2fe3025  or          $a2, $s7, $fp
    ctx->pc = 0x3af074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 30));
label_3af078:
    // 0x3af078: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3af07c:
    // 0x3af07c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3af07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3af080:
    // 0x3af080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af084:
    // 0x3af084: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3af084u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af088:
    // 0x3af088: 0x0  nop
    ctx->pc = 0x3af088u;
    // NOP
label_3af08c:
    // 0x3af08c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3af090:
    // 0x3af090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af094:
    // 0x3af094: 0x0  nop
    ctx->pc = 0x3af094u;
    // NOP
label_3af098:
    // 0x3af098: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3af09c:
    // 0x3af09c: 0x46150b01  sub.s       $f12, $f1, $f21
    ctx->pc = 0x3af09cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_3af0a0:
    // 0x3af0a0: 0x46150b80  add.s       $f14, $f1, $f21
    ctx->pc = 0x3af0a0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3af0a4:
    // 0x3af0a4: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x3af0a4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_3af0a8:
    // 0x3af0a8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3af0ac:
    // 0x3af0ac: 0xc0bc284  jal         func_2F0A10
label_3af0b0:
    if (ctx->pc == 0x3AF0B0u) {
        ctx->pc = 0x3AF0B0u;
            // 0x3af0b0: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x3AF0B4u;
        goto label_3af0b4;
    }
    ctx->pc = 0x3AF0ACu;
    SET_GPR_U32(ctx, 31, 0x3AF0B4u);
    ctx->pc = 0x3AF0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF0ACu;
            // 0x3af0b0: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF0B4u; }
        if (ctx->pc != 0x3AF0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF0B4u; }
        if (ctx->pc != 0x3AF0B4u) { return; }
    }
    ctx->pc = 0x3AF0B4u;
label_3af0b4:
    // 0x3af0b4: 0x10000018  b           . + 4 + (0x18 << 2)
label_3af0b8:
    if (ctx->pc == 0x3AF0B8u) {
        ctx->pc = 0x3AF0BCu;
        goto label_3af0bc;
    }
    ctx->pc = 0x3AF0B4u;
    {
        const bool branch_taken_0x3af0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3af0b4) {
            ctx->pc = 0x3AF118u;
            goto label_3af118;
        }
    }
    ctx->pc = 0x3AF0BCu;
label_3af0bc:
    // 0x3af0bc: 0x0  nop
    ctx->pc = 0x3af0bcu;
    // NOP
label_3af0c0:
    // 0x3af0c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3af0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3af0c4:
    // 0x3af0c4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3af0c4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af0c8:
    // 0x3af0c8: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3af0c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3af0cc:
    // 0x3af0cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3af0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3af0d0:
    // 0x3af0d0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3af0d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3af0d4:
    // 0x3af0d4: 0x2fe3025  or          $a2, $s7, $fp
    ctx->pc = 0x3af0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 30));
label_3af0d8:
    // 0x3af0d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3af0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3af0dc:
    // 0x3af0dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3af0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3af0e0:
    // 0x3af0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3af0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af0e4:
    // 0x3af0e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3af0e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af0e8:
    // 0x3af0e8: 0x0  nop
    ctx->pc = 0x3af0e8u;
    // NOP
label_3af0ec:
    // 0x3af0ec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3af0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3af0f0:
    // 0x3af0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3af0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3af0f4:
    // 0x3af0f4: 0x0  nop
    ctx->pc = 0x3af0f4u;
    // NOP
label_3af0f8:
    // 0x3af0f8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3af0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3af0fc:
    // 0x3af0fc: 0x46150b01  sub.s       $f12, $f1, $f21
    ctx->pc = 0x3af0fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_3af100:
    // 0x3af100: 0x46150b80  add.s       $f14, $f1, $f21
    ctx->pc = 0x3af100u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3af104:
    // 0x3af104: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x3af104u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_3af108:
    // 0x3af108: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3af108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3af10c:
    // 0x3af10c: 0xc0bc284  jal         func_2F0A10
label_3af110:
    if (ctx->pc == 0x3AF110u) {
        ctx->pc = 0x3AF110u;
            // 0x3af110: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x3AF114u;
        goto label_3af114;
    }
    ctx->pc = 0x3AF10Cu;
    SET_GPR_U32(ctx, 31, 0x3AF114u);
    ctx->pc = 0x3AF110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF10Cu;
            // 0x3af110: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF114u; }
        if (ctx->pc != 0x3AF114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AF114u; }
        if (ctx->pc != 0x3AF114u) { return; }
    }
    ctx->pc = 0x3AF114u;
label_3af114:
    // 0x3af114: 0x0  nop
    ctx->pc = 0x3af114u;
    // NOP
label_3af118:
    // 0x3af118: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x3af118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3af11c:
    // 0x3af11c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3af11cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3af120:
    // 0x3af120: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3af120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3af124:
    // 0x3af124: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3af124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3af128:
    // 0x3af128: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x3af128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_3af12c:
    // 0x3af12c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x3af12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3af130:
    // 0x3af130: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x3af130u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_3af134:
    // 0x3af134: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x3af134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3af138:
    // 0x3af138: 0x1460ff28  bnez        $v1, . + 4 + (-0xD8 << 2)
label_3af13c:
    if (ctx->pc == 0x3AF13Cu) {
        ctx->pc = 0x3AF13Cu;
            // 0x3af13c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x3AF140u;
        goto label_3af140;
    }
    ctx->pc = 0x3AF138u;
    {
        const bool branch_taken_0x3af138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF138u;
            // 0x3af13c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af138) {
            ctx->pc = 0x3AEDDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3aeddc;
        }
    }
    ctx->pc = 0x3AF140u;
label_3af140:
    // 0x3af140: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3af140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3af144:
    // 0x3af144: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3af144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3af148:
    // 0x3af148: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3af148u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3af14c:
    // 0x3af14c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3af14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3af150:
    // 0x3af150: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3af150u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3af154:
    // 0x3af154: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3af154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3af158:
    // 0x3af158: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3af158u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3af15c:
    // 0x3af15c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3af15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3af160:
    // 0x3af160: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3af160u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3af164:
    // 0x3af164: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3af164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3af168:
    // 0x3af168: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3af168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3af16c:
    // 0x3af16c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3af16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3af170:
    // 0x3af170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3af170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3af174:
    // 0x3af174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3af174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3af178:
    // 0x3af178: 0x3e00008  jr          $ra
label_3af17c:
    if (ctx->pc == 0x3AF17Cu) {
        ctx->pc = 0x3AF17Cu;
            // 0x3af17c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x3AF180u;
        goto label_fallthrough_0x3af178;
    }
    ctx->pc = 0x3AF178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AF178u;
            // 0x3af17c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3af178:
    ctx->pc = 0x3AF180u;
}
