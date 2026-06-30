#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD850
// Address: 0x1dd850 - 0x1ddf70
void sub_001DD850_0x1dd850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD850_0x1dd850");
#endif

    switch (ctx->pc) {
        case 0x1dd850u: goto label_1dd850;
        case 0x1dd854u: goto label_1dd854;
        case 0x1dd858u: goto label_1dd858;
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd860u: goto label_1dd860;
        case 0x1dd864u: goto label_1dd864;
        case 0x1dd868u: goto label_1dd868;
        case 0x1dd86cu: goto label_1dd86c;
        case 0x1dd870u: goto label_1dd870;
        case 0x1dd874u: goto label_1dd874;
        case 0x1dd878u: goto label_1dd878;
        case 0x1dd87cu: goto label_1dd87c;
        case 0x1dd880u: goto label_1dd880;
        case 0x1dd884u: goto label_1dd884;
        case 0x1dd888u: goto label_1dd888;
        case 0x1dd88cu: goto label_1dd88c;
        case 0x1dd890u: goto label_1dd890;
        case 0x1dd894u: goto label_1dd894;
        case 0x1dd898u: goto label_1dd898;
        case 0x1dd89cu: goto label_1dd89c;
        case 0x1dd8a0u: goto label_1dd8a0;
        case 0x1dd8a4u: goto label_1dd8a4;
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8acu: goto label_1dd8ac;
        case 0x1dd8b0u: goto label_1dd8b0;
        case 0x1dd8b4u: goto label_1dd8b4;
        case 0x1dd8b8u: goto label_1dd8b8;
        case 0x1dd8bcu: goto label_1dd8bc;
        case 0x1dd8c0u: goto label_1dd8c0;
        case 0x1dd8c4u: goto label_1dd8c4;
        case 0x1dd8c8u: goto label_1dd8c8;
        case 0x1dd8ccu: goto label_1dd8cc;
        case 0x1dd8d0u: goto label_1dd8d0;
        case 0x1dd8d4u: goto label_1dd8d4;
        case 0x1dd8d8u: goto label_1dd8d8;
        case 0x1dd8dcu: goto label_1dd8dc;
        case 0x1dd8e0u: goto label_1dd8e0;
        case 0x1dd8e4u: goto label_1dd8e4;
        case 0x1dd8e8u: goto label_1dd8e8;
        case 0x1dd8ecu: goto label_1dd8ec;
        case 0x1dd8f0u: goto label_1dd8f0;
        case 0x1dd8f4u: goto label_1dd8f4;
        case 0x1dd8f8u: goto label_1dd8f8;
        case 0x1dd8fcu: goto label_1dd8fc;
        case 0x1dd900u: goto label_1dd900;
        case 0x1dd904u: goto label_1dd904;
        case 0x1dd908u: goto label_1dd908;
        case 0x1dd90cu: goto label_1dd90c;
        case 0x1dd910u: goto label_1dd910;
        case 0x1dd914u: goto label_1dd914;
        case 0x1dd918u: goto label_1dd918;
        case 0x1dd91cu: goto label_1dd91c;
        case 0x1dd920u: goto label_1dd920;
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd928u: goto label_1dd928;
        case 0x1dd92cu: goto label_1dd92c;
        case 0x1dd930u: goto label_1dd930;
        case 0x1dd934u: goto label_1dd934;
        case 0x1dd938u: goto label_1dd938;
        case 0x1dd93cu: goto label_1dd93c;
        case 0x1dd940u: goto label_1dd940;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd948u: goto label_1dd948;
        case 0x1dd94cu: goto label_1dd94c;
        case 0x1dd950u: goto label_1dd950;
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd958u: goto label_1dd958;
        case 0x1dd95cu: goto label_1dd95c;
        case 0x1dd960u: goto label_1dd960;
        case 0x1dd964u: goto label_1dd964;
        case 0x1dd968u: goto label_1dd968;
        case 0x1dd96cu: goto label_1dd96c;
        case 0x1dd970u: goto label_1dd970;
        case 0x1dd974u: goto label_1dd974;
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd97cu: goto label_1dd97c;
        case 0x1dd980u: goto label_1dd980;
        case 0x1dd984u: goto label_1dd984;
        case 0x1dd988u: goto label_1dd988;
        case 0x1dd98cu: goto label_1dd98c;
        case 0x1dd990u: goto label_1dd990;
        case 0x1dd994u: goto label_1dd994;
        case 0x1dd998u: goto label_1dd998;
        case 0x1dd99cu: goto label_1dd99c;
        case 0x1dd9a0u: goto label_1dd9a0;
        case 0x1dd9a4u: goto label_1dd9a4;
        case 0x1dd9a8u: goto label_1dd9a8;
        case 0x1dd9acu: goto label_1dd9ac;
        case 0x1dd9b0u: goto label_1dd9b0;
        case 0x1dd9b4u: goto label_1dd9b4;
        case 0x1dd9b8u: goto label_1dd9b8;
        case 0x1dd9bcu: goto label_1dd9bc;
        case 0x1dd9c0u: goto label_1dd9c0;
        case 0x1dd9c4u: goto label_1dd9c4;
        case 0x1dd9c8u: goto label_1dd9c8;
        case 0x1dd9ccu: goto label_1dd9cc;
        case 0x1dd9d0u: goto label_1dd9d0;
        case 0x1dd9d4u: goto label_1dd9d4;
        case 0x1dd9d8u: goto label_1dd9d8;
        case 0x1dd9dcu: goto label_1dd9dc;
        case 0x1dd9e0u: goto label_1dd9e0;
        case 0x1dd9e4u: goto label_1dd9e4;
        case 0x1dd9e8u: goto label_1dd9e8;
        case 0x1dd9ecu: goto label_1dd9ec;
        case 0x1dd9f0u: goto label_1dd9f0;
        case 0x1dd9f4u: goto label_1dd9f4;
        case 0x1dd9f8u: goto label_1dd9f8;
        case 0x1dd9fcu: goto label_1dd9fc;
        case 0x1dda00u: goto label_1dda00;
        case 0x1dda04u: goto label_1dda04;
        case 0x1dda08u: goto label_1dda08;
        case 0x1dda0cu: goto label_1dda0c;
        case 0x1dda10u: goto label_1dda10;
        case 0x1dda14u: goto label_1dda14;
        case 0x1dda18u: goto label_1dda18;
        case 0x1dda1cu: goto label_1dda1c;
        case 0x1dda20u: goto label_1dda20;
        case 0x1dda24u: goto label_1dda24;
        case 0x1dda28u: goto label_1dda28;
        case 0x1dda2cu: goto label_1dda2c;
        case 0x1dda30u: goto label_1dda30;
        case 0x1dda34u: goto label_1dda34;
        case 0x1dda38u: goto label_1dda38;
        case 0x1dda3cu: goto label_1dda3c;
        case 0x1dda40u: goto label_1dda40;
        case 0x1dda44u: goto label_1dda44;
        case 0x1dda48u: goto label_1dda48;
        case 0x1dda4cu: goto label_1dda4c;
        case 0x1dda50u: goto label_1dda50;
        case 0x1dda54u: goto label_1dda54;
        case 0x1dda58u: goto label_1dda58;
        case 0x1dda5cu: goto label_1dda5c;
        case 0x1dda60u: goto label_1dda60;
        case 0x1dda64u: goto label_1dda64;
        case 0x1dda68u: goto label_1dda68;
        case 0x1dda6cu: goto label_1dda6c;
        case 0x1dda70u: goto label_1dda70;
        case 0x1dda74u: goto label_1dda74;
        case 0x1dda78u: goto label_1dda78;
        case 0x1dda7cu: goto label_1dda7c;
        case 0x1dda80u: goto label_1dda80;
        case 0x1dda84u: goto label_1dda84;
        case 0x1dda88u: goto label_1dda88;
        case 0x1dda8cu: goto label_1dda8c;
        case 0x1dda90u: goto label_1dda90;
        case 0x1dda94u: goto label_1dda94;
        case 0x1dda98u: goto label_1dda98;
        case 0x1dda9cu: goto label_1dda9c;
        case 0x1ddaa0u: goto label_1ddaa0;
        case 0x1ddaa4u: goto label_1ddaa4;
        case 0x1ddaa8u: goto label_1ddaa8;
        case 0x1ddaacu: goto label_1ddaac;
        case 0x1ddab0u: goto label_1ddab0;
        case 0x1ddab4u: goto label_1ddab4;
        case 0x1ddab8u: goto label_1ddab8;
        case 0x1ddabcu: goto label_1ddabc;
        case 0x1ddac0u: goto label_1ddac0;
        case 0x1ddac4u: goto label_1ddac4;
        case 0x1ddac8u: goto label_1ddac8;
        case 0x1ddaccu: goto label_1ddacc;
        case 0x1ddad0u: goto label_1ddad0;
        case 0x1ddad4u: goto label_1ddad4;
        case 0x1ddad8u: goto label_1ddad8;
        case 0x1ddadcu: goto label_1ddadc;
        case 0x1ddae0u: goto label_1ddae0;
        case 0x1ddae4u: goto label_1ddae4;
        case 0x1ddae8u: goto label_1ddae8;
        case 0x1ddaecu: goto label_1ddaec;
        case 0x1ddaf0u: goto label_1ddaf0;
        case 0x1ddaf4u: goto label_1ddaf4;
        case 0x1ddaf8u: goto label_1ddaf8;
        case 0x1ddafcu: goto label_1ddafc;
        case 0x1ddb00u: goto label_1ddb00;
        case 0x1ddb04u: goto label_1ddb04;
        case 0x1ddb08u: goto label_1ddb08;
        case 0x1ddb0cu: goto label_1ddb0c;
        case 0x1ddb10u: goto label_1ddb10;
        case 0x1ddb14u: goto label_1ddb14;
        case 0x1ddb18u: goto label_1ddb18;
        case 0x1ddb1cu: goto label_1ddb1c;
        case 0x1ddb20u: goto label_1ddb20;
        case 0x1ddb24u: goto label_1ddb24;
        case 0x1ddb28u: goto label_1ddb28;
        case 0x1ddb2cu: goto label_1ddb2c;
        case 0x1ddb30u: goto label_1ddb30;
        case 0x1ddb34u: goto label_1ddb34;
        case 0x1ddb38u: goto label_1ddb38;
        case 0x1ddb3cu: goto label_1ddb3c;
        case 0x1ddb40u: goto label_1ddb40;
        case 0x1ddb44u: goto label_1ddb44;
        case 0x1ddb48u: goto label_1ddb48;
        case 0x1ddb4cu: goto label_1ddb4c;
        case 0x1ddb50u: goto label_1ddb50;
        case 0x1ddb54u: goto label_1ddb54;
        case 0x1ddb58u: goto label_1ddb58;
        case 0x1ddb5cu: goto label_1ddb5c;
        case 0x1ddb60u: goto label_1ddb60;
        case 0x1ddb64u: goto label_1ddb64;
        case 0x1ddb68u: goto label_1ddb68;
        case 0x1ddb6cu: goto label_1ddb6c;
        case 0x1ddb70u: goto label_1ddb70;
        case 0x1ddb74u: goto label_1ddb74;
        case 0x1ddb78u: goto label_1ddb78;
        case 0x1ddb7cu: goto label_1ddb7c;
        case 0x1ddb80u: goto label_1ddb80;
        case 0x1ddb84u: goto label_1ddb84;
        case 0x1ddb88u: goto label_1ddb88;
        case 0x1ddb8cu: goto label_1ddb8c;
        case 0x1ddb90u: goto label_1ddb90;
        case 0x1ddb94u: goto label_1ddb94;
        case 0x1ddb98u: goto label_1ddb98;
        case 0x1ddb9cu: goto label_1ddb9c;
        case 0x1ddba0u: goto label_1ddba0;
        case 0x1ddba4u: goto label_1ddba4;
        case 0x1ddba8u: goto label_1ddba8;
        case 0x1ddbacu: goto label_1ddbac;
        case 0x1ddbb0u: goto label_1ddbb0;
        case 0x1ddbb4u: goto label_1ddbb4;
        case 0x1ddbb8u: goto label_1ddbb8;
        case 0x1ddbbcu: goto label_1ddbbc;
        case 0x1ddbc0u: goto label_1ddbc0;
        case 0x1ddbc4u: goto label_1ddbc4;
        case 0x1ddbc8u: goto label_1ddbc8;
        case 0x1ddbccu: goto label_1ddbcc;
        case 0x1ddbd0u: goto label_1ddbd0;
        case 0x1ddbd4u: goto label_1ddbd4;
        case 0x1ddbd8u: goto label_1ddbd8;
        case 0x1ddbdcu: goto label_1ddbdc;
        case 0x1ddbe0u: goto label_1ddbe0;
        case 0x1ddbe4u: goto label_1ddbe4;
        case 0x1ddbe8u: goto label_1ddbe8;
        case 0x1ddbecu: goto label_1ddbec;
        case 0x1ddbf0u: goto label_1ddbf0;
        case 0x1ddbf4u: goto label_1ddbf4;
        case 0x1ddbf8u: goto label_1ddbf8;
        case 0x1ddbfcu: goto label_1ddbfc;
        case 0x1ddc00u: goto label_1ddc00;
        case 0x1ddc04u: goto label_1ddc04;
        case 0x1ddc08u: goto label_1ddc08;
        case 0x1ddc0cu: goto label_1ddc0c;
        case 0x1ddc10u: goto label_1ddc10;
        case 0x1ddc14u: goto label_1ddc14;
        case 0x1ddc18u: goto label_1ddc18;
        case 0x1ddc1cu: goto label_1ddc1c;
        case 0x1ddc20u: goto label_1ddc20;
        case 0x1ddc24u: goto label_1ddc24;
        case 0x1ddc28u: goto label_1ddc28;
        case 0x1ddc2cu: goto label_1ddc2c;
        case 0x1ddc30u: goto label_1ddc30;
        case 0x1ddc34u: goto label_1ddc34;
        case 0x1ddc38u: goto label_1ddc38;
        case 0x1ddc3cu: goto label_1ddc3c;
        case 0x1ddc40u: goto label_1ddc40;
        case 0x1ddc44u: goto label_1ddc44;
        case 0x1ddc48u: goto label_1ddc48;
        case 0x1ddc4cu: goto label_1ddc4c;
        case 0x1ddc50u: goto label_1ddc50;
        case 0x1ddc54u: goto label_1ddc54;
        case 0x1ddc58u: goto label_1ddc58;
        case 0x1ddc5cu: goto label_1ddc5c;
        case 0x1ddc60u: goto label_1ddc60;
        case 0x1ddc64u: goto label_1ddc64;
        case 0x1ddc68u: goto label_1ddc68;
        case 0x1ddc6cu: goto label_1ddc6c;
        case 0x1ddc70u: goto label_1ddc70;
        case 0x1ddc74u: goto label_1ddc74;
        case 0x1ddc78u: goto label_1ddc78;
        case 0x1ddc7cu: goto label_1ddc7c;
        case 0x1ddc80u: goto label_1ddc80;
        case 0x1ddc84u: goto label_1ddc84;
        case 0x1ddc88u: goto label_1ddc88;
        case 0x1ddc8cu: goto label_1ddc8c;
        case 0x1ddc90u: goto label_1ddc90;
        case 0x1ddc94u: goto label_1ddc94;
        case 0x1ddc98u: goto label_1ddc98;
        case 0x1ddc9cu: goto label_1ddc9c;
        case 0x1ddca0u: goto label_1ddca0;
        case 0x1ddca4u: goto label_1ddca4;
        case 0x1ddca8u: goto label_1ddca8;
        case 0x1ddcacu: goto label_1ddcac;
        case 0x1ddcb0u: goto label_1ddcb0;
        case 0x1ddcb4u: goto label_1ddcb4;
        case 0x1ddcb8u: goto label_1ddcb8;
        case 0x1ddcbcu: goto label_1ddcbc;
        case 0x1ddcc0u: goto label_1ddcc0;
        case 0x1ddcc4u: goto label_1ddcc4;
        case 0x1ddcc8u: goto label_1ddcc8;
        case 0x1ddcccu: goto label_1ddccc;
        case 0x1ddcd0u: goto label_1ddcd0;
        case 0x1ddcd4u: goto label_1ddcd4;
        case 0x1ddcd8u: goto label_1ddcd8;
        case 0x1ddcdcu: goto label_1ddcdc;
        case 0x1ddce0u: goto label_1ddce0;
        case 0x1ddce4u: goto label_1ddce4;
        case 0x1ddce8u: goto label_1ddce8;
        case 0x1ddcecu: goto label_1ddcec;
        case 0x1ddcf0u: goto label_1ddcf0;
        case 0x1ddcf4u: goto label_1ddcf4;
        case 0x1ddcf8u: goto label_1ddcf8;
        case 0x1ddcfcu: goto label_1ddcfc;
        case 0x1ddd00u: goto label_1ddd00;
        case 0x1ddd04u: goto label_1ddd04;
        case 0x1ddd08u: goto label_1ddd08;
        case 0x1ddd0cu: goto label_1ddd0c;
        case 0x1ddd10u: goto label_1ddd10;
        case 0x1ddd14u: goto label_1ddd14;
        case 0x1ddd18u: goto label_1ddd18;
        case 0x1ddd1cu: goto label_1ddd1c;
        case 0x1ddd20u: goto label_1ddd20;
        case 0x1ddd24u: goto label_1ddd24;
        case 0x1ddd28u: goto label_1ddd28;
        case 0x1ddd2cu: goto label_1ddd2c;
        case 0x1ddd30u: goto label_1ddd30;
        case 0x1ddd34u: goto label_1ddd34;
        case 0x1ddd38u: goto label_1ddd38;
        case 0x1ddd3cu: goto label_1ddd3c;
        case 0x1ddd40u: goto label_1ddd40;
        case 0x1ddd44u: goto label_1ddd44;
        case 0x1ddd48u: goto label_1ddd48;
        case 0x1ddd4cu: goto label_1ddd4c;
        case 0x1ddd50u: goto label_1ddd50;
        case 0x1ddd54u: goto label_1ddd54;
        case 0x1ddd58u: goto label_1ddd58;
        case 0x1ddd5cu: goto label_1ddd5c;
        case 0x1ddd60u: goto label_1ddd60;
        case 0x1ddd64u: goto label_1ddd64;
        case 0x1ddd68u: goto label_1ddd68;
        case 0x1ddd6cu: goto label_1ddd6c;
        case 0x1ddd70u: goto label_1ddd70;
        case 0x1ddd74u: goto label_1ddd74;
        case 0x1ddd78u: goto label_1ddd78;
        case 0x1ddd7cu: goto label_1ddd7c;
        case 0x1ddd80u: goto label_1ddd80;
        case 0x1ddd84u: goto label_1ddd84;
        case 0x1ddd88u: goto label_1ddd88;
        case 0x1ddd8cu: goto label_1ddd8c;
        case 0x1ddd90u: goto label_1ddd90;
        case 0x1ddd94u: goto label_1ddd94;
        case 0x1ddd98u: goto label_1ddd98;
        case 0x1ddd9cu: goto label_1ddd9c;
        case 0x1ddda0u: goto label_1ddda0;
        case 0x1ddda4u: goto label_1ddda4;
        case 0x1ddda8u: goto label_1ddda8;
        case 0x1dddacu: goto label_1dddac;
        case 0x1dddb0u: goto label_1dddb0;
        case 0x1dddb4u: goto label_1dddb4;
        case 0x1dddb8u: goto label_1dddb8;
        case 0x1dddbcu: goto label_1dddbc;
        case 0x1dddc0u: goto label_1dddc0;
        case 0x1dddc4u: goto label_1dddc4;
        case 0x1dddc8u: goto label_1dddc8;
        case 0x1dddccu: goto label_1dddcc;
        case 0x1dddd0u: goto label_1dddd0;
        case 0x1dddd4u: goto label_1dddd4;
        case 0x1dddd8u: goto label_1dddd8;
        case 0x1ddddcu: goto label_1ddddc;
        case 0x1ddde0u: goto label_1ddde0;
        case 0x1ddde4u: goto label_1ddde4;
        case 0x1ddde8u: goto label_1ddde8;
        case 0x1dddecu: goto label_1dddec;
        case 0x1dddf0u: goto label_1dddf0;
        case 0x1dddf4u: goto label_1dddf4;
        case 0x1dddf8u: goto label_1dddf8;
        case 0x1dddfcu: goto label_1dddfc;
        case 0x1dde00u: goto label_1dde00;
        case 0x1dde04u: goto label_1dde04;
        case 0x1dde08u: goto label_1dde08;
        case 0x1dde0cu: goto label_1dde0c;
        case 0x1dde10u: goto label_1dde10;
        case 0x1dde14u: goto label_1dde14;
        case 0x1dde18u: goto label_1dde18;
        case 0x1dde1cu: goto label_1dde1c;
        case 0x1dde20u: goto label_1dde20;
        case 0x1dde24u: goto label_1dde24;
        case 0x1dde28u: goto label_1dde28;
        case 0x1dde2cu: goto label_1dde2c;
        case 0x1dde30u: goto label_1dde30;
        case 0x1dde34u: goto label_1dde34;
        case 0x1dde38u: goto label_1dde38;
        case 0x1dde3cu: goto label_1dde3c;
        case 0x1dde40u: goto label_1dde40;
        case 0x1dde44u: goto label_1dde44;
        case 0x1dde48u: goto label_1dde48;
        case 0x1dde4cu: goto label_1dde4c;
        case 0x1dde50u: goto label_1dde50;
        case 0x1dde54u: goto label_1dde54;
        case 0x1dde58u: goto label_1dde58;
        case 0x1dde5cu: goto label_1dde5c;
        case 0x1dde60u: goto label_1dde60;
        case 0x1dde64u: goto label_1dde64;
        case 0x1dde68u: goto label_1dde68;
        case 0x1dde6cu: goto label_1dde6c;
        case 0x1dde70u: goto label_1dde70;
        case 0x1dde74u: goto label_1dde74;
        case 0x1dde78u: goto label_1dde78;
        case 0x1dde7cu: goto label_1dde7c;
        case 0x1dde80u: goto label_1dde80;
        case 0x1dde84u: goto label_1dde84;
        case 0x1dde88u: goto label_1dde88;
        case 0x1dde8cu: goto label_1dde8c;
        case 0x1dde90u: goto label_1dde90;
        case 0x1dde94u: goto label_1dde94;
        case 0x1dde98u: goto label_1dde98;
        case 0x1dde9cu: goto label_1dde9c;
        case 0x1ddea0u: goto label_1ddea0;
        case 0x1ddea4u: goto label_1ddea4;
        case 0x1ddea8u: goto label_1ddea8;
        case 0x1ddeacu: goto label_1ddeac;
        case 0x1ddeb0u: goto label_1ddeb0;
        case 0x1ddeb4u: goto label_1ddeb4;
        case 0x1ddeb8u: goto label_1ddeb8;
        case 0x1ddebcu: goto label_1ddebc;
        case 0x1ddec0u: goto label_1ddec0;
        case 0x1ddec4u: goto label_1ddec4;
        case 0x1ddec8u: goto label_1ddec8;
        case 0x1ddeccu: goto label_1ddecc;
        case 0x1dded0u: goto label_1dded0;
        case 0x1dded4u: goto label_1dded4;
        case 0x1dded8u: goto label_1dded8;
        case 0x1ddedcu: goto label_1ddedc;
        case 0x1ddee0u: goto label_1ddee0;
        case 0x1ddee4u: goto label_1ddee4;
        case 0x1ddee8u: goto label_1ddee8;
        case 0x1ddeecu: goto label_1ddeec;
        case 0x1ddef0u: goto label_1ddef0;
        case 0x1ddef4u: goto label_1ddef4;
        case 0x1ddef8u: goto label_1ddef8;
        case 0x1ddefcu: goto label_1ddefc;
        case 0x1ddf00u: goto label_1ddf00;
        case 0x1ddf04u: goto label_1ddf04;
        case 0x1ddf08u: goto label_1ddf08;
        case 0x1ddf0cu: goto label_1ddf0c;
        case 0x1ddf10u: goto label_1ddf10;
        case 0x1ddf14u: goto label_1ddf14;
        case 0x1ddf18u: goto label_1ddf18;
        case 0x1ddf1cu: goto label_1ddf1c;
        case 0x1ddf20u: goto label_1ddf20;
        case 0x1ddf24u: goto label_1ddf24;
        case 0x1ddf28u: goto label_1ddf28;
        case 0x1ddf2cu: goto label_1ddf2c;
        case 0x1ddf30u: goto label_1ddf30;
        case 0x1ddf34u: goto label_1ddf34;
        case 0x1ddf38u: goto label_1ddf38;
        case 0x1ddf3cu: goto label_1ddf3c;
        case 0x1ddf40u: goto label_1ddf40;
        case 0x1ddf44u: goto label_1ddf44;
        case 0x1ddf48u: goto label_1ddf48;
        case 0x1ddf4cu: goto label_1ddf4c;
        case 0x1ddf50u: goto label_1ddf50;
        case 0x1ddf54u: goto label_1ddf54;
        case 0x1ddf58u: goto label_1ddf58;
        case 0x1ddf5cu: goto label_1ddf5c;
        case 0x1ddf60u: goto label_1ddf60;
        case 0x1ddf64u: goto label_1ddf64;
        case 0x1ddf68u: goto label_1ddf68;
        case 0x1ddf6cu: goto label_1ddf6c;
        default: break;
    }

    ctx->pc = 0x1dd850u;

label_1dd850:
    // 0x1dd850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dd854:
    // 0x1dd854: 0x2ca10013  sltiu       $at, $a1, 0x13
    ctx->pc = 0x1dd854u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1dd858:
    // 0x1dd858: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1dd85c:
    // 0x1dd85c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dd85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dd860:
    // 0x1dd860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dd864:
    // 0x1dd864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dd868:
    // 0x1dd868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd86c:
    // 0x1dd86c: 0x1020014b  beqz        $at, . + 4 + (0x14B << 2)
label_1dd870:
    if (ctx->pc == 0x1DD870u) {
        ctx->pc = 0x1DD870u;
            // 0x1dd870: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD874u;
        goto label_1dd874;
    }
    ctx->pc = 0x1DD86Cu;
    {
        const bool branch_taken_0x1dd86c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD86Cu;
            // 0x1dd870: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd86c) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD874u;
label_1dd874:
    // 0x1dd874: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1dd874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1dd878:
    // 0x1dd878: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1dd878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1dd87c:
    // 0x1dd87c: 0x2484c7c0  addiu       $a0, $a0, -0x3840
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952896));
label_1dd880:
    // 0x1dd880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1dd884:
    // 0x1dd884: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd888:
    // 0x1dd888: 0x600008  jr          $v1
label_1dd88c:
    if (ctx->pc == 0x1DD88Cu) {
        ctx->pc = 0x1DD890u;
        goto label_1dd890;
    }
    ctx->pc = 0x1DD888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD890u: goto label_1dd890;
            case 0x1DD8C0u: goto label_1dd8c0;
            case 0x1DD948u: goto label_1dd948;
            case 0x1DD978u: goto label_1dd978;
            case 0x1DD9A8u: goto label_1dd9a8;
            case 0x1DD9D8u: goto label_1dd9d8;
            case 0x1DDA08u: goto label_1dda08;
            case 0x1DDA38u: goto label_1dda38;
            case 0x1DDA68u: goto label_1dda68;
            case 0x1DDAA4u: goto label_1ddaa4;
            case 0x1DDADCu: goto label_1ddadc;
            case 0x1DDB0Cu: goto label_1ddb0c;
            case 0x1DDBACu: goto label_1ddbac;
            case 0x1DDBDCu: goto label_1ddbdc;
            case 0x1DDC0Cu: goto label_1ddc0c;
            case 0x1DDC94u: goto label_1ddc94;
            case 0x1DDD1Cu: goto label_1ddd1c;
            case 0x1DDD48u: goto label_1ddd48;
            case 0x1DDD74u: goto label_1ddd74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD890u;
label_1dd890:
    // 0x1dd890: 0xc040180  jal         func_100600
label_1dd894:
    if (ctx->pc == 0x1DD894u) {
        ctx->pc = 0x1DD894u;
            // 0x1dd894: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DD898u;
        goto label_1dd898;
    }
    ctx->pc = 0x1DD890u;
    SET_GPR_U32(ctx, 31, 0x1DD898u);
    ctx->pc = 0x1DD894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD890u;
            // 0x1dd894: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD898u; }
        if (ctx->pc != 0x1DD898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD898u; }
        if (ctx->pc != 0x1DD898u) { return; }
    }
    ctx->pc = 0x1DD898u;
label_1dd898:
    // 0x1dd898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd89c:
    // 0x1dd89c: 0x5080013f  beql        $a0, $zero, . + 4 + (0x13F << 2)
label_1dd8a0:
    if (ctx->pc == 0x1DD8A0u) {
        ctx->pc = 0x1DD8A0u;
            // 0x1dd8a0: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DD8A4u;
        goto label_1dd8a4;
    }
    ctx->pc = 0x1DD89Cu;
    {
        const bool branch_taken_0x1dd89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd89c) {
            ctx->pc = 0x1DD8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD89Cu;
            // 0x1dd8a0: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD8A4u;
label_1dd8a4:
    // 0x1dd8a4: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1dd8a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dd8a8:
    // 0x1dd8a8: 0xc075c94  jal         func_1D7250
label_1dd8ac:
    if (ctx->pc == 0x1DD8ACu) {
        ctx->pc = 0x1DD8ACu;
            // 0x1dd8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8B0u;
        goto label_1dd8b0;
    }
    ctx->pc = 0x1DD8A8u;
    SET_GPR_U32(ctx, 31, 0x1DD8B0u);
    ctx->pc = 0x1DD8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8A8u;
            // 0x1dd8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7250u;
    if (runtime->hasFunction(0x1D7250u)) {
        auto targetFn = runtime->lookupFunction(0x1D7250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8B0u; }
        if (ctx->pc != 0x1DD8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7250_0x1d7250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8B0u; }
        if (ctx->pc != 0x1DD8B0u) { return; }
    }
    ctx->pc = 0x1DD8B0u;
label_1dd8b0:
    // 0x1dd8b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8b4:
    // 0x1dd8b4: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1dd8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1dd8b8:
    // 0x1dd8b8: 0x10000138  b           . + 4 + (0x138 << 2)
label_1dd8bc:
    if (ctx->pc == 0x1DD8BCu) {
        ctx->pc = 0x1DD8C0u;
        goto label_1dd8c0;
    }
    ctx->pc = 0x1DD8B8u;
    {
        const bool branch_taken_0x1dd8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8b8) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD8C0u;
label_1dd8c0:
    // 0x1dd8c0: 0xc040180  jal         func_100600
label_1dd8c4:
    if (ctx->pc == 0x1DD8C4u) {
        ctx->pc = 0x1DD8C4u;
            // 0x1dd8c4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DD8C8u;
        goto label_1dd8c8;
    }
    ctx->pc = 0x1DD8C0u;
    SET_GPR_U32(ctx, 31, 0x1DD8C8u);
    ctx->pc = 0x1DD8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8C0u;
            // 0x1dd8c4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8C8u; }
        if (ctx->pc != 0x1DD8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8C8u; }
        if (ctx->pc != 0x1DD8C8u) { return; }
    }
    ctx->pc = 0x1DD8C8u;
label_1dd8c8:
    // 0x1dd8c8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1dd8cc:
    if (ctx->pc == 0x1DD8CCu) {
        ctx->pc = 0x1DD8CCu;
            // 0x1dd8cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8D0u;
        goto label_1dd8d0;
    }
    ctx->pc = 0x1DD8C8u;
    {
        const bool branch_taken_0x1dd8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8C8u;
            // 0x1dd8cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8c8) {
            ctx->pc = 0x1DD940u;
            goto label_1dd940;
        }
    }
    ctx->pc = 0x1DD8D0u;
label_1dd8d0:
    // 0x1dd8d0: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1dd8d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dd8d4:
    // 0x1dd8d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dd8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8d8:
    // 0x1dd8d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8dc:
    // 0x1dd8dc: 0xc10f6ec  jal         func_43DBB0
label_1dd8e0:
    if (ctx->pc == 0x1DD8E0u) {
        ctx->pc = 0x1DD8E0u;
            // 0x1dd8e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DD8E4u;
        goto label_1dd8e4;
    }
    ctx->pc = 0x1DD8DCu;
    SET_GPR_U32(ctx, 31, 0x1DD8E4u);
    ctx->pc = 0x1DD8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8DCu;
            // 0x1dd8e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8E4u; }
        if (ctx->pc != 0x1DD8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8E4u; }
        if (ctx->pc != 0x1DD8E4u) { return; }
    }
    ctx->pc = 0x1DD8E4u;
label_1dd8e4:
    // 0x1dd8e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1dd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1dd8e8:
    // 0x1dd8e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1dd8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dd8ec:
    // 0x1dd8ec: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x1dd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_1dd8f0:
    // 0x1dd8f0: 0xc040180  jal         func_100600
label_1dd8f4:
    if (ctx->pc == 0x1DD8F4u) {
        ctx->pc = 0x1DD8F4u;
            // 0x1dd8f4: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1DD8F8u;
        goto label_1dd8f8;
    }
    ctx->pc = 0x1DD8F0u;
    SET_GPR_U32(ctx, 31, 0x1DD8F8u);
    ctx->pc = 0x1DD8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8F0u;
            // 0x1dd8f4: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8F8u; }
        if (ctx->pc != 0x1DD8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD8F8u; }
        if (ctx->pc != 0x1DD8F8u) { return; }
    }
    ctx->pc = 0x1DD8F8u;
label_1dd8f8:
    // 0x1dd8f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd8fc:
    // 0x1dd8fc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_1dd900:
    if (ctx->pc == 0x1DD900u) {
        ctx->pc = 0x1DD900u;
            // 0x1dd900: 0xae50006c  sw          $s0, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
        ctx->pc = 0x1DD904u;
        goto label_1dd904;
    }
    ctx->pc = 0x1DD8FCu;
    {
        const bool branch_taken_0x1dd8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8fc) {
            ctx->pc = 0x1DD900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8FCu;
            // 0x1dd900: 0xae50006c  sw          $s0, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD940u;
            goto label_1dd940;
        }
    }
    ctx->pc = 0x1DD904u;
label_1dd904:
    // 0x1dd904: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dd904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1dd908:
    // 0x1dd908: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_1dd90c:
    // 0x1dd90c: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x1dd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_1dd910:
    // 0x1dd910: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x1dd910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_1dd914:
    // 0x1dd914: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x1dd914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dd918:
    // 0x1dd918: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dd91c:
    // 0x1dd91c: 0x320f809  jalr        $t9
label_1dd920:
    if (ctx->pc == 0x1DD920u) {
        ctx->pc = 0x1DD920u;
            // 0x1dd920: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DD924u;
        goto label_1dd924;
    }
    ctx->pc = 0x1DD91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD924u);
        ctx->pc = 0x1DD920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD91Cu;
            // 0x1dd920: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD924u; }
            if (ctx->pc != 0x1DD924u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD924u;
label_1dd924:
    // 0x1dd924: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1dd924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1dd928:
    // 0x1dd928: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x1dd928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_1dd92c:
    // 0x1dd92c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1dd92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1dd930:
    // 0x1dd930: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1dd930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1dd934:
    // 0x1dd934: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1dd934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_1dd938:
    // 0x1dd938: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1dd938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_1dd93c:
    // 0x1dd93c: 0xae50006c  sw          $s0, 0x6C($s2)
    ctx->pc = 0x1dd93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 16));
label_1dd940:
    // 0x1dd940: 0x10000116  b           . + 4 + (0x116 << 2)
label_1dd944:
    if (ctx->pc == 0x1DD944u) {
        ctx->pc = 0x1DD944u;
            // 0x1dd944: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->pc = 0x1DD948u;
        goto label_1dd948;
    }
    ctx->pc = 0x1DD940u;
    {
        const bool branch_taken_0x1dd940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD940u;
            // 0x1dd944: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd940) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD948u;
label_1dd948:
    // 0x1dd948: 0xc040180  jal         func_100600
label_1dd94c:
    if (ctx->pc == 0x1DD94Cu) {
        ctx->pc = 0x1DD94Cu;
            // 0x1dd94c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DD950u;
        goto label_1dd950;
    }
    ctx->pc = 0x1DD948u;
    SET_GPR_U32(ctx, 31, 0x1DD950u);
    ctx->pc = 0x1DD94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD948u;
            // 0x1dd94c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD950u; }
        if (ctx->pc != 0x1DD950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD950u; }
        if (ctx->pc != 0x1DD950u) { return; }
    }
    ctx->pc = 0x1DD950u;
label_1dd950:
    // 0x1dd950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd954:
    // 0x1dd954: 0x50800111  beql        $a0, $zero, . + 4 + (0x111 << 2)
label_1dd958:
    if (ctx->pc == 0x1DD958u) {
        ctx->pc = 0x1DD958u;
            // 0x1dd958: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DD95Cu;
        goto label_1dd95c;
    }
    ctx->pc = 0x1DD954u;
    {
        const bool branch_taken_0x1dd954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd954) {
            ctx->pc = 0x1DD958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD954u;
            // 0x1dd958: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD95Cu;
label_1dd95c:
    // 0x1dd95c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1dd95cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dd960:
    // 0x1dd960: 0xc0c4c90  jal         func_313240
label_1dd964:
    if (ctx->pc == 0x1DD964u) {
        ctx->pc = 0x1DD964u;
            // 0x1dd964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD968u;
        goto label_1dd968;
    }
    ctx->pc = 0x1DD960u;
    SET_GPR_U32(ctx, 31, 0x1DD968u);
    ctx->pc = 0x1DD964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD960u;
            // 0x1dd964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x313240u;
    if (runtime->hasFunction(0x313240u)) {
        auto targetFn = runtime->lookupFunction(0x313240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD968u; }
        if (ctx->pc != 0x1DD968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00313240_0x313240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD968u; }
        if (ctx->pc != 0x1DD968u) { return; }
    }
    ctx->pc = 0x1DD968u;
label_1dd968:
    // 0x1dd968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd96c:
    // 0x1dd96c: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1dd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1dd970:
    // 0x1dd970: 0x1000010a  b           . + 4 + (0x10A << 2)
label_1dd974:
    if (ctx->pc == 0x1DD974u) {
        ctx->pc = 0x1DD978u;
        goto label_1dd978;
    }
    ctx->pc = 0x1DD970u;
    {
        const bool branch_taken_0x1dd970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd970) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD978u;
label_1dd978:
    // 0x1dd978: 0xc040180  jal         func_100600
label_1dd97c:
    if (ctx->pc == 0x1DD97Cu) {
        ctx->pc = 0x1DD97Cu;
            // 0x1dd97c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DD980u;
        goto label_1dd980;
    }
    ctx->pc = 0x1DD978u;
    SET_GPR_U32(ctx, 31, 0x1DD980u);
    ctx->pc = 0x1DD97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD978u;
            // 0x1dd97c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD980u; }
        if (ctx->pc != 0x1DD980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD980u; }
        if (ctx->pc != 0x1DD980u) { return; }
    }
    ctx->pc = 0x1DD980u;
label_1dd980:
    // 0x1dd980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd984:
    // 0x1dd984: 0x50800105  beql        $a0, $zero, . + 4 + (0x105 << 2)
label_1dd988:
    if (ctx->pc == 0x1DD988u) {
        ctx->pc = 0x1DD988u;
            // 0x1dd988: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DD98Cu;
        goto label_1dd98c;
    }
    ctx->pc = 0x1DD984u;
    {
        const bool branch_taken_0x1dd984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd984) {
            ctx->pc = 0x1DD988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD984u;
            // 0x1dd988: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD98Cu;
label_1dd98c:
    // 0x1dd98c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1dd98cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dd990:
    // 0x1dd990: 0xc0c41b8  jal         func_3106E0
label_1dd994:
    if (ctx->pc == 0x1DD994u) {
        ctx->pc = 0x1DD994u;
            // 0x1dd994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD998u;
        goto label_1dd998;
    }
    ctx->pc = 0x1DD990u;
    SET_GPR_U32(ctx, 31, 0x1DD998u);
    ctx->pc = 0x1DD994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD990u;
            // 0x1dd994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3106E0u;
    if (runtime->hasFunction(0x3106E0u)) {
        auto targetFn = runtime->lookupFunction(0x3106E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD998u; }
        if (ctx->pc != 0x1DD998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003106E0_0x3106e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD998u; }
        if (ctx->pc != 0x1DD998u) { return; }
    }
    ctx->pc = 0x1DD998u;
label_1dd998:
    // 0x1dd998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd99c:
    // 0x1dd99c: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1dd99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1dd9a0:
    // 0x1dd9a0: 0x100000fe  b           . + 4 + (0xFE << 2)
label_1dd9a4:
    if (ctx->pc == 0x1DD9A4u) {
        ctx->pc = 0x1DD9A8u;
        goto label_1dd9a8;
    }
    ctx->pc = 0x1DD9A0u;
    {
        const bool branch_taken_0x1dd9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd9a0) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD9A8u;
label_1dd9a8:
    // 0x1dd9a8: 0xc040180  jal         func_100600
label_1dd9ac:
    if (ctx->pc == 0x1DD9ACu) {
        ctx->pc = 0x1DD9ACu;
            // 0x1dd9ac: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DD9B0u;
        goto label_1dd9b0;
    }
    ctx->pc = 0x1DD9A8u;
    SET_GPR_U32(ctx, 31, 0x1DD9B0u);
    ctx->pc = 0x1DD9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9A8u;
            // 0x1dd9ac: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9B0u; }
        if (ctx->pc != 0x1DD9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9B0u; }
        if (ctx->pc != 0x1DD9B0u) { return; }
    }
    ctx->pc = 0x1DD9B0u;
label_1dd9b0:
    // 0x1dd9b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9b4:
    // 0x1dd9b4: 0x508000f9  beql        $a0, $zero, . + 4 + (0xF9 << 2)
label_1dd9b8:
    if (ctx->pc == 0x1DD9B8u) {
        ctx->pc = 0x1DD9B8u;
            // 0x1dd9b8: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DD9BCu;
        goto label_1dd9bc;
    }
    ctx->pc = 0x1DD9B4u;
    {
        const bool branch_taken_0x1dd9b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd9b4) {
            ctx->pc = 0x1DD9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9B4u;
            // 0x1dd9b8: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD9BCu;
label_1dd9bc:
    // 0x1dd9bc: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1dd9bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dd9c0:
    // 0x1dd9c0: 0xc0c4a54  jal         func_312950
label_1dd9c4:
    if (ctx->pc == 0x1DD9C4u) {
        ctx->pc = 0x1DD9C4u;
            // 0x1dd9c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9C8u;
        goto label_1dd9c8;
    }
    ctx->pc = 0x1DD9C0u;
    SET_GPR_U32(ctx, 31, 0x1DD9C8u);
    ctx->pc = 0x1DD9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9C0u;
            // 0x1dd9c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312950u;
    if (runtime->hasFunction(0x312950u)) {
        auto targetFn = runtime->lookupFunction(0x312950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9C8u; }
        if (ctx->pc != 0x1DD9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312950_0x312950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9C8u; }
        if (ctx->pc != 0x1DD9C8u) { return; }
    }
    ctx->pc = 0x1DD9C8u;
label_1dd9c8:
    // 0x1dd9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9cc:
    // 0x1dd9cc: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1dd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1dd9d0:
    // 0x1dd9d0: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_1dd9d4:
    if (ctx->pc == 0x1DD9D4u) {
        ctx->pc = 0x1DD9D8u;
        goto label_1dd9d8;
    }
    ctx->pc = 0x1DD9D0u;
    {
        const bool branch_taken_0x1dd9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd9d0) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD9D8u;
label_1dd9d8:
    // 0x1dd9d8: 0xc040180  jal         func_100600
label_1dd9dc:
    if (ctx->pc == 0x1DD9DCu) {
        ctx->pc = 0x1DD9DCu;
            // 0x1dd9dc: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DD9E0u;
        goto label_1dd9e0;
    }
    ctx->pc = 0x1DD9D8u;
    SET_GPR_U32(ctx, 31, 0x1DD9E0u);
    ctx->pc = 0x1DD9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9D8u;
            // 0x1dd9dc: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9E0u; }
        if (ctx->pc != 0x1DD9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9E0u; }
        if (ctx->pc != 0x1DD9E0u) { return; }
    }
    ctx->pc = 0x1DD9E0u;
label_1dd9e0:
    // 0x1dd9e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9e4:
    // 0x1dd9e4: 0x508000ed  beql        $a0, $zero, . + 4 + (0xED << 2)
label_1dd9e8:
    if (ctx->pc == 0x1DD9E8u) {
        ctx->pc = 0x1DD9E8u;
            // 0x1dd9e8: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DD9ECu;
        goto label_1dd9ec;
    }
    ctx->pc = 0x1DD9E4u;
    {
        const bool branch_taken_0x1dd9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd9e4) {
            ctx->pc = 0x1DD9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9E4u;
            // 0x1dd9e8: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DD9ECu;
label_1dd9ec:
    // 0x1dd9ec: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1dd9ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dd9f0:
    // 0x1dd9f0: 0xc0c52c4  jal         func_314B10
label_1dd9f4:
    if (ctx->pc == 0x1DD9F4u) {
        ctx->pc = 0x1DD9F4u;
            // 0x1dd9f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9F8u;
        goto label_1dd9f8;
    }
    ctx->pc = 0x1DD9F0u;
    SET_GPR_U32(ctx, 31, 0x1DD9F8u);
    ctx->pc = 0x1DD9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD9F0u;
            // 0x1dd9f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x314B10u;
    if (runtime->hasFunction(0x314B10u)) {
        auto targetFn = runtime->lookupFunction(0x314B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9F8u; }
        if (ctx->pc != 0x1DD9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00314B10_0x314b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD9F8u; }
        if (ctx->pc != 0x1DD9F8u) { return; }
    }
    ctx->pc = 0x1DD9F8u;
label_1dd9f8:
    // 0x1dd9f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9fc:
    // 0x1dd9fc: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1dd9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1dda00:
    // 0x1dda00: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_1dda04:
    if (ctx->pc == 0x1DDA04u) {
        ctx->pc = 0x1DDA08u;
        goto label_1dda08;
    }
    ctx->pc = 0x1DDA00u;
    {
        const bool branch_taken_0x1dda00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda00) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDA08u;
label_1dda08:
    // 0x1dda08: 0xc040180  jal         func_100600
label_1dda0c:
    if (ctx->pc == 0x1DDA0Cu) {
        ctx->pc = 0x1DDA0Cu;
            // 0x1dda0c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DDA10u;
        goto label_1dda10;
    }
    ctx->pc = 0x1DDA08u;
    SET_GPR_U32(ctx, 31, 0x1DDA10u);
    ctx->pc = 0x1DDA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA08u;
            // 0x1dda0c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA10u; }
        if (ctx->pc != 0x1DDA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA10u; }
        if (ctx->pc != 0x1DDA10u) { return; }
    }
    ctx->pc = 0x1DDA10u;
label_1dda10:
    // 0x1dda10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dda10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dda14:
    // 0x1dda14: 0x508000e1  beql        $a0, $zero, . + 4 + (0xE1 << 2)
label_1dda18:
    if (ctx->pc == 0x1DDA18u) {
        ctx->pc = 0x1DDA18u;
            // 0x1dda18: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDA1Cu;
        goto label_1dda1c;
    }
    ctx->pc = 0x1DDA14u;
    {
        const bool branch_taken_0x1dda14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda14) {
            ctx->pc = 0x1DDA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA14u;
            // 0x1dda18: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDA1Cu;
label_1dda1c:
    // 0x1dda1c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1dda1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dda20:
    // 0x1dda20: 0xc0c5854  jal         func_316150
label_1dda24:
    if (ctx->pc == 0x1DDA24u) {
        ctx->pc = 0x1DDA24u;
            // 0x1dda24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA28u;
        goto label_1dda28;
    }
    ctx->pc = 0x1DDA20u;
    SET_GPR_U32(ctx, 31, 0x1DDA28u);
    ctx->pc = 0x1DDA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA20u;
            // 0x1dda24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316150u;
    if (runtime->hasFunction(0x316150u)) {
        auto targetFn = runtime->lookupFunction(0x316150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA28u; }
        if (ctx->pc != 0x1DDA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316150_0x316150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA28u; }
        if (ctx->pc != 0x1DDA28u) { return; }
    }
    ctx->pc = 0x1DDA28u;
label_1dda28:
    // 0x1dda28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dda28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dda2c:
    // 0x1dda2c: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1dda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1dda30:
    // 0x1dda30: 0x100000da  b           . + 4 + (0xDA << 2)
label_1dda34:
    if (ctx->pc == 0x1DDA34u) {
        ctx->pc = 0x1DDA38u;
        goto label_1dda38;
    }
    ctx->pc = 0x1DDA30u;
    {
        const bool branch_taken_0x1dda30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda30) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDA38u;
label_1dda38:
    // 0x1dda38: 0xc040180  jal         func_100600
label_1dda3c:
    if (ctx->pc == 0x1DDA3Cu) {
        ctx->pc = 0x1DDA3Cu;
            // 0x1dda3c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1DDA40u;
        goto label_1dda40;
    }
    ctx->pc = 0x1DDA38u;
    SET_GPR_U32(ctx, 31, 0x1DDA40u);
    ctx->pc = 0x1DDA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA38u;
            // 0x1dda3c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA40u; }
        if (ctx->pc != 0x1DDA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA40u; }
        if (ctx->pc != 0x1DDA40u) { return; }
    }
    ctx->pc = 0x1DDA40u;
label_1dda40:
    // 0x1dda40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dda40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dda44:
    // 0x1dda44: 0x508000d5  beql        $a0, $zero, . + 4 + (0xD5 << 2)
label_1dda48:
    if (ctx->pc == 0x1DDA48u) {
        ctx->pc = 0x1DDA48u;
            // 0x1dda48: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDA4Cu;
        goto label_1dda4c;
    }
    ctx->pc = 0x1DDA44u;
    {
        const bool branch_taken_0x1dda44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda44) {
            ctx->pc = 0x1DDA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA44u;
            // 0x1dda48: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDA4Cu;
label_1dda4c:
    // 0x1dda4c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1dda4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dda50:
    // 0x1dda50: 0xc0c479c  jal         func_311E70
label_1dda54:
    if (ctx->pc == 0x1DDA54u) {
        ctx->pc = 0x1DDA54u;
            // 0x1dda54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA58u;
        goto label_1dda58;
    }
    ctx->pc = 0x1DDA50u;
    SET_GPR_U32(ctx, 31, 0x1DDA58u);
    ctx->pc = 0x1DDA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA50u;
            // 0x1dda54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311E70u;
    if (runtime->hasFunction(0x311E70u)) {
        auto targetFn = runtime->lookupFunction(0x311E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA58u; }
        if (ctx->pc != 0x1DDA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311E70_0x311e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA58u; }
        if (ctx->pc != 0x1DDA58u) { return; }
    }
    ctx->pc = 0x1DDA58u;
label_1dda58:
    // 0x1dda58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dda58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dda5c:
    // 0x1dda5c: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1dda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1dda60:
    // 0x1dda60: 0x100000ce  b           . + 4 + (0xCE << 2)
label_1dda64:
    if (ctx->pc == 0x1DDA64u) {
        ctx->pc = 0x1DDA68u;
        goto label_1dda68;
    }
    ctx->pc = 0x1DDA60u;
    {
        const bool branch_taken_0x1dda60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda60) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDA68u;
label_1dda68:
    // 0x1dda68: 0xc040180  jal         func_100600
label_1dda6c:
    if (ctx->pc == 0x1DDA6Cu) {
        ctx->pc = 0x1DDA6Cu;
            // 0x1dda6c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DDA70u;
        goto label_1dda70;
    }
    ctx->pc = 0x1DDA68u;
    SET_GPR_U32(ctx, 31, 0x1DDA70u);
    ctx->pc = 0x1DDA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA68u;
            // 0x1dda6c: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA70u; }
        if (ctx->pc != 0x1DDA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA70u; }
        if (ctx->pc != 0x1DDA70u) { return; }
    }
    ctx->pc = 0x1DDA70u;
label_1dda70:
    // 0x1dda70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1dda74:
    if (ctx->pc == 0x1DDA74u) {
        ctx->pc = 0x1DDA74u;
            // 0x1dda74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA78u;
        goto label_1dda78;
    }
    ctx->pc = 0x1DDA70u;
    {
        const bool branch_taken_0x1dda70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA70u;
            // 0x1dda74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda70) {
            ctx->pc = 0x1DDA9Cu;
            goto label_1dda9c;
        }
    }
    ctx->pc = 0x1DDA78u;
label_1dda78:
    // 0x1dda78: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1dda78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dda7c:
    // 0x1dda7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dda7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dda80:
    // 0x1dda80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dda80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dda84:
    // 0x1dda84: 0xc10f6ec  jal         func_43DBB0
label_1dda88:
    if (ctx->pc == 0x1DDA88u) {
        ctx->pc = 0x1DDA88u;
            // 0x1dda88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1DDA8Cu;
        goto label_1dda8c;
    }
    ctx->pc = 0x1DDA84u;
    SET_GPR_U32(ctx, 31, 0x1DDA8Cu);
    ctx->pc = 0x1DDA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA84u;
            // 0x1dda88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA8Cu; }
        if (ctx->pc != 0x1DDA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDA8Cu; }
        if (ctx->pc != 0x1DDA8Cu) { return; }
    }
    ctx->pc = 0x1DDA8Cu;
label_1dda8c:
    // 0x1dda8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1dda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1dda90:
    // 0x1dda90: 0x2463d2d0  addiu       $v1, $v1, -0x2D30
    ctx->pc = 0x1dda90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955728));
label_1dda94:
    // 0x1dda94: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1dda94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1dda98:
    // 0x1dda98: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1dda98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_1dda9c:
    // 0x1dda9c: 0x100000bf  b           . + 4 + (0xBF << 2)
label_1ddaa0:
    if (ctx->pc == 0x1DDAA0u) {
        ctx->pc = 0x1DDAA0u;
            // 0x1ddaa0: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->pc = 0x1DDAA4u;
        goto label_1ddaa4;
    }
    ctx->pc = 0x1DDA9Cu;
    {
        const bool branch_taken_0x1dda9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDA9Cu;
            // 0x1ddaa0: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda9c) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDAA4u;
label_1ddaa4:
    // 0x1ddaa4: 0xc040180  jal         func_100600
label_1ddaa8:
    if (ctx->pc == 0x1DDAA8u) {
        ctx->pc = 0x1DDAA8u;
            // 0x1ddaa8: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x1DDAACu;
        goto label_1ddaac;
    }
    ctx->pc = 0x1DDAA4u;
    SET_GPR_U32(ctx, 31, 0x1DDAACu);
    ctx->pc = 0x1DDAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAA4u;
            // 0x1ddaa8: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAACu; }
        if (ctx->pc != 0x1DDAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAACu; }
        if (ctx->pc != 0x1DDAACu) { return; }
    }
    ctx->pc = 0x1DDAACu;
label_1ddaac:
    // 0x1ddaac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ddab0:
    if (ctx->pc == 0x1DDAB0u) {
        ctx->pc = 0x1DDAB0u;
            // 0x1ddab0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAB4u;
        goto label_1ddab4;
    }
    ctx->pc = 0x1DDAACu;
    {
        const bool branch_taken_0x1ddaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAACu;
            // 0x1ddab0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddaac) {
            ctx->pc = 0x1DDAD4u;
            goto label_1ddad4;
        }
    }
    ctx->pc = 0x1DDAB4u;
label_1ddab4:
    // 0x1ddab4: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1ddab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddab8:
    // 0x1ddab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ddab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ddabc:
    // 0x1ddabc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ddabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ddac0:
    // 0x1ddac0: 0xc10f6ec  jal         func_43DBB0
label_1ddac4:
    if (ctx->pc == 0x1DDAC4u) {
        ctx->pc = 0x1DDAC4u;
            // 0x1ddac4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1DDAC8u;
        goto label_1ddac8;
    }
    ctx->pc = 0x1DDAC0u;
    SET_GPR_U32(ctx, 31, 0x1DDAC8u);
    ctx->pc = 0x1DDAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAC0u;
            // 0x1ddac4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAC8u; }
        if (ctx->pc != 0x1DDAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAC8u; }
        if (ctx->pc != 0x1DDAC8u) { return; }
    }
    ctx->pc = 0x1DDAC8u;
label_1ddac8:
    // 0x1ddac8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ddac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ddacc:
    // 0x1ddacc: 0x2463d290  addiu       $v1, $v1, -0x2D70
    ctx->pc = 0x1ddaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955664));
label_1ddad0:
    // 0x1ddad0: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1ddad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1ddad4:
    // 0x1ddad4: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1ddad8:
    if (ctx->pc == 0x1DDAD8u) {
        ctx->pc = 0x1DDAD8u;
            // 0x1ddad8: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->pc = 0x1DDADCu;
        goto label_1ddadc;
    }
    ctx->pc = 0x1DDAD4u;
    {
        const bool branch_taken_0x1ddad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAD4u;
            // 0x1ddad8: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddad4) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDADCu;
label_1ddadc:
    // 0x1ddadc: 0xc040180  jal         func_100600
label_1ddae0:
    if (ctx->pc == 0x1DDAE0u) {
        ctx->pc = 0x1DDAE0u;
            // 0x1ddae0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DDAE4u;
        goto label_1ddae4;
    }
    ctx->pc = 0x1DDADCu;
    SET_GPR_U32(ctx, 31, 0x1DDAE4u);
    ctx->pc = 0x1DDAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDADCu;
            // 0x1ddae0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAE4u; }
        if (ctx->pc != 0x1DDAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAE4u; }
        if (ctx->pc != 0x1DDAE4u) { return; }
    }
    ctx->pc = 0x1DDAE4u;
label_1ddae4:
    // 0x1ddae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddae8:
    // 0x1ddae8: 0x508000ac  beql        $a0, $zero, . + 4 + (0xAC << 2)
label_1ddaec:
    if (ctx->pc == 0x1DDAECu) {
        ctx->pc = 0x1DDAECu;
            // 0x1ddaec: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDAF0u;
        goto label_1ddaf0;
    }
    ctx->pc = 0x1DDAE8u;
    {
        const bool branch_taken_0x1ddae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddae8) {
            ctx->pc = 0x1DDAECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAE8u;
            // 0x1ddaec: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDAF0u;
label_1ddaf0:
    // 0x1ddaf0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1ddaf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddaf4:
    // 0x1ddaf4: 0xc0c50f4  jal         func_3143D0
label_1ddaf8:
    if (ctx->pc == 0x1DDAF8u) {
        ctx->pc = 0x1DDAF8u;
            // 0x1ddaf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDAFCu;
        goto label_1ddafc;
    }
    ctx->pc = 0x1DDAF4u;
    SET_GPR_U32(ctx, 31, 0x1DDAFCu);
    ctx->pc = 0x1DDAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDAF4u;
            // 0x1ddaf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3143D0u;
    if (runtime->hasFunction(0x3143D0u)) {
        auto targetFn = runtime->lookupFunction(0x3143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAFCu; }
        if (ctx->pc != 0x1DDAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003143D0_0x3143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDAFCu; }
        if (ctx->pc != 0x1DDAFCu) { return; }
    }
    ctx->pc = 0x1DDAFCu;
label_1ddafc:
    // 0x1ddafc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb00:
    // 0x1ddb00: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1ddb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1ddb04:
    // 0x1ddb04: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_1ddb08:
    if (ctx->pc == 0x1DDB08u) {
        ctx->pc = 0x1DDB0Cu;
        goto label_1ddb0c;
    }
    ctx->pc = 0x1DDB04u;
    {
        const bool branch_taken_0x1ddb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb04) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDB0Cu;
label_1ddb0c:
    // 0x1ddb0c: 0xc040180  jal         func_100600
label_1ddb10:
    if (ctx->pc == 0x1DDB10u) {
        ctx->pc = 0x1DDB10u;
            // 0x1ddb10: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->pc = 0x1DDB14u;
        goto label_1ddb14;
    }
    ctx->pc = 0x1DDB0Cu;
    SET_GPR_U32(ctx, 31, 0x1DDB14u);
    ctx->pc = 0x1DDB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB0Cu;
            // 0x1ddb10: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB14u; }
        if (ctx->pc != 0x1DDB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB14u; }
        if (ctx->pc != 0x1DDB14u) { return; }
    }
    ctx->pc = 0x1DDB14u;
label_1ddb14:
    // 0x1ddb14: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1ddb18:
    if (ctx->pc == 0x1DDB18u) {
        ctx->pc = 0x1DDB18u;
            // 0x1ddb18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB1Cu;
        goto label_1ddb1c;
    }
    ctx->pc = 0x1DDB14u;
    {
        const bool branch_taken_0x1ddb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB14u;
            // 0x1ddb18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb14) {
            ctx->pc = 0x1DDBA4u;
            goto label_1ddba4;
        }
    }
    ctx->pc = 0x1DDB1Cu;
label_1ddb1c:
    // 0x1ddb1c: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1ddb1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddb20:
    // 0x1ddb20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ddb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb24:
    // 0x1ddb24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ddb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb28:
    // 0x1ddb28: 0xc10f6ec  jal         func_43DBB0
label_1ddb2c:
    if (ctx->pc == 0x1DDB2Cu) {
        ctx->pc = 0x1DDB2Cu;
            // 0x1ddb2c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1DDB30u;
        goto label_1ddb30;
    }
    ctx->pc = 0x1DDB28u;
    SET_GPR_U32(ctx, 31, 0x1DDB30u);
    ctx->pc = 0x1DDB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB28u;
            // 0x1ddb2c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB30u; }
        if (ctx->pc != 0x1DDB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB30u; }
        if (ctx->pc != 0x1DDB30u) { return; }
    }
    ctx->pc = 0x1DDB30u;
label_1ddb30:
    // 0x1ddb30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddb34:
    // 0x1ddb34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ddb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ddb38:
    // 0x1ddb38: 0x2442d250  addiu       $v0, $v0, -0x2DB0
    ctx->pc = 0x1ddb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955600));
label_1ddb3c:
    // 0x1ddb3c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1ddb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_1ddb40:
    // 0x1ddb40: 0xae400150  sw          $zero, 0x150($s2)
    ctx->pc = 0x1ddb40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
label_1ddb44:
    // 0x1ddb44: 0xc040180  jal         func_100600
label_1ddb48:
    if (ctx->pc == 0x1DDB48u) {
        ctx->pc = 0x1DDB48u;
            // 0x1ddb48: 0xae400154  sw          $zero, 0x154($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 0));
        ctx->pc = 0x1DDB4Cu;
        goto label_1ddb4c;
    }
    ctx->pc = 0x1DDB44u;
    SET_GPR_U32(ctx, 31, 0x1DDB4Cu);
    ctx->pc = 0x1DDB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB44u;
            // 0x1ddb48: 0xae400154  sw          $zero, 0x154($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB4Cu; }
        if (ctx->pc != 0x1DDB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB4Cu; }
        if (ctx->pc != 0x1DDB4Cu) { return; }
    }
    ctx->pc = 0x1DDB4Cu;
label_1ddb4c:
    // 0x1ddb4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ddb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb50:
    // 0x1ddb50: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_1ddb54:
    if (ctx->pc == 0x1DDB54u) {
        ctx->pc = 0x1DDB54u;
            // 0x1ddb54: 0x26440120  addiu       $a0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->pc = 0x1DDB58u;
        goto label_1ddb58;
    }
    ctx->pc = 0x1DDB50u;
    {
        const bool branch_taken_0x1ddb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb50) {
            ctx->pc = 0x1DDB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB50u;
            // 0x1ddb54: 0x26440120  addiu       $a0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDB94u;
            goto label_1ddb94;
        }
    }
    ctx->pc = 0x1DDB58u;
label_1ddb58:
    // 0x1ddb58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1ddb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1ddb5c:
    // 0x1ddb5c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1ddb60:
    // 0x1ddb60: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x1ddb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_1ddb64:
    // 0x1ddb64: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x1ddb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_1ddb68:
    // 0x1ddb68: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ddb6c:
    // 0x1ddb6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ddb70:
    // 0x1ddb70: 0x320f809  jalr        $t9
label_1ddb74:
    if (ctx->pc == 0x1DDB74u) {
        ctx->pc = 0x1DDB74u;
            // 0x1ddb74: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DDB78u;
        goto label_1ddb78;
    }
    ctx->pc = 0x1DDB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDB78u);
        ctx->pc = 0x1DDB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB70u;
            // 0x1ddb74: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DDB78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DDB78u; }
            if (ctx->pc != 0x1DDB78u) { return; }
        }
        }
    }
    ctx->pc = 0x1DDB78u;
label_1ddb78:
    // 0x1ddb78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1ddb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1ddb7c:
    // 0x1ddb7c: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_1ddb80:
    // 0x1ddb80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ddb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ddb84:
    // 0x1ddb84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ddb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ddb88:
    // 0x1ddb88: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1ddb88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_1ddb8c:
    // 0x1ddb8c: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1ddb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_1ddb90:
    // 0x1ddb90: 0x26440120  addiu       $a0, $s2, 0x120
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_1ddb94:
    // 0x1ddb94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb98:
    // 0x1ddb98: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ddb9c:
    // 0x1ddb9c: 0xc04a576  jal         func_1295D8
label_1ddba0:
    if (ctx->pc == 0x1DDBA0u) {
        ctx->pc = 0x1DDBA0u;
            // 0x1ddba0: 0xae500150  sw          $s0, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 16));
        ctx->pc = 0x1DDBA4u;
        goto label_1ddba4;
    }
    ctx->pc = 0x1DDB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DDBA4u);
    ctx->pc = 0x1DDBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDB9Cu;
            // 0x1ddba0: 0xae500150  sw          $s0, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBA4u; }
        if (ctx->pc != 0x1DDBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBA4u; }
        if (ctx->pc != 0x1DDBA4u) { return; }
    }
    ctx->pc = 0x1DDBA4u;
label_1ddba4:
    // 0x1ddba4: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1ddba8:
    if (ctx->pc == 0x1DDBA8u) {
        ctx->pc = 0x1DDBA8u;
            // 0x1ddba8: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->pc = 0x1DDBACu;
        goto label_1ddbac;
    }
    ctx->pc = 0x1DDBA4u;
    {
        const bool branch_taken_0x1ddba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBA4u;
            // 0x1ddba8: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddba4) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDBACu;
label_1ddbac:
    // 0x1ddbac: 0xc040180  jal         func_100600
label_1ddbb0:
    if (ctx->pc == 0x1DDBB0u) {
        ctx->pc = 0x1DDBB0u;
            // 0x1ddbb0: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x1DDBB4u;
        goto label_1ddbb4;
    }
    ctx->pc = 0x1DDBACu;
    SET_GPR_U32(ctx, 31, 0x1DDBB4u);
    ctx->pc = 0x1DDBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBACu;
            // 0x1ddbb0: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBB4u; }
        if (ctx->pc != 0x1DDBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBB4u; }
        if (ctx->pc != 0x1DDBB4u) { return; }
    }
    ctx->pc = 0x1DDBB4u;
label_1ddbb4:
    // 0x1ddbb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddbb8:
    // 0x1ddbb8: 0x50800078  beql        $a0, $zero, . + 4 + (0x78 << 2)
label_1ddbbc:
    if (ctx->pc == 0x1DDBBCu) {
        ctx->pc = 0x1DDBBCu;
            // 0x1ddbbc: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDBC0u;
        goto label_1ddbc0;
    }
    ctx->pc = 0x1DDBB8u;
    {
        const bool branch_taken_0x1ddbb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbb8) {
            ctx->pc = 0x1DDBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBB8u;
            // 0x1ddbbc: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDBC0u;
label_1ddbc0:
    // 0x1ddbc0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1ddbc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddbc4:
    // 0x1ddbc4: 0xc101a5c  jal         func_406970
label_1ddbc8:
    if (ctx->pc == 0x1DDBC8u) {
        ctx->pc = 0x1DDBC8u;
            // 0x1ddbc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBCCu;
        goto label_1ddbcc;
    }
    ctx->pc = 0x1DDBC4u;
    SET_GPR_U32(ctx, 31, 0x1DDBCCu);
    ctx->pc = 0x1DDBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBC4u;
            // 0x1ddbc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x406970u;
    if (runtime->hasFunction(0x406970u)) {
        auto targetFn = runtime->lookupFunction(0x406970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBCCu; }
        if (ctx->pc != 0x1DDBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00406970_0x406970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBCCu; }
        if (ctx->pc != 0x1DDBCCu) { return; }
    }
    ctx->pc = 0x1DDBCCu;
label_1ddbcc:
    // 0x1ddbcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddbd0:
    // 0x1ddbd0: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1ddbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1ddbd4:
    // 0x1ddbd4: 0x10000071  b           . + 4 + (0x71 << 2)
label_1ddbd8:
    if (ctx->pc == 0x1DDBD8u) {
        ctx->pc = 0x1DDBDCu;
        goto label_1ddbdc;
    }
    ctx->pc = 0x1DDBD4u;
    {
        const bool branch_taken_0x1ddbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbd4) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDBDCu;
label_1ddbdc:
    // 0x1ddbdc: 0xc040180  jal         func_100600
label_1ddbe0:
    if (ctx->pc == 0x1DDBE0u) {
        ctx->pc = 0x1DDBE0u;
            // 0x1ddbe0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->pc = 0x1DDBE4u;
        goto label_1ddbe4;
    }
    ctx->pc = 0x1DDBDCu;
    SET_GPR_U32(ctx, 31, 0x1DDBE4u);
    ctx->pc = 0x1DDBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBDCu;
            // 0x1ddbe0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBE4u; }
        if (ctx->pc != 0x1DDBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBE4u; }
        if (ctx->pc != 0x1DDBE4u) { return; }
    }
    ctx->pc = 0x1DDBE4u;
label_1ddbe4:
    // 0x1ddbe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddbe8:
    // 0x1ddbe8: 0x5080006c  beql        $a0, $zero, . + 4 + (0x6C << 2)
label_1ddbec:
    if (ctx->pc == 0x1DDBECu) {
        ctx->pc = 0x1DDBECu;
            // 0x1ddbec: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDBF0u;
        goto label_1ddbf0;
    }
    ctx->pc = 0x1DDBE8u;
    {
        const bool branch_taken_0x1ddbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbe8) {
            ctx->pc = 0x1DDBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBE8u;
            // 0x1ddbec: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDBF0u;
label_1ddbf0:
    // 0x1ddbf0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1ddbf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddbf4:
    // 0x1ddbf4: 0xc110378  jal         func_440DE0
label_1ddbf8:
    if (ctx->pc == 0x1DDBF8u) {
        ctx->pc = 0x1DDBF8u;
            // 0x1ddbf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBFCu;
        goto label_1ddbfc;
    }
    ctx->pc = 0x1DDBF4u;
    SET_GPR_U32(ctx, 31, 0x1DDBFCu);
    ctx->pc = 0x1DDBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDBF4u;
            // 0x1ddbf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x440DE0u;
    if (runtime->hasFunction(0x440DE0u)) {
        auto targetFn = runtime->lookupFunction(0x440DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBFCu; }
        if (ctx->pc != 0x1DDBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00440DE0_0x440de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDBFCu; }
        if (ctx->pc != 0x1DDBFCu) { return; }
    }
    ctx->pc = 0x1DDBFCu;
label_1ddbfc:
    // 0x1ddbfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddc00:
    // 0x1ddc00: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1ddc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1ddc04:
    // 0x1ddc04: 0x10000065  b           . + 4 + (0x65 << 2)
label_1ddc08:
    if (ctx->pc == 0x1DDC08u) {
        ctx->pc = 0x1DDC0Cu;
        goto label_1ddc0c;
    }
    ctx->pc = 0x1DDC04u;
    {
        const bool branch_taken_0x1ddc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc04) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDC0Cu;
label_1ddc0c:
    // 0x1ddc0c: 0xc040180  jal         func_100600
label_1ddc10:
    if (ctx->pc == 0x1DDC10u) {
        ctx->pc = 0x1DDC10u;
            // 0x1ddc10: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DDC14u;
        goto label_1ddc14;
    }
    ctx->pc = 0x1DDC0Cu;
    SET_GPR_U32(ctx, 31, 0x1DDC14u);
    ctx->pc = 0x1DDC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC0Cu;
            // 0x1ddc10: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC14u; }
        if (ctx->pc != 0x1DDC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC14u; }
        if (ctx->pc != 0x1DDC14u) { return; }
    }
    ctx->pc = 0x1DDC14u;
label_1ddc14:
    // 0x1ddc14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1ddc18:
    if (ctx->pc == 0x1DDC18u) {
        ctx->pc = 0x1DDC18u;
            // 0x1ddc18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC1Cu;
        goto label_1ddc1c;
    }
    ctx->pc = 0x1DDC14u;
    {
        const bool branch_taken_0x1ddc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC14u;
            // 0x1ddc18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc14) {
            ctx->pc = 0x1DDC8Cu;
            goto label_1ddc8c;
        }
    }
    ctx->pc = 0x1DDC1Cu;
label_1ddc1c:
    // 0x1ddc1c: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1ddc1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddc20:
    // 0x1ddc20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ddc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ddc24:
    // 0x1ddc24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ddc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ddc28:
    // 0x1ddc28: 0xc10f6ec  jal         func_43DBB0
label_1ddc2c:
    if (ctx->pc == 0x1DDC2Cu) {
        ctx->pc = 0x1DDC2Cu;
            // 0x1ddc2c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x1DDC30u;
        goto label_1ddc30;
    }
    ctx->pc = 0x1DDC28u;
    SET_GPR_U32(ctx, 31, 0x1DDC30u);
    ctx->pc = 0x1DDC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC28u;
            // 0x1ddc2c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC30u; }
        if (ctx->pc != 0x1DDC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC30u; }
        if (ctx->pc != 0x1DDC30u) { return; }
    }
    ctx->pc = 0x1DDC30u;
label_1ddc30:
    // 0x1ddc30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddc34:
    // 0x1ddc34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ddc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ddc38:
    // 0x1ddc38: 0x2442d210  addiu       $v0, $v0, -0x2DF0
    ctx->pc = 0x1ddc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955536));
label_1ddc3c:
    // 0x1ddc3c: 0xc040180  jal         func_100600
label_1ddc40:
    if (ctx->pc == 0x1DDC40u) {
        ctx->pc = 0x1DDC40u;
            // 0x1ddc40: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1DDC44u;
        goto label_1ddc44;
    }
    ctx->pc = 0x1DDC3Cu;
    SET_GPR_U32(ctx, 31, 0x1DDC44u);
    ctx->pc = 0x1DDC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC3Cu;
            // 0x1ddc40: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC44u; }
        if (ctx->pc != 0x1DDC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC44u; }
        if (ctx->pc != 0x1DDC44u) { return; }
    }
    ctx->pc = 0x1DDC44u;
label_1ddc44:
    // 0x1ddc44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ddc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddc48:
    // 0x1ddc48: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_1ddc4c:
    if (ctx->pc == 0x1DDC4Cu) {
        ctx->pc = 0x1DDC4Cu;
            // 0x1ddc4c: 0xae500060  sw          $s0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
        ctx->pc = 0x1DDC50u;
        goto label_1ddc50;
    }
    ctx->pc = 0x1DDC48u;
    {
        const bool branch_taken_0x1ddc48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc48) {
            ctx->pc = 0x1DDC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC48u;
            // 0x1ddc4c: 0xae500060  sw          $s0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC8Cu;
            goto label_1ddc8c;
        }
    }
    ctx->pc = 0x1DDC50u;
label_1ddc50:
    // 0x1ddc50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1ddc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1ddc54:
    // 0x1ddc54: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ddc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1ddc58:
    // 0x1ddc58: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_1ddc5c:
    // 0x1ddc5c: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x1ddc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_1ddc60:
    // 0x1ddc60: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ddc64:
    // 0x1ddc64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ddc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ddc68:
    // 0x1ddc68: 0x320f809  jalr        $t9
label_1ddc6c:
    if (ctx->pc == 0x1DDC6Cu) {
        ctx->pc = 0x1DDC6Cu;
            // 0x1ddc6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DDC70u;
        goto label_1ddc70;
    }
    ctx->pc = 0x1DDC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDC70u);
        ctx->pc = 0x1DDC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC68u;
            // 0x1ddc6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DDC70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC70u; }
            if (ctx->pc != 0x1DDC70u) { return; }
        }
        }
    }
    ctx->pc = 0x1DDC70u;
label_1ddc70:
    // 0x1ddc70: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1ddc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1ddc74:
    // 0x1ddc74: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x1ddc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_1ddc78:
    // 0x1ddc78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ddc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ddc7c:
    // 0x1ddc7c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ddc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ddc80:
    // 0x1ddc80: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1ddc80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_1ddc84:
    // 0x1ddc84: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1ddc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_1ddc88:
    // 0x1ddc88: 0xae500060  sw          $s0, 0x60($s2)
    ctx->pc = 0x1ddc88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
label_1ddc8c:
    // 0x1ddc8c: 0x10000043  b           . + 4 + (0x43 << 2)
label_1ddc90:
    if (ctx->pc == 0x1DDC90u) {
        ctx->pc = 0x1DDC90u;
            // 0x1ddc90: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->pc = 0x1DDC94u;
        goto label_1ddc94;
    }
    ctx->pc = 0x1DDC8Cu;
    {
        const bool branch_taken_0x1ddc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC8Cu;
            // 0x1ddc90: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc8c) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDC94u;
label_1ddc94:
    // 0x1ddc94: 0xc040180  jal         func_100600
label_1ddc98:
    if (ctx->pc == 0x1DDC98u) {
        ctx->pc = 0x1DDC98u;
            // 0x1ddc98: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DDC9Cu;
        goto label_1ddc9c;
    }
    ctx->pc = 0x1DDC94u;
    SET_GPR_U32(ctx, 31, 0x1DDC9Cu);
    ctx->pc = 0x1DDC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC94u;
            // 0x1ddc98: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC9Cu; }
        if (ctx->pc != 0x1DDC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC9Cu; }
        if (ctx->pc != 0x1DDC9Cu) { return; }
    }
    ctx->pc = 0x1DDC9Cu;
label_1ddc9c:
    // 0x1ddc9c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1ddca0:
    if (ctx->pc == 0x1DDCA0u) {
        ctx->pc = 0x1DDCA0u;
            // 0x1ddca0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCA4u;
        goto label_1ddca4;
    }
    ctx->pc = 0x1DDC9Cu;
    {
        const bool branch_taken_0x1ddc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDC9Cu;
            // 0x1ddca0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc9c) {
            ctx->pc = 0x1DDD14u;
            goto label_1ddd14;
        }
    }
    ctx->pc = 0x1DDCA4u;
label_1ddca4:
    // 0x1ddca4: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x1ddca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddca8:
    // 0x1ddca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ddca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ddcac:
    // 0x1ddcac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ddcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ddcb0:
    // 0x1ddcb0: 0xc10f6ec  jal         func_43DBB0
label_1ddcb4:
    if (ctx->pc == 0x1DDCB4u) {
        ctx->pc = 0x1DDCB4u;
            // 0x1ddcb4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1DDCB8u;
        goto label_1ddcb8;
    }
    ctx->pc = 0x1DDCB0u;
    SET_GPR_U32(ctx, 31, 0x1DDCB8u);
    ctx->pc = 0x1DDCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCB0u;
            // 0x1ddcb4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCB8u; }
        if (ctx->pc != 0x1DDCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCB8u; }
        if (ctx->pc != 0x1DDCB8u) { return; }
    }
    ctx->pc = 0x1DDCB8u;
label_1ddcb8:
    // 0x1ddcb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddcbc:
    // 0x1ddcbc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ddcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ddcc0:
    // 0x1ddcc0: 0x2442d1d0  addiu       $v0, $v0, -0x2E30
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955472));
label_1ddcc4:
    // 0x1ddcc4: 0xc040180  jal         func_100600
label_1ddcc8:
    if (ctx->pc == 0x1DDCC8u) {
        ctx->pc = 0x1DDCC8u;
            // 0x1ddcc8: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1DDCCCu;
        goto label_1ddccc;
    }
    ctx->pc = 0x1DDCC4u;
    SET_GPR_U32(ctx, 31, 0x1DDCCCu);
    ctx->pc = 0x1DDCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCC4u;
            // 0x1ddcc8: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCCCu; }
        if (ctx->pc != 0x1DDCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCCCu; }
        if (ctx->pc != 0x1DDCCCu) { return; }
    }
    ctx->pc = 0x1DDCCCu;
label_1ddccc:
    // 0x1ddccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ddcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddcd0:
    // 0x1ddcd0: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_1ddcd4:
    if (ctx->pc == 0x1DDCD4u) {
        ctx->pc = 0x1DDCD4u;
            // 0x1ddcd4: 0xae500060  sw          $s0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
        ctx->pc = 0x1DDCD8u;
        goto label_1ddcd8;
    }
    ctx->pc = 0x1DDCD0u;
    {
        const bool branch_taken_0x1ddcd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcd0) {
            ctx->pc = 0x1DDCD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCD0u;
            // 0x1ddcd4: 0xae500060  sw          $s0, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD14u;
            goto label_1ddd14;
        }
    }
    ctx->pc = 0x1DDCD8u;
label_1ddcd8:
    // 0x1ddcd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1ddcdc:
    // 0x1ddcdc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1ddcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1ddce0:
    // 0x1ddce0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x1ddce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_1ddce4:
    // 0x1ddce4: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x1ddce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_1ddce8:
    // 0x1ddce8: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x1ddce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ddcec:
    // 0x1ddcec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ddcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ddcf0:
    // 0x1ddcf0: 0x320f809  jalr        $t9
label_1ddcf4:
    if (ctx->pc == 0x1DDCF4u) {
        ctx->pc = 0x1DDCF4u;
            // 0x1ddcf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DDCF8u;
        goto label_1ddcf8;
    }
    ctx->pc = 0x1DDCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDCF8u);
        ctx->pc = 0x1DDCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDCF0u;
            // 0x1ddcf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DDCF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCF8u; }
            if (ctx->pc != 0x1DDCF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DDCF8u;
label_1ddcf8:
    // 0x1ddcf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1ddcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1ddcfc:
    // 0x1ddcfc: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_1ddd00:
    // 0x1ddd00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ddd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ddd04:
    // 0x1ddd04: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ddd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ddd08:
    // 0x1ddd08: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x1ddd08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_1ddd0c:
    // 0x1ddd0c: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x1ddd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_1ddd10:
    // 0x1ddd10: 0xae500060  sw          $s0, 0x60($s2)
    ctx->pc = 0x1ddd10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 16));
label_1ddd14:
    // 0x1ddd14: 0x10000021  b           . + 4 + (0x21 << 2)
label_1ddd18:
    if (ctx->pc == 0x1DDD18u) {
        ctx->pc = 0x1DDD18u;
            // 0x1ddd18: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->pc = 0x1DDD1Cu;
        goto label_1ddd1c;
    }
    ctx->pc = 0x1DDD14u;
    {
        const bool branch_taken_0x1ddd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD14u;
            // 0x1ddd18: 0xae320d6c  sw          $s2, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd14) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDD1Cu;
label_1ddd1c:
    // 0x1ddd1c: 0xc040180  jal         func_100600
label_1ddd20:
    if (ctx->pc == 0x1DDD20u) {
        ctx->pc = 0x1DDD20u;
            // 0x1ddd20: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x1DDD24u;
        goto label_1ddd24;
    }
    ctx->pc = 0x1DDD1Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD24u);
    ctx->pc = 0x1DDD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD1Cu;
            // 0x1ddd20: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD24u; }
        if (ctx->pc != 0x1DDD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD24u; }
        if (ctx->pc != 0x1DDD24u) { return; }
    }
    ctx->pc = 0x1DDD24u;
label_1ddd24:
    // 0x1ddd24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd28:
    // 0x1ddd28: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
label_1ddd2c:
    if (ctx->pc == 0x1DDD2Cu) {
        ctx->pc = 0x1DDD2Cu;
            // 0x1ddd2c: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDD30u;
        goto label_1ddd30;
    }
    ctx->pc = 0x1DDD28u;
    {
        const bool branch_taken_0x1ddd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd28) {
            ctx->pc = 0x1DDD2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD28u;
            // 0x1ddd2c: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDD30u;
label_1ddd30:
    // 0x1ddd30: 0xc122528  jal         func_4894A0
label_1ddd34:
    if (ctx->pc == 0x1DDD34u) {
        ctx->pc = 0x1DDD34u;
            // 0x1ddd34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD38u;
        goto label_1ddd38;
    }
    ctx->pc = 0x1DDD30u;
    SET_GPR_U32(ctx, 31, 0x1DDD38u);
    ctx->pc = 0x1DDD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD30u;
            // 0x1ddd34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4894A0u;
    if (runtime->hasFunction(0x4894A0u)) {
        auto targetFn = runtime->lookupFunction(0x4894A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD38u; }
        if (ctx->pc != 0x1DDD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004894A0_0x4894a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD38u; }
        if (ctx->pc != 0x1DDD38u) { return; }
    }
    ctx->pc = 0x1DDD38u;
label_1ddd38:
    // 0x1ddd38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd3c:
    // 0x1ddd3c: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1ddd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1ddd40:
    // 0x1ddd40: 0x10000016  b           . + 4 + (0x16 << 2)
label_1ddd44:
    if (ctx->pc == 0x1DDD44u) {
        ctx->pc = 0x1DDD48u;
        goto label_1ddd48;
    }
    ctx->pc = 0x1DDD40u;
    {
        const bool branch_taken_0x1ddd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd40) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDD48u;
label_1ddd48:
    // 0x1ddd48: 0xc040180  jal         func_100600
label_1ddd4c:
    if (ctx->pc == 0x1DDD4Cu) {
        ctx->pc = 0x1DDD4Cu;
            // 0x1ddd4c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x1DDD50u;
        goto label_1ddd50;
    }
    ctx->pc = 0x1DDD48u;
    SET_GPR_U32(ctx, 31, 0x1DDD50u);
    ctx->pc = 0x1DDD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD48u;
            // 0x1ddd4c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD50u; }
        if (ctx->pc != 0x1DDD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD50u; }
        if (ctx->pc != 0x1DDD50u) { return; }
    }
    ctx->pc = 0x1DDD50u;
label_1ddd50:
    // 0x1ddd50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd54:
    // 0x1ddd54: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_1ddd58:
    if (ctx->pc == 0x1DDD58u) {
        ctx->pc = 0x1DDD58u;
            // 0x1ddd58: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDD5Cu;
        goto label_1ddd5c;
    }
    ctx->pc = 0x1DDD54u;
    {
        const bool branch_taken_0x1ddd54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd54) {
            ctx->pc = 0x1DDD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD54u;
            // 0x1ddd58: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDD5Cu;
label_1ddd5c:
    // 0x1ddd5c: 0xc1227d8  jal         func_489F60
label_1ddd60:
    if (ctx->pc == 0x1DDD60u) {
        ctx->pc = 0x1DDD60u;
            // 0x1ddd60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD64u;
        goto label_1ddd64;
    }
    ctx->pc = 0x1DDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD64u);
    ctx->pc = 0x1DDD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD5Cu;
            // 0x1ddd60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x489F60u;
    if (runtime->hasFunction(0x489F60u)) {
        auto targetFn = runtime->lookupFunction(0x489F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD64u; }
        if (ctx->pc != 0x1DDD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00489F60_0x489f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD64u; }
        if (ctx->pc != 0x1DDD64u) { return; }
    }
    ctx->pc = 0x1DDD64u;
label_1ddd64:
    // 0x1ddd64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd68:
    // 0x1ddd68: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1ddd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1ddd6c:
    // 0x1ddd6c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ddd70:
    if (ctx->pc == 0x1DDD70u) {
        ctx->pc = 0x1DDD74u;
        goto label_1ddd74;
    }
    ctx->pc = 0x1DDD6Cu;
    {
        const bool branch_taken_0x1ddd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd6c) {
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDD74u;
label_1ddd74:
    // 0x1ddd74: 0xc040180  jal         func_100600
label_1ddd78:
    if (ctx->pc == 0x1DDD78u) {
        ctx->pc = 0x1DDD78u;
            // 0x1ddd78: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->pc = 0x1DDD7Cu;
        goto label_1ddd7c;
    }
    ctx->pc = 0x1DDD74u;
    SET_GPR_U32(ctx, 31, 0x1DDD7Cu);
    ctx->pc = 0x1DDD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD74u;
            // 0x1ddd78: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD7Cu; }
        if (ctx->pc != 0x1DDD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD7Cu; }
        if (ctx->pc != 0x1DDD7Cu) { return; }
    }
    ctx->pc = 0x1DDD7Cu;
label_1ddd7c:
    // 0x1ddd7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd80:
    // 0x1ddd80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1ddd84:
    if (ctx->pc == 0x1DDD84u) {
        ctx->pc = 0x1DDD84u;
            // 0x1ddd84: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->pc = 0x1DDD88u;
        goto label_1ddd88;
    }
    ctx->pc = 0x1DDD80u;
    {
        const bool branch_taken_0x1ddd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd80) {
            ctx->pc = 0x1DDD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD80u;
            // 0x1ddd84: 0xae240d6c  sw          $a0, 0xD6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD9Cu;
            goto label_1ddd9c;
        }
    }
    ctx->pc = 0x1DDD88u;
label_1ddd88:
    // 0x1ddd88: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x1ddd88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1ddd8c:
    // 0x1ddd8c: 0xc14c5d8  jal         func_531760
label_1ddd90:
    if (ctx->pc == 0x1DDD90u) {
        ctx->pc = 0x1DDD90u;
            // 0x1ddd90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD94u;
        goto label_1ddd94;
    }
    ctx->pc = 0x1DDD8Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD94u);
    ctx->pc = 0x1DDD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDD8Cu;
            // 0x1ddd90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x531760u;
    if (runtime->hasFunction(0x531760u)) {
        auto targetFn = runtime->lookupFunction(0x531760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD94u; }
        if (ctx->pc != 0x1DDD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00531760_0x531760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD94u; }
        if (ctx->pc != 0x1DDD94u) { return; }
    }
    ctx->pc = 0x1DDD94u;
label_1ddd94:
    // 0x1ddd94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd98:
    // 0x1ddd98: 0xae240d6c  sw          $a0, 0xD6C($s1)
    ctx->pc = 0x1ddd98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 4));
label_1ddd9c:
    // 0x1ddd9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ddd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ddda0:
    // 0x1ddda0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ddda0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ddda4:
    // 0x1ddda4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ddda4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ddda8:
    // 0x1ddda8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ddda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dddac:
    // 0x1dddac: 0x3e00008  jr          $ra
label_1dddb0:
    if (ctx->pc == 0x1DDDB0u) {
        ctx->pc = 0x1DDDB0u;
            // 0x1dddb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1DDDB4u;
        goto label_1dddb4;
    }
    ctx->pc = 0x1DDDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDACu;
            // 0x1dddb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDDB4u;
label_1dddb4:
    // 0x1dddb4: 0x0  nop
    ctx->pc = 0x1dddb4u;
    // NOP
label_1dddb8:
    // 0x1dddb8: 0x0  nop
    ctx->pc = 0x1dddb8u;
    // NOP
label_1dddbc:
    // 0x1dddbc: 0x0  nop
    ctx->pc = 0x1dddbcu;
    // NOP
label_1dddc0:
    // 0x1dddc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dddc4:
    // 0x1dddc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1dddc8:
    // 0x1dddc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dddcc:
    // 0x1dddcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dddd0:
    // 0x1dddd0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1dddd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1dddd4:
    // 0x1dddd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dddd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dddd8:
    // 0x1dddd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dddd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddddc:
    // 0x1ddddc: 0xc040180  jal         func_100600
label_1ddde0:
    if (ctx->pc == 0x1DDDE0u) {
        ctx->pc = 0x1DDDE0u;
            // 0x1ddde0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1DDDE4u;
        goto label_1ddde4;
    }
    ctx->pc = 0x1DDDDCu;
    SET_GPR_U32(ctx, 31, 0x1DDDE4u);
    ctx->pc = 0x1DDDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDDCu;
            // 0x1ddde0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDE4u; }
        if (ctx->pc != 0x1DDDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDE4u; }
        if (ctx->pc != 0x1DDDE4u) { return; }
    }
    ctx->pc = 0x1DDDE4u;
label_1ddde4:
    // 0x1ddde4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1ddde8:
    if (ctx->pc == 0x1DDDE8u) {
        ctx->pc = 0x1DDDE8u;
            // 0x1ddde8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDECu;
        goto label_1dddec;
    }
    ctx->pc = 0x1DDDE4u;
    {
        const bool branch_taken_0x1ddde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDE4u;
            // 0x1ddde8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddde4) {
            ctx->pc = 0x1DDE2Cu;
            goto label_1dde2c;
        }
    }
    ctx->pc = 0x1DDDECu;
label_1dddec:
    // 0x1dddec: 0xc0778f4  jal         func_1DE3D0
label_1dddf0:
    if (ctx->pc == 0x1DDDF0u) {
        ctx->pc = 0x1DDDF0u;
            // 0x1dddf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDF4u;
        goto label_1dddf4;
    }
    ctx->pc = 0x1DDDECu;
    SET_GPR_U32(ctx, 31, 0x1DDDF4u);
    ctx->pc = 0x1DDDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDDECu;
            // 0x1dddf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3D0u;
    if (runtime->hasFunction(0x1DE3D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DE3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDF4u; }
        if (ctx->pc != 0x1DDDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE3D0_0x1de3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDF4u; }
        if (ctx->pc != 0x1DDDF4u) { return; }
    }
    ctx->pc = 0x1DDDF4u;
label_1dddf4:
    // 0x1dddf4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1dddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1dddf8:
    // 0x1dddf8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1dddf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1dddfc:
    // 0x1dddfc: 0x2463cee0  addiu       $v1, $v1, -0x3120
    ctx->pc = 0x1dddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954720));
label_1dde00:
    // 0x1dde00: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1dde00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1dde04:
    // 0x1dde04: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1dde04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_1dde08:
    // 0x1dde08: 0xc040180  jal         func_100600
label_1dde0c:
    if (ctx->pc == 0x1DDE0Cu) {
        ctx->pc = 0x1DDE0Cu;
            // 0x1dde0c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x1DDE10u;
        goto label_1dde10;
    }
    ctx->pc = 0x1DDE08u;
    SET_GPR_U32(ctx, 31, 0x1DDE10u);
    ctx->pc = 0x1DDE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE08u;
            // 0x1dde0c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE10u; }
        if (ctx->pc != 0x1DDE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE10u; }
        if (ctx->pc != 0x1DDE10u) { return; }
    }
    ctx->pc = 0x1DDE10u;
label_1dde10:
    // 0x1dde10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1dde14:
    if (ctx->pc == 0x1DDE14u) {
        ctx->pc = 0x1DDE14u;
            // 0x1dde14: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1DDE18u;
        goto label_1dde18;
    }
    ctx->pc = 0x1DDE10u;
    {
        const bool branch_taken_0x1dde10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dde10) {
            ctx->pc = 0x1DDE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE10u;
            // 0x1dde14: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE28u;
            goto label_1dde28;
        }
    }
    ctx->pc = 0x1DDE18u;
label_1dde18:
    // 0x1dde18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dde18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dde1c:
    // 0x1dde1c: 0xc0778b0  jal         func_1DE2C0
label_1dde20:
    if (ctx->pc == 0x1DDE20u) {
        ctx->pc = 0x1DDE20u;
            // 0x1dde20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE24u;
        goto label_1dde24;
    }
    ctx->pc = 0x1DDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1DDE24u);
    ctx->pc = 0x1DDE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE1Cu;
            // 0x1dde20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE2C0u;
    if (runtime->hasFunction(0x1DE2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DE2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE24u; }
        if (ctx->pc != 0x1DDE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE2C0_0x1de2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE24u; }
        if (ctx->pc != 0x1DDE24u) { return; }
    }
    ctx->pc = 0x1DDE24u;
label_1dde24:
    // 0x1dde24: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x1dde24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_1dde28:
    // 0x1dde28: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x1dde28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
label_1dde2c:
    // 0x1dde2c: 0xae110d68  sw          $s1, 0xD68($s0)
    ctx->pc = 0x1dde2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3432), GPR_U32(ctx, 17));
label_1dde30:
    // 0x1dde30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dde30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1dde34:
    // 0x1dde34: 0xae110d60  sw          $s1, 0xD60($s0)
    ctx->pc = 0x1dde34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3424), GPR_U32(ctx, 17));
label_1dde38:
    // 0x1dde38: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1dde38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dde3c:
    // 0x1dde3c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1dde40:
    // 0x1dde40: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1dde40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1dde44:
    // 0x1dde44: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_1dde48:
    if (ctx->pc == 0x1DDE48u) {
        ctx->pc = 0x1DDE48u;
            // 0x1dde48: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->pc = 0x1DDE4Cu;
        goto label_1dde4c;
    }
    ctx->pc = 0x1DDE44u;
    {
        const bool branch_taken_0x1dde44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dde44) {
            ctx->pc = 0x1DDE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE44u;
            // 0x1dde48: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE54u;
            goto label_1dde54;
        }
    }
    ctx->pc = 0x1DDE4Cu;
label_1dde4c:
    // 0x1dde4c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1dde50:
    if (ctx->pc == 0x1DDE50u) {
        ctx->pc = 0x1DDE50u;
            // 0x1dde50: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->pc = 0x1DDE54u;
        goto label_1dde54;
    }
    ctx->pc = 0x1DDE4Cu;
    {
        const bool branch_taken_0x1dde4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE4Cu;
            // 0x1dde50: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde4c) {
            ctx->pc = 0x1DDE90u;
            goto label_1dde90;
        }
    }
    ctx->pc = 0x1DDE54u;
label_1dde54:
    // 0x1dde54: 0xc040180  jal         func_100600
label_1dde58:
    if (ctx->pc == 0x1DDE58u) {
        ctx->pc = 0x1DDE5Cu;
        goto label_1dde5c;
    }
    ctx->pc = 0x1DDE54u;
    SET_GPR_U32(ctx, 31, 0x1DDE5Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE5Cu; }
        if (ctx->pc != 0x1DDE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE5Cu; }
        if (ctx->pc != 0x1DDE5Cu) { return; }
    }
    ctx->pc = 0x1DDE5Cu;
label_1dde5c:
    // 0x1dde5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1dde60:
    if (ctx->pc == 0x1DDE60u) {
        ctx->pc = 0x1DDE60u;
            // 0x1dde60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE64u;
        goto label_1dde64;
    }
    ctx->pc = 0x1DDE5Cu;
    {
        const bool branch_taken_0x1dde5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE5Cu;
            // 0x1dde60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde5c) {
            ctx->pc = 0x1DDE88u;
            goto label_1dde88;
        }
    }
    ctx->pc = 0x1DDE64u;
label_1dde64:
    // 0x1dde64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dde64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dde68:
    // 0x1dde68: 0xc0777dc  jal         func_1DDF70
label_1dde6c:
    if (ctx->pc == 0x1DDE6Cu) {
        ctx->pc = 0x1DDE6Cu;
            // 0x1dde6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE70u;
        goto label_1dde70;
    }
    ctx->pc = 0x1DDE68u;
    SET_GPR_U32(ctx, 31, 0x1DDE70u);
    ctx->pc = 0x1DDE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE68u;
            // 0x1dde6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF70u;
    if (runtime->hasFunction(0x1DDF70u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE70u; }
        if (ctx->pc != 0x1DDE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDF70_0x1ddf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE70u; }
        if (ctx->pc != 0x1DDE70u) { return; }
    }
    ctx->pc = 0x1DDE70u;
label_1dde70:
    // 0x1dde70: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1dde70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1dde74:
    // 0x1dde74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1dde74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1dde78:
    // 0x1dde78: 0x2484dd80  addiu       $a0, $a0, -0x2280
    ctx->pc = 0x1dde78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958464));
label_1dde7c:
    // 0x1dde7c: 0x2463dda8  addiu       $v1, $v1, -0x2258
    ctx->pc = 0x1dde7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958504));
label_1dde80:
    // 0x1dde80: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x1dde80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
label_1dde84:
    // 0x1dde84: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x1dde84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_1dde88:
    // 0x1dde88: 0x1000000f  b           . + 4 + (0xF << 2)
label_1dde8c:
    if (ctx->pc == 0x1DDE8Cu) {
        ctx->pc = 0x1DDE8Cu;
            // 0x1dde8c: 0xae110d64  sw          $s1, 0xD64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3428), GPR_U32(ctx, 17));
        ctx->pc = 0x1DDE90u;
        goto label_1dde90;
    }
    ctx->pc = 0x1DDE88u;
    {
        const bool branch_taken_0x1dde88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE88u;
            // 0x1dde8c: 0xae110d64  sw          $s1, 0xD64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3428), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde88) {
            ctx->pc = 0x1DDEC8u;
            goto label_1ddec8;
        }
    }
    ctx->pc = 0x1DDE90u;
label_1dde90:
    // 0x1dde90: 0xc040180  jal         func_100600
label_1dde94:
    if (ctx->pc == 0x1DDE94u) {
        ctx->pc = 0x1DDE98u;
        goto label_1dde98;
    }
    ctx->pc = 0x1DDE90u;
    SET_GPR_U32(ctx, 31, 0x1DDE98u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE98u; }
        if (ctx->pc != 0x1DDE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE98u; }
        if (ctx->pc != 0x1DDE98u) { return; }
    }
    ctx->pc = 0x1DDE98u;
label_1dde98:
    // 0x1dde98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1dde9c:
    if (ctx->pc == 0x1DDE9Cu) {
        ctx->pc = 0x1DDE9Cu;
            // 0x1dde9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEA0u;
        goto label_1ddea0;
    }
    ctx->pc = 0x1DDE98u;
    {
        const bool branch_taken_0x1dde98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDE98u;
            // 0x1dde9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde98) {
            ctx->pc = 0x1DDEC4u;
            goto label_1ddec4;
        }
    }
    ctx->pc = 0x1DDEA0u;
label_1ddea0:
    // 0x1ddea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ddea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ddea4:
    // 0x1ddea4: 0xc0777dc  jal         func_1DDF70
label_1ddea8:
    if (ctx->pc == 0x1DDEA8u) {
        ctx->pc = 0x1DDEA8u;
            // 0x1ddea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEACu;
        goto label_1ddeac;
    }
    ctx->pc = 0x1DDEA4u;
    SET_GPR_U32(ctx, 31, 0x1DDEACu);
    ctx->pc = 0x1DDEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEA4u;
            // 0x1ddea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF70u;
    if (runtime->hasFunction(0x1DDF70u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEACu; }
        if (ctx->pc != 0x1DDEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDF70_0x1ddf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDEACu; }
        if (ctx->pc != 0x1DDEACu) { return; }
    }
    ctx->pc = 0x1DDEACu;
label_1ddeac:
    // 0x1ddeac: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1ddeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1ddeb0:
    // 0x1ddeb0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ddeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ddeb4:
    // 0x1ddeb4: 0x2484d100  addiu       $a0, $a0, -0x2F00
    ctx->pc = 0x1ddeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955264));
label_1ddeb8:
    // 0x1ddeb8: 0x2463d128  addiu       $v1, $v1, -0x2ED8
    ctx->pc = 0x1ddeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955304));
label_1ddebc:
    // 0x1ddebc: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x1ddebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
label_1ddec0:
    // 0x1ddec0: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x1ddec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_1ddec4:
    // 0x1ddec4: 0xae110d64  sw          $s1, 0xD64($s0)
    ctx->pc = 0x1ddec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3428), GPR_U32(ctx, 17));
label_1ddec8:
    // 0x1ddec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ddec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ddecc:
    // 0x1ddecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ddeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dded0:
    // 0x1dded0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dded0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dded4:
    // 0x1dded4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dded4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dded8:
    // 0x1dded8: 0x3e00008  jr          $ra
label_1ddedc:
    if (ctx->pc == 0x1DDEDCu) {
        ctx->pc = 0x1DDEDCu;
            // 0x1ddedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1DDEE0u;
        goto label_1ddee0;
    }
    ctx->pc = 0x1DDED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDED8u;
            // 0x1ddedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDEE0u;
label_1ddee0:
    // 0x1ddee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ddee4:
    // 0x1ddee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ddee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ddee8:
    // 0x1ddee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ddeec:
    // 0x1ddeec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddef0:
    // 0x1ddef0: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_1ddef4:
    if (ctx->pc == 0x1DDEF4u) {
        ctx->pc = 0x1DDEF4u;
            // 0x1ddef4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEF8u;
        goto label_1ddef8;
    }
    ctx->pc = 0x1DDEF0u;
    {
        const bool branch_taken_0x1ddef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddef0) {
            ctx->pc = 0x1DDEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDEF0u;
            // 0x1ddef4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF54u;
            goto label_1ddf54;
        }
    }
    ctx->pc = 0x1DDEF8u;
label_1ddef8:
    // 0x1ddef8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddefc:
    // 0x1ddefc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ddefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ddf00:
    // 0x1ddf00: 0x244244b0  addiu       $v0, $v0, 0x44B0
    ctx->pc = 0x1ddf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17584));
label_1ddf04:
    // 0x1ddf04: 0x246344d8  addiu       $v1, $v1, 0x44D8
    ctx->pc = 0x1ddf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17624));
label_1ddf08:
    // 0x1ddf08: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ddf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1ddf0c:
    // 0x1ddf0c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1ddf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1ddf10:
    // 0x1ddf10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ddf14:
    if (ctx->pc == 0x1DDF14u) {
        ctx->pc = 0x1DDF14u;
            // 0x1ddf14: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x1DDF18u;
        goto label_1ddf18;
    }
    ctx->pc = 0x1DDF10u;
    {
        const bool branch_taken_0x1ddf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF10u;
            // 0x1ddf14: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf10) {
            ctx->pc = 0x1DDF24u;
            goto label_1ddf24;
        }
    }
    ctx->pc = 0x1DDF18u;
label_1ddf18:
    // 0x1ddf18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddf1c:
    // 0x1ddf1c: 0x2442d0d0  addiu       $v0, $v0, -0x2F30
    ctx->pc = 0x1ddf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955216));
label_1ddf20:
    // 0x1ddf20: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1ddf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1ddf24:
    // 0x1ddf24: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_1ddf28:
    if (ctx->pc == 0x1DDF28u) {
        ctx->pc = 0x1DDF28u;
            // 0x1ddf28: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x1DDF2Cu;
        goto label_1ddf2c;
    }
    ctx->pc = 0x1DDF24u;
    {
        const bool branch_taken_0x1ddf24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf24) {
            ctx->pc = 0x1DDF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF24u;
            // 0x1ddf28: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF3Cu;
            goto label_1ddf3c;
        }
    }
    ctx->pc = 0x1DDF2Cu;
label_1ddf2c:
    // 0x1ddf2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddf30:
    // 0x1ddf30: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1ddf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_1ddf34:
    // 0x1ddf34: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1ddf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1ddf38:
    // 0x1ddf38: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ddf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1ddf3c:
    // 0x1ddf3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddf3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ddf40:
    // 0x1ddf40: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1ddf44:
    if (ctx->pc == 0x1DDF44u) {
        ctx->pc = 0x1DDF48u;
        goto label_1ddf48;
    }
    ctx->pc = 0x1DDF40u;
    {
        const bool branch_taken_0x1ddf40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ddf40) {
            ctx->pc = 0x1DDF50u;
            goto label_1ddf50;
        }
    }
    ctx->pc = 0x1DDF48u;
label_1ddf48:
    // 0x1ddf48: 0xc0400a8  jal         func_1002A0
label_1ddf4c:
    if (ctx->pc == 0x1DDF4Cu) {
        ctx->pc = 0x1DDF4Cu;
            // 0x1ddf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF50u;
        goto label_1ddf50;
    }
    ctx->pc = 0x1DDF48u;
    SET_GPR_U32(ctx, 31, 0x1DDF50u);
    ctx->pc = 0x1DDF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF48u;
            // 0x1ddf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF50u; }
        if (ctx->pc != 0x1DDF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDF50u; }
        if (ctx->pc != 0x1DDF50u) { return; }
    }
    ctx->pc = 0x1DDF50u;
label_1ddf50:
    // 0x1ddf50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ddf50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf54:
    // 0x1ddf54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ddf58:
    // 0x1ddf58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ddf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddf5c:
    // 0x1ddf5c: 0x3e00008  jr          $ra
label_1ddf60:
    if (ctx->pc == 0x1DDF60u) {
        ctx->pc = 0x1DDF60u;
            // 0x1ddf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DDF64u;
        goto label_1ddf64;
    }
    ctx->pc = 0x1DDF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF5Cu;
            // 0x1ddf60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DDF64u;
label_1ddf64:
    // 0x1ddf64: 0x0  nop
    ctx->pc = 0x1ddf64u;
    // NOP
label_1ddf68:
    // 0x1ddf68: 0x0  nop
    ctx->pc = 0x1ddf68u;
    // NOP
label_1ddf6c:
    // 0x1ddf6c: 0x0  nop
    ctx->pc = 0x1ddf6cu;
    // NOP
}
