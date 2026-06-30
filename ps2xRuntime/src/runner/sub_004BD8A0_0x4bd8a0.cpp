#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BD8A0
// Address: 0x4bd8a0 - 0x4be6a0
void sub_004BD8A0_0x4bd8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD8A0_0x4bd8a0");
#endif

    switch (ctx->pc) {
        case 0x4bd8a0u: goto label_4bd8a0;
        case 0x4bd8a4u: goto label_4bd8a4;
        case 0x4bd8a8u: goto label_4bd8a8;
        case 0x4bd8acu: goto label_4bd8ac;
        case 0x4bd8b0u: goto label_4bd8b0;
        case 0x4bd8b4u: goto label_4bd8b4;
        case 0x4bd8b8u: goto label_4bd8b8;
        case 0x4bd8bcu: goto label_4bd8bc;
        case 0x4bd8c0u: goto label_4bd8c0;
        case 0x4bd8c4u: goto label_4bd8c4;
        case 0x4bd8c8u: goto label_4bd8c8;
        case 0x4bd8ccu: goto label_4bd8cc;
        case 0x4bd8d0u: goto label_4bd8d0;
        case 0x4bd8d4u: goto label_4bd8d4;
        case 0x4bd8d8u: goto label_4bd8d8;
        case 0x4bd8dcu: goto label_4bd8dc;
        case 0x4bd8e0u: goto label_4bd8e0;
        case 0x4bd8e4u: goto label_4bd8e4;
        case 0x4bd8e8u: goto label_4bd8e8;
        case 0x4bd8ecu: goto label_4bd8ec;
        case 0x4bd8f0u: goto label_4bd8f0;
        case 0x4bd8f4u: goto label_4bd8f4;
        case 0x4bd8f8u: goto label_4bd8f8;
        case 0x4bd8fcu: goto label_4bd8fc;
        case 0x4bd900u: goto label_4bd900;
        case 0x4bd904u: goto label_4bd904;
        case 0x4bd908u: goto label_4bd908;
        case 0x4bd90cu: goto label_4bd90c;
        case 0x4bd910u: goto label_4bd910;
        case 0x4bd914u: goto label_4bd914;
        case 0x4bd918u: goto label_4bd918;
        case 0x4bd91cu: goto label_4bd91c;
        case 0x4bd920u: goto label_4bd920;
        case 0x4bd924u: goto label_4bd924;
        case 0x4bd928u: goto label_4bd928;
        case 0x4bd92cu: goto label_4bd92c;
        case 0x4bd930u: goto label_4bd930;
        case 0x4bd934u: goto label_4bd934;
        case 0x4bd938u: goto label_4bd938;
        case 0x4bd93cu: goto label_4bd93c;
        case 0x4bd940u: goto label_4bd940;
        case 0x4bd944u: goto label_4bd944;
        case 0x4bd948u: goto label_4bd948;
        case 0x4bd94cu: goto label_4bd94c;
        case 0x4bd950u: goto label_4bd950;
        case 0x4bd954u: goto label_4bd954;
        case 0x4bd958u: goto label_4bd958;
        case 0x4bd95cu: goto label_4bd95c;
        case 0x4bd960u: goto label_4bd960;
        case 0x4bd964u: goto label_4bd964;
        case 0x4bd968u: goto label_4bd968;
        case 0x4bd96cu: goto label_4bd96c;
        case 0x4bd970u: goto label_4bd970;
        case 0x4bd974u: goto label_4bd974;
        case 0x4bd978u: goto label_4bd978;
        case 0x4bd97cu: goto label_4bd97c;
        case 0x4bd980u: goto label_4bd980;
        case 0x4bd984u: goto label_4bd984;
        case 0x4bd988u: goto label_4bd988;
        case 0x4bd98cu: goto label_4bd98c;
        case 0x4bd990u: goto label_4bd990;
        case 0x4bd994u: goto label_4bd994;
        case 0x4bd998u: goto label_4bd998;
        case 0x4bd99cu: goto label_4bd99c;
        case 0x4bd9a0u: goto label_4bd9a0;
        case 0x4bd9a4u: goto label_4bd9a4;
        case 0x4bd9a8u: goto label_4bd9a8;
        case 0x4bd9acu: goto label_4bd9ac;
        case 0x4bd9b0u: goto label_4bd9b0;
        case 0x4bd9b4u: goto label_4bd9b4;
        case 0x4bd9b8u: goto label_4bd9b8;
        case 0x4bd9bcu: goto label_4bd9bc;
        case 0x4bd9c0u: goto label_4bd9c0;
        case 0x4bd9c4u: goto label_4bd9c4;
        case 0x4bd9c8u: goto label_4bd9c8;
        case 0x4bd9ccu: goto label_4bd9cc;
        case 0x4bd9d0u: goto label_4bd9d0;
        case 0x4bd9d4u: goto label_4bd9d4;
        case 0x4bd9d8u: goto label_4bd9d8;
        case 0x4bd9dcu: goto label_4bd9dc;
        case 0x4bd9e0u: goto label_4bd9e0;
        case 0x4bd9e4u: goto label_4bd9e4;
        case 0x4bd9e8u: goto label_4bd9e8;
        case 0x4bd9ecu: goto label_4bd9ec;
        case 0x4bd9f0u: goto label_4bd9f0;
        case 0x4bd9f4u: goto label_4bd9f4;
        case 0x4bd9f8u: goto label_4bd9f8;
        case 0x4bd9fcu: goto label_4bd9fc;
        case 0x4bda00u: goto label_4bda00;
        case 0x4bda04u: goto label_4bda04;
        case 0x4bda08u: goto label_4bda08;
        case 0x4bda0cu: goto label_4bda0c;
        case 0x4bda10u: goto label_4bda10;
        case 0x4bda14u: goto label_4bda14;
        case 0x4bda18u: goto label_4bda18;
        case 0x4bda1cu: goto label_4bda1c;
        case 0x4bda20u: goto label_4bda20;
        case 0x4bda24u: goto label_4bda24;
        case 0x4bda28u: goto label_4bda28;
        case 0x4bda2cu: goto label_4bda2c;
        case 0x4bda30u: goto label_4bda30;
        case 0x4bda34u: goto label_4bda34;
        case 0x4bda38u: goto label_4bda38;
        case 0x4bda3cu: goto label_4bda3c;
        case 0x4bda40u: goto label_4bda40;
        case 0x4bda44u: goto label_4bda44;
        case 0x4bda48u: goto label_4bda48;
        case 0x4bda4cu: goto label_4bda4c;
        case 0x4bda50u: goto label_4bda50;
        case 0x4bda54u: goto label_4bda54;
        case 0x4bda58u: goto label_4bda58;
        case 0x4bda5cu: goto label_4bda5c;
        case 0x4bda60u: goto label_4bda60;
        case 0x4bda64u: goto label_4bda64;
        case 0x4bda68u: goto label_4bda68;
        case 0x4bda6cu: goto label_4bda6c;
        case 0x4bda70u: goto label_4bda70;
        case 0x4bda74u: goto label_4bda74;
        case 0x4bda78u: goto label_4bda78;
        case 0x4bda7cu: goto label_4bda7c;
        case 0x4bda80u: goto label_4bda80;
        case 0x4bda84u: goto label_4bda84;
        case 0x4bda88u: goto label_4bda88;
        case 0x4bda8cu: goto label_4bda8c;
        case 0x4bda90u: goto label_4bda90;
        case 0x4bda94u: goto label_4bda94;
        case 0x4bda98u: goto label_4bda98;
        case 0x4bda9cu: goto label_4bda9c;
        case 0x4bdaa0u: goto label_4bdaa0;
        case 0x4bdaa4u: goto label_4bdaa4;
        case 0x4bdaa8u: goto label_4bdaa8;
        case 0x4bdaacu: goto label_4bdaac;
        case 0x4bdab0u: goto label_4bdab0;
        case 0x4bdab4u: goto label_4bdab4;
        case 0x4bdab8u: goto label_4bdab8;
        case 0x4bdabcu: goto label_4bdabc;
        case 0x4bdac0u: goto label_4bdac0;
        case 0x4bdac4u: goto label_4bdac4;
        case 0x4bdac8u: goto label_4bdac8;
        case 0x4bdaccu: goto label_4bdacc;
        case 0x4bdad0u: goto label_4bdad0;
        case 0x4bdad4u: goto label_4bdad4;
        case 0x4bdad8u: goto label_4bdad8;
        case 0x4bdadcu: goto label_4bdadc;
        case 0x4bdae0u: goto label_4bdae0;
        case 0x4bdae4u: goto label_4bdae4;
        case 0x4bdae8u: goto label_4bdae8;
        case 0x4bdaecu: goto label_4bdaec;
        case 0x4bdaf0u: goto label_4bdaf0;
        case 0x4bdaf4u: goto label_4bdaf4;
        case 0x4bdaf8u: goto label_4bdaf8;
        case 0x4bdafcu: goto label_4bdafc;
        case 0x4bdb00u: goto label_4bdb00;
        case 0x4bdb04u: goto label_4bdb04;
        case 0x4bdb08u: goto label_4bdb08;
        case 0x4bdb0cu: goto label_4bdb0c;
        case 0x4bdb10u: goto label_4bdb10;
        case 0x4bdb14u: goto label_4bdb14;
        case 0x4bdb18u: goto label_4bdb18;
        case 0x4bdb1cu: goto label_4bdb1c;
        case 0x4bdb20u: goto label_4bdb20;
        case 0x4bdb24u: goto label_4bdb24;
        case 0x4bdb28u: goto label_4bdb28;
        case 0x4bdb2cu: goto label_4bdb2c;
        case 0x4bdb30u: goto label_4bdb30;
        case 0x4bdb34u: goto label_4bdb34;
        case 0x4bdb38u: goto label_4bdb38;
        case 0x4bdb3cu: goto label_4bdb3c;
        case 0x4bdb40u: goto label_4bdb40;
        case 0x4bdb44u: goto label_4bdb44;
        case 0x4bdb48u: goto label_4bdb48;
        case 0x4bdb4cu: goto label_4bdb4c;
        case 0x4bdb50u: goto label_4bdb50;
        case 0x4bdb54u: goto label_4bdb54;
        case 0x4bdb58u: goto label_4bdb58;
        case 0x4bdb5cu: goto label_4bdb5c;
        case 0x4bdb60u: goto label_4bdb60;
        case 0x4bdb64u: goto label_4bdb64;
        case 0x4bdb68u: goto label_4bdb68;
        case 0x4bdb6cu: goto label_4bdb6c;
        case 0x4bdb70u: goto label_4bdb70;
        case 0x4bdb74u: goto label_4bdb74;
        case 0x4bdb78u: goto label_4bdb78;
        case 0x4bdb7cu: goto label_4bdb7c;
        case 0x4bdb80u: goto label_4bdb80;
        case 0x4bdb84u: goto label_4bdb84;
        case 0x4bdb88u: goto label_4bdb88;
        case 0x4bdb8cu: goto label_4bdb8c;
        case 0x4bdb90u: goto label_4bdb90;
        case 0x4bdb94u: goto label_4bdb94;
        case 0x4bdb98u: goto label_4bdb98;
        case 0x4bdb9cu: goto label_4bdb9c;
        case 0x4bdba0u: goto label_4bdba0;
        case 0x4bdba4u: goto label_4bdba4;
        case 0x4bdba8u: goto label_4bdba8;
        case 0x4bdbacu: goto label_4bdbac;
        case 0x4bdbb0u: goto label_4bdbb0;
        case 0x4bdbb4u: goto label_4bdbb4;
        case 0x4bdbb8u: goto label_4bdbb8;
        case 0x4bdbbcu: goto label_4bdbbc;
        case 0x4bdbc0u: goto label_4bdbc0;
        case 0x4bdbc4u: goto label_4bdbc4;
        case 0x4bdbc8u: goto label_4bdbc8;
        case 0x4bdbccu: goto label_4bdbcc;
        case 0x4bdbd0u: goto label_4bdbd0;
        case 0x4bdbd4u: goto label_4bdbd4;
        case 0x4bdbd8u: goto label_4bdbd8;
        case 0x4bdbdcu: goto label_4bdbdc;
        case 0x4bdbe0u: goto label_4bdbe0;
        case 0x4bdbe4u: goto label_4bdbe4;
        case 0x4bdbe8u: goto label_4bdbe8;
        case 0x4bdbecu: goto label_4bdbec;
        case 0x4bdbf0u: goto label_4bdbf0;
        case 0x4bdbf4u: goto label_4bdbf4;
        case 0x4bdbf8u: goto label_4bdbf8;
        case 0x4bdbfcu: goto label_4bdbfc;
        case 0x4bdc00u: goto label_4bdc00;
        case 0x4bdc04u: goto label_4bdc04;
        case 0x4bdc08u: goto label_4bdc08;
        case 0x4bdc0cu: goto label_4bdc0c;
        case 0x4bdc10u: goto label_4bdc10;
        case 0x4bdc14u: goto label_4bdc14;
        case 0x4bdc18u: goto label_4bdc18;
        case 0x4bdc1cu: goto label_4bdc1c;
        case 0x4bdc20u: goto label_4bdc20;
        case 0x4bdc24u: goto label_4bdc24;
        case 0x4bdc28u: goto label_4bdc28;
        case 0x4bdc2cu: goto label_4bdc2c;
        case 0x4bdc30u: goto label_4bdc30;
        case 0x4bdc34u: goto label_4bdc34;
        case 0x4bdc38u: goto label_4bdc38;
        case 0x4bdc3cu: goto label_4bdc3c;
        case 0x4bdc40u: goto label_4bdc40;
        case 0x4bdc44u: goto label_4bdc44;
        case 0x4bdc48u: goto label_4bdc48;
        case 0x4bdc4cu: goto label_4bdc4c;
        case 0x4bdc50u: goto label_4bdc50;
        case 0x4bdc54u: goto label_4bdc54;
        case 0x4bdc58u: goto label_4bdc58;
        case 0x4bdc5cu: goto label_4bdc5c;
        case 0x4bdc60u: goto label_4bdc60;
        case 0x4bdc64u: goto label_4bdc64;
        case 0x4bdc68u: goto label_4bdc68;
        case 0x4bdc6cu: goto label_4bdc6c;
        case 0x4bdc70u: goto label_4bdc70;
        case 0x4bdc74u: goto label_4bdc74;
        case 0x4bdc78u: goto label_4bdc78;
        case 0x4bdc7cu: goto label_4bdc7c;
        case 0x4bdc80u: goto label_4bdc80;
        case 0x4bdc84u: goto label_4bdc84;
        case 0x4bdc88u: goto label_4bdc88;
        case 0x4bdc8cu: goto label_4bdc8c;
        case 0x4bdc90u: goto label_4bdc90;
        case 0x4bdc94u: goto label_4bdc94;
        case 0x4bdc98u: goto label_4bdc98;
        case 0x4bdc9cu: goto label_4bdc9c;
        case 0x4bdca0u: goto label_4bdca0;
        case 0x4bdca4u: goto label_4bdca4;
        case 0x4bdca8u: goto label_4bdca8;
        case 0x4bdcacu: goto label_4bdcac;
        case 0x4bdcb0u: goto label_4bdcb0;
        case 0x4bdcb4u: goto label_4bdcb4;
        case 0x4bdcb8u: goto label_4bdcb8;
        case 0x4bdcbcu: goto label_4bdcbc;
        case 0x4bdcc0u: goto label_4bdcc0;
        case 0x4bdcc4u: goto label_4bdcc4;
        case 0x4bdcc8u: goto label_4bdcc8;
        case 0x4bdcccu: goto label_4bdccc;
        case 0x4bdcd0u: goto label_4bdcd0;
        case 0x4bdcd4u: goto label_4bdcd4;
        case 0x4bdcd8u: goto label_4bdcd8;
        case 0x4bdcdcu: goto label_4bdcdc;
        case 0x4bdce0u: goto label_4bdce0;
        case 0x4bdce4u: goto label_4bdce4;
        case 0x4bdce8u: goto label_4bdce8;
        case 0x4bdcecu: goto label_4bdcec;
        case 0x4bdcf0u: goto label_4bdcf0;
        case 0x4bdcf4u: goto label_4bdcf4;
        case 0x4bdcf8u: goto label_4bdcf8;
        case 0x4bdcfcu: goto label_4bdcfc;
        case 0x4bdd00u: goto label_4bdd00;
        case 0x4bdd04u: goto label_4bdd04;
        case 0x4bdd08u: goto label_4bdd08;
        case 0x4bdd0cu: goto label_4bdd0c;
        case 0x4bdd10u: goto label_4bdd10;
        case 0x4bdd14u: goto label_4bdd14;
        case 0x4bdd18u: goto label_4bdd18;
        case 0x4bdd1cu: goto label_4bdd1c;
        case 0x4bdd20u: goto label_4bdd20;
        case 0x4bdd24u: goto label_4bdd24;
        case 0x4bdd28u: goto label_4bdd28;
        case 0x4bdd2cu: goto label_4bdd2c;
        case 0x4bdd30u: goto label_4bdd30;
        case 0x4bdd34u: goto label_4bdd34;
        case 0x4bdd38u: goto label_4bdd38;
        case 0x4bdd3cu: goto label_4bdd3c;
        case 0x4bdd40u: goto label_4bdd40;
        case 0x4bdd44u: goto label_4bdd44;
        case 0x4bdd48u: goto label_4bdd48;
        case 0x4bdd4cu: goto label_4bdd4c;
        case 0x4bdd50u: goto label_4bdd50;
        case 0x4bdd54u: goto label_4bdd54;
        case 0x4bdd58u: goto label_4bdd58;
        case 0x4bdd5cu: goto label_4bdd5c;
        case 0x4bdd60u: goto label_4bdd60;
        case 0x4bdd64u: goto label_4bdd64;
        case 0x4bdd68u: goto label_4bdd68;
        case 0x4bdd6cu: goto label_4bdd6c;
        case 0x4bdd70u: goto label_4bdd70;
        case 0x4bdd74u: goto label_4bdd74;
        case 0x4bdd78u: goto label_4bdd78;
        case 0x4bdd7cu: goto label_4bdd7c;
        case 0x4bdd80u: goto label_4bdd80;
        case 0x4bdd84u: goto label_4bdd84;
        case 0x4bdd88u: goto label_4bdd88;
        case 0x4bdd8cu: goto label_4bdd8c;
        case 0x4bdd90u: goto label_4bdd90;
        case 0x4bdd94u: goto label_4bdd94;
        case 0x4bdd98u: goto label_4bdd98;
        case 0x4bdd9cu: goto label_4bdd9c;
        case 0x4bdda0u: goto label_4bdda0;
        case 0x4bdda4u: goto label_4bdda4;
        case 0x4bdda8u: goto label_4bdda8;
        case 0x4bddacu: goto label_4bddac;
        case 0x4bddb0u: goto label_4bddb0;
        case 0x4bddb4u: goto label_4bddb4;
        case 0x4bddb8u: goto label_4bddb8;
        case 0x4bddbcu: goto label_4bddbc;
        case 0x4bddc0u: goto label_4bddc0;
        case 0x4bddc4u: goto label_4bddc4;
        case 0x4bddc8u: goto label_4bddc8;
        case 0x4bddccu: goto label_4bddcc;
        case 0x4bddd0u: goto label_4bddd0;
        case 0x4bddd4u: goto label_4bddd4;
        case 0x4bddd8u: goto label_4bddd8;
        case 0x4bdddcu: goto label_4bdddc;
        case 0x4bdde0u: goto label_4bdde0;
        case 0x4bdde4u: goto label_4bdde4;
        case 0x4bdde8u: goto label_4bdde8;
        case 0x4bddecu: goto label_4bddec;
        case 0x4bddf0u: goto label_4bddf0;
        case 0x4bddf4u: goto label_4bddf4;
        case 0x4bddf8u: goto label_4bddf8;
        case 0x4bddfcu: goto label_4bddfc;
        case 0x4bde00u: goto label_4bde00;
        case 0x4bde04u: goto label_4bde04;
        case 0x4bde08u: goto label_4bde08;
        case 0x4bde0cu: goto label_4bde0c;
        case 0x4bde10u: goto label_4bde10;
        case 0x4bde14u: goto label_4bde14;
        case 0x4bde18u: goto label_4bde18;
        case 0x4bde1cu: goto label_4bde1c;
        case 0x4bde20u: goto label_4bde20;
        case 0x4bde24u: goto label_4bde24;
        case 0x4bde28u: goto label_4bde28;
        case 0x4bde2cu: goto label_4bde2c;
        case 0x4bde30u: goto label_4bde30;
        case 0x4bde34u: goto label_4bde34;
        case 0x4bde38u: goto label_4bde38;
        case 0x4bde3cu: goto label_4bde3c;
        case 0x4bde40u: goto label_4bde40;
        case 0x4bde44u: goto label_4bde44;
        case 0x4bde48u: goto label_4bde48;
        case 0x4bde4cu: goto label_4bde4c;
        case 0x4bde50u: goto label_4bde50;
        case 0x4bde54u: goto label_4bde54;
        case 0x4bde58u: goto label_4bde58;
        case 0x4bde5cu: goto label_4bde5c;
        case 0x4bde60u: goto label_4bde60;
        case 0x4bde64u: goto label_4bde64;
        case 0x4bde68u: goto label_4bde68;
        case 0x4bde6cu: goto label_4bde6c;
        case 0x4bde70u: goto label_4bde70;
        case 0x4bde74u: goto label_4bde74;
        case 0x4bde78u: goto label_4bde78;
        case 0x4bde7cu: goto label_4bde7c;
        case 0x4bde80u: goto label_4bde80;
        case 0x4bde84u: goto label_4bde84;
        case 0x4bde88u: goto label_4bde88;
        case 0x4bde8cu: goto label_4bde8c;
        case 0x4bde90u: goto label_4bde90;
        case 0x4bde94u: goto label_4bde94;
        case 0x4bde98u: goto label_4bde98;
        case 0x4bde9cu: goto label_4bde9c;
        case 0x4bdea0u: goto label_4bdea0;
        case 0x4bdea4u: goto label_4bdea4;
        case 0x4bdea8u: goto label_4bdea8;
        case 0x4bdeacu: goto label_4bdeac;
        case 0x4bdeb0u: goto label_4bdeb0;
        case 0x4bdeb4u: goto label_4bdeb4;
        case 0x4bdeb8u: goto label_4bdeb8;
        case 0x4bdebcu: goto label_4bdebc;
        case 0x4bdec0u: goto label_4bdec0;
        case 0x4bdec4u: goto label_4bdec4;
        case 0x4bdec8u: goto label_4bdec8;
        case 0x4bdeccu: goto label_4bdecc;
        case 0x4bded0u: goto label_4bded0;
        case 0x4bded4u: goto label_4bded4;
        case 0x4bded8u: goto label_4bded8;
        case 0x4bdedcu: goto label_4bdedc;
        case 0x4bdee0u: goto label_4bdee0;
        case 0x4bdee4u: goto label_4bdee4;
        case 0x4bdee8u: goto label_4bdee8;
        case 0x4bdeecu: goto label_4bdeec;
        case 0x4bdef0u: goto label_4bdef0;
        case 0x4bdef4u: goto label_4bdef4;
        case 0x4bdef8u: goto label_4bdef8;
        case 0x4bdefcu: goto label_4bdefc;
        case 0x4bdf00u: goto label_4bdf00;
        case 0x4bdf04u: goto label_4bdf04;
        case 0x4bdf08u: goto label_4bdf08;
        case 0x4bdf0cu: goto label_4bdf0c;
        case 0x4bdf10u: goto label_4bdf10;
        case 0x4bdf14u: goto label_4bdf14;
        case 0x4bdf18u: goto label_4bdf18;
        case 0x4bdf1cu: goto label_4bdf1c;
        case 0x4bdf20u: goto label_4bdf20;
        case 0x4bdf24u: goto label_4bdf24;
        case 0x4bdf28u: goto label_4bdf28;
        case 0x4bdf2cu: goto label_4bdf2c;
        case 0x4bdf30u: goto label_4bdf30;
        case 0x4bdf34u: goto label_4bdf34;
        case 0x4bdf38u: goto label_4bdf38;
        case 0x4bdf3cu: goto label_4bdf3c;
        case 0x4bdf40u: goto label_4bdf40;
        case 0x4bdf44u: goto label_4bdf44;
        case 0x4bdf48u: goto label_4bdf48;
        case 0x4bdf4cu: goto label_4bdf4c;
        case 0x4bdf50u: goto label_4bdf50;
        case 0x4bdf54u: goto label_4bdf54;
        case 0x4bdf58u: goto label_4bdf58;
        case 0x4bdf5cu: goto label_4bdf5c;
        case 0x4bdf60u: goto label_4bdf60;
        case 0x4bdf64u: goto label_4bdf64;
        case 0x4bdf68u: goto label_4bdf68;
        case 0x4bdf6cu: goto label_4bdf6c;
        case 0x4bdf70u: goto label_4bdf70;
        case 0x4bdf74u: goto label_4bdf74;
        case 0x4bdf78u: goto label_4bdf78;
        case 0x4bdf7cu: goto label_4bdf7c;
        case 0x4bdf80u: goto label_4bdf80;
        case 0x4bdf84u: goto label_4bdf84;
        case 0x4bdf88u: goto label_4bdf88;
        case 0x4bdf8cu: goto label_4bdf8c;
        case 0x4bdf90u: goto label_4bdf90;
        case 0x4bdf94u: goto label_4bdf94;
        case 0x4bdf98u: goto label_4bdf98;
        case 0x4bdf9cu: goto label_4bdf9c;
        case 0x4bdfa0u: goto label_4bdfa0;
        case 0x4bdfa4u: goto label_4bdfa4;
        case 0x4bdfa8u: goto label_4bdfa8;
        case 0x4bdfacu: goto label_4bdfac;
        case 0x4bdfb0u: goto label_4bdfb0;
        case 0x4bdfb4u: goto label_4bdfb4;
        case 0x4bdfb8u: goto label_4bdfb8;
        case 0x4bdfbcu: goto label_4bdfbc;
        case 0x4bdfc0u: goto label_4bdfc0;
        case 0x4bdfc4u: goto label_4bdfc4;
        case 0x4bdfc8u: goto label_4bdfc8;
        case 0x4bdfccu: goto label_4bdfcc;
        case 0x4bdfd0u: goto label_4bdfd0;
        case 0x4bdfd4u: goto label_4bdfd4;
        case 0x4bdfd8u: goto label_4bdfd8;
        case 0x4bdfdcu: goto label_4bdfdc;
        case 0x4bdfe0u: goto label_4bdfe0;
        case 0x4bdfe4u: goto label_4bdfe4;
        case 0x4bdfe8u: goto label_4bdfe8;
        case 0x4bdfecu: goto label_4bdfec;
        case 0x4bdff0u: goto label_4bdff0;
        case 0x4bdff4u: goto label_4bdff4;
        case 0x4bdff8u: goto label_4bdff8;
        case 0x4bdffcu: goto label_4bdffc;
        case 0x4be000u: goto label_4be000;
        case 0x4be004u: goto label_4be004;
        case 0x4be008u: goto label_4be008;
        case 0x4be00cu: goto label_4be00c;
        case 0x4be010u: goto label_4be010;
        case 0x4be014u: goto label_4be014;
        case 0x4be018u: goto label_4be018;
        case 0x4be01cu: goto label_4be01c;
        case 0x4be020u: goto label_4be020;
        case 0x4be024u: goto label_4be024;
        case 0x4be028u: goto label_4be028;
        case 0x4be02cu: goto label_4be02c;
        case 0x4be030u: goto label_4be030;
        case 0x4be034u: goto label_4be034;
        case 0x4be038u: goto label_4be038;
        case 0x4be03cu: goto label_4be03c;
        case 0x4be040u: goto label_4be040;
        case 0x4be044u: goto label_4be044;
        case 0x4be048u: goto label_4be048;
        case 0x4be04cu: goto label_4be04c;
        case 0x4be050u: goto label_4be050;
        case 0x4be054u: goto label_4be054;
        case 0x4be058u: goto label_4be058;
        case 0x4be05cu: goto label_4be05c;
        case 0x4be060u: goto label_4be060;
        case 0x4be064u: goto label_4be064;
        case 0x4be068u: goto label_4be068;
        case 0x4be06cu: goto label_4be06c;
        case 0x4be070u: goto label_4be070;
        case 0x4be074u: goto label_4be074;
        case 0x4be078u: goto label_4be078;
        case 0x4be07cu: goto label_4be07c;
        case 0x4be080u: goto label_4be080;
        case 0x4be084u: goto label_4be084;
        case 0x4be088u: goto label_4be088;
        case 0x4be08cu: goto label_4be08c;
        case 0x4be090u: goto label_4be090;
        case 0x4be094u: goto label_4be094;
        case 0x4be098u: goto label_4be098;
        case 0x4be09cu: goto label_4be09c;
        case 0x4be0a0u: goto label_4be0a0;
        case 0x4be0a4u: goto label_4be0a4;
        case 0x4be0a8u: goto label_4be0a8;
        case 0x4be0acu: goto label_4be0ac;
        case 0x4be0b0u: goto label_4be0b0;
        case 0x4be0b4u: goto label_4be0b4;
        case 0x4be0b8u: goto label_4be0b8;
        case 0x4be0bcu: goto label_4be0bc;
        case 0x4be0c0u: goto label_4be0c0;
        case 0x4be0c4u: goto label_4be0c4;
        case 0x4be0c8u: goto label_4be0c8;
        case 0x4be0ccu: goto label_4be0cc;
        case 0x4be0d0u: goto label_4be0d0;
        case 0x4be0d4u: goto label_4be0d4;
        case 0x4be0d8u: goto label_4be0d8;
        case 0x4be0dcu: goto label_4be0dc;
        case 0x4be0e0u: goto label_4be0e0;
        case 0x4be0e4u: goto label_4be0e4;
        case 0x4be0e8u: goto label_4be0e8;
        case 0x4be0ecu: goto label_4be0ec;
        case 0x4be0f0u: goto label_4be0f0;
        case 0x4be0f4u: goto label_4be0f4;
        case 0x4be0f8u: goto label_4be0f8;
        case 0x4be0fcu: goto label_4be0fc;
        case 0x4be100u: goto label_4be100;
        case 0x4be104u: goto label_4be104;
        case 0x4be108u: goto label_4be108;
        case 0x4be10cu: goto label_4be10c;
        case 0x4be110u: goto label_4be110;
        case 0x4be114u: goto label_4be114;
        case 0x4be118u: goto label_4be118;
        case 0x4be11cu: goto label_4be11c;
        case 0x4be120u: goto label_4be120;
        case 0x4be124u: goto label_4be124;
        case 0x4be128u: goto label_4be128;
        case 0x4be12cu: goto label_4be12c;
        case 0x4be130u: goto label_4be130;
        case 0x4be134u: goto label_4be134;
        case 0x4be138u: goto label_4be138;
        case 0x4be13cu: goto label_4be13c;
        case 0x4be140u: goto label_4be140;
        case 0x4be144u: goto label_4be144;
        case 0x4be148u: goto label_4be148;
        case 0x4be14cu: goto label_4be14c;
        case 0x4be150u: goto label_4be150;
        case 0x4be154u: goto label_4be154;
        case 0x4be158u: goto label_4be158;
        case 0x4be15cu: goto label_4be15c;
        case 0x4be160u: goto label_4be160;
        case 0x4be164u: goto label_4be164;
        case 0x4be168u: goto label_4be168;
        case 0x4be16cu: goto label_4be16c;
        case 0x4be170u: goto label_4be170;
        case 0x4be174u: goto label_4be174;
        case 0x4be178u: goto label_4be178;
        case 0x4be17cu: goto label_4be17c;
        case 0x4be180u: goto label_4be180;
        case 0x4be184u: goto label_4be184;
        case 0x4be188u: goto label_4be188;
        case 0x4be18cu: goto label_4be18c;
        case 0x4be190u: goto label_4be190;
        case 0x4be194u: goto label_4be194;
        case 0x4be198u: goto label_4be198;
        case 0x4be19cu: goto label_4be19c;
        case 0x4be1a0u: goto label_4be1a0;
        case 0x4be1a4u: goto label_4be1a4;
        case 0x4be1a8u: goto label_4be1a8;
        case 0x4be1acu: goto label_4be1ac;
        case 0x4be1b0u: goto label_4be1b0;
        case 0x4be1b4u: goto label_4be1b4;
        case 0x4be1b8u: goto label_4be1b8;
        case 0x4be1bcu: goto label_4be1bc;
        case 0x4be1c0u: goto label_4be1c0;
        case 0x4be1c4u: goto label_4be1c4;
        case 0x4be1c8u: goto label_4be1c8;
        case 0x4be1ccu: goto label_4be1cc;
        case 0x4be1d0u: goto label_4be1d0;
        case 0x4be1d4u: goto label_4be1d4;
        case 0x4be1d8u: goto label_4be1d8;
        case 0x4be1dcu: goto label_4be1dc;
        case 0x4be1e0u: goto label_4be1e0;
        case 0x4be1e4u: goto label_4be1e4;
        case 0x4be1e8u: goto label_4be1e8;
        case 0x4be1ecu: goto label_4be1ec;
        case 0x4be1f0u: goto label_4be1f0;
        case 0x4be1f4u: goto label_4be1f4;
        case 0x4be1f8u: goto label_4be1f8;
        case 0x4be1fcu: goto label_4be1fc;
        case 0x4be200u: goto label_4be200;
        case 0x4be204u: goto label_4be204;
        case 0x4be208u: goto label_4be208;
        case 0x4be20cu: goto label_4be20c;
        case 0x4be210u: goto label_4be210;
        case 0x4be214u: goto label_4be214;
        case 0x4be218u: goto label_4be218;
        case 0x4be21cu: goto label_4be21c;
        case 0x4be220u: goto label_4be220;
        case 0x4be224u: goto label_4be224;
        case 0x4be228u: goto label_4be228;
        case 0x4be22cu: goto label_4be22c;
        case 0x4be230u: goto label_4be230;
        case 0x4be234u: goto label_4be234;
        case 0x4be238u: goto label_4be238;
        case 0x4be23cu: goto label_4be23c;
        case 0x4be240u: goto label_4be240;
        case 0x4be244u: goto label_4be244;
        case 0x4be248u: goto label_4be248;
        case 0x4be24cu: goto label_4be24c;
        case 0x4be250u: goto label_4be250;
        case 0x4be254u: goto label_4be254;
        case 0x4be258u: goto label_4be258;
        case 0x4be25cu: goto label_4be25c;
        case 0x4be260u: goto label_4be260;
        case 0x4be264u: goto label_4be264;
        case 0x4be268u: goto label_4be268;
        case 0x4be26cu: goto label_4be26c;
        case 0x4be270u: goto label_4be270;
        case 0x4be274u: goto label_4be274;
        case 0x4be278u: goto label_4be278;
        case 0x4be27cu: goto label_4be27c;
        case 0x4be280u: goto label_4be280;
        case 0x4be284u: goto label_4be284;
        case 0x4be288u: goto label_4be288;
        case 0x4be28cu: goto label_4be28c;
        case 0x4be290u: goto label_4be290;
        case 0x4be294u: goto label_4be294;
        case 0x4be298u: goto label_4be298;
        case 0x4be29cu: goto label_4be29c;
        case 0x4be2a0u: goto label_4be2a0;
        case 0x4be2a4u: goto label_4be2a4;
        case 0x4be2a8u: goto label_4be2a8;
        case 0x4be2acu: goto label_4be2ac;
        case 0x4be2b0u: goto label_4be2b0;
        case 0x4be2b4u: goto label_4be2b4;
        case 0x4be2b8u: goto label_4be2b8;
        case 0x4be2bcu: goto label_4be2bc;
        case 0x4be2c0u: goto label_4be2c0;
        case 0x4be2c4u: goto label_4be2c4;
        case 0x4be2c8u: goto label_4be2c8;
        case 0x4be2ccu: goto label_4be2cc;
        case 0x4be2d0u: goto label_4be2d0;
        case 0x4be2d4u: goto label_4be2d4;
        case 0x4be2d8u: goto label_4be2d8;
        case 0x4be2dcu: goto label_4be2dc;
        case 0x4be2e0u: goto label_4be2e0;
        case 0x4be2e4u: goto label_4be2e4;
        case 0x4be2e8u: goto label_4be2e8;
        case 0x4be2ecu: goto label_4be2ec;
        case 0x4be2f0u: goto label_4be2f0;
        case 0x4be2f4u: goto label_4be2f4;
        case 0x4be2f8u: goto label_4be2f8;
        case 0x4be2fcu: goto label_4be2fc;
        case 0x4be300u: goto label_4be300;
        case 0x4be304u: goto label_4be304;
        case 0x4be308u: goto label_4be308;
        case 0x4be30cu: goto label_4be30c;
        case 0x4be310u: goto label_4be310;
        case 0x4be314u: goto label_4be314;
        case 0x4be318u: goto label_4be318;
        case 0x4be31cu: goto label_4be31c;
        case 0x4be320u: goto label_4be320;
        case 0x4be324u: goto label_4be324;
        case 0x4be328u: goto label_4be328;
        case 0x4be32cu: goto label_4be32c;
        case 0x4be330u: goto label_4be330;
        case 0x4be334u: goto label_4be334;
        case 0x4be338u: goto label_4be338;
        case 0x4be33cu: goto label_4be33c;
        case 0x4be340u: goto label_4be340;
        case 0x4be344u: goto label_4be344;
        case 0x4be348u: goto label_4be348;
        case 0x4be34cu: goto label_4be34c;
        case 0x4be350u: goto label_4be350;
        case 0x4be354u: goto label_4be354;
        case 0x4be358u: goto label_4be358;
        case 0x4be35cu: goto label_4be35c;
        case 0x4be360u: goto label_4be360;
        case 0x4be364u: goto label_4be364;
        case 0x4be368u: goto label_4be368;
        case 0x4be36cu: goto label_4be36c;
        case 0x4be370u: goto label_4be370;
        case 0x4be374u: goto label_4be374;
        case 0x4be378u: goto label_4be378;
        case 0x4be37cu: goto label_4be37c;
        case 0x4be380u: goto label_4be380;
        case 0x4be384u: goto label_4be384;
        case 0x4be388u: goto label_4be388;
        case 0x4be38cu: goto label_4be38c;
        case 0x4be390u: goto label_4be390;
        case 0x4be394u: goto label_4be394;
        case 0x4be398u: goto label_4be398;
        case 0x4be39cu: goto label_4be39c;
        case 0x4be3a0u: goto label_4be3a0;
        case 0x4be3a4u: goto label_4be3a4;
        case 0x4be3a8u: goto label_4be3a8;
        case 0x4be3acu: goto label_4be3ac;
        case 0x4be3b0u: goto label_4be3b0;
        case 0x4be3b4u: goto label_4be3b4;
        case 0x4be3b8u: goto label_4be3b8;
        case 0x4be3bcu: goto label_4be3bc;
        case 0x4be3c0u: goto label_4be3c0;
        case 0x4be3c4u: goto label_4be3c4;
        case 0x4be3c8u: goto label_4be3c8;
        case 0x4be3ccu: goto label_4be3cc;
        case 0x4be3d0u: goto label_4be3d0;
        case 0x4be3d4u: goto label_4be3d4;
        case 0x4be3d8u: goto label_4be3d8;
        case 0x4be3dcu: goto label_4be3dc;
        case 0x4be3e0u: goto label_4be3e0;
        case 0x4be3e4u: goto label_4be3e4;
        case 0x4be3e8u: goto label_4be3e8;
        case 0x4be3ecu: goto label_4be3ec;
        case 0x4be3f0u: goto label_4be3f0;
        case 0x4be3f4u: goto label_4be3f4;
        case 0x4be3f8u: goto label_4be3f8;
        case 0x4be3fcu: goto label_4be3fc;
        case 0x4be400u: goto label_4be400;
        case 0x4be404u: goto label_4be404;
        case 0x4be408u: goto label_4be408;
        case 0x4be40cu: goto label_4be40c;
        case 0x4be410u: goto label_4be410;
        case 0x4be414u: goto label_4be414;
        case 0x4be418u: goto label_4be418;
        case 0x4be41cu: goto label_4be41c;
        case 0x4be420u: goto label_4be420;
        case 0x4be424u: goto label_4be424;
        case 0x4be428u: goto label_4be428;
        case 0x4be42cu: goto label_4be42c;
        case 0x4be430u: goto label_4be430;
        case 0x4be434u: goto label_4be434;
        case 0x4be438u: goto label_4be438;
        case 0x4be43cu: goto label_4be43c;
        case 0x4be440u: goto label_4be440;
        case 0x4be444u: goto label_4be444;
        case 0x4be448u: goto label_4be448;
        case 0x4be44cu: goto label_4be44c;
        case 0x4be450u: goto label_4be450;
        case 0x4be454u: goto label_4be454;
        case 0x4be458u: goto label_4be458;
        case 0x4be45cu: goto label_4be45c;
        case 0x4be460u: goto label_4be460;
        case 0x4be464u: goto label_4be464;
        case 0x4be468u: goto label_4be468;
        case 0x4be46cu: goto label_4be46c;
        case 0x4be470u: goto label_4be470;
        case 0x4be474u: goto label_4be474;
        case 0x4be478u: goto label_4be478;
        case 0x4be47cu: goto label_4be47c;
        case 0x4be480u: goto label_4be480;
        case 0x4be484u: goto label_4be484;
        case 0x4be488u: goto label_4be488;
        case 0x4be48cu: goto label_4be48c;
        case 0x4be490u: goto label_4be490;
        case 0x4be494u: goto label_4be494;
        case 0x4be498u: goto label_4be498;
        case 0x4be49cu: goto label_4be49c;
        case 0x4be4a0u: goto label_4be4a0;
        case 0x4be4a4u: goto label_4be4a4;
        case 0x4be4a8u: goto label_4be4a8;
        case 0x4be4acu: goto label_4be4ac;
        case 0x4be4b0u: goto label_4be4b0;
        case 0x4be4b4u: goto label_4be4b4;
        case 0x4be4b8u: goto label_4be4b8;
        case 0x4be4bcu: goto label_4be4bc;
        case 0x4be4c0u: goto label_4be4c0;
        case 0x4be4c4u: goto label_4be4c4;
        case 0x4be4c8u: goto label_4be4c8;
        case 0x4be4ccu: goto label_4be4cc;
        case 0x4be4d0u: goto label_4be4d0;
        case 0x4be4d4u: goto label_4be4d4;
        case 0x4be4d8u: goto label_4be4d8;
        case 0x4be4dcu: goto label_4be4dc;
        case 0x4be4e0u: goto label_4be4e0;
        case 0x4be4e4u: goto label_4be4e4;
        case 0x4be4e8u: goto label_4be4e8;
        case 0x4be4ecu: goto label_4be4ec;
        case 0x4be4f0u: goto label_4be4f0;
        case 0x4be4f4u: goto label_4be4f4;
        case 0x4be4f8u: goto label_4be4f8;
        case 0x4be4fcu: goto label_4be4fc;
        case 0x4be500u: goto label_4be500;
        case 0x4be504u: goto label_4be504;
        case 0x4be508u: goto label_4be508;
        case 0x4be50cu: goto label_4be50c;
        case 0x4be510u: goto label_4be510;
        case 0x4be514u: goto label_4be514;
        case 0x4be518u: goto label_4be518;
        case 0x4be51cu: goto label_4be51c;
        case 0x4be520u: goto label_4be520;
        case 0x4be524u: goto label_4be524;
        case 0x4be528u: goto label_4be528;
        case 0x4be52cu: goto label_4be52c;
        case 0x4be530u: goto label_4be530;
        case 0x4be534u: goto label_4be534;
        case 0x4be538u: goto label_4be538;
        case 0x4be53cu: goto label_4be53c;
        case 0x4be540u: goto label_4be540;
        case 0x4be544u: goto label_4be544;
        case 0x4be548u: goto label_4be548;
        case 0x4be54cu: goto label_4be54c;
        case 0x4be550u: goto label_4be550;
        case 0x4be554u: goto label_4be554;
        case 0x4be558u: goto label_4be558;
        case 0x4be55cu: goto label_4be55c;
        case 0x4be560u: goto label_4be560;
        case 0x4be564u: goto label_4be564;
        case 0x4be568u: goto label_4be568;
        case 0x4be56cu: goto label_4be56c;
        case 0x4be570u: goto label_4be570;
        case 0x4be574u: goto label_4be574;
        case 0x4be578u: goto label_4be578;
        case 0x4be57cu: goto label_4be57c;
        case 0x4be580u: goto label_4be580;
        case 0x4be584u: goto label_4be584;
        case 0x4be588u: goto label_4be588;
        case 0x4be58cu: goto label_4be58c;
        case 0x4be590u: goto label_4be590;
        case 0x4be594u: goto label_4be594;
        case 0x4be598u: goto label_4be598;
        case 0x4be59cu: goto label_4be59c;
        case 0x4be5a0u: goto label_4be5a0;
        case 0x4be5a4u: goto label_4be5a4;
        case 0x4be5a8u: goto label_4be5a8;
        case 0x4be5acu: goto label_4be5ac;
        case 0x4be5b0u: goto label_4be5b0;
        case 0x4be5b4u: goto label_4be5b4;
        case 0x4be5b8u: goto label_4be5b8;
        case 0x4be5bcu: goto label_4be5bc;
        case 0x4be5c0u: goto label_4be5c0;
        case 0x4be5c4u: goto label_4be5c4;
        case 0x4be5c8u: goto label_4be5c8;
        case 0x4be5ccu: goto label_4be5cc;
        case 0x4be5d0u: goto label_4be5d0;
        case 0x4be5d4u: goto label_4be5d4;
        case 0x4be5d8u: goto label_4be5d8;
        case 0x4be5dcu: goto label_4be5dc;
        case 0x4be5e0u: goto label_4be5e0;
        case 0x4be5e4u: goto label_4be5e4;
        case 0x4be5e8u: goto label_4be5e8;
        case 0x4be5ecu: goto label_4be5ec;
        case 0x4be5f0u: goto label_4be5f0;
        case 0x4be5f4u: goto label_4be5f4;
        case 0x4be5f8u: goto label_4be5f8;
        case 0x4be5fcu: goto label_4be5fc;
        case 0x4be600u: goto label_4be600;
        case 0x4be604u: goto label_4be604;
        case 0x4be608u: goto label_4be608;
        case 0x4be60cu: goto label_4be60c;
        case 0x4be610u: goto label_4be610;
        case 0x4be614u: goto label_4be614;
        case 0x4be618u: goto label_4be618;
        case 0x4be61cu: goto label_4be61c;
        case 0x4be620u: goto label_4be620;
        case 0x4be624u: goto label_4be624;
        case 0x4be628u: goto label_4be628;
        case 0x4be62cu: goto label_4be62c;
        case 0x4be630u: goto label_4be630;
        case 0x4be634u: goto label_4be634;
        case 0x4be638u: goto label_4be638;
        case 0x4be63cu: goto label_4be63c;
        case 0x4be640u: goto label_4be640;
        case 0x4be644u: goto label_4be644;
        case 0x4be648u: goto label_4be648;
        case 0x4be64cu: goto label_4be64c;
        case 0x4be650u: goto label_4be650;
        case 0x4be654u: goto label_4be654;
        case 0x4be658u: goto label_4be658;
        case 0x4be65cu: goto label_4be65c;
        case 0x4be660u: goto label_4be660;
        case 0x4be664u: goto label_4be664;
        case 0x4be668u: goto label_4be668;
        case 0x4be66cu: goto label_4be66c;
        case 0x4be670u: goto label_4be670;
        case 0x4be674u: goto label_4be674;
        case 0x4be678u: goto label_4be678;
        case 0x4be67cu: goto label_4be67c;
        case 0x4be680u: goto label_4be680;
        case 0x4be684u: goto label_4be684;
        case 0x4be688u: goto label_4be688;
        case 0x4be68cu: goto label_4be68c;
        case 0x4be690u: goto label_4be690;
        case 0x4be694u: goto label_4be694;
        case 0x4be698u: goto label_4be698;
        case 0x4be69cu: goto label_4be69c;
        default: break;
    }

    ctx->pc = 0x4bd8a0u;

label_4bd8a0:
    // 0x4bd8a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4bd8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4bd8a4:
    // 0x4bd8a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4bd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4bd8a8:
    // 0x4bd8a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4bd8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4bd8ac:
    // 0x4bd8ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bd8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bd8b0:
    // 0x4bd8b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bd8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bd8b4:
    // 0x4bd8b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4bd8b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bd8b8:
    // 0x4bd8b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bd8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bd8bc:
    // 0x4bd8bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4bd8bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4bd8c0:
    // 0x4bd8c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bd8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bd8c4:
    // 0x4bd8c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4bd8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4bd8c8:
    // 0x4bd8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bd8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bd8cc:
    // 0x4bd8cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4bd8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4bd8d0:
    // 0x4bd8d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bd8d4:
    // 0x4bd8d4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4bd8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4bd8d8:
    // 0x4bd8d8: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x4bd8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4bd8dc:
    // 0x4bd8dc: 0x8c840cb4  lw          $a0, 0xCB4($a0)
    ctx->pc = 0x4bd8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_4bd8e0:
    // 0x4bd8e0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4bd8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4bd8e4:
    // 0x4bd8e4: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
label_4bd8e8:
    if (ctx->pc == 0x4BD8E8u) {
        ctx->pc = 0x4BD8E8u;
            // 0x4bd8e8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD8ECu;
        goto label_4bd8ec;
    }
    ctx->pc = 0x4BD8E4u;
    {
        const bool branch_taken_0x4bd8e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4BD8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD8E4u;
            // 0x4bd8e8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd8e4) {
            ctx->pc = 0x4BD9F8u;
            goto label_4bd9f8;
        }
    }
    ctx->pc = 0x4BD8ECu;
label_4bd8ec:
    // 0x4bd8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd8f0:
    // 0x4bd8f0: 0xc04f278  jal         func_13C9E0
label_4bd8f4:
    if (ctx->pc == 0x4BD8F4u) {
        ctx->pc = 0x4BD8F4u;
            // 0x4bd8f4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x4BD8F8u;
        goto label_4bd8f8;
    }
    ctx->pc = 0x4BD8F0u;
    SET_GPR_U32(ctx, 31, 0x4BD8F8u);
    ctx->pc = 0x4BD8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD8F0u;
            // 0x4bd8f4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD8F8u; }
        if (ctx->pc != 0x4BD8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD8F8u; }
        if (ctx->pc != 0x4BD8F8u) { return; }
    }
    ctx->pc = 0x4BD8F8u;
label_4bd8f8:
    // 0x4bd8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd8fc:
    // 0x4bd8fc: 0xc04ce80  jal         func_133A00
label_4bd900:
    if (ctx->pc == 0x4BD900u) {
        ctx->pc = 0x4BD900u;
            // 0x4bd900: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x4BD904u;
        goto label_4bd904;
    }
    ctx->pc = 0x4BD8FCu;
    SET_GPR_U32(ctx, 31, 0x4BD904u);
    ctx->pc = 0x4BD900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD8FCu;
            // 0x4bd900: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD904u; }
        if (ctx->pc != 0x4BD904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD904u; }
        if (ctx->pc != 0x4BD904u) { return; }
    }
    ctx->pc = 0x4BD904u;
label_4bd904:
    // 0x4bd904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bd904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4bd908:
    // 0x4bd908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd90c:
    // 0x4bd90c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bd90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bd910:
    // 0x4bd910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bd910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd914:
    // 0x4bd914: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4bd914u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4bd918:
    // 0x4bd918: 0xc04ce50  jal         func_133940
label_4bd91c:
    if (ctx->pc == 0x4BD91Cu) {
        ctx->pc = 0x4BD91Cu;
            // 0x4bd91c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4BD920u;
        goto label_4bd920;
    }
    ctx->pc = 0x4BD918u;
    SET_GPR_U32(ctx, 31, 0x4BD920u);
    ctx->pc = 0x4BD91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD918u;
            // 0x4bd91c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD920u; }
        if (ctx->pc != 0x4BD920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD920u; }
        if (ctx->pc != 0x4BD920u) { return; }
    }
    ctx->pc = 0x4BD920u;
label_4bd920:
    // 0x4bd920: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4bd920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4bd924:
    // 0x4bd924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bd924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bd928:
    // 0x4bd928: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4bd928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4bd92c:
    // 0x4bd92c: 0xc04e4a4  jal         func_139290
label_4bd930:
    if (ctx->pc == 0x4BD930u) {
        ctx->pc = 0x4BD930u;
            // 0x4bd930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD934u;
        goto label_4bd934;
    }
    ctx->pc = 0x4BD92Cu;
    SET_GPR_U32(ctx, 31, 0x4BD934u);
    ctx->pc = 0x4BD930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD92Cu;
            // 0x4bd930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD934u; }
        if (ctx->pc != 0x4BD934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD934u; }
        if (ctx->pc != 0x4BD934u) { return; }
    }
    ctx->pc = 0x4BD934u;
label_4bd934:
    // 0x4bd934: 0xc68c001c  lwc1        $f12, 0x1C($s4)
    ctx->pc = 0x4bd934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bd938:
    // 0x4bd938: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4bd938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4bd93c:
    // 0x4bd93c: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x4bd93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_4bd940:
    // 0x4bd940: 0xc054bbc  jal         func_152EF0
label_4bd944:
    if (ctx->pc == 0x4BD944u) {
        ctx->pc = 0x4BD944u;
            // 0x4bd944: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x4BD948u;
        goto label_4bd948;
    }
    ctx->pc = 0x4BD940u;
    SET_GPR_U32(ctx, 31, 0x4BD948u);
    ctx->pc = 0x4BD944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD940u;
            // 0x4bd944: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD948u; }
        if (ctx->pc != 0x4BD948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD948u; }
        if (ctx->pc != 0x4BD948u) { return; }
    }
    ctx->pc = 0x4BD948u;
label_4bd948:
    // 0x4bd948: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4bd948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4bd94c:
    // 0x4bd94c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bd94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd950:
    // 0x4bd950: 0xc04cd60  jal         func_133580
label_4bd954:
    if (ctx->pc == 0x4BD954u) {
        ctx->pc = 0x4BD954u;
            // 0x4bd954: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x4BD958u;
        goto label_4bd958;
    }
    ctx->pc = 0x4BD950u;
    SET_GPR_U32(ctx, 31, 0x4BD958u);
    ctx->pc = 0x4BD954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD950u;
            // 0x4bd954: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD958u; }
        if (ctx->pc != 0x4BD958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD958u; }
        if (ctx->pc != 0x4BD958u) { return; }
    }
    ctx->pc = 0x4BD958u;
label_4bd958:
    // 0x4bd958: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4bd958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4bd95c:
    // 0x4bd95c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4bd95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bd960:
    // 0x4bd960: 0xc04cd60  jal         func_133580
label_4bd964:
    if (ctx->pc == 0x4BD964u) {
        ctx->pc = 0x4BD964u;
            // 0x4bd964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD968u;
        goto label_4bd968;
    }
    ctx->pc = 0x4BD960u;
    SET_GPR_U32(ctx, 31, 0x4BD968u);
    ctx->pc = 0x4BD964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD960u;
            // 0x4bd964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD968u; }
        if (ctx->pc != 0x4BD968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD968u; }
        if (ctx->pc != 0x4BD968u) { return; }
    }
    ctx->pc = 0x4BD968u;
label_4bd968:
    // 0x4bd968: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x4bd968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4bd96c:
    // 0x4bd96c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4bd96cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4bd970:
    // 0x4bd970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bd970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bd974:
    // 0x4bd974: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bd974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bd978:
    // 0x4bd978: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x4bd978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4bd97c:
    // 0x4bd97c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4bd97cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4bd980:
    // 0x4bd980: 0xc04cfcc  jal         func_133F30
label_4bd984:
    if (ctx->pc == 0x4BD984u) {
        ctx->pc = 0x4BD984u;
            // 0x4bd984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD988u;
        goto label_4bd988;
    }
    ctx->pc = 0x4BD980u;
    SET_GPR_U32(ctx, 31, 0x4BD988u);
    ctx->pc = 0x4BD984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD980u;
            // 0x4bd984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD988u; }
        if (ctx->pc != 0x4BD988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD988u; }
        if (ctx->pc != 0x4BD988u) { return; }
    }
    ctx->pc = 0x4BD988u;
label_4bd988:
    // 0x4bd988: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x4bd988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4bd98c:
    // 0x4bd98c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4bd98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bd990:
    // 0x4bd990: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4bd990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bd994:
    // 0x4bd994: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4bd994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4bd998:
    // 0x4bd998: 0xc054c2c  jal         func_1530B0
label_4bd99c:
    if (ctx->pc == 0x4BD99Cu) {
        ctx->pc = 0x4BD99Cu;
            // 0x4bd99c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD9A0u;
        goto label_4bd9a0;
    }
    ctx->pc = 0x4BD998u;
    SET_GPR_U32(ctx, 31, 0x4BD9A0u);
    ctx->pc = 0x4BD99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD998u;
            // 0x4bd99c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9A0u; }
        if (ctx->pc != 0x4BD9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9A0u; }
        if (ctx->pc != 0x4BD9A0u) { return; }
    }
    ctx->pc = 0x4BD9A0u;
label_4bd9a0:
    // 0x4bd9a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bd9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd9a4:
    // 0x4bd9a4: 0x26a600b0  addiu       $a2, $s5, 0xB0
    ctx->pc = 0x4bd9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_4bd9a8:
    // 0x4bd9a8: 0xc04cd60  jal         func_133580
label_4bd9ac:
    if (ctx->pc == 0x4BD9ACu) {
        ctx->pc = 0x4BD9ACu;
            // 0x4bd9ac: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4BD9B0u;
        goto label_4bd9b0;
    }
    ctx->pc = 0x4BD9A8u;
    SET_GPR_U32(ctx, 31, 0x4BD9B0u);
    ctx->pc = 0x4BD9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD9A8u;
            // 0x4bd9ac: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9B0u; }
        if (ctx->pc != 0x4BD9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9B0u; }
        if (ctx->pc != 0x4BD9B0u) { return; }
    }
    ctx->pc = 0x4BD9B0u;
label_4bd9b0:
    // 0x4bd9b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4bd9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4bd9b4:
    // 0x4bd9b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4bd9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bd9b8:
    // 0x4bd9b8: 0xc04cd60  jal         func_133580
label_4bd9bc:
    if (ctx->pc == 0x4BD9BCu) {
        ctx->pc = 0x4BD9BCu;
            // 0x4bd9bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD9C0u;
        goto label_4bd9c0;
    }
    ctx->pc = 0x4BD9B8u;
    SET_GPR_U32(ctx, 31, 0x4BD9C0u);
    ctx->pc = 0x4BD9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD9B8u;
            // 0x4bd9bc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9C0u; }
        if (ctx->pc != 0x4BD9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9C0u; }
        if (ctx->pc != 0x4BD9C0u) { return; }
    }
    ctx->pc = 0x4BD9C0u;
label_4bd9c0:
    // 0x4bd9c0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x4bd9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4bd9c4:
    // 0x4bd9c4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4bd9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4bd9c8:
    // 0x4bd9c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bd9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bd9cc:
    // 0x4bd9cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bd9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bd9d0:
    // 0x4bd9d0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x4bd9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4bd9d4:
    // 0x4bd9d4: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4bd9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4bd9d8:
    // 0x4bd9d8: 0xc04cfcc  jal         func_133F30
label_4bd9dc:
    if (ctx->pc == 0x4BD9DCu) {
        ctx->pc = 0x4BD9DCu;
            // 0x4bd9dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD9E0u;
        goto label_4bd9e0;
    }
    ctx->pc = 0x4BD9D8u;
    SET_GPR_U32(ctx, 31, 0x4BD9E0u);
    ctx->pc = 0x4BD9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD9D8u;
            // 0x4bd9dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9E0u; }
        if (ctx->pc != 0x4BD9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9E0u; }
        if (ctx->pc != 0x4BD9E0u) { return; }
    }
    ctx->pc = 0x4BD9E0u;
label_4bd9e0:
    // 0x4bd9e0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x4bd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4bd9e4:
    // 0x4bd9e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4bd9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bd9e8:
    // 0x4bd9e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4bd9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bd9ec:
    // 0x4bd9ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4bd9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4bd9f0:
    // 0x4bd9f0: 0xc054c2c  jal         func_1530B0
label_4bd9f4:
    if (ctx->pc == 0x4BD9F4u) {
        ctx->pc = 0x4BD9F4u;
            // 0x4bd9f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BD9F8u;
        goto label_4bd9f8;
    }
    ctx->pc = 0x4BD9F0u;
    SET_GPR_U32(ctx, 31, 0x4BD9F8u);
    ctx->pc = 0x4BD9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD9F0u;
            // 0x4bd9f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9F8u; }
        if (ctx->pc != 0x4BD9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD9F8u; }
        if (ctx->pc != 0x4BD9F8u) { return; }
    }
    ctx->pc = 0x4BD9F8u;
label_4bd9f8:
    // 0x4bd9f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4bd9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4bd9fc:
    // 0x4bd9fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bd9fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bda00:
    // 0x4bda00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bda00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bda04:
    // 0x4bda04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bda04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bda08:
    // 0x4bda08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bda08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bda0c:
    // 0x4bda0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bda0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bda10:
    // 0x4bda10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bda10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bda14:
    // 0x4bda14: 0x3e00008  jr          $ra
label_4bda18:
    if (ctx->pc == 0x4BDA18u) {
        ctx->pc = 0x4BDA18u;
            // 0x4bda18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4BDA1Cu;
        goto label_4bda1c;
    }
    ctx->pc = 0x4BDA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDA14u;
            // 0x4bda18: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BDA1Cu;
label_4bda1c:
    // 0x4bda1c: 0x0  nop
    ctx->pc = 0x4bda1cu;
    // NOP
label_4bda20:
    // 0x4bda20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4bda24:
    // 0x4bda24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bda24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bda28:
    // 0x4bda28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bda28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4bda2c:
    // 0x4bda2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bda2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bda30:
    // 0x4bda30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bda30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bda34:
    // 0x4bda34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4bda34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bda38:
    // 0x4bda38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bda38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bda3c:
    // 0x4bda3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4bda3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4bda40:
    // 0x4bda40: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x4bda40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4bda44:
    // 0x4bda44: 0x8c820cb4  lw          $v0, 0xCB4($a0)
    ctx->pc = 0x4bda44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_4bda48:
    // 0x4bda48: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x4bda48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_4bda4c:
    // 0x4bda4c: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_4bda50:
    if (ctx->pc == 0x4BDA50u) {
        ctx->pc = 0x4BDA50u;
            // 0x4bda50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BDA54u;
        goto label_4bda54;
    }
    ctx->pc = 0x4BDA4Cu;
    {
        const bool branch_taken_0x4bda4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDA4Cu;
            // 0x4bda50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bda4c) {
            ctx->pc = 0x4BDB08u;
            goto label_4bdb08;
        }
    }
    ctx->pc = 0x4BDA54u;
label_4bda54:
    // 0x4bda54: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x4bda54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_4bda58:
    // 0x4bda58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4bda58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4bda5c:
    // 0x4bda5c: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_4bda60:
    if (ctx->pc == 0x4BDA60u) {
        ctx->pc = 0x4BDA60u;
            // 0x4bda60: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4BDA64u;
        goto label_4bda64;
    }
    ctx->pc = 0x4BDA5Cu;
    {
        const bool branch_taken_0x4bda5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bda5c) {
            ctx->pc = 0x4BDA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDA5Cu;
            // 0x4bda60: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDB0Cu;
            goto label_4bdb0c;
        }
    }
    ctx->pc = 0x4BDA64u;
label_4bda64:
    // 0x4bda64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bda64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bda68:
    // 0x4bda68: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4bda68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4bda6c:
    // 0x4bda6c: 0x320f809  jalr        $t9
label_4bda70:
    if (ctx->pc == 0x4BDA70u) {
        ctx->pc = 0x4BDA74u;
        goto label_4bda74;
    }
    ctx->pc = 0x4BDA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BDA74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BDA74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BDA74u; }
            if (ctx->pc != 0x4BDA74u) { return; }
        }
        }
    }
    ctx->pc = 0x4BDA74u;
label_4bda74:
    // 0x4bda74: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_4bda78:
    if (ctx->pc == 0x4BDA78u) {
        ctx->pc = 0x4BDA7Cu;
        goto label_4bda7c;
    }
    ctx->pc = 0x4BDA74u;
    {
        const bool branch_taken_0x4bda74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bda74) {
            ctx->pc = 0x4BDB08u;
            goto label_4bdb08;
        }
    }
    ctx->pc = 0x4BDA7Cu;
label_4bda7c:
    // 0x4bda7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bda7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bda80:
    // 0x4bda80: 0xc077fb0  jal         func_1DFEC0
label_4bda84:
    if (ctx->pc == 0x4BDA84u) {
        ctx->pc = 0x4BDA84u;
            // 0x4bda84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4BDA88u;
        goto label_4bda88;
    }
    ctx->pc = 0x4BDA80u;
    SET_GPR_U32(ctx, 31, 0x4BDA88u);
    ctx->pc = 0x4BDA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDA80u;
            // 0x4bda84: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDA88u; }
        if (ctx->pc != 0x4BDA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDA88u; }
        if (ctx->pc != 0x4BDA88u) { return; }
    }
    ctx->pc = 0x4BDA88u;
label_4bda88:
    // 0x4bda88: 0xc64100fc  lwc1        $f1, 0xFC($s2)
    ctx->pc = 0x4bda88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bda8c:
    // 0x4bda8c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4bda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4bda90:
    // 0x4bda90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bda90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bda94:
    // 0x4bda94: 0x0  nop
    ctx->pc = 0x4bda94u;
    // NOP
label_4bda98:
    // 0x4bda98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bda98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bda9c:
    // 0x4bda9c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4bdaa0:
    if (ctx->pc == 0x4BDAA0u) {
        ctx->pc = 0x4BDAA0u;
            // 0x4bdaa0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4BDAA4u;
        goto label_4bdaa4;
    }
    ctx->pc = 0x4BDA9Cu;
    {
        const bool branch_taken_0x4bda9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bda9c) {
            ctx->pc = 0x4BDAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDA9Cu;
            // 0x4bdaa0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDAB4u;
            goto label_4bdab4;
        }
    }
    ctx->pc = 0x4BDAA4u;
label_4bdaa4:
    // 0x4bdaa4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdaa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4bdaa8:
    // 0x4bdaa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4bdaa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4bdaac:
    // 0x4bdaac: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bdab0:
    if (ctx->pc == 0x4BDAB0u) {
        ctx->pc = 0x4BDAB0u;
            // 0x4bdab0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x4BDAB4u;
        goto label_4bdab4;
    }
    ctx->pc = 0x4BDAACu;
    {
        const bool branch_taken_0x4bdaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDAACu;
            // 0x4bdab0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdaac) {
            ctx->pc = 0x4BDACCu;
            goto label_4bdacc;
        }
    }
    ctx->pc = 0x4BDAB4u;
label_4bdab4:
    // 0x4bdab4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4bdab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4bdab8:
    // 0x4bdab8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4bdabc:
    // 0x4bdabc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4bdabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4bdac0:
    // 0x4bdac0: 0x0  nop
    ctx->pc = 0x4bdac0u;
    // NOP
label_4bdac4:
    // 0x4bdac4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4bdac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4bdac8:
    // 0x4bdac8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4bdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bdacc:
    // 0x4bdacc: 0x8e4600f8  lw          $a2, 0xF8($s2)
    ctx->pc = 0x4bdaccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_4bdad0:
    // 0x4bdad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bdad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bdad4:
    // 0x4bdad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bdad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bdad8:
    // 0x4bdad8: 0x8e4300f4  lw          $v1, 0xF4($s2)
    ctx->pc = 0x4bdad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_4bdadc:
    // 0x4bdadc: 0x23840  sll         $a3, $v0, 1
    ctx->pc = 0x4bdadcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4bdae0:
    // 0x4bdae0: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x4bdae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4bdae4:
    // 0x4bdae4: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x4bdae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_4bdae8:
    // 0x4bdae8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4bdae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4bdaec:
    // 0x4bdaec: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x4bdaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4bdaf0:
    // 0x4bdaf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bdaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bdaf4:
    // 0x4bdaf4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4bdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4bdaf8:
    // 0x4bdaf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4bdaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4bdafc:
    // 0x4bdafc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x4bdafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4bdb00:
    // 0x4bdb00: 0xc0d7cb8  jal         func_35F2E0
label_4bdb04:
    if (ctx->pc == 0x4BDB04u) {
        ctx->pc = 0x4BDB04u;
            // 0x4bdb04: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BDB08u;
        goto label_4bdb08;
    }
    ctx->pc = 0x4BDB00u;
    SET_GPR_U32(ctx, 31, 0x4BDB08u);
    ctx->pc = 0x4BDB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDB00u;
            // 0x4bdb04: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35F2E0u;
    if (runtime->hasFunction(0x35F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x35F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDB08u; }
        if (ctx->pc != 0x4BDB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035F2E0_0x35f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDB08u; }
        if (ctx->pc != 0x4BDB08u) { return; }
    }
    ctx->pc = 0x4BDB08u;
label_4bdb08:
    // 0x4bdb08: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4bdb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4bdb0c:
    // 0x4bdb0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4bdb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bdb10:
    // 0x4bdb10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bdb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bdb14:
    // 0x4bdb14: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4bdb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4bdb18:
    // 0x4bdb18: 0x320f809  jalr        $t9
label_4bdb1c:
    if (ctx->pc == 0x4BDB1Cu) {
        ctx->pc = 0x4BDB1Cu;
            // 0x4bdb1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BDB20u;
        goto label_4bdb20;
    }
    ctx->pc = 0x4BDB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BDB20u);
        ctx->pc = 0x4BDB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDB18u;
            // 0x4bdb1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BDB20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BDB20u; }
            if (ctx->pc != 0x4BDB20u) { return; }
        }
        }
    }
    ctx->pc = 0x4BDB20u;
label_4bdb20:
    // 0x4bdb20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bdb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4bdb24:
    // 0x4bdb24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bdb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bdb28:
    // 0x4bdb28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bdb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bdb2c:
    // 0x4bdb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bdb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bdb30:
    // 0x4bdb30: 0x3e00008  jr          $ra
label_4bdb34:
    if (ctx->pc == 0x4BDB34u) {
        ctx->pc = 0x4BDB34u;
            // 0x4bdb34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4BDB38u;
        goto label_4bdb38;
    }
    ctx->pc = 0x4BDB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDB30u;
            // 0x4bdb34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BDB38u;
label_4bdb38:
    // 0x4bdb38: 0x0  nop
    ctx->pc = 0x4bdb38u;
    // NOP
label_4bdb3c:
    // 0x4bdb3c: 0x0  nop
    ctx->pc = 0x4bdb3cu;
    // NOP
label_4bdb40:
    // 0x4bdb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bdb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bdb44:
    // 0x4bdb44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4bdb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4bdb48:
    // 0x4bdb48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bdb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bdb4c:
    // 0x4bdb4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bdb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bdb50:
    // 0x4bdb50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bdb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bdb54:
    // 0x4bdb54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bdb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bdb58:
    // 0x4bdb58: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x4bdb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4bdb5c:
    // 0x4bdb5c: 0x8ca40cb4  lw          $a0, 0xCB4($a1)
    ctx->pc = 0x4bdb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
label_4bdb60:
    // 0x4bdb60: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4bdb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4bdb64:
    // 0x4bdb64: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
label_4bdb68:
    if (ctx->pc == 0x4BDB68u) {
        ctx->pc = 0x4BDB68u;
            // 0x4bdb68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BDB6Cu;
        goto label_4bdb6c;
    }
    ctx->pc = 0x4BDB64u;
    {
        const bool branch_taken_0x4bdb64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4BDB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDB64u;
            // 0x4bdb68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdb64) {
            ctx->pc = 0x4BDC54u;
            goto label_4bdc54;
        }
    }
    ctx->pc = 0x4BDB6Cu;
label_4bdb6c:
    // 0x4bdb6c: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x4bdb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4bdb70:
    // 0x4bdb70: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x4bdb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_4bdb74:
    // 0x4bdb74: 0x50830047  beql        $a0, $v1, . + 4 + (0x47 << 2)
label_4bdb78:
    if (ctx->pc == 0x4BDB78u) {
        ctx->pc = 0x4BDB78u;
            // 0x4bdb78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4BDB7Cu;
        goto label_4bdb7c;
    }
    ctx->pc = 0x4BDB74u;
    {
        const bool branch_taken_0x4bdb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bdb74) {
            ctx->pc = 0x4BDB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDB74u;
            // 0x4bdb78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDC94u;
            goto label_4bdc94;
        }
    }
    ctx->pc = 0x4BDB7Cu;
label_4bdb7c:
    // 0x4bdb7c: 0xc4a10820  lwc1        $f1, 0x820($a1)
    ctx->pc = 0x4bdb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bdb80:
    // 0x4bdb80: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x4bdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_4bdb84:
    // 0x4bdb84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bdb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bdb88:
    // 0x4bdb88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bdb8c:
    // 0x4bdb8c: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x4bdb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4bdb90:
    // 0x4bdb90: 0xc4a2081c  lwc1        $f2, 0x81C($a1)
    ctx->pc = 0x4bdb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bdb94:
    // 0x4bdb94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4bdb94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4bdb98:
    // 0x4bdb98: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x4bdb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_4bdb9c:
    // 0x4bdb9c: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x4bdb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_4bdba0:
    // 0x4bdba0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4bdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4bdba4:
    // 0x4bdba4: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x4bdba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
label_4bdba8:
    // 0x4bdba8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4bdba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4bdbac:
    // 0x4bdbac: 0x46001200  add.s       $f8, $f2, $f0
    ctx->pc = 0x4bdbacu;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4bdbb0:
    // 0x4bdbb0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4bdbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4bdbb4:
    // 0x4bdbb4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4bdbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4bdbb8:
    // 0x4bdbb8: 0xc4c50018  lwc1        $f5, 0x18($a2)
    ctx->pc = 0x4bdbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4bdbbc:
    // 0x4bdbbc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x4bdbbcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4bdbc0:
    // 0x4bdbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bdbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bdbc4:
    // 0x4bdbc4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4bdbc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4bdbc8:
    // 0x4bdbc8: 0x0  nop
    ctx->pc = 0x4bdbc8u;
    // NOP
label_4bdbcc:
    // 0x4bdbcc: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x4bdbccu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[5];
label_4bdbd0:
    // 0x4bdbd0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x4bdbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_4bdbd4:
    // 0x4bdbd4: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x4bdbd4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
label_4bdbd8:
    // 0x4bdbd8: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x4bdbd8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[5];
label_4bdbdc:
    // 0x4bdbdc: 0xc4c70014  lwc1        $f7, 0x14($a2)
    ctx->pc = 0x4bdbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4bdbe0:
    // 0x4bdbe0: 0x46043018  adda.s      $f6, $f4
    ctx->pc = 0x4bdbe0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_4bdbe4:
    // 0x4bdbe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4bdbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4bdbe8:
    // 0x4bdbe8: 0x4608391c  madd.s      $f4, $f7, $f8
    ctx->pc = 0x4bdbe8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[8]));
label_4bdbec:
    // 0x4bdbec: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdbecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_4bdbf0:
    // 0x4bdbf0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4bdbf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4bdbf4:
    // 0x4bdbf4: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x4bdbf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_4bdbf8:
    // 0x4bdbf8: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x4bdbf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_4bdbfc:
    // 0x4bdbfc: 0x4604081c  madd.s      $f0, $f1, $f4
    ctx->pc = 0x4bdbfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_4bdc00:
    // 0x4bdc00: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdc00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4bdc04:
    // 0x4bdc04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdc04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4bdc08:
    // 0x4bdc08: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdc08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_4bdc0c:
    // 0x4bdc0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4bdc0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4bdc10:
    // 0x4bdc10: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4bdc10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4bdc14:
    // 0x4bdc14: 0x0  nop
    ctx->pc = 0x4bdc14u;
    // NOP
label_4bdc18:
    // 0x4bdc18: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x4bdc18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4bdc1c:
    // 0x4bdc1c: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x4bdc1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4bdc20:
    // 0x4bdc20: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4bdc24:
    if (ctx->pc == 0x4BDC24u) {
        ctx->pc = 0x4BDC24u;
            // 0x4bdc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BDC28u;
        goto label_4bdc28;
    }
    ctx->pc = 0x4BDC20u;
    {
        const bool branch_taken_0x4bdc20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdc20) {
            ctx->pc = 0x4BDC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDC20u;
            // 0x4bdc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDC30u;
            goto label_4bdc30;
        }
    }
    ctx->pc = 0x4BDC28u;
label_4bdc28:
    // 0x4bdc28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4bdc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bdc2c:
    // 0x4bdc2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bdc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bdc30:
    // 0x4bdc30: 0xc07631c  jal         func_1D8C70
label_4bdc34:
    if (ctx->pc == 0x4BDC34u) {
        ctx->pc = 0x4BDC38u;
        goto label_4bdc38;
    }
    ctx->pc = 0x4BDC30u;
    SET_GPR_U32(ctx, 31, 0x4BDC38u);
    ctx->pc = 0x1D8C70u;
    if (runtime->hasFunction(0x1D8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC38u; }
        if (ctx->pc != 0x4BDC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C70_0x1d8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC38u; }
        if (ctx->pc != 0x4BDC38u) { return; }
    }
    ctx->pc = 0x4BDC38u;
label_4bdc38:
    // 0x4bdc38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bdc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bdc3c:
    // 0x4bdc3c: 0xc077fb0  jal         func_1DFEC0
label_4bdc40:
    if (ctx->pc == 0x4BDC40u) {
        ctx->pc = 0x4BDC40u;
            // 0x4bdc40: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4BDC44u;
        goto label_4bdc44;
    }
    ctx->pc = 0x4BDC3Cu;
    SET_GPR_U32(ctx, 31, 0x4BDC44u);
    ctx->pc = 0x4BDC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDC3Cu;
            // 0x4bdc40: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC44u; }
        if (ctx->pc != 0x4BDC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC44u; }
        if (ctx->pc != 0x4BDC44u) { return; }
    }
    ctx->pc = 0x4BDC44u;
label_4bdc44:
    // 0x4bdc44: 0xc10c9d8  jal         func_432760
label_4bdc48:
    if (ctx->pc == 0x4BDC48u) {
        ctx->pc = 0x4BDC48u;
            // 0x4bdc48: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->pc = 0x4BDC4Cu;
        goto label_4bdc4c;
    }
    ctx->pc = 0x4BDC44u;
    SET_GPR_U32(ctx, 31, 0x4BDC4Cu);
    ctx->pc = 0x4BDC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDC44u;
            // 0x4bdc48: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC4Cu; }
        if (ctx->pc != 0x4BDC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC4Cu; }
        if (ctx->pc != 0x4BDC4Cu) { return; }
    }
    ctx->pc = 0x4BDC4Cu;
label_4bdc4c:
    // 0x4bdc4c: 0x10000010  b           . + 4 + (0x10 << 2)
label_4bdc50:
    if (ctx->pc == 0x4BDC50u) {
        ctx->pc = 0x4BDC54u;
        goto label_4bdc54;
    }
    ctx->pc = 0x4BDC4Cu;
    {
        const bool branch_taken_0x4bdc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdc4c) {
            ctx->pc = 0x4BDC90u;
            goto label_4bdc90;
        }
    }
    ctx->pc = 0x4BDC54u;
label_4bdc54:
    // 0x4bdc54: 0x28810007  slti        $at, $a0, 0x7
    ctx->pc = 0x4bdc54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_4bdc58:
    // 0x4bdc58: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_4bdc5c:
    if (ctx->pc == 0x4BDC5Cu) {
        ctx->pc = 0x4BDC60u;
        goto label_4bdc60;
    }
    ctx->pc = 0x4BDC58u;
    {
        const bool branch_taken_0x4bdc58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bdc58) {
            ctx->pc = 0x4BDC90u;
            goto label_4bdc90;
        }
    }
    ctx->pc = 0x4BDC60u;
label_4bdc60:
    // 0x4bdc60: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x4bdc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4bdc64:
    // 0x4bdc64: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x4bdc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_4bdc68:
    // 0x4bdc68: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_4bdc6c:
    if (ctx->pc == 0x4BDC6Cu) {
        ctx->pc = 0x4BDC70u;
        goto label_4bdc70;
    }
    ctx->pc = 0x4BDC68u;
    {
        const bool branch_taken_0x4bdc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bdc68) {
            ctx->pc = 0x4BDC90u;
            goto label_4bdc90;
        }
    }
    ctx->pc = 0x4BDC70u;
label_4bdc70:
    // 0x4bdc70: 0x8e020db4  lw          $v0, 0xDB4($s0)
    ctx->pc = 0x4bdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_4bdc74:
    // 0x4bdc74: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_4bdc78:
    if (ctx->pc == 0x4BDC78u) {
        ctx->pc = 0x4BDC78u;
            // 0x4bdc78: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->pc = 0x4BDC7Cu;
        goto label_4bdc7c;
    }
    ctx->pc = 0x4BDC74u;
    {
        const bool branch_taken_0x4bdc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bdc74) {
            ctx->pc = 0x4BDC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDC74u;
            // 0x4bdc78: 0x8e240114  lw          $a0, 0x114($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDC88u;
            goto label_4bdc88;
        }
    }
    ctx->pc = 0x4BDC7Cu;
label_4bdc7c:
    // 0x4bdc7c: 0xc0ca7b0  jal         func_329EC0
label_4bdc80:
    if (ctx->pc == 0x4BDC80u) {
        ctx->pc = 0x4BDC80u;
            // 0x4bdc80: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->pc = 0x4BDC84u;
        goto label_4bdc84;
    }
    ctx->pc = 0x4BDC7Cu;
    SET_GPR_U32(ctx, 31, 0x4BDC84u);
    ctx->pc = 0x4BDC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDC7Cu;
            // 0x4bdc80: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329EC0u;
    if (runtime->hasFunction(0x329EC0u)) {
        auto targetFn = runtime->lookupFunction(0x329EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC84u; }
        if (ctx->pc != 0x4BDC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329EC0_0x329ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC84u; }
        if (ctx->pc != 0x4BDC84u) { return; }
    }
    ctx->pc = 0x4BDC84u;
label_4bdc84:
    // 0x4bdc84: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x4bdc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_4bdc88:
    // 0x4bdc88: 0xc10c9b4  jal         func_4326D0
label_4bdc8c:
    if (ctx->pc == 0x4BDC8Cu) {
        ctx->pc = 0x4BDC90u;
        goto label_4bdc90;
    }
    ctx->pc = 0x4BDC88u;
    SET_GPR_U32(ctx, 31, 0x4BDC90u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC90u; }
        if (ctx->pc != 0x4BDC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDC90u; }
        if (ctx->pc != 0x4BDC90u) { return; }
    }
    ctx->pc = 0x4BDC90u;
label_4bdc90:
    // 0x4bdc90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bdc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bdc94:
    // 0x4bdc94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bdc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bdc98:
    // 0x4bdc98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bdc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bdc9c:
    // 0x4bdc9c: 0x3e00008  jr          $ra
label_4bdca0:
    if (ctx->pc == 0x4BDCA0u) {
        ctx->pc = 0x4BDCA0u;
            // 0x4bdca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BDCA4u;
        goto label_4bdca4;
    }
    ctx->pc = 0x4BDC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDC9Cu;
            // 0x4bdca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BDCA4u;
label_4bdca4:
    // 0x4bdca4: 0x0  nop
    ctx->pc = 0x4bdca4u;
    // NOP
label_4bdca8:
    // 0x4bdca8: 0x0  nop
    ctx->pc = 0x4bdca8u;
    // NOP
label_4bdcac:
    // 0x4bdcac: 0x0  nop
    ctx->pc = 0x4bdcacu;
    // NOP
label_4bdcb0:
    // 0x4bdcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bdcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4bdcb4:
    // 0x4bdcb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bdcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4bdcb8:
    // 0x4bdcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bdcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bdcbc:
    // 0x4bdcbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bdcbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bdcc0:
    // 0x4bdcc0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4bdcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4bdcc4:
    // 0x4bdcc4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_4bdcc8:
    if (ctx->pc == 0x4BDCC8u) {
        ctx->pc = 0x4BDCC8u;
            // 0x4bdcc8: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->pc = 0x4BDCCCu;
        goto label_4bdccc;
    }
    ctx->pc = 0x4BDCC4u;
    {
        const bool branch_taken_0x4bdcc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdcc4) {
            ctx->pc = 0x4BDCC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDCC4u;
            // 0x4bdcc8: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDCECu;
            goto label_4bdcec;
        }
    }
    ctx->pc = 0x4BDCCCu;
label_4bdccc:
    // 0x4bdccc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bdcd0:
    if (ctx->pc == 0x4BDCD0u) {
        ctx->pc = 0x4BDCD0u;
            // 0x4bdcd0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4BDCD4u;
        goto label_4bdcd4;
    }
    ctx->pc = 0x4BDCCCu;
    {
        const bool branch_taken_0x4bdccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdccc) {
            ctx->pc = 0x4BDCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDCCCu;
            // 0x4bdcd0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDCE8u;
            goto label_4bdce8;
        }
    }
    ctx->pc = 0x4BDCD4u;
label_4bdcd4:
    // 0x4bdcd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bdcd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bdcd8:
    // 0x4bdcd8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bdcd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bdcdc:
    // 0x4bdcdc: 0x320f809  jalr        $t9
label_4bdce0:
    if (ctx->pc == 0x4BDCE0u) {
        ctx->pc = 0x4BDCE0u;
            // 0x4bdce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BDCE4u;
        goto label_4bdce4;
    }
    ctx->pc = 0x4BDCDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BDCE4u);
        ctx->pc = 0x4BDCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDCDCu;
            // 0x4bdce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BDCE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BDCE4u; }
            if (ctx->pc != 0x4BDCE4u) { return; }
        }
        }
    }
    ctx->pc = 0x4BDCE4u;
label_4bdce4:
    // 0x4bdce4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4bdce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4bdce8:
    // 0x4bdce8: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x4bdce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_4bdcec:
    // 0x4bdcec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bdcf0:
    if (ctx->pc == 0x4BDCF0u) {
        ctx->pc = 0x4BDCF0u;
            // 0x4bdcf0: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->pc = 0x4BDCF4u;
        goto label_4bdcf4;
    }
    ctx->pc = 0x4BDCECu;
    {
        const bool branch_taken_0x4bdcec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdcec) {
            ctx->pc = 0x4BDCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDCECu;
            // 0x4bdcf0: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDD08u;
            goto label_4bdd08;
        }
    }
    ctx->pc = 0x4BDCF4u;
label_4bdcf4:
    // 0x4bdcf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bdcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bdcf8:
    // 0x4bdcf8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bdcf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bdcfc:
    // 0x4bdcfc: 0x320f809  jalr        $t9
label_4bdd00:
    if (ctx->pc == 0x4BDD00u) {
        ctx->pc = 0x4BDD00u;
            // 0x4bdd00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BDD04u;
        goto label_4bdd04;
    }
    ctx->pc = 0x4BDCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BDD04u);
        ctx->pc = 0x4BDD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDCFCu;
            // 0x4bdd00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BDD04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BDD04u; }
            if (ctx->pc != 0x4BDD04u) { return; }
        }
        }
    }
    ctx->pc = 0x4BDD04u;
label_4bdd04:
    // 0x4bdd04: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x4bdd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_4bdd08:
    // 0x4bdd08: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4bdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4bdd0c:
    // 0x4bdd0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4bdd10:
    if (ctx->pc == 0x4BDD10u) {
        ctx->pc = 0x4BDD10u;
            // 0x4bdd10: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x4BDD14u;
        goto label_4bdd14;
    }
    ctx->pc = 0x4BDD0Cu;
    {
        const bool branch_taken_0x4bdd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdd0c) {
            ctx->pc = 0x4BDD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDD0Cu;
            // 0x4bdd10: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDD28u;
            goto label_4bdd28;
        }
    }
    ctx->pc = 0x4BDD14u;
label_4bdd14:
    // 0x4bdd14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bdd14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bdd18:
    // 0x4bdd18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4bdd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4bdd1c:
    // 0x4bdd1c: 0x320f809  jalr        $t9
label_4bdd20:
    if (ctx->pc == 0x4BDD20u) {
        ctx->pc = 0x4BDD20u;
            // 0x4bdd20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BDD24u;
        goto label_4bdd24;
    }
    ctx->pc = 0x4BDD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BDD24u);
        ctx->pc = 0x4BDD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDD1Cu;
            // 0x4bdd20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BDD24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BDD24u; }
            if (ctx->pc != 0x4BDD24u) { return; }
        }
        }
    }
    ctx->pc = 0x4BDD24u;
label_4bdd24:
    // 0x4bdd24: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4bdd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4bdd28:
    // 0x4bdd28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bdd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4bdd2c:
    // 0x4bdd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bdd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bdd30:
    // 0x4bdd30: 0x3e00008  jr          $ra
label_4bdd34:
    if (ctx->pc == 0x4BDD34u) {
        ctx->pc = 0x4BDD34u;
            // 0x4bdd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4BDD38u;
        goto label_4bdd38;
    }
    ctx->pc = 0x4BDD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDD30u;
            // 0x4bdd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BDD38u;
label_4bdd38:
    // 0x4bdd38: 0x0  nop
    ctx->pc = 0x4bdd38u;
    // NOP
label_4bdd3c:
    // 0x4bdd3c: 0x0  nop
    ctx->pc = 0x4bdd3cu;
    // NOP
label_4bdd40:
    // 0x4bdd40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4bdd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4bdd44:
    // 0x4bdd44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bdd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bdd48:
    // 0x4bdd48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bdd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4bdd4c:
    // 0x4bdd4c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4bdd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4bdd50:
    // 0x4bdd50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bdd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bdd54:
    // 0x4bdd54: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4bdd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4bdd58:
    // 0x4bdd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bdd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bdd5c:
    // 0x4bdd5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4bdd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bdd60:
    // 0x4bdd60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bdd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bdd64:
    // 0x4bdd64: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x4bdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bdd68:
    // 0x4bdd68: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x4bdd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_4bdd6c:
    // 0x4bdd6c: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x4bdd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bdd70:
    // 0x4bdd70: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x4bdd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bdd74:
    // 0x4bdd74: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4bdd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4bdd78:
    // 0x4bdd78: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4bdd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4bdd7c:
    // 0x4bdd7c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x4bdd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_4bdd80:
    // 0x4bdd80: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x4bdd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_4bdd84:
    // 0x4bdd84: 0xc0a7a88  jal         func_29EA20
label_4bdd88:
    if (ctx->pc == 0x4BDD88u) {
        ctx->pc = 0x4BDD88u;
            // 0x4bdd88: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x4BDD8Cu;
        goto label_4bdd8c;
    }
    ctx->pc = 0x4BDD84u;
    SET_GPR_U32(ctx, 31, 0x4BDD8Cu);
    ctx->pc = 0x4BDD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDD84u;
            // 0x4bdd88: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDD8Cu; }
        if (ctx->pc != 0x4BDD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDD8Cu; }
        if (ctx->pc != 0x4BDD8Cu) { return; }
    }
    ctx->pc = 0x4BDD8Cu;
label_4bdd8c:
    // 0x4bdd8c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4bdd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4bdd90:
    // 0x4bdd90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bdd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bdd94:
    // 0x4bdd94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4bdd98:
    if (ctx->pc == 0x4BDD98u) {
        ctx->pc = 0x4BDD98u;
            // 0x4bdd98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4BDD9Cu;
        goto label_4bdd9c;
    }
    ctx->pc = 0x4BDD94u;
    {
        const bool branch_taken_0x4bdd94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDD94u;
            // 0x4bdd98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdd94) {
            ctx->pc = 0x4BDDB0u;
            goto label_4bddb0;
        }
    }
    ctx->pc = 0x4BDD9Cu;
label_4bdd9c:
    // 0x4bdd9c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4bdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4bdda0:
    // 0x4bdda0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4bdda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bdda4:
    // 0x4bdda4: 0xc0804bc  jal         func_2012F0
label_4bdda8:
    if (ctx->pc == 0x4BDDA8u) {
        ctx->pc = 0x4BDDA8u;
            // 0x4bdda8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4BDDACu;
        goto label_4bddac;
    }
    ctx->pc = 0x4BDDA4u;
    SET_GPR_U32(ctx, 31, 0x4BDDACu);
    ctx->pc = 0x4BDDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDDA4u;
            // 0x4bdda8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDDACu; }
        if (ctx->pc != 0x4BDDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDDACu; }
        if (ctx->pc != 0x4BDDACu) { return; }
    }
    ctx->pc = 0x4BDDACu;
label_4bddac:
    // 0x4bddac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bddb0:
    // 0x4bddb0: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x4bddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_4bddb4:
    // 0x4bddb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bddb8:
    // 0x4bddb8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4bddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4bddbc:
    // 0x4bddbc: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x4bddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4bddc0:
    // 0x4bddc0: 0xc0a7a88  jal         func_29EA20
label_4bddc4:
    if (ctx->pc == 0x4BDDC4u) {
        ctx->pc = 0x4BDDC4u;
            // 0x4bddc4: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4BDDC8u;
        goto label_4bddc8;
    }
    ctx->pc = 0x4BDDC0u;
    SET_GPR_U32(ctx, 31, 0x4BDDC8u);
    ctx->pc = 0x4BDDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDDC0u;
            // 0x4bddc4: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDDC8u; }
        if (ctx->pc != 0x4BDDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDDC8u; }
        if (ctx->pc != 0x4BDDC8u) { return; }
    }
    ctx->pc = 0x4BDDC8u;
label_4bddc8:
    // 0x4bddc8: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x4bddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_4bddcc:
    // 0x4bddcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bddccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bddd0:
    // 0x4bddd0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4bddd4:
    if (ctx->pc == 0x4BDDD4u) {
        ctx->pc = 0x4BDDD4u;
            // 0x4bddd4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4BDDD8u;
        goto label_4bddd8;
    }
    ctx->pc = 0x4BDDD0u;
    {
        const bool branch_taken_0x4bddd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDDD0u;
            // 0x4bddd4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bddd0) {
            ctx->pc = 0x4BDE04u;
            goto label_4bde04;
        }
    }
    ctx->pc = 0x4BDDD8u;
label_4bddd8:
    // 0x4bddd8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x4bddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_4bdddc:
    // 0x4bdddc: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x4bdddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_4bdde0:
    // 0x4bdde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bdde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bdde4:
    // 0x4bdde4: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x4bdde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_4bdde8:
    // 0x4bdde8: 0xc08afe0  jal         func_22BF80
label_4bddec:
    if (ctx->pc == 0x4BDDECu) {
        ctx->pc = 0x4BDDECu;
            // 0x4bddec: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4BDDF0u;
        goto label_4bddf0;
    }
    ctx->pc = 0x4BDDE8u;
    SET_GPR_U32(ctx, 31, 0x4BDDF0u);
    ctx->pc = 0x4BDDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDDE8u;
            // 0x4bddec: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDDF0u; }
        if (ctx->pc != 0x4BDDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDDF0u; }
        if (ctx->pc != 0x4BDDF0u) { return; }
    }
    ctx->pc = 0x4BDDF0u;
label_4bddf0:
    // 0x4bddf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bddf4:
    // 0x4bddf4: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x4bddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_4bddf8:
    // 0x4bddf8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4bddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4bddfc:
    // 0x4bddfc: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x4bddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_4bde00:
    // 0x4bde00: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4bde00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4bde04:
    // 0x4bde04: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4bde04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4bde08:
    // 0x4bde08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bde0c:
    // 0x4bde0c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bde10:
    // 0x4bde10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bde10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bde14:
    // 0x4bde14: 0xc08c798  jal         func_231E60
label_4bde18:
    if (ctx->pc == 0x4BDE18u) {
        ctx->pc = 0x4BDE18u;
            // 0x4bde18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BDE1Cu;
        goto label_4bde1c;
    }
    ctx->pc = 0x4BDE14u;
    SET_GPR_U32(ctx, 31, 0x4BDE1Cu);
    ctx->pc = 0x4BDE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDE14u;
            // 0x4bde18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDE1Cu; }
        if (ctx->pc != 0x4BDE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDE1Cu; }
        if (ctx->pc != 0x4BDE1Cu) { return; }
    }
    ctx->pc = 0x4BDE1Cu;
label_4bde1c:
    // 0x4bde1c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4bde1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4bde20:
    // 0x4bde20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4bde20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4bde24:
    // 0x4bde24: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4bde24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bde28:
    // 0x4bde28: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x4bde28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4bde2c:
    // 0x4bde2c: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4bde2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bde30:
    // 0x4bde30: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4bde30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bde34:
    // 0x4bde34: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4bde34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4bde38:
    // 0x4bde38: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x4bde38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4bde3c:
    // 0x4bde3c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x4bde3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4bde40:
    // 0x4bde40: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x4bde40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_4bde44:
    // 0x4bde44: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4bde44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bde48:
    // 0x4bde48: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4bde48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bde4c:
    // 0x4bde4c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4bde4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bde50:
    // 0x4bde50: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4bde50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4bde54:
    // 0x4bde54: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4bde54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4bde58:
    // 0x4bde58: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x4bde58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4bde5c:
    // 0x4bde5c: 0xc0a3830  jal         func_28E0C0
label_4bde60:
    if (ctx->pc == 0x4BDE60u) {
        ctx->pc = 0x4BDE60u;
            // 0x4bde60: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x4BDE64u;
        goto label_4bde64;
    }
    ctx->pc = 0x4BDE5Cu;
    SET_GPR_U32(ctx, 31, 0x4BDE64u);
    ctx->pc = 0x4BDE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDE5Cu;
            // 0x4bde60: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDE64u; }
        if (ctx->pc != 0x4BDE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDE64u; }
        if (ctx->pc != 0x4BDE64u) { return; }
    }
    ctx->pc = 0x4BDE64u;
label_4bde64:
    // 0x4bde64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bde64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bde68:
    // 0x4bde68: 0xc08af10  jal         func_22BC40
label_4bde6c:
    if (ctx->pc == 0x4BDE6Cu) {
        ctx->pc = 0x4BDE6Cu;
            // 0x4bde6c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4BDE70u;
        goto label_4bde70;
    }
    ctx->pc = 0x4BDE68u;
    SET_GPR_U32(ctx, 31, 0x4BDE70u);
    ctx->pc = 0x4BDE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDE68u;
            // 0x4bde6c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDE70u; }
        if (ctx->pc != 0x4BDE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDE70u; }
        if (ctx->pc != 0x4BDE70u) { return; }
    }
    ctx->pc = 0x4BDE70u;
label_4bde70:
    // 0x4bde70: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x4bde70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4bde74:
    // 0x4bde74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4bde78:
    if (ctx->pc == 0x4BDE78u) {
        ctx->pc = 0x4BDE78u;
            // 0x4bde78: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4BDE7Cu;
        goto label_4bde7c;
    }
    ctx->pc = 0x4BDE74u;
    {
        const bool branch_taken_0x4bde74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDE74u;
            // 0x4bde78: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bde74) {
            ctx->pc = 0x4BDE98u;
            goto label_4bde98;
        }
    }
    ctx->pc = 0x4BDE7Cu;
label_4bde7c:
    // 0x4bde7c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4bde7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_4bde80:
    // 0x4bde80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4bde80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4bde84:
    // 0x4bde84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4bde84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4bde88:
    // 0x4bde88: 0x0  nop
    ctx->pc = 0x4bde88u;
    // NOP
label_4bde8c:
    // 0x4bde8c: 0x0  nop
    ctx->pc = 0x4bde8cu;
    // NOP
label_4bde90:
    // 0x4bde90: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4bde94:
    if (ctx->pc == 0x4BDE94u) {
        ctx->pc = 0x4BDE98u;
        goto label_4bde98;
    }
    ctx->pc = 0x4BDE90u;
    {
        const bool branch_taken_0x4bde90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bde90) {
            ctx->pc = 0x4BDE7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bde7c;
        }
    }
    ctx->pc = 0x4BDE98u;
label_4bde98:
    // 0x4bde98: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x4bde98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bde9c:
    // 0x4bde9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4bde9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4bdea0:
    // 0x4bdea0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4bdea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4bdea4:
    // 0x4bdea4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4bdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4bdea8:
    // 0x4bdea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4bdeac:
    // 0x4bdeac: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x4bdeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_4bdeb0:
    // 0x4bdeb0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4bdeb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4bdeb4:
    // 0x4bdeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4bdeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bdeb8:
    // 0x4bdeb8: 0x0  nop
    ctx->pc = 0x4bdeb8u;
    // NOP
label_4bdebc:
    // 0x4bdebc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4bdebcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4bdec0:
    // 0x4bdec0: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x4bdec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_4bdec4:
    // 0x4bdec4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x4bdec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bdec8:
    // 0x4bdec8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4bdec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4bdecc:
    // 0x4bdecc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x4bdeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4bded0:
    // 0x4bded0: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x4bded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bded4:
    // 0x4bded4: 0xc04f3f4  jal         func_13CFD0
label_4bded8:
    if (ctx->pc == 0x4BDED8u) {
        ctx->pc = 0x4BDED8u;
            // 0x4bded8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4BDEDCu;
        goto label_4bdedc;
    }
    ctx->pc = 0x4BDED4u;
    SET_GPR_U32(ctx, 31, 0x4BDEDCu);
    ctx->pc = 0x4BDED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDED4u;
            // 0x4bded8: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDEDCu; }
        if (ctx->pc != 0x4BDEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDEDCu; }
        if (ctx->pc != 0x4BDEDCu) { return; }
    }
    ctx->pc = 0x4BDEDCu;
label_4bdedc:
    // 0x4bdedc: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x4bdedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_4bdee0:
    // 0x4bdee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bdee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bdee4:
    // 0x4bdee4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bdee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bdee8:
    // 0x4bdee8: 0x3407bffe  ori         $a3, $zero, 0xBFFE
    ctx->pc = 0x4bdee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49150);
label_4bdeec:
    // 0x4bdeec: 0xc04ce30  jal         func_1338C0
label_4bdef0:
    if (ctx->pc == 0x4BDEF0u) {
        ctx->pc = 0x4BDEF0u;
            // 0x4bdef0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BDEF4u;
        goto label_4bdef4;
    }
    ctx->pc = 0x4BDEECu;
    SET_GPR_U32(ctx, 31, 0x4BDEF4u);
    ctx->pc = 0x4BDEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDEECu;
            // 0x4bdef0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDEF4u; }
        if (ctx->pc != 0x4BDEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDEF4u; }
        if (ctx->pc != 0x4BDEF4u) { return; }
    }
    ctx->pc = 0x4BDEF4u;
label_4bdef4:
    // 0x4bdef4: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x4bdef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_4bdef8:
    // 0x4bdef8: 0xc04ce78  jal         func_1339E0
label_4bdefc:
    if (ctx->pc == 0x4BDEFCu) {
        ctx->pc = 0x4BDEFCu;
            // 0x4bdefc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4BDF00u;
        goto label_4bdf00;
    }
    ctx->pc = 0x4BDEF8u;
    SET_GPR_U32(ctx, 31, 0x4BDF00u);
    ctx->pc = 0x4BDEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDEF8u;
            // 0x4bdefc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF00u; }
        if (ctx->pc != 0x4BDF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF00u; }
        if (ctx->pc != 0x4BDF00u) { return; }
    }
    ctx->pc = 0x4BDF00u;
label_4bdf00:
    // 0x4bdf00: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x4bdf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bdf04:
    // 0x4bdf04: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4bdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4bdf08:
    // 0x4bdf08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4bdf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4bdf0c:
    // 0x4bdf0c: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x4bdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_4bdf10:
    // 0x4bdf10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4bdf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4bdf14:
    // 0x4bdf14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4bdf14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4bdf18:
    // 0x4bdf18: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x4bdf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_4bdf1c:
    // 0x4bdf1c: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x4bdf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bdf20:
    // 0x4bdf20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4bdf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4bdf24:
    // 0x4bdf24: 0xc04f3f4  jal         func_13CFD0
label_4bdf28:
    if (ctx->pc == 0x4BDF28u) {
        ctx->pc = 0x4BDF28u;
            // 0x4bdf28: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4BDF2Cu;
        goto label_4bdf2c;
    }
    ctx->pc = 0x4BDF24u;
    SET_GPR_U32(ctx, 31, 0x4BDF2Cu);
    ctx->pc = 0x4BDF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDF24u;
            // 0x4bdf28: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF2Cu; }
        if (ctx->pc != 0x4BDF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF2Cu; }
        if (ctx->pc != 0x4BDF2Cu) { return; }
    }
    ctx->pc = 0x4BDF2Cu;
label_4bdf2c:
    // 0x4bdf2c: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x4bdf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_4bdf30:
    // 0x4bdf30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bdf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bdf34:
    // 0x4bdf34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bdf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bdf38:
    // 0x4bdf38: 0x24073fff  addiu       $a3, $zero, 0x3FFF
    ctx->pc = 0x4bdf38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_4bdf3c:
    // 0x4bdf3c: 0xc04ce30  jal         func_1338C0
label_4bdf40:
    if (ctx->pc == 0x4BDF40u) {
        ctx->pc = 0x4BDF40u;
            // 0x4bdf40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BDF44u;
        goto label_4bdf44;
    }
    ctx->pc = 0x4BDF3Cu;
    SET_GPR_U32(ctx, 31, 0x4BDF44u);
    ctx->pc = 0x4BDF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDF3Cu;
            // 0x4bdf40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF44u; }
        if (ctx->pc != 0x4BDF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF44u; }
        if (ctx->pc != 0x4BDF44u) { return; }
    }
    ctx->pc = 0x4BDF44u;
label_4bdf44:
    // 0x4bdf44: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x4bdf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_4bdf48:
    // 0x4bdf48: 0xc04ce78  jal         func_1339E0
label_4bdf4c:
    if (ctx->pc == 0x4BDF4Cu) {
        ctx->pc = 0x4BDF4Cu;
            // 0x4bdf4c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4BDF50u;
        goto label_4bdf50;
    }
    ctx->pc = 0x4BDF48u;
    SET_GPR_U32(ctx, 31, 0x4BDF50u);
    ctx->pc = 0x4BDF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDF48u;
            // 0x4bdf4c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF50u; }
        if (ctx->pc != 0x4BDF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF50u; }
        if (ctx->pc != 0x4BDF50u) { return; }
    }
    ctx->pc = 0x4BDF50u;
label_4bdf50:
    // 0x4bdf50: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x4bdf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_4bdf54:
    // 0x4bdf54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4bdf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4bdf58:
    // 0x4bdf58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bdf58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bdf5c:
    // 0x4bdf5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4bdf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bdf60:
    // 0x4bdf60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4bdf60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bdf64:
    // 0x4bdf64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4bdf64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bdf68:
    // 0x4bdf68: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x4bdf68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4bdf6c:
    // 0x4bdf6c: 0xc0bc754  jal         func_2F1D50
label_4bdf70:
    if (ctx->pc == 0x4BDF70u) {
        ctx->pc = 0x4BDF70u;
            // 0x4bdf70: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x4BDF74u;
        goto label_4bdf74;
    }
    ctx->pc = 0x4BDF6Cu;
    SET_GPR_U32(ctx, 31, 0x4BDF74u);
    ctx->pc = 0x4BDF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDF6Cu;
            // 0x4bdf70: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF74u; }
        if (ctx->pc != 0x4BDF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF74u; }
        if (ctx->pc != 0x4BDF74u) { return; }
    }
    ctx->pc = 0x4BDF74u;
label_4bdf74:
    // 0x4bdf74: 0xc040180  jal         func_100600
label_4bdf78:
    if (ctx->pc == 0x4BDF78u) {
        ctx->pc = 0x4BDF78u;
            // 0x4bdf78: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4BDF7Cu;
        goto label_4bdf7c;
    }
    ctx->pc = 0x4BDF74u;
    SET_GPR_U32(ctx, 31, 0x4BDF7Cu);
    ctx->pc = 0x4BDF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDF74u;
            // 0x4bdf78: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF7Cu; }
        if (ctx->pc != 0x4BDF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BDF7Cu; }
        if (ctx->pc != 0x4BDF7Cu) { return; }
    }
    ctx->pc = 0x4BDF7Cu;
label_4bdf7c:
    // 0x4bdf7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bdf7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bdf80:
    // 0x4bdf80: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_4bdf84:
    if (ctx->pc == 0x4BDF84u) {
        ctx->pc = 0x4BDF84u;
            // 0x4bdf84: 0xae500114  sw          $s0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 16));
        ctx->pc = 0x4BDF88u;
        goto label_4bdf88;
    }
    ctx->pc = 0x4BDF80u;
    {
        const bool branch_taken_0x4bdf80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdf80) {
            ctx->pc = 0x4BDF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDF80u;
            // 0x4bdf84: 0xae500114  sw          $s0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BDFC4u;
            goto label_4bdfc4;
        }
    }
    ctx->pc = 0x4BDF88u;
label_4bdf88:
    // 0x4bdf88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bdf8c:
    // 0x4bdf8c: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x4bdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_4bdf90:
    // 0x4bdf90: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4bdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4bdf94:
    // 0x4bdf94: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x4bdf94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_4bdf98:
    // 0x4bdf98: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x4bdf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bdf9c:
    // 0x4bdf9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4bdf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4bdfa0:
    // 0x4bdfa0: 0x320f809  jalr        $t9
label_4bdfa4:
    if (ctx->pc == 0x4BDFA4u) {
        ctx->pc = 0x4BDFA4u;
            // 0x4bdfa4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4BDFA8u;
        goto label_4bdfa8;
    }
    ctx->pc = 0x4BDFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BDFA8u);
        ctx->pc = 0x4BDFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDFA0u;
            // 0x4bdfa4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BDFA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BDFA8u; }
            if (ctx->pc != 0x4BDFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x4BDFA8u;
label_4bdfa8:
    // 0x4bdfa8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4bdfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4bdfac:
    // 0x4bdfac: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x4bdfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_4bdfb0:
    // 0x4bdfb0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bdfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4bdfb4:
    // 0x4bdfb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4bdfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4bdfb8:
    // 0x4bdfb8: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x4bdfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_4bdfbc:
    // 0x4bdfbc: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x4bdfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_4bdfc0:
    // 0x4bdfc0: 0xae500114  sw          $s0, 0x114($s2)
    ctx->pc = 0x4bdfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 16));
label_4bdfc4:
    // 0x4bdfc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bdfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4bdfc8:
    // 0x4bdfc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bdfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bdfcc:
    // 0x4bdfcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bdfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bdfd0:
    // 0x4bdfd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bdfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bdfd4:
    // 0x4bdfd4: 0x3e00008  jr          $ra
label_4bdfd8:
    if (ctx->pc == 0x4BDFD8u) {
        ctx->pc = 0x4BDFD8u;
            // 0x4bdfd8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4BDFDCu;
        goto label_4bdfdc;
    }
    ctx->pc = 0x4BDFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BDFD4u;
            // 0x4bdfd8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BDFDCu;
label_4bdfdc:
    // 0x4bdfdc: 0x0  nop
    ctx->pc = 0x4bdfdcu;
    // NOP
label_4bdfe0:
    // 0x4bdfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bdfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4bdfe4:
    // 0x4bdfe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bdfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bdfe8:
    // 0x4bdfe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bdfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4bdfec:
    // 0x4bdfec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4bdfecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bdff0:
    // 0x4bdff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bdff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bdff4:
    // 0x4bdff4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4bdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4bdff8:
    // 0x4bdff8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bdff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4bdffc:
    // 0x4bdffc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4bdffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4be000:
    // 0x4be000: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4be000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_4be004:
    // 0x4be004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4be004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4be008:
    // 0x4be008: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4be008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4be00c:
    // 0x4be00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4be00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4be010:
    // 0x4be010: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4be010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_4be014:
    // 0x4be014: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4be014u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4be018:
    // 0x4be018: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4be018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_4be01c:
    // 0x4be01c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4be01cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4be020:
    // 0x4be020: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x4be020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_4be024:
    // 0x4be024: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x4be024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_4be028:
    // 0x4be028: 0xc04cbd8  jal         func_132F60
label_4be02c:
    if (ctx->pc == 0x4BE02Cu) {
        ctx->pc = 0x4BE02Cu;
            // 0x4be02c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4BE030u;
        goto label_4be030;
    }
    ctx->pc = 0x4BE028u;
    SET_GPR_U32(ctx, 31, 0x4BE030u);
    ctx->pc = 0x4BE02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE028u;
            // 0x4be02c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE030u; }
        if (ctx->pc != 0x4BE030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE030u; }
        if (ctx->pc != 0x4BE030u) { return; }
    }
    ctx->pc = 0x4BE030u;
label_4be030:
    // 0x4be030: 0xc04c968  jal         func_1325A0
label_4be034:
    if (ctx->pc == 0x4BE034u) {
        ctx->pc = 0x4BE034u;
            // 0x4be034: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4BE038u;
        goto label_4be038;
    }
    ctx->pc = 0x4BE030u;
    SET_GPR_U32(ctx, 31, 0x4BE038u);
    ctx->pc = 0x4BE034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE030u;
            // 0x4be034: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE038u; }
        if (ctx->pc != 0x4BE038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE038u; }
        if (ctx->pc != 0x4BE038u) { return; }
    }
    ctx->pc = 0x4BE038u;
label_4be038:
    // 0x4be038: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4be038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4be03c:
    // 0x4be03c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x4be03cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_4be040:
    // 0x4be040: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4be040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4be044:
    // 0x4be044: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x4be044u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_4be048:
    // 0x4be048: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x4be048u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_4be04c:
    // 0x4be04c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x4be04cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_4be050:
    // 0x4be050: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x4be050u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_4be054:
    // 0x4be054: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4be054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_4be058:
    // 0x4be058: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x4be058u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_4be05c:
    // 0x4be05c: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x4be05cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
label_4be060:
    // 0x4be060: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4be060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4be064:
    // 0x4be064: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x4be064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
label_4be068:
    // 0x4be068: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x4be068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
label_4be06c:
    // 0x4be06c: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x4be06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
label_4be070:
    // 0x4be070: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4be070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4be074:
    // 0x4be074: 0x24c60fc0  addiu       $a2, $a2, 0xFC0
    ctx->pc = 0x4be074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4032));
label_4be078:
    // 0x4be078: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x4be078u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_4be07c:
    // 0x4be07c: 0x24a51000  addiu       $a1, $a1, 0x1000
    ctx->pc = 0x4be07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
label_4be080:
    // 0x4be080: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x4be080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_4be084:
    // 0x4be084: 0x24634b70  addiu       $v1, $v1, 0x4B70
    ctx->pc = 0x4be084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19312));
label_4be088:
    // 0x4be088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4be088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4be08c:
    // 0x4be08c: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x4be08cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
label_4be090:
    // 0x4be090: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x4be090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_4be094:
    // 0x4be094: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4be094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4be098:
    // 0x4be098: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x4be098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_4be09c:
    // 0x4be09c: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x4be09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_4be0a0:
    // 0x4be0a0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4be0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_4be0a4:
    // 0x4be0a4: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x4be0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_4be0a8:
    // 0x4be0a8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x4be0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_4be0ac:
    // 0x4be0ac: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4be0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_4be0b0:
    // 0x4be0b0: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x4be0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_4be0b4:
    // 0x4be0b4: 0xa2000110  sb          $zero, 0x110($s0)
    ctx->pc = 0x4be0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 0));
label_4be0b8:
    // 0x4be0b8: 0xa2000111  sb          $zero, 0x111($s0)
    ctx->pc = 0x4be0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 273), (uint8_t)GPR_U32(ctx, 0));
label_4be0bc:
    // 0x4be0bc: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x4be0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_4be0c0:
    // 0x4be0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4be0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4be0c4:
    // 0x4be0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be0c8:
    // 0x4be0c8: 0x3e00008  jr          $ra
label_4be0cc:
    if (ctx->pc == 0x4BE0CCu) {
        ctx->pc = 0x4BE0CCu;
            // 0x4be0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4BE0D0u;
        goto label_4be0d0;
    }
    ctx->pc = 0x4BE0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE0C8u;
            // 0x4be0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE0D0u;
label_4be0d0:
    // 0x4be0d0: 0x3e00008  jr          $ra
label_4be0d4:
    if (ctx->pc == 0x4BE0D4u) {
        ctx->pc = 0x4BE0D4u;
            // 0x4be0d4: 0x24026d7e  addiu       $v0, $zero, 0x6D7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28030));
        ctx->pc = 0x4BE0D8u;
        goto label_4be0d8;
    }
    ctx->pc = 0x4BE0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE0D0u;
            // 0x4be0d4: 0x24026d7e  addiu       $v0, $zero, 0x6D7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE0D8u;
label_4be0d8:
    // 0x4be0d8: 0x0  nop
    ctx->pc = 0x4be0d8u;
    // NOP
label_4be0dc:
    // 0x4be0dc: 0x0  nop
    ctx->pc = 0x4be0dcu;
    // NOP
label_4be0e0:
    // 0x4be0e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4be0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4be0e4:
    // 0x4be0e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4be0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4be0e8:
    // 0x4be0e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4be0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4be0ec:
    // 0x4be0ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4be0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4be0f0:
    // 0x4be0f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4be0f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4be0f4:
    // 0x4be0f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4be0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4be0f8:
    // 0x4be0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4be0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4be0fc:
    // 0x4be0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4be0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4be100:
    // 0x4be100: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4be100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4be104:
    // 0x4be104: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4be108:
    if (ctx->pc == 0x4BE108u) {
        ctx->pc = 0x4BE108u;
            // 0x4be108: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE10Cu;
        goto label_4be10c;
    }
    ctx->pc = 0x4BE104u;
    {
        const bool branch_taken_0x4be104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE104u;
            // 0x4be108: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be104) {
            ctx->pc = 0x4BE148u;
            goto label_4be148;
        }
    }
    ctx->pc = 0x4BE10Cu;
label_4be10c:
    // 0x4be10c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4be10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be110:
    // 0x4be110: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4be110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be114:
    // 0x4be114: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4be114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be118:
    // 0x4be118: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4be118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4be11c:
    // 0x4be11c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4be11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4be120:
    // 0x4be120: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4be120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4be124:
    // 0x4be124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4be124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4be128:
    // 0x4be128: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4be128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4be12c:
    // 0x4be12c: 0x320f809  jalr        $t9
label_4be130:
    if (ctx->pc == 0x4BE130u) {
        ctx->pc = 0x4BE134u;
        goto label_4be134;
    }
    ctx->pc = 0x4BE12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BE134u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BE134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BE134u; }
            if (ctx->pc != 0x4BE134u) { return; }
        }
        }
    }
    ctx->pc = 0x4BE134u;
label_4be134:
    // 0x4be134: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4be134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4be138:
    // 0x4be138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4be138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4be13c:
    // 0x4be13c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4be13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4be140:
    // 0x4be140: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4be144:
    if (ctx->pc == 0x4BE144u) {
        ctx->pc = 0x4BE144u;
            // 0x4be144: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4BE148u;
        goto label_4be148;
    }
    ctx->pc = 0x4BE140u;
    {
        const bool branch_taken_0x4be140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE140u;
            // 0x4be144: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be140) {
            ctx->pc = 0x4BE118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4be118;
        }
    }
    ctx->pc = 0x4BE148u;
label_4be148:
    // 0x4be148: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4be148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4be14c:
    // 0x4be14c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4be14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4be150:
    // 0x4be150: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4be150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4be154:
    // 0x4be154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4be154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4be158:
    // 0x4be158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4be158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4be15c:
    // 0x4be15c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4be15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4be160:
    // 0x4be160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be164:
    // 0x4be164: 0x3e00008  jr          $ra
label_4be168:
    if (ctx->pc == 0x4BE168u) {
        ctx->pc = 0x4BE168u;
            // 0x4be168: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4BE16Cu;
        goto label_4be16c;
    }
    ctx->pc = 0x4BE164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE164u;
            // 0x4be168: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE16Cu;
label_4be16c:
    // 0x4be16c: 0x0  nop
    ctx->pc = 0x4be16cu;
    // NOP
label_4be170:
    // 0x4be170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4be170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4be174:
    // 0x4be174: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4be174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4be178:
    // 0x4be178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4be178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4be17c:
    // 0x4be17c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4be17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4be180:
    // 0x4be180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4be180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4be184:
    // 0x4be184: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4be184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4be188:
    // 0x4be188: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4be188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4be18c:
    // 0x4be18c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4be190:
    // 0x4be190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4be190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4be194:
    // 0x4be194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4be194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4be198:
    // 0x4be198: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4be198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4be19c:
    // 0x4be19c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4be19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4be1a0:
    // 0x4be1a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4be1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4be1a4:
    // 0x4be1a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4be1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4be1a8:
    // 0x4be1a8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4be1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4be1ac:
    // 0x4be1ac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4be1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4be1b0:
    // 0x4be1b0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4be1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4be1b4:
    // 0x4be1b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4be1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4be1b8:
    // 0x4be1b8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4be1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4be1bc:
    // 0x4be1bc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4be1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4be1c0:
    // 0x4be1c0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4be1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4be1c4:
    // 0x4be1c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4be1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4be1c8:
    // 0x4be1c8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4be1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4be1cc:
    // 0x4be1cc: 0xc0a997c  jal         func_2A65F0
label_4be1d0:
    if (ctx->pc == 0x4BE1D0u) {
        ctx->pc = 0x4BE1D0u;
            // 0x4be1d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4BE1D4u;
        goto label_4be1d4;
    }
    ctx->pc = 0x4BE1CCu;
    SET_GPR_U32(ctx, 31, 0x4BE1D4u);
    ctx->pc = 0x4BE1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE1CCu;
            // 0x4be1d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE1D4u; }
        if (ctx->pc != 0x4BE1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE1D4u; }
        if (ctx->pc != 0x4BE1D4u) { return; }
    }
    ctx->pc = 0x4BE1D4u;
label_4be1d4:
    // 0x4be1d4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4be1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4be1d8:
    // 0x4be1d8: 0xc0d879c  jal         func_361E70
label_4be1dc:
    if (ctx->pc == 0x4BE1DCu) {
        ctx->pc = 0x4BE1DCu;
            // 0x4be1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE1E0u;
        goto label_4be1e0;
    }
    ctx->pc = 0x4BE1D8u;
    SET_GPR_U32(ctx, 31, 0x4BE1E0u);
    ctx->pc = 0x4BE1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE1D8u;
            // 0x4be1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE1E0u; }
        if (ctx->pc != 0x4BE1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE1E0u; }
        if (ctx->pc != 0x4BE1E0u) { return; }
    }
    ctx->pc = 0x4BE1E0u;
label_4be1e0:
    // 0x4be1e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4be1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4be1e4:
    // 0x4be1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be1e8:
    // 0x4be1e8: 0x3e00008  jr          $ra
label_4be1ec:
    if (ctx->pc == 0x4BE1ECu) {
        ctx->pc = 0x4BE1ECu;
            // 0x4be1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BE1F0u;
        goto label_4be1f0;
    }
    ctx->pc = 0x4BE1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE1E8u;
            // 0x4be1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE1F0u;
label_4be1f0:
    // 0x4be1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4be1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4be1f4:
    // 0x4be1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4be1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4be1f8:
    // 0x4be1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4be1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4be1fc:
    // 0x4be1fc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4be1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4be200:
    // 0x4be200: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4be204:
    if (ctx->pc == 0x4BE204u) {
        ctx->pc = 0x4BE204u;
            // 0x4be204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE208u;
        goto label_4be208;
    }
    ctx->pc = 0x4BE200u;
    {
        const bool branch_taken_0x4be200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE200u;
            // 0x4be204: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be200) {
            ctx->pc = 0x4BE320u;
            goto label_4be320;
        }
    }
    ctx->pc = 0x4BE208u;
label_4be208:
    // 0x4be208: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4be208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4be20c:
    // 0x4be20c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4be20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4be210:
    // 0x4be210: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4be210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4be214:
    // 0x4be214: 0xc075128  jal         func_1D44A0
label_4be218:
    if (ctx->pc == 0x4BE218u) {
        ctx->pc = 0x4BE218u;
            // 0x4be218: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4BE21Cu;
        goto label_4be21c;
    }
    ctx->pc = 0x4BE214u;
    SET_GPR_U32(ctx, 31, 0x4BE21Cu);
    ctx->pc = 0x4BE218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE214u;
            // 0x4be218: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE21Cu; }
        if (ctx->pc != 0x4BE21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE21Cu; }
        if (ctx->pc != 0x4BE21Cu) { return; }
    }
    ctx->pc = 0x4BE21Cu;
label_4be21c:
    // 0x4be21c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4be21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4be220:
    // 0x4be220: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be224:
    // 0x4be224: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4be224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4be228:
    // 0x4be228: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4be228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4be22c:
    // 0x4be22c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4be22cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4be230:
    // 0x4be230: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4be234:
    if (ctx->pc == 0x4BE234u) {
        ctx->pc = 0x4BE234u;
            // 0x4be234: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4BE238u;
        goto label_4be238;
    }
    ctx->pc = 0x4BE230u;
    {
        const bool branch_taken_0x4be230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE230u;
            // 0x4be234: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be230) {
            ctx->pc = 0x4BE240u;
            goto label_4be240;
        }
    }
    ctx->pc = 0x4BE238u;
label_4be238:
    // 0x4be238: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be23c:
    // 0x4be23c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4be23cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4be240:
    // 0x4be240: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4be240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4be244:
    // 0x4be244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be248:
    // 0x4be248: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4be248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4be24c:
    // 0x4be24c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4be24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4be250:
    // 0x4be250: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4be250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4be254:
    // 0x4be254: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4be258:
    if (ctx->pc == 0x4BE258u) {
        ctx->pc = 0x4BE258u;
            // 0x4be258: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BE25Cu;
        goto label_4be25c;
    }
    ctx->pc = 0x4BE254u;
    {
        const bool branch_taken_0x4be254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be254) {
            ctx->pc = 0x4BE258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE254u;
            // 0x4be258: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BE268u;
            goto label_4be268;
        }
    }
    ctx->pc = 0x4BE25Cu;
label_4be25c:
    // 0x4be25c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be260:
    // 0x4be260: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4be260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4be264:
    // 0x4be264: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4be264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4be268:
    // 0x4be268: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be26c:
    // 0x4be26c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4be26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4be270:
    // 0x4be270: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4be270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4be274:
    // 0x4be274: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4be274u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4be278:
    // 0x4be278: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4be27c:
    if (ctx->pc == 0x4BE27Cu) {
        ctx->pc = 0x4BE27Cu;
            // 0x4be27c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4BE280u;
        goto label_4be280;
    }
    ctx->pc = 0x4BE278u;
    {
        const bool branch_taken_0x4be278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be278) {
            ctx->pc = 0x4BE27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE278u;
            // 0x4be27c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BE28Cu;
            goto label_4be28c;
        }
    }
    ctx->pc = 0x4BE280u;
label_4be280:
    // 0x4be280: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be284:
    // 0x4be284: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4be284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4be288:
    // 0x4be288: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4be288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4be28c:
    // 0x4be28c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4be28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4be290:
    // 0x4be290: 0x320f809  jalr        $t9
label_4be294:
    if (ctx->pc == 0x4BE294u) {
        ctx->pc = 0x4BE294u;
            // 0x4be294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE298u;
        goto label_4be298;
    }
    ctx->pc = 0x4BE290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BE298u);
        ctx->pc = 0x4BE294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE290u;
            // 0x4be294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BE298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BE298u; }
            if (ctx->pc != 0x4BE298u) { return; }
        }
        }
    }
    ctx->pc = 0x4BE298u;
label_4be298:
    // 0x4be298: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4be298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4be29c:
    // 0x4be29c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be2a0:
    // 0x4be2a0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4be2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4be2a4:
    // 0x4be2a4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4be2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4be2a8:
    // 0x4be2a8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4be2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4be2ac:
    // 0x4be2ac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4be2acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4be2b0:
    // 0x4be2b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4be2b4:
    if (ctx->pc == 0x4BE2B4u) {
        ctx->pc = 0x4BE2B4u;
            // 0x4be2b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4BE2B8u;
        goto label_4be2b8;
    }
    ctx->pc = 0x4BE2B0u;
    {
        const bool branch_taken_0x4be2b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be2b0) {
            ctx->pc = 0x4BE2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE2B0u;
            // 0x4be2b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BE2C4u;
            goto label_4be2c4;
        }
    }
    ctx->pc = 0x4BE2B8u;
label_4be2b8:
    // 0x4be2b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be2bc:
    // 0x4be2bc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4be2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4be2c0:
    // 0x4be2c0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4be2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4be2c4:
    // 0x4be2c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be2c8:
    // 0x4be2c8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4be2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4be2cc:
    // 0x4be2cc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4be2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4be2d0:
    // 0x4be2d0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4be2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4be2d4:
    // 0x4be2d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4be2d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4be2d8:
    // 0x4be2d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4be2dc:
    if (ctx->pc == 0x4BE2DCu) {
        ctx->pc = 0x4BE2E0u;
        goto label_4be2e0;
    }
    ctx->pc = 0x4BE2D8u;
    {
        const bool branch_taken_0x4be2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be2d8) {
            ctx->pc = 0x4BE2E8u;
            goto label_4be2e8;
        }
    }
    ctx->pc = 0x4BE2E0u;
label_4be2e0:
    // 0x4be2e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be2e4:
    // 0x4be2e4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4be2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4be2e8:
    // 0x4be2e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be2ec:
    // 0x4be2ec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4be2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4be2f0:
    // 0x4be2f0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4be2f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4be2f4:
    // 0x4be2f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4be2f8:
    if (ctx->pc == 0x4BE2F8u) {
        ctx->pc = 0x4BE2FCu;
        goto label_4be2fc;
    }
    ctx->pc = 0x4BE2F4u;
    {
        const bool branch_taken_0x4be2f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be2f4) {
            ctx->pc = 0x4BE304u;
            goto label_4be304;
        }
    }
    ctx->pc = 0x4BE2FCu;
label_4be2fc:
    // 0x4be2fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be300:
    // 0x4be300: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4be300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4be304:
    // 0x4be304: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be308:
    // 0x4be308: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4be308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4be30c:
    // 0x4be30c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4be30cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4be310:
    // 0x4be310: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4be314:
    if (ctx->pc == 0x4BE314u) {
        ctx->pc = 0x4BE314u;
            // 0x4be314: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4BE318u;
        goto label_4be318;
    }
    ctx->pc = 0x4BE310u;
    {
        const bool branch_taken_0x4be310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be310) {
            ctx->pc = 0x4BE314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE310u;
            // 0x4be314: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BE324u;
            goto label_4be324;
        }
    }
    ctx->pc = 0x4BE318u;
label_4be318:
    // 0x4be318: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be31c:
    // 0x4be31c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4be31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4be320:
    // 0x4be320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4be320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4be324:
    // 0x4be324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be328:
    // 0x4be328: 0x3e00008  jr          $ra
label_4be32c:
    if (ctx->pc == 0x4BE32Cu) {
        ctx->pc = 0x4BE32Cu;
            // 0x4be32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4BE330u;
        goto label_4be330;
    }
    ctx->pc = 0x4BE328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE328u;
            // 0x4be32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE330u;
label_4be330:
    // 0x4be330: 0x812f42c  j           func_4BD0B0
label_4be334:
    if (ctx->pc == 0x4BE334u) {
        ctx->pc = 0x4BE334u;
            // 0x4be334: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4BE338u;
        goto label_4be338;
    }
    ctx->pc = 0x4BE330u;
    ctx->pc = 0x4BE334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE330u;
            // 0x4be334: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD0B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4BD0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4BE338u;
label_4be338:
    // 0x4be338: 0x0  nop
    ctx->pc = 0x4be338u;
    // NOP
label_4be33c:
    // 0x4be33c: 0x0  nop
    ctx->pc = 0x4be33cu;
    // NOP
label_4be340:
    // 0x4be340: 0x812f550  j           func_4BD540
label_4be344:
    if (ctx->pc == 0x4BE344u) {
        ctx->pc = 0x4BE344u;
            // 0x4be344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4BE348u;
        goto label_4be348;
    }
    ctx->pc = 0x4BE340u;
    ctx->pc = 0x4BE344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE340u;
            // 0x4be344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BD540u;
    {
        auto targetFn = runtime->lookupFunction(0x4BD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4BE348u;
label_4be348:
    // 0x4be348: 0x0  nop
    ctx->pc = 0x4be348u;
    // NOP
label_4be34c:
    // 0x4be34c: 0x0  nop
    ctx->pc = 0x4be34cu;
    // NOP
label_4be350:
    // 0x4be350: 0x812f3d4  j           func_4BCF50
label_4be354:
    if (ctx->pc == 0x4BE354u) {
        ctx->pc = 0x4BE354u;
            // 0x4be354: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4BE358u;
        goto label_4be358;
    }
    ctx->pc = 0x4BE350u;
    ctx->pc = 0x4BE354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE350u;
            // 0x4be354: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BCF50u;
    if (runtime->hasFunction(0x4BCF50u)) {
        auto targetFn = runtime->lookupFunction(0x4BCF50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004BCF50_0x4bcf50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4BE358u;
label_4be358:
    // 0x4be358: 0x0  nop
    ctx->pc = 0x4be358u;
    // NOP
label_4be35c:
    // 0x4be35c: 0x0  nop
    ctx->pc = 0x4be35cu;
    // NOP
label_4be360:
    // 0x4be360: 0x812f3b0  j           func_4BCEC0
label_4be364:
    if (ctx->pc == 0x4BE364u) {
        ctx->pc = 0x4BE364u;
            // 0x4be364: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4BE368u;
        goto label_4be368;
    }
    ctx->pc = 0x4BE360u;
    ctx->pc = 0x4BE364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE360u;
            // 0x4be364: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BCEC0u;
    {
        auto targetFn = runtime->lookupFunction(0x4BCEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4BE368u;
label_4be368:
    // 0x4be368: 0x0  nop
    ctx->pc = 0x4be368u;
    // NOP
label_4be36c:
    // 0x4be36c: 0x0  nop
    ctx->pc = 0x4be36cu;
    // NOP
label_4be370:
    // 0x4be370: 0x3e00008  jr          $ra
label_4be374:
    if (ctx->pc == 0x4BE374u) {
        ctx->pc = 0x4BE374u;
            // 0x4be374: 0x24020838  addiu       $v0, $zero, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2104));
        ctx->pc = 0x4BE378u;
        goto label_4be378;
    }
    ctx->pc = 0x4BE370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE370u;
            // 0x4be374: 0x24020838  addiu       $v0, $zero, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE378u;
label_4be378:
    // 0x4be378: 0x0  nop
    ctx->pc = 0x4be378u;
    // NOP
label_4be37c:
    // 0x4be37c: 0x0  nop
    ctx->pc = 0x4be37cu;
    // NOP
label_4be380:
    // 0x4be380: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4be380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4be384:
    // 0x4be384: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4be384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4be388:
    // 0x4be388: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4be388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4be38c:
    // 0x4be38c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4be38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4be390:
    // 0x4be390: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4be390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4be394:
    // 0x4be394: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4be394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4be398:
    // 0x4be398: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4be398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4be39c:
    // 0x4be39c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4be39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4be3a0:
    // 0x4be3a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4be3a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4be3a4:
    // 0x4be3a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4be3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4be3a8:
    // 0x4be3a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4be3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4be3ac:
    // 0x4be3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4be3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4be3b0:
    // 0x4be3b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4be3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4be3b4:
    // 0x4be3b4: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x4be3b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_4be3b8:
    // 0x4be3b8: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
label_4be3bc:
    if (ctx->pc == 0x4BE3BCu) {
        ctx->pc = 0x4BE3BCu;
            // 0x4be3bc: 0x8eb0007c  lw          $s0, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->pc = 0x4BE3C0u;
        goto label_4be3c0;
    }
    ctx->pc = 0x4BE3B8u;
    {
        const bool branch_taken_0x4be3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4be3b8) {
            ctx->pc = 0x4BE3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE3B8u;
            // 0x4be3bc: 0x8eb0007c  lw          $s0, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BE40Cu;
            goto label_4be40c;
        }
    }
    ctx->pc = 0x4BE3C0u;
label_4be3c0:
    // 0x4be3c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4be3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4be3c4:
    // 0x4be3c4: 0x5083004f  beql        $a0, $v1, . + 4 + (0x4F << 2)
label_4be3c8:
    if (ctx->pc == 0x4BE3C8u) {
        ctx->pc = 0x4BE3C8u;
            // 0x4be3c8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4BE3CCu;
        goto label_4be3cc;
    }
    ctx->pc = 0x4BE3C4u;
    {
        const bool branch_taken_0x4be3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4be3c4) {
            ctx->pc = 0x4BE3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE3C4u;
            // 0x4be3c8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BE504u;
            goto label_4be504;
        }
    }
    ctx->pc = 0x4BE3CCu;
label_4be3cc:
    // 0x4be3cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4be3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4be3d0:
    // 0x4be3d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4be3d4:
    if (ctx->pc == 0x4BE3D4u) {
        ctx->pc = 0x4BE3D8u;
        goto label_4be3d8;
    }
    ctx->pc = 0x4BE3D0u;
    {
        const bool branch_taken_0x4be3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4be3d0) {
            ctx->pc = 0x4BE3E0u;
            goto label_4be3e0;
        }
    }
    ctx->pc = 0x4BE3D8u;
label_4be3d8:
    // 0x4be3d8: 0x10000049  b           . + 4 + (0x49 << 2)
label_4be3dc:
    if (ctx->pc == 0x4BE3DCu) {
        ctx->pc = 0x4BE3E0u;
        goto label_4be3e0;
    }
    ctx->pc = 0x4BE3D8u;
    {
        const bool branch_taken_0x4be3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be3d8) {
            ctx->pc = 0x4BE500u;
            goto label_4be500;
        }
    }
    ctx->pc = 0x4BE3E0u;
label_4be3e0:
    // 0x4be3e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4be3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4be3e4:
    // 0x4be3e4: 0x8eb9000c  lw          $t9, 0xC($s5)
    ctx->pc = 0x4be3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4be3e8:
    // 0x4be3e8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4be3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4be3ec:
    // 0x4be3ec: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x4be3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_4be3f0:
    // 0x4be3f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4be3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4be3f4:
    // 0x4be3f4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4be3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4be3f8:
    // 0x4be3f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4be3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4be3fc:
    // 0x4be3fc: 0x320f809  jalr        $t9
label_4be400:
    if (ctx->pc == 0x4BE400u) {
        ctx->pc = 0x4BE400u;
            // 0x4be400: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4BE404u;
        goto label_4be404;
    }
    ctx->pc = 0x4BE3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BE404u);
        ctx->pc = 0x4BE400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE3FCu;
            // 0x4be400: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BE404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BE404u; }
            if (ctx->pc != 0x4BE404u) { return; }
        }
        }
    }
    ctx->pc = 0x4BE404u;
label_4be404:
    // 0x4be404: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4be408:
    if (ctx->pc == 0x4BE408u) {
        ctx->pc = 0x4BE40Cu;
        goto label_4be40c;
    }
    ctx->pc = 0x4BE404u;
    {
        const bool branch_taken_0x4be404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be404) {
            ctx->pc = 0x4BE500u;
            goto label_4be500;
        }
    }
    ctx->pc = 0x4BE40Cu;
label_4be40c:
    // 0x4be40c: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_4be410:
    if (ctx->pc == 0x4BE410u) {
        ctx->pc = 0x4BE414u;
        goto label_4be414;
    }
    ctx->pc = 0x4BE40Cu;
    {
        const bool branch_taken_0x4be40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be40c) {
            ctx->pc = 0x4BE500u;
            goto label_4be500;
        }
    }
    ctx->pc = 0x4BE414u;
label_4be414:
    // 0x4be414: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be418:
    // 0x4be418: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4be418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4be41c:
    // 0x4be41c: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x4be41cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4be420:
    // 0x4be420: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4be420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be424:
    // 0x4be424: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4be424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4be428:
    // 0x4be428: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4be428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be42c:
    // 0x4be42c: 0x8eb30094  lw          $s3, 0x94($s5)
    ctx->pc = 0x4be42cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_4be430:
    // 0x4be430: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4be430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4be434:
    // 0x4be434: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4be434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4be438:
    // 0x4be438: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be43c:
    // 0x4be43c: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x4be43cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4be440:
    // 0x4be440: 0x8c7ee370  lw          $fp, -0x1C90($v1)
    ctx->pc = 0x4be440u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_4be444:
    // 0x4be444: 0x26a2009c  addiu       $v0, $s5, 0x9C
    ctx->pc = 0x4be444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 156));
label_4be448:
    // 0x4be448: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x4be448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4be44c:
    // 0x4be44c: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x4be44cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4be450:
    // 0x4be450: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x4be450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_4be454:
    // 0x4be454: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be458:
    // 0x4be458: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be45c:
    // 0x4be45c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4be45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4be460:
    // 0x4be460: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x4be460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_4be464:
    // 0x4be464: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4be464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4be468:
    // 0x4be468: 0xaea4009c  sw          $a0, 0x9C($s5)
    ctx->pc = 0x4be468u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 4));
label_4be46c:
    // 0x4be46c: 0x24b70010  addiu       $s7, $a1, 0x10
    ctx->pc = 0x4be46cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_4be470:
    // 0x4be470: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4be470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4be474:
    // 0x4be474: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4be474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4be478:
    // 0x4be478: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x4be478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_4be47c:
    // 0x4be47c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4be47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4be480:
    // 0x4be480: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4be480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4be484:
    // 0x4be484: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4be484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4be488:
    // 0x4be488: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x4be488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4be48c:
    // 0x4be48c: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x4be48cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4be490:
    // 0x4be490: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4be490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4be494:
    // 0x4be494: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4be494u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4be498:
    // 0x4be498: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4be498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4be49c:
    // 0x4be49c: 0xc12f9f4  jal         func_4BE7D0
label_4be4a0:
    if (ctx->pc == 0x4BE4A0u) {
        ctx->pc = 0x4BE4A0u;
            // 0x4be4a0: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE4A4u;
        goto label_4be4a4;
    }
    ctx->pc = 0x4BE49Cu;
    SET_GPR_U32(ctx, 31, 0x4BE4A4u);
    ctx->pc = 0x4BE4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE49Cu;
            // 0x4be4a0: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BE7D0u;
    if (runtime->hasFunction(0x4BE7D0u)) {
        auto targetFn = runtime->lookupFunction(0x4BE7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE4A4u; }
        if (ctx->pc != 0x4BE4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BE7D0_0x4be7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE4A4u; }
        if (ctx->pc != 0x4BE4A4u) { return; }
    }
    ctx->pc = 0x4BE4A4u;
label_4be4a4:
    // 0x4be4a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4be4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4be4a8:
    // 0x4be4a8: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4be4a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4be4ac:
    // 0x4be4ac: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_4be4b0:
    if (ctx->pc == 0x4BE4B0u) {
        ctx->pc = 0x4BE4B0u;
            // 0x4be4b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4BE4B4u;
        goto label_4be4b4;
    }
    ctx->pc = 0x4BE4ACu;
    {
        const bool branch_taken_0x4be4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE4ACu;
            // 0x4be4b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4ac) {
            ctx->pc = 0x4BE478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4be478;
        }
    }
    ctx->pc = 0x4BE4B4u;
label_4be4b4:
    // 0x4be4b4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x4be4b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4be4b8:
    // 0x4be4b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4be4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4be4bc:
    // 0x4be4bc: 0x8ea30090  lw          $v1, 0x90($s5)
    ctx->pc = 0x4be4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_4be4c0:
    // 0x4be4c0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_4be4c4:
    if (ctx->pc == 0x4BE4C4u) {
        ctx->pc = 0x4BE4C8u;
        goto label_4be4c8;
    }
    ctx->pc = 0x4BE4C0u;
    {
        const bool branch_taken_0x4be4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4be4c0) {
            ctx->pc = 0x4BE500u;
            goto label_4be500;
        }
    }
    ctx->pc = 0x4BE4C8u;
label_4be4c8:
    // 0x4be4c8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4be4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4be4cc:
    // 0x4be4cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be4d0:
    // 0x4be4d0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x4be4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4be4d4:
    // 0x4be4d4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4be4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4be4d8:
    // 0x4be4d8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4be4dc:
    if (ctx->pc == 0x4BE4DCu) {
        ctx->pc = 0x4BE4DCu;
            // 0x4be4dc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4BE4E0u;
        goto label_4be4e0;
    }
    ctx->pc = 0x4BE4D8u;
    {
        const bool branch_taken_0x4be4d8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4BE4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE4D8u;
            // 0x4be4dc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4d8) {
            ctx->pc = 0x4BE500u;
            goto label_4be500;
        }
    }
    ctx->pc = 0x4BE4E0u;
label_4be4e0:
    // 0x4be4e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4be4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4be4e4:
    // 0x4be4e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4be4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4be4e8:
    // 0x4be4e8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4be4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4be4ec:
    // 0x4be4ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4be4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4be4f0:
    // 0x4be4f0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4be4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4be4f4:
    // 0x4be4f4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4be4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4be4f8:
    // 0x4be4f8: 0xc055ea8  jal         func_157AA0
label_4be4fc:
    if (ctx->pc == 0x4BE4FCu) {
        ctx->pc = 0x4BE4FCu;
            // 0x4be4fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE500u;
        goto label_4be500;
    }
    ctx->pc = 0x4BE4F8u;
    SET_GPR_U32(ctx, 31, 0x4BE500u);
    ctx->pc = 0x4BE4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE4F8u;
            // 0x4be4fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE500u; }
        if (ctx->pc != 0x4BE500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE500u; }
        if (ctx->pc != 0x4BE500u) { return; }
    }
    ctx->pc = 0x4BE500u;
label_4be500:
    // 0x4be500: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4be500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4be504:
    // 0x4be504: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4be504u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4be508:
    // 0x4be508: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4be508u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4be50c:
    // 0x4be50c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4be50cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4be510:
    // 0x4be510: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4be510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4be514:
    // 0x4be514: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4be514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4be518:
    // 0x4be518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4be518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4be51c:
    // 0x4be51c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4be51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4be520:
    // 0x4be520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4be520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4be524:
    // 0x4be524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be528:
    // 0x4be528: 0x3e00008  jr          $ra
label_4be52c:
    if (ctx->pc == 0x4BE52Cu) {
        ctx->pc = 0x4BE52Cu;
            // 0x4be52c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4BE530u;
        goto label_4be530;
    }
    ctx->pc = 0x4BE528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE528u;
            // 0x4be52c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE530u;
label_4be530:
    // 0x4be530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4be530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4be534:
    // 0x4be534: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4be534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4be538:
    // 0x4be538: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4be538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4be53c:
    // 0x4be53c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4be53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4be540:
    // 0x4be540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4be540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4be544:
    // 0x4be544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4be544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4be548:
    // 0x4be548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4be548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4be54c:
    // 0x4be54c: 0x9085001c  lbu         $a1, 0x1C($a0)
    ctx->pc = 0x4be54cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_4be550:
    // 0x4be550: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
label_4be554:
    if (ctx->pc == 0x4BE554u) {
        ctx->pc = 0x4BE554u;
            // 0x4be554: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE558u;
        goto label_4be558;
    }
    ctx->pc = 0x4BE550u;
    {
        const bool branch_taken_0x4be550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4BE554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE550u;
            // 0x4be554: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be550) {
            ctx->pc = 0x4BE5ACu;
            goto label_4be5ac;
        }
    }
    ctx->pc = 0x4BE558u;
label_4be558:
    // 0x4be558: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4be558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4be55c:
    // 0x4be55c: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_4be560:
    if (ctx->pc == 0x4BE560u) {
        ctx->pc = 0x4BE560u;
            // 0x4be560: 0x8e39000c  lw          $t9, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x4BE564u;
        goto label_4be564;
    }
    ctx->pc = 0x4BE55Cu;
    {
        const bool branch_taken_0x4be55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4be55c) {
            ctx->pc = 0x4BE560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE55Cu;
            // 0x4be560: 0x8e39000c  lw          $t9, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BE5A0u;
            goto label_4be5a0;
        }
    }
    ctx->pc = 0x4BE564u;
label_4be564:
    // 0x4be564: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4be564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4be568:
    // 0x4be568: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4be56c:
    if (ctx->pc == 0x4BE56Cu) {
        ctx->pc = 0x4BE570u;
        goto label_4be570;
    }
    ctx->pc = 0x4BE568u;
    {
        const bool branch_taken_0x4be568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4be568) {
            ctx->pc = 0x4BE578u;
            goto label_4be578;
        }
    }
    ctx->pc = 0x4BE570u;
label_4be570:
    // 0x4be570: 0x10000021  b           . + 4 + (0x21 << 2)
label_4be574:
    if (ctx->pc == 0x4BE574u) {
        ctx->pc = 0x4BE578u;
        goto label_4be578;
    }
    ctx->pc = 0x4BE570u;
    {
        const bool branch_taken_0x4be570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be570) {
            ctx->pc = 0x4BE5F8u;
            goto label_4be5f8;
        }
    }
    ctx->pc = 0x4BE578u;
label_4be578:
    // 0x4be578: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4be578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4be57c:
    // 0x4be57c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4be57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4be580:
    // 0x4be580: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4be580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4be584:
    // 0x4be584: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4be584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4be588:
    // 0x4be588: 0x1065001b  beq         $v1, $a1, . + 4 + (0x1B << 2)
label_4be58c:
    if (ctx->pc == 0x4BE58Cu) {
        ctx->pc = 0x4BE590u;
        goto label_4be590;
    }
    ctx->pc = 0x4BE588u;
    {
        const bool branch_taken_0x4be588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4be588) {
            ctx->pc = 0x4BE5F8u;
            goto label_4be5f8;
        }
    }
    ctx->pc = 0x4BE590u;
label_4be590:
    // 0x4be590: 0xc12f9a8  jal         func_4BE6A0
label_4be594:
    if (ctx->pc == 0x4BE594u) {
        ctx->pc = 0x4BE598u;
        goto label_4be598;
    }
    ctx->pc = 0x4BE590u;
    SET_GPR_U32(ctx, 31, 0x4BE598u);
    ctx->pc = 0x4BE6A0u;
    if (runtime->hasFunction(0x4BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x4BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE598u; }
        if (ctx->pc != 0x4BE598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BE6A0_0x4be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE598u; }
        if (ctx->pc != 0x4BE598u) { return; }
    }
    ctx->pc = 0x4BE598u;
label_4be598:
    // 0x4be598: 0x10000017  b           . + 4 + (0x17 << 2)
label_4be59c:
    if (ctx->pc == 0x4BE59Cu) {
        ctx->pc = 0x4BE5A0u;
        goto label_4be5a0;
    }
    ctx->pc = 0x4BE598u;
    {
        const bool branch_taken_0x4be598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be598) {
            ctx->pc = 0x4BE5F8u;
            goto label_4be5f8;
        }
    }
    ctx->pc = 0x4BE5A0u;
label_4be5a0:
    // 0x4be5a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4be5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4be5a4:
    // 0x4be5a4: 0x320f809  jalr        $t9
label_4be5a8:
    if (ctx->pc == 0x4BE5A8u) {
        ctx->pc = 0x4BE5A8u;
            // 0x4be5a8: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x4BE5ACu;
        goto label_4be5ac;
    }
    ctx->pc = 0x4BE5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BE5ACu);
        ctx->pc = 0x4BE5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE5A4u;
            // 0x4be5a8: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BE5ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BE5ACu; }
            if (ctx->pc != 0x4BE5ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4BE5ACu;
label_4be5ac:
    // 0x4be5ac: 0x8e30007c  lw          $s0, 0x7C($s1)
    ctx->pc = 0x4be5acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_4be5b0:
    // 0x4be5b0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4be5b4:
    if (ctx->pc == 0x4BE5B4u) {
        ctx->pc = 0x4BE5B8u;
        goto label_4be5b8;
    }
    ctx->pc = 0x4BE5B0u;
    {
        const bool branch_taken_0x4be5b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be5b0) {
            ctx->pc = 0x4BE5F8u;
            goto label_4be5f8;
        }
    }
    ctx->pc = 0x4BE5B8u;
label_4be5b8:
    // 0x4be5b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4be5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4be5bc:
    // 0x4be5bc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4be5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4be5c0:
    // 0x4be5c0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4be5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4be5c4:
    // 0x4be5c4: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x4be5c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4be5c8:
    // 0x4be5c8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_4be5cc:
    if (ctx->pc == 0x4BE5CCu) {
        ctx->pc = 0x4BE5D0u;
        goto label_4be5d0;
    }
    ctx->pc = 0x4BE5C8u;
    {
        const bool branch_taken_0x4be5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4be5c8) {
            ctx->pc = 0x4BE5F8u;
            goto label_4be5f8;
        }
    }
    ctx->pc = 0x4BE5D0u;
label_4be5d0:
    // 0x4be5d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4be5d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be5d4:
    // 0x4be5d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4be5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be5d8:
    // 0x4be5d8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x4be5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4be5dc:
    // 0x4be5dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4be5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4be5e0:
    // 0x4be5e0: 0xc0e3658  jal         func_38D960
label_4be5e4:
    if (ctx->pc == 0x4BE5E4u) {
        ctx->pc = 0x4BE5E4u;
            // 0x4be5e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4BE5E8u;
        goto label_4be5e8;
    }
    ctx->pc = 0x4BE5E0u;
    SET_GPR_U32(ctx, 31, 0x4BE5E8u);
    ctx->pc = 0x4BE5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE5E0u;
            // 0x4be5e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE5E8u; }
        if (ctx->pc != 0x4BE5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BE5E8u; }
        if (ctx->pc != 0x4BE5E8u) { return; }
    }
    ctx->pc = 0x4BE5E8u;
label_4be5e8:
    // 0x4be5e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4be5e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4be5ec:
    // 0x4be5ec: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x4be5ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4be5f0:
    // 0x4be5f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4be5f4:
    if (ctx->pc == 0x4BE5F4u) {
        ctx->pc = 0x4BE5F4u;
            // 0x4be5f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BE5F8u;
        goto label_4be5f8;
    }
    ctx->pc = 0x4BE5F0u;
    {
        const bool branch_taken_0x4be5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE5F0u;
            // 0x4be5f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be5f0) {
            ctx->pc = 0x4BE5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4be5d8;
        }
    }
    ctx->pc = 0x4BE5F8u;
label_4be5f8:
    // 0x4be5f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4be5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4be5fc:
    // 0x4be5fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4be5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4be600:
    // 0x4be600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4be600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4be604:
    // 0x4be604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4be604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4be608:
    // 0x4be608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be60c:
    // 0x4be60c: 0x3e00008  jr          $ra
label_4be610:
    if (ctx->pc == 0x4BE610u) {
        ctx->pc = 0x4BE610u;
            // 0x4be610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BE614u;
        goto label_4be614;
    }
    ctx->pc = 0x4BE60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE60Cu;
            // 0x4be610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE614u;
label_4be614:
    // 0x4be614: 0x0  nop
    ctx->pc = 0x4be614u;
    // NOP
label_4be618:
    // 0x4be618: 0x0  nop
    ctx->pc = 0x4be618u;
    // NOP
label_4be61c:
    // 0x4be61c: 0x0  nop
    ctx->pc = 0x4be61cu;
    // NOP
label_4be620:
    // 0x4be620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4be620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4be624:
    // 0x4be624: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4be624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4be628:
    // 0x4be628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4be628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4be62c:
    // 0x4be62c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4be62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4be630:
    // 0x4be630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4be630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4be634:
    // 0x4be634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4be634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4be638:
    // 0x4be638: 0x8c91007c  lw          $s1, 0x7C($a0)
    ctx->pc = 0x4be638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4be63c:
    // 0x4be63c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4be640:
    if (ctx->pc == 0x4BE640u) {
        ctx->pc = 0x4BE640u;
            // 0x4be640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BE644u;
        goto label_4be644;
    }
    ctx->pc = 0x4BE63Cu;
    {
        const bool branch_taken_0x4be63c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE63Cu;
            // 0x4be640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be63c) {
            ctx->pc = 0x4BE678u;
            goto label_4be678;
        }
    }
    ctx->pc = 0x4BE644u;
label_4be644:
    // 0x4be644: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4be644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be648:
    // 0x4be648: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4be648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4be64c:
    // 0x4be64c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x4be64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_4be650:
    // 0x4be650: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4be650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4be654:
    // 0x4be654: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4be654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4be658:
    // 0x4be658: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4be658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4be65c:
    // 0x4be65c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4be65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4be660:
    // 0x4be660: 0x320f809  jalr        $t9
label_4be664:
    if (ctx->pc == 0x4BE664u) {
        ctx->pc = 0x4BE668u;
        goto label_4be668;
    }
    ctx->pc = 0x4BE660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BE668u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BE668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BE668u; }
            if (ctx->pc != 0x4BE668u) { return; }
        }
        }
    }
    ctx->pc = 0x4BE668u;
label_4be668:
    // 0x4be668: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4be668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4be66c:
    // 0x4be66c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4be66cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4be670:
    // 0x4be670: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4be674:
    if (ctx->pc == 0x4BE674u) {
        ctx->pc = 0x4BE674u;
            // 0x4be674: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BE678u;
        goto label_4be678;
    }
    ctx->pc = 0x4BE670u;
    {
        const bool branch_taken_0x4be670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE670u;
            // 0x4be674: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be670) {
            ctx->pc = 0x4BE64Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4be64c;
        }
    }
    ctx->pc = 0x4BE678u;
label_4be678:
    // 0x4be678: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4be678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4be67c:
    // 0x4be67c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4be67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4be680:
    // 0x4be680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4be680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4be684:
    // 0x4be684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4be684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4be688:
    // 0x4be688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4be688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4be68c:
    // 0x4be68c: 0x3e00008  jr          $ra
label_4be690:
    if (ctx->pc == 0x4BE690u) {
        ctx->pc = 0x4BE690u;
            // 0x4be690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BE694u;
        goto label_4be694;
    }
    ctx->pc = 0x4BE68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BE68Cu;
            // 0x4be690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BE694u;
label_4be694:
    // 0x4be694: 0x0  nop
    ctx->pc = 0x4be694u;
    // NOP
label_4be698:
    // 0x4be698: 0x0  nop
    ctx->pc = 0x4be698u;
    // NOP
label_4be69c:
    // 0x4be69c: 0x0  nop
    ctx->pc = 0x4be69cu;
    // NOP
}
