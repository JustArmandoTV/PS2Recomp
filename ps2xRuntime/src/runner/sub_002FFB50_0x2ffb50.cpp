#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FFB50
// Address: 0x2ffb50 - 0x301540
void sub_002FFB50_0x2ffb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFB50_0x2ffb50");
#endif

    switch (ctx->pc) {
        case 0x2ffb50u: goto label_2ffb50;
        case 0x2ffb54u: goto label_2ffb54;
        case 0x2ffb58u: goto label_2ffb58;
        case 0x2ffb5cu: goto label_2ffb5c;
        case 0x2ffb60u: goto label_2ffb60;
        case 0x2ffb64u: goto label_2ffb64;
        case 0x2ffb68u: goto label_2ffb68;
        case 0x2ffb6cu: goto label_2ffb6c;
        case 0x2ffb70u: goto label_2ffb70;
        case 0x2ffb74u: goto label_2ffb74;
        case 0x2ffb78u: goto label_2ffb78;
        case 0x2ffb7cu: goto label_2ffb7c;
        case 0x2ffb80u: goto label_2ffb80;
        case 0x2ffb84u: goto label_2ffb84;
        case 0x2ffb88u: goto label_2ffb88;
        case 0x2ffb8cu: goto label_2ffb8c;
        case 0x2ffb90u: goto label_2ffb90;
        case 0x2ffb94u: goto label_2ffb94;
        case 0x2ffb98u: goto label_2ffb98;
        case 0x2ffb9cu: goto label_2ffb9c;
        case 0x2ffba0u: goto label_2ffba0;
        case 0x2ffba4u: goto label_2ffba4;
        case 0x2ffba8u: goto label_2ffba8;
        case 0x2ffbacu: goto label_2ffbac;
        case 0x2ffbb0u: goto label_2ffbb0;
        case 0x2ffbb4u: goto label_2ffbb4;
        case 0x2ffbb8u: goto label_2ffbb8;
        case 0x2ffbbcu: goto label_2ffbbc;
        case 0x2ffbc0u: goto label_2ffbc0;
        case 0x2ffbc4u: goto label_2ffbc4;
        case 0x2ffbc8u: goto label_2ffbc8;
        case 0x2ffbccu: goto label_2ffbcc;
        case 0x2ffbd0u: goto label_2ffbd0;
        case 0x2ffbd4u: goto label_2ffbd4;
        case 0x2ffbd8u: goto label_2ffbd8;
        case 0x2ffbdcu: goto label_2ffbdc;
        case 0x2ffbe0u: goto label_2ffbe0;
        case 0x2ffbe4u: goto label_2ffbe4;
        case 0x2ffbe8u: goto label_2ffbe8;
        case 0x2ffbecu: goto label_2ffbec;
        case 0x2ffbf0u: goto label_2ffbf0;
        case 0x2ffbf4u: goto label_2ffbf4;
        case 0x2ffbf8u: goto label_2ffbf8;
        case 0x2ffbfcu: goto label_2ffbfc;
        case 0x2ffc00u: goto label_2ffc00;
        case 0x2ffc04u: goto label_2ffc04;
        case 0x2ffc08u: goto label_2ffc08;
        case 0x2ffc0cu: goto label_2ffc0c;
        case 0x2ffc10u: goto label_2ffc10;
        case 0x2ffc14u: goto label_2ffc14;
        case 0x2ffc18u: goto label_2ffc18;
        case 0x2ffc1cu: goto label_2ffc1c;
        case 0x2ffc20u: goto label_2ffc20;
        case 0x2ffc24u: goto label_2ffc24;
        case 0x2ffc28u: goto label_2ffc28;
        case 0x2ffc2cu: goto label_2ffc2c;
        case 0x2ffc30u: goto label_2ffc30;
        case 0x2ffc34u: goto label_2ffc34;
        case 0x2ffc38u: goto label_2ffc38;
        case 0x2ffc3cu: goto label_2ffc3c;
        case 0x2ffc40u: goto label_2ffc40;
        case 0x2ffc44u: goto label_2ffc44;
        case 0x2ffc48u: goto label_2ffc48;
        case 0x2ffc4cu: goto label_2ffc4c;
        case 0x2ffc50u: goto label_2ffc50;
        case 0x2ffc54u: goto label_2ffc54;
        case 0x2ffc58u: goto label_2ffc58;
        case 0x2ffc5cu: goto label_2ffc5c;
        case 0x2ffc60u: goto label_2ffc60;
        case 0x2ffc64u: goto label_2ffc64;
        case 0x2ffc68u: goto label_2ffc68;
        case 0x2ffc6cu: goto label_2ffc6c;
        case 0x2ffc70u: goto label_2ffc70;
        case 0x2ffc74u: goto label_2ffc74;
        case 0x2ffc78u: goto label_2ffc78;
        case 0x2ffc7cu: goto label_2ffc7c;
        case 0x2ffc80u: goto label_2ffc80;
        case 0x2ffc84u: goto label_2ffc84;
        case 0x2ffc88u: goto label_2ffc88;
        case 0x2ffc8cu: goto label_2ffc8c;
        case 0x2ffc90u: goto label_2ffc90;
        case 0x2ffc94u: goto label_2ffc94;
        case 0x2ffc98u: goto label_2ffc98;
        case 0x2ffc9cu: goto label_2ffc9c;
        case 0x2ffca0u: goto label_2ffca0;
        case 0x2ffca4u: goto label_2ffca4;
        case 0x2ffca8u: goto label_2ffca8;
        case 0x2ffcacu: goto label_2ffcac;
        case 0x2ffcb0u: goto label_2ffcb0;
        case 0x2ffcb4u: goto label_2ffcb4;
        case 0x2ffcb8u: goto label_2ffcb8;
        case 0x2ffcbcu: goto label_2ffcbc;
        case 0x2ffcc0u: goto label_2ffcc0;
        case 0x2ffcc4u: goto label_2ffcc4;
        case 0x2ffcc8u: goto label_2ffcc8;
        case 0x2ffcccu: goto label_2ffccc;
        case 0x2ffcd0u: goto label_2ffcd0;
        case 0x2ffcd4u: goto label_2ffcd4;
        case 0x2ffcd8u: goto label_2ffcd8;
        case 0x2ffcdcu: goto label_2ffcdc;
        case 0x2ffce0u: goto label_2ffce0;
        case 0x2ffce4u: goto label_2ffce4;
        case 0x2ffce8u: goto label_2ffce8;
        case 0x2ffcecu: goto label_2ffcec;
        case 0x2ffcf0u: goto label_2ffcf0;
        case 0x2ffcf4u: goto label_2ffcf4;
        case 0x2ffcf8u: goto label_2ffcf8;
        case 0x2ffcfcu: goto label_2ffcfc;
        case 0x2ffd00u: goto label_2ffd00;
        case 0x2ffd04u: goto label_2ffd04;
        case 0x2ffd08u: goto label_2ffd08;
        case 0x2ffd0cu: goto label_2ffd0c;
        case 0x2ffd10u: goto label_2ffd10;
        case 0x2ffd14u: goto label_2ffd14;
        case 0x2ffd18u: goto label_2ffd18;
        case 0x2ffd1cu: goto label_2ffd1c;
        case 0x2ffd20u: goto label_2ffd20;
        case 0x2ffd24u: goto label_2ffd24;
        case 0x2ffd28u: goto label_2ffd28;
        case 0x2ffd2cu: goto label_2ffd2c;
        case 0x2ffd30u: goto label_2ffd30;
        case 0x2ffd34u: goto label_2ffd34;
        case 0x2ffd38u: goto label_2ffd38;
        case 0x2ffd3cu: goto label_2ffd3c;
        case 0x2ffd40u: goto label_2ffd40;
        case 0x2ffd44u: goto label_2ffd44;
        case 0x2ffd48u: goto label_2ffd48;
        case 0x2ffd4cu: goto label_2ffd4c;
        case 0x2ffd50u: goto label_2ffd50;
        case 0x2ffd54u: goto label_2ffd54;
        case 0x2ffd58u: goto label_2ffd58;
        case 0x2ffd5cu: goto label_2ffd5c;
        case 0x2ffd60u: goto label_2ffd60;
        case 0x2ffd64u: goto label_2ffd64;
        case 0x2ffd68u: goto label_2ffd68;
        case 0x2ffd6cu: goto label_2ffd6c;
        case 0x2ffd70u: goto label_2ffd70;
        case 0x2ffd74u: goto label_2ffd74;
        case 0x2ffd78u: goto label_2ffd78;
        case 0x2ffd7cu: goto label_2ffd7c;
        case 0x2ffd80u: goto label_2ffd80;
        case 0x2ffd84u: goto label_2ffd84;
        case 0x2ffd88u: goto label_2ffd88;
        case 0x2ffd8cu: goto label_2ffd8c;
        case 0x2ffd90u: goto label_2ffd90;
        case 0x2ffd94u: goto label_2ffd94;
        case 0x2ffd98u: goto label_2ffd98;
        case 0x2ffd9cu: goto label_2ffd9c;
        case 0x2ffda0u: goto label_2ffda0;
        case 0x2ffda4u: goto label_2ffda4;
        case 0x2ffda8u: goto label_2ffda8;
        case 0x2ffdacu: goto label_2ffdac;
        case 0x2ffdb0u: goto label_2ffdb0;
        case 0x2ffdb4u: goto label_2ffdb4;
        case 0x2ffdb8u: goto label_2ffdb8;
        case 0x2ffdbcu: goto label_2ffdbc;
        case 0x2ffdc0u: goto label_2ffdc0;
        case 0x2ffdc4u: goto label_2ffdc4;
        case 0x2ffdc8u: goto label_2ffdc8;
        case 0x2ffdccu: goto label_2ffdcc;
        case 0x2ffdd0u: goto label_2ffdd0;
        case 0x2ffdd4u: goto label_2ffdd4;
        case 0x2ffdd8u: goto label_2ffdd8;
        case 0x2ffddcu: goto label_2ffddc;
        case 0x2ffde0u: goto label_2ffde0;
        case 0x2ffde4u: goto label_2ffde4;
        case 0x2ffde8u: goto label_2ffde8;
        case 0x2ffdecu: goto label_2ffdec;
        case 0x2ffdf0u: goto label_2ffdf0;
        case 0x2ffdf4u: goto label_2ffdf4;
        case 0x2ffdf8u: goto label_2ffdf8;
        case 0x2ffdfcu: goto label_2ffdfc;
        case 0x2ffe00u: goto label_2ffe00;
        case 0x2ffe04u: goto label_2ffe04;
        case 0x2ffe08u: goto label_2ffe08;
        case 0x2ffe0cu: goto label_2ffe0c;
        case 0x2ffe10u: goto label_2ffe10;
        case 0x2ffe14u: goto label_2ffe14;
        case 0x2ffe18u: goto label_2ffe18;
        case 0x2ffe1cu: goto label_2ffe1c;
        case 0x2ffe20u: goto label_2ffe20;
        case 0x2ffe24u: goto label_2ffe24;
        case 0x2ffe28u: goto label_2ffe28;
        case 0x2ffe2cu: goto label_2ffe2c;
        case 0x2ffe30u: goto label_2ffe30;
        case 0x2ffe34u: goto label_2ffe34;
        case 0x2ffe38u: goto label_2ffe38;
        case 0x2ffe3cu: goto label_2ffe3c;
        case 0x2ffe40u: goto label_2ffe40;
        case 0x2ffe44u: goto label_2ffe44;
        case 0x2ffe48u: goto label_2ffe48;
        case 0x2ffe4cu: goto label_2ffe4c;
        case 0x2ffe50u: goto label_2ffe50;
        case 0x2ffe54u: goto label_2ffe54;
        case 0x2ffe58u: goto label_2ffe58;
        case 0x2ffe5cu: goto label_2ffe5c;
        case 0x2ffe60u: goto label_2ffe60;
        case 0x2ffe64u: goto label_2ffe64;
        case 0x2ffe68u: goto label_2ffe68;
        case 0x2ffe6cu: goto label_2ffe6c;
        case 0x2ffe70u: goto label_2ffe70;
        case 0x2ffe74u: goto label_2ffe74;
        case 0x2ffe78u: goto label_2ffe78;
        case 0x2ffe7cu: goto label_2ffe7c;
        case 0x2ffe80u: goto label_2ffe80;
        case 0x2ffe84u: goto label_2ffe84;
        case 0x2ffe88u: goto label_2ffe88;
        case 0x2ffe8cu: goto label_2ffe8c;
        case 0x2ffe90u: goto label_2ffe90;
        case 0x2ffe94u: goto label_2ffe94;
        case 0x2ffe98u: goto label_2ffe98;
        case 0x2ffe9cu: goto label_2ffe9c;
        case 0x2ffea0u: goto label_2ffea0;
        case 0x2ffea4u: goto label_2ffea4;
        case 0x2ffea8u: goto label_2ffea8;
        case 0x2ffeacu: goto label_2ffeac;
        case 0x2ffeb0u: goto label_2ffeb0;
        case 0x2ffeb4u: goto label_2ffeb4;
        case 0x2ffeb8u: goto label_2ffeb8;
        case 0x2ffebcu: goto label_2ffebc;
        case 0x2ffec0u: goto label_2ffec0;
        case 0x2ffec4u: goto label_2ffec4;
        case 0x2ffec8u: goto label_2ffec8;
        case 0x2ffeccu: goto label_2ffecc;
        case 0x2ffed0u: goto label_2ffed0;
        case 0x2ffed4u: goto label_2ffed4;
        case 0x2ffed8u: goto label_2ffed8;
        case 0x2ffedcu: goto label_2ffedc;
        case 0x2ffee0u: goto label_2ffee0;
        case 0x2ffee4u: goto label_2ffee4;
        case 0x2ffee8u: goto label_2ffee8;
        case 0x2ffeecu: goto label_2ffeec;
        case 0x2ffef0u: goto label_2ffef0;
        case 0x2ffef4u: goto label_2ffef4;
        case 0x2ffef8u: goto label_2ffef8;
        case 0x2ffefcu: goto label_2ffefc;
        case 0x2fff00u: goto label_2fff00;
        case 0x2fff04u: goto label_2fff04;
        case 0x2fff08u: goto label_2fff08;
        case 0x2fff0cu: goto label_2fff0c;
        case 0x2fff10u: goto label_2fff10;
        case 0x2fff14u: goto label_2fff14;
        case 0x2fff18u: goto label_2fff18;
        case 0x2fff1cu: goto label_2fff1c;
        case 0x2fff20u: goto label_2fff20;
        case 0x2fff24u: goto label_2fff24;
        case 0x2fff28u: goto label_2fff28;
        case 0x2fff2cu: goto label_2fff2c;
        case 0x2fff30u: goto label_2fff30;
        case 0x2fff34u: goto label_2fff34;
        case 0x2fff38u: goto label_2fff38;
        case 0x2fff3cu: goto label_2fff3c;
        case 0x2fff40u: goto label_2fff40;
        case 0x2fff44u: goto label_2fff44;
        case 0x2fff48u: goto label_2fff48;
        case 0x2fff4cu: goto label_2fff4c;
        case 0x2fff50u: goto label_2fff50;
        case 0x2fff54u: goto label_2fff54;
        case 0x2fff58u: goto label_2fff58;
        case 0x2fff5cu: goto label_2fff5c;
        case 0x2fff60u: goto label_2fff60;
        case 0x2fff64u: goto label_2fff64;
        case 0x2fff68u: goto label_2fff68;
        case 0x2fff6cu: goto label_2fff6c;
        case 0x2fff70u: goto label_2fff70;
        case 0x2fff74u: goto label_2fff74;
        case 0x2fff78u: goto label_2fff78;
        case 0x2fff7cu: goto label_2fff7c;
        case 0x2fff80u: goto label_2fff80;
        case 0x2fff84u: goto label_2fff84;
        case 0x2fff88u: goto label_2fff88;
        case 0x2fff8cu: goto label_2fff8c;
        case 0x2fff90u: goto label_2fff90;
        case 0x2fff94u: goto label_2fff94;
        case 0x2fff98u: goto label_2fff98;
        case 0x2fff9cu: goto label_2fff9c;
        case 0x2fffa0u: goto label_2fffa0;
        case 0x2fffa4u: goto label_2fffa4;
        case 0x2fffa8u: goto label_2fffa8;
        case 0x2fffacu: goto label_2fffac;
        case 0x2fffb0u: goto label_2fffb0;
        case 0x2fffb4u: goto label_2fffb4;
        case 0x2fffb8u: goto label_2fffb8;
        case 0x2fffbcu: goto label_2fffbc;
        case 0x2fffc0u: goto label_2fffc0;
        case 0x2fffc4u: goto label_2fffc4;
        case 0x2fffc8u: goto label_2fffc8;
        case 0x2fffccu: goto label_2fffcc;
        case 0x2fffd0u: goto label_2fffd0;
        case 0x2fffd4u: goto label_2fffd4;
        case 0x2fffd8u: goto label_2fffd8;
        case 0x2fffdcu: goto label_2fffdc;
        case 0x2fffe0u: goto label_2fffe0;
        case 0x2fffe4u: goto label_2fffe4;
        case 0x2fffe8u: goto label_2fffe8;
        case 0x2fffecu: goto label_2fffec;
        case 0x2ffff0u: goto label_2ffff0;
        case 0x2ffff4u: goto label_2ffff4;
        case 0x2ffff8u: goto label_2ffff8;
        case 0x2ffffcu: goto label_2ffffc;
        case 0x300000u: goto label_300000;
        case 0x300004u: goto label_300004;
        case 0x300008u: goto label_300008;
        case 0x30000cu: goto label_30000c;
        case 0x300010u: goto label_300010;
        case 0x300014u: goto label_300014;
        case 0x300018u: goto label_300018;
        case 0x30001cu: goto label_30001c;
        case 0x300020u: goto label_300020;
        case 0x300024u: goto label_300024;
        case 0x300028u: goto label_300028;
        case 0x30002cu: goto label_30002c;
        case 0x300030u: goto label_300030;
        case 0x300034u: goto label_300034;
        case 0x300038u: goto label_300038;
        case 0x30003cu: goto label_30003c;
        case 0x300040u: goto label_300040;
        case 0x300044u: goto label_300044;
        case 0x300048u: goto label_300048;
        case 0x30004cu: goto label_30004c;
        case 0x300050u: goto label_300050;
        case 0x300054u: goto label_300054;
        case 0x300058u: goto label_300058;
        case 0x30005cu: goto label_30005c;
        case 0x300060u: goto label_300060;
        case 0x300064u: goto label_300064;
        case 0x300068u: goto label_300068;
        case 0x30006cu: goto label_30006c;
        case 0x300070u: goto label_300070;
        case 0x300074u: goto label_300074;
        case 0x300078u: goto label_300078;
        case 0x30007cu: goto label_30007c;
        case 0x300080u: goto label_300080;
        case 0x300084u: goto label_300084;
        case 0x300088u: goto label_300088;
        case 0x30008cu: goto label_30008c;
        case 0x300090u: goto label_300090;
        case 0x300094u: goto label_300094;
        case 0x300098u: goto label_300098;
        case 0x30009cu: goto label_30009c;
        case 0x3000a0u: goto label_3000a0;
        case 0x3000a4u: goto label_3000a4;
        case 0x3000a8u: goto label_3000a8;
        case 0x3000acu: goto label_3000ac;
        case 0x3000b0u: goto label_3000b0;
        case 0x3000b4u: goto label_3000b4;
        case 0x3000b8u: goto label_3000b8;
        case 0x3000bcu: goto label_3000bc;
        case 0x3000c0u: goto label_3000c0;
        case 0x3000c4u: goto label_3000c4;
        case 0x3000c8u: goto label_3000c8;
        case 0x3000ccu: goto label_3000cc;
        case 0x3000d0u: goto label_3000d0;
        case 0x3000d4u: goto label_3000d4;
        case 0x3000d8u: goto label_3000d8;
        case 0x3000dcu: goto label_3000dc;
        case 0x3000e0u: goto label_3000e0;
        case 0x3000e4u: goto label_3000e4;
        case 0x3000e8u: goto label_3000e8;
        case 0x3000ecu: goto label_3000ec;
        case 0x3000f0u: goto label_3000f0;
        case 0x3000f4u: goto label_3000f4;
        case 0x3000f8u: goto label_3000f8;
        case 0x3000fcu: goto label_3000fc;
        case 0x300100u: goto label_300100;
        case 0x300104u: goto label_300104;
        case 0x300108u: goto label_300108;
        case 0x30010cu: goto label_30010c;
        case 0x300110u: goto label_300110;
        case 0x300114u: goto label_300114;
        case 0x300118u: goto label_300118;
        case 0x30011cu: goto label_30011c;
        case 0x300120u: goto label_300120;
        case 0x300124u: goto label_300124;
        case 0x300128u: goto label_300128;
        case 0x30012cu: goto label_30012c;
        case 0x300130u: goto label_300130;
        case 0x300134u: goto label_300134;
        case 0x300138u: goto label_300138;
        case 0x30013cu: goto label_30013c;
        case 0x300140u: goto label_300140;
        case 0x300144u: goto label_300144;
        case 0x300148u: goto label_300148;
        case 0x30014cu: goto label_30014c;
        case 0x300150u: goto label_300150;
        case 0x300154u: goto label_300154;
        case 0x300158u: goto label_300158;
        case 0x30015cu: goto label_30015c;
        case 0x300160u: goto label_300160;
        case 0x300164u: goto label_300164;
        case 0x300168u: goto label_300168;
        case 0x30016cu: goto label_30016c;
        case 0x300170u: goto label_300170;
        case 0x300174u: goto label_300174;
        case 0x300178u: goto label_300178;
        case 0x30017cu: goto label_30017c;
        case 0x300180u: goto label_300180;
        case 0x300184u: goto label_300184;
        case 0x300188u: goto label_300188;
        case 0x30018cu: goto label_30018c;
        case 0x300190u: goto label_300190;
        case 0x300194u: goto label_300194;
        case 0x300198u: goto label_300198;
        case 0x30019cu: goto label_30019c;
        case 0x3001a0u: goto label_3001a0;
        case 0x3001a4u: goto label_3001a4;
        case 0x3001a8u: goto label_3001a8;
        case 0x3001acu: goto label_3001ac;
        case 0x3001b0u: goto label_3001b0;
        case 0x3001b4u: goto label_3001b4;
        case 0x3001b8u: goto label_3001b8;
        case 0x3001bcu: goto label_3001bc;
        case 0x3001c0u: goto label_3001c0;
        case 0x3001c4u: goto label_3001c4;
        case 0x3001c8u: goto label_3001c8;
        case 0x3001ccu: goto label_3001cc;
        case 0x3001d0u: goto label_3001d0;
        case 0x3001d4u: goto label_3001d4;
        case 0x3001d8u: goto label_3001d8;
        case 0x3001dcu: goto label_3001dc;
        case 0x3001e0u: goto label_3001e0;
        case 0x3001e4u: goto label_3001e4;
        case 0x3001e8u: goto label_3001e8;
        case 0x3001ecu: goto label_3001ec;
        case 0x3001f0u: goto label_3001f0;
        case 0x3001f4u: goto label_3001f4;
        case 0x3001f8u: goto label_3001f8;
        case 0x3001fcu: goto label_3001fc;
        case 0x300200u: goto label_300200;
        case 0x300204u: goto label_300204;
        case 0x300208u: goto label_300208;
        case 0x30020cu: goto label_30020c;
        case 0x300210u: goto label_300210;
        case 0x300214u: goto label_300214;
        case 0x300218u: goto label_300218;
        case 0x30021cu: goto label_30021c;
        case 0x300220u: goto label_300220;
        case 0x300224u: goto label_300224;
        case 0x300228u: goto label_300228;
        case 0x30022cu: goto label_30022c;
        case 0x300230u: goto label_300230;
        case 0x300234u: goto label_300234;
        case 0x300238u: goto label_300238;
        case 0x30023cu: goto label_30023c;
        case 0x300240u: goto label_300240;
        case 0x300244u: goto label_300244;
        case 0x300248u: goto label_300248;
        case 0x30024cu: goto label_30024c;
        case 0x300250u: goto label_300250;
        case 0x300254u: goto label_300254;
        case 0x300258u: goto label_300258;
        case 0x30025cu: goto label_30025c;
        case 0x300260u: goto label_300260;
        case 0x300264u: goto label_300264;
        case 0x300268u: goto label_300268;
        case 0x30026cu: goto label_30026c;
        case 0x300270u: goto label_300270;
        case 0x300274u: goto label_300274;
        case 0x300278u: goto label_300278;
        case 0x30027cu: goto label_30027c;
        case 0x300280u: goto label_300280;
        case 0x300284u: goto label_300284;
        case 0x300288u: goto label_300288;
        case 0x30028cu: goto label_30028c;
        case 0x300290u: goto label_300290;
        case 0x300294u: goto label_300294;
        case 0x300298u: goto label_300298;
        case 0x30029cu: goto label_30029c;
        case 0x3002a0u: goto label_3002a0;
        case 0x3002a4u: goto label_3002a4;
        case 0x3002a8u: goto label_3002a8;
        case 0x3002acu: goto label_3002ac;
        case 0x3002b0u: goto label_3002b0;
        case 0x3002b4u: goto label_3002b4;
        case 0x3002b8u: goto label_3002b8;
        case 0x3002bcu: goto label_3002bc;
        case 0x3002c0u: goto label_3002c0;
        case 0x3002c4u: goto label_3002c4;
        case 0x3002c8u: goto label_3002c8;
        case 0x3002ccu: goto label_3002cc;
        case 0x3002d0u: goto label_3002d0;
        case 0x3002d4u: goto label_3002d4;
        case 0x3002d8u: goto label_3002d8;
        case 0x3002dcu: goto label_3002dc;
        case 0x3002e0u: goto label_3002e0;
        case 0x3002e4u: goto label_3002e4;
        case 0x3002e8u: goto label_3002e8;
        case 0x3002ecu: goto label_3002ec;
        case 0x3002f0u: goto label_3002f0;
        case 0x3002f4u: goto label_3002f4;
        case 0x3002f8u: goto label_3002f8;
        case 0x3002fcu: goto label_3002fc;
        case 0x300300u: goto label_300300;
        case 0x300304u: goto label_300304;
        case 0x300308u: goto label_300308;
        case 0x30030cu: goto label_30030c;
        case 0x300310u: goto label_300310;
        case 0x300314u: goto label_300314;
        case 0x300318u: goto label_300318;
        case 0x30031cu: goto label_30031c;
        case 0x300320u: goto label_300320;
        case 0x300324u: goto label_300324;
        case 0x300328u: goto label_300328;
        case 0x30032cu: goto label_30032c;
        case 0x300330u: goto label_300330;
        case 0x300334u: goto label_300334;
        case 0x300338u: goto label_300338;
        case 0x30033cu: goto label_30033c;
        case 0x300340u: goto label_300340;
        case 0x300344u: goto label_300344;
        case 0x300348u: goto label_300348;
        case 0x30034cu: goto label_30034c;
        case 0x300350u: goto label_300350;
        case 0x300354u: goto label_300354;
        case 0x300358u: goto label_300358;
        case 0x30035cu: goto label_30035c;
        case 0x300360u: goto label_300360;
        case 0x300364u: goto label_300364;
        case 0x300368u: goto label_300368;
        case 0x30036cu: goto label_30036c;
        case 0x300370u: goto label_300370;
        case 0x300374u: goto label_300374;
        case 0x300378u: goto label_300378;
        case 0x30037cu: goto label_30037c;
        case 0x300380u: goto label_300380;
        case 0x300384u: goto label_300384;
        case 0x300388u: goto label_300388;
        case 0x30038cu: goto label_30038c;
        case 0x300390u: goto label_300390;
        case 0x300394u: goto label_300394;
        case 0x300398u: goto label_300398;
        case 0x30039cu: goto label_30039c;
        case 0x3003a0u: goto label_3003a0;
        case 0x3003a4u: goto label_3003a4;
        case 0x3003a8u: goto label_3003a8;
        case 0x3003acu: goto label_3003ac;
        case 0x3003b0u: goto label_3003b0;
        case 0x3003b4u: goto label_3003b4;
        case 0x3003b8u: goto label_3003b8;
        case 0x3003bcu: goto label_3003bc;
        case 0x3003c0u: goto label_3003c0;
        case 0x3003c4u: goto label_3003c4;
        case 0x3003c8u: goto label_3003c8;
        case 0x3003ccu: goto label_3003cc;
        case 0x3003d0u: goto label_3003d0;
        case 0x3003d4u: goto label_3003d4;
        case 0x3003d8u: goto label_3003d8;
        case 0x3003dcu: goto label_3003dc;
        case 0x3003e0u: goto label_3003e0;
        case 0x3003e4u: goto label_3003e4;
        case 0x3003e8u: goto label_3003e8;
        case 0x3003ecu: goto label_3003ec;
        case 0x3003f0u: goto label_3003f0;
        case 0x3003f4u: goto label_3003f4;
        case 0x3003f8u: goto label_3003f8;
        case 0x3003fcu: goto label_3003fc;
        case 0x300400u: goto label_300400;
        case 0x300404u: goto label_300404;
        case 0x300408u: goto label_300408;
        case 0x30040cu: goto label_30040c;
        case 0x300410u: goto label_300410;
        case 0x300414u: goto label_300414;
        case 0x300418u: goto label_300418;
        case 0x30041cu: goto label_30041c;
        case 0x300420u: goto label_300420;
        case 0x300424u: goto label_300424;
        case 0x300428u: goto label_300428;
        case 0x30042cu: goto label_30042c;
        case 0x300430u: goto label_300430;
        case 0x300434u: goto label_300434;
        case 0x300438u: goto label_300438;
        case 0x30043cu: goto label_30043c;
        case 0x300440u: goto label_300440;
        case 0x300444u: goto label_300444;
        case 0x300448u: goto label_300448;
        case 0x30044cu: goto label_30044c;
        case 0x300450u: goto label_300450;
        case 0x300454u: goto label_300454;
        case 0x300458u: goto label_300458;
        case 0x30045cu: goto label_30045c;
        case 0x300460u: goto label_300460;
        case 0x300464u: goto label_300464;
        case 0x300468u: goto label_300468;
        case 0x30046cu: goto label_30046c;
        case 0x300470u: goto label_300470;
        case 0x300474u: goto label_300474;
        case 0x300478u: goto label_300478;
        case 0x30047cu: goto label_30047c;
        case 0x300480u: goto label_300480;
        case 0x300484u: goto label_300484;
        case 0x300488u: goto label_300488;
        case 0x30048cu: goto label_30048c;
        case 0x300490u: goto label_300490;
        case 0x300494u: goto label_300494;
        case 0x300498u: goto label_300498;
        case 0x30049cu: goto label_30049c;
        case 0x3004a0u: goto label_3004a0;
        case 0x3004a4u: goto label_3004a4;
        case 0x3004a8u: goto label_3004a8;
        case 0x3004acu: goto label_3004ac;
        case 0x3004b0u: goto label_3004b0;
        case 0x3004b4u: goto label_3004b4;
        case 0x3004b8u: goto label_3004b8;
        case 0x3004bcu: goto label_3004bc;
        case 0x3004c0u: goto label_3004c0;
        case 0x3004c4u: goto label_3004c4;
        case 0x3004c8u: goto label_3004c8;
        case 0x3004ccu: goto label_3004cc;
        case 0x3004d0u: goto label_3004d0;
        case 0x3004d4u: goto label_3004d4;
        case 0x3004d8u: goto label_3004d8;
        case 0x3004dcu: goto label_3004dc;
        case 0x3004e0u: goto label_3004e0;
        case 0x3004e4u: goto label_3004e4;
        case 0x3004e8u: goto label_3004e8;
        case 0x3004ecu: goto label_3004ec;
        case 0x3004f0u: goto label_3004f0;
        case 0x3004f4u: goto label_3004f4;
        case 0x3004f8u: goto label_3004f8;
        case 0x3004fcu: goto label_3004fc;
        case 0x300500u: goto label_300500;
        case 0x300504u: goto label_300504;
        case 0x300508u: goto label_300508;
        case 0x30050cu: goto label_30050c;
        case 0x300510u: goto label_300510;
        case 0x300514u: goto label_300514;
        case 0x300518u: goto label_300518;
        case 0x30051cu: goto label_30051c;
        case 0x300520u: goto label_300520;
        case 0x300524u: goto label_300524;
        case 0x300528u: goto label_300528;
        case 0x30052cu: goto label_30052c;
        case 0x300530u: goto label_300530;
        case 0x300534u: goto label_300534;
        case 0x300538u: goto label_300538;
        case 0x30053cu: goto label_30053c;
        case 0x300540u: goto label_300540;
        case 0x300544u: goto label_300544;
        case 0x300548u: goto label_300548;
        case 0x30054cu: goto label_30054c;
        case 0x300550u: goto label_300550;
        case 0x300554u: goto label_300554;
        case 0x300558u: goto label_300558;
        case 0x30055cu: goto label_30055c;
        case 0x300560u: goto label_300560;
        case 0x300564u: goto label_300564;
        case 0x300568u: goto label_300568;
        case 0x30056cu: goto label_30056c;
        case 0x300570u: goto label_300570;
        case 0x300574u: goto label_300574;
        case 0x300578u: goto label_300578;
        case 0x30057cu: goto label_30057c;
        case 0x300580u: goto label_300580;
        case 0x300584u: goto label_300584;
        case 0x300588u: goto label_300588;
        case 0x30058cu: goto label_30058c;
        case 0x300590u: goto label_300590;
        case 0x300594u: goto label_300594;
        case 0x300598u: goto label_300598;
        case 0x30059cu: goto label_30059c;
        case 0x3005a0u: goto label_3005a0;
        case 0x3005a4u: goto label_3005a4;
        case 0x3005a8u: goto label_3005a8;
        case 0x3005acu: goto label_3005ac;
        case 0x3005b0u: goto label_3005b0;
        case 0x3005b4u: goto label_3005b4;
        case 0x3005b8u: goto label_3005b8;
        case 0x3005bcu: goto label_3005bc;
        case 0x3005c0u: goto label_3005c0;
        case 0x3005c4u: goto label_3005c4;
        case 0x3005c8u: goto label_3005c8;
        case 0x3005ccu: goto label_3005cc;
        case 0x3005d0u: goto label_3005d0;
        case 0x3005d4u: goto label_3005d4;
        case 0x3005d8u: goto label_3005d8;
        case 0x3005dcu: goto label_3005dc;
        case 0x3005e0u: goto label_3005e0;
        case 0x3005e4u: goto label_3005e4;
        case 0x3005e8u: goto label_3005e8;
        case 0x3005ecu: goto label_3005ec;
        case 0x3005f0u: goto label_3005f0;
        case 0x3005f4u: goto label_3005f4;
        case 0x3005f8u: goto label_3005f8;
        case 0x3005fcu: goto label_3005fc;
        case 0x300600u: goto label_300600;
        case 0x300604u: goto label_300604;
        case 0x300608u: goto label_300608;
        case 0x30060cu: goto label_30060c;
        case 0x300610u: goto label_300610;
        case 0x300614u: goto label_300614;
        case 0x300618u: goto label_300618;
        case 0x30061cu: goto label_30061c;
        case 0x300620u: goto label_300620;
        case 0x300624u: goto label_300624;
        case 0x300628u: goto label_300628;
        case 0x30062cu: goto label_30062c;
        case 0x300630u: goto label_300630;
        case 0x300634u: goto label_300634;
        case 0x300638u: goto label_300638;
        case 0x30063cu: goto label_30063c;
        case 0x300640u: goto label_300640;
        case 0x300644u: goto label_300644;
        case 0x300648u: goto label_300648;
        case 0x30064cu: goto label_30064c;
        case 0x300650u: goto label_300650;
        case 0x300654u: goto label_300654;
        case 0x300658u: goto label_300658;
        case 0x30065cu: goto label_30065c;
        case 0x300660u: goto label_300660;
        case 0x300664u: goto label_300664;
        case 0x300668u: goto label_300668;
        case 0x30066cu: goto label_30066c;
        case 0x300670u: goto label_300670;
        case 0x300674u: goto label_300674;
        case 0x300678u: goto label_300678;
        case 0x30067cu: goto label_30067c;
        case 0x300680u: goto label_300680;
        case 0x300684u: goto label_300684;
        case 0x300688u: goto label_300688;
        case 0x30068cu: goto label_30068c;
        case 0x300690u: goto label_300690;
        case 0x300694u: goto label_300694;
        case 0x300698u: goto label_300698;
        case 0x30069cu: goto label_30069c;
        case 0x3006a0u: goto label_3006a0;
        case 0x3006a4u: goto label_3006a4;
        case 0x3006a8u: goto label_3006a8;
        case 0x3006acu: goto label_3006ac;
        case 0x3006b0u: goto label_3006b0;
        case 0x3006b4u: goto label_3006b4;
        case 0x3006b8u: goto label_3006b8;
        case 0x3006bcu: goto label_3006bc;
        case 0x3006c0u: goto label_3006c0;
        case 0x3006c4u: goto label_3006c4;
        case 0x3006c8u: goto label_3006c8;
        case 0x3006ccu: goto label_3006cc;
        case 0x3006d0u: goto label_3006d0;
        case 0x3006d4u: goto label_3006d4;
        case 0x3006d8u: goto label_3006d8;
        case 0x3006dcu: goto label_3006dc;
        case 0x3006e0u: goto label_3006e0;
        case 0x3006e4u: goto label_3006e4;
        case 0x3006e8u: goto label_3006e8;
        case 0x3006ecu: goto label_3006ec;
        case 0x3006f0u: goto label_3006f0;
        case 0x3006f4u: goto label_3006f4;
        case 0x3006f8u: goto label_3006f8;
        case 0x3006fcu: goto label_3006fc;
        case 0x300700u: goto label_300700;
        case 0x300704u: goto label_300704;
        case 0x300708u: goto label_300708;
        case 0x30070cu: goto label_30070c;
        case 0x300710u: goto label_300710;
        case 0x300714u: goto label_300714;
        case 0x300718u: goto label_300718;
        case 0x30071cu: goto label_30071c;
        case 0x300720u: goto label_300720;
        case 0x300724u: goto label_300724;
        case 0x300728u: goto label_300728;
        case 0x30072cu: goto label_30072c;
        case 0x300730u: goto label_300730;
        case 0x300734u: goto label_300734;
        case 0x300738u: goto label_300738;
        case 0x30073cu: goto label_30073c;
        case 0x300740u: goto label_300740;
        case 0x300744u: goto label_300744;
        case 0x300748u: goto label_300748;
        case 0x30074cu: goto label_30074c;
        case 0x300750u: goto label_300750;
        case 0x300754u: goto label_300754;
        case 0x300758u: goto label_300758;
        case 0x30075cu: goto label_30075c;
        case 0x300760u: goto label_300760;
        case 0x300764u: goto label_300764;
        case 0x300768u: goto label_300768;
        case 0x30076cu: goto label_30076c;
        case 0x300770u: goto label_300770;
        case 0x300774u: goto label_300774;
        case 0x300778u: goto label_300778;
        case 0x30077cu: goto label_30077c;
        case 0x300780u: goto label_300780;
        case 0x300784u: goto label_300784;
        case 0x300788u: goto label_300788;
        case 0x30078cu: goto label_30078c;
        case 0x300790u: goto label_300790;
        case 0x300794u: goto label_300794;
        case 0x300798u: goto label_300798;
        case 0x30079cu: goto label_30079c;
        case 0x3007a0u: goto label_3007a0;
        case 0x3007a4u: goto label_3007a4;
        case 0x3007a8u: goto label_3007a8;
        case 0x3007acu: goto label_3007ac;
        case 0x3007b0u: goto label_3007b0;
        case 0x3007b4u: goto label_3007b4;
        case 0x3007b8u: goto label_3007b8;
        case 0x3007bcu: goto label_3007bc;
        case 0x3007c0u: goto label_3007c0;
        case 0x3007c4u: goto label_3007c4;
        case 0x3007c8u: goto label_3007c8;
        case 0x3007ccu: goto label_3007cc;
        case 0x3007d0u: goto label_3007d0;
        case 0x3007d4u: goto label_3007d4;
        case 0x3007d8u: goto label_3007d8;
        case 0x3007dcu: goto label_3007dc;
        case 0x3007e0u: goto label_3007e0;
        case 0x3007e4u: goto label_3007e4;
        case 0x3007e8u: goto label_3007e8;
        case 0x3007ecu: goto label_3007ec;
        case 0x3007f0u: goto label_3007f0;
        case 0x3007f4u: goto label_3007f4;
        case 0x3007f8u: goto label_3007f8;
        case 0x3007fcu: goto label_3007fc;
        case 0x300800u: goto label_300800;
        case 0x300804u: goto label_300804;
        case 0x300808u: goto label_300808;
        case 0x30080cu: goto label_30080c;
        case 0x300810u: goto label_300810;
        case 0x300814u: goto label_300814;
        case 0x300818u: goto label_300818;
        case 0x30081cu: goto label_30081c;
        case 0x300820u: goto label_300820;
        case 0x300824u: goto label_300824;
        case 0x300828u: goto label_300828;
        case 0x30082cu: goto label_30082c;
        case 0x300830u: goto label_300830;
        case 0x300834u: goto label_300834;
        case 0x300838u: goto label_300838;
        case 0x30083cu: goto label_30083c;
        case 0x300840u: goto label_300840;
        case 0x300844u: goto label_300844;
        case 0x300848u: goto label_300848;
        case 0x30084cu: goto label_30084c;
        case 0x300850u: goto label_300850;
        case 0x300854u: goto label_300854;
        case 0x300858u: goto label_300858;
        case 0x30085cu: goto label_30085c;
        case 0x300860u: goto label_300860;
        case 0x300864u: goto label_300864;
        case 0x300868u: goto label_300868;
        case 0x30086cu: goto label_30086c;
        case 0x300870u: goto label_300870;
        case 0x300874u: goto label_300874;
        case 0x300878u: goto label_300878;
        case 0x30087cu: goto label_30087c;
        case 0x300880u: goto label_300880;
        case 0x300884u: goto label_300884;
        case 0x300888u: goto label_300888;
        case 0x30088cu: goto label_30088c;
        case 0x300890u: goto label_300890;
        case 0x300894u: goto label_300894;
        case 0x300898u: goto label_300898;
        case 0x30089cu: goto label_30089c;
        case 0x3008a0u: goto label_3008a0;
        case 0x3008a4u: goto label_3008a4;
        case 0x3008a8u: goto label_3008a8;
        case 0x3008acu: goto label_3008ac;
        case 0x3008b0u: goto label_3008b0;
        case 0x3008b4u: goto label_3008b4;
        case 0x3008b8u: goto label_3008b8;
        case 0x3008bcu: goto label_3008bc;
        case 0x3008c0u: goto label_3008c0;
        case 0x3008c4u: goto label_3008c4;
        case 0x3008c8u: goto label_3008c8;
        case 0x3008ccu: goto label_3008cc;
        case 0x3008d0u: goto label_3008d0;
        case 0x3008d4u: goto label_3008d4;
        case 0x3008d8u: goto label_3008d8;
        case 0x3008dcu: goto label_3008dc;
        case 0x3008e0u: goto label_3008e0;
        case 0x3008e4u: goto label_3008e4;
        case 0x3008e8u: goto label_3008e8;
        case 0x3008ecu: goto label_3008ec;
        case 0x3008f0u: goto label_3008f0;
        case 0x3008f4u: goto label_3008f4;
        case 0x3008f8u: goto label_3008f8;
        case 0x3008fcu: goto label_3008fc;
        case 0x300900u: goto label_300900;
        case 0x300904u: goto label_300904;
        case 0x300908u: goto label_300908;
        case 0x30090cu: goto label_30090c;
        case 0x300910u: goto label_300910;
        case 0x300914u: goto label_300914;
        case 0x300918u: goto label_300918;
        case 0x30091cu: goto label_30091c;
        case 0x300920u: goto label_300920;
        case 0x300924u: goto label_300924;
        case 0x300928u: goto label_300928;
        case 0x30092cu: goto label_30092c;
        case 0x300930u: goto label_300930;
        case 0x300934u: goto label_300934;
        case 0x300938u: goto label_300938;
        case 0x30093cu: goto label_30093c;
        case 0x300940u: goto label_300940;
        case 0x300944u: goto label_300944;
        case 0x300948u: goto label_300948;
        case 0x30094cu: goto label_30094c;
        case 0x300950u: goto label_300950;
        case 0x300954u: goto label_300954;
        case 0x300958u: goto label_300958;
        case 0x30095cu: goto label_30095c;
        case 0x300960u: goto label_300960;
        case 0x300964u: goto label_300964;
        case 0x300968u: goto label_300968;
        case 0x30096cu: goto label_30096c;
        case 0x300970u: goto label_300970;
        case 0x300974u: goto label_300974;
        case 0x300978u: goto label_300978;
        case 0x30097cu: goto label_30097c;
        case 0x300980u: goto label_300980;
        case 0x300984u: goto label_300984;
        case 0x300988u: goto label_300988;
        case 0x30098cu: goto label_30098c;
        case 0x300990u: goto label_300990;
        case 0x300994u: goto label_300994;
        case 0x300998u: goto label_300998;
        case 0x30099cu: goto label_30099c;
        case 0x3009a0u: goto label_3009a0;
        case 0x3009a4u: goto label_3009a4;
        case 0x3009a8u: goto label_3009a8;
        case 0x3009acu: goto label_3009ac;
        case 0x3009b0u: goto label_3009b0;
        case 0x3009b4u: goto label_3009b4;
        case 0x3009b8u: goto label_3009b8;
        case 0x3009bcu: goto label_3009bc;
        case 0x3009c0u: goto label_3009c0;
        case 0x3009c4u: goto label_3009c4;
        case 0x3009c8u: goto label_3009c8;
        case 0x3009ccu: goto label_3009cc;
        case 0x3009d0u: goto label_3009d0;
        case 0x3009d4u: goto label_3009d4;
        case 0x3009d8u: goto label_3009d8;
        case 0x3009dcu: goto label_3009dc;
        case 0x3009e0u: goto label_3009e0;
        case 0x3009e4u: goto label_3009e4;
        case 0x3009e8u: goto label_3009e8;
        case 0x3009ecu: goto label_3009ec;
        case 0x3009f0u: goto label_3009f0;
        case 0x3009f4u: goto label_3009f4;
        case 0x3009f8u: goto label_3009f8;
        case 0x3009fcu: goto label_3009fc;
        case 0x300a00u: goto label_300a00;
        case 0x300a04u: goto label_300a04;
        case 0x300a08u: goto label_300a08;
        case 0x300a0cu: goto label_300a0c;
        case 0x300a10u: goto label_300a10;
        case 0x300a14u: goto label_300a14;
        case 0x300a18u: goto label_300a18;
        case 0x300a1cu: goto label_300a1c;
        case 0x300a20u: goto label_300a20;
        case 0x300a24u: goto label_300a24;
        case 0x300a28u: goto label_300a28;
        case 0x300a2cu: goto label_300a2c;
        case 0x300a30u: goto label_300a30;
        case 0x300a34u: goto label_300a34;
        case 0x300a38u: goto label_300a38;
        case 0x300a3cu: goto label_300a3c;
        case 0x300a40u: goto label_300a40;
        case 0x300a44u: goto label_300a44;
        case 0x300a48u: goto label_300a48;
        case 0x300a4cu: goto label_300a4c;
        case 0x300a50u: goto label_300a50;
        case 0x300a54u: goto label_300a54;
        case 0x300a58u: goto label_300a58;
        case 0x300a5cu: goto label_300a5c;
        case 0x300a60u: goto label_300a60;
        case 0x300a64u: goto label_300a64;
        case 0x300a68u: goto label_300a68;
        case 0x300a6cu: goto label_300a6c;
        case 0x300a70u: goto label_300a70;
        case 0x300a74u: goto label_300a74;
        case 0x300a78u: goto label_300a78;
        case 0x300a7cu: goto label_300a7c;
        case 0x300a80u: goto label_300a80;
        case 0x300a84u: goto label_300a84;
        case 0x300a88u: goto label_300a88;
        case 0x300a8cu: goto label_300a8c;
        case 0x300a90u: goto label_300a90;
        case 0x300a94u: goto label_300a94;
        case 0x300a98u: goto label_300a98;
        case 0x300a9cu: goto label_300a9c;
        case 0x300aa0u: goto label_300aa0;
        case 0x300aa4u: goto label_300aa4;
        case 0x300aa8u: goto label_300aa8;
        case 0x300aacu: goto label_300aac;
        case 0x300ab0u: goto label_300ab0;
        case 0x300ab4u: goto label_300ab4;
        case 0x300ab8u: goto label_300ab8;
        case 0x300abcu: goto label_300abc;
        case 0x300ac0u: goto label_300ac0;
        case 0x300ac4u: goto label_300ac4;
        case 0x300ac8u: goto label_300ac8;
        case 0x300accu: goto label_300acc;
        case 0x300ad0u: goto label_300ad0;
        case 0x300ad4u: goto label_300ad4;
        case 0x300ad8u: goto label_300ad8;
        case 0x300adcu: goto label_300adc;
        case 0x300ae0u: goto label_300ae0;
        case 0x300ae4u: goto label_300ae4;
        case 0x300ae8u: goto label_300ae8;
        case 0x300aecu: goto label_300aec;
        case 0x300af0u: goto label_300af0;
        case 0x300af4u: goto label_300af4;
        case 0x300af8u: goto label_300af8;
        case 0x300afcu: goto label_300afc;
        case 0x300b00u: goto label_300b00;
        case 0x300b04u: goto label_300b04;
        case 0x300b08u: goto label_300b08;
        case 0x300b0cu: goto label_300b0c;
        case 0x300b10u: goto label_300b10;
        case 0x300b14u: goto label_300b14;
        case 0x300b18u: goto label_300b18;
        case 0x300b1cu: goto label_300b1c;
        case 0x300b20u: goto label_300b20;
        case 0x300b24u: goto label_300b24;
        case 0x300b28u: goto label_300b28;
        case 0x300b2cu: goto label_300b2c;
        case 0x300b30u: goto label_300b30;
        case 0x300b34u: goto label_300b34;
        case 0x300b38u: goto label_300b38;
        case 0x300b3cu: goto label_300b3c;
        case 0x300b40u: goto label_300b40;
        case 0x300b44u: goto label_300b44;
        case 0x300b48u: goto label_300b48;
        case 0x300b4cu: goto label_300b4c;
        case 0x300b50u: goto label_300b50;
        case 0x300b54u: goto label_300b54;
        case 0x300b58u: goto label_300b58;
        case 0x300b5cu: goto label_300b5c;
        case 0x300b60u: goto label_300b60;
        case 0x300b64u: goto label_300b64;
        case 0x300b68u: goto label_300b68;
        case 0x300b6cu: goto label_300b6c;
        case 0x300b70u: goto label_300b70;
        case 0x300b74u: goto label_300b74;
        case 0x300b78u: goto label_300b78;
        case 0x300b7cu: goto label_300b7c;
        case 0x300b80u: goto label_300b80;
        case 0x300b84u: goto label_300b84;
        case 0x300b88u: goto label_300b88;
        case 0x300b8cu: goto label_300b8c;
        case 0x300b90u: goto label_300b90;
        case 0x300b94u: goto label_300b94;
        case 0x300b98u: goto label_300b98;
        case 0x300b9cu: goto label_300b9c;
        case 0x300ba0u: goto label_300ba0;
        case 0x300ba4u: goto label_300ba4;
        case 0x300ba8u: goto label_300ba8;
        case 0x300bacu: goto label_300bac;
        case 0x300bb0u: goto label_300bb0;
        case 0x300bb4u: goto label_300bb4;
        case 0x300bb8u: goto label_300bb8;
        case 0x300bbcu: goto label_300bbc;
        case 0x300bc0u: goto label_300bc0;
        case 0x300bc4u: goto label_300bc4;
        case 0x300bc8u: goto label_300bc8;
        case 0x300bccu: goto label_300bcc;
        case 0x300bd0u: goto label_300bd0;
        case 0x300bd4u: goto label_300bd4;
        case 0x300bd8u: goto label_300bd8;
        case 0x300bdcu: goto label_300bdc;
        case 0x300be0u: goto label_300be0;
        case 0x300be4u: goto label_300be4;
        case 0x300be8u: goto label_300be8;
        case 0x300becu: goto label_300bec;
        case 0x300bf0u: goto label_300bf0;
        case 0x300bf4u: goto label_300bf4;
        case 0x300bf8u: goto label_300bf8;
        case 0x300bfcu: goto label_300bfc;
        case 0x300c00u: goto label_300c00;
        case 0x300c04u: goto label_300c04;
        case 0x300c08u: goto label_300c08;
        case 0x300c0cu: goto label_300c0c;
        case 0x300c10u: goto label_300c10;
        case 0x300c14u: goto label_300c14;
        case 0x300c18u: goto label_300c18;
        case 0x300c1cu: goto label_300c1c;
        case 0x300c20u: goto label_300c20;
        case 0x300c24u: goto label_300c24;
        case 0x300c28u: goto label_300c28;
        case 0x300c2cu: goto label_300c2c;
        case 0x300c30u: goto label_300c30;
        case 0x300c34u: goto label_300c34;
        case 0x300c38u: goto label_300c38;
        case 0x300c3cu: goto label_300c3c;
        case 0x300c40u: goto label_300c40;
        case 0x300c44u: goto label_300c44;
        case 0x300c48u: goto label_300c48;
        case 0x300c4cu: goto label_300c4c;
        case 0x300c50u: goto label_300c50;
        case 0x300c54u: goto label_300c54;
        case 0x300c58u: goto label_300c58;
        case 0x300c5cu: goto label_300c5c;
        case 0x300c60u: goto label_300c60;
        case 0x300c64u: goto label_300c64;
        case 0x300c68u: goto label_300c68;
        case 0x300c6cu: goto label_300c6c;
        case 0x300c70u: goto label_300c70;
        case 0x300c74u: goto label_300c74;
        case 0x300c78u: goto label_300c78;
        case 0x300c7cu: goto label_300c7c;
        case 0x300c80u: goto label_300c80;
        case 0x300c84u: goto label_300c84;
        case 0x300c88u: goto label_300c88;
        case 0x300c8cu: goto label_300c8c;
        case 0x300c90u: goto label_300c90;
        case 0x300c94u: goto label_300c94;
        case 0x300c98u: goto label_300c98;
        case 0x300c9cu: goto label_300c9c;
        case 0x300ca0u: goto label_300ca0;
        case 0x300ca4u: goto label_300ca4;
        case 0x300ca8u: goto label_300ca8;
        case 0x300cacu: goto label_300cac;
        case 0x300cb0u: goto label_300cb0;
        case 0x300cb4u: goto label_300cb4;
        case 0x300cb8u: goto label_300cb8;
        case 0x300cbcu: goto label_300cbc;
        case 0x300cc0u: goto label_300cc0;
        case 0x300cc4u: goto label_300cc4;
        case 0x300cc8u: goto label_300cc8;
        case 0x300cccu: goto label_300ccc;
        case 0x300cd0u: goto label_300cd0;
        case 0x300cd4u: goto label_300cd4;
        case 0x300cd8u: goto label_300cd8;
        case 0x300cdcu: goto label_300cdc;
        case 0x300ce0u: goto label_300ce0;
        case 0x300ce4u: goto label_300ce4;
        case 0x300ce8u: goto label_300ce8;
        case 0x300cecu: goto label_300cec;
        case 0x300cf0u: goto label_300cf0;
        case 0x300cf4u: goto label_300cf4;
        case 0x300cf8u: goto label_300cf8;
        case 0x300cfcu: goto label_300cfc;
        case 0x300d00u: goto label_300d00;
        case 0x300d04u: goto label_300d04;
        case 0x300d08u: goto label_300d08;
        case 0x300d0cu: goto label_300d0c;
        case 0x300d10u: goto label_300d10;
        case 0x300d14u: goto label_300d14;
        case 0x300d18u: goto label_300d18;
        case 0x300d1cu: goto label_300d1c;
        case 0x300d20u: goto label_300d20;
        case 0x300d24u: goto label_300d24;
        case 0x300d28u: goto label_300d28;
        case 0x300d2cu: goto label_300d2c;
        case 0x300d30u: goto label_300d30;
        case 0x300d34u: goto label_300d34;
        case 0x300d38u: goto label_300d38;
        case 0x300d3cu: goto label_300d3c;
        case 0x300d40u: goto label_300d40;
        case 0x300d44u: goto label_300d44;
        case 0x300d48u: goto label_300d48;
        case 0x300d4cu: goto label_300d4c;
        case 0x300d50u: goto label_300d50;
        case 0x300d54u: goto label_300d54;
        case 0x300d58u: goto label_300d58;
        case 0x300d5cu: goto label_300d5c;
        case 0x300d60u: goto label_300d60;
        case 0x300d64u: goto label_300d64;
        case 0x300d68u: goto label_300d68;
        case 0x300d6cu: goto label_300d6c;
        case 0x300d70u: goto label_300d70;
        case 0x300d74u: goto label_300d74;
        case 0x300d78u: goto label_300d78;
        case 0x300d7cu: goto label_300d7c;
        case 0x300d80u: goto label_300d80;
        case 0x300d84u: goto label_300d84;
        case 0x300d88u: goto label_300d88;
        case 0x300d8cu: goto label_300d8c;
        case 0x300d90u: goto label_300d90;
        case 0x300d94u: goto label_300d94;
        case 0x300d98u: goto label_300d98;
        case 0x300d9cu: goto label_300d9c;
        case 0x300da0u: goto label_300da0;
        case 0x300da4u: goto label_300da4;
        case 0x300da8u: goto label_300da8;
        case 0x300dacu: goto label_300dac;
        case 0x300db0u: goto label_300db0;
        case 0x300db4u: goto label_300db4;
        case 0x300db8u: goto label_300db8;
        case 0x300dbcu: goto label_300dbc;
        case 0x300dc0u: goto label_300dc0;
        case 0x300dc4u: goto label_300dc4;
        case 0x300dc8u: goto label_300dc8;
        case 0x300dccu: goto label_300dcc;
        case 0x300dd0u: goto label_300dd0;
        case 0x300dd4u: goto label_300dd4;
        case 0x300dd8u: goto label_300dd8;
        case 0x300ddcu: goto label_300ddc;
        case 0x300de0u: goto label_300de0;
        case 0x300de4u: goto label_300de4;
        case 0x300de8u: goto label_300de8;
        case 0x300decu: goto label_300dec;
        case 0x300df0u: goto label_300df0;
        case 0x300df4u: goto label_300df4;
        case 0x300df8u: goto label_300df8;
        case 0x300dfcu: goto label_300dfc;
        case 0x300e00u: goto label_300e00;
        case 0x300e04u: goto label_300e04;
        case 0x300e08u: goto label_300e08;
        case 0x300e0cu: goto label_300e0c;
        case 0x300e10u: goto label_300e10;
        case 0x300e14u: goto label_300e14;
        case 0x300e18u: goto label_300e18;
        case 0x300e1cu: goto label_300e1c;
        case 0x300e20u: goto label_300e20;
        case 0x300e24u: goto label_300e24;
        case 0x300e28u: goto label_300e28;
        case 0x300e2cu: goto label_300e2c;
        case 0x300e30u: goto label_300e30;
        case 0x300e34u: goto label_300e34;
        case 0x300e38u: goto label_300e38;
        case 0x300e3cu: goto label_300e3c;
        case 0x300e40u: goto label_300e40;
        case 0x300e44u: goto label_300e44;
        case 0x300e48u: goto label_300e48;
        case 0x300e4cu: goto label_300e4c;
        case 0x300e50u: goto label_300e50;
        case 0x300e54u: goto label_300e54;
        case 0x300e58u: goto label_300e58;
        case 0x300e5cu: goto label_300e5c;
        case 0x300e60u: goto label_300e60;
        case 0x300e64u: goto label_300e64;
        case 0x300e68u: goto label_300e68;
        case 0x300e6cu: goto label_300e6c;
        case 0x300e70u: goto label_300e70;
        case 0x300e74u: goto label_300e74;
        case 0x300e78u: goto label_300e78;
        case 0x300e7cu: goto label_300e7c;
        case 0x300e80u: goto label_300e80;
        case 0x300e84u: goto label_300e84;
        case 0x300e88u: goto label_300e88;
        case 0x300e8cu: goto label_300e8c;
        case 0x300e90u: goto label_300e90;
        case 0x300e94u: goto label_300e94;
        case 0x300e98u: goto label_300e98;
        case 0x300e9cu: goto label_300e9c;
        case 0x300ea0u: goto label_300ea0;
        case 0x300ea4u: goto label_300ea4;
        case 0x300ea8u: goto label_300ea8;
        case 0x300eacu: goto label_300eac;
        case 0x300eb0u: goto label_300eb0;
        case 0x300eb4u: goto label_300eb4;
        case 0x300eb8u: goto label_300eb8;
        case 0x300ebcu: goto label_300ebc;
        case 0x300ec0u: goto label_300ec0;
        case 0x300ec4u: goto label_300ec4;
        case 0x300ec8u: goto label_300ec8;
        case 0x300eccu: goto label_300ecc;
        case 0x300ed0u: goto label_300ed0;
        case 0x300ed4u: goto label_300ed4;
        case 0x300ed8u: goto label_300ed8;
        case 0x300edcu: goto label_300edc;
        case 0x300ee0u: goto label_300ee0;
        case 0x300ee4u: goto label_300ee4;
        case 0x300ee8u: goto label_300ee8;
        case 0x300eecu: goto label_300eec;
        case 0x300ef0u: goto label_300ef0;
        case 0x300ef4u: goto label_300ef4;
        case 0x300ef8u: goto label_300ef8;
        case 0x300efcu: goto label_300efc;
        case 0x300f00u: goto label_300f00;
        case 0x300f04u: goto label_300f04;
        case 0x300f08u: goto label_300f08;
        case 0x300f0cu: goto label_300f0c;
        case 0x300f10u: goto label_300f10;
        case 0x300f14u: goto label_300f14;
        case 0x300f18u: goto label_300f18;
        case 0x300f1cu: goto label_300f1c;
        case 0x300f20u: goto label_300f20;
        case 0x300f24u: goto label_300f24;
        case 0x300f28u: goto label_300f28;
        case 0x300f2cu: goto label_300f2c;
        case 0x300f30u: goto label_300f30;
        case 0x300f34u: goto label_300f34;
        case 0x300f38u: goto label_300f38;
        case 0x300f3cu: goto label_300f3c;
        case 0x300f40u: goto label_300f40;
        case 0x300f44u: goto label_300f44;
        case 0x300f48u: goto label_300f48;
        case 0x300f4cu: goto label_300f4c;
        case 0x300f50u: goto label_300f50;
        case 0x300f54u: goto label_300f54;
        case 0x300f58u: goto label_300f58;
        case 0x300f5cu: goto label_300f5c;
        case 0x300f60u: goto label_300f60;
        case 0x300f64u: goto label_300f64;
        case 0x300f68u: goto label_300f68;
        case 0x300f6cu: goto label_300f6c;
        case 0x300f70u: goto label_300f70;
        case 0x300f74u: goto label_300f74;
        case 0x300f78u: goto label_300f78;
        case 0x300f7cu: goto label_300f7c;
        case 0x300f80u: goto label_300f80;
        case 0x300f84u: goto label_300f84;
        case 0x300f88u: goto label_300f88;
        case 0x300f8cu: goto label_300f8c;
        case 0x300f90u: goto label_300f90;
        case 0x300f94u: goto label_300f94;
        case 0x300f98u: goto label_300f98;
        case 0x300f9cu: goto label_300f9c;
        case 0x300fa0u: goto label_300fa0;
        case 0x300fa4u: goto label_300fa4;
        case 0x300fa8u: goto label_300fa8;
        case 0x300facu: goto label_300fac;
        case 0x300fb0u: goto label_300fb0;
        case 0x300fb4u: goto label_300fb4;
        case 0x300fb8u: goto label_300fb8;
        case 0x300fbcu: goto label_300fbc;
        case 0x300fc0u: goto label_300fc0;
        case 0x300fc4u: goto label_300fc4;
        case 0x300fc8u: goto label_300fc8;
        case 0x300fccu: goto label_300fcc;
        case 0x300fd0u: goto label_300fd0;
        case 0x300fd4u: goto label_300fd4;
        case 0x300fd8u: goto label_300fd8;
        case 0x300fdcu: goto label_300fdc;
        case 0x300fe0u: goto label_300fe0;
        case 0x300fe4u: goto label_300fe4;
        case 0x300fe8u: goto label_300fe8;
        case 0x300fecu: goto label_300fec;
        case 0x300ff0u: goto label_300ff0;
        case 0x300ff4u: goto label_300ff4;
        case 0x300ff8u: goto label_300ff8;
        case 0x300ffcu: goto label_300ffc;
        case 0x301000u: goto label_301000;
        case 0x301004u: goto label_301004;
        case 0x301008u: goto label_301008;
        case 0x30100cu: goto label_30100c;
        case 0x301010u: goto label_301010;
        case 0x301014u: goto label_301014;
        case 0x301018u: goto label_301018;
        case 0x30101cu: goto label_30101c;
        case 0x301020u: goto label_301020;
        case 0x301024u: goto label_301024;
        case 0x301028u: goto label_301028;
        case 0x30102cu: goto label_30102c;
        case 0x301030u: goto label_301030;
        case 0x301034u: goto label_301034;
        case 0x301038u: goto label_301038;
        case 0x30103cu: goto label_30103c;
        case 0x301040u: goto label_301040;
        case 0x301044u: goto label_301044;
        case 0x301048u: goto label_301048;
        case 0x30104cu: goto label_30104c;
        case 0x301050u: goto label_301050;
        case 0x301054u: goto label_301054;
        case 0x301058u: goto label_301058;
        case 0x30105cu: goto label_30105c;
        case 0x301060u: goto label_301060;
        case 0x301064u: goto label_301064;
        case 0x301068u: goto label_301068;
        case 0x30106cu: goto label_30106c;
        case 0x301070u: goto label_301070;
        case 0x301074u: goto label_301074;
        case 0x301078u: goto label_301078;
        case 0x30107cu: goto label_30107c;
        case 0x301080u: goto label_301080;
        case 0x301084u: goto label_301084;
        case 0x301088u: goto label_301088;
        case 0x30108cu: goto label_30108c;
        case 0x301090u: goto label_301090;
        case 0x301094u: goto label_301094;
        case 0x301098u: goto label_301098;
        case 0x30109cu: goto label_30109c;
        case 0x3010a0u: goto label_3010a0;
        case 0x3010a4u: goto label_3010a4;
        case 0x3010a8u: goto label_3010a8;
        case 0x3010acu: goto label_3010ac;
        case 0x3010b0u: goto label_3010b0;
        case 0x3010b4u: goto label_3010b4;
        case 0x3010b8u: goto label_3010b8;
        case 0x3010bcu: goto label_3010bc;
        case 0x3010c0u: goto label_3010c0;
        case 0x3010c4u: goto label_3010c4;
        case 0x3010c8u: goto label_3010c8;
        case 0x3010ccu: goto label_3010cc;
        case 0x3010d0u: goto label_3010d0;
        case 0x3010d4u: goto label_3010d4;
        case 0x3010d8u: goto label_3010d8;
        case 0x3010dcu: goto label_3010dc;
        case 0x3010e0u: goto label_3010e0;
        case 0x3010e4u: goto label_3010e4;
        case 0x3010e8u: goto label_3010e8;
        case 0x3010ecu: goto label_3010ec;
        case 0x3010f0u: goto label_3010f0;
        case 0x3010f4u: goto label_3010f4;
        case 0x3010f8u: goto label_3010f8;
        case 0x3010fcu: goto label_3010fc;
        case 0x301100u: goto label_301100;
        case 0x301104u: goto label_301104;
        case 0x301108u: goto label_301108;
        case 0x30110cu: goto label_30110c;
        case 0x301110u: goto label_301110;
        case 0x301114u: goto label_301114;
        case 0x301118u: goto label_301118;
        case 0x30111cu: goto label_30111c;
        case 0x301120u: goto label_301120;
        case 0x301124u: goto label_301124;
        case 0x301128u: goto label_301128;
        case 0x30112cu: goto label_30112c;
        case 0x301130u: goto label_301130;
        case 0x301134u: goto label_301134;
        case 0x301138u: goto label_301138;
        case 0x30113cu: goto label_30113c;
        case 0x301140u: goto label_301140;
        case 0x301144u: goto label_301144;
        case 0x301148u: goto label_301148;
        case 0x30114cu: goto label_30114c;
        case 0x301150u: goto label_301150;
        case 0x301154u: goto label_301154;
        case 0x301158u: goto label_301158;
        case 0x30115cu: goto label_30115c;
        case 0x301160u: goto label_301160;
        case 0x301164u: goto label_301164;
        case 0x301168u: goto label_301168;
        case 0x30116cu: goto label_30116c;
        case 0x301170u: goto label_301170;
        case 0x301174u: goto label_301174;
        case 0x301178u: goto label_301178;
        case 0x30117cu: goto label_30117c;
        case 0x301180u: goto label_301180;
        case 0x301184u: goto label_301184;
        case 0x301188u: goto label_301188;
        case 0x30118cu: goto label_30118c;
        case 0x301190u: goto label_301190;
        case 0x301194u: goto label_301194;
        case 0x301198u: goto label_301198;
        case 0x30119cu: goto label_30119c;
        case 0x3011a0u: goto label_3011a0;
        case 0x3011a4u: goto label_3011a4;
        case 0x3011a8u: goto label_3011a8;
        case 0x3011acu: goto label_3011ac;
        case 0x3011b0u: goto label_3011b0;
        case 0x3011b4u: goto label_3011b4;
        case 0x3011b8u: goto label_3011b8;
        case 0x3011bcu: goto label_3011bc;
        case 0x3011c0u: goto label_3011c0;
        case 0x3011c4u: goto label_3011c4;
        case 0x3011c8u: goto label_3011c8;
        case 0x3011ccu: goto label_3011cc;
        case 0x3011d0u: goto label_3011d0;
        case 0x3011d4u: goto label_3011d4;
        case 0x3011d8u: goto label_3011d8;
        case 0x3011dcu: goto label_3011dc;
        case 0x3011e0u: goto label_3011e0;
        case 0x3011e4u: goto label_3011e4;
        case 0x3011e8u: goto label_3011e8;
        case 0x3011ecu: goto label_3011ec;
        case 0x3011f0u: goto label_3011f0;
        case 0x3011f4u: goto label_3011f4;
        case 0x3011f8u: goto label_3011f8;
        case 0x3011fcu: goto label_3011fc;
        case 0x301200u: goto label_301200;
        case 0x301204u: goto label_301204;
        case 0x301208u: goto label_301208;
        case 0x30120cu: goto label_30120c;
        case 0x301210u: goto label_301210;
        case 0x301214u: goto label_301214;
        case 0x301218u: goto label_301218;
        case 0x30121cu: goto label_30121c;
        case 0x301220u: goto label_301220;
        case 0x301224u: goto label_301224;
        case 0x301228u: goto label_301228;
        case 0x30122cu: goto label_30122c;
        case 0x301230u: goto label_301230;
        case 0x301234u: goto label_301234;
        case 0x301238u: goto label_301238;
        case 0x30123cu: goto label_30123c;
        case 0x301240u: goto label_301240;
        case 0x301244u: goto label_301244;
        case 0x301248u: goto label_301248;
        case 0x30124cu: goto label_30124c;
        case 0x301250u: goto label_301250;
        case 0x301254u: goto label_301254;
        case 0x301258u: goto label_301258;
        case 0x30125cu: goto label_30125c;
        case 0x301260u: goto label_301260;
        case 0x301264u: goto label_301264;
        case 0x301268u: goto label_301268;
        case 0x30126cu: goto label_30126c;
        case 0x301270u: goto label_301270;
        case 0x301274u: goto label_301274;
        case 0x301278u: goto label_301278;
        case 0x30127cu: goto label_30127c;
        case 0x301280u: goto label_301280;
        case 0x301284u: goto label_301284;
        case 0x301288u: goto label_301288;
        case 0x30128cu: goto label_30128c;
        case 0x301290u: goto label_301290;
        case 0x301294u: goto label_301294;
        case 0x301298u: goto label_301298;
        case 0x30129cu: goto label_30129c;
        case 0x3012a0u: goto label_3012a0;
        case 0x3012a4u: goto label_3012a4;
        case 0x3012a8u: goto label_3012a8;
        case 0x3012acu: goto label_3012ac;
        case 0x3012b0u: goto label_3012b0;
        case 0x3012b4u: goto label_3012b4;
        case 0x3012b8u: goto label_3012b8;
        case 0x3012bcu: goto label_3012bc;
        case 0x3012c0u: goto label_3012c0;
        case 0x3012c4u: goto label_3012c4;
        case 0x3012c8u: goto label_3012c8;
        case 0x3012ccu: goto label_3012cc;
        case 0x3012d0u: goto label_3012d0;
        case 0x3012d4u: goto label_3012d4;
        case 0x3012d8u: goto label_3012d8;
        case 0x3012dcu: goto label_3012dc;
        case 0x3012e0u: goto label_3012e0;
        case 0x3012e4u: goto label_3012e4;
        case 0x3012e8u: goto label_3012e8;
        case 0x3012ecu: goto label_3012ec;
        case 0x3012f0u: goto label_3012f0;
        case 0x3012f4u: goto label_3012f4;
        case 0x3012f8u: goto label_3012f8;
        case 0x3012fcu: goto label_3012fc;
        case 0x301300u: goto label_301300;
        case 0x301304u: goto label_301304;
        case 0x301308u: goto label_301308;
        case 0x30130cu: goto label_30130c;
        case 0x301310u: goto label_301310;
        case 0x301314u: goto label_301314;
        case 0x301318u: goto label_301318;
        case 0x30131cu: goto label_30131c;
        case 0x301320u: goto label_301320;
        case 0x301324u: goto label_301324;
        case 0x301328u: goto label_301328;
        case 0x30132cu: goto label_30132c;
        case 0x301330u: goto label_301330;
        case 0x301334u: goto label_301334;
        case 0x301338u: goto label_301338;
        case 0x30133cu: goto label_30133c;
        case 0x301340u: goto label_301340;
        case 0x301344u: goto label_301344;
        case 0x301348u: goto label_301348;
        case 0x30134cu: goto label_30134c;
        case 0x301350u: goto label_301350;
        case 0x301354u: goto label_301354;
        case 0x301358u: goto label_301358;
        case 0x30135cu: goto label_30135c;
        case 0x301360u: goto label_301360;
        case 0x301364u: goto label_301364;
        case 0x301368u: goto label_301368;
        case 0x30136cu: goto label_30136c;
        case 0x301370u: goto label_301370;
        case 0x301374u: goto label_301374;
        case 0x301378u: goto label_301378;
        case 0x30137cu: goto label_30137c;
        case 0x301380u: goto label_301380;
        case 0x301384u: goto label_301384;
        case 0x301388u: goto label_301388;
        case 0x30138cu: goto label_30138c;
        case 0x301390u: goto label_301390;
        case 0x301394u: goto label_301394;
        case 0x301398u: goto label_301398;
        case 0x30139cu: goto label_30139c;
        case 0x3013a0u: goto label_3013a0;
        case 0x3013a4u: goto label_3013a4;
        case 0x3013a8u: goto label_3013a8;
        case 0x3013acu: goto label_3013ac;
        case 0x3013b0u: goto label_3013b0;
        case 0x3013b4u: goto label_3013b4;
        case 0x3013b8u: goto label_3013b8;
        case 0x3013bcu: goto label_3013bc;
        case 0x3013c0u: goto label_3013c0;
        case 0x3013c4u: goto label_3013c4;
        case 0x3013c8u: goto label_3013c8;
        case 0x3013ccu: goto label_3013cc;
        case 0x3013d0u: goto label_3013d0;
        case 0x3013d4u: goto label_3013d4;
        case 0x3013d8u: goto label_3013d8;
        case 0x3013dcu: goto label_3013dc;
        case 0x3013e0u: goto label_3013e0;
        case 0x3013e4u: goto label_3013e4;
        case 0x3013e8u: goto label_3013e8;
        case 0x3013ecu: goto label_3013ec;
        case 0x3013f0u: goto label_3013f0;
        case 0x3013f4u: goto label_3013f4;
        case 0x3013f8u: goto label_3013f8;
        case 0x3013fcu: goto label_3013fc;
        case 0x301400u: goto label_301400;
        case 0x301404u: goto label_301404;
        case 0x301408u: goto label_301408;
        case 0x30140cu: goto label_30140c;
        case 0x301410u: goto label_301410;
        case 0x301414u: goto label_301414;
        case 0x301418u: goto label_301418;
        case 0x30141cu: goto label_30141c;
        case 0x301420u: goto label_301420;
        case 0x301424u: goto label_301424;
        case 0x301428u: goto label_301428;
        case 0x30142cu: goto label_30142c;
        case 0x301430u: goto label_301430;
        case 0x301434u: goto label_301434;
        case 0x301438u: goto label_301438;
        case 0x30143cu: goto label_30143c;
        case 0x301440u: goto label_301440;
        case 0x301444u: goto label_301444;
        case 0x301448u: goto label_301448;
        case 0x30144cu: goto label_30144c;
        case 0x301450u: goto label_301450;
        case 0x301454u: goto label_301454;
        case 0x301458u: goto label_301458;
        case 0x30145cu: goto label_30145c;
        case 0x301460u: goto label_301460;
        case 0x301464u: goto label_301464;
        case 0x301468u: goto label_301468;
        case 0x30146cu: goto label_30146c;
        case 0x301470u: goto label_301470;
        case 0x301474u: goto label_301474;
        case 0x301478u: goto label_301478;
        case 0x30147cu: goto label_30147c;
        case 0x301480u: goto label_301480;
        case 0x301484u: goto label_301484;
        case 0x301488u: goto label_301488;
        case 0x30148cu: goto label_30148c;
        case 0x301490u: goto label_301490;
        case 0x301494u: goto label_301494;
        case 0x301498u: goto label_301498;
        case 0x30149cu: goto label_30149c;
        case 0x3014a0u: goto label_3014a0;
        case 0x3014a4u: goto label_3014a4;
        case 0x3014a8u: goto label_3014a8;
        case 0x3014acu: goto label_3014ac;
        case 0x3014b0u: goto label_3014b0;
        case 0x3014b4u: goto label_3014b4;
        case 0x3014b8u: goto label_3014b8;
        case 0x3014bcu: goto label_3014bc;
        case 0x3014c0u: goto label_3014c0;
        case 0x3014c4u: goto label_3014c4;
        case 0x3014c8u: goto label_3014c8;
        case 0x3014ccu: goto label_3014cc;
        case 0x3014d0u: goto label_3014d0;
        case 0x3014d4u: goto label_3014d4;
        case 0x3014d8u: goto label_3014d8;
        case 0x3014dcu: goto label_3014dc;
        case 0x3014e0u: goto label_3014e0;
        case 0x3014e4u: goto label_3014e4;
        case 0x3014e8u: goto label_3014e8;
        case 0x3014ecu: goto label_3014ec;
        case 0x3014f0u: goto label_3014f0;
        case 0x3014f4u: goto label_3014f4;
        case 0x3014f8u: goto label_3014f8;
        case 0x3014fcu: goto label_3014fc;
        case 0x301500u: goto label_301500;
        case 0x301504u: goto label_301504;
        case 0x301508u: goto label_301508;
        case 0x30150cu: goto label_30150c;
        case 0x301510u: goto label_301510;
        case 0x301514u: goto label_301514;
        case 0x301518u: goto label_301518;
        case 0x30151cu: goto label_30151c;
        case 0x301520u: goto label_301520;
        case 0x301524u: goto label_301524;
        case 0x301528u: goto label_301528;
        case 0x30152cu: goto label_30152c;
        case 0x301530u: goto label_301530;
        case 0x301534u: goto label_301534;
        case 0x301538u: goto label_301538;
        case 0x30153cu: goto label_30153c;
        default: break;
    }

    ctx->pc = 0x2ffb50u;

label_2ffb50:
    // 0x2ffb50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ffb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ffb54:
    // 0x2ffb54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ffb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ffb58:
    // 0x2ffb58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ffb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ffb5c:
    // 0x2ffb5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ffb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ffb60:
    // 0x2ffb60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ffb60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ffb64:
    // 0x2ffb64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ffb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ffb68:
    // 0x2ffb68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ffb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ffb6c:
    // 0x2ffb6c: 0x26920580  addiu       $s2, $s4, 0x580
    ctx->pc = 0x2ffb6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
label_2ffb70:
    // 0x2ffb70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ffb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ffb74:
    // 0x2ffb74: 0x8c930550  lw          $s3, 0x550($a0)
    ctx->pc = 0x2ffb74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2ffb78:
    // 0x2ffb78: 0x8c910d74  lw          $s1, 0xD74($a0)
    ctx->pc = 0x2ffb78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_2ffb7c:
    // 0x2ffb7c: 0xc0754b4  jal         func_1D52D0
label_2ffb80:
    if (ctx->pc == 0x2FFB80u) {
        ctx->pc = 0x2FFB80u;
            // 0x2ffb80: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->pc = 0x2FFB84u;
        goto label_2ffb84;
    }
    ctx->pc = 0x2FFB7Cu;
    SET_GPR_U32(ctx, 31, 0x2FFB84u);
    ctx->pc = 0x2FFB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB7Cu;
            // 0x2ffb80: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB84u; }
        if (ctx->pc != 0x2FFB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB84u; }
        if (ctx->pc != 0x2FFB84u) { return; }
    }
    ctx->pc = 0x2FFB84u;
label_2ffb84:
    // 0x2ffb84: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2ffb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2ffb88:
    // 0x2ffb88: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2ffb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_2ffb8c:
    // 0x2ffb8c: 0xc460c6b8  lwc1        $f0, -0x3948($v1)
    ctx->pc = 0x2ffb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ffb90:
    // 0x2ffb90: 0xae860dbc  sw          $a2, 0xDBC($s4)
    ctx->pc = 0x2ffb90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3516), GPR_U32(ctx, 6));
label_2ffb94:
    // 0x2ffb94: 0xae860694  sw          $a2, 0x694($s4)
    ctx->pc = 0x2ffb94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 6));
label_2ffb98:
    // 0x2ffb98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffb98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffb9c:
    // 0x2ffb9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ffb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ffba0:
    // 0x2ffba0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ffba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffba4:
    // 0x2ffba4: 0x8e830550  lw          $v1, 0x550($s4)
    ctx->pc = 0x2ffba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
label_2ffba8:
    // 0x2ffba8: 0xac66002c  sw          $a2, 0x2C($v1)
    ctx->pc = 0x2ffba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 6));
label_2ffbac:
    // 0x2ffbac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2ffbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ffbb0:
    // 0x2ffbb0: 0xe6810de0  swc1        $f1, 0xDE0($s4)
    ctx->pc = 0x2ffbb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3552), bits); }
label_2ffbb4:
    // 0x2ffbb4: 0xe6800ddc  swc1        $f0, 0xDDC($s4)
    ctx->pc = 0x2ffbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3548), bits); }
label_2ffbb8:
    // 0x2ffbb8: 0xae800de8  sw          $zero, 0xDE8($s4)
    ctx->pc = 0x2ffbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
label_2ffbbc:
    // 0x2ffbbc: 0xae800dc4  sw          $zero, 0xDC4($s4)
    ctx->pc = 0x2ffbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3524), GPR_U32(ctx, 0));
label_2ffbc0:
    // 0x2ffbc0: 0xc077fb0  jal         func_1DFEC0
label_2ffbc4:
    if (ctx->pc == 0x2FFBC4u) {
        ctx->pc = 0x2FFBC4u;
            // 0x2ffbc4: 0xae400118  sw          $zero, 0x118($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x2FFBC8u;
        goto label_2ffbc8;
    }
    ctx->pc = 0x2FFBC0u;
    SET_GPR_U32(ctx, 31, 0x2FFBC8u);
    ctx->pc = 0x2FFBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFBC0u;
            // 0x2ffbc4: 0xae400118  sw          $zero, 0x118($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBC8u; }
        if (ctx->pc != 0x2FFBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBC8u; }
        if (ctx->pc != 0x2FFBC8u) { return; }
    }
    ctx->pc = 0x2FFBC8u;
label_2ffbc8:
    // 0x2ffbc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffbcc:
    // 0x2ffbcc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ffbccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_2ffbd0:
    // 0x2ffbd0: 0x268402e0  addiu       $a0, $s4, 0x2E0
    ctx->pc = 0x2ffbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
label_2ffbd4:
    // 0x2ffbd4: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x2ffbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
label_2ffbd8:
    // 0x2ffbd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ffbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ffbdc:
    // 0x2ffbdc: 0xc04cca0  jal         func_133280
label_2ffbe0:
    if (ctx->pc == 0x2FFBE0u) {
        ctx->pc = 0x2FFBE0u;
            // 0x2ffbe0: 0x24c62590  addiu       $a2, $a2, 0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9616));
        ctx->pc = 0x2FFBE4u;
        goto label_2ffbe4;
    }
    ctx->pc = 0x2FFBDCu;
    SET_GPR_U32(ctx, 31, 0x2FFBE4u);
    ctx->pc = 0x2FFBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFBDCu;
            // 0x2ffbe0: 0x24c62590  addiu       $a2, $a2, 0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBE4u; }
        if (ctx->pc != 0x2FFBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBE4u; }
        if (ctx->pc != 0x2FFBE4u) { return; }
    }
    ctx->pc = 0x2FFBE4u;
label_2ffbe4:
    // 0x2ffbe4: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x2ffbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2ffbe8:
    // 0x2ffbe8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ffbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ffbec:
    // 0x2ffbec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ffbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffbf0:
    // 0x2ffbf0: 0xc04cbd8  jal         func_132F60
label_2ffbf4:
    if (ctx->pc == 0x2FFBF4u) {
        ctx->pc = 0x2FFBF4u;
            // 0x2ffbf4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FFBF8u;
        goto label_2ffbf8;
    }
    ctx->pc = 0x2FFBF0u;
    SET_GPR_U32(ctx, 31, 0x2FFBF8u);
    ctx->pc = 0x2FFBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFBF0u;
            // 0x2ffbf4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBF8u; }
        if (ctx->pc != 0x2FFBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFBF8u; }
        if (ctx->pc != 0x2FFBF8u) { return; }
    }
    ctx->pc = 0x2FFBF8u;
label_2ffbf8:
    // 0x2ffbf8: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x2ffbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_2ffbfc:
    // 0x2ffbfc: 0x268507e0  addiu       $a1, $s4, 0x7E0
    ctx->pc = 0x2ffbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
label_2ffc00:
    // 0x2ffc00: 0xc04cca0  jal         func_133280
label_2ffc04:
    if (ctx->pc == 0x2FFC04u) {
        ctx->pc = 0x2FFC04u;
            // 0x2ffc04: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FFC08u;
        goto label_2ffc08;
    }
    ctx->pc = 0x2FFC00u;
    SET_GPR_U32(ctx, 31, 0x2FFC08u);
    ctx->pc = 0x2FFC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC00u;
            // 0x2ffc04: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC08u; }
        if (ctx->pc != 0x2FFC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC08u; }
        if (ctx->pc != 0x2FFC08u) { return; }
    }
    ctx->pc = 0x2FFC08u;
label_2ffc08:
    // 0x2ffc08: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2ffc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ffc0c:
    // 0x2ffc0c: 0x268402e0  addiu       $a0, $s4, 0x2E0
    ctx->pc = 0x2ffc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
label_2ffc10:
    // 0x2ffc10: 0x26450050  addiu       $a1, $s2, 0x50
    ctx->pc = 0x2ffc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_2ffc14:
    // 0x2ffc14: 0xe6400110  swc1        $f0, 0x110($s2)
    ctx->pc = 0x2ffc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 272), bits); }
label_2ffc18:
    // 0x2ffc18: 0xc04cc04  jal         func_133010
label_2ffc1c:
    if (ctx->pc == 0x2FFC1Cu) {
        ctx->pc = 0x2FFC1Cu;
            // 0x2ffc1c: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x2FFC20u;
        goto label_2ffc20;
    }
    ctx->pc = 0x2FFC18u;
    SET_GPR_U32(ctx, 31, 0x2FFC20u);
    ctx->pc = 0x2FFC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC18u;
            // 0x2ffc1c: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC20u; }
        if (ctx->pc != 0x2FFC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC20u; }
        if (ctx->pc != 0x2FFC20u) { return; }
    }
    ctx->pc = 0x2FFC20u;
label_2ffc20:
    // 0x2ffc20: 0x26840560  addiu       $a0, $s4, 0x560
    ctx->pc = 0x2ffc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_2ffc24:
    // 0x2ffc24: 0xc075318  jal         func_1D4C60
label_2ffc28:
    if (ctx->pc == 0x2FFC28u) {
        ctx->pc = 0x2FFC28u;
            // 0x2ffc28: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->pc = 0x2FFC2Cu;
        goto label_2ffc2c;
    }
    ctx->pc = 0x2FFC24u;
    SET_GPR_U32(ctx, 31, 0x2FFC2Cu);
    ctx->pc = 0x2FFC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC24u;
            // 0x2ffc28: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC2Cu; }
        if (ctx->pc != 0x2FFC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC2Cu; }
        if (ctx->pc != 0x2FFC2Cu) { return; }
    }
    ctx->pc = 0x2FFC2Cu;
label_2ffc2c:
    // 0x2ffc2c: 0x26830890  addiu       $v1, $s4, 0x890
    ctx->pc = 0x2ffc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
label_2ffc30:
    // 0x2ffc30: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ffc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2ffc34:
    // 0x2ffc34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ffc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffc38:
    // 0x2ffc38: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2ffc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2ffc3c:
    // 0x2ffc3c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x2ffc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2ffc40:
    // 0x2ffc40: 0xc0c6250  jal         func_318940
label_2ffc44:
    if (ctx->pc == 0x2FFC44u) {
        ctx->pc = 0x2FFC44u;
            // 0x2ffc44: 0x26860560  addiu       $a2, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->pc = 0x2FFC48u;
        goto label_2ffc48;
    }
    ctx->pc = 0x2FFC40u;
    SET_GPR_U32(ctx, 31, 0x2FFC48u);
    ctx->pc = 0x2FFC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC40u;
            // 0x2ffc44: 0x26860560  addiu       $a2, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC48u; }
        if (ctx->pc != 0x2FFC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC48u; }
        if (ctx->pc != 0x2FFC48u) { return; }
    }
    ctx->pc = 0x2FFC48u;
label_2ffc48:
    // 0x2ffc48: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x2ffc48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2ffc4c:
    // 0x2ffc4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffc50:
    // 0x2ffc50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ffc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2ffc54:
    // 0x2ffc54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ffc54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ffc58:
    // 0x2ffc58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ffc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ffc5c:
    // 0x2ffc5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffc60:
    // 0x2ffc60: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ffc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ffc64:
    // 0x2ffc64: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2ffc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ffc68:
    // 0x2ffc68: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ffc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ffc6c:
    // 0x2ffc6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ffc70:
    // 0x2ffc70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ffc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ffc74:
    // 0x2ffc74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2ffc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2ffc78:
    // 0x2ffc78: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ffc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ffc7c:
    // 0x2ffc7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ffc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffc80:
    // 0x2ffc80: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ffc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ffc84:
    // 0x2ffc84: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2ffc84u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2ffc88:
    // 0x2ffc88: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ffc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ffc8c:
    // 0x2ffc8c: 0x320f809  jalr        $t9
label_2ffc90:
    if (ctx->pc == 0x2FFC90u) {
        ctx->pc = 0x2FFC90u;
            // 0x2ffc90: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FFC94u;
        goto label_2ffc94;
    }
    ctx->pc = 0x2FFC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFC94u);
        ctx->pc = 0x2FFC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFC8Cu;
            // 0x2ffc90: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC94u; }
            if (ctx->pc != 0x2FFC94u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFC94u;
label_2ffc94:
    // 0x2ffc94: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ffc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ffc98:
    // 0x2ffc98: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ffc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2ffc9c:
    // 0x2ffc9c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2ffc9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2ffca0:
    // 0x2ffca0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ffca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffca4:
    // 0x2ffca4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ffca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ffca8:
    // 0x2ffca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffcac:
    // 0x2ffcac: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ffcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ffcb0:
    // 0x2ffcb0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ffcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ffcb4:
    // 0x2ffcb4: 0x320f809  jalr        $t9
label_2ffcb8:
    if (ctx->pc == 0x2FFCB8u) {
        ctx->pc = 0x2FFCB8u;
            // 0x2ffcb8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FFCBCu;
        goto label_2ffcbc;
    }
    ctx->pc = 0x2FFCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFCBCu);
        ctx->pc = 0x2FFCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCB4u;
            // 0x2ffcb8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFCBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCBCu; }
            if (ctx->pc != 0x2FFCBCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FFCBCu;
label_2ffcbc:
    // 0x2ffcbc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ffcbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ffcc0:
    // 0x2ffcc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ffcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ffcc4:
    // 0x2ffcc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffcc8:
    // 0x2ffcc8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ffcc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ffccc:
    // 0x2ffccc: 0x320f809  jalr        $t9
label_2ffcd0:
    if (ctx->pc == 0x2FFCD0u) {
        ctx->pc = 0x2FFCD0u;
            // 0x2ffcd0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCD4u;
        goto label_2ffcd4;
    }
    ctx->pc = 0x2FFCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFCD4u);
        ctx->pc = 0x2FFCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCCCu;
            // 0x2ffcd0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFCD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCD4u; }
            if (ctx->pc != 0x2FFCD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFCD4u;
label_2ffcd4:
    // 0x2ffcd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ffcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ffcd8:
    // 0x2ffcd8: 0xc07649c  jal         func_1D9270
label_2ffcdc:
    if (ctx->pc == 0x2FFCDCu) {
        ctx->pc = 0x2FFCDCu;
            // 0x2ffcdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FFCE0u;
        goto label_2ffce0;
    }
    ctx->pc = 0x2FFCD8u;
    SET_GPR_U32(ctx, 31, 0x2FFCE0u);
    ctx->pc = 0x2FFCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCD8u;
            // 0x2ffcdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCE0u; }
        if (ctx->pc != 0x2FFCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCE0u; }
        if (ctx->pc != 0x2FFCE0u) { return; }
    }
    ctx->pc = 0x2FFCE0u;
label_2ffce0:
    // 0x2ffce0: 0x26841150  addiu       $a0, $s4, 0x1150
    ctx->pc = 0x2ffce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
label_2ffce4:
    // 0x2ffce4: 0xc12ca3c  jal         func_4B28F0
label_2ffce8:
    if (ctx->pc == 0x2FFCE8u) {
        ctx->pc = 0x2FFCE8u;
            // 0x2ffce8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2FFCECu;
        goto label_2ffcec;
    }
    ctx->pc = 0x2FFCE4u;
    SET_GPR_U32(ctx, 31, 0x2FFCECu);
    ctx->pc = 0x2FFCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCE4u;
            // 0x2ffce8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCECu; }
        if (ctx->pc != 0x2FFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCECu; }
        if (ctx->pc != 0x2FFCECu) { return; }
    }
    ctx->pc = 0x2FFCECu;
label_2ffcec:
    // 0x2ffcec: 0xc0c0f84  jal         func_303E10
label_2ffcf0:
    if (ctx->pc == 0x2FFCF0u) {
        ctx->pc = 0x2FFCF0u;
            // 0x2ffcf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCF4u;
        goto label_2ffcf4;
    }
    ctx->pc = 0x2FFCECu;
    SET_GPR_U32(ctx, 31, 0x2FFCF4u);
    ctx->pc = 0x2FFCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFCECu;
            // 0x2ffcf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCF4u; }
        if (ctx->pc != 0x2FFCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCF4u; }
        if (ctx->pc != 0x2FFCF4u) { return; }
    }
    ctx->pc = 0x2FFCF4u;
label_2ffcf4:
    // 0x2ffcf4: 0x928311ac  lbu         $v1, 0x11AC($s4)
    ctx->pc = 0x2ffcf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4524)));
label_2ffcf8:
    // 0x2ffcf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ffcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ffcfc:
    // 0x2ffcfc: 0xa28311ac  sb          $v1, 0x11AC($s4)
    ctx->pc = 0x2ffcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4524), (uint8_t)GPR_U32(ctx, 3));
label_2ffd00:
    // 0x2ffd00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ffd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ffd04:
    // 0x2ffd04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ffd04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ffd08:
    // 0x2ffd08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ffd08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ffd0c:
    // 0x2ffd0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ffd0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ffd10:
    // 0x2ffd10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ffd10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ffd14:
    // 0x2ffd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffd18:
    // 0x2ffd18: 0x3e00008  jr          $ra
label_2ffd1c:
    if (ctx->pc == 0x2FFD1Cu) {
        ctx->pc = 0x2FFD1Cu;
            // 0x2ffd1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2FFD20u;
        goto label_2ffd20;
    }
    ctx->pc = 0x2FFD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFD18u;
            // 0x2ffd1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FFD20u;
label_2ffd20:
    // 0x2ffd20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ffd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2ffd24:
    // 0x2ffd24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ffd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ffd28:
    // 0x2ffd28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ffd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ffd2c:
    // 0x2ffd2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ffd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ffd30:
    // 0x2ffd30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ffd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ffd34:
    // 0x2ffd34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ffd34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ffd38:
    // 0x2ffd38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ffd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ffd3c:
    // 0x2ffd3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ffd40:
    // 0x2ffd40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ffd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2ffd44:
    // 0x2ffd44: 0x94910c42  lhu         $s1, 0xC42($a0)
    ctx->pc = 0x2ffd44u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3138)));
label_2ffd48:
    // 0x2ffd48: 0xc4800e1c  lwc1        $f0, 0xE1C($a0)
    ctx->pc = 0x2ffd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ffd4c:
    // 0x2ffd4c: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x2ffd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_2ffd50:
    // 0x2ffd50: 0x94830c40  lhu         $v1, 0xC40($a0)
    ctx->pc = 0x2ffd50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3136)));
label_2ffd54:
    // 0x2ffd54: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
label_2ffd58:
    if (ctx->pc == 0x2FFD58u) {
        ctx->pc = 0x2FFD58u;
            // 0x2ffd58: 0x26720bf0  addiu       $s2, $s3, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
        ctx->pc = 0x2FFD5Cu;
        goto label_2ffd5c;
    }
    ctx->pc = 0x2FFD54u;
    {
        const bool branch_taken_0x2ffd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFD54u;
            // 0x2ffd58: 0x26720bf0  addiu       $s2, $s3, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd54) {
            ctx->pc = 0x2FFE3Cu;
            goto label_2ffe3c;
        }
    }
    ctx->pc = 0x2FFD5Cu;
label_2ffd5c:
    // 0x2ffd5c: 0xc0c10c4  jal         func_304310
label_2ffd60:
    if (ctx->pc == 0x2FFD60u) {
        ctx->pc = 0x2FFD64u;
        goto label_2ffd64;
    }
    ctx->pc = 0x2FFD5Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD64u);
    ctx->pc = 0x304310u;
    if (runtime->hasFunction(0x304310u)) {
        auto targetFn = runtime->lookupFunction(0x304310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD64u; }
        if (ctx->pc != 0x2FFD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304310_0x304310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD64u; }
        if (ctx->pc != 0x2FFD64u) { return; }
    }
    ctx->pc = 0x2FFD64u;
label_2ffd64:
    // 0x2ffd64: 0xae600698  sw          $zero, 0x698($s3)
    ctx->pc = 0x2ffd64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 0));
label_2ffd68:
    // 0x2ffd68: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ffd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2ffd6c:
    // 0x2ffd6c: 0x8e630d9c  lw          $v1, 0xD9C($s3)
    ctx->pc = 0x2ffd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_2ffd70:
    // 0x2ffd70: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2ffd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2ffd74:
    // 0x2ffd74: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x2ffd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_2ffd78:
    // 0x2ffd78: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x2ffd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
label_2ffd7c:
    // 0x2ffd7c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2ffd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2ffd80:
    // 0x2ffd80: 0xae630d9c  sw          $v1, 0xD9C($s3)
    ctx->pc = 0x2ffd80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 3));
label_2ffd84:
    // 0x2ffd84: 0xc04cc04  jal         func_133010
label_2ffd88:
    if (ctx->pc == 0x2FFD88u) {
        ctx->pc = 0x2FFD88u;
            // 0x2ffd88: 0xae620db8  sw          $v0, 0xDB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 2));
        ctx->pc = 0x2FFD8Cu;
        goto label_2ffd8c;
    }
    ctx->pc = 0x2FFD84u;
    SET_GPR_U32(ctx, 31, 0x2FFD8Cu);
    ctx->pc = 0x2FFD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFD84u;
            // 0x2ffd88: 0xae620db8  sw          $v0, 0xDB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD8Cu; }
        if (ctx->pc != 0x2FFD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFD8Cu; }
        if (ctx->pc != 0x2FFD8Cu) { return; }
    }
    ctx->pc = 0x2FFD8Cu;
label_2ffd8c:
    // 0x2ffd8c: 0x8e700d74  lw          $s0, 0xD74($s3)
    ctx->pc = 0x2ffd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_2ffd90:
    // 0x2ffd90: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x2ffd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_2ffd94:
    // 0x2ffd94: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2ffd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_2ffd98:
    // 0x2ffd98: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2ffd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_2ffd9c:
    // 0x2ffd9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ffd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ffda0:
    // 0x2ffda0: 0xc0a545c  jal         func_295170
label_2ffda4:
    if (ctx->pc == 0x2FFDA4u) {
        ctx->pc = 0x2FFDA4u;
            // 0x2ffda4: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x2FFDA8u;
        goto label_2ffda8;
    }
    ctx->pc = 0x2FFDA0u;
    SET_GPR_U32(ctx, 31, 0x2FFDA8u);
    ctx->pc = 0x2FFDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDA0u;
            // 0x2ffda4: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDA8u; }
        if (ctx->pc != 0x2FFDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDA8u; }
        if (ctx->pc != 0x2FFDA8u) { return; }
    }
    ctx->pc = 0x2FFDA8u;
label_2ffda8:
    // 0x2ffda8: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x2ffda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_2ffdac:
    // 0x2ffdac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ffdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ffdb0:
    // 0x2ffdb0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ffdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ffdb4:
    // 0x2ffdb4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2ffdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2ffdb8:
    // 0x2ffdb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ffdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ffdbc:
    // 0x2ffdbc: 0xc08bf20  jal         func_22FC80
label_2ffdc0:
    if (ctx->pc == 0x2FFDC0u) {
        ctx->pc = 0x2FFDC0u;
            // 0x2ffdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDC4u;
        goto label_2ffdc4;
    }
    ctx->pc = 0x2FFDBCu;
    SET_GPR_U32(ctx, 31, 0x2FFDC4u);
    ctx->pc = 0x2FFDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDBCu;
            // 0x2ffdc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDC4u; }
        if (ctx->pc != 0x2FFDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDC4u; }
        if (ctx->pc != 0x2FFDC4u) { return; }
    }
    ctx->pc = 0x2FFDC4u;
label_2ffdc4:
    // 0x2ffdc4: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x2ffdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_2ffdc8:
    // 0x2ffdc8: 0xc075318  jal         func_1D4C60
label_2ffdcc:
    if (ctx->pc == 0x2FFDCCu) {
        ctx->pc = 0x2FFDCCu;
            // 0x2ffdcc: 0x266505d0  addiu       $a1, $s3, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
        ctx->pc = 0x2FFDD0u;
        goto label_2ffdd0;
    }
    ctx->pc = 0x2FFDC8u;
    SET_GPR_U32(ctx, 31, 0x2FFDD0u);
    ctx->pc = 0x2FFDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDC8u;
            // 0x2ffdcc: 0x266505d0  addiu       $a1, $s3, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDD0u; }
        if (ctx->pc != 0x2FFDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDD0u; }
        if (ctx->pc != 0x2FFDD0u) { return; }
    }
    ctx->pc = 0x2FFDD0u;
label_2ffdd0:
    // 0x2ffdd0: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x2ffdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_2ffdd4:
    // 0x2ffdd4: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x2ffdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_2ffdd8:
    // 0x2ffdd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ffdd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ffddc:
    // 0x2ffddc: 0xc0c6250  jal         func_318940
label_2ffde0:
    if (ctx->pc == 0x2FFDE0u) {
        ctx->pc = 0x2FFDE0u;
            // 0x2ffde0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDE4u;
        goto label_2ffde4;
    }
    ctx->pc = 0x2FFDDCu;
    SET_GPR_U32(ctx, 31, 0x2FFDE4u);
    ctx->pc = 0x2FFDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDDCu;
            // 0x2ffde0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDE4u; }
        if (ctx->pc != 0x2FFDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDE4u; }
        if (ctx->pc != 0x2FFDE4u) { return; }
    }
    ctx->pc = 0x2FFDE4u;
label_2ffde4:
    // 0x2ffde4: 0x8e6211d4  lw          $v0, 0x11D4($s3)
    ctx->pc = 0x2ffde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
label_2ffde8:
    // 0x2ffde8: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x2ffde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2ffdec:
    // 0x2ffdec: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ffdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2ffdf0:
    // 0x2ffdf0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2ffdf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ffdf4:
    // 0x2ffdf4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ffdf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ffdf8:
    // 0x2ffdf8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ffdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ffdfc:
    // 0x2ffdfc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2ffe00:
    if (ctx->pc == 0x2FFE00u) {
        ctx->pc = 0x2FFE00u;
            // 0x2ffe00: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2FFE04u;
        goto label_2ffe04;
    }
    ctx->pc = 0x2FFDFCu;
    {
        const bool branch_taken_0x2ffdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdfc) {
            ctx->pc = 0x2FFE00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDFCu;
            // 0x2ffe00: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFE20u;
            goto label_2ffe20;
        }
    }
    ctx->pc = 0x2FFE04u;
label_2ffe04:
    // 0x2ffe04: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2ffe04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ffe08:
    // 0x2ffe08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe0c:
    // 0x2ffe0c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2ffe0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2ffe10:
    // 0x2ffe10: 0x320f809  jalr        $t9
label_2ffe14:
    if (ctx->pc == 0x2FFE14u) {
        ctx->pc = 0x2FFE14u;
            // 0x2ffe14: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x2FFE18u;
        goto label_2ffe18;
    }
    ctx->pc = 0x2FFE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFE18u);
        ctx->pc = 0x2FFE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE10u;
            // 0x2ffe14: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFE18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE18u; }
            if (ctx->pc != 0x2FFE18u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFE18u;
label_2ffe18:
    // 0x2ffe18: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ffe1c:
    if (ctx->pc == 0x2FFE1Cu) {
        ctx->pc = 0x2FFE1Cu;
            // 0x2ffe1c: 0xae600e1c  sw          $zero, 0xE1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x2FFE20u;
        goto label_2ffe20;
    }
    ctx->pc = 0x2FFE18u;
    {
        const bool branch_taken_0x2ffe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE18u;
            // 0x2ffe1c: 0xae600e1c  sw          $zero, 0xE1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe18) {
            ctx->pc = 0x2FFE34u;
            goto label_2ffe34;
        }
    }
    ctx->pc = 0x2FFE20u;
label_2ffe20:
    // 0x2ffe20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe24:
    // 0x2ffe24: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2ffe24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2ffe28:
    // 0x2ffe28: 0x320f809  jalr        $t9
label_2ffe2c:
    if (ctx->pc == 0x2FFE2Cu) {
        ctx->pc = 0x2FFE2Cu;
            // 0x2ffe2c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2FFE30u;
        goto label_2ffe30;
    }
    ctx->pc = 0x2FFE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFE30u);
        ctx->pc = 0x2FFE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE28u;
            // 0x2ffe2c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFE30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE30u; }
            if (ctx->pc != 0x2FFE30u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFE30u;
label_2ffe30:
    // 0x2ffe30: 0xae600e1c  sw          $zero, 0xE1C($s3)
    ctx->pc = 0x2ffe30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3612), GPR_U32(ctx, 0));
label_2ffe34:
    // 0x2ffe34: 0x100000be  b           . + 4 + (0xBE << 2)
label_2ffe38:
    if (ctx->pc == 0x2FFE38u) {
        ctx->pc = 0x2FFE38u;
            // 0x2ffe38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2FFE3Cu;
        goto label_2ffe3c;
    }
    ctx->pc = 0x2FFE34u;
    {
        const bool branch_taken_0x2ffe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE34u;
            // 0x2ffe38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe34) {
            ctx->pc = 0x300130u;
            goto label_300130;
        }
    }
    ctx->pc = 0x2FFE3Cu;
label_2ffe3c:
    // 0x2ffe3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ffe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2ffe40:
    // 0x2ffe40: 0x92430054  lbu         $v1, 0x54($s2)
    ctx->pc = 0x2ffe40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
label_2ffe44:
    // 0x2ffe44: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x2ffe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_2ffe48:
    // 0x2ffe48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ffe48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ffe4c:
    // 0x2ffe4c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ffe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ffe50:
    // 0x2ffe50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ffe54:
    // 0x2ffe54: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x2ffe54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ffe58:
    // 0x2ffe58: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x2ffe58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_2ffe5c:
    // 0x2ffe5c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2ffe5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2ffe60:
    // 0x2ffe60: 0x50200017  beql        $at, $zero, . + 4 + (0x17 << 2)
label_2ffe64:
    if (ctx->pc == 0x2FFE64u) {
        ctx->pc = 0x2FFE64u;
            // 0x2ffe64: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2FFE68u;
        goto label_2ffe68;
    }
    ctx->pc = 0x2FFE60u;
    {
        const bool branch_taken_0x2ffe60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe60) {
            ctx->pc = 0x2FFE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE60u;
            // 0x2ffe64: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFEC0u;
            goto label_2ffec0;
        }
    }
    ctx->pc = 0x2FFE68u;
label_2ffe68:
    // 0x2ffe68: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2ffe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2ffe6c:
    // 0x2ffe6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ffe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ffe70:
    // 0x2ffe70: 0x246325a0  addiu       $v1, $v1, 0x25A0
    ctx->pc = 0x2ffe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9632));
label_2ffe74:
    // 0x2ffe74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ffe78:
    // 0x2ffe78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ffe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ffe7c:
    // 0x2ffe7c: 0x400008  jr          $v0
label_2ffe80:
    if (ctx->pc == 0x2FFE80u) {
        ctx->pc = 0x2FFE84u;
        goto label_2ffe84;
    }
    ctx->pc = 0x2FFE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFE84u: goto label_2ffe84;
            case 0x2FFE94u: goto label_2ffe94;
            case 0x2FFEA4u: goto label_2ffea4;
            case 0x2FFEB4u: goto label_2ffeb4;
            case 0x2FFEBCu: goto label_2ffebc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FFE84u;
label_2ffe84:
    // 0x2ffe84: 0xc0c117c  jal         func_3045F0
label_2ffe88:
    if (ctx->pc == 0x2FFE88u) {
        ctx->pc = 0x2FFE88u;
            // 0x2ffe88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE8Cu;
        goto label_2ffe8c;
    }
    ctx->pc = 0x2FFE84u;
    SET_GPR_U32(ctx, 31, 0x2FFE8Cu);
    ctx->pc = 0x2FFE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE84u;
            // 0x2ffe88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3045F0u;
    if (runtime->hasFunction(0x3045F0u)) {
        auto targetFn = runtime->lookupFunction(0x3045F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE8Cu; }
        if (ctx->pc != 0x2FFE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003045F0_0x3045f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE8Cu; }
        if (ctx->pc != 0x2FFE8Cu) { return; }
    }
    ctx->pc = 0x2FFE8Cu;
label_2ffe8c:
    // 0x2ffe8c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ffe90:
    if (ctx->pc == 0x2FFE90u) {
        ctx->pc = 0x2FFE94u;
        goto label_2ffe94;
    }
    ctx->pc = 0x2FFE8Cu;
    {
        const bool branch_taken_0x2ffe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe8c) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFE94u;
label_2ffe94:
    // 0x2ffe94: 0xc0c115c  jal         func_304570
label_2ffe98:
    if (ctx->pc == 0x2FFE98u) {
        ctx->pc = 0x2FFE98u;
            // 0x2ffe98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE9Cu;
        goto label_2ffe9c;
    }
    ctx->pc = 0x2FFE94u;
    SET_GPR_U32(ctx, 31, 0x2FFE9Cu);
    ctx->pc = 0x2FFE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE94u;
            // 0x2ffe98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304570u;
    if (runtime->hasFunction(0x304570u)) {
        auto targetFn = runtime->lookupFunction(0x304570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE9Cu; }
        if (ctx->pc != 0x2FFE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304570_0x304570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE9Cu; }
        if (ctx->pc != 0x2FFE9Cu) { return; }
    }
    ctx->pc = 0x2FFE9Cu;
label_2ffe9c:
    // 0x2ffe9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ffea0:
    if (ctx->pc == 0x2FFEA0u) {
        ctx->pc = 0x2FFEA4u;
        goto label_2ffea4;
    }
    ctx->pc = 0x2FFE9Cu;
    {
        const bool branch_taken_0x2ffe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe9c) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFEA4u;
label_2ffea4:
    // 0x2ffea4: 0xc0c1114  jal         func_304450
label_2ffea8:
    if (ctx->pc == 0x2FFEA8u) {
        ctx->pc = 0x2FFEA8u;
            // 0x2ffea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEACu;
        goto label_2ffeac;
    }
    ctx->pc = 0x2FFEA4u;
    SET_GPR_U32(ctx, 31, 0x2FFEACu);
    ctx->pc = 0x2FFEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEA4u;
            // 0x2ffea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304450u;
    if (runtime->hasFunction(0x304450u)) {
        auto targetFn = runtime->lookupFunction(0x304450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEACu; }
        if (ctx->pc != 0x2FFEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304450_0x304450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEACu; }
        if (ctx->pc != 0x2FFEACu) { return; }
    }
    ctx->pc = 0x2FFEACu;
label_2ffeac:
    // 0x2ffeac: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ffeb0:
    if (ctx->pc == 0x2FFEB0u) {
        ctx->pc = 0x2FFEB4u;
        goto label_2ffeb4;
    }
    ctx->pc = 0x2FFEACu;
    {
        const bool branch_taken_0x2ffeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffeac) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFEB4u;
label_2ffeb4:
    // 0x2ffeb4: 0xc0c10c8  jal         func_304320
label_2ffeb8:
    if (ctx->pc == 0x2FFEB8u) {
        ctx->pc = 0x2FFEB8u;
            // 0x2ffeb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEBCu;
        goto label_2ffebc;
    }
    ctx->pc = 0x2FFEB4u;
    SET_GPR_U32(ctx, 31, 0x2FFEBCu);
    ctx->pc = 0x2FFEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEB4u;
            // 0x2ffeb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304320u;
    if (runtime->hasFunction(0x304320u)) {
        auto targetFn = runtime->lookupFunction(0x304320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEBCu; }
        if (ctx->pc != 0x2FFEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304320_0x304320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEBCu; }
        if (ctx->pc != 0x2FFEBCu) { return; }
    }
    ctx->pc = 0x2FFEBCu;
label_2ffebc:
    // 0x2ffebc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ffebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2ffec0:
    // 0x2ffec0: 0xc04cc04  jal         func_133010
label_2ffec4:
    if (ctx->pc == 0x2FFEC4u) {
        ctx->pc = 0x2FFEC4u;
            // 0x2ffec4: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x2FFEC8u;
        goto label_2ffec8;
    }
    ctx->pc = 0x2FFEC0u;
    SET_GPR_U32(ctx, 31, 0x2FFEC8u);
    ctx->pc = 0x2FFEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEC0u;
            // 0x2ffec4: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEC8u; }
        if (ctx->pc != 0x2FFEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEC8u; }
        if (ctx->pc != 0x2FFEC8u) { return; }
    }
    ctx->pc = 0x2FFEC8u;
label_2ffec8:
    // 0x2ffec8: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x2ffec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_2ffecc:
    // 0x2ffecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ffeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ffed0:
    // 0x2ffed0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ffed4:
    if (ctx->pc == 0x2FFED4u) {
        ctx->pc = 0x2FFED8u;
        goto label_2ffed8;
    }
    ctx->pc = 0x2FFED0u;
    {
        const bool branch_taken_0x2ffed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffed0) {
            ctx->pc = 0x2FFEFCu;
            goto label_2ffefc;
        }
    }
    ctx->pc = 0x2FFED8u;
label_2ffed8:
    // 0x2ffed8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ffed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2ffedc:
    // 0x2ffedc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ffedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ffee0:
    // 0x2ffee0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2ffee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2ffee4:
    // 0x2ffee4: 0xc6610de4  lwc1        $f1, 0xDE4($s3)
    ctx->pc = 0x2ffee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ffee8:
    // 0x2ffee8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2ffee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ffeec:
    // 0x2ffeec: 0xc0b8024  jal         func_2E0090
label_2ffef0:
    if (ctx->pc == 0x2FFEF0u) {
        ctx->pc = 0x2FFEF0u;
            // 0x2ffef0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2FFEF4u;
        goto label_2ffef4;
    }
    ctx->pc = 0x2FFEECu;
    SET_GPR_U32(ctx, 31, 0x2FFEF4u);
    ctx->pc = 0x2FFEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEECu;
            // 0x2ffef0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0090u;
    if (runtime->hasFunction(0x2E0090u)) {
        auto targetFn = runtime->lookupFunction(0x2E0090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEF4u; }
        if (ctx->pc != 0x2FFEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0090_0x2e0090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFEF4u; }
        if (ctx->pc != 0x2FFEF4u) { return; }
    }
    ctx->pc = 0x2FFEF4u;
label_2ffef4:
    // 0x2ffef4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ffef8:
    if (ctx->pc == 0x2FFEF8u) {
        ctx->pc = 0x2FFEF8u;
            // 0x2ffef8: 0x9602001e  lhu         $v0, 0x1E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
        ctx->pc = 0x2FFEFCu;
        goto label_2ffefc;
    }
    ctx->pc = 0x2FFEF4u;
    {
        const bool branch_taken_0x2ffef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFEF4u;
            // 0x2ffef8: 0x9602001e  lhu         $v0, 0x1E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffef4) {
            ctx->pc = 0x2FFF20u;
            goto label_2fff20;
        }
    }
    ctx->pc = 0x2FFEFCu;
label_2ffefc:
    // 0x2ffefc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ffefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2fff00:
    // 0x2fff00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fff04:
    // 0x2fff04: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2fff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2fff08:
    // 0x2fff08: 0xc6610de4  lwc1        $f1, 0xDE4($s3)
    ctx->pc = 0x2fff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fff0c:
    // 0x2fff0c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2fff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2fff10:
    // 0x2fff10: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2fff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fff14:
    // 0x2fff14: 0xc0b8214  jal         func_2E0850
label_2fff18:
    if (ctx->pc == 0x2FFF18u) {
        ctx->pc = 0x2FFF18u;
            // 0x2fff18: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2FFF1Cu;
        goto label_2fff1c;
    }
    ctx->pc = 0x2FFF14u;
    SET_GPR_U32(ctx, 31, 0x2FFF1Cu);
    ctx->pc = 0x2FFF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF14u;
            // 0x2fff18: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0850u;
    if (runtime->hasFunction(0x2E0850u)) {
        auto targetFn = runtime->lookupFunction(0x2E0850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF1Cu; }
        if (ctx->pc != 0x2FFF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0850_0x2e0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF1Cu; }
        if (ctx->pc != 0x2FFF1Cu) { return; }
    }
    ctx->pc = 0x2FFF1Cu;
label_2fff1c:
    // 0x2fff1c: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x2fff1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_2fff20:
    // 0x2fff20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fff20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fff24:
    // 0x2fff24: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2fff28:
    if (ctx->pc == 0x2FFF28u) {
        ctx->pc = 0x2FFF28u;
            // 0x2fff28: 0x26640560  addiu       $a0, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->pc = 0x2FFF2Cu;
        goto label_2fff2c;
    }
    ctx->pc = 0x2FFF24u;
    {
        const bool branch_taken_0x2fff24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fff24) {
            ctx->pc = 0x2FFF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF24u;
            // 0x2fff28: 0x26640560  addiu       $a0, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFF40u;
            goto label_2fff40;
        }
    }
    ctx->pc = 0x2FFF2Cu;
label_2fff2c:
    // 0x2fff2c: 0x96420052  lhu         $v0, 0x52($s2)
    ctx->pc = 0x2fff2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_2fff30:
    // 0x2fff30: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x2fff30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_2fff34:
    // 0x2fff34: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
label_2fff38:
    if (ctx->pc == 0x2FFF38u) {
        ctx->pc = 0x2FFF38u;
            // 0x2fff38: 0x26640340  addiu       $a0, $s3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
        ctx->pc = 0x2FFF3Cu;
        goto label_2fff3c;
    }
    ctx->pc = 0x2FFF34u;
    {
        const bool branch_taken_0x2fff34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fff34) {
            ctx->pc = 0x2FFF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF34u;
            // 0x2fff38: 0x26640340  addiu       $a0, $s3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFF90u;
            goto label_2fff90;
        }
    }
    ctx->pc = 0x2FFF3Cu;
label_2fff3c:
    // 0x2fff3c: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x2fff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_2fff40:
    // 0x2fff40: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2fff40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2fff44:
    // 0x2fff44: 0xc075378  jal         func_1D4DE0
label_2fff48:
    if (ctx->pc == 0x2FFF48u) {
        ctx->pc = 0x2FFF48u;
            // 0x2fff48: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->pc = 0x2FFF4Cu;
        goto label_2fff4c;
    }
    ctx->pc = 0x2FFF44u;
    SET_GPR_U32(ctx, 31, 0x2FFF4Cu);
    ctx->pc = 0x2FFF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF44u;
            // 0x2fff48: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF4Cu; }
        if (ctx->pc != 0x2FFF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF4Cu; }
        if (ctx->pc != 0x2FFF4Cu) { return; }
    }
    ctx->pc = 0x2FFF4Cu;
label_2fff4c:
    // 0x2fff4c: 0xc6610880  lwc1        $f1, 0x880($s3)
    ctx->pc = 0x2fff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fff50:
    // 0x2fff50: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
label_2fff54:
    // 0x2fff54: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2fff54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2fff58:
    // 0x2fff58: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2fff58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fff5c:
    // 0x2fff5c: 0xc0c753c  jal         func_31D4F0
label_2fff60:
    if (ctx->pc == 0x2FFF60u) {
        ctx->pc = 0x2FFF60u;
            // 0x2fff60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FFF64u;
        goto label_2fff64;
    }
    ctx->pc = 0x2FFF5Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF64u);
    ctx->pc = 0x2FFF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF5Cu;
            // 0x2fff60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF64u; }
        if (ctx->pc != 0x2FFF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF64u; }
        if (ctx->pc != 0x2FFF64u) { return; }
    }
    ctx->pc = 0x2FFF64u;
label_2fff64:
    // 0x2fff64: 0xc66c0880  lwc1        $f12, 0x880($s3)
    ctx->pc = 0x2fff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fff68:
    // 0x2fff68: 0x2664092c  addiu       $a0, $s3, 0x92C
    ctx->pc = 0x2fff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
label_2fff6c:
    // 0x2fff6c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2fff6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2fff70:
    // 0x2fff70: 0xc0c753c  jal         func_31D4F0
label_2fff74:
    if (ctx->pc == 0x2FFF74u) {
        ctx->pc = 0x2FFF74u;
            // 0x2fff74: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FFF78u;
        goto label_2fff78;
    }
    ctx->pc = 0x2FFF70u;
    SET_GPR_U32(ctx, 31, 0x2FFF78u);
    ctx->pc = 0x2FFF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF70u;
            // 0x2fff74: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF78u; }
        if (ctx->pc != 0x2FFF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF78u; }
        if (ctx->pc != 0x2FFF78u) { return; }
    }
    ctx->pc = 0x2FFF78u;
label_2fff78:
    // 0x2fff78: 0xc0b9210  jal         func_2E4840
label_2fff7c:
    if (ctx->pc == 0x2FFF7Cu) {
        ctx->pc = 0x2FFF7Cu;
            // 0x2fff7c: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->pc = 0x2FFF80u;
        goto label_2fff80;
    }
    ctx->pc = 0x2FFF78u;
    SET_GPR_U32(ctx, 31, 0x2FFF80u);
    ctx->pc = 0x2FFF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF78u;
            // 0x2fff7c: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF80u; }
        if (ctx->pc != 0x2FFF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF80u; }
        if (ctx->pc != 0x2FFF80u) { return; }
    }
    ctx->pc = 0x2FFF80u;
label_2fff80:
    // 0x2fff80: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x2fff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_2fff84:
    // 0x2fff84: 0xc04cc04  jal         func_133010
label_2fff88:
    if (ctx->pc == 0x2FFF88u) {
        ctx->pc = 0x2FFF88u;
            // 0x2fff88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF8Cu;
        goto label_2fff8c;
    }
    ctx->pc = 0x2FFF84u;
    SET_GPR_U32(ctx, 31, 0x2FFF8Cu);
    ctx->pc = 0x2FFF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF84u;
            // 0x2fff88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF8Cu; }
        if (ctx->pc != 0x2FFF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF8Cu; }
        if (ctx->pc != 0x2FFF8Cu) { return; }
    }
    ctx->pc = 0x2FFF8Cu;
label_2fff8c:
    // 0x2fff8c: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x2fff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_2fff90:
    // 0x2fff90: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x2fff90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2fff94:
    // 0x2fff94: 0xc04cc90  jal         func_133240
label_2fff98:
    if (ctx->pc == 0x2FFF98u) {
        ctx->pc = 0x2FFF98u;
            // 0x2fff98: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2FFF9Cu;
        goto label_2fff9c;
    }
    ctx->pc = 0x2FFF94u;
    SET_GPR_U32(ctx, 31, 0x2FFF9Cu);
    ctx->pc = 0x2FFF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFF94u;
            // 0x2fff98: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF9Cu; }
        if (ctx->pc != 0x2FFF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFF9Cu; }
        if (ctx->pc != 0x2FFF9Cu) { return; }
    }
    ctx->pc = 0x2FFF9Cu;
label_2fff9c:
    // 0x2fff9c: 0xc654004c  lwc1        $f20, 0x4C($s2)
    ctx->pc = 0x2fff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fffa0:
    // 0x2fffa0: 0xc6600e18  lwc1        $f0, 0xE18($s3)
    ctx->pc = 0x2fffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fffa4:
    // 0x2fffa4: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2fffa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2fffa8:
    // 0x2fffa8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2fffa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2fffac:
    // 0x2fffac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2fffacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fffb0:
    // 0x2fffb0: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_2fffb4:
    if (ctx->pc == 0x2FFFB4u) {
        ctx->pc = 0x2FFFB4u;
            // 0x2fffb4: 0x9602001e  lhu         $v0, 0x1E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
        ctx->pc = 0x2FFFB8u;
        goto label_2fffb8;
    }
    ctx->pc = 0x2FFFB0u;
    {
        const bool branch_taken_0x2fffb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fffb0) {
            ctx->pc = 0x2FFFB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFB0u;
            // 0x2fffb4: 0x9602001e  lhu         $v0, 0x1E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFFFCu;
            goto label_2ffffc;
        }
    }
    ctx->pc = 0x2FFFB8u;
label_2fffb8:
    // 0x2fffb8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2fffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2fffbc:
    // 0x2fffbc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2fffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2fffc0:
    // 0x2fffc0: 0xc04cbf0  jal         func_132FC0
label_2fffc4:
    if (ctx->pc == 0x2FFFC4u) {
        ctx->pc = 0x2FFFC4u;
            // 0x2fffc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFC8u;
        goto label_2fffc8;
    }
    ctx->pc = 0x2FFFC0u;
    SET_GPR_U32(ctx, 31, 0x2FFFC8u);
    ctx->pc = 0x2FFFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFC0u;
            // 0x2fffc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFC8u; }
        if (ctx->pc != 0x2FFFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFC8u; }
        if (ctx->pc != 0x2FFFC8u) { return; }
    }
    ctx->pc = 0x2FFFC8u;
label_2fffc8:
    // 0x2fffc8: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x2fffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_2fffcc:
    // 0x2fffcc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2fffccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2fffd0:
    // 0x2fffd0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fffd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fffd4:
    // 0x2fffd4: 0xc04cc7c  jal         func_1331F0
label_2fffd8:
    if (ctx->pc == 0x2FFFD8u) {
        ctx->pc = 0x2FFFD8u;
            // 0x2fffd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2FFFDCu;
        goto label_2fffdc;
    }
    ctx->pc = 0x2FFFD4u;
    SET_GPR_U32(ctx, 31, 0x2FFFDCu);
    ctx->pc = 0x2FFFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFD4u;
            // 0x2fffd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFDCu; }
        if (ctx->pc != 0x2FFFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFDCu; }
        if (ctx->pc != 0x2FFFDCu) { return; }
    }
    ctx->pc = 0x2FFFDCu;
label_2fffdc:
    // 0x2fffdc: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x2fffdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_2fffe0:
    // 0x2fffe0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2fffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2fffe4:
    // 0x2fffe4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2fffe8:
    if (ctx->pc == 0x2FFFE8u) {
        ctx->pc = 0x2FFFE8u;
            // 0x2fffe8: 0xe654004c  swc1        $f20, 0x4C($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
        ctx->pc = 0x2FFFECu;
        goto label_2fffec;
    }
    ctx->pc = 0x2FFFE4u;
    {
        const bool branch_taken_0x2fffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fffe4) {
            ctx->pc = 0x2FFFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFFE4u;
            // 0x2fffe8: 0xe654004c  swc1        $f20, 0x4C($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FFFF8u;
            goto label_2ffff8;
        }
    }
    ctx->pc = 0x2FFFECu;
label_2fffec:
    // 0x2fffec: 0xc6600e18  lwc1        $f0, 0xE18($s3)
    ctx->pc = 0x2fffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ffff0:
    // 0x2ffff0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2ffff0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2ffff4:
    // 0x2ffff4: 0xe654004c  swc1        $f20, 0x4C($s2)
    ctx->pc = 0x2ffff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_2ffff8:
    // 0x2ffff8: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x2ffff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_2ffffc:
    // 0x2ffffc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ffffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_300000:
    // 0x300000: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_300004:
    if (ctx->pc == 0x300004u) {
        ctx->pc = 0x300004u;
            // 0x300004: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x300008u;
        goto label_300008;
    }
    ctx->pc = 0x300000u;
    {
        const bool branch_taken_0x300000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300000) {
            ctx->pc = 0x300004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300000u;
            // 0x300004: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3000D4u;
            goto label_3000d4;
        }
    }
    ctx->pc = 0x300008u;
label_300008:
    // 0x300008: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x300008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_30000c:
    // 0x30000c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x30000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_300010:
    // 0x300010: 0xc04cc04  jal         func_133010
label_300014:
    if (ctx->pc == 0x300014u) {
        ctx->pc = 0x300014u;
            // 0x300014: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
        ctx->pc = 0x300018u;
        goto label_300018;
    }
    ctx->pc = 0x300010u;
    SET_GPR_U32(ctx, 31, 0x300018u);
    ctx->pc = 0x300014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300010u;
            // 0x300014: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300018u; }
        if (ctx->pc != 0x300018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300018u; }
        if (ctx->pc != 0x300018u) { return; }
    }
    ctx->pc = 0x300018u;
label_300018:
    // 0x300018: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x300018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30001c:
    // 0x30001c: 0x26650890  addiu       $a1, $s3, 0x890
    ctx->pc = 0x30001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_300020:
    // 0x300020: 0xc04cca0  jal         func_133280
label_300024:
    if (ctx->pc == 0x300024u) {
        ctx->pc = 0x300024u;
            // 0x300024: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300028u;
        goto label_300028;
    }
    ctx->pc = 0x300020u;
    SET_GPR_U32(ctx, 31, 0x300028u);
    ctx->pc = 0x300024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300020u;
            // 0x300024: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300028u; }
        if (ctx->pc != 0x300028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300028u; }
        if (ctx->pc != 0x300028u) { return; }
    }
    ctx->pc = 0x300028u;
label_300028:
    // 0x300028: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x300028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30002c:
    // 0x30002c: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x30002cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_300030:
    // 0x300030: 0xc04cbe0  jal         func_132F80
label_300034:
    if (ctx->pc == 0x300034u) {
        ctx->pc = 0x300034u;
            // 0x300034: 0x26660340  addiu       $a2, $s3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
        ctx->pc = 0x300038u;
        goto label_300038;
    }
    ctx->pc = 0x300030u;
    SET_GPR_U32(ctx, 31, 0x300038u);
    ctx->pc = 0x300034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300030u;
            // 0x300034: 0x26660340  addiu       $a2, $s3, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300038u; }
        if (ctx->pc != 0x300038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300038u; }
        if (ctx->pc != 0x300038u) { return; }
    }
    ctx->pc = 0x300038u;
label_300038:
    // 0x300038: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x300038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_30003c:
    // 0x30003c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_300040:
    // 0x300040: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300044:
    // 0x300044: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x300044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_300048:
    // 0x300048: 0xc04cc7c  jal         func_1331F0
label_30004c:
    if (ctx->pc == 0x30004Cu) {
        ctx->pc = 0x30004Cu;
            // 0x30004c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x300050u;
        goto label_300050;
    }
    ctx->pc = 0x300048u;
    SET_GPR_U32(ctx, 31, 0x300050u);
    ctx->pc = 0x30004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300048u;
            // 0x30004c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300050u; }
        if (ctx->pc != 0x300050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300050u; }
        if (ctx->pc != 0x300050u) { return; }
    }
    ctx->pc = 0x300050u;
label_300050:
    // 0x300050: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x300050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_300054:
    // 0x300054: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x300054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_300058:
    // 0x300058: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30005c:
    // 0x30005c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_300060:
    // 0x300060: 0xc04cc7c  jal         func_1331F0
label_300064:
    if (ctx->pc == 0x300064u) {
        ctx->pc = 0x300064u;
            // 0x300064: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300068u;
        goto label_300068;
    }
    ctx->pc = 0x300060u;
    SET_GPR_U32(ctx, 31, 0x300068u);
    ctx->pc = 0x300064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300060u;
            // 0x300064: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300068u; }
        if (ctx->pc != 0x300068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300068u; }
        if (ctx->pc != 0x300068u) { return; }
    }
    ctx->pc = 0x300068u;
label_300068:
    // 0x300068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x300068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30006c:
    // 0x30006c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x30006cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_300070:
    // 0x300070: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x300070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
label_300074:
    // 0x300074: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x300074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_300078:
    // 0x300078: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x300078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30007c:
    // 0x30007c: 0xc0d16dc  jal         func_345B70
label_300080:
    if (ctx->pc == 0x300080u) {
        ctx->pc = 0x300080u;
            // 0x300080: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x300084u;
        goto label_300084;
    }
    ctx->pc = 0x30007Cu;
    SET_GPR_U32(ctx, 31, 0x300084u);
    ctx->pc = 0x300080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30007Cu;
            // 0x300080: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300084u; }
        if (ctx->pc != 0x300084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300084u; }
        if (ctx->pc != 0x300084u) { return; }
    }
    ctx->pc = 0x300084u;
label_300084:
    // 0x300084: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x300084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_300088:
    // 0x300088: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x300088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_30008c:
    // 0x30008c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_300090:
    if (ctx->pc == 0x300090u) {
        ctx->pc = 0x300094u;
        goto label_300094;
    }
    ctx->pc = 0x30008Cu;
    {
        const bool branch_taken_0x30008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30008c) {
            ctx->pc = 0x3000D0u;
            goto label_3000d0;
        }
    }
    ctx->pc = 0x300094u;
label_300094:
    // 0x300094: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x300094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_300098:
    // 0x300098: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x300098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_30009c:
    // 0x30009c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30009cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3000a0:
    // 0x3000a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3000a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3000a4:
    // 0x3000a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3000a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3000a8:
    // 0x3000a8: 0xc04cc7c  jal         func_1331F0
label_3000ac:
    if (ctx->pc == 0x3000ACu) {
        ctx->pc = 0x3000ACu;
            // 0x3000ac: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3000B0u;
        goto label_3000b0;
    }
    ctx->pc = 0x3000A8u;
    SET_GPR_U32(ctx, 31, 0x3000B0u);
    ctx->pc = 0x3000ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3000A8u;
            // 0x3000ac: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000B0u; }
        if (ctx->pc != 0x3000B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000B0u; }
        if (ctx->pc != 0x3000B0u) { return; }
    }
    ctx->pc = 0x3000B0u;
label_3000b0:
    // 0x3000b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3000b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3000b4:
    // 0x3000b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3000b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3000b8:
    // 0x3000b8: 0xc04cc90  jal         func_133240
label_3000bc:
    if (ctx->pc == 0x3000BCu) {
        ctx->pc = 0x3000BCu;
            // 0x3000bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3000C0u;
        goto label_3000c0;
    }
    ctx->pc = 0x3000B8u;
    SET_GPR_U32(ctx, 31, 0x3000C0u);
    ctx->pc = 0x3000BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3000B8u;
            // 0x3000bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000C0u; }
        if (ctx->pc != 0x3000C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000C0u; }
        if (ctx->pc != 0x3000C0u) { return; }
    }
    ctx->pc = 0x3000C0u;
label_3000c0:
    // 0x3000c0: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x3000c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_3000c4:
    // 0x3000c4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3000c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3000c8:
    // 0x3000c8: 0xc04cbe0  jal         func_132F80
label_3000cc:
    if (ctx->pc == 0x3000CCu) {
        ctx->pc = 0x3000CCu;
            // 0x3000cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3000D0u;
        goto label_3000d0;
    }
    ctx->pc = 0x3000C8u;
    SET_GPR_U32(ctx, 31, 0x3000D0u);
    ctx->pc = 0x3000CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3000C8u;
            // 0x3000cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000D0u; }
        if (ctx->pc != 0x3000D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000D0u; }
        if (ctx->pc != 0x3000D0u) { return; }
    }
    ctx->pc = 0x3000D0u;
label_3000d0:
    // 0x3000d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3000d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3000d4:
    // 0x3000d4: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x3000d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_3000d8:
    // 0x3000d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3000d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3000dc:
    // 0x3000dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3000dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3000e0:
    // 0x3000e0: 0xc04cc7c  jal         func_1331F0
label_3000e4:
    if (ctx->pc == 0x3000E4u) {
        ctx->pc = 0x3000E4u;
            // 0x3000e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3000E8u;
        goto label_3000e8;
    }
    ctx->pc = 0x3000E0u;
    SET_GPR_U32(ctx, 31, 0x3000E8u);
    ctx->pc = 0x3000E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3000E0u;
            // 0x3000e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000E8u; }
        if (ctx->pc != 0x3000E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000E8u; }
        if (ctx->pc != 0x3000E8u) { return; }
    }
    ctx->pc = 0x3000E8u;
label_3000e8:
    // 0x3000e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3000e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3000ec:
    // 0x3000ec: 0xc075318  jal         func_1D4C60
label_3000f0:
    if (ctx->pc == 0x3000F0u) {
        ctx->pc = 0x3000F0u;
            // 0x3000f0: 0x26640560  addiu       $a0, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->pc = 0x3000F4u;
        goto label_3000f4;
    }
    ctx->pc = 0x3000ECu;
    SET_GPR_U32(ctx, 31, 0x3000F4u);
    ctx->pc = 0x3000F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3000ECu;
            // 0x3000f0: 0x26640560  addiu       $a0, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000F4u; }
        if (ctx->pc != 0x3000F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3000F4u; }
        if (ctx->pc != 0x3000F4u) { return; }
    }
    ctx->pc = 0x3000F4u;
label_3000f4:
    // 0x3000f4: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x3000f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3000f8:
    // 0x3000f8: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x3000f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_3000fc:
    // 0x3000fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3000fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300100:
    // 0x300100: 0xc0c6250  jal         func_318940
label_300104:
    if (ctx->pc == 0x300104u) {
        ctx->pc = 0x300104u;
            // 0x300104: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300108u;
        goto label_300108;
    }
    ctx->pc = 0x300100u;
    SET_GPR_U32(ctx, 31, 0x300108u);
    ctx->pc = 0x300104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300100u;
            // 0x300104: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300108u; }
        if (ctx->pc != 0x300108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300108u; }
        if (ctx->pc != 0x300108u) { return; }
    }
    ctx->pc = 0x300108u;
label_300108:
    // 0x300108: 0x26630890  addiu       $v1, $s3, 0x890
    ctx->pc = 0x300108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_30010c:
    // 0x30010c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_300110:
    // 0x300110: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300114:
    // 0x300114: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x300114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_300118:
    // 0x300118: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x300118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_30011c:
    // 0x30011c: 0xc0c6250  jal         func_318940
label_300120:
    if (ctx->pc == 0x300120u) {
        ctx->pc = 0x300120u;
            // 0x300120: 0x26660560  addiu       $a2, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->pc = 0x300124u;
        goto label_300124;
    }
    ctx->pc = 0x30011Cu;
    SET_GPR_U32(ctx, 31, 0x300124u);
    ctx->pc = 0x300120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30011Cu;
            // 0x300120: 0x26660560  addiu       $a2, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300124u; }
        if (ctx->pc != 0x300124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300124u; }
        if (ctx->pc != 0x300124u) { return; }
    }
    ctx->pc = 0x300124u;
label_300124:
    // 0x300124: 0xc6600de4  lwc1        $f0, 0xDE4($s3)
    ctx->pc = 0x300124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_300128:
    // 0x300128: 0xe6600e1c  swc1        $f0, 0xE1C($s3)
    ctx->pc = 0x300128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3612), bits); }
label_30012c:
    // 0x30012c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30012cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_300130:
    // 0x300130: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x300130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_300134:
    // 0x300134: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x300134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_300138:
    // 0x300138: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x300138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30013c:
    // 0x30013c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30013cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_300140:
    // 0x300140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x300140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_300144:
    // 0x300144: 0x3e00008  jr          $ra
label_300148:
    if (ctx->pc == 0x300148u) {
        ctx->pc = 0x300148u;
            // 0x300148: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x30014Cu;
        goto label_30014c;
    }
    ctx->pc = 0x300144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300144u;
            // 0x300148: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30014Cu;
label_30014c:
    // 0x30014c: 0x0  nop
    ctx->pc = 0x30014cu;
    // NOP
label_300150:
    // 0x300150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x300150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_300154:
    // 0x300154: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300158:
    // 0x300158: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x300158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_30015c:
    // 0x30015c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_300160:
    // 0x300160: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x300160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_300164:
    // 0x300164: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x300164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_300168:
    // 0x300168: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x300168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30016c:
    // 0x30016c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_300170:
    // 0x300170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_300174:
    // 0x300174: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x300174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_300178:
    // 0x300178: 0x90830c44  lbu         $v1, 0xC44($a0)
    ctx->pc = 0x300178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3140)));
label_30017c:
    // 0x30017c: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x30017cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_300180:
    // 0x300180: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x300180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_300184:
    // 0x300184: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x300184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_300188:
    // 0x300188: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30018c:
    // 0x30018c: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x30018cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_300190:
    // 0x300190: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x300190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_300194:
    // 0x300194: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x300194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_300198:
    // 0x300198: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_30019c:
    if (ctx->pc == 0x30019Cu) {
        ctx->pc = 0x30019Cu;
            // 0x30019c: 0x26720bf0  addiu       $s2, $s3, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
        ctx->pc = 0x3001A0u;
        goto label_3001a0;
    }
    ctx->pc = 0x300198u;
    {
        const bool branch_taken_0x300198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300198u;
            // 0x30019c: 0x26720bf0  addiu       $s2, $s3, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300198) {
            ctx->pc = 0x3001F4u;
            goto label_3001f4;
        }
    }
    ctx->pc = 0x3001A0u;
label_3001a0:
    // 0x3001a0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3001a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_3001a4:
    // 0x3001a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3001a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3001a8:
    // 0x3001a8: 0x246325c0  addiu       $v1, $v1, 0x25C0
    ctx->pc = 0x3001a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9664));
label_3001ac:
    // 0x3001ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3001acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3001b0:
    // 0x3001b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3001b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3001b4:
    // 0x3001b4: 0x400008  jr          $v0
label_3001b8:
    if (ctx->pc == 0x3001B8u) {
        ctx->pc = 0x3001BCu;
        goto label_3001bc;
    }
    ctx->pc = 0x3001B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3001BCu: goto label_3001bc;
            case 0x3001CCu: goto label_3001cc;
            case 0x3001DCu: goto label_3001dc;
            case 0x3001ECu: goto label_3001ec;
            case 0x3001F4u: goto label_3001f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3001BCu;
label_3001bc:
    // 0x3001bc: 0xc0c1258  jal         func_304960
label_3001c0:
    if (ctx->pc == 0x3001C0u) {
        ctx->pc = 0x3001C0u;
            // 0x3001c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3001C4u;
        goto label_3001c4;
    }
    ctx->pc = 0x3001BCu;
    SET_GPR_U32(ctx, 31, 0x3001C4u);
    ctx->pc = 0x3001C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3001BCu;
            // 0x3001c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304960u;
    if (runtime->hasFunction(0x304960u)) {
        auto targetFn = runtime->lookupFunction(0x304960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001C4u; }
        if (ctx->pc != 0x3001C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304960_0x304960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001C4u; }
        if (ctx->pc != 0x3001C4u) { return; }
    }
    ctx->pc = 0x3001C4u;
label_3001c4:
    // 0x3001c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3001c8:
    if (ctx->pc == 0x3001C8u) {
        ctx->pc = 0x3001C8u;
            // 0x3001c8: 0x8e6311d4  lw          $v1, 0x11D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
        ctx->pc = 0x3001CCu;
        goto label_3001cc;
    }
    ctx->pc = 0x3001C4u;
    {
        const bool branch_taken_0x3001c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3001C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3001C4u;
            // 0x3001c8: 0x8e6311d4  lw          $v1, 0x11D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001c4) {
            ctx->pc = 0x3001F8u;
            goto label_3001f8;
        }
    }
    ctx->pc = 0x3001CCu;
label_3001cc:
    // 0x3001cc: 0xc0c1218  jal         func_304860
label_3001d0:
    if (ctx->pc == 0x3001D0u) {
        ctx->pc = 0x3001D0u;
            // 0x3001d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3001D4u;
        goto label_3001d4;
    }
    ctx->pc = 0x3001CCu;
    SET_GPR_U32(ctx, 31, 0x3001D4u);
    ctx->pc = 0x3001D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3001CCu;
            // 0x3001d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304860u;
    if (runtime->hasFunction(0x304860u)) {
        auto targetFn = runtime->lookupFunction(0x304860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001D4u; }
        if (ctx->pc != 0x3001D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304860_0x304860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001D4u; }
        if (ctx->pc != 0x3001D4u) { return; }
    }
    ctx->pc = 0x3001D4u;
label_3001d4:
    // 0x3001d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3001d8:
    if (ctx->pc == 0x3001D8u) {
        ctx->pc = 0x3001DCu;
        goto label_3001dc;
    }
    ctx->pc = 0x3001D4u;
    {
        const bool branch_taken_0x3001d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3001d4) {
            ctx->pc = 0x3001F4u;
            goto label_3001f4;
        }
    }
    ctx->pc = 0x3001DCu;
label_3001dc:
    // 0x3001dc: 0xc0c11e0  jal         func_304780
label_3001e0:
    if (ctx->pc == 0x3001E0u) {
        ctx->pc = 0x3001E0u;
            // 0x3001e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3001E4u;
        goto label_3001e4;
    }
    ctx->pc = 0x3001DCu;
    SET_GPR_U32(ctx, 31, 0x3001E4u);
    ctx->pc = 0x3001E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3001DCu;
            // 0x3001e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304780u;
    if (runtime->hasFunction(0x304780u)) {
        auto targetFn = runtime->lookupFunction(0x304780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001E4u; }
        if (ctx->pc != 0x3001E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304780_0x304780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001E4u; }
        if (ctx->pc != 0x3001E4u) { return; }
    }
    ctx->pc = 0x3001E4u;
label_3001e4:
    // 0x3001e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3001e8:
    if (ctx->pc == 0x3001E8u) {
        ctx->pc = 0x3001ECu;
        goto label_3001ec;
    }
    ctx->pc = 0x3001E4u;
    {
        const bool branch_taken_0x3001e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3001e4) {
            ctx->pc = 0x3001F4u;
            goto label_3001f4;
        }
    }
    ctx->pc = 0x3001ECu;
label_3001ec:
    // 0x3001ec: 0xc0c11a8  jal         func_3046A0
label_3001f0:
    if (ctx->pc == 0x3001F0u) {
        ctx->pc = 0x3001F0u;
            // 0x3001f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3001F4u;
        goto label_3001f4;
    }
    ctx->pc = 0x3001ECu;
    SET_GPR_U32(ctx, 31, 0x3001F4u);
    ctx->pc = 0x3001F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3001ECu;
            // 0x3001f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3046A0u;
    if (runtime->hasFunction(0x3046A0u)) {
        auto targetFn = runtime->lookupFunction(0x3046A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001F4u; }
        if (ctx->pc != 0x3001F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003046A0_0x3046a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3001F4u; }
        if (ctx->pc != 0x3001F4u) { return; }
    }
    ctx->pc = 0x3001F4u;
label_3001f4:
    // 0x3001f4: 0x8e6311d4  lw          $v1, 0x11D4($s3)
    ctx->pc = 0x3001f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4564)));
label_3001f8:
    // 0x3001f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3001f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3001fc:
    // 0x3001fc: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
label_300200:
    if (ctx->pc == 0x300200u) {
        ctx->pc = 0x300200u;
            // 0x300200: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->pc = 0x300204u;
        goto label_300204;
    }
    ctx->pc = 0x3001FCu;
    {
        const bool branch_taken_0x3001fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3001fc) {
            ctx->pc = 0x300200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3001FCu;
            // 0x300200: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300280u;
            goto label_300280;
        }
    }
    ctx->pc = 0x300204u;
label_300204:
    // 0x300204: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x300204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_300208:
    // 0x300208: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_30020c:
    if (ctx->pc == 0x30020Cu) {
        ctx->pc = 0x300210u;
        goto label_300210;
    }
    ctx->pc = 0x300208u;
    {
        const bool branch_taken_0x300208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300208) {
            ctx->pc = 0x30027Cu;
            goto label_30027c;
        }
    }
    ctx->pc = 0x300210u;
label_300210:
    // 0x300210: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x300210u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_300214:
    // 0x300214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300218:
    // 0x300218: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x300218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_30021c:
    // 0x30021c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x30021cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_300220:
    // 0x300220: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x300220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_300224:
    // 0x300224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300228:
    // 0x300228: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x300228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30022c:
    // 0x30022c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30022cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300230:
    // 0x300230: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x300230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_300234:
    // 0x300234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x300234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_300238:
    // 0x300238: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x300238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_30023c:
    // 0x30023c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_300240:
    // 0x300240: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x300240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_300244:
    // 0x300244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x300244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300248:
    // 0x300248: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x300248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_30024c:
    // 0x30024c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x30024cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_300250:
    // 0x300250: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x300250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_300254:
    // 0x300254: 0x320f809  jalr        $t9
label_300258:
    if (ctx->pc == 0x300258u) {
        ctx->pc = 0x300258u;
            // 0x300258: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x30025Cu;
        goto label_30025c;
    }
    ctx->pc = 0x300254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30025Cu);
        ctx->pc = 0x300258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300254u;
            // 0x300258: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30025Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30025Cu; }
            if (ctx->pc != 0x30025Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30025Cu;
label_30025c:
    // 0x30025c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x30025cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_300260:
    // 0x300260: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x300260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_300264:
    // 0x300264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300268:
    // 0x300268: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x300268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_30026c:
    // 0x30026c: 0x320f809  jalr        $t9
label_300270:
    if (ctx->pc == 0x300270u) {
        ctx->pc = 0x300270u;
            // 0x300270: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300274u;
        goto label_300274;
    }
    ctx->pc = 0x30026Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300274u);
        ctx->pc = 0x300270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30026Cu;
            // 0x300270: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300274u; }
            if (ctx->pc != 0x300274u) { return; }
        }
        }
    }
    ctx->pc = 0x300274u;
label_300274:
    // 0x300274: 0x1000001b  b           . + 4 + (0x1B << 2)
label_300278:
    if (ctx->pc == 0x300278u) {
        ctx->pc = 0x300278u;
            // 0x300278: 0xae600dc4  sw          $zero, 0xDC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
        ctx->pc = 0x30027Cu;
        goto label_30027c;
    }
    ctx->pc = 0x300274u;
    {
        const bool branch_taken_0x300274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300274u;
            // 0x300278: 0xae600dc4  sw          $zero, 0xDC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300274) {
            ctx->pc = 0x3002E4u;
            goto label_3002e4;
        }
    }
    ctx->pc = 0x30027Cu;
label_30027c:
    // 0x30027c: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x30027cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_300280:
    // 0x300280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300284:
    // 0x300284: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x300284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_300288:
    // 0x300288: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x300288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30028c:
    // 0x30028c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_300290:
    // 0x300290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300294:
    // 0x300294: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x300294u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_300298:
    // 0x300298: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x300298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_30029c:
    // 0x30029c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30029cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3002a0:
    // 0x3002a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3002a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3002a4:
    // 0x3002a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3002a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3002a8:
    // 0x3002a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3002a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3002ac:
    // 0x3002ac: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3002acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3002b0:
    // 0x3002b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3002b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3002b4:
    // 0x3002b4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3002b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3002b8:
    // 0x3002b8: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3002b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3002bc:
    // 0x3002bc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3002bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3002c0:
    // 0x3002c0: 0x320f809  jalr        $t9
label_3002c4:
    if (ctx->pc == 0x3002C4u) {
        ctx->pc = 0x3002C4u;
            // 0x3002c4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3002C8u;
        goto label_3002c8;
    }
    ctx->pc = 0x3002C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3002C8u);
        ctx->pc = 0x3002C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3002C0u;
            // 0x3002c4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3002C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3002C8u; }
            if (ctx->pc != 0x3002C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3002C8u;
label_3002c8:
    // 0x3002c8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3002c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3002cc:
    // 0x3002cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3002ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3002d0:
    // 0x3002d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3002d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3002d4:
    // 0x3002d4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3002d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3002d8:
    // 0x3002d8: 0x320f809  jalr        $t9
label_3002dc:
    if (ctx->pc == 0x3002DCu) {
        ctx->pc = 0x3002DCu;
            // 0x3002dc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3002E0u;
        goto label_3002e0;
    }
    ctx->pc = 0x3002D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3002E0u);
        ctx->pc = 0x3002DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3002D8u;
            // 0x3002dc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3002E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3002E0u; }
            if (ctx->pc != 0x3002E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3002E0u;
label_3002e0:
    // 0x3002e0: 0xae600dc4  sw          $zero, 0xDC4($s3)
    ctx->pc = 0x3002e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
label_3002e4:
    // 0x3002e4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x3002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_3002e8:
    // 0x3002e8: 0xae600dc0  sw          $zero, 0xDC0($s3)
    ctx->pc = 0x3002e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3520), GPR_U32(ctx, 0));
label_3002ec:
    // 0x3002ec: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3002ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3002f0:
    // 0x3002f0: 0xae600dc8  sw          $zero, 0xDC8($s3)
    ctx->pc = 0x3002f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3528), GPR_U32(ctx, 0));
label_3002f4:
    // 0x3002f4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x3002f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3002f8:
    // 0x3002f8: 0x8e620d9c  lw          $v0, 0xD9C($s3)
    ctx->pc = 0x3002f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_3002fc:
    // 0x3002fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3002fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_300300:
    // 0x300300: 0xae620d9c  sw          $v0, 0xD9C($s3)
    ctx->pc = 0x300300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 2));
label_300304:
    // 0x300304: 0x8e700d74  lw          $s0, 0xD74($s3)
    ctx->pc = 0x300304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_300308:
    // 0x300308: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x300308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30030c:
    // 0x30030c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x30030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_300310:
    // 0x300310: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x300310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_300314:
    // 0x300314: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x300314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_300318:
    // 0x300318: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x300318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_30031c:
    // 0x30031c: 0xc0a545c  jal         func_295170
label_300320:
    if (ctx->pc == 0x300320u) {
        ctx->pc = 0x300320u;
            // 0x300320: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x300324u;
        goto label_300324;
    }
    ctx->pc = 0x30031Cu;
    SET_GPR_U32(ctx, 31, 0x300324u);
    ctx->pc = 0x300320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30031Cu;
            // 0x300320: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300324u; }
        if (ctx->pc != 0x300324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300324u; }
        if (ctx->pc != 0x300324u) { return; }
    }
    ctx->pc = 0x300324u;
label_300324:
    // 0x300324: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x300324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_300328:
    // 0x300328: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x300328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30032c:
    // 0x30032c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30032cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_300330:
    // 0x300330: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x300330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_300334:
    // 0x300334: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x300334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_300338:
    // 0x300338: 0xc08bf20  jal         func_22FC80
label_30033c:
    if (ctx->pc == 0x30033Cu) {
        ctx->pc = 0x30033Cu;
            // 0x30033c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300340u;
        goto label_300340;
    }
    ctx->pc = 0x300338u;
    SET_GPR_U32(ctx, 31, 0x300340u);
    ctx->pc = 0x30033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300338u;
            // 0x30033c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300340u; }
        if (ctx->pc != 0x300340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300340u; }
        if (ctx->pc != 0x300340u) { return; }
    }
    ctx->pc = 0x300340u;
label_300340:
    // 0x300340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x300340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300344:
    // 0x300344: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x300344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_300348:
    // 0x300348: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x300348u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_30034c:
    // 0x30034c: 0xc04cbd8  jal         func_132F60
label_300350:
    if (ctx->pc == 0x300350u) {
        ctx->pc = 0x300350u;
            // 0x300350: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x300354u;
        goto label_300354;
    }
    ctx->pc = 0x30034Cu;
    SET_GPR_U32(ctx, 31, 0x300354u);
    ctx->pc = 0x300350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30034Cu;
            // 0x300350: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300354u; }
        if (ctx->pc != 0x300354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300354u; }
        if (ctx->pc != 0x300354u) { return; }
    }
    ctx->pc = 0x300354u;
label_300354:
    // 0x300354: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x300354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_300358:
    // 0x300358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30035c:
    // 0x30035c: 0xae630db8  sw          $v1, 0xDB8($s3)
    ctx->pc = 0x30035cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 3));
label_300360:
    // 0x300360: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x300360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_300364:
    // 0x300364: 0xae620698  sw          $v0, 0x698($s3)
    ctx->pc = 0x300364u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 2));
label_300368:
    // 0x300368: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x300368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_30036c:
    // 0x30036c: 0x96460052  lhu         $a2, 0x52($s2)
    ctx->pc = 0x30036cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_300370:
    // 0x300370: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x300370u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_300374:
    // 0x300374: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x300374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_300378:
    // 0x300378: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x300378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_30037c:
    // 0x30037c: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x30037cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_300380:
    // 0x300380: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x300380u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_300384:
    // 0x300384: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x300384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_300388:
    // 0x300388: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x300388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_30038c:
    // 0x30038c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x30038cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_300390:
    // 0x300390: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x300390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_300394:
    // 0x300394: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x300394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_300398:
    // 0x300398: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x300398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_30039c:
    // 0x30039c: 0xc04cc90  jal         func_133240
label_3003a0:
    if (ctx->pc == 0x3003A0u) {
        ctx->pc = 0x3003A0u;
            // 0x3003a0: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x3003A4u;
        goto label_3003a4;
    }
    ctx->pc = 0x30039Cu;
    SET_GPR_U32(ctx, 31, 0x3003A4u);
    ctx->pc = 0x3003A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30039Cu;
            // 0x3003a0: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003A4u; }
        if (ctx->pc != 0x3003A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003A4u; }
        if (ctx->pc != 0x3003A4u) { return; }
    }
    ctx->pc = 0x3003A4u;
label_3003a4:
    // 0x3003a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3003a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3003a8:
    // 0x3003a8: 0xc04cc44  jal         func_133110
label_3003ac:
    if (ctx->pc == 0x3003ACu) {
        ctx->pc = 0x3003ACu;
            // 0x3003ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3003B0u;
        goto label_3003b0;
    }
    ctx->pc = 0x3003A8u;
    SET_GPR_U32(ctx, 31, 0x3003B0u);
    ctx->pc = 0x3003ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3003A8u;
            // 0x3003ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003B0u; }
        if (ctx->pc != 0x3003B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003B0u; }
        if (ctx->pc != 0x3003B0u) { return; }
    }
    ctx->pc = 0x3003B0u;
label_3003b0:
    // 0x3003b0: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x3003b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3003b4:
    // 0x3003b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3003b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3003b8:
    // 0x3003b8: 0xc075378  jal         func_1D4DE0
label_3003bc:
    if (ctx->pc == 0x3003BCu) {
        ctx->pc = 0x3003BCu;
            // 0x3003bc: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->pc = 0x3003C0u;
        goto label_3003c0;
    }
    ctx->pc = 0x3003B8u;
    SET_GPR_U32(ctx, 31, 0x3003C0u);
    ctx->pc = 0x3003BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3003B8u;
            // 0x3003bc: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003C0u; }
        if (ctx->pc != 0x3003C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003C0u; }
        if (ctx->pc != 0x3003C0u) { return; }
    }
    ctx->pc = 0x3003C0u;
label_3003c0:
    // 0x3003c0: 0xc6610880  lwc1        $f1, 0x880($s3)
    ctx->pc = 0x3003c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3003c4:
    // 0x3003c4: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x3003c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
label_3003c8:
    // 0x3003c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3003c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3003cc:
    // 0x3003cc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3003ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3003d0:
    // 0x3003d0: 0xc0c753c  jal         func_31D4F0
label_3003d4:
    if (ctx->pc == 0x3003D4u) {
        ctx->pc = 0x3003D4u;
            // 0x3003d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3003D8u;
        goto label_3003d8;
    }
    ctx->pc = 0x3003D0u;
    SET_GPR_U32(ctx, 31, 0x3003D8u);
    ctx->pc = 0x3003D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3003D0u;
            // 0x3003d4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003D8u; }
        if (ctx->pc != 0x3003D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003D8u; }
        if (ctx->pc != 0x3003D8u) { return; }
    }
    ctx->pc = 0x3003D8u;
label_3003d8:
    // 0x3003d8: 0xc66c0880  lwc1        $f12, 0x880($s3)
    ctx->pc = 0x3003d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3003dc:
    // 0x3003dc: 0x2664092c  addiu       $a0, $s3, 0x92C
    ctx->pc = 0x3003dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
label_3003e0:
    // 0x3003e0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3003e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3003e4:
    // 0x3003e4: 0xc0c753c  jal         func_31D4F0
label_3003e8:
    if (ctx->pc == 0x3003E8u) {
        ctx->pc = 0x3003E8u;
            // 0x3003e8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3003ECu;
        goto label_3003ec;
    }
    ctx->pc = 0x3003E4u;
    SET_GPR_U32(ctx, 31, 0x3003ECu);
    ctx->pc = 0x3003E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3003E4u;
            // 0x3003e8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003ECu; }
        if (ctx->pc != 0x3003ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003ECu; }
        if (ctx->pc != 0x3003ECu) { return; }
    }
    ctx->pc = 0x3003ECu;
label_3003ec:
    // 0x3003ec: 0xc0b9210  jal         func_2E4840
label_3003f0:
    if (ctx->pc == 0x3003F0u) {
        ctx->pc = 0x3003F0u;
            // 0x3003f0: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->pc = 0x3003F4u;
        goto label_3003f4;
    }
    ctx->pc = 0x3003ECu;
    SET_GPR_U32(ctx, 31, 0x3003F4u);
    ctx->pc = 0x3003F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3003ECu;
            // 0x3003f0: 0x26640890  addiu       $a0, $s3, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003F4u; }
        if (ctx->pc != 0x3003F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3003F4u; }
        if (ctx->pc != 0x3003F4u) { return; }
    }
    ctx->pc = 0x3003F4u;
label_3003f4:
    // 0x3003f4: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x3003f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_3003f8:
    // 0x3003f8: 0xc04cc04  jal         func_133010
label_3003fc:
    if (ctx->pc == 0x3003FCu) {
        ctx->pc = 0x3003FCu;
            // 0x3003fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300400u;
        goto label_300400;
    }
    ctx->pc = 0x3003F8u;
    SET_GPR_U32(ctx, 31, 0x300400u);
    ctx->pc = 0x3003FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3003F8u;
            // 0x3003fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300400u; }
        if (ctx->pc != 0x300400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300400u; }
        if (ctx->pc != 0x300400u) { return; }
    }
    ctx->pc = 0x300400u;
label_300400:
    // 0x300400: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x300400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_300404:
    // 0x300404: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x300404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_300408:
    // 0x300408: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x300408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_30040c:
    // 0x30040c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_300410:
    if (ctx->pc == 0x300410u) {
        ctx->pc = 0x300410u;
            // 0x300410: 0xc644004c  lwc1        $f4, 0x4C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x300414u;
        goto label_300414;
    }
    ctx->pc = 0x30040Cu;
    {
        const bool branch_taken_0x30040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30040c) {
            ctx->pc = 0x300410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30040Cu;
            // 0x300410: 0xc644004c  lwc1        $f4, 0x4C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x300424u;
            goto label_300424;
        }
    }
    ctx->pc = 0x300414u;
label_300414:
    // 0x300414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x300414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300418:
    // 0x300418: 0xc0b7ee4  jal         func_2DFB90
label_30041c:
    if (ctx->pc == 0x30041Cu) {
        ctx->pc = 0x30041Cu;
            // 0x30041c: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x300420u;
        goto label_300420;
    }
    ctx->pc = 0x300418u;
    SET_GPR_U32(ctx, 31, 0x300420u);
    ctx->pc = 0x30041Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300418u;
            // 0x30041c: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB90u;
    if (runtime->hasFunction(0x2DFB90u)) {
        auto targetFn = runtime->lookupFunction(0x2DFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300420u; }
        if (ctx->pc != 0x300420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DFB90_0x2dfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300420u; }
        if (ctx->pc != 0x300420u) { return; }
    }
    ctx->pc = 0x300420u;
label_300420:
    // 0x300420: 0xc644004c  lwc1        $f4, 0x4C($s2)
    ctx->pc = 0x300420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_300424:
    // 0x300424: 0x3c023586  lui         $v0, 0x3586
    ctx->pc = 0x300424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13702 << 16));
label_300428:
    // 0x300428: 0x344237be  ori         $v0, $v0, 0x37BE
    ctx->pc = 0x300428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14270);
label_30042c:
    // 0x30042c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30042cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300430:
    // 0x300430: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x300430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_300434:
    // 0x300434: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x300434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300438:
    // 0x300438: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_30043c:
    if (ctx->pc == 0x30043Cu) {
        ctx->pc = 0x30043Cu;
            // 0x30043c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300440u;
        goto label_300440;
    }
    ctx->pc = 0x300438u;
    {
        const bool branch_taken_0x300438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300438) {
            ctx->pc = 0x30043Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300438u;
            // 0x30043c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3004B0u;
            goto label_3004b0;
        }
    }
    ctx->pc = 0x300440u;
label_300440:
    // 0x300440: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x300440u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_300444:
    // 0x300444: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x300444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_300448:
    // 0x300448: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_30044c:
    if (ctx->pc == 0x30044Cu) {
        ctx->pc = 0x300450u;
        goto label_300450;
    }
    ctx->pc = 0x300448u;
    {
        const bool branch_taken_0x300448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300448) {
            ctx->pc = 0x3004ACu;
            goto label_3004ac;
        }
    }
    ctx->pc = 0x300450u;
label_300450:
    // 0x300450: 0x8624002e  lh          $a0, 0x2E($s1)
    ctx->pc = 0x300450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_300454:
    // 0x300454: 0x801026  xor         $v0, $a0, $zero
    ctx->pc = 0x300454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_300458:
    // 0x300458: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x300458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_30045c:
    // 0x30045c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_300460:
    if (ctx->pc == 0x300460u) {
        ctx->pc = 0x300460u;
            // 0x300460: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x300464u;
        goto label_300464;
    }
    ctx->pc = 0x30045Cu;
    {
        const bool branch_taken_0x30045c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x30045c) {
            ctx->pc = 0x300460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30045Cu;
            // 0x300460: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300470u;
            goto label_300470;
        }
    }
    ctx->pc = 0x300464u;
label_300464:
    // 0x300464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300468:
    // 0x300468: 0x10000007  b           . + 4 + (0x7 << 2)
label_30046c:
    if (ctx->pc == 0x30046Cu) {
        ctx->pc = 0x30046Cu;
            // 0x30046c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x300470u;
        goto label_300470;
    }
    ctx->pc = 0x300468u;
    {
        const bool branch_taken_0x300468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300468u;
            // 0x30046c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300468) {
            ctx->pc = 0x300488u;
            goto label_300488;
        }
    }
    ctx->pc = 0x300470u;
label_300470:
    // 0x300470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_300474:
    // 0x300474: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300478:
    // 0x300478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x300478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30047c:
    // 0x30047c: 0x0  nop
    ctx->pc = 0x30047cu;
    // NOP
label_300480:
    // 0x300480: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x300480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_300484:
    // 0x300484: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x300484u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_300488:
    // 0x300488: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x300488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30048c:
    // 0x30048c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x30048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_300490:
    // 0x300490: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x300490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_300494:
    // 0x300494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x300494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300498:
    // 0x300498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x300498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30049c:
    // 0x30049c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x30049cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3004a0:
    // 0x3004a0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3004a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3004a4:
    // 0x3004a4: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x3004a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_3004a8:
    // 0x3004a8: 0xe6600e18  swc1        $f0, 0xE18($s3)
    ctx->pc = 0x3004a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3608), bits); }
label_3004ac:
    // 0x3004ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3004acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3004b0:
    // 0x3004b0: 0xc075318  jal         func_1D4C60
label_3004b4:
    if (ctx->pc == 0x3004B4u) {
        ctx->pc = 0x3004B4u;
            // 0x3004b4: 0x26640560  addiu       $a0, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->pc = 0x3004B8u;
        goto label_3004b8;
    }
    ctx->pc = 0x3004B0u;
    SET_GPR_U32(ctx, 31, 0x3004B8u);
    ctx->pc = 0x3004B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3004B0u;
            // 0x3004b4: 0x26640560  addiu       $a0, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004B8u; }
        if (ctx->pc != 0x3004B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004B8u; }
        if (ctx->pc != 0x3004B8u) { return; }
    }
    ctx->pc = 0x3004B8u;
label_3004b8:
    // 0x3004b8: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x3004b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3004bc:
    // 0x3004bc: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x3004bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_3004c0:
    // 0x3004c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3004c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3004c4:
    // 0x3004c4: 0xc0c6250  jal         func_318940
label_3004c8:
    if (ctx->pc == 0x3004C8u) {
        ctx->pc = 0x3004C8u;
            // 0x3004c8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004CCu;
        goto label_3004cc;
    }
    ctx->pc = 0x3004C4u;
    SET_GPR_U32(ctx, 31, 0x3004CCu);
    ctx->pc = 0x3004C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3004C4u;
            // 0x3004c8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004CCu; }
        if (ctx->pc != 0x3004CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004CCu; }
        if (ctx->pc != 0x3004CCu) { return; }
    }
    ctx->pc = 0x3004CCu;
label_3004cc:
    // 0x3004cc: 0xc0c0f84  jal         func_303E10
label_3004d0:
    if (ctx->pc == 0x3004D0u) {
        ctx->pc = 0x3004D0u;
            // 0x3004d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004D4u;
        goto label_3004d4;
    }
    ctx->pc = 0x3004CCu;
    SET_GPR_U32(ctx, 31, 0x3004D4u);
    ctx->pc = 0x3004D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3004CCu;
            // 0x3004d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004D4u; }
        if (ctx->pc != 0x3004D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004D4u; }
        if (ctx->pc != 0x3004D4u) { return; }
    }
    ctx->pc = 0x3004D4u;
label_3004d4:
    // 0x3004d4: 0xc6600de4  lwc1        $f0, 0xDE4($s3)
    ctx->pc = 0x3004d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3004d8:
    // 0x3004d8: 0xe6600e1c  swc1        $f0, 0xE1C($s3)
    ctx->pc = 0x3004d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3612), bits); }
label_3004dc:
    // 0x3004dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3004dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3004e0:
    // 0x3004e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3004e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3004e4:
    // 0x3004e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3004e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3004e8:
    // 0x3004e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3004e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3004ec:
    // 0x3004ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3004ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3004f0:
    // 0x3004f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3004f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3004f4:
    // 0x3004f4: 0x3e00008  jr          $ra
label_3004f8:
    if (ctx->pc == 0x3004F8u) {
        ctx->pc = 0x3004F8u;
            // 0x3004f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3004FCu;
        goto label_3004fc;
    }
    ctx->pc = 0x3004F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3004F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3004F4u;
            // 0x3004f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3004FCu;
label_3004fc:
    // 0x3004fc: 0x0  nop
    ctx->pc = 0x3004fcu;
    // NOP
label_300500:
    // 0x300500: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x300500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_300504:
    // 0x300504: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300508:
    // 0x300508: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x300508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_30050c:
    // 0x30050c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_300510:
    // 0x300510: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x300510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_300514:
    // 0x300514: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x300514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_300518:
    // 0x300518: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x300518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_30051c:
    // 0x30051c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_300520:
    // 0x300520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x300520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_300524:
    // 0x300524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x300524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_300528:
    // 0x300528: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x300528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30052c:
    // 0x30052c: 0x8c450c78  lw          $a1, 0xC78($v0)
    ctx->pc = 0x30052cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_300530:
    // 0x300530: 0x90830c44  lbu         $v1, 0xC44($a0)
    ctx->pc = 0x300530u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3140)));
label_300534:
    // 0x300534: 0x94920c42  lhu         $s2, 0xC42($a0)
    ctx->pc = 0x300534u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3138)));
label_300538:
    // 0x300538: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x300538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_30053c:
    // 0x30053c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_300540:
    // 0x300540: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_300544:
    // 0x300544: 0x8c830e30  lw          $v1, 0xE30($a0)
    ctx->pc = 0x300544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
label_300548:
    // 0x300548: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x300548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_30054c:
    // 0x30054c: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x30054cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_300550:
    // 0x300550: 0x84b30028  lh          $s3, 0x28($a1)
    ctx->pc = 0x300550u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_300554:
    // 0x300554: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_300558:
    if (ctx->pc == 0x300558u) {
        ctx->pc = 0x300558u;
            // 0x300558: 0x26300bf0  addiu       $s0, $s1, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3056));
        ctx->pc = 0x30055Cu;
        goto label_30055c;
    }
    ctx->pc = 0x300554u;
    {
        const bool branch_taken_0x300554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x300558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300554u;
            // 0x300558: 0x26300bf0  addiu       $s0, $s1, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300554) {
            ctx->pc = 0x300604u;
            goto label_300604;
        }
    }
    ctx->pc = 0x30055Cu;
label_30055c:
    // 0x30055c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300560:
    // 0x300560: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
label_300564:
    if (ctx->pc == 0x300564u) {
        ctx->pc = 0x300564u;
            // 0x300564: 0xc6200de0  lwc1        $f0, 0xDE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x300568u;
        goto label_300568;
    }
    ctx->pc = 0x300560u;
    {
        const bool branch_taken_0x300560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300560) {
            ctx->pc = 0x300564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300560u;
            // 0x300564: 0xc6200de0  lwc1        $f0, 0xDE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3005FCu;
            goto label_3005fc;
        }
    }
    ctx->pc = 0x300568u;
label_300568:
    // 0x300568: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_30056c:
    if (ctx->pc == 0x30056Cu) {
        ctx->pc = 0x30056Cu;
            // 0x30056c: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x300570u;
        goto label_300570;
    }
    ctx->pc = 0x300568u;
    {
        const bool branch_taken_0x300568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300568) {
            ctx->pc = 0x30056Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300568u;
            // 0x30056c: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x300578u;
            goto label_300578;
        }
    }
    ctx->pc = 0x300570u;
label_300570:
    // 0x300570: 0x10000029  b           . + 4 + (0x29 << 2)
label_300574:
    if (ctx->pc == 0x300574u) {
        ctx->pc = 0x300574u;
            // 0x300574: 0x8e220d60  lw          $v0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->pc = 0x300578u;
        goto label_300578;
    }
    ctx->pc = 0x300570u;
    {
        const bool branch_taken_0x300570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300570u;
            // 0x300574: 0x8e220d60  lw          $v0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300570) {
            ctx->pc = 0x300618u;
            goto label_300618;
        }
    }
    ctx->pc = 0x300578u;
label_300578:
    // 0x300578: 0xc6200de0  lwc1        $f0, 0xDE0($s1)
    ctx->pc = 0x300578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30057c:
    // 0x30057c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30057cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300580:
    // 0x300580: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
label_300584:
    if (ctx->pc == 0x300584u) {
        ctx->pc = 0x300584u;
            // 0x300584: 0xc6200de8  lwc1        $f0, 0xDE8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x300588u;
        goto label_300588;
    }
    ctx->pc = 0x300580u;
    {
        const bool branch_taken_0x300580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300580) {
            ctx->pc = 0x300584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300580u;
            // 0x300584: 0xc6200de8  lwc1        $f0, 0xDE8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3005B8u;
            goto label_3005b8;
        }
    }
    ctx->pc = 0x300588u;
label_300588:
    // 0x300588: 0xc6200de8  lwc1        $f0, 0xDE8($s1)
    ctx->pc = 0x300588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30058c:
    // 0x30058c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30058cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_300590:
    // 0x300590: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x300590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_300594:
    // 0x300594: 0xc6210de0  lwc1        $f1, 0xDE0($s1)
    ctx->pc = 0x300594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300598:
    // 0x300598: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x300598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30059c:
    // 0x30059c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30059cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3005a0:
    // 0x3005a0: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_3005a4:
    if (ctx->pc == 0x3005A4u) {
        ctx->pc = 0x3005A4u;
            // 0x3005a4: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3005A8u;
        goto label_3005a8;
    }
    ctx->pc = 0x3005A0u;
    {
        const bool branch_taken_0x3005a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3005a0) {
            ctx->pc = 0x3005A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3005A0u;
            // 0x3005a4: 0xc6210de4  lwc1        $f1, 0xDE4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3005E4u;
            goto label_3005e4;
        }
    }
    ctx->pc = 0x3005A8u;
label_3005a8:
    // 0x3005a8: 0xe6210de4  swc1        $f1, 0xDE4($s1)
    ctx->pc = 0x3005a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_3005ac:
    // 0x3005ac: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x3005acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_3005b0:
    // 0x3005b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3005b4:
    if (ctx->pc == 0x3005B4u) {
        ctx->pc = 0x3005B4u;
            // 0x3005b4: 0xae220e30  sw          $v0, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
        ctx->pc = 0x3005B8u;
        goto label_3005b8;
    }
    ctx->pc = 0x3005B0u;
    {
        const bool branch_taken_0x3005b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3005B0u;
            // 0x3005b4: 0xae220e30  sw          $v0, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005b0) {
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x3005B8u;
label_3005b8:
    // 0x3005b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3005b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3005bc:
    // 0x3005bc: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x3005bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_3005c0:
    // 0x3005c0: 0xc6210de0  lwc1        $f1, 0xDE0($s1)
    ctx->pc = 0x3005c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3005c4:
    // 0x3005c4: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x3005c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3005c8:
    // 0x3005c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3005c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3005cc:
    // 0x3005cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_3005d0:
    if (ctx->pc == 0x3005D0u) {
        ctx->pc = 0x3005D4u;
        goto label_3005d4;
    }
    ctx->pc = 0x3005CCu;
    {
        const bool branch_taken_0x3005cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3005cc) {
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x3005D4u;
label_3005d4:
    // 0x3005d4: 0xe6210de4  swc1        $f1, 0xDE4($s1)
    ctx->pc = 0x3005d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_3005d8:
    // 0x3005d8: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x3005d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_3005dc:
    // 0x3005dc: 0xae220e30  sw          $v0, 0xE30($s1)
    ctx->pc = 0x3005dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
label_3005e0:
    // 0x3005e0: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x3005e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3005e4:
    // 0x3005e4: 0xc6200de0  lwc1        $f0, 0xDE0($s1)
    ctx->pc = 0x3005e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3005e8:
    // 0x3005e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3005e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3005ec:
    // 0x3005ec: 0x0  nop
    ctx->pc = 0x3005ecu;
    // NOP
label_3005f0:
    // 0x3005f0: 0x0  nop
    ctx->pc = 0x3005f0u;
    // NOP
label_3005f4:
    // 0x3005f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3005f8:
    if (ctx->pc == 0x3005F8u) {
        ctx->pc = 0x3005F8u;
            // 0x3005f8: 0xe6200dec  swc1        $f0, 0xDEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3564), bits); }
        ctx->pc = 0x3005FCu;
        goto label_3005fc;
    }
    ctx->pc = 0x3005F4u;
    {
        const bool branch_taken_0x3005f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3005F4u;
            // 0x3005f8: 0xe6200dec  swc1        $f0, 0xDEC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005f4) {
            ctx->pc = 0x300614u;
            goto label_300614;
        }
    }
    ctx->pc = 0x3005FCu;
label_3005fc:
    // 0x3005fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_300600:
    if (ctx->pc == 0x300600u) {
        ctx->pc = 0x300600u;
            // 0x300600: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x300604u;
        goto label_300604;
    }
    ctx->pc = 0x3005FCu;
    {
        const bool branch_taken_0x3005fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3005FCu;
            // 0x300600: 0xe6200de4  swc1        $f0, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005fc) {
            ctx->pc = 0x300614u;
            goto label_300614;
        }
    }
    ctx->pc = 0x300604u;
label_300604:
    // 0x300604: 0xc0bfe58  jal         func_2FF960
label_300608:
    if (ctx->pc == 0x300608u) {
        ctx->pc = 0x30060Cu;
        goto label_30060c;
    }
    ctx->pc = 0x300604u;
    SET_GPR_U32(ctx, 31, 0x30060Cu);
    ctx->pc = 0x2FF960u;
    if (runtime->hasFunction(0x2FF960u)) {
        auto targetFn = runtime->lookupFunction(0x2FF960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30060Cu; }
        if (ctx->pc != 0x30060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FF960_0x2ff960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30060Cu; }
        if (ctx->pc != 0x30060Cu) { return; }
    }
    ctx->pc = 0x30060Cu;
label_30060c:
    // 0x30060c: 0x100003c3  b           . + 4 + (0x3C3 << 2)
label_300610:
    if (ctx->pc == 0x300610u) {
        ctx->pc = 0x300610u;
            // 0x300610: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x300614u;
        goto label_300614;
    }
    ctx->pc = 0x30060Cu;
    {
        const bool branch_taken_0x30060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30060Cu;
            // 0x300610: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30060c) {
            ctx->pc = 0x30151Cu;
            goto label_30151c;
        }
    }
    ctx->pc = 0x300614u;
label_300614:
    // 0x300614: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x300614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_300618:
    // 0x300618: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x300618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30061c:
    // 0x30061c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x30061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_300620:
    // 0x300620: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_300624:
    if (ctx->pc == 0x300624u) {
        ctx->pc = 0x300628u;
        goto label_300628;
    }
    ctx->pc = 0x300620u;
    {
        const bool branch_taken_0x300620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300620) {
            ctx->pc = 0x300750u;
            goto label_300750;
        }
    }
    ctx->pc = 0x300628u;
label_300628:
    // 0x300628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30062c:
    // 0x30062c: 0xc0c05e8  jal         func_3017A0
label_300630:
    if (ctx->pc == 0x300630u) {
        ctx->pc = 0x300630u;
            // 0x300630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300634u;
        goto label_300634;
    }
    ctx->pc = 0x30062Cu;
    SET_GPR_U32(ctx, 31, 0x300634u);
    ctx->pc = 0x300630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30062Cu;
            // 0x300630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3017A0u;
    if (runtime->hasFunction(0x3017A0u)) {
        auto targetFn = runtime->lookupFunction(0x3017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300634u; }
        if (ctx->pc != 0x300634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003017A0_0x3017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300634u; }
        if (ctx->pc != 0x300634u) { return; }
    }
    ctx->pc = 0x300634u;
label_300634:
    // 0x300634: 0xc077280  jal         func_1DCA00
label_300638:
    if (ctx->pc == 0x300638u) {
        ctx->pc = 0x300638u;
            // 0x300638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30063Cu;
        goto label_30063c;
    }
    ctx->pc = 0x300634u;
    SET_GPR_U32(ctx, 31, 0x30063Cu);
    ctx->pc = 0x300638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300634u;
            // 0x300638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30063Cu; }
        if (ctx->pc != 0x30063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30063Cu; }
        if (ctx->pc != 0x30063Cu) { return; }
    }
    ctx->pc = 0x30063Cu;
label_30063c:
    // 0x30063c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30063cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300640:
    // 0x300640: 0xc0770c0  jal         func_1DC300
label_300644:
    if (ctx->pc == 0x300644u) {
        ctx->pc = 0x300644u;
            // 0x300644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300648u;
        goto label_300648;
    }
    ctx->pc = 0x300640u;
    SET_GPR_U32(ctx, 31, 0x300648u);
    ctx->pc = 0x300644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300640u;
            // 0x300644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300648u; }
        if (ctx->pc != 0x300648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300648u; }
        if (ctx->pc != 0x300648u) { return; }
    }
    ctx->pc = 0x300648u;
label_300648:
    // 0x300648: 0xc0b6d40  jal         func_2DB500
label_30064c:
    if (ctx->pc == 0x30064Cu) {
        ctx->pc = 0x30064Cu;
            // 0x30064c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300650u;
        goto label_300650;
    }
    ctx->pc = 0x300648u;
    SET_GPR_U32(ctx, 31, 0x300650u);
    ctx->pc = 0x30064Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300648u;
            // 0x30064c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300650u; }
        if (ctx->pc != 0x300650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300650u; }
        if (ctx->pc != 0x300650u) { return; }
    }
    ctx->pc = 0x300650u;
label_300650:
    // 0x300650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300654:
    // 0x300654: 0xc075318  jal         func_1D4C60
label_300658:
    if (ctx->pc == 0x300658u) {
        ctx->pc = 0x300658u;
            // 0x300658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30065Cu;
        goto label_30065c;
    }
    ctx->pc = 0x300654u;
    SET_GPR_U32(ctx, 31, 0x30065Cu);
    ctx->pc = 0x300658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300654u;
            // 0x300658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30065Cu; }
        if (ctx->pc != 0x30065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30065Cu; }
        if (ctx->pc != 0x30065Cu) { return; }
    }
    ctx->pc = 0x30065Cu;
label_30065c:
    // 0x30065c: 0xc0b6cec  jal         func_2DB3B0
label_300660:
    if (ctx->pc == 0x300660u) {
        ctx->pc = 0x300660u;
            // 0x300660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300664u;
        goto label_300664;
    }
    ctx->pc = 0x30065Cu;
    SET_GPR_U32(ctx, 31, 0x300664u);
    ctx->pc = 0x300660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30065Cu;
            // 0x300660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300664u; }
        if (ctx->pc != 0x300664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300664u; }
        if (ctx->pc != 0x300664u) { return; }
    }
    ctx->pc = 0x300664u;
label_300664:
    // 0x300664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300668:
    // 0x300668: 0xc077280  jal         func_1DCA00
label_30066c:
    if (ctx->pc == 0x30066Cu) {
        ctx->pc = 0x30066Cu;
            // 0x30066c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300670u;
        goto label_300670;
    }
    ctx->pc = 0x300668u;
    SET_GPR_U32(ctx, 31, 0x300670u);
    ctx->pc = 0x30066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300668u;
            // 0x30066c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300670u; }
        if (ctx->pc != 0x300670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300670u; }
        if (ctx->pc != 0x300670u) { return; }
    }
    ctx->pc = 0x300670u;
label_300670:
    // 0x300670: 0xc07727c  jal         func_1DC9F0
label_300674:
    if (ctx->pc == 0x300674u) {
        ctx->pc = 0x300674u;
            // 0x300674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300678u;
        goto label_300678;
    }
    ctx->pc = 0x300670u;
    SET_GPR_U32(ctx, 31, 0x300678u);
    ctx->pc = 0x300674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300670u;
            // 0x300674: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300678u; }
        if (ctx->pc != 0x300678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300678u; }
        if (ctx->pc != 0x300678u) { return; }
    }
    ctx->pc = 0x300678u;
label_300678:
    // 0x300678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30067c:
    // 0x30067c: 0xc0c05e0  jal         func_301780
label_300680:
    if (ctx->pc == 0x300680u) {
        ctx->pc = 0x300680u;
            // 0x300680: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300684u;
        goto label_300684;
    }
    ctx->pc = 0x30067Cu;
    SET_GPR_U32(ctx, 31, 0x300684u);
    ctx->pc = 0x300680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30067Cu;
            // 0x300680: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300684u; }
        if (ctx->pc != 0x300684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300684u; }
        if (ctx->pc != 0x300684u) { return; }
    }
    ctx->pc = 0x300684u;
label_300684:
    // 0x300684: 0xc0c05dc  jal         func_301770
label_300688:
    if (ctx->pc == 0x300688u) {
        ctx->pc = 0x300688u;
            // 0x300688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30068Cu;
        goto label_30068c;
    }
    ctx->pc = 0x300684u;
    SET_GPR_U32(ctx, 31, 0x30068Cu);
    ctx->pc = 0x300688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300684u;
            // 0x300688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30068Cu; }
        if (ctx->pc != 0x30068Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30068Cu; }
        if (ctx->pc != 0x30068Cu) { return; }
    }
    ctx->pc = 0x30068Cu;
label_30068c:
    // 0x30068c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30068cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300690:
    // 0x300690: 0xc077280  jal         func_1DCA00
label_300694:
    if (ctx->pc == 0x300694u) {
        ctx->pc = 0x300694u;
            // 0x300694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300698u;
        goto label_300698;
    }
    ctx->pc = 0x300690u;
    SET_GPR_U32(ctx, 31, 0x300698u);
    ctx->pc = 0x300694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300690u;
            // 0x300694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300698u; }
        if (ctx->pc != 0x300698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300698u; }
        if (ctx->pc != 0x300698u) { return; }
    }
    ctx->pc = 0x300698u;
label_300698:
    // 0x300698: 0xc07727c  jal         func_1DC9F0
label_30069c:
    if (ctx->pc == 0x30069Cu) {
        ctx->pc = 0x30069Cu;
            // 0x30069c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3006A0u;
        goto label_3006a0;
    }
    ctx->pc = 0x300698u;
    SET_GPR_U32(ctx, 31, 0x3006A0u);
    ctx->pc = 0x30069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300698u;
            // 0x30069c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006A0u; }
        if (ctx->pc != 0x3006A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006A0u; }
        if (ctx->pc != 0x3006A0u) { return; }
    }
    ctx->pc = 0x3006A0u;
label_3006a0:
    // 0x3006a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3006a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3006a4:
    // 0x3006a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3006a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3006a8:
    // 0x3006a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3006a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3006ac:
    // 0x3006ac: 0xc0c05d4  jal         func_301750
label_3006b0:
    if (ctx->pc == 0x3006B0u) {
        ctx->pc = 0x3006B0u;
            // 0x3006b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3006B4u;
        goto label_3006b4;
    }
    ctx->pc = 0x3006ACu;
    SET_GPR_U32(ctx, 31, 0x3006B4u);
    ctx->pc = 0x3006B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006ACu;
            // 0x3006b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006B4u; }
        if (ctx->pc != 0x3006B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006B4u; }
        if (ctx->pc != 0x3006B4u) { return; }
    }
    ctx->pc = 0x3006B4u;
label_3006b4:
    // 0x3006b4: 0xc0c05d0  jal         func_301740
label_3006b8:
    if (ctx->pc == 0x3006B8u) {
        ctx->pc = 0x3006B8u;
            // 0x3006b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3006BCu;
        goto label_3006bc;
    }
    ctx->pc = 0x3006B4u;
    SET_GPR_U32(ctx, 31, 0x3006BCu);
    ctx->pc = 0x3006B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006B4u;
            // 0x3006b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301740u;
    if (runtime->hasFunction(0x301740u)) {
        auto targetFn = runtime->lookupFunction(0x301740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006BCu; }
        if (ctx->pc != 0x3006BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301740_0x301740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006BCu; }
        if (ctx->pc != 0x3006BCu) { return; }
    }
    ctx->pc = 0x3006BCu;
label_3006bc:
    // 0x3006bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3006bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3006c0:
    // 0x3006c0: 0xc0c05cc  jal         func_301730
label_3006c4:
    if (ctx->pc == 0x3006C4u) {
        ctx->pc = 0x3006C4u;
            // 0x3006c4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3006C8u;
        goto label_3006c8;
    }
    ctx->pc = 0x3006C0u;
    SET_GPR_U32(ctx, 31, 0x3006C8u);
    ctx->pc = 0x3006C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006C0u;
            // 0x3006c4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006C8u; }
        if (ctx->pc != 0x3006C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006C8u; }
        if (ctx->pc != 0x3006C8u) { return; }
    }
    ctx->pc = 0x3006C8u;
label_3006c8:
    // 0x3006c8: 0xc0c05c8  jal         func_301720
label_3006cc:
    if (ctx->pc == 0x3006CCu) {
        ctx->pc = 0x3006CCu;
            // 0x3006cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3006D0u;
        goto label_3006d0;
    }
    ctx->pc = 0x3006C8u;
    SET_GPR_U32(ctx, 31, 0x3006D0u);
    ctx->pc = 0x3006CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006C8u;
            // 0x3006cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006D0u; }
        if (ctx->pc != 0x3006D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006D0u; }
        if (ctx->pc != 0x3006D0u) { return; }
    }
    ctx->pc = 0x3006D0u;
label_3006d0:
    // 0x3006d0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x3006d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_3006d4:
    // 0x3006d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3006d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3006d8:
    // 0x3006d8: 0xc04cc04  jal         func_133010
label_3006dc:
    if (ctx->pc == 0x3006DCu) {
        ctx->pc = 0x3006DCu;
            // 0x3006dc: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
        ctx->pc = 0x3006E0u;
        goto label_3006e0;
    }
    ctx->pc = 0x3006D8u;
    SET_GPR_U32(ctx, 31, 0x3006E0u);
    ctx->pc = 0x3006DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006D8u;
            // 0x3006dc: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006E0u; }
        if (ctx->pc != 0x3006E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006E0u; }
        if (ctx->pc != 0x3006E0u) { return; }
    }
    ctx->pc = 0x3006E0u;
label_3006e0:
    // 0x3006e0: 0xc0775d8  jal         func_1DD760
label_3006e4:
    if (ctx->pc == 0x3006E4u) {
        ctx->pc = 0x3006E4u;
            // 0x3006e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3006E8u;
        goto label_3006e8;
    }
    ctx->pc = 0x3006E0u;
    SET_GPR_U32(ctx, 31, 0x3006E8u);
    ctx->pc = 0x3006E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006E0u;
            // 0x3006e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006E8u; }
        if (ctx->pc != 0x3006E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006E8u; }
        if (ctx->pc != 0x3006E8u) { return; }
    }
    ctx->pc = 0x3006E8u;
label_3006e8:
    // 0x3006e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3006e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3006ec:
    // 0x3006ec: 0xc077590  jal         func_1DD640
label_3006f0:
    if (ctx->pc == 0x3006F0u) {
        ctx->pc = 0x3006F0u;
            // 0x3006f0: 0x3c051001  lui         $a1, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4097 << 16));
        ctx->pc = 0x3006F4u;
        goto label_3006f4;
    }
    ctx->pc = 0x3006ECu;
    SET_GPR_U32(ctx, 31, 0x3006F4u);
    ctx->pc = 0x3006F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006ECu;
            // 0x3006f0: 0x3c051001  lui         $a1, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4097 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD640u;
    if (runtime->hasFunction(0x1DD640u)) {
        auto targetFn = runtime->lookupFunction(0x1DD640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006F4u; }
        if (ctx->pc != 0x3006F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD640_0x1dd640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006F4u; }
        if (ctx->pc != 0x3006F4u) { return; }
    }
    ctx->pc = 0x3006F4u;
label_3006f4:
    // 0x3006f4: 0xc077330  jal         func_1DCCC0
label_3006f8:
    if (ctx->pc == 0x3006F8u) {
        ctx->pc = 0x3006F8u;
            // 0x3006f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3006FCu;
        goto label_3006fc;
    }
    ctx->pc = 0x3006F4u;
    SET_GPR_U32(ctx, 31, 0x3006FCu);
    ctx->pc = 0x3006F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006F4u;
            // 0x3006f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006FCu; }
        if (ctx->pc != 0x3006FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006FCu; }
        if (ctx->pc != 0x3006FCu) { return; }
    }
    ctx->pc = 0x3006FCu;
label_3006fc:
    // 0x3006fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_300700:
    if (ctx->pc == 0x300700u) {
        ctx->pc = 0x300704u;
        goto label_300704;
    }
    ctx->pc = 0x3006FCu;
    {
        const bool branch_taken_0x3006fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3006fc) {
            ctx->pc = 0x300714u;
            goto label_300714;
        }
    }
    ctx->pc = 0x300704u;
label_300704:
    // 0x300704: 0xc07732c  jal         func_1DCCB0
label_300708:
    if (ctx->pc == 0x300708u) {
        ctx->pc = 0x300708u;
            // 0x300708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30070Cu;
        goto label_30070c;
    }
    ctx->pc = 0x300704u;
    SET_GPR_U32(ctx, 31, 0x30070Cu);
    ctx->pc = 0x300708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300704u;
            // 0x300708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30070Cu; }
        if (ctx->pc != 0x30070Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30070Cu; }
        if (ctx->pc != 0x30070Cu) { return; }
    }
    ctx->pc = 0x30070Cu;
label_30070c:
    // 0x30070c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_300710:
    if (ctx->pc == 0x300710u) {
        ctx->pc = 0x300710u;
            // 0x300710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300714u;
        goto label_300714;
    }
    ctx->pc = 0x30070Cu;
    {
        const bool branch_taken_0x30070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30070c) {
            ctx->pc = 0x300710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30070Cu;
            // 0x300710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30073Cu;
            goto label_30073c;
        }
    }
    ctx->pc = 0x300714u;
label_300714:
    // 0x300714: 0xc0c05c4  jal         func_301710
label_300718:
    if (ctx->pc == 0x300718u) {
        ctx->pc = 0x30071Cu;
        goto label_30071c;
    }
    ctx->pc = 0x300714u;
    SET_GPR_U32(ctx, 31, 0x30071Cu);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30071Cu; }
        if (ctx->pc != 0x30071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30071Cu; }
        if (ctx->pc != 0x30071Cu) { return; }
    }
    ctx->pc = 0x30071Cu;
label_30071c:
    // 0x30071c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30071cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300720:
    // 0x300720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300724:
    // 0x300724: 0xc0770e0  jal         func_1DC380
label_300728:
    if (ctx->pc == 0x300728u) {
        ctx->pc = 0x300728u;
            // 0x300728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30072Cu;
        goto label_30072c;
    }
    ctx->pc = 0x300724u;
    SET_GPR_U32(ctx, 31, 0x30072Cu);
    ctx->pc = 0x300728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300724u;
            // 0x300728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30072Cu; }
        if (ctx->pc != 0x30072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30072Cu; }
        if (ctx->pc != 0x30072Cu) { return; }
    }
    ctx->pc = 0x30072Cu;
label_30072c:
    // 0x30072c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x30072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_300730:
    // 0x300730: 0xc0c05c0  jal         func_301700
label_300734:
    if (ctx->pc == 0x300734u) {
        ctx->pc = 0x300734u;
            // 0x300734: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300738u;
        goto label_300738;
    }
    ctx->pc = 0x300730u;
    SET_GPR_U32(ctx, 31, 0x300738u);
    ctx->pc = 0x300734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300730u;
            // 0x300734: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300738u; }
        if (ctx->pc != 0x300738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300738u; }
        if (ctx->pc != 0x300738u) { return; }
    }
    ctx->pc = 0x300738u;
label_300738:
    // 0x300738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30073c:
    // 0x30073c: 0xc0bfed4  jal         func_2FFB50
label_300740:
    if (ctx->pc == 0x300740u) {
        ctx->pc = 0x300744u;
        goto label_300744;
    }
    ctx->pc = 0x30073Cu;
    SET_GPR_U32(ctx, 31, 0x300744u);
    ctx->pc = 0x2FFB50u;
    goto label_2ffb50;
    ctx->pc = 0x300744u;
label_300744:
    // 0x300744: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x300744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_300748:
    // 0x300748: 0x10000373  b           . + 4 + (0x373 << 2)
label_30074c:
    if (ctx->pc == 0x30074Cu) {
        ctx->pc = 0x30074Cu;
            // 0x30074c: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x300750u;
        goto label_300750;
    }
    ctx->pc = 0x300748u;
    {
        const bool branch_taken_0x300748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300748u;
            // 0x30074c: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300748) {
            ctx->pc = 0x301518u;
            goto label_301518;
        }
    }
    ctx->pc = 0x300750u;
label_300750:
    // 0x300750: 0x5260006b  beql        $s3, $zero, . + 4 + (0x6B << 2)
label_300754:
    if (ctx->pc == 0x300754u) {
        ctx->pc = 0x300754u;
            // 0x300754: 0x8e240d60  lw          $a0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->pc = 0x300758u;
        goto label_300758;
    }
    ctx->pc = 0x300750u;
    {
        const bool branch_taken_0x300750 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x300750) {
            ctx->pc = 0x300754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300750u;
            // 0x300754: 0x8e240d60  lw          $a0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300900u;
            goto label_300900;
        }
    }
    ctx->pc = 0x300758u;
label_300758:
    // 0x300758: 0xc0754b4  jal         func_1D52D0
label_30075c:
    if (ctx->pc == 0x30075Cu) {
        ctx->pc = 0x30075Cu;
            // 0x30075c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x300760u;
        goto label_300760;
    }
    ctx->pc = 0x300758u;
    SET_GPR_U32(ctx, 31, 0x300760u);
    ctx->pc = 0x30075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300758u;
            // 0x30075c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300760u; }
        if (ctx->pc != 0x300760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300760u; }
        if (ctx->pc != 0x300760u) { return; }
    }
    ctx->pc = 0x300760u;
label_300760:
    // 0x300760: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x300760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_300764:
    // 0x300764: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x300764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_300768:
    // 0x300768: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_30076c:
    if (ctx->pc == 0x30076Cu) {
        ctx->pc = 0x300770u;
        goto label_300770;
    }
    ctx->pc = 0x300768u;
    {
        const bool branch_taken_0x300768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300768) {
            ctx->pc = 0x3008FCu;
            goto label_3008fc;
        }
    }
    ctx->pc = 0x300770u;
label_300770:
    // 0x300770: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x300770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300774:
    // 0x300774: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x300774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_300778:
    // 0x300778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30077c:
    // 0x30077c: 0x0  nop
    ctx->pc = 0x30077cu;
    // NOP
label_300780:
    // 0x300780: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_300784:
    // 0x300784: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300788:
    // 0x300788: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_30078c:
    // 0x30078c: 0x0  nop
    ctx->pc = 0x30078cu;
    // NOP
label_300790:
    // 0x300790: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x300790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_300794:
    // 0x300794: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_300798:
    if (ctx->pc == 0x300798u) {
        ctx->pc = 0x30079Cu;
        goto label_30079c;
    }
    ctx->pc = 0x300794u;
    {
        const bool branch_taken_0x300794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300794) {
            ctx->pc = 0x3008FCu;
            goto label_3008fc;
        }
    }
    ctx->pc = 0x30079Cu;
label_30079c:
    // 0x30079c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3007a0:
    // 0x3007a0: 0xc0c05e8  jal         func_3017A0
label_3007a4:
    if (ctx->pc == 0x3007A4u) {
        ctx->pc = 0x3007A4u;
            // 0x3007a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3007A8u;
        goto label_3007a8;
    }
    ctx->pc = 0x3007A0u;
    SET_GPR_U32(ctx, 31, 0x3007A8u);
    ctx->pc = 0x3007A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007A0u;
            // 0x3007a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3017A0u;
    if (runtime->hasFunction(0x3017A0u)) {
        auto targetFn = runtime->lookupFunction(0x3017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007A8u; }
        if (ctx->pc != 0x3007A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003017A0_0x3017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007A8u; }
        if (ctx->pc != 0x3007A8u) { return; }
    }
    ctx->pc = 0x3007A8u;
label_3007a8:
    // 0x3007a8: 0xc077280  jal         func_1DCA00
label_3007ac:
    if (ctx->pc == 0x3007ACu) {
        ctx->pc = 0x3007ACu;
            // 0x3007ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007B0u;
        goto label_3007b0;
    }
    ctx->pc = 0x3007A8u;
    SET_GPR_U32(ctx, 31, 0x3007B0u);
    ctx->pc = 0x3007ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007A8u;
            // 0x3007ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007B0u; }
        if (ctx->pc != 0x3007B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007B0u; }
        if (ctx->pc != 0x3007B0u) { return; }
    }
    ctx->pc = 0x3007B0u;
label_3007b0:
    // 0x3007b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3007b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3007b4:
    // 0x3007b4: 0xc0770c0  jal         func_1DC300
label_3007b8:
    if (ctx->pc == 0x3007B8u) {
        ctx->pc = 0x3007B8u;
            // 0x3007b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007BCu;
        goto label_3007bc;
    }
    ctx->pc = 0x3007B4u;
    SET_GPR_U32(ctx, 31, 0x3007BCu);
    ctx->pc = 0x3007B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007B4u;
            // 0x3007b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007BCu; }
        if (ctx->pc != 0x3007BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007BCu; }
        if (ctx->pc != 0x3007BCu) { return; }
    }
    ctx->pc = 0x3007BCu;
label_3007bc:
    // 0x3007bc: 0xc0b6d40  jal         func_2DB500
label_3007c0:
    if (ctx->pc == 0x3007C0u) {
        ctx->pc = 0x3007C0u;
            // 0x3007c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007C4u;
        goto label_3007c4;
    }
    ctx->pc = 0x3007BCu;
    SET_GPR_U32(ctx, 31, 0x3007C4u);
    ctx->pc = 0x3007C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007BCu;
            // 0x3007c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007C4u; }
        if (ctx->pc != 0x3007C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007C4u; }
        if (ctx->pc != 0x3007C4u) { return; }
    }
    ctx->pc = 0x3007C4u;
label_3007c4:
    // 0x3007c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3007c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3007c8:
    // 0x3007c8: 0xc075318  jal         func_1D4C60
label_3007cc:
    if (ctx->pc == 0x3007CCu) {
        ctx->pc = 0x3007CCu;
            // 0x3007cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007D0u;
        goto label_3007d0;
    }
    ctx->pc = 0x3007C8u;
    SET_GPR_U32(ctx, 31, 0x3007D0u);
    ctx->pc = 0x3007CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007C8u;
            // 0x3007cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007D0u; }
        if (ctx->pc != 0x3007D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007D0u; }
        if (ctx->pc != 0x3007D0u) { return; }
    }
    ctx->pc = 0x3007D0u;
label_3007d0:
    // 0x3007d0: 0xc0b6cec  jal         func_2DB3B0
label_3007d4:
    if (ctx->pc == 0x3007D4u) {
        ctx->pc = 0x3007D4u;
            // 0x3007d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007D8u;
        goto label_3007d8;
    }
    ctx->pc = 0x3007D0u;
    SET_GPR_U32(ctx, 31, 0x3007D8u);
    ctx->pc = 0x3007D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007D0u;
            // 0x3007d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007D8u; }
        if (ctx->pc != 0x3007D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007D8u; }
        if (ctx->pc != 0x3007D8u) { return; }
    }
    ctx->pc = 0x3007D8u;
label_3007d8:
    // 0x3007d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3007d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3007dc:
    // 0x3007dc: 0xc077280  jal         func_1DCA00
label_3007e0:
    if (ctx->pc == 0x3007E0u) {
        ctx->pc = 0x3007E0u;
            // 0x3007e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007E4u;
        goto label_3007e4;
    }
    ctx->pc = 0x3007DCu;
    SET_GPR_U32(ctx, 31, 0x3007E4u);
    ctx->pc = 0x3007E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007DCu;
            // 0x3007e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007E4u; }
        if (ctx->pc != 0x3007E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007E4u; }
        if (ctx->pc != 0x3007E4u) { return; }
    }
    ctx->pc = 0x3007E4u;
label_3007e4:
    // 0x3007e4: 0xc07727c  jal         func_1DC9F0
label_3007e8:
    if (ctx->pc == 0x3007E8u) {
        ctx->pc = 0x3007E8u;
            // 0x3007e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007ECu;
        goto label_3007ec;
    }
    ctx->pc = 0x3007E4u;
    SET_GPR_U32(ctx, 31, 0x3007ECu);
    ctx->pc = 0x3007E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007E4u;
            // 0x3007e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007ECu; }
        if (ctx->pc != 0x3007ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007ECu; }
        if (ctx->pc != 0x3007ECu) { return; }
    }
    ctx->pc = 0x3007ECu;
label_3007ec:
    // 0x3007ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3007ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3007f0:
    // 0x3007f0: 0xc0c05e0  jal         func_301780
label_3007f4:
    if (ctx->pc == 0x3007F4u) {
        ctx->pc = 0x3007F4u;
            // 0x3007f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007F8u;
        goto label_3007f8;
    }
    ctx->pc = 0x3007F0u;
    SET_GPR_U32(ctx, 31, 0x3007F8u);
    ctx->pc = 0x3007F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007F0u;
            // 0x3007f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007F8u; }
        if (ctx->pc != 0x3007F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007F8u; }
        if (ctx->pc != 0x3007F8u) { return; }
    }
    ctx->pc = 0x3007F8u;
label_3007f8:
    // 0x3007f8: 0xc0c05dc  jal         func_301770
label_3007fc:
    if (ctx->pc == 0x3007FCu) {
        ctx->pc = 0x3007FCu;
            // 0x3007fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300800u;
        goto label_300800;
    }
    ctx->pc = 0x3007F8u;
    SET_GPR_U32(ctx, 31, 0x300800u);
    ctx->pc = 0x3007FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3007F8u;
            // 0x3007fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300800u; }
        if (ctx->pc != 0x300800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300800u; }
        if (ctx->pc != 0x300800u) { return; }
    }
    ctx->pc = 0x300800u;
label_300800:
    // 0x300800: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300804:
    // 0x300804: 0xc077280  jal         func_1DCA00
label_300808:
    if (ctx->pc == 0x300808u) {
        ctx->pc = 0x300808u;
            // 0x300808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30080Cu;
        goto label_30080c;
    }
    ctx->pc = 0x300804u;
    SET_GPR_U32(ctx, 31, 0x30080Cu);
    ctx->pc = 0x300808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300804u;
            // 0x300808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30080Cu; }
        if (ctx->pc != 0x30080Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30080Cu; }
        if (ctx->pc != 0x30080Cu) { return; }
    }
    ctx->pc = 0x30080Cu;
label_30080c:
    // 0x30080c: 0xc07727c  jal         func_1DC9F0
label_300810:
    if (ctx->pc == 0x300810u) {
        ctx->pc = 0x300810u;
            // 0x300810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300814u;
        goto label_300814;
    }
    ctx->pc = 0x30080Cu;
    SET_GPR_U32(ctx, 31, 0x300814u);
    ctx->pc = 0x300810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30080Cu;
            // 0x300810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300814u; }
        if (ctx->pc != 0x300814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300814u; }
        if (ctx->pc != 0x300814u) { return; }
    }
    ctx->pc = 0x300814u;
label_300814:
    // 0x300814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x300814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300818:
    // 0x300818: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x300818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_30081c:
    // 0x30081c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30081cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300820:
    // 0x300820: 0xc0c05d4  jal         func_301750
label_300824:
    if (ctx->pc == 0x300824u) {
        ctx->pc = 0x300824u;
            // 0x300824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300828u;
        goto label_300828;
    }
    ctx->pc = 0x300820u;
    SET_GPR_U32(ctx, 31, 0x300828u);
    ctx->pc = 0x300824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300820u;
            // 0x300824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300828u; }
        if (ctx->pc != 0x300828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300828u; }
        if (ctx->pc != 0x300828u) { return; }
    }
    ctx->pc = 0x300828u;
label_300828:
    // 0x300828: 0xc0c05d0  jal         func_301740
label_30082c:
    if (ctx->pc == 0x30082Cu) {
        ctx->pc = 0x30082Cu;
            // 0x30082c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300830u;
        goto label_300830;
    }
    ctx->pc = 0x300828u;
    SET_GPR_U32(ctx, 31, 0x300830u);
    ctx->pc = 0x30082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300828u;
            // 0x30082c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301740u;
    if (runtime->hasFunction(0x301740u)) {
        auto targetFn = runtime->lookupFunction(0x301740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300830u; }
        if (ctx->pc != 0x300830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301740_0x301740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300830u; }
        if (ctx->pc != 0x300830u) { return; }
    }
    ctx->pc = 0x300830u;
label_300830:
    // 0x300830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300834:
    // 0x300834: 0xc0c05cc  jal         func_301730
label_300838:
    if (ctx->pc == 0x300838u) {
        ctx->pc = 0x300838u;
            // 0x300838: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x30083Cu;
        goto label_30083c;
    }
    ctx->pc = 0x300834u;
    SET_GPR_U32(ctx, 31, 0x30083Cu);
    ctx->pc = 0x300838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300834u;
            // 0x300838: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30083Cu; }
        if (ctx->pc != 0x30083Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30083Cu; }
        if (ctx->pc != 0x30083Cu) { return; }
    }
    ctx->pc = 0x30083Cu;
label_30083c:
    // 0x30083c: 0xc0c05c8  jal         func_301720
label_300840:
    if (ctx->pc == 0x300840u) {
        ctx->pc = 0x300840u;
            // 0x300840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300844u;
        goto label_300844;
    }
    ctx->pc = 0x30083Cu;
    SET_GPR_U32(ctx, 31, 0x300844u);
    ctx->pc = 0x300840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30083Cu;
            // 0x300840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300844u; }
        if (ctx->pc != 0x300844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300844u; }
        if (ctx->pc != 0x300844u) { return; }
    }
    ctx->pc = 0x300844u;
label_300844:
    // 0x300844: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x300844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_300848:
    // 0x300848: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x300848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30084c:
    // 0x30084c: 0xc04cc04  jal         func_133010
label_300850:
    if (ctx->pc == 0x300850u) {
        ctx->pc = 0x300850u;
            // 0x300850: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
        ctx->pc = 0x300854u;
        goto label_300854;
    }
    ctx->pc = 0x30084Cu;
    SET_GPR_U32(ctx, 31, 0x300854u);
    ctx->pc = 0x300850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30084Cu;
            // 0x300850: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300854u; }
        if (ctx->pc != 0x300854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300854u; }
        if (ctx->pc != 0x300854u) { return; }
    }
    ctx->pc = 0x300854u;
label_300854:
    // 0x300854: 0xc0775d8  jal         func_1DD760
label_300858:
    if (ctx->pc == 0x300858u) {
        ctx->pc = 0x300858u;
            // 0x300858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30085Cu;
        goto label_30085c;
    }
    ctx->pc = 0x300854u;
    SET_GPR_U32(ctx, 31, 0x30085Cu);
    ctx->pc = 0x300858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300854u;
            // 0x300858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30085Cu; }
        if (ctx->pc != 0x30085Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30085Cu; }
        if (ctx->pc != 0x30085Cu) { return; }
    }
    ctx->pc = 0x30085Cu;
label_30085c:
    // 0x30085c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30085cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300860:
    // 0x300860: 0xc077590  jal         func_1DD640
label_300864:
    if (ctx->pc == 0x300864u) {
        ctx->pc = 0x300864u;
            // 0x300864: 0x3c051001  lui         $a1, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4097 << 16));
        ctx->pc = 0x300868u;
        goto label_300868;
    }
    ctx->pc = 0x300860u;
    SET_GPR_U32(ctx, 31, 0x300868u);
    ctx->pc = 0x300864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300860u;
            // 0x300864: 0x3c051001  lui         $a1, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4097 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD640u;
    if (runtime->hasFunction(0x1DD640u)) {
        auto targetFn = runtime->lookupFunction(0x1DD640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300868u; }
        if (ctx->pc != 0x300868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD640_0x1dd640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300868u; }
        if (ctx->pc != 0x300868u) { return; }
    }
    ctx->pc = 0x300868u;
label_300868:
    // 0x300868: 0xc077330  jal         func_1DCCC0
label_30086c:
    if (ctx->pc == 0x30086Cu) {
        ctx->pc = 0x30086Cu;
            // 0x30086c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300870u;
        goto label_300870;
    }
    ctx->pc = 0x300868u;
    SET_GPR_U32(ctx, 31, 0x300870u);
    ctx->pc = 0x30086Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300868u;
            // 0x30086c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300870u; }
        if (ctx->pc != 0x300870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300870u; }
        if (ctx->pc != 0x300870u) { return; }
    }
    ctx->pc = 0x300870u;
label_300870:
    // 0x300870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_300874:
    if (ctx->pc == 0x300874u) {
        ctx->pc = 0x300878u;
        goto label_300878;
    }
    ctx->pc = 0x300870u;
    {
        const bool branch_taken_0x300870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300870) {
            ctx->pc = 0x300888u;
            goto label_300888;
        }
    }
    ctx->pc = 0x300878u;
label_300878:
    // 0x300878: 0xc07732c  jal         func_1DCCB0
label_30087c:
    if (ctx->pc == 0x30087Cu) {
        ctx->pc = 0x30087Cu;
            // 0x30087c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300880u;
        goto label_300880;
    }
    ctx->pc = 0x300878u;
    SET_GPR_U32(ctx, 31, 0x300880u);
    ctx->pc = 0x30087Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300878u;
            // 0x30087c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300880u; }
        if (ctx->pc != 0x300880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300880u; }
        if (ctx->pc != 0x300880u) { return; }
    }
    ctx->pc = 0x300880u;
label_300880:
    // 0x300880: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_300884:
    if (ctx->pc == 0x300884u) {
        ctx->pc = 0x300884u;
            // 0x300884: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x300888u;
        goto label_300888;
    }
    ctx->pc = 0x300880u;
    {
        const bool branch_taken_0x300880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300880) {
            ctx->pc = 0x300884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300880u;
            // 0x300884: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3008B0u;
            goto label_3008b0;
        }
    }
    ctx->pc = 0x300888u;
label_300888:
    // 0x300888: 0xc0c05c4  jal         func_301710
label_30088c:
    if (ctx->pc == 0x30088Cu) {
        ctx->pc = 0x300890u;
        goto label_300890;
    }
    ctx->pc = 0x300888u;
    SET_GPR_U32(ctx, 31, 0x300890u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300890u; }
        if (ctx->pc != 0x300890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300890u; }
        if (ctx->pc != 0x300890u) { return; }
    }
    ctx->pc = 0x300890u;
label_300890:
    // 0x300890: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300894:
    // 0x300894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300898:
    // 0x300898: 0xc0770e0  jal         func_1DC380
label_30089c:
    if (ctx->pc == 0x30089Cu) {
        ctx->pc = 0x30089Cu;
            // 0x30089c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3008A0u;
        goto label_3008a0;
    }
    ctx->pc = 0x300898u;
    SET_GPR_U32(ctx, 31, 0x3008A0u);
    ctx->pc = 0x30089Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300898u;
            // 0x30089c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008A0u; }
        if (ctx->pc != 0x3008A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008A0u; }
        if (ctx->pc != 0x3008A0u) { return; }
    }
    ctx->pc = 0x3008A0u;
label_3008a0:
    // 0x3008a0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3008a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3008a4:
    // 0x3008a4: 0xc0c05c0  jal         func_301700
label_3008a8:
    if (ctx->pc == 0x3008A8u) {
        ctx->pc = 0x3008A8u;
            // 0x3008a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3008ACu;
        goto label_3008ac;
    }
    ctx->pc = 0x3008A4u;
    SET_GPR_U32(ctx, 31, 0x3008ACu);
    ctx->pc = 0x3008A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3008A4u;
            // 0x3008a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008ACu; }
        if (ctx->pc != 0x3008ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008ACu; }
        if (ctx->pc != 0x3008ACu) { return; }
    }
    ctx->pc = 0x3008ACu;
label_3008ac:
    // 0x3008ac: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3008acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3008b0:
    // 0x3008b0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3008b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_3008b4:
    // 0x3008b4: 0xc075378  jal         func_1D4DE0
label_3008b8:
    if (ctx->pc == 0x3008B8u) {
        ctx->pc = 0x3008B8u;
            // 0x3008b8: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x3008BCu;
        goto label_3008bc;
    }
    ctx->pc = 0x3008B4u;
    SET_GPR_U32(ctx, 31, 0x3008BCu);
    ctx->pc = 0x3008B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3008B4u;
            // 0x3008b8: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008BCu; }
        if (ctx->pc != 0x3008BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008BCu; }
        if (ctx->pc != 0x3008BCu) { return; }
    }
    ctx->pc = 0x3008BCu;
label_3008bc:
    // 0x3008bc: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x3008bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3008c0:
    // 0x3008c0: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x3008c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_3008c4:
    // 0x3008c4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3008c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3008c8:
    // 0x3008c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3008c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3008cc:
    // 0x3008cc: 0xc0c753c  jal         func_31D4F0
label_3008d0:
    if (ctx->pc == 0x3008D0u) {
        ctx->pc = 0x3008D0u;
            // 0x3008d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3008D4u;
        goto label_3008d4;
    }
    ctx->pc = 0x3008CCu;
    SET_GPR_U32(ctx, 31, 0x3008D4u);
    ctx->pc = 0x3008D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3008CCu;
            // 0x3008d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008D4u; }
        if (ctx->pc != 0x3008D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008D4u; }
        if (ctx->pc != 0x3008D4u) { return; }
    }
    ctx->pc = 0x3008D4u;
label_3008d4:
    // 0x3008d4: 0xc62c0880  lwc1        $f12, 0x880($s1)
    ctx->pc = 0x3008d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3008d8:
    // 0x3008d8: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x3008d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_3008dc:
    // 0x3008dc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3008dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3008e0:
    // 0x3008e0: 0xc0c753c  jal         func_31D4F0
label_3008e4:
    if (ctx->pc == 0x3008E4u) {
        ctx->pc = 0x3008E4u;
            // 0x3008e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3008E8u;
        goto label_3008e8;
    }
    ctx->pc = 0x3008E0u;
    SET_GPR_U32(ctx, 31, 0x3008E8u);
    ctx->pc = 0x3008E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3008E0u;
            // 0x3008e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008E8u; }
        if (ctx->pc != 0x3008E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008E8u; }
        if (ctx->pc != 0x3008E8u) { return; }
    }
    ctx->pc = 0x3008E8u;
label_3008e8:
    // 0x3008e8: 0xc0bfed4  jal         func_2FFB50
label_3008ec:
    if (ctx->pc == 0x3008ECu) {
        ctx->pc = 0x3008ECu;
            // 0x3008ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3008F0u;
        goto label_3008f0;
    }
    ctx->pc = 0x3008E8u;
    SET_GPR_U32(ctx, 31, 0x3008F0u);
    ctx->pc = 0x3008ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3008E8u;
            // 0x3008ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFB50u;
    goto label_2ffb50;
    ctx->pc = 0x3008F0u;
label_3008f0:
    // 0x3008f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3008f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3008f4:
    // 0x3008f4: 0x10000308  b           . + 4 + (0x308 << 2)
label_3008f8:
    if (ctx->pc == 0x3008F8u) {
        ctx->pc = 0x3008F8u;
            // 0x3008f8: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x3008FCu;
        goto label_3008fc;
    }
    ctx->pc = 0x3008F4u;
    {
        const bool branch_taken_0x3008f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3008F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3008F4u;
            // 0x3008f8: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008f4) {
            ctx->pc = 0x301518u;
            goto label_301518;
        }
    }
    ctx->pc = 0x3008FCu;
label_3008fc:
    // 0x3008fc: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x3008fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_300900:
    // 0x300900: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x300900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_300904:
    // 0x300904: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x300904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_300908:
    // 0x300908: 0x320f809  jalr        $t9
label_30090c:
    if (ctx->pc == 0x30090Cu) {
        ctx->pc = 0x30090Cu;
            // 0x30090c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300910u;
        goto label_300910;
    }
    ctx->pc = 0x300908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x300910u);
        ctx->pc = 0x30090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300908u;
            // 0x30090c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x300910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x300910u; }
            if (ctx->pc != 0x300910u) { return; }
        }
        }
    }
    ctx->pc = 0x300910u;
label_300910:
    // 0x300910: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x300910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_300914:
    // 0x300914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300918:
    // 0x300918: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x300918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_30091c:
    // 0x30091c: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x30091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300920:
    // 0x300920: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x300920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_300924:
    // 0x300924: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x300924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_300928:
    // 0x300928: 0xc0b8214  jal         func_2E0850
label_30092c:
    if (ctx->pc == 0x30092Cu) {
        ctx->pc = 0x30092Cu;
            // 0x30092c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300930u;
        goto label_300930;
    }
    ctx->pc = 0x300928u;
    SET_GPR_U32(ctx, 31, 0x300930u);
    ctx->pc = 0x30092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300928u;
            // 0x30092c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0850u;
    if (runtime->hasFunction(0x2E0850u)) {
        auto targetFn = runtime->lookupFunction(0x2E0850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300930u; }
        if (ctx->pc != 0x300930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0850_0x2e0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300930u; }
        if (ctx->pc != 0x300930u) { return; }
    }
    ctx->pc = 0x300930u;
label_300930:
    // 0x300930: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x300930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_300934:
    // 0x300934: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x300934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_300938:
    // 0x300938: 0xc04cc90  jal         func_133240
label_30093c:
    if (ctx->pc == 0x30093Cu) {
        ctx->pc = 0x30093Cu;
            // 0x30093c: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x300940u;
        goto label_300940;
    }
    ctx->pc = 0x300938u;
    SET_GPR_U32(ctx, 31, 0x300940u);
    ctx->pc = 0x30093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300938u;
            // 0x30093c: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300940u; }
        if (ctx->pc != 0x300940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300940u; }
        if (ctx->pc != 0x300940u) { return; }
    }
    ctx->pc = 0x300940u;
label_300940:
    // 0x300940: 0x96020052  lhu         $v0, 0x52($s0)
    ctx->pc = 0x300940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
label_300944:
    // 0x300944: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x300944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_300948:
    // 0x300948: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_30094c:
    if (ctx->pc == 0x30094Cu) {
        ctx->pc = 0x30094Cu;
            // 0x30094c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x300950u;
        goto label_300950;
    }
    ctx->pc = 0x300948u;
    {
        const bool branch_taken_0x300948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300948) {
            ctx->pc = 0x30094Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300948u;
            // 0x30094c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3009DCu;
            goto label_3009dc;
        }
    }
    ctx->pc = 0x300950u;
label_300950:
    // 0x300950: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x300950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_300954:
    // 0x300954: 0xc04cc04  jal         func_133010
label_300958:
    if (ctx->pc == 0x300958u) {
        ctx->pc = 0x300958u;
            // 0x300958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30095Cu;
        goto label_30095c;
    }
    ctx->pc = 0x300954u;
    SET_GPR_U32(ctx, 31, 0x30095Cu);
    ctx->pc = 0x300958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300954u;
            // 0x300958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30095Cu; }
        if (ctx->pc != 0x30095Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30095Cu; }
        if (ctx->pc != 0x30095Cu) { return; }
    }
    ctx->pc = 0x30095Cu;
label_30095c:
    // 0x30095c: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x30095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_300960:
    // 0x300960: 0xc075318  jal         func_1D4C60
label_300964:
    if (ctx->pc == 0x300964u) {
        ctx->pc = 0x300964u;
            // 0x300964: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x300968u;
        goto label_300968;
    }
    ctx->pc = 0x300960u;
    SET_GPR_U32(ctx, 31, 0x300968u);
    ctx->pc = 0x300964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300960u;
            // 0x300964: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300968u; }
        if (ctx->pc != 0x300968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300968u; }
        if (ctx->pc != 0x300968u) { return; }
    }
    ctx->pc = 0x300968u;
label_300968:
    // 0x300968: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x300968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_30096c:
    // 0x30096c: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x30096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_300970:
    // 0x300970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x300970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300974:
    // 0x300974: 0xc0c6250  jal         func_318940
label_300978:
    if (ctx->pc == 0x300978u) {
        ctx->pc = 0x300978u;
            // 0x300978: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30097Cu;
        goto label_30097c;
    }
    ctx->pc = 0x300974u;
    SET_GPR_U32(ctx, 31, 0x30097Cu);
    ctx->pc = 0x300978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300974u;
            // 0x300978: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30097Cu; }
        if (ctx->pc != 0x30097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30097Cu; }
        if (ctx->pc != 0x30097Cu) { return; }
    }
    ctx->pc = 0x30097Cu;
label_30097c:
    // 0x30097c: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x30097cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_300980:
    // 0x300980: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x300980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_300984:
    // 0x300984: 0xc075378  jal         func_1D4DE0
label_300988:
    if (ctx->pc == 0x300988u) {
        ctx->pc = 0x300988u;
            // 0x300988: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x30098Cu;
        goto label_30098c;
    }
    ctx->pc = 0x300984u;
    SET_GPR_U32(ctx, 31, 0x30098Cu);
    ctx->pc = 0x300988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300984u;
            // 0x300988: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30098Cu; }
        if (ctx->pc != 0x30098Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30098Cu; }
        if (ctx->pc != 0x30098Cu) { return; }
    }
    ctx->pc = 0x30098Cu;
label_30098c:
    // 0x30098c: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x30098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300990:
    // 0x300990: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x300990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_300994:
    // 0x300994: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x300994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_300998:
    // 0x300998: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x300998u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30099c:
    // 0x30099c: 0xc0c753c  jal         func_31D4F0
label_3009a0:
    if (ctx->pc == 0x3009A0u) {
        ctx->pc = 0x3009A0u;
            // 0x3009a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3009A4u;
        goto label_3009a4;
    }
    ctx->pc = 0x30099Cu;
    SET_GPR_U32(ctx, 31, 0x3009A4u);
    ctx->pc = 0x3009A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30099Cu;
            // 0x3009a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009A4u; }
        if (ctx->pc != 0x3009A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009A4u; }
        if (ctx->pc != 0x3009A4u) { return; }
    }
    ctx->pc = 0x3009A4u;
label_3009a4:
    // 0x3009a4: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x3009a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3009a8:
    // 0x3009a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3009ac:
    // 0x3009ac: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x3009acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3009b0:
    // 0x3009b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3009b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3009b4:
    // 0x3009b4: 0xc0c753c  jal         func_31D4F0
label_3009b8:
    if (ctx->pc == 0x3009B8u) {
        ctx->pc = 0x3009B8u;
            // 0x3009b8: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->pc = 0x3009BCu;
        goto label_3009bc;
    }
    ctx->pc = 0x3009B4u;
    SET_GPR_U32(ctx, 31, 0x3009BCu);
    ctx->pc = 0x3009B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009B4u;
            // 0x3009b8: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009BCu; }
        if (ctx->pc != 0x3009BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009BCu; }
        if (ctx->pc != 0x3009BCu) { return; }
    }
    ctx->pc = 0x3009BCu;
label_3009bc:
    // 0x3009bc: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x3009bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_3009c0:
    // 0x3009c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3009c4:
    // 0x3009c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3009c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3009c8:
    // 0x3009c8: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3009c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3009cc:
    // 0x3009cc: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3009ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3009d0:
    // 0x3009d0: 0xc0c6250  jal         func_318940
label_3009d4:
    if (ctx->pc == 0x3009D4u) {
        ctx->pc = 0x3009D4u;
            // 0x3009d4: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x3009D8u;
        goto label_3009d8;
    }
    ctx->pc = 0x3009D0u;
    SET_GPR_U32(ctx, 31, 0x3009D8u);
    ctx->pc = 0x3009D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009D0u;
            // 0x3009d4: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009D8u; }
        if (ctx->pc != 0x3009D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009D8u; }
        if (ctx->pc != 0x3009D8u) { return; }
    }
    ctx->pc = 0x3009D8u;
label_3009d8:
    // 0x3009d8: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x3009d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_3009dc:
    // 0x3009dc: 0xc0754b4  jal         func_1D52D0
label_3009e0:
    if (ctx->pc == 0x3009E0u) {
        ctx->pc = 0x3009E4u;
        goto label_3009e4;
    }
    ctx->pc = 0x3009DCu;
    SET_GPR_U32(ctx, 31, 0x3009E4u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009E4u; }
        if (ctx->pc != 0x3009E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009E4u; }
        if (ctx->pc != 0x3009E4u) { return; }
    }
    ctx->pc = 0x3009E4u;
label_3009e4:
    // 0x3009e4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3009e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3009e8:
    // 0x3009e8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3009e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3009ec:
    // 0x3009ec: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_3009f0:
    if (ctx->pc == 0x3009F0u) {
        ctx->pc = 0x3009F0u;
            // 0x3009f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3009F4u;
        goto label_3009f4;
    }
    ctx->pc = 0x3009ECu;
    {
        const bool branch_taken_0x3009ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3009ec) {
            ctx->pc = 0x3009F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3009ECu;
            // 0x3009f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300A90u;
            goto label_300a90;
        }
    }
    ctx->pc = 0x3009F4u;
label_3009f4:
    // 0x3009f4: 0x8e220e0c  lw          $v0, 0xE0C($s1)
    ctx->pc = 0x3009f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3596)));
label_3009f8:
    // 0x3009f8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3009f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3009fc:
    // 0x3009fc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_300a00:
    if (ctx->pc == 0x300A00u) {
        ctx->pc = 0x300A00u;
            // 0x300a00: 0x26240a50  addiu       $a0, $s1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
        ctx->pc = 0x300A04u;
        goto label_300a04;
    }
    ctx->pc = 0x3009FCu;
    {
        const bool branch_taken_0x3009fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3009FCu;
            // 0x300a00: 0x26240a50  addiu       $a0, $s1, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009fc) {
            ctx->pc = 0x300A34u;
            goto label_300a34;
        }
    }
    ctx->pc = 0x300A04u;
label_300a04:
    // 0x300a04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x300a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_300a08:
    // 0x300a08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300a0c:
    // 0x300a0c: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x300a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_300a10:
    // 0x300a10: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x300a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_300a14:
    // 0x300a14: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x300a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_300a18:
    // 0x300a18: 0x244226a0  addiu       $v0, $v0, 0x26A0
    ctx->pc = 0x300a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9888));
label_300a1c:
    // 0x300a1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x300a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_300a20:
    // 0x300a20: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x300a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300a24:
    // 0x300a24: 0xc4a20c80  lwc1        $f2, 0xC80($a1)
    ctx->pc = 0x300a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_300a28:
    // 0x300a28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x300a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_300a2c:
    // 0x300a2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_300a30:
    if (ctx->pc == 0x300A30u) {
        ctx->pc = 0x300A30u;
            // 0x300a30: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x300A34u;
        goto label_300a34;
    }
    ctx->pc = 0x300A2Cu;
    {
        const bool branch_taken_0x300a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300A2Cu;
            // 0x300a30: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a2c) {
            ctx->pc = 0x300A54u;
            goto label_300a54;
        }
    }
    ctx->pc = 0x300A34u;
label_300a34:
    // 0x300a34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x300a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_300a38:
    // 0x300a38: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x300a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_300a3c:
    // 0x300a3c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x300a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_300a40:
    // 0x300a40: 0xc44126a8  lwc1        $f1, 0x26A8($v0)
    ctx->pc = 0x300a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_300a44:
    // 0x300a44: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x300a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_300a48:
    // 0x300a48: 0xc4620c80  lwc1        $f2, 0xC80($v1)
    ctx->pc = 0x300a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_300a4c:
    // 0x300a4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x300a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_300a50:
    // 0x300a50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x300a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_300a54:
    // 0x300a54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x300a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_300a58:
    // 0x300a58: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x300a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_300a5c:
    // 0x300a5c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x300a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_300a60:
    // 0x300a60: 0xc0eea40  jal         func_3BA900
label_300a64:
    if (ctx->pc == 0x300A64u) {
        ctx->pc = 0x300A64u;
            // 0x300a64: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300A68u;
        goto label_300a68;
    }
    ctx->pc = 0x300A60u;
    SET_GPR_U32(ctx, 31, 0x300A68u);
    ctx->pc = 0x300A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A60u;
            // 0x300a64: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA900u;
    if (runtime->hasFunction(0x3BA900u)) {
        auto targetFn = runtime->lookupFunction(0x3BA900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A68u; }
        if (ctx->pc != 0x300A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA900_0x3ba900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A68u; }
        if (ctx->pc != 0x300A68u) { return; }
    }
    ctx->pc = 0x300A68u;
label_300a68:
    // 0x300a68: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x300a68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_300a6c:
    // 0x300a6c: 0x26240a50  addiu       $a0, $s1, 0xA50
    ctx->pc = 0x300a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_300a70:
    // 0x300a70: 0xc6200a7c  lwc1        $f0, 0xA7C($s1)
    ctx->pc = 0x300a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_300a74:
    // 0x300a74: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x300a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_300a78:
    // 0x300a78: 0xc0eea24  jal         func_3BA890
label_300a7c:
    if (ctx->pc == 0x300A7Cu) {
        ctx->pc = 0x300A7Cu;
            // 0x300a7c: 0xe6200a7c  swc1        $f0, 0xA7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2684), bits); }
        ctx->pc = 0x300A80u;
        goto label_300a80;
    }
    ctx->pc = 0x300A78u;
    SET_GPR_U32(ctx, 31, 0x300A80u);
    ctx->pc = 0x300A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A78u;
            // 0x300a7c: 0xe6200a7c  swc1        $f0, 0xA7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A80u; }
        if (ctx->pc != 0x300A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A80u; }
        if (ctx->pc != 0x300A80u) { return; }
    }
    ctx->pc = 0x300A80u;
label_300a80:
    // 0x300a80: 0xc6200a80  lwc1        $f0, 0xA80($s1)
    ctx->pc = 0x300a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_300a84:
    // 0x300a84: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x300a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_300a88:
    // 0x300a88: 0xe6200a80  swc1        $f0, 0xA80($s1)
    ctx->pc = 0x300a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2688), bits); }
label_300a8c:
    // 0x300a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300a90:
    // 0x300a90: 0xc0c05bc  jal         func_3016F0
label_300a94:
    if (ctx->pc == 0x300A94u) {
        ctx->pc = 0x300A98u;
        goto label_300a98;
    }
    ctx->pc = 0x300A90u;
    SET_GPR_U32(ctx, 31, 0x300A98u);
    ctx->pc = 0x3016F0u;
    if (runtime->hasFunction(0x3016F0u)) {
        auto targetFn = runtime->lookupFunction(0x3016F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A98u; }
        if (ctx->pc != 0x300A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003016F0_0x3016f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A98u; }
        if (ctx->pc != 0x300A98u) { return; }
    }
    ctx->pc = 0x300A98u;
label_300a98:
    // 0x300a98: 0xc0c05b8  jal         func_3016E0
label_300a9c:
    if (ctx->pc == 0x300A9Cu) {
        ctx->pc = 0x300A9Cu;
            // 0x300a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300AA0u;
        goto label_300aa0;
    }
    ctx->pc = 0x300A98u;
    SET_GPR_U32(ctx, 31, 0x300AA0u);
    ctx->pc = 0x300A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300A98u;
            // 0x300a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3016E0u;
    if (runtime->hasFunction(0x3016E0u)) {
        auto targetFn = runtime->lookupFunction(0x3016E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AA0u; }
        if (ctx->pc != 0x300AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003016E0_0x3016e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AA0u; }
        if (ctx->pc != 0x300AA0u) { return; }
    }
    ctx->pc = 0x300AA0u;
label_300aa0:
    // 0x300aa0: 0x84530026  lh          $s3, 0x26($v0)
    ctx->pc = 0x300aa0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
label_300aa4:
    // 0x300aa4: 0xc077330  jal         func_1DCCC0
label_300aa8:
    if (ctx->pc == 0x300AA8u) {
        ctx->pc = 0x300AA8u;
            // 0x300aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300AACu;
        goto label_300aac;
    }
    ctx->pc = 0x300AA4u;
    SET_GPR_U32(ctx, 31, 0x300AACu);
    ctx->pc = 0x300AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300AA4u;
            // 0x300aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AACu; }
        if (ctx->pc != 0x300AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AACu; }
        if (ctx->pc != 0x300AACu) { return; }
    }
    ctx->pc = 0x300AACu;
label_300aac:
    // 0x300aac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_300ab0:
    if (ctx->pc == 0x300AB0u) {
        ctx->pc = 0x300AB0u;
            // 0x300ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300AB4u;
        goto label_300ab4;
    }
    ctx->pc = 0x300AACu;
    {
        const bool branch_taken_0x300aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300aac) {
            ctx->pc = 0x300AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300AACu;
            // 0x300ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300AC8u;
            goto label_300ac8;
        }
    }
    ctx->pc = 0x300AB4u;
label_300ab4:
    // 0x300ab4: 0xc07732c  jal         func_1DCCB0
label_300ab8:
    if (ctx->pc == 0x300AB8u) {
        ctx->pc = 0x300AB8u;
            // 0x300ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300ABCu;
        goto label_300abc;
    }
    ctx->pc = 0x300AB4u;
    SET_GPR_U32(ctx, 31, 0x300ABCu);
    ctx->pc = 0x300AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300AB4u;
            // 0x300ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ABCu; }
        if (ctx->pc != 0x300ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ABCu; }
        if (ctx->pc != 0x300ABCu) { return; }
    }
    ctx->pc = 0x300ABCu;
label_300abc:
    // 0x300abc: 0x10400207  beqz        $v0, . + 4 + (0x207 << 2)
label_300ac0:
    if (ctx->pc == 0x300AC0u) {
        ctx->pc = 0x300AC4u;
        goto label_300ac4;
    }
    ctx->pc = 0x300ABCu;
    {
        const bool branch_taken_0x300abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300abc) {
            ctx->pc = 0x3012DCu;
            goto label_3012dc;
        }
    }
    ctx->pc = 0x300AC4u;
label_300ac4:
    // 0x300ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300ac8:
    // 0x300ac8: 0xc077320  jal         func_1DCC80
label_300acc:
    if (ctx->pc == 0x300ACCu) {
        ctx->pc = 0x300AD0u;
        goto label_300ad0;
    }
    ctx->pc = 0x300AC8u;
    SET_GPR_U32(ctx, 31, 0x300AD0u);
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AD0u; }
        if (ctx->pc != 0x300AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AD0u; }
        if (ctx->pc != 0x300AD0u) { return; }
    }
    ctx->pc = 0x300AD0u;
label_300ad0:
    // 0x300ad0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x300ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ad4:
    // 0x300ad4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300ad8:
    // 0x300ad8: 0xc0770e4  jal         func_1DC390
label_300adc:
    if (ctx->pc == 0x300ADCu) {
        ctx->pc = 0x300ADCu;
            // 0x300adc: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x300AE0u;
        goto label_300ae0;
    }
    ctx->pc = 0x300AD8u;
    SET_GPR_U32(ctx, 31, 0x300AE0u);
    ctx->pc = 0x300ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300AD8u;
            // 0x300adc: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AE0u; }
        if (ctx->pc != 0x300AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300AE0u; }
        if (ctx->pc != 0x300AE0u) { return; }
    }
    ctx->pc = 0x300AE0u;
label_300ae0:
    // 0x300ae0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x300ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_300ae4:
    // 0x300ae4: 0x1043019d  beq         $v0, $v1, . + 4 + (0x19D << 2)
label_300ae8:
    if (ctx->pc == 0x300AE8u) {
        ctx->pc = 0x300AECu;
        goto label_300aec;
    }
    ctx->pc = 0x300AE4u;
    {
        const bool branch_taken_0x300ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300ae4) {
            ctx->pc = 0x30115Cu;
            goto label_30115c;
        }
    }
    ctx->pc = 0x300AECu;
label_300aec:
    // 0x300aec: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x300aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_300af0:
    // 0x300af0: 0x50430157  beql        $v0, $v1, . + 4 + (0x157 << 2)
label_300af4:
    if (ctx->pc == 0x300AF4u) {
        ctx->pc = 0x300AF4u;
            // 0x300af4: 0x131c3c  dsll32      $v1, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
        ctx->pc = 0x300AF8u;
        goto label_300af8;
    }
    ctx->pc = 0x300AF0u;
    {
        const bool branch_taken_0x300af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300af0) {
            ctx->pc = 0x300AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300AF0u;
            // 0x300af4: 0x131c3c  dsll32      $v1, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301050u;
            goto label_301050;
        }
    }
    ctx->pc = 0x300AF8u;
label_300af8:
    // 0x300af8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x300af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_300afc:
    // 0x300afc: 0x504300fe  beql        $v0, $v1, . + 4 + (0xFE << 2)
label_300b00:
    if (ctx->pc == 0x300B00u) {
        ctx->pc = 0x300B00u;
            // 0x300b00: 0x131c3c  dsll32      $v1, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
        ctx->pc = 0x300B04u;
        goto label_300b04;
    }
    ctx->pc = 0x300AFCu;
    {
        const bool branch_taken_0x300afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300afc) {
            ctx->pc = 0x300B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300AFCu;
            // 0x300b00: 0x131c3c  dsll32      $v1, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300EF8u;
            goto label_300ef8;
        }
    }
    ctx->pc = 0x300B04u;
label_300b04:
    // 0x300b04: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x300b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_300b08:
    // 0x300b08: 0x104300c4  beq         $v0, $v1, . + 4 + (0xC4 << 2)
label_300b0c:
    if (ctx->pc == 0x300B0Cu) {
        ctx->pc = 0x300B10u;
        goto label_300b10;
    }
    ctx->pc = 0x300B08u;
    {
        const bool branch_taken_0x300b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300b08) {
            ctx->pc = 0x300E1Cu;
            goto label_300e1c;
        }
    }
    ctx->pc = 0x300B10u;
label_300b10:
    // 0x300b10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x300b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_300b14:
    // 0x300b14: 0x1043008a  beq         $v0, $v1, . + 4 + (0x8A << 2)
label_300b18:
    if (ctx->pc == 0x300B18u) {
        ctx->pc = 0x300B1Cu;
        goto label_300b1c;
    }
    ctx->pc = 0x300B14u;
    {
        const bool branch_taken_0x300b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300b14) {
            ctx->pc = 0x300D40u;
            goto label_300d40;
        }
    }
    ctx->pc = 0x300B1Cu;
label_300b1c:
    // 0x300b1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300b20:
    // 0x300b20: 0x1043003d  beq         $v0, $v1, . + 4 + (0x3D << 2)
label_300b24:
    if (ctx->pc == 0x300B24u) {
        ctx->pc = 0x300B28u;
        goto label_300b28;
    }
    ctx->pc = 0x300B20u;
    {
        const bool branch_taken_0x300b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300b20) {
            ctx->pc = 0x300C18u;
            goto label_300c18;
        }
    }
    ctx->pc = 0x300B28u;
label_300b28:
    // 0x300b28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x300b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_300b2c:
    // 0x300b2c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_300b30:
    if (ctx->pc == 0x300B30u) {
        ctx->pc = 0x300B34u;
        goto label_300b34;
    }
    ctx->pc = 0x300B2Cu;
    {
        const bool branch_taken_0x300b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x300b2c) {
            ctx->pc = 0x300B3Cu;
            goto label_300b3c;
        }
    }
    ctx->pc = 0x300B34u;
label_300b34:
    // 0x300b34: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_300b38:
    if (ctx->pc == 0x300B38u) {
        ctx->pc = 0x300B38u;
            // 0x300b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B3Cu;
        goto label_300b3c;
    }
    ctx->pc = 0x300B34u;
    {
        const bool branch_taken_0x300b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300B34u;
            // 0x300b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b34) {
            ctx->pc = 0x301238u;
            goto label_301238;
        }
    }
    ctx->pc = 0x300B3Cu;
label_300b3c:
    // 0x300b3c: 0xc0775b8  jal         func_1DD6E0
label_300b40:
    if (ctx->pc == 0x300B40u) {
        ctx->pc = 0x300B44u;
        goto label_300b44;
    }
    ctx->pc = 0x300B3Cu;
    SET_GPR_U32(ctx, 31, 0x300B44u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B44u; }
        if (ctx->pc != 0x300B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B44u; }
        if (ctx->pc != 0x300B44u) { return; }
    }
    ctx->pc = 0x300B44u;
label_300b44:
    // 0x300b44: 0xc0775b4  jal         func_1DD6D0
label_300b48:
    if (ctx->pc == 0x300B48u) {
        ctx->pc = 0x300B48u;
            // 0x300b48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x300B4Cu;
        goto label_300b4c;
    }
    ctx->pc = 0x300B44u;
    SET_GPR_U32(ctx, 31, 0x300B4Cu);
    ctx->pc = 0x300B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300B44u;
            // 0x300b48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B4Cu; }
        if (ctx->pc != 0x300B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B4Cu; }
        if (ctx->pc != 0x300B4Cu) { return; }
    }
    ctx->pc = 0x300B4Cu;
label_300b4c:
    // 0x300b4c: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300b4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300b50:
    // 0x300b50: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_300b54:
    if (ctx->pc == 0x300B54u) {
        ctx->pc = 0x300B54u;
            // 0x300b54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x300B58u;
        goto label_300b58;
    }
    ctx->pc = 0x300B50u;
    {
        const bool branch_taken_0x300b50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300b50) {
            ctx->pc = 0x300B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300B50u;
            // 0x300b54: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300B64u;
            goto label_300b64;
        }
    }
    ctx->pc = 0x300B58u;
label_300b58:
    // 0x300b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300b5c:
    // 0x300b5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_300b60:
    if (ctx->pc == 0x300B60u) {
        ctx->pc = 0x300B60u;
            // 0x300b60: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x300B64u;
        goto label_300b64;
    }
    ctx->pc = 0x300B5Cu;
    {
        const bool branch_taken_0x300b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300B5Cu;
            // 0x300b60: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b5c) {
            ctx->pc = 0x300B7Cu;
            goto label_300b7c;
        }
    }
    ctx->pc = 0x300B64u;
label_300b64:
    // 0x300b64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_300b68:
    // 0x300b68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300b6c:
    // 0x300b6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x300b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300b70:
    // 0x300b70: 0x0  nop
    ctx->pc = 0x300b70u;
    // NOP
label_300b74:
    // 0x300b74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x300b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_300b78:
    // 0x300b78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x300b78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_300b7c:
    // 0x300b7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x300b7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_300b80:
    // 0x300b80: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x300b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_300b84:
    // 0x300b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300b88:
    // 0x300b88: 0x0  nop
    ctx->pc = 0x300b88u;
    // NOP
label_300b8c:
    // 0x300b8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x300b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300b90:
    // 0x300b90: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_300b94:
    if (ctx->pc == 0x300B94u) {
        ctx->pc = 0x300B94u;
            // 0x300b94: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300B98u;
        goto label_300b98;
    }
    ctx->pc = 0x300B90u;
    {
        const bool branch_taken_0x300b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300b90) {
            ctx->pc = 0x300B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300B90u;
            // 0x300b94: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x300BA8u;
            goto label_300ba8;
        }
    }
    ctx->pc = 0x300B98u;
label_300b98:
    // 0x300b98: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300b98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300b9c:
    // 0x300b9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300b9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300ba0:
    // 0x300ba0: 0x10000007  b           . + 4 + (0x7 << 2)
label_300ba4:
    if (ctx->pc == 0x300BA4u) {
        ctx->pc = 0x300BA4u;
            // 0x300ba4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x300BA8u;
        goto label_300ba8;
    }
    ctx->pc = 0x300BA0u;
    {
        const bool branch_taken_0x300ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300BA0u;
            // 0x300ba4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ba0) {
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300BA8u;
label_300ba8:
    // 0x300ba8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x300ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_300bac:
    // 0x300bac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300bb0:
    // 0x300bb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300bb4:
    // 0x300bb4: 0x0  nop
    ctx->pc = 0x300bb4u;
    // NOP
label_300bb8:
    // 0x300bb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300bbc:
    // 0x300bbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_300bc0:
    // 0x300bc0: 0xa2230e3e  sb          $v1, 0xE3E($s1)
    ctx->pc = 0x300bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 3));
label_300bc4:
    // 0x300bc4: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300bc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300bc8:
    // 0x300bc8: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x300bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_300bcc:
    // 0x300bcc: 0x5420019d  bnel        $at, $zero, . + 4 + (0x19D << 2)
label_300bd0:
    if (ctx->pc == 0x300BD0u) {
        ctx->pc = 0x300BD0u;
            // 0x300bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BD4u;
        goto label_300bd4;
    }
    ctx->pc = 0x300BCCu;
    {
        const bool branch_taken_0x300bcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x300bcc) {
            ctx->pc = 0x300BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300BCCu;
            // 0x300bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301244u;
            goto label_301244;
        }
    }
    ctx->pc = 0x300BD4u;
label_300bd4:
    // 0x300bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300bd8:
    // 0x300bd8: 0xc077258  jal         func_1DC960
label_300bdc:
    if (ctx->pc == 0x300BDCu) {
        ctx->pc = 0x300BDCu;
            // 0x300bdc: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x300BE0u;
        goto label_300be0;
    }
    ctx->pc = 0x300BD8u;
    SET_GPR_U32(ctx, 31, 0x300BE0u);
    ctx->pc = 0x300BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300BD8u;
            // 0x300bdc: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BE0u; }
        if (ctx->pc != 0x300BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BE0u; }
        if (ctx->pc != 0x300BE0u) { return; }
    }
    ctx->pc = 0x300BE0u;
label_300be0:
    // 0x300be0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x300be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300be4:
    // 0x300be4: 0xc07753c  jal         func_1DD4F0
label_300be8:
    if (ctx->pc == 0x300BE8u) {
        ctx->pc = 0x300BE8u;
            // 0x300be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BECu;
        goto label_300bec;
    }
    ctx->pc = 0x300BE4u;
    SET_GPR_U32(ctx, 31, 0x300BECu);
    ctx->pc = 0x300BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300BE4u;
            // 0x300be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BECu; }
        if (ctx->pc != 0x300BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BECu; }
        if (ctx->pc != 0x300BECu) { return; }
    }
    ctx->pc = 0x300BECu;
label_300bec:
    // 0x300bec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x300becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300bf0:
    // 0x300bf0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x300bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300bf4:
    // 0x300bf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300bf8:
    // 0x300bf8: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x300bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_300bfc:
    // 0x300bfc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x300bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_300c00:
    // 0x300c00: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x300c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_300c04:
    // 0x300c04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300c04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300c08:
    // 0x300c08: 0xc0bb404  jal         func_2ED010
label_300c0c:
    if (ctx->pc == 0x300C0Cu) {
        ctx->pc = 0x300C0Cu;
            // 0x300c0c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x300C10u;
        goto label_300c10;
    }
    ctx->pc = 0x300C08u;
    SET_GPR_U32(ctx, 31, 0x300C10u);
    ctx->pc = 0x300C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C08u;
            // 0x300c0c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C10u; }
        if (ctx->pc != 0x300C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C10u; }
        if (ctx->pc != 0x300C10u) { return; }
    }
    ctx->pc = 0x300C10u;
label_300c10:
    // 0x300c10: 0x1000018b  b           . + 4 + (0x18B << 2)
label_300c14:
    if (ctx->pc == 0x300C14u) {
        ctx->pc = 0x300C18u;
        goto label_300c18;
    }
    ctx->pc = 0x300C10u;
    {
        const bool branch_taken_0x300c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c10) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300C18u;
label_300c18:
    // 0x300c18: 0xc0775b8  jal         func_1DD6E0
label_300c1c:
    if (ctx->pc == 0x300C1Cu) {
        ctx->pc = 0x300C20u;
        goto label_300c20;
    }
    ctx->pc = 0x300C18u;
    SET_GPR_U32(ctx, 31, 0x300C20u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C20u; }
        if (ctx->pc != 0x300C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C20u; }
        if (ctx->pc != 0x300C20u) { return; }
    }
    ctx->pc = 0x300C20u;
label_300c20:
    // 0x300c20: 0xc0775b4  jal         func_1DD6D0
label_300c24:
    if (ctx->pc == 0x300C24u) {
        ctx->pc = 0x300C24u;
            // 0x300c24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x300C28u;
        goto label_300c28;
    }
    ctx->pc = 0x300C20u;
    SET_GPR_U32(ctx, 31, 0x300C28u);
    ctx->pc = 0x300C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C20u;
            // 0x300c24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C28u; }
        if (ctx->pc != 0x300C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C28u; }
        if (ctx->pc != 0x300C28u) { return; }
    }
    ctx->pc = 0x300C28u;
label_300c28:
    // 0x300c28: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300c2c:
    // 0x300c2c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_300c30:
    if (ctx->pc == 0x300C30u) {
        ctx->pc = 0x300C30u;
            // 0x300c30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x300C34u;
        goto label_300c34;
    }
    ctx->pc = 0x300C2Cu;
    {
        const bool branch_taken_0x300c2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300c2c) {
            ctx->pc = 0x300C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300C2Cu;
            // 0x300c30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300C40u;
            goto label_300c40;
        }
    }
    ctx->pc = 0x300C34u;
label_300c34:
    // 0x300c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300c38:
    // 0x300c38: 0x10000007  b           . + 4 + (0x7 << 2)
label_300c3c:
    if (ctx->pc == 0x300C3Cu) {
        ctx->pc = 0x300C3Cu;
            // 0x300c3c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x300C40u;
        goto label_300c40;
    }
    ctx->pc = 0x300C38u;
    {
        const bool branch_taken_0x300c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300C38u;
            // 0x300c3c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c38) {
            ctx->pc = 0x300C58u;
            goto label_300c58;
        }
    }
    ctx->pc = 0x300C40u;
label_300c40:
    // 0x300c40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_300c44:
    // 0x300c44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300c48:
    // 0x300c48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x300c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300c4c:
    // 0x300c4c: 0x0  nop
    ctx->pc = 0x300c4cu;
    // NOP
label_300c50:
    // 0x300c50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x300c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_300c54:
    // 0x300c54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x300c54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_300c58:
    // 0x300c58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x300c58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_300c5c:
    // 0x300c5c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x300c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_300c60:
    // 0x300c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300c64:
    // 0x300c64: 0x0  nop
    ctx->pc = 0x300c64u;
    // NOP
label_300c68:
    // 0x300c68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x300c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300c6c:
    // 0x300c6c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_300c70:
    if (ctx->pc == 0x300C70u) {
        ctx->pc = 0x300C70u;
            // 0x300c70: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300C74u;
        goto label_300c74;
    }
    ctx->pc = 0x300C6Cu;
    {
        const bool branch_taken_0x300c6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300c6c) {
            ctx->pc = 0x300C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300C6Cu;
            // 0x300c70: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x300C84u;
            goto label_300c84;
        }
    }
    ctx->pc = 0x300C74u;
label_300c74:
    // 0x300c74: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300c74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300c78:
    // 0x300c78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300c7c:
    // 0x300c7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_300c80:
    if (ctx->pc == 0x300C80u) {
        ctx->pc = 0x300C80u;
            // 0x300c80: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x300C84u;
        goto label_300c84;
    }
    ctx->pc = 0x300C7Cu;
    {
        const bool branch_taken_0x300c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300C7Cu;
            // 0x300c80: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c7c) {
            ctx->pc = 0x300C9Cu;
            goto label_300c9c;
        }
    }
    ctx->pc = 0x300C84u;
label_300c84:
    // 0x300c84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x300c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_300c88:
    // 0x300c88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300c8c:
    // 0x300c8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300c90:
    // 0x300c90: 0x0  nop
    ctx->pc = 0x300c90u;
    // NOP
label_300c94:
    // 0x300c94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300c98:
    // 0x300c98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_300c9c:
    // 0x300c9c: 0xa2230e3e  sb          $v1, 0xE3E($s1)
    ctx->pc = 0x300c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 3));
label_300ca0:
    // 0x300ca0: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300ca4:
    // 0x300ca4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x300ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_300ca8:
    // 0x300ca8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_300cac:
    if (ctx->pc == 0x300CACu) {
        ctx->pc = 0x300CACu;
            // 0x300cac: 0x92220e3e  lbu         $v0, 0xE3E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
        ctx->pc = 0x300CB0u;
        goto label_300cb0;
    }
    ctx->pc = 0x300CA8u;
    {
        const bool branch_taken_0x300ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ca8) {
            ctx->pc = 0x300CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300CA8u;
            // 0x300cac: 0x92220e3e  lbu         $v0, 0xE3E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300CECu;
            goto label_300cec;
        }
    }
    ctx->pc = 0x300CB0u;
label_300cb0:
    // 0x300cb0: 0xc077258  jal         func_1DC960
label_300cb4:
    if (ctx->pc == 0x300CB4u) {
        ctx->pc = 0x300CB4u;
            // 0x300cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300CB8u;
        goto label_300cb8;
    }
    ctx->pc = 0x300CB0u;
    SET_GPR_U32(ctx, 31, 0x300CB8u);
    ctx->pc = 0x300CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CB0u;
            // 0x300cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CB8u; }
        if (ctx->pc != 0x300CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CB8u; }
        if (ctx->pc != 0x300CB8u) { return; }
    }
    ctx->pc = 0x300CB8u;
label_300cb8:
    // 0x300cb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x300cb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300cbc:
    // 0x300cbc: 0xc07753c  jal         func_1DD4F0
label_300cc0:
    if (ctx->pc == 0x300CC0u) {
        ctx->pc = 0x300CC0u;
            // 0x300cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300CC4u;
        goto label_300cc4;
    }
    ctx->pc = 0x300CBCu;
    SET_GPR_U32(ctx, 31, 0x300CC4u);
    ctx->pc = 0x300CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CBCu;
            // 0x300cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CC4u; }
        if (ctx->pc != 0x300CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CC4u; }
        if (ctx->pc != 0x300CC4u) { return; }
    }
    ctx->pc = 0x300CC4u;
label_300cc4:
    // 0x300cc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x300cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300cc8:
    // 0x300cc8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x300cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300ccc:
    // 0x300ccc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300cd0:
    // 0x300cd0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x300cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_300cd4:
    // 0x300cd4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x300cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_300cd8:
    // 0x300cd8: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x300cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_300cdc:
    // 0x300cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300ce0:
    // 0x300ce0: 0xc0bb404  jal         func_2ED010
label_300ce4:
    if (ctx->pc == 0x300CE4u) {
        ctx->pc = 0x300CE4u;
            // 0x300ce4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x300CE8u;
        goto label_300ce8;
    }
    ctx->pc = 0x300CE0u;
    SET_GPR_U32(ctx, 31, 0x300CE8u);
    ctx->pc = 0x300CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CE0u;
            // 0x300ce4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CE8u; }
        if (ctx->pc != 0x300CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CE8u; }
        if (ctx->pc != 0x300CE8u) { return; }
    }
    ctx->pc = 0x300CE8u;
label_300ce8:
    // 0x300ce8: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300ce8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300cec:
    // 0x300cec: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x300cecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
label_300cf0:
    // 0x300cf0: 0x14200153  bnez        $at, . + 4 + (0x153 << 2)
label_300cf4:
    if (ctx->pc == 0x300CF4u) {
        ctx->pc = 0x300CF8u;
        goto label_300cf8;
    }
    ctx->pc = 0x300CF0u;
    {
        const bool branch_taken_0x300cf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x300cf0) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300CF8u;
label_300cf8:
    // 0x300cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300cfc:
    // 0x300cfc: 0xc07732c  jal         func_1DCCB0
label_300d00:
    if (ctx->pc == 0x300D00u) {
        ctx->pc = 0x300D00u;
            // 0x300d00: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x300D04u;
        goto label_300d04;
    }
    ctx->pc = 0x300CFCu;
    SET_GPR_U32(ctx, 31, 0x300D04u);
    ctx->pc = 0x300D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CFCu;
            // 0x300d00: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D04u; }
        if (ctx->pc != 0x300D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D04u; }
        if (ctx->pc != 0x300D04u) { return; }
    }
    ctx->pc = 0x300D04u;
label_300d04:
    // 0x300d04: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
label_300d08:
    if (ctx->pc == 0x300D08u) {
        ctx->pc = 0x300D0Cu;
        goto label_300d0c;
    }
    ctx->pc = 0x300D04u;
    {
        const bool branch_taken_0x300d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300d04) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300D0Cu;
label_300d0c:
    // 0x300d0c: 0xc077324  jal         func_1DCC90
label_300d10:
    if (ctx->pc == 0x300D10u) {
        ctx->pc = 0x300D10u;
            // 0x300d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300D14u;
        goto label_300d14;
    }
    ctx->pc = 0x300D0Cu;
    SET_GPR_U32(ctx, 31, 0x300D14u);
    ctx->pc = 0x300D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D0Cu;
            // 0x300d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D14u; }
        if (ctx->pc != 0x300D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D14u; }
        if (ctx->pc != 0x300D14u) { return; }
    }
    ctx->pc = 0x300D14u;
label_300d14:
    // 0x300d14: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x300d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_300d18:
    // 0x300d18: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x300d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_300d1c:
    // 0x300d1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x300d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_300d20:
    // 0x300d20: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x300d20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_300d24:
    // 0x300d24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_300d28:
    // 0x300d28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300d2c:
    // 0x300d2c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x300d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_300d30:
    // 0x300d30: 0xc077554  jal         func_1DD550
label_300d34:
    if (ctx->pc == 0x300D34u) {
        ctx->pc = 0x300D34u;
            // 0x300d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300D38u;
        goto label_300d38;
    }
    ctx->pc = 0x300D30u;
    SET_GPR_U32(ctx, 31, 0x300D38u);
    ctx->pc = 0x300D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D30u;
            // 0x300d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D38u; }
        if (ctx->pc != 0x300D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D38u; }
        if (ctx->pc != 0x300D38u) { return; }
    }
    ctx->pc = 0x300D38u;
label_300d38:
    // 0x300d38: 0x10000141  b           . + 4 + (0x141 << 2)
label_300d3c:
    if (ctx->pc == 0x300D3Cu) {
        ctx->pc = 0x300D40u;
        goto label_300d40;
    }
    ctx->pc = 0x300D38u;
    {
        const bool branch_taken_0x300d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d38) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300D40u;
label_300d40:
    // 0x300d40: 0xc0775b8  jal         func_1DD6E0
label_300d44:
    if (ctx->pc == 0x300D44u) {
        ctx->pc = 0x300D48u;
        goto label_300d48;
    }
    ctx->pc = 0x300D40u;
    SET_GPR_U32(ctx, 31, 0x300D48u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D48u; }
        if (ctx->pc != 0x300D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D48u; }
        if (ctx->pc != 0x300D48u) { return; }
    }
    ctx->pc = 0x300D48u;
label_300d48:
    // 0x300d48: 0xc0775b4  jal         func_1DD6D0
label_300d4c:
    if (ctx->pc == 0x300D4Cu) {
        ctx->pc = 0x300D4Cu;
            // 0x300d4c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x300D50u;
        goto label_300d50;
    }
    ctx->pc = 0x300D48u;
    SET_GPR_U32(ctx, 31, 0x300D50u);
    ctx->pc = 0x300D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D48u;
            // 0x300d4c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D50u; }
        if (ctx->pc != 0x300D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D50u; }
        if (ctx->pc != 0x300D50u) { return; }
    }
    ctx->pc = 0x300D50u;
label_300d50:
    // 0x300d50: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300d50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300d54:
    // 0x300d54: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_300d58:
    if (ctx->pc == 0x300D58u) {
        ctx->pc = 0x300D58u;
            // 0x300d58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x300D5Cu;
        goto label_300d5c;
    }
    ctx->pc = 0x300D54u;
    {
        const bool branch_taken_0x300d54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300d54) {
            ctx->pc = 0x300D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300D54u;
            // 0x300d58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300D68u;
            goto label_300d68;
        }
    }
    ctx->pc = 0x300D5Cu;
label_300d5c:
    // 0x300d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300d60:
    // 0x300d60: 0x10000007  b           . + 4 + (0x7 << 2)
label_300d64:
    if (ctx->pc == 0x300D64u) {
        ctx->pc = 0x300D64u;
            // 0x300d64: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x300D68u;
        goto label_300d68;
    }
    ctx->pc = 0x300D60u;
    {
        const bool branch_taken_0x300d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300D60u;
            // 0x300d64: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d60) {
            ctx->pc = 0x300D80u;
            goto label_300d80;
        }
    }
    ctx->pc = 0x300D68u;
label_300d68:
    // 0x300d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_300d6c:
    // 0x300d6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300d70:
    // 0x300d70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x300d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300d74:
    // 0x300d74: 0x0  nop
    ctx->pc = 0x300d74u;
    // NOP
label_300d78:
    // 0x300d78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x300d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_300d7c:
    // 0x300d7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x300d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_300d80:
    // 0x300d80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x300d80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_300d84:
    // 0x300d84: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x300d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_300d88:
    // 0x300d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300d8c:
    // 0x300d8c: 0x0  nop
    ctx->pc = 0x300d8cu;
    // NOP
label_300d90:
    // 0x300d90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x300d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300d94:
    // 0x300d94: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_300d98:
    if (ctx->pc == 0x300D98u) {
        ctx->pc = 0x300D98u;
            // 0x300d98: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300D9Cu;
        goto label_300d9c;
    }
    ctx->pc = 0x300D94u;
    {
        const bool branch_taken_0x300d94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300d94) {
            ctx->pc = 0x300D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300D94u;
            // 0x300d98: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x300DACu;
            goto label_300dac;
        }
    }
    ctx->pc = 0x300D9Cu;
label_300d9c:
    // 0x300d9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300d9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300da0:
    // 0x300da0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300da4:
    // 0x300da4: 0x10000007  b           . + 4 + (0x7 << 2)
label_300da8:
    if (ctx->pc == 0x300DA8u) {
        ctx->pc = 0x300DA8u;
            // 0x300da8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x300DACu;
        goto label_300dac;
    }
    ctx->pc = 0x300DA4u;
    {
        const bool branch_taken_0x300da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300DA4u;
            // 0x300da8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300da4) {
            ctx->pc = 0x300DC4u;
            goto label_300dc4;
        }
    }
    ctx->pc = 0x300DACu;
label_300dac:
    // 0x300dac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x300dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_300db0:
    // 0x300db0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300db0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300db4:
    // 0x300db4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300db4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300db8:
    // 0x300db8: 0x0  nop
    ctx->pc = 0x300db8u;
    // NOP
label_300dbc:
    // 0x300dbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300dc0:
    // 0x300dc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_300dc4:
    // 0x300dc4: 0xa2230e3e  sb          $v1, 0xE3E($s1)
    ctx->pc = 0x300dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 3));
label_300dc8:
    // 0x300dc8: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300dc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300dcc:
    // 0x300dcc: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x300dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_300dd0:
    // 0x300dd0: 0x1420011b  bnez        $at, . + 4 + (0x11B << 2)
label_300dd4:
    if (ctx->pc == 0x300DD4u) {
        ctx->pc = 0x300DD8u;
        goto label_300dd8;
    }
    ctx->pc = 0x300DD0u;
    {
        const bool branch_taken_0x300dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x300dd0) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300DD8u;
label_300dd8:
    // 0x300dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300ddc:
    // 0x300ddc: 0xc077258  jal         func_1DC960
label_300de0:
    if (ctx->pc == 0x300DE0u) {
        ctx->pc = 0x300DE0u;
            // 0x300de0: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x300DE4u;
        goto label_300de4;
    }
    ctx->pc = 0x300DDCu;
    SET_GPR_U32(ctx, 31, 0x300DE4u);
    ctx->pc = 0x300DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300DDCu;
            // 0x300de0: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DE4u; }
        if (ctx->pc != 0x300DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DE4u; }
        if (ctx->pc != 0x300DE4u) { return; }
    }
    ctx->pc = 0x300DE4u;
label_300de4:
    // 0x300de4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x300de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300de8:
    // 0x300de8: 0xc07753c  jal         func_1DD4F0
label_300dec:
    if (ctx->pc == 0x300DECu) {
        ctx->pc = 0x300DECu;
            // 0x300dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300DF0u;
        goto label_300df0;
    }
    ctx->pc = 0x300DE8u;
    SET_GPR_U32(ctx, 31, 0x300DF0u);
    ctx->pc = 0x300DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300DE8u;
            // 0x300dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DF0u; }
        if (ctx->pc != 0x300DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DF0u; }
        if (ctx->pc != 0x300DF0u) { return; }
    }
    ctx->pc = 0x300DF0u;
label_300df0:
    // 0x300df0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x300df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300df4:
    // 0x300df4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x300df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300df8:
    // 0x300df8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300dfc:
    // 0x300dfc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x300dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_300e00:
    // 0x300e00: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x300e00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_300e04:
    // 0x300e04: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x300e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_300e08:
    // 0x300e08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300e08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300e0c:
    // 0x300e0c: 0xc0bb404  jal         func_2ED010
label_300e10:
    if (ctx->pc == 0x300E10u) {
        ctx->pc = 0x300E10u;
            // 0x300e10: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x300E14u;
        goto label_300e14;
    }
    ctx->pc = 0x300E0Cu;
    SET_GPR_U32(ctx, 31, 0x300E14u);
    ctx->pc = 0x300E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E0Cu;
            // 0x300e10: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E14u; }
        if (ctx->pc != 0x300E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E14u; }
        if (ctx->pc != 0x300E14u) { return; }
    }
    ctx->pc = 0x300E14u;
label_300e14:
    // 0x300e14: 0x1000010a  b           . + 4 + (0x10A << 2)
label_300e18:
    if (ctx->pc == 0x300E18u) {
        ctx->pc = 0x300E1Cu;
        goto label_300e1c;
    }
    ctx->pc = 0x300E14u;
    {
        const bool branch_taken_0x300e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300e14) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300E1Cu;
label_300e1c:
    // 0x300e1c: 0xc0775b8  jal         func_1DD6E0
label_300e20:
    if (ctx->pc == 0x300E20u) {
        ctx->pc = 0x300E24u;
        goto label_300e24;
    }
    ctx->pc = 0x300E1Cu;
    SET_GPR_U32(ctx, 31, 0x300E24u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E24u; }
        if (ctx->pc != 0x300E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E24u; }
        if (ctx->pc != 0x300E24u) { return; }
    }
    ctx->pc = 0x300E24u;
label_300e24:
    // 0x300e24: 0xc0775b4  jal         func_1DD6D0
label_300e28:
    if (ctx->pc == 0x300E28u) {
        ctx->pc = 0x300E28u;
            // 0x300e28: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x300E2Cu;
        goto label_300e2c;
    }
    ctx->pc = 0x300E24u;
    SET_GPR_U32(ctx, 31, 0x300E2Cu);
    ctx->pc = 0x300E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E24u;
            // 0x300e28: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E2Cu; }
        if (ctx->pc != 0x300E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E2Cu; }
        if (ctx->pc != 0x300E2Cu) { return; }
    }
    ctx->pc = 0x300E2Cu;
label_300e2c:
    // 0x300e2c: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300e2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300e30:
    // 0x300e30: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_300e34:
    if (ctx->pc == 0x300E34u) {
        ctx->pc = 0x300E34u;
            // 0x300e34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x300E38u;
        goto label_300e38;
    }
    ctx->pc = 0x300E30u;
    {
        const bool branch_taken_0x300e30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300e30) {
            ctx->pc = 0x300E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300E30u;
            // 0x300e34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300E44u;
            goto label_300e44;
        }
    }
    ctx->pc = 0x300E38u;
label_300e38:
    // 0x300e38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300e3c:
    // 0x300e3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_300e40:
    if (ctx->pc == 0x300E40u) {
        ctx->pc = 0x300E40u;
            // 0x300e40: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x300E44u;
        goto label_300e44;
    }
    ctx->pc = 0x300E3Cu;
    {
        const bool branch_taken_0x300e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E3Cu;
            // 0x300e40: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e3c) {
            ctx->pc = 0x300E5Cu;
            goto label_300e5c;
        }
    }
    ctx->pc = 0x300E44u;
label_300e44:
    // 0x300e44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_300e48:
    // 0x300e48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300e4c:
    // 0x300e4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x300e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300e50:
    // 0x300e50: 0x0  nop
    ctx->pc = 0x300e50u;
    // NOP
label_300e54:
    // 0x300e54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x300e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_300e58:
    // 0x300e58: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x300e58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_300e5c:
    // 0x300e5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x300e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_300e60:
    // 0x300e60: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x300e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_300e64:
    // 0x300e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300e68:
    // 0x300e68: 0x0  nop
    ctx->pc = 0x300e68u;
    // NOP
label_300e6c:
    // 0x300e6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x300e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300e70:
    // 0x300e70: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_300e74:
    if (ctx->pc == 0x300E74u) {
        ctx->pc = 0x300E74u;
            // 0x300e74: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300E78u;
        goto label_300e78;
    }
    ctx->pc = 0x300E70u;
    {
        const bool branch_taken_0x300e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300e70) {
            ctx->pc = 0x300E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300E70u;
            // 0x300e74: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x300E88u;
            goto label_300e88;
        }
    }
    ctx->pc = 0x300E78u;
label_300e78:
    // 0x300e78: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300e78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300e7c:
    // 0x300e7c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300e7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300e80:
    // 0x300e80: 0x10000007  b           . + 4 + (0x7 << 2)
label_300e84:
    if (ctx->pc == 0x300E84u) {
        ctx->pc = 0x300E84u;
            // 0x300e84: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x300E88u;
        goto label_300e88;
    }
    ctx->pc = 0x300E80u;
    {
        const bool branch_taken_0x300e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E80u;
            // 0x300e84: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e80) {
            ctx->pc = 0x300EA0u;
            goto label_300ea0;
        }
    }
    ctx->pc = 0x300E88u;
label_300e88:
    // 0x300e88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x300e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_300e8c:
    // 0x300e8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300e90:
    // 0x300e90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300e94:
    // 0x300e94: 0x0  nop
    ctx->pc = 0x300e94u;
    // NOP
label_300e98:
    // 0x300e98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300e9c:
    // 0x300e9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_300ea0:
    // 0x300ea0: 0xa2230e3e  sb          $v1, 0xE3E($s1)
    ctx->pc = 0x300ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 3));
label_300ea4:
    // 0x300ea4: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300ea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300ea8:
    // 0x300ea8: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x300ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_300eac:
    // 0x300eac: 0x142000e4  bnez        $at, . + 4 + (0xE4 << 2)
label_300eb0:
    if (ctx->pc == 0x300EB0u) {
        ctx->pc = 0x300EB4u;
        goto label_300eb4;
    }
    ctx->pc = 0x300EACu;
    {
        const bool branch_taken_0x300eac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x300eac) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300EB4u;
label_300eb4:
    // 0x300eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300eb8:
    // 0x300eb8: 0xc077258  jal         func_1DC960
label_300ebc:
    if (ctx->pc == 0x300EBCu) {
        ctx->pc = 0x300EBCu;
            // 0x300ebc: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x300EC0u;
        goto label_300ec0;
    }
    ctx->pc = 0x300EB8u;
    SET_GPR_U32(ctx, 31, 0x300EC0u);
    ctx->pc = 0x300EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EB8u;
            // 0x300ebc: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EC0u; }
        if (ctx->pc != 0x300EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EC0u; }
        if (ctx->pc != 0x300EC0u) { return; }
    }
    ctx->pc = 0x300EC0u;
label_300ec0:
    // 0x300ec0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x300ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ec4:
    // 0x300ec4: 0xc07753c  jal         func_1DD4F0
label_300ec8:
    if (ctx->pc == 0x300EC8u) {
        ctx->pc = 0x300EC8u;
            // 0x300ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300ECCu;
        goto label_300ecc;
    }
    ctx->pc = 0x300EC4u;
    SET_GPR_U32(ctx, 31, 0x300ECCu);
    ctx->pc = 0x300EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EC4u;
            // 0x300ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ECCu; }
        if (ctx->pc != 0x300ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ECCu; }
        if (ctx->pc != 0x300ECCu) { return; }
    }
    ctx->pc = 0x300ECCu;
label_300ecc:
    // 0x300ecc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x300eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ed0:
    // 0x300ed0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x300ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300ed4:
    // 0x300ed4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300ed8:
    // 0x300ed8: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x300ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_300edc:
    // 0x300edc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x300edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_300ee0:
    // 0x300ee0: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x300ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_300ee4:
    // 0x300ee4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300ee8:
    // 0x300ee8: 0xc0bb404  jal         func_2ED010
label_300eec:
    if (ctx->pc == 0x300EECu) {
        ctx->pc = 0x300EECu;
            // 0x300eec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x300EF0u;
        goto label_300ef0;
    }
    ctx->pc = 0x300EE8u;
    SET_GPR_U32(ctx, 31, 0x300EF0u);
    ctx->pc = 0x300EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EE8u;
            // 0x300eec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EF0u; }
        if (ctx->pc != 0x300EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EF0u; }
        if (ctx->pc != 0x300EF0u) { return; }
    }
    ctx->pc = 0x300EF0u;
label_300ef0:
    // 0x300ef0: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_300ef4:
    if (ctx->pc == 0x300EF4u) {
        ctx->pc = 0x300EF8u;
        goto label_300ef8;
    }
    ctx->pc = 0x300EF0u;
    {
        const bool branch_taken_0x300ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ef0) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300EF8u;
label_300ef8:
    // 0x300ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300efc:
    // 0x300efc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x300efcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_300f00:
    // 0x300f00: 0x5062004f  beql        $v1, $v0, . + 4 + (0x4F << 2)
label_300f04:
    if (ctx->pc == 0x300F04u) {
        ctx->pc = 0x300F04u;
            // 0x300f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300F08u;
        goto label_300f08;
    }
    ctx->pc = 0x300F00u;
    {
        const bool branch_taken_0x300f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300f00) {
            ctx->pc = 0x300F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300F00u;
            // 0x300f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301040u;
            goto label_301040;
        }
    }
    ctx->pc = 0x300F08u;
label_300f08:
    // 0x300f08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_300f0c:
    if (ctx->pc == 0x300F0Cu) {
        ctx->pc = 0x300F10u;
        goto label_300f10;
    }
    ctx->pc = 0x300F08u;
    {
        const bool branch_taken_0x300f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300f08) {
            ctx->pc = 0x300F18u;
            goto label_300f18;
        }
    }
    ctx->pc = 0x300F10u;
label_300f10:
    // 0x300f10: 0x100000cb  b           . + 4 + (0xCB << 2)
label_300f14:
    if (ctx->pc == 0x300F14u) {
        ctx->pc = 0x300F18u;
        goto label_300f18;
    }
    ctx->pc = 0x300F10u;
    {
        const bool branch_taken_0x300f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300f10) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300F18u;
label_300f18:
    // 0x300f18: 0xc0775b8  jal         func_1DD6E0
label_300f1c:
    if (ctx->pc == 0x300F1Cu) {
        ctx->pc = 0x300F20u;
        goto label_300f20;
    }
    ctx->pc = 0x300F18u;
    SET_GPR_U32(ctx, 31, 0x300F20u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F20u; }
        if (ctx->pc != 0x300F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F20u; }
        if (ctx->pc != 0x300F20u) { return; }
    }
    ctx->pc = 0x300F20u;
label_300f20:
    // 0x300f20: 0xc0775b4  jal         func_1DD6D0
label_300f24:
    if (ctx->pc == 0x300F24u) {
        ctx->pc = 0x300F24u;
            // 0x300f24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x300F28u;
        goto label_300f28;
    }
    ctx->pc = 0x300F20u;
    SET_GPR_U32(ctx, 31, 0x300F28u);
    ctx->pc = 0x300F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300F20u;
            // 0x300f24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F28u; }
        if (ctx->pc != 0x300F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F28u; }
        if (ctx->pc != 0x300F28u) { return; }
    }
    ctx->pc = 0x300F28u;
label_300f28:
    // 0x300f28: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300f28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300f2c:
    // 0x300f2c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_300f30:
    if (ctx->pc == 0x300F30u) {
        ctx->pc = 0x300F30u;
            // 0x300f30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x300F34u;
        goto label_300f34;
    }
    ctx->pc = 0x300F2Cu;
    {
        const bool branch_taken_0x300f2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300f2c) {
            ctx->pc = 0x300F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300F2Cu;
            // 0x300f30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300F40u;
            goto label_300f40;
        }
    }
    ctx->pc = 0x300F34u;
label_300f34:
    // 0x300f34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x300f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300f38:
    // 0x300f38: 0x10000007  b           . + 4 + (0x7 << 2)
label_300f3c:
    if (ctx->pc == 0x300F3Cu) {
        ctx->pc = 0x300F3Cu;
            // 0x300f3c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x300F40u;
        goto label_300f40;
    }
    ctx->pc = 0x300F38u;
    {
        const bool branch_taken_0x300f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300F38u;
            // 0x300f3c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f38) {
            ctx->pc = 0x300F58u;
            goto label_300f58;
        }
    }
    ctx->pc = 0x300F40u;
label_300f40:
    // 0x300f40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x300f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_300f44:
    // 0x300f44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300f48:
    // 0x300f48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x300f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_300f4c:
    // 0x300f4c: 0x0  nop
    ctx->pc = 0x300f4cu;
    // NOP
label_300f50:
    // 0x300f50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x300f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_300f54:
    // 0x300f54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x300f54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_300f58:
    // 0x300f58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x300f58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_300f5c:
    // 0x300f5c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x300f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_300f60:
    // 0x300f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300f64:
    // 0x300f64: 0x0  nop
    ctx->pc = 0x300f64u;
    // NOP
label_300f68:
    // 0x300f68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x300f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_300f6c:
    // 0x300f6c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_300f70:
    if (ctx->pc == 0x300F70u) {
        ctx->pc = 0x300F70u;
            // 0x300f70: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x300F74u;
        goto label_300f74;
    }
    ctx->pc = 0x300F6Cu;
    {
        const bool branch_taken_0x300f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x300f6c) {
            ctx->pc = 0x300F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300F6Cu;
            // 0x300f70: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x300F84u;
            goto label_300f84;
        }
    }
    ctx->pc = 0x300F74u;
label_300f74:
    // 0x300f74: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300f74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300f78:
    // 0x300f78: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300f7c:
    // 0x300f7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_300f80:
    if (ctx->pc == 0x300F80u) {
        ctx->pc = 0x300F80u;
            // 0x300f80: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x300F84u;
        goto label_300f84;
    }
    ctx->pc = 0x300F7Cu;
    {
        const bool branch_taken_0x300f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300F7Cu;
            // 0x300f80: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f7c) {
            ctx->pc = 0x300F9Cu;
            goto label_300f9c;
        }
    }
    ctx->pc = 0x300F84u;
label_300f84:
    // 0x300f84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x300f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_300f88:
    // 0x300f88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300f88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_300f8c:
    // 0x300f8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x300f8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_300f90:
    // 0x300f90: 0x0  nop
    ctx->pc = 0x300f90u;
    // NOP
label_300f94:
    // 0x300f94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x300f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_300f98:
    // 0x300f98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x300f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_300f9c:
    // 0x300f9c: 0xa2230e3e  sb          $v1, 0xE3E($s1)
    ctx->pc = 0x300f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 3));
label_300fa0:
    // 0x300fa0: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300fa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300fa4:
    // 0x300fa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x300fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_300fa8:
    // 0x300fa8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_300fac:
    if (ctx->pc == 0x300FACu) {
        ctx->pc = 0x300FACu;
            // 0x300fac: 0x92220e3e  lbu         $v0, 0xE3E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
        ctx->pc = 0x300FB0u;
        goto label_300fb0;
    }
    ctx->pc = 0x300FA8u;
    {
        const bool branch_taken_0x300fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300fa8) {
            ctx->pc = 0x300FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300FA8u;
            // 0x300fac: 0x92220e3e  lbu         $v0, 0xE3E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300FECu;
            goto label_300fec;
        }
    }
    ctx->pc = 0x300FB0u;
label_300fb0:
    // 0x300fb0: 0xc077258  jal         func_1DC960
label_300fb4:
    if (ctx->pc == 0x300FB4u) {
        ctx->pc = 0x300FB4u;
            // 0x300fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FB8u;
        goto label_300fb8;
    }
    ctx->pc = 0x300FB0u;
    SET_GPR_U32(ctx, 31, 0x300FB8u);
    ctx->pc = 0x300FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FB0u;
            // 0x300fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FB8u; }
        if (ctx->pc != 0x300FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FB8u; }
        if (ctx->pc != 0x300FB8u) { return; }
    }
    ctx->pc = 0x300FB8u;
label_300fb8:
    // 0x300fb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x300fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300fbc:
    // 0x300fbc: 0xc07753c  jal         func_1DD4F0
label_300fc0:
    if (ctx->pc == 0x300FC0u) {
        ctx->pc = 0x300FC0u;
            // 0x300fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FC4u;
        goto label_300fc4;
    }
    ctx->pc = 0x300FBCu;
    SET_GPR_U32(ctx, 31, 0x300FC4u);
    ctx->pc = 0x300FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FBCu;
            // 0x300fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FC4u; }
        if (ctx->pc != 0x300FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FC4u; }
        if (ctx->pc != 0x300FC4u) { return; }
    }
    ctx->pc = 0x300FC4u;
label_300fc4:
    // 0x300fc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x300fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300fc8:
    // 0x300fc8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x300fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300fcc:
    // 0x300fcc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x300fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_300fd0:
    // 0x300fd0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x300fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_300fd4:
    // 0x300fd4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x300fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_300fd8:
    // 0x300fd8: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x300fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_300fdc:
    // 0x300fdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300fe0:
    // 0x300fe0: 0xc0bb404  jal         func_2ED010
label_300fe4:
    if (ctx->pc == 0x300FE4u) {
        ctx->pc = 0x300FE4u;
            // 0x300fe4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x300FE8u;
        goto label_300fe8;
    }
    ctx->pc = 0x300FE0u;
    SET_GPR_U32(ctx, 31, 0x300FE8u);
    ctx->pc = 0x300FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FE0u;
            // 0x300fe4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FE8u; }
        if (ctx->pc != 0x300FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FE8u; }
        if (ctx->pc != 0x300FE8u) { return; }
    }
    ctx->pc = 0x300FE8u;
label_300fe8:
    // 0x300fe8: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x300fe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_300fec:
    // 0x300fec: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x300fecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
label_300ff0:
    // 0x300ff0: 0x14200093  bnez        $at, . + 4 + (0x93 << 2)
label_300ff4:
    if (ctx->pc == 0x300FF4u) {
        ctx->pc = 0x300FF8u;
        goto label_300ff8;
    }
    ctx->pc = 0x300FF0u;
    {
        const bool branch_taken_0x300ff0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x300ff0) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x300FF8u;
label_300ff8:
    // 0x300ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300ffc:
    // 0x300ffc: 0xc07732c  jal         func_1DCCB0
label_301000:
    if (ctx->pc == 0x301000u) {
        ctx->pc = 0x301000u;
            // 0x301000: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x301004u;
        goto label_301004;
    }
    ctx->pc = 0x300FFCu;
    SET_GPR_U32(ctx, 31, 0x301004u);
    ctx->pc = 0x301000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300FFCu;
            // 0x301000: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301004u; }
        if (ctx->pc != 0x301004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301004u; }
        if (ctx->pc != 0x301004u) { return; }
    }
    ctx->pc = 0x301004u;
label_301004:
    // 0x301004: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
label_301008:
    if (ctx->pc == 0x301008u) {
        ctx->pc = 0x30100Cu;
        goto label_30100c;
    }
    ctx->pc = 0x301004u;
    {
        const bool branch_taken_0x301004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301004) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x30100Cu;
label_30100c:
    // 0x30100c: 0xc077324  jal         func_1DCC90
label_301010:
    if (ctx->pc == 0x301010u) {
        ctx->pc = 0x301010u;
            // 0x301010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301014u;
        goto label_301014;
    }
    ctx->pc = 0x30100Cu;
    SET_GPR_U32(ctx, 31, 0x301014u);
    ctx->pc = 0x301010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30100Cu;
            // 0x301010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301014u; }
        if (ctx->pc != 0x301014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301014u; }
        if (ctx->pc != 0x301014u) { return; }
    }
    ctx->pc = 0x301014u;
label_301014:
    // 0x301014: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x301014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_301018:
    // 0x301018: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x301018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30101c:
    // 0x30101c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_301020:
    // 0x301020: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x301020u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_301024:
    // 0x301024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301028:
    // 0x301028: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30102c:
    // 0x30102c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x30102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_301030:
    // 0x301030: 0xc077554  jal         func_1DD550
label_301034:
    if (ctx->pc == 0x301034u) {
        ctx->pc = 0x301034u;
            // 0x301034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301038u;
        goto label_301038;
    }
    ctx->pc = 0x301030u;
    SET_GPR_U32(ctx, 31, 0x301038u);
    ctx->pc = 0x301034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301030u;
            // 0x301034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301038u; }
        if (ctx->pc != 0x301038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301038u; }
        if (ctx->pc != 0x301038u) { return; }
    }
    ctx->pc = 0x301038u;
label_301038:
    // 0x301038: 0x10000081  b           . + 4 + (0x81 << 2)
label_30103c:
    if (ctx->pc == 0x30103Cu) {
        ctx->pc = 0x301040u;
        goto label_301040;
    }
    ctx->pc = 0x301038u;
    {
        const bool branch_taken_0x301038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301038) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x301040u;
label_301040:
    // 0x301040: 0xc0c055c  jal         func_301570
label_301044:
    if (ctx->pc == 0x301044u) {
        ctx->pc = 0x301048u;
        goto label_301048;
    }
    ctx->pc = 0x301040u;
    SET_GPR_U32(ctx, 31, 0x301048u);
    ctx->pc = 0x301570u;
    if (runtime->hasFunction(0x301570u)) {
        auto targetFn = runtime->lookupFunction(0x301570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301048u; }
        if (ctx->pc != 0x301048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301570_0x301570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301048u; }
        if (ctx->pc != 0x301048u) { return; }
    }
    ctx->pc = 0x301048u;
label_301048:
    // 0x301048: 0x1000007d  b           . + 4 + (0x7D << 2)
label_30104c:
    if (ctx->pc == 0x30104Cu) {
        ctx->pc = 0x301050u;
        goto label_301050;
    }
    ctx->pc = 0x301048u;
    {
        const bool branch_taken_0x301048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301048) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x301050u;
label_301050:
    // 0x301050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301054:
    // 0x301054: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x301054u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_301058:
    // 0x301058: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_30105c:
    if (ctx->pc == 0x30105Cu) {
        ctx->pc = 0x301060u;
        goto label_301060;
    }
    ctx->pc = 0x301058u;
    {
        const bool branch_taken_0x301058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x301058) {
            ctx->pc = 0x301080u;
            goto label_301080;
        }
    }
    ctx->pc = 0x301060u;
label_301060:
    // 0x301060: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_301064:
    if (ctx->pc == 0x301064u) {
        ctx->pc = 0x301064u;
            // 0x301064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301068u;
        goto label_301068;
    }
    ctx->pc = 0x301060u;
    {
        const bool branch_taken_0x301060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301060) {
            ctx->pc = 0x301064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301060u;
            // 0x301064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301070u;
            goto label_301070;
        }
    }
    ctx->pc = 0x301068u;
label_301068:
    // 0x301068: 0x10000075  b           . + 4 + (0x75 << 2)
label_30106c:
    if (ctx->pc == 0x30106Cu) {
        ctx->pc = 0x301070u;
        goto label_301070;
    }
    ctx->pc = 0x301068u;
    {
        const bool branch_taken_0x301068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301068) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x301070u;
label_301070:
    // 0x301070: 0xc0c055c  jal         func_301570
label_301074:
    if (ctx->pc == 0x301074u) {
        ctx->pc = 0x301078u;
        goto label_301078;
    }
    ctx->pc = 0x301070u;
    SET_GPR_U32(ctx, 31, 0x301078u);
    ctx->pc = 0x301570u;
    if (runtime->hasFunction(0x301570u)) {
        auto targetFn = runtime->lookupFunction(0x301570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301078u; }
        if (ctx->pc != 0x301078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301570_0x301570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301078u; }
        if (ctx->pc != 0x301078u) { return; }
    }
    ctx->pc = 0x301078u;
label_301078:
    // 0x301078: 0x10000071  b           . + 4 + (0x71 << 2)
label_30107c:
    if (ctx->pc == 0x30107Cu) {
        ctx->pc = 0x301080u;
        goto label_301080;
    }
    ctx->pc = 0x301078u;
    {
        const bool branch_taken_0x301078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301078) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x301080u;
label_301080:
    // 0x301080: 0xc0775b8  jal         func_1DD6E0
label_301084:
    if (ctx->pc == 0x301084u) {
        ctx->pc = 0x301088u;
        goto label_301088;
    }
    ctx->pc = 0x301080u;
    SET_GPR_U32(ctx, 31, 0x301088u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301088u; }
        if (ctx->pc != 0x301088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301088u; }
        if (ctx->pc != 0x301088u) { return; }
    }
    ctx->pc = 0x301088u;
label_301088:
    // 0x301088: 0xc0775b4  jal         func_1DD6D0
label_30108c:
    if (ctx->pc == 0x30108Cu) {
        ctx->pc = 0x30108Cu;
            // 0x30108c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x301090u;
        goto label_301090;
    }
    ctx->pc = 0x301088u;
    SET_GPR_U32(ctx, 31, 0x301090u);
    ctx->pc = 0x30108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301088u;
            // 0x30108c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301090u; }
        if (ctx->pc != 0x301090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301090u; }
        if (ctx->pc != 0x301090u) { return; }
    }
    ctx->pc = 0x301090u;
label_301090:
    // 0x301090: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x301090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_301094:
    // 0x301094: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_301098:
    if (ctx->pc == 0x301098u) {
        ctx->pc = 0x301098u;
            // 0x301098: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30109Cu;
        goto label_30109c;
    }
    ctx->pc = 0x301094u;
    {
        const bool branch_taken_0x301094 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x301094) {
            ctx->pc = 0x301098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301094u;
            // 0x301098: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3010A8u;
            goto label_3010a8;
        }
    }
    ctx->pc = 0x30109Cu;
label_30109c:
    // 0x30109c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30109cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3010a0:
    // 0x3010a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3010a4:
    if (ctx->pc == 0x3010A4u) {
        ctx->pc = 0x3010A4u;
            // 0x3010a4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3010A8u;
        goto label_3010a8;
    }
    ctx->pc = 0x3010A0u;
    {
        const bool branch_taken_0x3010a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3010A0u;
            // 0x3010a4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010a0) {
            ctx->pc = 0x3010C0u;
            goto label_3010c0;
        }
    }
    ctx->pc = 0x3010A8u;
label_3010a8:
    // 0x3010a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3010a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3010ac:
    // 0x3010ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3010acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3010b0:
    // 0x3010b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3010b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3010b4:
    // 0x3010b4: 0x0  nop
    ctx->pc = 0x3010b4u;
    // NOP
label_3010b8:
    // 0x3010b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3010b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3010bc:
    // 0x3010bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3010bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3010c0:
    // 0x3010c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3010c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3010c4:
    // 0x3010c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3010c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3010c8:
    // 0x3010c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3010c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3010cc:
    // 0x3010cc: 0x0  nop
    ctx->pc = 0x3010ccu;
    // NOP
label_3010d0:
    // 0x3010d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3010d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3010d4:
    // 0x3010d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3010d8:
    if (ctx->pc == 0x3010D8u) {
        ctx->pc = 0x3010D8u;
            // 0x3010d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3010DCu;
        goto label_3010dc;
    }
    ctx->pc = 0x3010D4u;
    {
        const bool branch_taken_0x3010d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3010d4) {
            ctx->pc = 0x3010D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3010D4u;
            // 0x3010d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3010ECu;
            goto label_3010ec;
        }
    }
    ctx->pc = 0x3010DCu;
label_3010dc:
    // 0x3010dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3010dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3010e0:
    // 0x3010e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3010e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3010e4:
    // 0x3010e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3010e8:
    if (ctx->pc == 0x3010E8u) {
        ctx->pc = 0x3010E8u;
            // 0x3010e8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3010ECu;
        goto label_3010ec;
    }
    ctx->pc = 0x3010E4u;
    {
        const bool branch_taken_0x3010e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3010E4u;
            // 0x3010e8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010e4) {
            ctx->pc = 0x301104u;
            goto label_301104;
        }
    }
    ctx->pc = 0x3010ECu;
label_3010ec:
    // 0x3010ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3010ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3010f0:
    // 0x3010f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3010f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3010f4:
    // 0x3010f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3010f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3010f8:
    // 0x3010f8: 0x0  nop
    ctx->pc = 0x3010f8u;
    // NOP
label_3010fc:
    // 0x3010fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3010fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_301100:
    // 0x301100: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x301100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_301104:
    // 0x301104: 0xa2230e3e  sb          $v1, 0xE3E($s1)
    ctx->pc = 0x301104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 3));
label_301108:
    // 0x301108: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x301108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_30110c:
    // 0x30110c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x30110cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_301110:
    // 0x301110: 0x1420004b  bnez        $at, . + 4 + (0x4B << 2)
label_301114:
    if (ctx->pc == 0x301114u) {
        ctx->pc = 0x301118u;
        goto label_301118;
    }
    ctx->pc = 0x301110u;
    {
        const bool branch_taken_0x301110 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x301110) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x301118u;
label_301118:
    // 0x301118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30111c:
    // 0x30111c: 0xc077258  jal         func_1DC960
label_301120:
    if (ctx->pc == 0x301120u) {
        ctx->pc = 0x301120u;
            // 0x301120: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x301124u;
        goto label_301124;
    }
    ctx->pc = 0x30111Cu;
    SET_GPR_U32(ctx, 31, 0x301124u);
    ctx->pc = 0x301120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30111Cu;
            // 0x301120: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301124u; }
        if (ctx->pc != 0x301124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301124u; }
        if (ctx->pc != 0x301124u) { return; }
    }
    ctx->pc = 0x301124u;
label_301124:
    // 0x301124: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x301124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301128:
    // 0x301128: 0xc07753c  jal         func_1DD4F0
label_30112c:
    if (ctx->pc == 0x30112Cu) {
        ctx->pc = 0x30112Cu;
            // 0x30112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301130u;
        goto label_301130;
    }
    ctx->pc = 0x301128u;
    SET_GPR_U32(ctx, 31, 0x301130u);
    ctx->pc = 0x30112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301128u;
            // 0x30112c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301130u; }
        if (ctx->pc != 0x301130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301130u; }
        if (ctx->pc != 0x301130u) { return; }
    }
    ctx->pc = 0x301130u;
label_301130:
    // 0x301130: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x301130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301134:
    // 0x301134: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x301134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301138:
    // 0x301138: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30113c:
    // 0x30113c: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x30113cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_301140:
    // 0x301140: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x301140u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_301144:
    // 0x301144: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x301144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_301148:
    // 0x301148: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30114c:
    // 0x30114c: 0xc0bb404  jal         func_2ED010
label_301150:
    if (ctx->pc == 0x301150u) {
        ctx->pc = 0x301150u;
            // 0x301150: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x301154u;
        goto label_301154;
    }
    ctx->pc = 0x30114Cu;
    SET_GPR_U32(ctx, 31, 0x301154u);
    ctx->pc = 0x301150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30114Cu;
            // 0x301150: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301154u; }
        if (ctx->pc != 0x301154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301154u; }
        if (ctx->pc != 0x301154u) { return; }
    }
    ctx->pc = 0x301154u;
label_301154:
    // 0x301154: 0x1000003a  b           . + 4 + (0x3A << 2)
label_301158:
    if (ctx->pc == 0x301158u) {
        ctx->pc = 0x30115Cu;
        goto label_30115c;
    }
    ctx->pc = 0x301154u;
    {
        const bool branch_taken_0x301154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301154) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x30115Cu;
label_30115c:
    // 0x30115c: 0xc0775b8  jal         func_1DD6E0
label_301160:
    if (ctx->pc == 0x301160u) {
        ctx->pc = 0x301164u;
        goto label_301164;
    }
    ctx->pc = 0x30115Cu;
    SET_GPR_U32(ctx, 31, 0x301164u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301164u; }
        if (ctx->pc != 0x301164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301164u; }
        if (ctx->pc != 0x301164u) { return; }
    }
    ctx->pc = 0x301164u;
label_301164:
    // 0x301164: 0xc0775b4  jal         func_1DD6D0
label_301168:
    if (ctx->pc == 0x301168u) {
        ctx->pc = 0x301168u;
            // 0x301168: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x30116Cu;
        goto label_30116c;
    }
    ctx->pc = 0x301164u;
    SET_GPR_U32(ctx, 31, 0x30116Cu);
    ctx->pc = 0x301168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301164u;
            // 0x301168: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30116Cu; }
        if (ctx->pc != 0x30116Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30116Cu; }
        if (ctx->pc != 0x30116Cu) { return; }
    }
    ctx->pc = 0x30116Cu;
label_30116c:
    // 0x30116c: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x30116cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_301170:
    // 0x301170: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_301174:
    if (ctx->pc == 0x301174u) {
        ctx->pc = 0x301174u;
            // 0x301174: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x301178u;
        goto label_301178;
    }
    ctx->pc = 0x301170u;
    {
        const bool branch_taken_0x301170 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x301170) {
            ctx->pc = 0x301174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301170u;
            // 0x301174: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301184u;
            goto label_301184;
        }
    }
    ctx->pc = 0x301178u;
label_301178:
    // 0x301178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30117c:
    // 0x30117c: 0x10000007  b           . + 4 + (0x7 << 2)
label_301180:
    if (ctx->pc == 0x301180u) {
        ctx->pc = 0x301180u;
            // 0x301180: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x301184u;
        goto label_301184;
    }
    ctx->pc = 0x30117Cu;
    {
        const bool branch_taken_0x30117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30117Cu;
            // 0x301180: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30117c) {
            ctx->pc = 0x30119Cu;
            goto label_30119c;
        }
    }
    ctx->pc = 0x301184u;
label_301184:
    // 0x301184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_301188:
    // 0x301188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x301188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30118c:
    // 0x30118c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30118cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_301190:
    // 0x301190: 0x0  nop
    ctx->pc = 0x301190u;
    // NOP
label_301194:
    // 0x301194: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x301194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_301198:
    // 0x301198: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x301198u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_30119c:
    // 0x30119c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30119cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3011a0:
    // 0x3011a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3011a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3011a4:
    // 0x3011a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3011a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3011a8:
    // 0x3011a8: 0x0  nop
    ctx->pc = 0x3011a8u;
    // NOP
label_3011ac:
    // 0x3011ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3011acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3011b0:
    // 0x3011b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3011b4:
    if (ctx->pc == 0x3011B4u) {
        ctx->pc = 0x3011B4u;
            // 0x3011b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3011B8u;
        goto label_3011b8;
    }
    ctx->pc = 0x3011B0u;
    {
        const bool branch_taken_0x3011b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3011b0) {
            ctx->pc = 0x3011B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3011B0u;
            // 0x3011b4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3011C8u;
            goto label_3011c8;
        }
    }
    ctx->pc = 0x3011B8u;
label_3011b8:
    // 0x3011b8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3011b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3011bc:
    // 0x3011bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3011bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3011c0:
    // 0x3011c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3011c4:
    if (ctx->pc == 0x3011C4u) {
        ctx->pc = 0x3011C4u;
            // 0x3011c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3011C8u;
        goto label_3011c8;
    }
    ctx->pc = 0x3011C0u;
    {
        const bool branch_taken_0x3011c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3011C0u;
            // 0x3011c4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011c0) {
            ctx->pc = 0x3011E0u;
            goto label_3011e0;
        }
    }
    ctx->pc = 0x3011C8u;
label_3011c8:
    // 0x3011c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3011c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3011cc:
    // 0x3011cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3011ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3011d0:
    // 0x3011d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3011d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3011d4:
    // 0x3011d4: 0x0  nop
    ctx->pc = 0x3011d4u;
    // NOP
label_3011d8:
    // 0x3011d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3011d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3011dc:
    // 0x3011dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3011dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3011e0:
    // 0x3011e0: 0xa2230e3e  sb          $v1, 0xE3E($s1)
    ctx->pc = 0x3011e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 3));
label_3011e4:
    // 0x3011e4: 0x92220e3e  lbu         $v0, 0xE3E($s1)
    ctx->pc = 0x3011e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3646)));
label_3011e8:
    // 0x3011e8: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x3011e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_3011ec:
    // 0x3011ec: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_3011f0:
    if (ctx->pc == 0x3011F0u) {
        ctx->pc = 0x3011F4u;
        goto label_3011f4;
    }
    ctx->pc = 0x3011ECu;
    {
        const bool branch_taken_0x3011ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3011ec) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x3011F4u;
label_3011f4:
    // 0x3011f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3011f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3011f8:
    // 0x3011f8: 0xc077258  jal         func_1DC960
label_3011fc:
    if (ctx->pc == 0x3011FCu) {
        ctx->pc = 0x3011FCu;
            // 0x3011fc: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x301200u;
        goto label_301200;
    }
    ctx->pc = 0x3011F8u;
    SET_GPR_U32(ctx, 31, 0x301200u);
    ctx->pc = 0x3011FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3011F8u;
            // 0x3011fc: 0xa2200e3e  sb          $zero, 0xE3E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301200u; }
        if (ctx->pc != 0x301200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301200u; }
        if (ctx->pc != 0x301200u) { return; }
    }
    ctx->pc = 0x301200u;
label_301200:
    // 0x301200: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x301200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301204:
    // 0x301204: 0xc07753c  jal         func_1DD4F0
label_301208:
    if (ctx->pc == 0x301208u) {
        ctx->pc = 0x301208u;
            // 0x301208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30120Cu;
        goto label_30120c;
    }
    ctx->pc = 0x301204u;
    SET_GPR_U32(ctx, 31, 0x30120Cu);
    ctx->pc = 0x301208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301204u;
            // 0x301208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30120Cu; }
        if (ctx->pc != 0x30120Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30120Cu; }
        if (ctx->pc != 0x30120Cu) { return; }
    }
    ctx->pc = 0x30120Cu;
label_30120c:
    // 0x30120c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30120cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301210:
    // 0x301210: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x301210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301214:
    // 0x301214: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_301218:
    // 0x301218: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x301218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_30121c:
    // 0x30121c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x30121cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_301220:
    // 0x301220: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x301220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_301224:
    // 0x301224: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301228:
    // 0x301228: 0xc0bb404  jal         func_2ED010
label_30122c:
    if (ctx->pc == 0x30122Cu) {
        ctx->pc = 0x30122Cu;
            // 0x30122c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x301230u;
        goto label_301230;
    }
    ctx->pc = 0x301228u;
    SET_GPR_U32(ctx, 31, 0x301230u);
    ctx->pc = 0x30122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301228u;
            // 0x30122c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301230u; }
        if (ctx->pc != 0x301230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301230u; }
        if (ctx->pc != 0x301230u) { return; }
    }
    ctx->pc = 0x301230u;
label_301230:
    // 0x301230: 0x10000003  b           . + 4 + (0x3 << 2)
label_301234:
    if (ctx->pc == 0x301234u) {
        ctx->pc = 0x301238u;
        goto label_301238;
    }
    ctx->pc = 0x301230u;
    {
        const bool branch_taken_0x301230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301230) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x301238u;
label_301238:
    // 0x301238: 0xc0c055c  jal         func_301570
label_30123c:
    if (ctx->pc == 0x30123Cu) {
        ctx->pc = 0x301240u;
        goto label_301240;
    }
    ctx->pc = 0x301238u;
    SET_GPR_U32(ctx, 31, 0x301240u);
    ctx->pc = 0x301570u;
    if (runtime->hasFunction(0x301570u)) {
        auto targetFn = runtime->lookupFunction(0x301570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301240u; }
        if (ctx->pc != 0x301240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301570_0x301570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301240u; }
        if (ctx->pc != 0x301240u) { return; }
    }
    ctx->pc = 0x301240u;
label_301240:
    // 0x301240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301244:
    // 0x301244: 0xc0772f0  jal         func_1DCBC0
label_301248:
    if (ctx->pc == 0x301248u) {
        ctx->pc = 0x30124Cu;
        goto label_30124c;
    }
    ctx->pc = 0x301244u;
    SET_GPR_U32(ctx, 31, 0x30124Cu);
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30124Cu; }
        if (ctx->pc != 0x30124Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30124Cu; }
        if (ctx->pc != 0x30124Cu) { return; }
    }
    ctx->pc = 0x30124Cu;
label_30124c:
    // 0x30124c: 0xc0c0558  jal         func_301560
label_301250:
    if (ctx->pc == 0x301250u) {
        ctx->pc = 0x301250u;
            // 0x301250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301254u;
        goto label_301254;
    }
    ctx->pc = 0x30124Cu;
    SET_GPR_U32(ctx, 31, 0x301254u);
    ctx->pc = 0x301250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30124Cu;
            // 0x301250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301560u;
    if (runtime->hasFunction(0x301560u)) {
        auto targetFn = runtime->lookupFunction(0x301560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301254u; }
        if (ctx->pc != 0x301254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301560_0x301560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301254u; }
        if (ctx->pc != 0x301254u) { return; }
    }
    ctx->pc = 0x301254u;
label_301254:
    // 0x301254: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x301254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301258:
    // 0x301258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x301258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30125c:
    // 0x30125c: 0x0  nop
    ctx->pc = 0x30125cu;
    // NOP
label_301260:
    // 0x301260: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301264:
    // 0x301264: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_301268:
    if (ctx->pc == 0x301268u) {
        ctx->pc = 0x30126Cu;
        goto label_30126c;
    }
    ctx->pc = 0x301264u;
    {
        const bool branch_taken_0x301264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301264) {
            ctx->pc = 0x3012DCu;
            goto label_3012dc;
        }
    }
    ctx->pc = 0x30126Cu;
label_30126c:
    // 0x30126c: 0xc0775b8  jal         func_1DD6E0
label_301270:
    if (ctx->pc == 0x301270u) {
        ctx->pc = 0x301274u;
        goto label_301274;
    }
    ctx->pc = 0x30126Cu;
    SET_GPR_U32(ctx, 31, 0x301274u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301274u; }
        if (ctx->pc != 0x301274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301274u; }
        if (ctx->pc != 0x301274u) { return; }
    }
    ctx->pc = 0x301274u;
label_301274:
    // 0x301274: 0xc0775b4  jal         func_1DD6D0
label_301278:
    if (ctx->pc == 0x301278u) {
        ctx->pc = 0x301278u;
            // 0x301278: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x30127Cu;
        goto label_30127c;
    }
    ctx->pc = 0x301274u;
    SET_GPR_U32(ctx, 31, 0x30127Cu);
    ctx->pc = 0x301278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301274u;
            // 0x301278: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30127Cu; }
        if (ctx->pc != 0x30127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30127Cu; }
        if (ctx->pc != 0x30127Cu) { return; }
    }
    ctx->pc = 0x30127Cu;
label_30127c:
    // 0x30127c: 0xc62211e4  lwc1        $f2, 0x11E4($s1)
    ctx->pc = 0x30127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_301280:
    // 0x301280: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x301280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_301284:
    // 0x301284: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x301284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_301288:
    // 0x301288: 0x0  nop
    ctx->pc = 0x301288u;
    // NOP
label_30128c:
    // 0x30128c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x30128cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_301290:
    // 0x301290: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x301290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_301294:
    // 0x301294: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_301298:
    if (ctx->pc == 0x301298u) {
        ctx->pc = 0x301298u;
            // 0x301298: 0xe62011e4  swc1        $f0, 0x11E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4580), bits); }
        ctx->pc = 0x30129Cu;
        goto label_30129c;
    }
    ctx->pc = 0x301294u;
    {
        const bool branch_taken_0x301294 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x301298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301294u;
            // 0x301298: 0xe62011e4  swc1        $f0, 0x11E4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301294) {
            ctx->pc = 0x3012DCu;
            goto label_3012dc;
        }
    }
    ctx->pc = 0x30129Cu;
label_30129c:
    // 0x30129c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3012a0:
    // 0x3012a0: 0xc077258  jal         func_1DC960
label_3012a4:
    if (ctx->pc == 0x3012A4u) {
        ctx->pc = 0x3012A4u;
            // 0x3012a4: 0xae2011e4  sw          $zero, 0x11E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4580), GPR_U32(ctx, 0));
        ctx->pc = 0x3012A8u;
        goto label_3012a8;
    }
    ctx->pc = 0x3012A0u;
    SET_GPR_U32(ctx, 31, 0x3012A8u);
    ctx->pc = 0x3012A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3012A0u;
            // 0x3012a4: 0xae2011e4  sw          $zero, 0x11E4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012A8u; }
        if (ctx->pc != 0x3012A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012A8u; }
        if (ctx->pc != 0x3012A8u) { return; }
    }
    ctx->pc = 0x3012A8u;
label_3012a8:
    // 0x3012a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3012a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3012ac:
    // 0x3012ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3012acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3012b0:
    // 0x3012b0: 0xc0c0550  jal         func_301540
label_3012b4:
    if (ctx->pc == 0x3012B4u) {
        ctx->pc = 0x3012B4u;
            // 0x3012b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3012B8u;
        goto label_3012b8;
    }
    ctx->pc = 0x3012B0u;
    SET_GPR_U32(ctx, 31, 0x3012B8u);
    ctx->pc = 0x3012B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3012B0u;
            // 0x3012b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301540u;
    if (runtime->hasFunction(0x301540u)) {
        auto targetFn = runtime->lookupFunction(0x301540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012B8u; }
        if (ctx->pc != 0x3012B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301540_0x301540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012B8u; }
        if (ctx->pc != 0x3012B8u) { return; }
    }
    ctx->pc = 0x3012B8u;
label_3012b8:
    // 0x3012b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3012b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3012bc:
    // 0x3012bc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x3012bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3012c0:
    // 0x3012c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3012c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3012c4:
    // 0x3012c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3012c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3012c8:
    // 0x3012c8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3012c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3012cc:
    // 0x3012cc: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x3012ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3012d0:
    // 0x3012d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3012d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3012d4:
    // 0x3012d4: 0xc0bb404  jal         func_2ED010
label_3012d8:
    if (ctx->pc == 0x3012D8u) {
        ctx->pc = 0x3012D8u;
            // 0x3012d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3012DCu;
        goto label_3012dc;
    }
    ctx->pc = 0x3012D4u;
    SET_GPR_U32(ctx, 31, 0x3012DCu);
    ctx->pc = 0x3012D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3012D4u;
            // 0x3012d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012DCu; }
        if (ctx->pc != 0x3012DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012DCu; }
        if (ctx->pc != 0x3012DCu) { return; }
    }
    ctx->pc = 0x3012DCu;
label_3012dc:
    // 0x3012dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3012dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3012e0:
    // 0x3012e0: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3012e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3012e4:
    // 0x3012e4: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x3012e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_3012e8:
    // 0x3012e8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3012e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3012ec:
    // 0x3012ec: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_3012f0:
    if (ctx->pc == 0x3012F0u) {
        ctx->pc = 0x3012F0u;
            // 0x3012f0: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3012F4u;
        goto label_3012f4;
    }
    ctx->pc = 0x3012ECu;
    {
        const bool branch_taken_0x3012ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3012F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3012ECu;
            // 0x3012f0: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012ec) {
            ctx->pc = 0x301350u;
            goto label_301350;
        }
    }
    ctx->pc = 0x3012F4u;
label_3012f4:
    // 0x3012f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3012f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3012f8:
    // 0x3012f8: 0x8c631d98  lw          $v1, 0x1D98($v1)
    ctx->pc = 0x3012f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7576)));
label_3012fc:
    // 0x3012fc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_301300:
    if (ctx->pc == 0x301300u) {
        ctx->pc = 0x301300u;
            // 0x301300: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301304u;
        goto label_301304;
    }
    ctx->pc = 0x3012FCu;
    {
        const bool branch_taken_0x3012fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3012FCu;
            // 0x301300: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012fc) {
            ctx->pc = 0x301350u;
            goto label_301350;
        }
    }
    ctx->pc = 0x301304u;
label_301304:
    // 0x301304: 0x8c720070  lw          $s2, 0x70($v1)
    ctx->pc = 0x301304u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_301308:
    // 0x301308: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x301308u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30130c:
    // 0x30130c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30130cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301310:
    // 0x301310: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x301310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_301314:
    // 0x301314: 0x8c421d98  lw          $v0, 0x1D98($v0)
    ctx->pc = 0x301314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7576)));
label_301318:
    // 0x301318: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x301318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_30131c:
    // 0x30131c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x30131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_301320:
    // 0x301320: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x301320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_301324:
    // 0x301324: 0xc135fd4  jal         func_4D7F50
label_301328:
    if (ctx->pc == 0x301328u) {
        ctx->pc = 0x301328u;
            // 0x301328: 0x86050054  lh          $a1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x30132Cu;
        goto label_30132c;
    }
    ctx->pc = 0x301324u;
    SET_GPR_U32(ctx, 31, 0x30132Cu);
    ctx->pc = 0x301328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301324u;
            // 0x301328: 0x86050054  lh          $a1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7F50u;
    if (runtime->hasFunction(0x4D7F50u)) {
        auto targetFn = runtime->lookupFunction(0x4D7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30132Cu; }
        if (ctx->pc != 0x30132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7F50_0x4d7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30132Cu; }
        if (ctx->pc != 0x30132Cu) { return; }
    }
    ctx->pc = 0x30132Cu;
label_30132c:
    // 0x30132c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x30132cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_301330:
    // 0x301330: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x301330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_301334:
    // 0x301334: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_301338:
    if (ctx->pc == 0x301338u) {
        ctx->pc = 0x301338u;
            // 0x301338: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x30133Cu;
        goto label_30133c;
    }
    ctx->pc = 0x301334u;
    {
        const bool branch_taken_0x301334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301334) {
            ctx->pc = 0x301338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301334u;
            // 0x301338: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301344u;
            goto label_301344;
        }
    }
    ctx->pc = 0x30133Cu;
label_30133c:
    // 0x30133c: 0x10000004  b           . + 4 + (0x4 << 2)
label_301340:
    if (ctx->pc == 0x301340u) {
        ctx->pc = 0x301340u;
            // 0x301340: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x301344u;
        goto label_301344;
    }
    ctx->pc = 0x30133Cu;
    {
        const bool branch_taken_0x30133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30133Cu;
            // 0x301340: 0x64150001  daddiu      $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30133c) {
            ctx->pc = 0x301350u;
            goto label_301350;
        }
    }
    ctx->pc = 0x301344u;
label_301344:
    // 0x301344: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x301344u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_301348:
    // 0x301348: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_30134c:
    if (ctx->pc == 0x30134Cu) {
        ctx->pc = 0x30134Cu;
            // 0x30134c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x301350u;
        goto label_301350;
    }
    ctx->pc = 0x301348u;
    {
        const bool branch_taken_0x301348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301348u;
            // 0x30134c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301348) {
            ctx->pc = 0x301310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_301310;
        }
    }
    ctx->pc = 0x301350u;
label_301350:
    // 0x301350: 0x96040050  lhu         $a0, 0x50($s0)
    ctx->pc = 0x301350u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_301354:
    // 0x301354: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x301354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_301358:
    // 0x301358: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
label_30135c:
    if (ctx->pc == 0x30135Cu) {
        ctx->pc = 0x30135Cu;
            // 0x30135c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301360u;
        goto label_301360;
    }
    ctx->pc = 0x301358u;
    {
        const bool branch_taken_0x301358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x301358) {
            ctx->pc = 0x30135Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301358u;
            // 0x30135c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301360u;
label_301360:
    // 0x301360: 0x16a0006d  bnez        $s5, . + 4 + (0x6D << 2)
label_301364:
    if (ctx->pc == 0x301364u) {
        ctx->pc = 0x301368u;
        goto label_301368;
    }
    ctx->pc = 0x301360u;
    {
        const bool branch_taken_0x301360 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x301360) {
            ctx->pc = 0x301518u;
            goto label_301518;
        }
    }
    ctx->pc = 0x301368u;
label_301368:
    // 0x301368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30136c:
    // 0x30136c: 0xc0c05e8  jal         func_3017A0
label_301370:
    if (ctx->pc == 0x301370u) {
        ctx->pc = 0x301370u;
            // 0x301370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301374u;
        goto label_301374;
    }
    ctx->pc = 0x30136Cu;
    SET_GPR_U32(ctx, 31, 0x301374u);
    ctx->pc = 0x301370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30136Cu;
            // 0x301370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3017A0u;
    if (runtime->hasFunction(0x3017A0u)) {
        auto targetFn = runtime->lookupFunction(0x3017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301374u; }
        if (ctx->pc != 0x301374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003017A0_0x3017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301374u; }
        if (ctx->pc != 0x301374u) { return; }
    }
    ctx->pc = 0x301374u;
label_301374:
    // 0x301374: 0xc077280  jal         func_1DCA00
label_301378:
    if (ctx->pc == 0x301378u) {
        ctx->pc = 0x301378u;
            // 0x301378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30137Cu;
        goto label_30137c;
    }
    ctx->pc = 0x301374u;
    SET_GPR_U32(ctx, 31, 0x30137Cu);
    ctx->pc = 0x301378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301374u;
            // 0x301378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30137Cu; }
        if (ctx->pc != 0x30137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30137Cu; }
        if (ctx->pc != 0x30137Cu) { return; }
    }
    ctx->pc = 0x30137Cu;
label_30137c:
    // 0x30137c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30137cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301380:
    // 0x301380: 0xc0770c0  jal         func_1DC300
label_301384:
    if (ctx->pc == 0x301384u) {
        ctx->pc = 0x301384u;
            // 0x301384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301388u;
        goto label_301388;
    }
    ctx->pc = 0x301380u;
    SET_GPR_U32(ctx, 31, 0x301388u);
    ctx->pc = 0x301384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301380u;
            // 0x301384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301388u; }
        if (ctx->pc != 0x301388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301388u; }
        if (ctx->pc != 0x301388u) { return; }
    }
    ctx->pc = 0x301388u;
label_301388:
    // 0x301388: 0xc0b6d40  jal         func_2DB500
label_30138c:
    if (ctx->pc == 0x30138Cu) {
        ctx->pc = 0x30138Cu;
            // 0x30138c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301390u;
        goto label_301390;
    }
    ctx->pc = 0x301388u;
    SET_GPR_U32(ctx, 31, 0x301390u);
    ctx->pc = 0x30138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301388u;
            // 0x30138c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301390u; }
        if (ctx->pc != 0x301390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301390u; }
        if (ctx->pc != 0x301390u) { return; }
    }
    ctx->pc = 0x301390u;
label_301390:
    // 0x301390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301394:
    // 0x301394: 0xc075318  jal         func_1D4C60
label_301398:
    if (ctx->pc == 0x301398u) {
        ctx->pc = 0x301398u;
            // 0x301398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30139Cu;
        goto label_30139c;
    }
    ctx->pc = 0x301394u;
    SET_GPR_U32(ctx, 31, 0x30139Cu);
    ctx->pc = 0x301398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301394u;
            // 0x301398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30139Cu; }
        if (ctx->pc != 0x30139Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30139Cu; }
        if (ctx->pc != 0x30139Cu) { return; }
    }
    ctx->pc = 0x30139Cu;
label_30139c:
    // 0x30139c: 0xc0b6cec  jal         func_2DB3B0
label_3013a0:
    if (ctx->pc == 0x3013A0u) {
        ctx->pc = 0x3013A0u;
            // 0x3013a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013A4u;
        goto label_3013a4;
    }
    ctx->pc = 0x30139Cu;
    SET_GPR_U32(ctx, 31, 0x3013A4u);
    ctx->pc = 0x3013A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30139Cu;
            // 0x3013a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013A4u; }
        if (ctx->pc != 0x3013A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013A4u; }
        if (ctx->pc != 0x3013A4u) { return; }
    }
    ctx->pc = 0x3013A4u;
label_3013a4:
    // 0x3013a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3013a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3013a8:
    // 0x3013a8: 0xc077280  jal         func_1DCA00
label_3013ac:
    if (ctx->pc == 0x3013ACu) {
        ctx->pc = 0x3013ACu;
            // 0x3013ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013B0u;
        goto label_3013b0;
    }
    ctx->pc = 0x3013A8u;
    SET_GPR_U32(ctx, 31, 0x3013B0u);
    ctx->pc = 0x3013ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013A8u;
            // 0x3013ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013B0u; }
        if (ctx->pc != 0x3013B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013B0u; }
        if (ctx->pc != 0x3013B0u) { return; }
    }
    ctx->pc = 0x3013B0u;
label_3013b0:
    // 0x3013b0: 0xc07727c  jal         func_1DC9F0
label_3013b4:
    if (ctx->pc == 0x3013B4u) {
        ctx->pc = 0x3013B4u;
            // 0x3013b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013B8u;
        goto label_3013b8;
    }
    ctx->pc = 0x3013B0u;
    SET_GPR_U32(ctx, 31, 0x3013B8u);
    ctx->pc = 0x3013B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013B0u;
            // 0x3013b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013B8u; }
        if (ctx->pc != 0x3013B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013B8u; }
        if (ctx->pc != 0x3013B8u) { return; }
    }
    ctx->pc = 0x3013B8u;
label_3013b8:
    // 0x3013b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3013b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3013bc:
    // 0x3013bc: 0xc0c05e0  jal         func_301780
label_3013c0:
    if (ctx->pc == 0x3013C0u) {
        ctx->pc = 0x3013C0u;
            // 0x3013c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013C4u;
        goto label_3013c4;
    }
    ctx->pc = 0x3013BCu;
    SET_GPR_U32(ctx, 31, 0x3013C4u);
    ctx->pc = 0x3013C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013BCu;
            // 0x3013c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013C4u; }
        if (ctx->pc != 0x3013C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013C4u; }
        if (ctx->pc != 0x3013C4u) { return; }
    }
    ctx->pc = 0x3013C4u;
label_3013c4:
    // 0x3013c4: 0xc0c05dc  jal         func_301770
label_3013c8:
    if (ctx->pc == 0x3013C8u) {
        ctx->pc = 0x3013C8u;
            // 0x3013c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013CCu;
        goto label_3013cc;
    }
    ctx->pc = 0x3013C4u;
    SET_GPR_U32(ctx, 31, 0x3013CCu);
    ctx->pc = 0x3013C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013C4u;
            // 0x3013c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013CCu; }
        if (ctx->pc != 0x3013CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013CCu; }
        if (ctx->pc != 0x3013CCu) { return; }
    }
    ctx->pc = 0x3013CCu;
label_3013cc:
    // 0x3013cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3013ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3013d0:
    // 0x3013d0: 0xc077280  jal         func_1DCA00
label_3013d4:
    if (ctx->pc == 0x3013D4u) {
        ctx->pc = 0x3013D4u;
            // 0x3013d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013D8u;
        goto label_3013d8;
    }
    ctx->pc = 0x3013D0u;
    SET_GPR_U32(ctx, 31, 0x3013D8u);
    ctx->pc = 0x3013D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013D0u;
            // 0x3013d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013D8u; }
        if (ctx->pc != 0x3013D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013D8u; }
        if (ctx->pc != 0x3013D8u) { return; }
    }
    ctx->pc = 0x3013D8u;
label_3013d8:
    // 0x3013d8: 0xc07727c  jal         func_1DC9F0
label_3013dc:
    if (ctx->pc == 0x3013DCu) {
        ctx->pc = 0x3013DCu;
            // 0x3013dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013E0u;
        goto label_3013e0;
    }
    ctx->pc = 0x3013D8u;
    SET_GPR_U32(ctx, 31, 0x3013E0u);
    ctx->pc = 0x3013DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013D8u;
            // 0x3013dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013E0u; }
        if (ctx->pc != 0x3013E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013E0u; }
        if (ctx->pc != 0x3013E0u) { return; }
    }
    ctx->pc = 0x3013E0u;
label_3013e0:
    // 0x3013e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3013e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3013e4:
    // 0x3013e4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3013e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3013e8:
    // 0x3013e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3013e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3013ec:
    // 0x3013ec: 0xc0c05d4  jal         func_301750
label_3013f0:
    if (ctx->pc == 0x3013F0u) {
        ctx->pc = 0x3013F0u;
            // 0x3013f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013F4u;
        goto label_3013f4;
    }
    ctx->pc = 0x3013ECu;
    SET_GPR_U32(ctx, 31, 0x3013F4u);
    ctx->pc = 0x3013F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013ECu;
            // 0x3013f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013F4u; }
        if (ctx->pc != 0x3013F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013F4u; }
        if (ctx->pc != 0x3013F4u) { return; }
    }
    ctx->pc = 0x3013F4u;
label_3013f4:
    // 0x3013f4: 0xc0c05d0  jal         func_301740
label_3013f8:
    if (ctx->pc == 0x3013F8u) {
        ctx->pc = 0x3013F8u;
            // 0x3013f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3013FCu;
        goto label_3013fc;
    }
    ctx->pc = 0x3013F4u;
    SET_GPR_U32(ctx, 31, 0x3013FCu);
    ctx->pc = 0x3013F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3013F4u;
            // 0x3013f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301740u;
    if (runtime->hasFunction(0x301740u)) {
        auto targetFn = runtime->lookupFunction(0x301740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013FCu; }
        if (ctx->pc != 0x3013FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301740_0x301740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3013FCu; }
        if (ctx->pc != 0x3013FCu) { return; }
    }
    ctx->pc = 0x3013FCu;
label_3013fc:
    // 0x3013fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3013fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301400:
    // 0x301400: 0xc0c05cc  jal         func_301730
label_301404:
    if (ctx->pc == 0x301404u) {
        ctx->pc = 0x301404u;
            // 0x301404: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x301408u;
        goto label_301408;
    }
    ctx->pc = 0x301400u;
    SET_GPR_U32(ctx, 31, 0x301408u);
    ctx->pc = 0x301404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301400u;
            // 0x301404: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301408u; }
        if (ctx->pc != 0x301408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301408u; }
        if (ctx->pc != 0x301408u) { return; }
    }
    ctx->pc = 0x301408u;
label_301408:
    // 0x301408: 0xc0c05c8  jal         func_301720
label_30140c:
    if (ctx->pc == 0x30140Cu) {
        ctx->pc = 0x30140Cu;
            // 0x30140c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301410u;
        goto label_301410;
    }
    ctx->pc = 0x301408u;
    SET_GPR_U32(ctx, 31, 0x301410u);
    ctx->pc = 0x30140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301408u;
            // 0x30140c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301410u; }
        if (ctx->pc != 0x301410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301410u; }
        if (ctx->pc != 0x301410u) { return; }
    }
    ctx->pc = 0x301410u;
label_301410:
    // 0x301410: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x301410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_301414:
    // 0x301414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x301414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301418:
    // 0x301418: 0xc04cc04  jal         func_133010
label_30141c:
    if (ctx->pc == 0x30141Cu) {
        ctx->pc = 0x30141Cu;
            // 0x30141c: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
        ctx->pc = 0x301420u;
        goto label_301420;
    }
    ctx->pc = 0x301418u;
    SET_GPR_U32(ctx, 31, 0x301420u);
    ctx->pc = 0x30141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301418u;
            // 0x30141c: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301420u; }
        if (ctx->pc != 0x301420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301420u; }
        if (ctx->pc != 0x301420u) { return; }
    }
    ctx->pc = 0x301420u;
label_301420:
    // 0x301420: 0xc0775d8  jal         func_1DD760
label_301424:
    if (ctx->pc == 0x301424u) {
        ctx->pc = 0x301424u;
            // 0x301424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301428u;
        goto label_301428;
    }
    ctx->pc = 0x301420u;
    SET_GPR_U32(ctx, 31, 0x301428u);
    ctx->pc = 0x301424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301420u;
            // 0x301424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301428u; }
        if (ctx->pc != 0x301428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301428u; }
        if (ctx->pc != 0x301428u) { return; }
    }
    ctx->pc = 0x301428u;
label_301428:
    // 0x301428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x301428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30142c:
    // 0x30142c: 0xc077590  jal         func_1DD640
label_301430:
    if (ctx->pc == 0x301430u) {
        ctx->pc = 0x301430u;
            // 0x301430: 0x3c051001  lui         $a1, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4097 << 16));
        ctx->pc = 0x301434u;
        goto label_301434;
    }
    ctx->pc = 0x30142Cu;
    SET_GPR_U32(ctx, 31, 0x301434u);
    ctx->pc = 0x301430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30142Cu;
            // 0x301430: 0x3c051001  lui         $a1, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4097 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD640u;
    if (runtime->hasFunction(0x1DD640u)) {
        auto targetFn = runtime->lookupFunction(0x1DD640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301434u; }
        if (ctx->pc != 0x301434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD640_0x1dd640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301434u; }
        if (ctx->pc != 0x301434u) { return; }
    }
    ctx->pc = 0x301434u;
label_301434:
    // 0x301434: 0xc077330  jal         func_1DCCC0
label_301438:
    if (ctx->pc == 0x301438u) {
        ctx->pc = 0x301438u;
            // 0x301438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30143Cu;
        goto label_30143c;
    }
    ctx->pc = 0x301434u;
    SET_GPR_U32(ctx, 31, 0x30143Cu);
    ctx->pc = 0x301438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301434u;
            // 0x301438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30143Cu; }
        if (ctx->pc != 0x30143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30143Cu; }
        if (ctx->pc != 0x30143Cu) { return; }
    }
    ctx->pc = 0x30143Cu;
label_30143c:
    // 0x30143c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_301440:
    if (ctx->pc == 0x301440u) {
        ctx->pc = 0x301444u;
        goto label_301444;
    }
    ctx->pc = 0x30143Cu;
    {
        const bool branch_taken_0x30143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30143c) {
            ctx->pc = 0x301454u;
            goto label_301454;
        }
    }
    ctx->pc = 0x301444u;
label_301444:
    // 0x301444: 0xc07732c  jal         func_1DCCB0
label_301448:
    if (ctx->pc == 0x301448u) {
        ctx->pc = 0x301448u;
            // 0x301448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30144Cu;
        goto label_30144c;
    }
    ctx->pc = 0x301444u;
    SET_GPR_U32(ctx, 31, 0x30144Cu);
    ctx->pc = 0x301448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301444u;
            // 0x301448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30144Cu; }
        if (ctx->pc != 0x30144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30144Cu; }
        if (ctx->pc != 0x30144Cu) { return; }
    }
    ctx->pc = 0x30144Cu;
label_30144c:
    // 0x30144c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_301450:
    if (ctx->pc == 0x301450u) {
        ctx->pc = 0x301450u;
            // 0x301450: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x301454u;
        goto label_301454;
    }
    ctx->pc = 0x30144Cu;
    {
        const bool branch_taken_0x30144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30144c) {
            ctx->pc = 0x301450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30144Cu;
            // 0x301450: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30147Cu;
            goto label_30147c;
        }
    }
    ctx->pc = 0x301454u;
label_301454:
    // 0x301454: 0xc0c05c4  jal         func_301710
label_301458:
    if (ctx->pc == 0x301458u) {
        ctx->pc = 0x30145Cu;
        goto label_30145c;
    }
    ctx->pc = 0x301454u;
    SET_GPR_U32(ctx, 31, 0x30145Cu);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30145Cu; }
        if (ctx->pc != 0x30145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30145Cu; }
        if (ctx->pc != 0x30145Cu) { return; }
    }
    ctx->pc = 0x30145Cu;
label_30145c:
    // 0x30145c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30145cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301460:
    // 0x301460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301464:
    // 0x301464: 0xc0770e0  jal         func_1DC380
label_301468:
    if (ctx->pc == 0x301468u) {
        ctx->pc = 0x301468u;
            // 0x301468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30146Cu;
        goto label_30146c;
    }
    ctx->pc = 0x301464u;
    SET_GPR_U32(ctx, 31, 0x30146Cu);
    ctx->pc = 0x301468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301464u;
            // 0x301468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC380u;
    if (runtime->hasFunction(0x1DC380u)) {
        auto targetFn = runtime->lookupFunction(0x1DC380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30146Cu; }
        if (ctx->pc != 0x30146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC380_0x1dc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30146Cu; }
        if (ctx->pc != 0x30146Cu) { return; }
    }
    ctx->pc = 0x30146Cu;
label_30146c:
    // 0x30146c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x30146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_301470:
    // 0x301470: 0xc0c05c0  jal         func_301700
label_301474:
    if (ctx->pc == 0x301474u) {
        ctx->pc = 0x301474u;
            // 0x301474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301478u;
        goto label_301478;
    }
    ctx->pc = 0x301470u;
    SET_GPR_U32(ctx, 31, 0x301478u);
    ctx->pc = 0x301474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301470u;
            // 0x301474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301478u; }
        if (ctx->pc != 0x301478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301478u; }
        if (ctx->pc != 0x301478u) { return; }
    }
    ctx->pc = 0x301478u;
label_301478:
    // 0x301478: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x301478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_30147c:
    // 0x30147c: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x30147cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_301480:
    // 0x301480: 0xc075378  jal         func_1D4DE0
label_301484:
    if (ctx->pc == 0x301484u) {
        ctx->pc = 0x301484u;
            // 0x301484: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x301488u;
        goto label_301488;
    }
    ctx->pc = 0x301480u;
    SET_GPR_U32(ctx, 31, 0x301488u);
    ctx->pc = 0x301484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301480u;
            // 0x301484: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301488u; }
        if (ctx->pc != 0x301488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301488u; }
        if (ctx->pc != 0x301488u) { return; }
    }
    ctx->pc = 0x301488u;
label_301488:
    // 0x301488: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x301488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30148c:
    // 0x30148c: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x30148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_301490:
    // 0x301490: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x301490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_301494:
    // 0x301494: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x301494u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_301498:
    // 0x301498: 0xc0c753c  jal         func_31D4F0
label_30149c:
    if (ctx->pc == 0x30149Cu) {
        ctx->pc = 0x30149Cu;
            // 0x30149c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3014A0u;
        goto label_3014a0;
    }
    ctx->pc = 0x301498u;
    SET_GPR_U32(ctx, 31, 0x3014A0u);
    ctx->pc = 0x30149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301498u;
            // 0x30149c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014A0u; }
        if (ctx->pc != 0x3014A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014A0u; }
        if (ctx->pc != 0x3014A0u) { return; }
    }
    ctx->pc = 0x3014A0u;
label_3014a0:
    // 0x3014a0: 0xc62c0880  lwc1        $f12, 0x880($s1)
    ctx->pc = 0x3014a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3014a4:
    // 0x3014a4: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x3014a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_3014a8:
    // 0x3014a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3014a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3014ac:
    // 0x3014ac: 0xc0c753c  jal         func_31D4F0
label_3014b0:
    if (ctx->pc == 0x3014B0u) {
        ctx->pc = 0x3014B0u;
            // 0x3014b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3014B4u;
        goto label_3014b4;
    }
    ctx->pc = 0x3014ACu;
    SET_GPR_U32(ctx, 31, 0x3014B4u);
    ctx->pc = 0x3014B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3014ACu;
            // 0x3014b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014B4u; }
        if (ctx->pc != 0x3014B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014B4u; }
        if (ctx->pc != 0x3014B4u) { return; }
    }
    ctx->pc = 0x3014B4u;
label_3014b4:
    // 0x3014b4: 0xc0754b4  jal         func_1D52D0
label_3014b8:
    if (ctx->pc == 0x3014B8u) {
        ctx->pc = 0x3014B8u;
            // 0x3014b8: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x3014BCu;
        goto label_3014bc;
    }
    ctx->pc = 0x3014B4u;
    SET_GPR_U32(ctx, 31, 0x3014BCu);
    ctx->pc = 0x3014B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3014B4u;
            // 0x3014b8: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014BCu; }
        if (ctx->pc != 0x3014BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014BCu; }
        if (ctx->pc != 0x3014BCu) { return; }
    }
    ctx->pc = 0x3014BCu;
label_3014bc:
    // 0x3014bc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3014bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3014c0:
    // 0x3014c0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3014c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_3014c4:
    // 0x3014c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3014c8:
    if (ctx->pc == 0x3014C8u) {
        ctx->pc = 0x3014C8u;
            // 0x3014c8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x3014CCu;
        goto label_3014cc;
    }
    ctx->pc = 0x3014C4u;
    {
        const bool branch_taken_0x3014c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3014c4) {
            ctx->pc = 0x3014C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3014C4u;
            // 0x3014c8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3014E0u;
            goto label_3014e0;
        }
    }
    ctx->pc = 0x3014CCu;
label_3014cc:
    // 0x3014cc: 0xc0bfed4  jal         func_2FFB50
label_3014d0:
    if (ctx->pc == 0x3014D0u) {
        ctx->pc = 0x3014D0u;
            // 0x3014d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3014D4u;
        goto label_3014d4;
    }
    ctx->pc = 0x3014CCu;
    SET_GPR_U32(ctx, 31, 0x3014D4u);
    ctx->pc = 0x3014D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3014CCu;
            // 0x3014d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFB50u;
    goto label_2ffb50;
    ctx->pc = 0x3014D4u;
label_3014d4:
    // 0x3014d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3014d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3014d8:
    // 0x3014d8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3014dc:
    if (ctx->pc == 0x3014DCu) {
        ctx->pc = 0x3014DCu;
            // 0x3014dc: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x3014E0u;
        goto label_3014e0;
    }
    ctx->pc = 0x3014D8u;
    {
        const bool branch_taken_0x3014d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3014DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3014D8u;
            // 0x3014dc: 0xae230e30  sw          $v1, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014d8) {
            ctx->pc = 0x301518u;
            goto label_301518;
        }
    }
    ctx->pc = 0x3014E0u;
label_3014e0:
    // 0x3014e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3014e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3014e4:
    // 0x3014e4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3014e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3014e8:
    // 0x3014e8: 0x320f809  jalr        $t9
label_3014ec:
    if (ctx->pc == 0x3014ECu) {
        ctx->pc = 0x3014ECu;
            // 0x3014ec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3014F0u;
        goto label_3014f0;
    }
    ctx->pc = 0x3014E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3014F0u);
        ctx->pc = 0x3014ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3014E8u;
            // 0x3014ec: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3014F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3014F0u; }
            if (ctx->pc != 0x3014F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3014F0u;
label_3014f0:
    // 0x3014f0: 0xc040180  jal         func_100600
label_3014f4:
    if (ctx->pc == 0x3014F4u) {
        ctx->pc = 0x3014F4u;
            // 0x3014f4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x3014F8u;
        goto label_3014f8;
    }
    ctx->pc = 0x3014F0u;
    SET_GPR_U32(ctx, 31, 0x3014F8u);
    ctx->pc = 0x3014F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3014F0u;
            // 0x3014f4: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014F8u; }
        if (ctx->pc != 0x3014F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3014F8u; }
        if (ctx->pc != 0x3014F8u) { return; }
    }
    ctx->pc = 0x3014F8u;
label_3014f8:
    // 0x3014f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3014f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3014fc:
    // 0x3014fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_301500:
    if (ctx->pc == 0x301500u) {
        ctx->pc = 0x301500u;
            // 0x301500: 0xae200e10  sw          $zero, 0xE10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3600), GPR_U32(ctx, 0));
        ctx->pc = 0x301504u;
        goto label_301504;
    }
    ctx->pc = 0x3014FCu;
    {
        const bool branch_taken_0x3014fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3014fc) {
            ctx->pc = 0x301500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3014FCu;
            // 0x301500: 0xae200e10  sw          $zero, 0xE10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301518u;
            goto label_301518;
        }
    }
    ctx->pc = 0x301504u;
label_301504:
    // 0x301504: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x301504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_301508:
    // 0x301508: 0xc62c0a80  lwc1        $f12, 0xA80($s1)
    ctx->pc = 0x301508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30150c:
    // 0x30150c: 0xc11ebc4  jal         func_47AF10
label_301510:
    if (ctx->pc == 0x301510u) {
        ctx->pc = 0x301510u;
            // 0x301510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301514u;
        goto label_301514;
    }
    ctx->pc = 0x30150Cu;
    SET_GPR_U32(ctx, 31, 0x301514u);
    ctx->pc = 0x301510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30150Cu;
            // 0x301510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301514u; }
        if (ctx->pc != 0x301514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301514u; }
        if (ctx->pc != 0x301514u) { return; }
    }
    ctx->pc = 0x301514u;
label_301514:
    // 0x301514: 0xae200e10  sw          $zero, 0xE10($s1)
    ctx->pc = 0x301514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3600), GPR_U32(ctx, 0));
label_301518:
    // 0x301518: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x301518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_30151c:
    // 0x30151c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_301520:
    // 0x301520: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x301520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_301524:
    // 0x301524: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x301524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_301528:
    // 0x301528: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x301528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30152c:
    // 0x30152c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30152cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_301530:
    // 0x301530: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x301530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_301534:
    // 0x301534: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x301534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_301538:
    // 0x301538: 0x3e00008  jr          $ra
label_30153c:
    if (ctx->pc == 0x30153Cu) {
        ctx->pc = 0x30153Cu;
            // 0x30153c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x301540u;
        goto label_fallthrough_0x301538;
    }
    ctx->pc = 0x301538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30153Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301538u;
            // 0x30153c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x301538:
    ctx->pc = 0x301540u;
}
