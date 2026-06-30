#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB7A0
// Address: 0x2ab7a0 - 0x2abef0
void sub_002AB7A0_0x2ab7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB7A0_0x2ab7a0");
#endif

    switch (ctx->pc) {
        case 0x2ab7a0u: goto label_2ab7a0;
        case 0x2ab7a4u: goto label_2ab7a4;
        case 0x2ab7a8u: goto label_2ab7a8;
        case 0x2ab7acu: goto label_2ab7ac;
        case 0x2ab7b0u: goto label_2ab7b0;
        case 0x2ab7b4u: goto label_2ab7b4;
        case 0x2ab7b8u: goto label_2ab7b8;
        case 0x2ab7bcu: goto label_2ab7bc;
        case 0x2ab7c0u: goto label_2ab7c0;
        case 0x2ab7c4u: goto label_2ab7c4;
        case 0x2ab7c8u: goto label_2ab7c8;
        case 0x2ab7ccu: goto label_2ab7cc;
        case 0x2ab7d0u: goto label_2ab7d0;
        case 0x2ab7d4u: goto label_2ab7d4;
        case 0x2ab7d8u: goto label_2ab7d8;
        case 0x2ab7dcu: goto label_2ab7dc;
        case 0x2ab7e0u: goto label_2ab7e0;
        case 0x2ab7e4u: goto label_2ab7e4;
        case 0x2ab7e8u: goto label_2ab7e8;
        case 0x2ab7ecu: goto label_2ab7ec;
        case 0x2ab7f0u: goto label_2ab7f0;
        case 0x2ab7f4u: goto label_2ab7f4;
        case 0x2ab7f8u: goto label_2ab7f8;
        case 0x2ab7fcu: goto label_2ab7fc;
        case 0x2ab800u: goto label_2ab800;
        case 0x2ab804u: goto label_2ab804;
        case 0x2ab808u: goto label_2ab808;
        case 0x2ab80cu: goto label_2ab80c;
        case 0x2ab810u: goto label_2ab810;
        case 0x2ab814u: goto label_2ab814;
        case 0x2ab818u: goto label_2ab818;
        case 0x2ab81cu: goto label_2ab81c;
        case 0x2ab820u: goto label_2ab820;
        case 0x2ab824u: goto label_2ab824;
        case 0x2ab828u: goto label_2ab828;
        case 0x2ab82cu: goto label_2ab82c;
        case 0x2ab830u: goto label_2ab830;
        case 0x2ab834u: goto label_2ab834;
        case 0x2ab838u: goto label_2ab838;
        case 0x2ab83cu: goto label_2ab83c;
        case 0x2ab840u: goto label_2ab840;
        case 0x2ab844u: goto label_2ab844;
        case 0x2ab848u: goto label_2ab848;
        case 0x2ab84cu: goto label_2ab84c;
        case 0x2ab850u: goto label_2ab850;
        case 0x2ab854u: goto label_2ab854;
        case 0x2ab858u: goto label_2ab858;
        case 0x2ab85cu: goto label_2ab85c;
        case 0x2ab860u: goto label_2ab860;
        case 0x2ab864u: goto label_2ab864;
        case 0x2ab868u: goto label_2ab868;
        case 0x2ab86cu: goto label_2ab86c;
        case 0x2ab870u: goto label_2ab870;
        case 0x2ab874u: goto label_2ab874;
        case 0x2ab878u: goto label_2ab878;
        case 0x2ab87cu: goto label_2ab87c;
        case 0x2ab880u: goto label_2ab880;
        case 0x2ab884u: goto label_2ab884;
        case 0x2ab888u: goto label_2ab888;
        case 0x2ab88cu: goto label_2ab88c;
        case 0x2ab890u: goto label_2ab890;
        case 0x2ab894u: goto label_2ab894;
        case 0x2ab898u: goto label_2ab898;
        case 0x2ab89cu: goto label_2ab89c;
        case 0x2ab8a0u: goto label_2ab8a0;
        case 0x2ab8a4u: goto label_2ab8a4;
        case 0x2ab8a8u: goto label_2ab8a8;
        case 0x2ab8acu: goto label_2ab8ac;
        case 0x2ab8b0u: goto label_2ab8b0;
        case 0x2ab8b4u: goto label_2ab8b4;
        case 0x2ab8b8u: goto label_2ab8b8;
        case 0x2ab8bcu: goto label_2ab8bc;
        case 0x2ab8c0u: goto label_2ab8c0;
        case 0x2ab8c4u: goto label_2ab8c4;
        case 0x2ab8c8u: goto label_2ab8c8;
        case 0x2ab8ccu: goto label_2ab8cc;
        case 0x2ab8d0u: goto label_2ab8d0;
        case 0x2ab8d4u: goto label_2ab8d4;
        case 0x2ab8d8u: goto label_2ab8d8;
        case 0x2ab8dcu: goto label_2ab8dc;
        case 0x2ab8e0u: goto label_2ab8e0;
        case 0x2ab8e4u: goto label_2ab8e4;
        case 0x2ab8e8u: goto label_2ab8e8;
        case 0x2ab8ecu: goto label_2ab8ec;
        case 0x2ab8f0u: goto label_2ab8f0;
        case 0x2ab8f4u: goto label_2ab8f4;
        case 0x2ab8f8u: goto label_2ab8f8;
        case 0x2ab8fcu: goto label_2ab8fc;
        case 0x2ab900u: goto label_2ab900;
        case 0x2ab904u: goto label_2ab904;
        case 0x2ab908u: goto label_2ab908;
        case 0x2ab90cu: goto label_2ab90c;
        case 0x2ab910u: goto label_2ab910;
        case 0x2ab914u: goto label_2ab914;
        case 0x2ab918u: goto label_2ab918;
        case 0x2ab91cu: goto label_2ab91c;
        case 0x2ab920u: goto label_2ab920;
        case 0x2ab924u: goto label_2ab924;
        case 0x2ab928u: goto label_2ab928;
        case 0x2ab92cu: goto label_2ab92c;
        case 0x2ab930u: goto label_2ab930;
        case 0x2ab934u: goto label_2ab934;
        case 0x2ab938u: goto label_2ab938;
        case 0x2ab93cu: goto label_2ab93c;
        case 0x2ab940u: goto label_2ab940;
        case 0x2ab944u: goto label_2ab944;
        case 0x2ab948u: goto label_2ab948;
        case 0x2ab94cu: goto label_2ab94c;
        case 0x2ab950u: goto label_2ab950;
        case 0x2ab954u: goto label_2ab954;
        case 0x2ab958u: goto label_2ab958;
        case 0x2ab95cu: goto label_2ab95c;
        case 0x2ab960u: goto label_2ab960;
        case 0x2ab964u: goto label_2ab964;
        case 0x2ab968u: goto label_2ab968;
        case 0x2ab96cu: goto label_2ab96c;
        case 0x2ab970u: goto label_2ab970;
        case 0x2ab974u: goto label_2ab974;
        case 0x2ab978u: goto label_2ab978;
        case 0x2ab97cu: goto label_2ab97c;
        case 0x2ab980u: goto label_2ab980;
        case 0x2ab984u: goto label_2ab984;
        case 0x2ab988u: goto label_2ab988;
        case 0x2ab98cu: goto label_2ab98c;
        case 0x2ab990u: goto label_2ab990;
        case 0x2ab994u: goto label_2ab994;
        case 0x2ab998u: goto label_2ab998;
        case 0x2ab99cu: goto label_2ab99c;
        case 0x2ab9a0u: goto label_2ab9a0;
        case 0x2ab9a4u: goto label_2ab9a4;
        case 0x2ab9a8u: goto label_2ab9a8;
        case 0x2ab9acu: goto label_2ab9ac;
        case 0x2ab9b0u: goto label_2ab9b0;
        case 0x2ab9b4u: goto label_2ab9b4;
        case 0x2ab9b8u: goto label_2ab9b8;
        case 0x2ab9bcu: goto label_2ab9bc;
        case 0x2ab9c0u: goto label_2ab9c0;
        case 0x2ab9c4u: goto label_2ab9c4;
        case 0x2ab9c8u: goto label_2ab9c8;
        case 0x2ab9ccu: goto label_2ab9cc;
        case 0x2ab9d0u: goto label_2ab9d0;
        case 0x2ab9d4u: goto label_2ab9d4;
        case 0x2ab9d8u: goto label_2ab9d8;
        case 0x2ab9dcu: goto label_2ab9dc;
        case 0x2ab9e0u: goto label_2ab9e0;
        case 0x2ab9e4u: goto label_2ab9e4;
        case 0x2ab9e8u: goto label_2ab9e8;
        case 0x2ab9ecu: goto label_2ab9ec;
        case 0x2ab9f0u: goto label_2ab9f0;
        case 0x2ab9f4u: goto label_2ab9f4;
        case 0x2ab9f8u: goto label_2ab9f8;
        case 0x2ab9fcu: goto label_2ab9fc;
        case 0x2aba00u: goto label_2aba00;
        case 0x2aba04u: goto label_2aba04;
        case 0x2aba08u: goto label_2aba08;
        case 0x2aba0cu: goto label_2aba0c;
        case 0x2aba10u: goto label_2aba10;
        case 0x2aba14u: goto label_2aba14;
        case 0x2aba18u: goto label_2aba18;
        case 0x2aba1cu: goto label_2aba1c;
        case 0x2aba20u: goto label_2aba20;
        case 0x2aba24u: goto label_2aba24;
        case 0x2aba28u: goto label_2aba28;
        case 0x2aba2cu: goto label_2aba2c;
        case 0x2aba30u: goto label_2aba30;
        case 0x2aba34u: goto label_2aba34;
        case 0x2aba38u: goto label_2aba38;
        case 0x2aba3cu: goto label_2aba3c;
        case 0x2aba40u: goto label_2aba40;
        case 0x2aba44u: goto label_2aba44;
        case 0x2aba48u: goto label_2aba48;
        case 0x2aba4cu: goto label_2aba4c;
        case 0x2aba50u: goto label_2aba50;
        case 0x2aba54u: goto label_2aba54;
        case 0x2aba58u: goto label_2aba58;
        case 0x2aba5cu: goto label_2aba5c;
        case 0x2aba60u: goto label_2aba60;
        case 0x2aba64u: goto label_2aba64;
        case 0x2aba68u: goto label_2aba68;
        case 0x2aba6cu: goto label_2aba6c;
        case 0x2aba70u: goto label_2aba70;
        case 0x2aba74u: goto label_2aba74;
        case 0x2aba78u: goto label_2aba78;
        case 0x2aba7cu: goto label_2aba7c;
        case 0x2aba80u: goto label_2aba80;
        case 0x2aba84u: goto label_2aba84;
        case 0x2aba88u: goto label_2aba88;
        case 0x2aba8cu: goto label_2aba8c;
        case 0x2aba90u: goto label_2aba90;
        case 0x2aba94u: goto label_2aba94;
        case 0x2aba98u: goto label_2aba98;
        case 0x2aba9cu: goto label_2aba9c;
        case 0x2abaa0u: goto label_2abaa0;
        case 0x2abaa4u: goto label_2abaa4;
        case 0x2abaa8u: goto label_2abaa8;
        case 0x2abaacu: goto label_2abaac;
        case 0x2abab0u: goto label_2abab0;
        case 0x2abab4u: goto label_2abab4;
        case 0x2abab8u: goto label_2abab8;
        case 0x2ababcu: goto label_2ababc;
        case 0x2abac0u: goto label_2abac0;
        case 0x2abac4u: goto label_2abac4;
        case 0x2abac8u: goto label_2abac8;
        case 0x2abaccu: goto label_2abacc;
        case 0x2abad0u: goto label_2abad0;
        case 0x2abad4u: goto label_2abad4;
        case 0x2abad8u: goto label_2abad8;
        case 0x2abadcu: goto label_2abadc;
        case 0x2abae0u: goto label_2abae0;
        case 0x2abae4u: goto label_2abae4;
        case 0x2abae8u: goto label_2abae8;
        case 0x2abaecu: goto label_2abaec;
        case 0x2abaf0u: goto label_2abaf0;
        case 0x2abaf4u: goto label_2abaf4;
        case 0x2abaf8u: goto label_2abaf8;
        case 0x2abafcu: goto label_2abafc;
        case 0x2abb00u: goto label_2abb00;
        case 0x2abb04u: goto label_2abb04;
        case 0x2abb08u: goto label_2abb08;
        case 0x2abb0cu: goto label_2abb0c;
        case 0x2abb10u: goto label_2abb10;
        case 0x2abb14u: goto label_2abb14;
        case 0x2abb18u: goto label_2abb18;
        case 0x2abb1cu: goto label_2abb1c;
        case 0x2abb20u: goto label_2abb20;
        case 0x2abb24u: goto label_2abb24;
        case 0x2abb28u: goto label_2abb28;
        case 0x2abb2cu: goto label_2abb2c;
        case 0x2abb30u: goto label_2abb30;
        case 0x2abb34u: goto label_2abb34;
        case 0x2abb38u: goto label_2abb38;
        case 0x2abb3cu: goto label_2abb3c;
        case 0x2abb40u: goto label_2abb40;
        case 0x2abb44u: goto label_2abb44;
        case 0x2abb48u: goto label_2abb48;
        case 0x2abb4cu: goto label_2abb4c;
        case 0x2abb50u: goto label_2abb50;
        case 0x2abb54u: goto label_2abb54;
        case 0x2abb58u: goto label_2abb58;
        case 0x2abb5cu: goto label_2abb5c;
        case 0x2abb60u: goto label_2abb60;
        case 0x2abb64u: goto label_2abb64;
        case 0x2abb68u: goto label_2abb68;
        case 0x2abb6cu: goto label_2abb6c;
        case 0x2abb70u: goto label_2abb70;
        case 0x2abb74u: goto label_2abb74;
        case 0x2abb78u: goto label_2abb78;
        case 0x2abb7cu: goto label_2abb7c;
        case 0x2abb80u: goto label_2abb80;
        case 0x2abb84u: goto label_2abb84;
        case 0x2abb88u: goto label_2abb88;
        case 0x2abb8cu: goto label_2abb8c;
        case 0x2abb90u: goto label_2abb90;
        case 0x2abb94u: goto label_2abb94;
        case 0x2abb98u: goto label_2abb98;
        case 0x2abb9cu: goto label_2abb9c;
        case 0x2abba0u: goto label_2abba0;
        case 0x2abba4u: goto label_2abba4;
        case 0x2abba8u: goto label_2abba8;
        case 0x2abbacu: goto label_2abbac;
        case 0x2abbb0u: goto label_2abbb0;
        case 0x2abbb4u: goto label_2abbb4;
        case 0x2abbb8u: goto label_2abbb8;
        case 0x2abbbcu: goto label_2abbbc;
        case 0x2abbc0u: goto label_2abbc0;
        case 0x2abbc4u: goto label_2abbc4;
        case 0x2abbc8u: goto label_2abbc8;
        case 0x2abbccu: goto label_2abbcc;
        case 0x2abbd0u: goto label_2abbd0;
        case 0x2abbd4u: goto label_2abbd4;
        case 0x2abbd8u: goto label_2abbd8;
        case 0x2abbdcu: goto label_2abbdc;
        case 0x2abbe0u: goto label_2abbe0;
        case 0x2abbe4u: goto label_2abbe4;
        case 0x2abbe8u: goto label_2abbe8;
        case 0x2abbecu: goto label_2abbec;
        case 0x2abbf0u: goto label_2abbf0;
        case 0x2abbf4u: goto label_2abbf4;
        case 0x2abbf8u: goto label_2abbf8;
        case 0x2abbfcu: goto label_2abbfc;
        case 0x2abc00u: goto label_2abc00;
        case 0x2abc04u: goto label_2abc04;
        case 0x2abc08u: goto label_2abc08;
        case 0x2abc0cu: goto label_2abc0c;
        case 0x2abc10u: goto label_2abc10;
        case 0x2abc14u: goto label_2abc14;
        case 0x2abc18u: goto label_2abc18;
        case 0x2abc1cu: goto label_2abc1c;
        case 0x2abc20u: goto label_2abc20;
        case 0x2abc24u: goto label_2abc24;
        case 0x2abc28u: goto label_2abc28;
        case 0x2abc2cu: goto label_2abc2c;
        case 0x2abc30u: goto label_2abc30;
        case 0x2abc34u: goto label_2abc34;
        case 0x2abc38u: goto label_2abc38;
        case 0x2abc3cu: goto label_2abc3c;
        case 0x2abc40u: goto label_2abc40;
        case 0x2abc44u: goto label_2abc44;
        case 0x2abc48u: goto label_2abc48;
        case 0x2abc4cu: goto label_2abc4c;
        case 0x2abc50u: goto label_2abc50;
        case 0x2abc54u: goto label_2abc54;
        case 0x2abc58u: goto label_2abc58;
        case 0x2abc5cu: goto label_2abc5c;
        case 0x2abc60u: goto label_2abc60;
        case 0x2abc64u: goto label_2abc64;
        case 0x2abc68u: goto label_2abc68;
        case 0x2abc6cu: goto label_2abc6c;
        case 0x2abc70u: goto label_2abc70;
        case 0x2abc74u: goto label_2abc74;
        case 0x2abc78u: goto label_2abc78;
        case 0x2abc7cu: goto label_2abc7c;
        case 0x2abc80u: goto label_2abc80;
        case 0x2abc84u: goto label_2abc84;
        case 0x2abc88u: goto label_2abc88;
        case 0x2abc8cu: goto label_2abc8c;
        case 0x2abc90u: goto label_2abc90;
        case 0x2abc94u: goto label_2abc94;
        case 0x2abc98u: goto label_2abc98;
        case 0x2abc9cu: goto label_2abc9c;
        case 0x2abca0u: goto label_2abca0;
        case 0x2abca4u: goto label_2abca4;
        case 0x2abca8u: goto label_2abca8;
        case 0x2abcacu: goto label_2abcac;
        case 0x2abcb0u: goto label_2abcb0;
        case 0x2abcb4u: goto label_2abcb4;
        case 0x2abcb8u: goto label_2abcb8;
        case 0x2abcbcu: goto label_2abcbc;
        case 0x2abcc0u: goto label_2abcc0;
        case 0x2abcc4u: goto label_2abcc4;
        case 0x2abcc8u: goto label_2abcc8;
        case 0x2abcccu: goto label_2abccc;
        case 0x2abcd0u: goto label_2abcd0;
        case 0x2abcd4u: goto label_2abcd4;
        case 0x2abcd8u: goto label_2abcd8;
        case 0x2abcdcu: goto label_2abcdc;
        case 0x2abce0u: goto label_2abce0;
        case 0x2abce4u: goto label_2abce4;
        case 0x2abce8u: goto label_2abce8;
        case 0x2abcecu: goto label_2abcec;
        case 0x2abcf0u: goto label_2abcf0;
        case 0x2abcf4u: goto label_2abcf4;
        case 0x2abcf8u: goto label_2abcf8;
        case 0x2abcfcu: goto label_2abcfc;
        case 0x2abd00u: goto label_2abd00;
        case 0x2abd04u: goto label_2abd04;
        case 0x2abd08u: goto label_2abd08;
        case 0x2abd0cu: goto label_2abd0c;
        case 0x2abd10u: goto label_2abd10;
        case 0x2abd14u: goto label_2abd14;
        case 0x2abd18u: goto label_2abd18;
        case 0x2abd1cu: goto label_2abd1c;
        case 0x2abd20u: goto label_2abd20;
        case 0x2abd24u: goto label_2abd24;
        case 0x2abd28u: goto label_2abd28;
        case 0x2abd2cu: goto label_2abd2c;
        case 0x2abd30u: goto label_2abd30;
        case 0x2abd34u: goto label_2abd34;
        case 0x2abd38u: goto label_2abd38;
        case 0x2abd3cu: goto label_2abd3c;
        case 0x2abd40u: goto label_2abd40;
        case 0x2abd44u: goto label_2abd44;
        case 0x2abd48u: goto label_2abd48;
        case 0x2abd4cu: goto label_2abd4c;
        case 0x2abd50u: goto label_2abd50;
        case 0x2abd54u: goto label_2abd54;
        case 0x2abd58u: goto label_2abd58;
        case 0x2abd5cu: goto label_2abd5c;
        case 0x2abd60u: goto label_2abd60;
        case 0x2abd64u: goto label_2abd64;
        case 0x2abd68u: goto label_2abd68;
        case 0x2abd6cu: goto label_2abd6c;
        case 0x2abd70u: goto label_2abd70;
        case 0x2abd74u: goto label_2abd74;
        case 0x2abd78u: goto label_2abd78;
        case 0x2abd7cu: goto label_2abd7c;
        case 0x2abd80u: goto label_2abd80;
        case 0x2abd84u: goto label_2abd84;
        case 0x2abd88u: goto label_2abd88;
        case 0x2abd8cu: goto label_2abd8c;
        case 0x2abd90u: goto label_2abd90;
        case 0x2abd94u: goto label_2abd94;
        case 0x2abd98u: goto label_2abd98;
        case 0x2abd9cu: goto label_2abd9c;
        case 0x2abda0u: goto label_2abda0;
        case 0x2abda4u: goto label_2abda4;
        case 0x2abda8u: goto label_2abda8;
        case 0x2abdacu: goto label_2abdac;
        case 0x2abdb0u: goto label_2abdb0;
        case 0x2abdb4u: goto label_2abdb4;
        case 0x2abdb8u: goto label_2abdb8;
        case 0x2abdbcu: goto label_2abdbc;
        case 0x2abdc0u: goto label_2abdc0;
        case 0x2abdc4u: goto label_2abdc4;
        case 0x2abdc8u: goto label_2abdc8;
        case 0x2abdccu: goto label_2abdcc;
        case 0x2abdd0u: goto label_2abdd0;
        case 0x2abdd4u: goto label_2abdd4;
        case 0x2abdd8u: goto label_2abdd8;
        case 0x2abddcu: goto label_2abddc;
        case 0x2abde0u: goto label_2abde0;
        case 0x2abde4u: goto label_2abde4;
        case 0x2abde8u: goto label_2abde8;
        case 0x2abdecu: goto label_2abdec;
        case 0x2abdf0u: goto label_2abdf0;
        case 0x2abdf4u: goto label_2abdf4;
        case 0x2abdf8u: goto label_2abdf8;
        case 0x2abdfcu: goto label_2abdfc;
        case 0x2abe00u: goto label_2abe00;
        case 0x2abe04u: goto label_2abe04;
        case 0x2abe08u: goto label_2abe08;
        case 0x2abe0cu: goto label_2abe0c;
        case 0x2abe10u: goto label_2abe10;
        case 0x2abe14u: goto label_2abe14;
        case 0x2abe18u: goto label_2abe18;
        case 0x2abe1cu: goto label_2abe1c;
        case 0x2abe20u: goto label_2abe20;
        case 0x2abe24u: goto label_2abe24;
        case 0x2abe28u: goto label_2abe28;
        case 0x2abe2cu: goto label_2abe2c;
        case 0x2abe30u: goto label_2abe30;
        case 0x2abe34u: goto label_2abe34;
        case 0x2abe38u: goto label_2abe38;
        case 0x2abe3cu: goto label_2abe3c;
        case 0x2abe40u: goto label_2abe40;
        case 0x2abe44u: goto label_2abe44;
        case 0x2abe48u: goto label_2abe48;
        case 0x2abe4cu: goto label_2abe4c;
        case 0x2abe50u: goto label_2abe50;
        case 0x2abe54u: goto label_2abe54;
        case 0x2abe58u: goto label_2abe58;
        case 0x2abe5cu: goto label_2abe5c;
        case 0x2abe60u: goto label_2abe60;
        case 0x2abe64u: goto label_2abe64;
        case 0x2abe68u: goto label_2abe68;
        case 0x2abe6cu: goto label_2abe6c;
        case 0x2abe70u: goto label_2abe70;
        case 0x2abe74u: goto label_2abe74;
        case 0x2abe78u: goto label_2abe78;
        case 0x2abe7cu: goto label_2abe7c;
        case 0x2abe80u: goto label_2abe80;
        case 0x2abe84u: goto label_2abe84;
        case 0x2abe88u: goto label_2abe88;
        case 0x2abe8cu: goto label_2abe8c;
        case 0x2abe90u: goto label_2abe90;
        case 0x2abe94u: goto label_2abe94;
        case 0x2abe98u: goto label_2abe98;
        case 0x2abe9cu: goto label_2abe9c;
        case 0x2abea0u: goto label_2abea0;
        case 0x2abea4u: goto label_2abea4;
        case 0x2abea8u: goto label_2abea8;
        case 0x2abeacu: goto label_2abeac;
        case 0x2abeb0u: goto label_2abeb0;
        case 0x2abeb4u: goto label_2abeb4;
        case 0x2abeb8u: goto label_2abeb8;
        case 0x2abebcu: goto label_2abebc;
        case 0x2abec0u: goto label_2abec0;
        case 0x2abec4u: goto label_2abec4;
        case 0x2abec8u: goto label_2abec8;
        case 0x2abeccu: goto label_2abecc;
        case 0x2abed0u: goto label_2abed0;
        case 0x2abed4u: goto label_2abed4;
        case 0x2abed8u: goto label_2abed8;
        case 0x2abedcu: goto label_2abedc;
        case 0x2abee0u: goto label_2abee0;
        case 0x2abee4u: goto label_2abee4;
        case 0x2abee8u: goto label_2abee8;
        case 0x2abeecu: goto label_2abeec;
        default: break;
    }

    ctx->pc = 0x2ab7a0u;

label_2ab7a0:
    // 0x2ab7a0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2ab7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_2ab7a4:
    // 0x2ab7a4: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2ab7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_2ab7a8:
    // 0x2ab7a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ab7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2ab7ac:
    // 0x2ab7ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ab7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ab7b0:
    // 0x2ab7b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ab7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ab7b4:
    // 0x2ab7b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ab7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ab7b8:
    // 0x2ab7b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ab7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ab7bc:
    // 0x2ab7bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ab7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ab7c0:
    // 0x2ab7c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ab7c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7c4:
    // 0x2ab7c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ab7c8:
    // 0x2ab7c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ab7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7cc:
    // 0x2ab7cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ab7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7d0:
    // 0x2ab7d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ab7d4:
    // 0x2ab7d4: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x2ab7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2ab7d8:
    // 0x2ab7d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2ab7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ab7dc:
    // 0x2ab7dc: 0x14c3000d  bne         $a2, $v1, . + 4 + (0xD << 2)
label_2ab7e0:
    if (ctx->pc == 0x2AB7E0u) {
        ctx->pc = 0x2AB7E0u;
            // 0x2ab7e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2AB7E4u;
        goto label_2ab7e4;
    }
    ctx->pc = 0x2AB7DCu;
    {
        const bool branch_taken_0x2ab7dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AB7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7DCu;
            // 0x2ab7e0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7dc) {
            ctx->pc = 0x2AB814u;
            goto label_2ab814;
        }
    }
    ctx->pc = 0x2AB7E4u;
label_2ab7e4:
    // 0x2ab7e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ab7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ab7e8:
    // 0x2ab7e8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ab7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ab7ec:
    // 0x2ab7ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ab7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2ab7f0:
    // 0x2ab7f0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x2ab7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_2ab7f4:
    // 0x2ab7f4: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x2ab7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
label_2ab7f8:
    // 0x2ab7f8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2ab7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2ab7fc:
    // 0x2ab7fc: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x2ab7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_2ab800:
    // 0x2ab800: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ab800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ab804:
    // 0x2ab804: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x2ab804u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
label_2ab808:
    // 0x2ab808: 0xae860010  sw          $a2, 0x10($s4)
    ctx->pc = 0x2ab808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 6));
label_2ab80c:
    // 0x2ab80c: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_2ab810:
    if (ctx->pc == 0x2AB810u) {
        ctx->pc = 0x2AB810u;
            // 0x2ab810: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2AB814u;
        goto label_2ab814;
    }
    ctx->pc = 0x2AB80Cu;
    {
        const bool branch_taken_0x2ab80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB80Cu;
            // 0x2ab810: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab80c) {
            ctx->pc = 0x2ABEBCu;
            goto label_2abebc;
        }
    }
    ctx->pc = 0x2AB814u;
label_2ab814:
    // 0x2ab814: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2ab814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2ab818:
    // 0x2ab818: 0xc0ab288  jal         func_2ACA20
label_2ab81c:
    if (ctx->pc == 0x2AB81Cu) {
        ctx->pc = 0x2AB81Cu;
            // 0x2ab81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB820u;
        goto label_2ab820;
    }
    ctx->pc = 0x2AB818u;
    SET_GPR_U32(ctx, 31, 0x2AB820u);
    ctx->pc = 0x2AB81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB818u;
            // 0x2ab81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB820u; }
        if (ctx->pc != 0x2AB820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB820u; }
        if (ctx->pc != 0x2AB820u) { return; }
    }
    ctx->pc = 0x2AB820u;
label_2ab820:
    // 0x2ab820: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x2ab820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2ab824:
    // 0x2ab824: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2ab824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2ab828:
    // 0x2ab828: 0xc0ab288  jal         func_2ACA20
label_2ab82c:
    if (ctx->pc == 0x2AB82Cu) {
        ctx->pc = 0x2AB82Cu;
            // 0x2ab82c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB830u;
        goto label_2ab830;
    }
    ctx->pc = 0x2AB828u;
    SET_GPR_U32(ctx, 31, 0x2AB830u);
    ctx->pc = 0x2AB82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB828u;
            // 0x2ab82c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB830u; }
        if (ctx->pc != 0x2AB830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB830u; }
        if (ctx->pc != 0x2AB830u) { return; }
    }
    ctx->pc = 0x2AB830u;
label_2ab830:
    // 0x2ab830: 0x8fab01f0  lw          $t3, 0x1F0($sp)
    ctx->pc = 0x2ab830u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ab834:
    // 0x2ab834: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x2ab834u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ab838:
    // 0x2ab838: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ab838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2ab83c:
    // 0x2ab83c: 0x14b1023  subu        $v0, $t2, $t3
    ctx->pc = 0x2ab83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2ab840:
    // 0x2ab840: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2ab844:
    if (ctx->pc == 0x2AB844u) {
        ctx->pc = 0x2AB844u;
            // 0x2ab844: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x2AB848u;
        goto label_2ab848;
    }
    ctx->pc = 0x2AB840u;
    {
        const bool branch_taken_0x2ab840 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2AB844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB840u;
            // 0x2ab844: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab840) {
            ctx->pc = 0x2AB850u;
            goto label_2ab850;
        }
    }
    ctx->pc = 0x2AB848u;
label_2ab848:
    // 0x2ab848: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2ab848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_2ab84c:
    // 0x2ab84c: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x2ab84cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_2ab850:
    // 0x2ab850: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x2ab850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ab854:
    // 0x2ab854: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2ab858:
    if (ctx->pc == 0x2AB858u) {
        ctx->pc = 0x2AB858u;
            // 0x2ab858: 0x163102b  sltu        $v0, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x2AB85Cu;
        goto label_2ab85c;
    }
    ctx->pc = 0x2AB854u;
    {
        const bool branch_taken_0x2ab854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab854) {
            ctx->pc = 0x2AB858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB854u;
            // 0x2ab858: 0x163102b  sltu        $v0, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB88Cu;
            goto label_2ab88c;
        }
    }
    ctx->pc = 0x2AB85Cu;
label_2ab85c:
    // 0x2ab85c: 0x163082b  sltu        $at, $t3, $v1
    ctx->pc = 0x2ab85cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ab860:
    // 0x2ab860: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
label_2ab864:
    if (ctx->pc == 0x2AB864u) {
        ctx->pc = 0x2AB864u;
            // 0x2ab864: 0x460c0  sll         $t4, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x2AB868u;
        goto label_2ab868;
    }
    ctx->pc = 0x2AB860u;
    {
        const bool branch_taken_0x2ab860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab860) {
            ctx->pc = 0x2AB864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB860u;
            // 0x2ab864: 0x460c0  sll         $t4, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB8B8u;
            goto label_2ab8b8;
        }
    }
    ctx->pc = 0x2AB868u;
label_2ab868:
    // 0x2ab868: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2ab868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2ab86c:
    // 0x2ab86c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ab86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ab870:
    // 0x2ab870: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ab870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ab874:
    // 0x2ab874: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2ab878:
    if (ctx->pc == 0x2AB878u) {
        ctx->pc = 0x2AB878u;
            // 0x2ab878: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x2AB87Cu;
        goto label_2ab87c;
    }
    ctx->pc = 0x2AB874u;
    {
        const bool branch_taken_0x2ab874 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AB878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB874u;
            // 0x2ab878: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab874) {
            ctx->pc = 0x2AB884u;
            goto label_2ab884;
        }
    }
    ctx->pc = 0x2AB87Cu;
label_2ab87c:
    // 0x2ab87c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2ab87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_2ab880:
    // 0x2ab880: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2ab880u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2ab884:
    // 0x2ab884: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ab888:
    if (ctx->pc == 0x2AB888u) {
        ctx->pc = 0x2AB888u;
            // 0x2ab888: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x2AB88Cu;
        goto label_2ab88c;
    }
    ctx->pc = 0x2AB884u;
    {
        const bool branch_taken_0x2ab884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB884u;
            // 0x2ab888: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab884) {
            ctx->pc = 0x2AB8B4u;
            goto label_2ab8b4;
        }
    }
    ctx->pc = 0x2AB88Cu;
label_2ab88c:
    // 0x2ab88c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2ab890:
    if (ctx->pc == 0x2AB890u) {
        ctx->pc = 0x2AB894u;
        goto label_2ab894;
    }
    ctx->pc = 0x2AB88Cu;
    {
        const bool branch_taken_0x2ab88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab88c) {
            ctx->pc = 0x2AB8B4u;
            goto label_2ab8b4;
        }
    }
    ctx->pc = 0x2AB894u;
label_2ab894:
    // 0x2ab894: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2ab894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2ab898:
    // 0x2ab898: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2ab898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ab89c:
    // 0x2ab89c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ab89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ab8a0:
    // 0x2ab8a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2ab8a4:
    if (ctx->pc == 0x2AB8A4u) {
        ctx->pc = 0x2AB8A4u;
            // 0x2ab8a4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x2AB8A8u;
        goto label_2ab8a8;
    }
    ctx->pc = 0x2AB8A0u;
    {
        const bool branch_taken_0x2ab8a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AB8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8A0u;
            // 0x2ab8a4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8a0) {
            ctx->pc = 0x2AB8B0u;
            goto label_2ab8b0;
        }
    }
    ctx->pc = 0x2AB8A8u;
label_2ab8a8:
    // 0x2ab8a8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2ab8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_2ab8ac:
    // 0x2ab8ac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2ab8acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2ab8b0:
    // 0x2ab8b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ab8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ab8b4:
    // 0x2ab8b4: 0x460c0  sll         $t4, $a0, 3
    ctx->pc = 0x2ab8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2ab8b8:
    // 0x2ab8b8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2ab8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_2ab8bc:
    // 0x2ab8bc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2ab8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ab8c0:
    // 0x2ab8c0: 0x344f851f  ori         $t7, $v0, 0x851F
    ctx->pc = 0x2ab8c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_2ab8c4:
    // 0x2ab8c4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2ab8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2ab8c8:
    // 0x2ab8c8: 0x8fa80200  lw          $t0, 0x200($sp)
    ctx->pc = 0x2ab8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2ab8cc:
    // 0x2ab8cc: 0x8fa70204  lw          $a3, 0x204($sp)
    ctx->pc = 0x2ab8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_2ab8d0:
    // 0x2ab8d0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2ab8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ab8d4:
    // 0x2ab8d4: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x2ab8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2ab8d8:
    // 0x2ab8d8: 0x1e20018  mult        $zero, $t7, $v0
    ctx->pc = 0x2ab8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ab8dc:
    // 0x2ab8dc: 0x26fc2  srl         $t5, $v0, 31
    ctx->pc = 0x2ab8dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2ab8e0:
    // 0x2ab8e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab8e4:
    // 0x2ab8e4: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x2ab8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2ab8e8:
    // 0x2ab8e8: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x2ab8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2ab8ec:
    // 0x2ab8ec: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x2ab8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2ab8f0:
    // 0x2ab8f0: 0x4810  mfhi        $t1
    ctx->pc = 0x2ab8f0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2ab8f4:
    // 0x2ab8f4: 0x277c2  srl         $t6, $v0, 31
    ctx->pc = 0x2ab8f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2ab8f8:
    // 0x2ab8f8: 0x1e20018  mult        $zero, $t7, $v0
    ctx->pc = 0x2ab8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ab8fc:
    // 0x2ab8fc: 0x91143  sra         $v0, $t1, 5
    ctx->pc = 0x2ab8fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 5));
label_2ab900:
    // 0x2ab900: 0x4d4821  addu        $t1, $v0, $t5
    ctx->pc = 0x2ab900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_2ab904:
    // 0x2ab904: 0x6810  mfhi        $t5
    ctx->pc = 0x2ab904u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2ab908:
    // 0x2ab908: 0x1896023  subu        $t4, $t4, $t1
    ctx->pc = 0x2ab908u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_2ab90c:
    // 0x2ab90c: 0xd6943  sra         $t5, $t5, 5
    ctx->pc = 0x2ab90cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 5));
label_2ab910:
    // 0x2ab910: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2ab910u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
label_2ab914:
    // 0x2ab914: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x2ab914u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_2ab918:
    // 0x2ab918: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2ab91c:
    if (ctx->pc == 0x2AB91Cu) {
        ctx->pc = 0x2AB91Cu;
            // 0x2ab91c: 0x1ac8021  addu        $s0, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->pc = 0x2AB920u;
        goto label_2ab920;
    }
    ctx->pc = 0x2AB918u;
    {
        const bool branch_taken_0x2ab918 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AB91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB918u;
            // 0x2ab91c: 0x1ac8021  addu        $s0, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab918) {
            ctx->pc = 0x2AB928u;
            goto label_2ab928;
        }
    }
    ctx->pc = 0x2AB920u;
label_2ab920:
    // 0x2ab920: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2ab920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_2ab924:
    // 0x2ab924: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2ab924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2ab928:
    // 0x2ab928: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x2ab928u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2ab92c:
    // 0x2ab92c: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_2ab930:
    if (ctx->pc == 0x2AB930u) {
        ctx->pc = 0x2AB930u;
            // 0x2ab930: 0x86182b  sltu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->pc = 0x2AB934u;
        goto label_2ab934;
    }
    ctx->pc = 0x2AB92Cu;
    {
        const bool branch_taken_0x2ab92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab92c) {
            ctx->pc = 0x2AB930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB92Cu;
            // 0x2ab930: 0x86182b  sltu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB964u;
            goto label_2ab964;
        }
    }
    ctx->pc = 0x2AB934u;
label_2ab934:
    // 0x2ab934: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x2ab934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2ab938:
    // 0x2ab938: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
label_2ab93c:
    if (ctx->pc == 0x2AB93Cu) {
        ctx->pc = 0x2AB93Cu;
            // 0x2ab93c: 0x8e390014  lw          $t9, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2AB940u;
        goto label_2ab940;
    }
    ctx->pc = 0x2AB938u;
    {
        const bool branch_taken_0x2ab938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab938) {
            ctx->pc = 0x2AB93Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB938u;
            // 0x2ab93c: 0x8e390014  lw          $t9, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB990u;
            goto label_2ab990;
        }
    }
    ctx->pc = 0x2AB940u;
label_2ab940:
    // 0x2ab940: 0x8fac01dc  lw          $t4, 0x1DC($sp)
    ctx->pc = 0x2ab940u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ab944:
    // 0x2ab944: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x2ab944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2ab948:
    // 0x2ab948: 0x1836023  subu        $t4, $t4, $v1
    ctx->pc = 0x2ab948u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_2ab94c:
    // 0x2ab94c: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
label_2ab950:
    if (ctx->pc == 0x2AB950u) {
        ctx->pc = 0x2AB950u;
            // 0x2ab950: 0xc1883  sra         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 2));
        ctx->pc = 0x2AB954u;
        goto label_2ab954;
    }
    ctx->pc = 0x2AB94Cu;
    {
        const bool branch_taken_0x2ab94c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x2AB950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB94Cu;
            // 0x2ab950: 0xc1883  sra         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab94c) {
            ctx->pc = 0x2AB95Cu;
            goto label_2ab95c;
        }
    }
    ctx->pc = 0x2AB954u;
label_2ab954:
    // 0x2ab954: 0x25830003  addiu       $v1, $t4, 0x3
    ctx->pc = 0x2ab954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
label_2ab958:
    // 0x2ab958: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2ab958u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2ab95c:
    // 0x2ab95c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ab960:
    if (ctx->pc == 0x2AB960u) {
        ctx->pc = 0x2AB960u;
            // 0x2ab960: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2AB964u;
        goto label_2ab964;
    }
    ctx->pc = 0x2AB95Cu;
    {
        const bool branch_taken_0x2ab95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB95Cu;
            // 0x2ab960: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab95c) {
            ctx->pc = 0x2AB98Cu;
            goto label_2ab98c;
        }
    }
    ctx->pc = 0x2AB964u;
label_2ab964:
    // 0x2ab964: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2ab968:
    if (ctx->pc == 0x2AB968u) {
        ctx->pc = 0x2AB96Cu;
        goto label_2ab96c;
    }
    ctx->pc = 0x2AB964u;
    {
        const bool branch_taken_0x2ab964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab964) {
            ctx->pc = 0x2AB98Cu;
            goto label_2ab98c;
        }
    }
    ctx->pc = 0x2AB96Cu;
label_2ab96c:
    // 0x2ab96c: 0x8fac01dc  lw          $t4, 0x1DC($sp)
    ctx->pc = 0x2ab96cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ab970:
    // 0x2ab970: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x2ab970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2ab974:
    // 0x2ab974: 0x1836023  subu        $t4, $t4, $v1
    ctx->pc = 0x2ab974u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_2ab978:
    // 0x2ab978: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
label_2ab97c:
    if (ctx->pc == 0x2AB97Cu) {
        ctx->pc = 0x2AB97Cu;
            // 0x2ab97c: 0xc1883  sra         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 2));
        ctx->pc = 0x2AB980u;
        goto label_2ab980;
    }
    ctx->pc = 0x2AB978u;
    {
        const bool branch_taken_0x2ab978 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x2AB97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB978u;
            // 0x2ab97c: 0xc1883  sra         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab978) {
            ctx->pc = 0x2AB988u;
            goto label_2ab988;
        }
    }
    ctx->pc = 0x2AB980u;
label_2ab980:
    // 0x2ab980: 0x25830003  addiu       $v1, $t4, 0x3
    ctx->pc = 0x2ab980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
label_2ab984:
    // 0x2ab984: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2ab984u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2ab988:
    // 0x2ab988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ab988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ab98c:
    // 0x2ab98c: 0x8e390014  lw          $t9, 0x14($s1)
    ctx->pc = 0x2ab98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2ab990:
    // 0x2ab990: 0x3c0c51eb  lui         $t4, 0x51EB
    ctx->pc = 0x2ab990u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20971 << 16));
label_2ab994:
    // 0x2ab994: 0x8e380010  lw          $t8, 0x10($s1)
    ctx->pc = 0x2ab994u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ab998:
    // 0x2ab998: 0x2a8c0  sll         $s5, $v0, 3
    ctx->pc = 0x2ab998u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ab99c:
    // 0x2ab99c: 0x3596851f  ori         $s6, $t4, 0x851F
    ctx->pc = 0x2ab99cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)34079);
label_2ab9a0:
    // 0x2ab9a0: 0x8a6823  subu        $t5, $a0, $t2
    ctx->pc = 0x2ab9a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_2ab9a4:
    // 0x2ab9a4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2ab9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ab9a8:
    // 0x2ab9a8: 0xd6083  sra         $t4, $t5, 2
    ctx->pc = 0x2ab9a8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 2));
label_2ab9ac:
    // 0x2ab9ac: 0x338c023  subu        $t8, $t9, $t8
    ctx->pc = 0x2ab9acu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 24)));
label_2ab9b0:
    // 0x2ab9b0: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x2ab9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_2ab9b4:
    // 0x2ab9b4: 0x2d80018  mult        $zero, $s6, $t8
    ctx->pc = 0x2ab9b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ab9b8:
    // 0x2ab9b8: 0x18cfc2  srl         $t9, $t8, 31
    ctx->pc = 0x2ab9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 24), 31));
label_2ab9bc:
    // 0x2ab9bc: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x2ab9bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ab9c0:
    // 0x2ab9c0: 0x437823  subu        $t7, $v0, $v1
    ctx->pc = 0x2ab9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ab9c4:
    // 0x2ab9c4: 0xfbfc2  srl         $s7, $t7, 31
    ctx->pc = 0x2ab9c4u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
label_2ab9c8:
    // 0x2ab9c8: 0xc010  mfhi        $t8
    ctx->pc = 0x2ab9c8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2ab9cc:
    // 0x2ab9cc: 0x2cf0018  mult        $zero, $s6, $t7
    ctx->pc = 0x2ab9ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ab9d0:
    // 0x2ab9d0: 0x187943  sra         $t7, $t8, 5
    ctx->pc = 0x2ab9d0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 24), 5));
label_2ab9d4:
    // 0x2ab9d4: 0x1f9b021  addu        $s6, $t7, $t9
    ctx->pc = 0x2ab9d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_2ab9d8:
    // 0x2ab9d8: 0x7810  mfhi        $t7
    ctx->pc = 0x2ab9d8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2ab9dc:
    // 0x2ab9dc: 0xf7943  sra         $t7, $t7, 5
    ctx->pc = 0x2ab9dcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 5));
label_2ab9e0:
    // 0x2ab9e0: 0x1f77821  addu        $t7, $t7, $s7
    ctx->pc = 0x2ab9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
label_2ab9e4:
    // 0x2ab9e4: 0x2af7823  subu        $t7, $s5, $t7
    ctx->pc = 0x2ab9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
label_2ab9e8:
    // 0x2ab9e8: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
label_2ab9ec:
    if (ctx->pc == 0x2AB9ECu) {
        ctx->pc = 0x2AB9ECu;
            // 0x2ab9ec: 0x2cf7821  addu        $t7, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->pc = 0x2AB9F0u;
        goto label_2ab9f0;
    }
    ctx->pc = 0x2AB9E8u;
    {
        const bool branch_taken_0x2ab9e8 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x2AB9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9E8u;
            // 0x2ab9ec: 0x2cf7821  addu        $t7, $s6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab9e8) {
            ctx->pc = 0x2AB9F8u;
            goto label_2ab9f8;
        }
    }
    ctx->pc = 0x2AB9F0u;
label_2ab9f0:
    // 0x2ab9f0: 0x25ac0003  addiu       $t4, $t5, 0x3
    ctx->pc = 0x2ab9f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
label_2ab9f4:
    // 0x2ab9f4: 0xc6083  sra         $t4, $t4, 2
    ctx->pc = 0x2ab9f4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 2));
label_2ab9f8:
    // 0x2ab9f8: 0x8e682b  sltu        $t5, $a0, $t6
    ctx->pc = 0x2ab9f8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_2ab9fc:
    // 0x2ab9fc: 0x55a0000d  bnel        $t5, $zero, . + 4 + (0xD << 2)
label_2aba00:
    if (ctx->pc == 0x2ABA00u) {
        ctx->pc = 0x2ABA00u;
            // 0x2aba00: 0x14e682b  sltu        $t5, $t2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
        ctx->pc = 0x2ABA04u;
        goto label_2aba04;
    }
    ctx->pc = 0x2AB9FCu;
    {
        const bool branch_taken_0x2ab9fc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab9fc) {
            ctx->pc = 0x2ABA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB9FCu;
            // 0x2aba00: 0x14e682b  sltu        $t5, $t2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA34u;
            goto label_2aba34;
        }
    }
    ctx->pc = 0x2ABA04u;
label_2aba04:
    // 0x2aba04: 0x14e082b  sltu        $at, $t2, $t6
    ctx->pc = 0x2aba04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_2aba08:
    // 0x2aba08: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
label_2aba0c:
    if (ctx->pc == 0x2ABA0Cu) {
        ctx->pc = 0x2ABA0Cu;
            // 0x2aba0c: 0xc68c0  sll         $t5, $t4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
        ctx->pc = 0x2ABA10u;
        goto label_2aba10;
    }
    ctx->pc = 0x2ABA08u;
    {
        const bool branch_taken_0x2aba08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba08) {
            ctx->pc = 0x2ABA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA08u;
            // 0x2aba0c: 0xc68c0  sll         $t5, $t4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA60u;
            goto label_2aba60;
        }
    }
    ctx->pc = 0x2ABA10u;
label_2aba10:
    // 0x2aba10: 0x8e2e000c  lw          $t6, 0xC($s1)
    ctx->pc = 0x2aba10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2aba14:
    // 0x2aba14: 0x8e2d0004  lw          $t5, 0x4($s1)
    ctx->pc = 0x2aba14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2aba18:
    // 0x2aba18: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x2aba18u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_2aba1c:
    // 0x2aba1c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
label_2aba20:
    if (ctx->pc == 0x2ABA20u) {
        ctx->pc = 0x2ABA20u;
            // 0x2aba20: 0xe6883  sra         $t5, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 14), 2));
        ctx->pc = 0x2ABA24u;
        goto label_2aba24;
    }
    ctx->pc = 0x2ABA1Cu;
    {
        const bool branch_taken_0x2aba1c = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x2ABA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA1Cu;
            // 0x2aba20: 0xe6883  sra         $t5, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba1c) {
            ctx->pc = 0x2ABA2Cu;
            goto label_2aba2c;
        }
    }
    ctx->pc = 0x2ABA24u;
label_2aba24:
    // 0x2aba24: 0x25cd0003  addiu       $t5, $t6, 0x3
    ctx->pc = 0x2aba24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
label_2aba28:
    // 0x2aba28: 0xd6883  sra         $t5, $t5, 2
    ctx->pc = 0x2aba28u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 2));
label_2aba2c:
    // 0x2aba2c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2aba30:
    if (ctx->pc == 0x2ABA30u) {
        ctx->pc = 0x2ABA30u;
            // 0x2aba30: 0x18d6023  subu        $t4, $t4, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
        ctx->pc = 0x2ABA34u;
        goto label_2aba34;
    }
    ctx->pc = 0x2ABA2Cu;
    {
        const bool branch_taken_0x2aba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA2Cu;
            // 0x2aba30: 0x18d6023  subu        $t4, $t4, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba2c) {
            ctx->pc = 0x2ABA5Cu;
            goto label_2aba5c;
        }
    }
    ctx->pc = 0x2ABA34u;
label_2aba34:
    // 0x2aba34: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
label_2aba38:
    if (ctx->pc == 0x2ABA38u) {
        ctx->pc = 0x2ABA3Cu;
        goto label_2aba3c;
    }
    ctx->pc = 0x2ABA34u;
    {
        const bool branch_taken_0x2aba34 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aba34) {
            ctx->pc = 0x2ABA5Cu;
            goto label_2aba5c;
        }
    }
    ctx->pc = 0x2ABA3Cu;
label_2aba3c:
    // 0x2aba3c: 0x8e2e000c  lw          $t6, 0xC($s1)
    ctx->pc = 0x2aba3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2aba40:
    // 0x2aba40: 0x8e2d0004  lw          $t5, 0x4($s1)
    ctx->pc = 0x2aba40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2aba44:
    // 0x2aba44: 0x1cd7023  subu        $t6, $t6, $t5
    ctx->pc = 0x2aba44u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_2aba48:
    // 0x2aba48: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
label_2aba4c:
    if (ctx->pc == 0x2ABA4Cu) {
        ctx->pc = 0x2ABA4Cu;
            // 0x2aba4c: 0xe6883  sra         $t5, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 14), 2));
        ctx->pc = 0x2ABA50u;
        goto label_2aba50;
    }
    ctx->pc = 0x2ABA48u;
    {
        const bool branch_taken_0x2aba48 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x2ABA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA48u;
            // 0x2aba4c: 0xe6883  sra         $t5, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba48) {
            ctx->pc = 0x2ABA58u;
            goto label_2aba58;
        }
    }
    ctx->pc = 0x2ABA50u;
label_2aba50:
    // 0x2aba50: 0x25cd0003  addiu       $t5, $t6, 0x3
    ctx->pc = 0x2aba50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
label_2aba54:
    // 0x2aba54: 0xd6883  sra         $t5, $t5, 2
    ctx->pc = 0x2aba54u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 2));
label_2aba58:
    // 0x2aba58: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x2aba58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_2aba5c:
    // 0x2aba5c: 0xc68c0  sll         $t5, $t4, 3
    ctx->pc = 0x2aba5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_2aba60:
    // 0x2aba60: 0x8e6c0014  lw          $t4, 0x14($s3)
    ctx->pc = 0x2aba60u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2aba64:
    // 0x2aba64: 0x1b66823  subu        $t5, $t5, $s6
    ctx->pc = 0x2aba64u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 22)));
label_2aba68:
    // 0x2aba68: 0x12da821  addu        $s5, $t1, $t5
    ctx->pc = 0x2aba68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_2aba6c:
    // 0x2aba6c: 0x56ac0005  bnel        $s5, $t4, . + 4 + (0x5 << 2)
label_2aba70:
    if (ctx->pc == 0x2ABA70u) {
        ctx->pc = 0x2ABA70u;
            // 0x2aba70: 0x20f082b  sltu        $at, $s0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->pc = 0x2ABA74u;
        goto label_2aba74;
    }
    ctx->pc = 0x2ABA6Cu;
    {
        const bool branch_taken_0x2aba6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 12));
        if (branch_taken_0x2aba6c) {
            ctx->pc = 0x2ABA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA6Cu;
            // 0x2aba70: 0x20f082b  sltu        $at, $s0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABA84u;
            goto label_2aba84;
        }
    }
    ctx->pc = 0x2ABA74u;
label_2aba74:
    // 0x2aba74: 0xc0ab06c  jal         func_2AC1B0
label_2aba78:
    if (ctx->pc == 0x2ABA78u) {
        ctx->pc = 0x2ABA78u;
            // 0x2aba78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABA7Cu;
        goto label_2aba7c;
    }
    ctx->pc = 0x2ABA74u;
    SET_GPR_U32(ctx, 31, 0x2ABA7Cu);
    ctx->pc = 0x2ABA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA74u;
            // 0x2aba78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC1B0u;
    if (runtime->hasFunction(0x2AC1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA7Cu; }
        if (ctx->pc != 0x2ABA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC1B0_0x2ac1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABA7Cu; }
        if (ctx->pc != 0x2ABA7Cu) { return; }
    }
    ctx->pc = 0x2ABA7Cu;
label_2aba7c:
    // 0x2aba7c: 0x10000102  b           . + 4 + (0x102 << 2)
label_2aba80:
    if (ctx->pc == 0x2ABA80u) {
        ctx->pc = 0x2ABA84u;
        goto label_2aba84;
    }
    ctx->pc = 0x2ABA7Cu;
    {
        const bool branch_taken_0x2aba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba7c) {
            ctx->pc = 0x2ABE88u;
            goto label_2abe88;
        }
    }
    ctx->pc = 0x2ABA84u;
label_2aba84:
    // 0x2aba84: 0x50200080  beql        $at, $zero, . + 4 + (0x80 << 2)
label_2aba88:
    if (ctx->pc == 0x2ABA88u) {
        ctx->pc = 0x2ABA88u;
            // 0x2aba88: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->pc = 0x2ABA8Cu;
        goto label_2aba8c;
    }
    ctx->pc = 0x2ABA84u;
    {
        const bool branch_taken_0x2aba84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aba84) {
            ctx->pc = 0x2ABA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABA84u;
            // 0x2aba88: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABC88u;
            goto label_2abc88;
        }
    }
    ctx->pc = 0x2ABA8Cu;
label_2aba8c:
    // 0x2aba8c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2aba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2aba90:
    // 0x2aba90: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2aba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2aba94:
    // 0x2aba94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2aba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2aba98:
    // 0x2aba98: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2aba98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2aba9c:
    // 0x2aba9c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x2aba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_2abaa0:
    // 0x2abaa0: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2abaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_2abaa4:
    // 0x2abaa4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2abaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2abaa8:
    // 0x2abaa8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2abaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2abaac:
    // 0x2abaac: 0xafa60154  sw          $a2, 0x154($sp)
    ctx->pc = 0x2abaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 6));
label_2abab0:
    // 0x2abab0: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x2abab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
label_2abab4:
    // 0x2abab4: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2abab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_2abab8:
    // 0x2abab8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2abab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ababc:
    // 0x2ababc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ababcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2abac0:
    // 0x2abac0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2abac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2abac4:
    // 0x2abac4: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x2abac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
label_2abac8:
    // 0x2abac8: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x2abac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_2abacc:
    // 0x2abacc: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x2abaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_2abad0:
    // 0x2abad0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2abad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2abad4:
    // 0x2abad4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2abad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2abad8:
    // 0x2abad8: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x2abad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_2abadc:
    // 0x2abadc: 0xafa60174  sw          $a2, 0x174($sp)
    ctx->pc = 0x2abadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 6));
label_2abae0:
    // 0x2abae0: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x2abae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_2abae4:
    // 0x2abae4: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2abae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_2abae8:
    // 0x2abae8: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x2abae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2abaec:
    // 0x2abaec: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x2abaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_2abaf0:
    // 0x2abaf0: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x2abaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_2abaf4:
    // 0x2abaf4: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x2abaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_2abaf8:
    // 0x2abaf8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2abaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2abafc:
    // 0x2abafc: 0xafab0190  sw          $t3, 0x190($sp)
    ctx->pc = 0x2abafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 11));
label_2abb00:
    // 0x2abb00: 0xafa801a0  sw          $t0, 0x1A0($sp)
    ctx->pc = 0x2abb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 8));
label_2abb04:
    // 0x2abb04: 0xafa701a4  sw          $a3, 0x1A4($sp)
    ctx->pc = 0x2abb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 7));
label_2abb08:
    // 0x2abb08: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x2abb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
label_2abb0c:
    // 0x2abb0c: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x2abb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
label_2abb10:
    // 0x2abb10: 0xc0ab020  jal         func_2AC080
label_2abb14:
    if (ctx->pc == 0x2ABB14u) {
        ctx->pc = 0x2ABB14u;
            // 0x2abb14: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
        ctx->pc = 0x2ABB18u;
        goto label_2abb18;
    }
    ctx->pc = 0x2ABB10u;
    SET_GPR_U32(ctx, 31, 0x2ABB18u);
    ctx->pc = 0x2ABB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB10u;
            // 0x2abb14: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC080u;
    if (runtime->hasFunction(0x2AC080u)) {
        auto targetFn = runtime->lookupFunction(0x2AC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB18u; }
        if (ctx->pc != 0x2ABB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC080_0x2ac080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB18u; }
        if (ctx->pc != 0x2ABB18u) { return; }
    }
    ctx->pc = 0x2ABB18u;
label_2abb18:
    // 0x2abb18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2abb1c:
    if (ctx->pc == 0x2ABB1Cu) {
        ctx->pc = 0x2ABB20u;
        goto label_2abb20;
    }
    ctx->pc = 0x2ABB18u;
    {
        const bool branch_taken_0x2abb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb18) {
            ctx->pc = 0x2ABB68u;
            goto label_2abb68;
        }
    }
    ctx->pc = 0x2ABB20u;
label_2abb20:
    // 0x2abb20: 0xc0ab04c  jal         func_2AC130
label_2abb24:
    if (ctx->pc == 0x2ABB24u) {
        ctx->pc = 0x2ABB24u;
            // 0x2abb24: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2ABB28u;
        goto label_2abb28;
    }
    ctx->pc = 0x2ABB20u;
    SET_GPR_U32(ctx, 31, 0x2ABB28u);
    ctx->pc = 0x2ABB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB20u;
            // 0x2abb24: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC130u;
    if (runtime->hasFunction(0x2AC130u)) {
        auto targetFn = runtime->lookupFunction(0x2AC130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB28u; }
        if (ctx->pc != 0x2ABB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC130_0x2ac130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB28u; }
        if (ctx->pc != 0x2ABB28u) { return; }
    }
    ctx->pc = 0x2ABB28u;
label_2abb28:
    // 0x2abb28: 0xc0ab048  jal         func_2AC120
label_2abb2c:
    if (ctx->pc == 0x2ABB2Cu) {
        ctx->pc = 0x2ABB2Cu;
            // 0x2abb2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB30u;
        goto label_2abb30;
    }
    ctx->pc = 0x2ABB28u;
    SET_GPR_U32(ctx, 31, 0x2ABB30u);
    ctx->pc = 0x2ABB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB28u;
            // 0x2abb2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC120u;
    if (runtime->hasFunction(0x2AC120u)) {
        auto targetFn = runtime->lookupFunction(0x2AC120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB30u; }
        if (ctx->pc != 0x2ABB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC120_0x2ac120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB30u; }
        if (ctx->pc != 0x2ABB30u) { return; }
    }
    ctx->pc = 0x2ABB30u;
label_2abb30:
    // 0x2abb30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2abb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abb34:
    // 0x2abb34: 0xc0ab04c  jal         func_2AC130
label_2abb38:
    if (ctx->pc == 0x2ABB38u) {
        ctx->pc = 0x2ABB38u;
            // 0x2abb38: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2ABB3Cu;
        goto label_2abb3c;
    }
    ctx->pc = 0x2ABB34u;
    SET_GPR_U32(ctx, 31, 0x2ABB3Cu);
    ctx->pc = 0x2ABB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB34u;
            // 0x2abb38: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC130u;
    if (runtime->hasFunction(0x2AC130u)) {
        auto targetFn = runtime->lookupFunction(0x2AC130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB3Cu; }
        if (ctx->pc != 0x2ABB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC130_0x2ac130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB3Cu; }
        if (ctx->pc != 0x2ABB3Cu) { return; }
    }
    ctx->pc = 0x2ABB3Cu;
label_2abb3c:
    // 0x2abb3c: 0xc0ab048  jal         func_2AC120
label_2abb40:
    if (ctx->pc == 0x2ABB40u) {
        ctx->pc = 0x2ABB40u;
            // 0x2abb40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB44u;
        goto label_2abb44;
    }
    ctx->pc = 0x2ABB3Cu;
    SET_GPR_U32(ctx, 31, 0x2ABB44u);
    ctx->pc = 0x2ABB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB3Cu;
            // 0x2abb40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC120u;
    if (runtime->hasFunction(0x2AC120u)) {
        auto targetFn = runtime->lookupFunction(0x2AC120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB44u; }
        if (ctx->pc != 0x2ABB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC120_0x2ac120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB44u; }
        if (ctx->pc != 0x2ABB44u) { return; }
    }
    ctx->pc = 0x2ABB44u;
label_2abb44:
    // 0x2abb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2abb48:
    // 0x2abb48: 0xc0ab028  jal         func_2AC0A0
label_2abb4c:
    if (ctx->pc == 0x2ABB4Cu) {
        ctx->pc = 0x2ABB4Cu;
            // 0x2abb4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB50u;
        goto label_2abb50;
    }
    ctx->pc = 0x2ABB48u;
    SET_GPR_U32(ctx, 31, 0x2ABB50u);
    ctx->pc = 0x2ABB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB48u;
            // 0x2abb4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC0A0u;
    if (runtime->hasFunction(0x2AC0A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB50u; }
        if (ctx->pc != 0x2ABB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC0A0_0x2ac0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB50u; }
        if (ctx->pc != 0x2ABB50u) { return; }
    }
    ctx->pc = 0x2ABB50u;
label_2abb50:
    // 0x2abb50: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2abb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2abb54:
    // 0x2abb54: 0xc0ab020  jal         func_2AC080
label_2abb58:
    if (ctx->pc == 0x2ABB58u) {
        ctx->pc = 0x2ABB58u;
            // 0x2abb58: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2ABB5Cu;
        goto label_2abb5c;
    }
    ctx->pc = 0x2ABB54u;
    SET_GPR_U32(ctx, 31, 0x2ABB5Cu);
    ctx->pc = 0x2ABB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB54u;
            // 0x2abb58: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC080u;
    if (runtime->hasFunction(0x2AC080u)) {
        auto targetFn = runtime->lookupFunction(0x2AC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB5Cu; }
        if (ctx->pc != 0x2ABB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC080_0x2ac080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB5Cu; }
        if (ctx->pc != 0x2ABB5Cu) { return; }
    }
    ctx->pc = 0x2ABB5Cu;
label_2abb5c:
    // 0x2abb5c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2abb60:
    if (ctx->pc == 0x2ABB60u) {
        ctx->pc = 0x2ABB64u;
        goto label_2abb64;
    }
    ctx->pc = 0x2ABB5Cu;
    {
        const bool branch_taken_0x2abb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abb5c) {
            ctx->pc = 0x2ABB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abb20;
        }
    }
    ctx->pc = 0x2ABB64u;
label_2abb64:
    // 0x2abb64: 0x0  nop
    ctx->pc = 0x2abb64u;
    // NOP
label_2abb68:
    // 0x2abb68: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2abb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2abb6c:
    // 0x2abb6c: 0xc0aa504  jal         func_2A9410
label_2abb70:
    if (ctx->pc == 0x2ABB70u) {
        ctx->pc = 0x2ABB70u;
            // 0x2abb70: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2ABB74u;
        goto label_2abb74;
    }
    ctx->pc = 0x2ABB6Cu;
    SET_GPR_U32(ctx, 31, 0x2ABB74u);
    ctx->pc = 0x2ABB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABB6Cu;
            // 0x2abb70: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB74u; }
        if (ctx->pc != 0x2ABB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABB74u; }
        if (ctx->pc != 0x2ABB74u) { return; }
    }
    ctx->pc = 0x2ABB74u;
label_2abb74:
    // 0x2abb74: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2abb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2abb78:
    // 0x2abb78: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x2abb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_2abb7c:
    // 0x2abb7c: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x2abb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_2abb80:
    // 0x2abb80: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x2abb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_2abb84:
    // 0x2abb84: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x2abb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
label_2abb88:
    // 0x2abb88: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x2abb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_2abb8c:
    // 0x2abb8c: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x2abb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_2abb90:
    // 0x2abb90: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2abb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2abb94:
    // 0x2abb94: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x2abb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2abb98:
    // 0x2abb98: 0xafa401dc  sw          $a0, 0x1DC($sp)
    ctx->pc = 0x2abb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 4));
label_2abb9c:
    // 0x2abb9c: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x2abb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_2abba0:
    // 0x2abba0: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x2abba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_2abba4:
    // 0x2abba4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2abba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2abba8:
    // 0x2abba8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2abba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2abbac:
    // 0x2abbac: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2abbacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2abbb0:
    // 0x2abbb0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x2abbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2abbb4:
    // 0x2abbb4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2abbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2abbb8:
    // 0x2abbb8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_2abbbc:
    if (ctx->pc == 0x2ABBBCu) {
        ctx->pc = 0x2ABBC0u;
        goto label_2abbc0;
    }
    ctx->pc = 0x2ABBB8u;
    {
        const bool branch_taken_0x2abbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2abbb8) {
            ctx->pc = 0x2ABC30u;
            goto label_2abc30;
        }
    }
    ctx->pc = 0x2ABBC0u;
label_2abbc0:
    // 0x2abbc0: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x2abbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2abbc4:
    // 0x2abbc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2abbc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2abbc8:
    // 0x2abbc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2abbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2abbcc:
    // 0x2abbcc: 0x320f809  jalr        $t9
label_2abbd0:
    if (ctx->pc == 0x2ABBD0u) {
        ctx->pc = 0x2ABBD0u;
            // 0x2abbd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2ABBD4u;
        goto label_2abbd4;
    }
    ctx->pc = 0x2ABBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2ABBD4u);
        ctx->pc = 0x2ABBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBCCu;
            // 0x2abbd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ABBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ABBD4u; }
            if (ctx->pc != 0x2ABBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2ABBD4u;
label_2abbd4:
    // 0x2abbd4: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x2abbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2abbd8:
    // 0x2abbd8: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x2abbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_2abbdc:
    // 0x2abbdc: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2abbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_2abbe0:
    // 0x2abbe0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2abbe4:
    if (ctx->pc == 0x2ABBE4u) {
        ctx->pc = 0x2ABBE4u;
            // 0x2abbe4: 0xafa30200  sw          $v1, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
        ctx->pc = 0x2ABBE8u;
        goto label_2abbe8;
    }
    ctx->pc = 0x2ABBE0u;
    {
        const bool branch_taken_0x2abbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBE0u;
            // 0x2abbe4: 0xafa30200  sw          $v1, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbe0) {
            ctx->pc = 0x2ABC20u;
            goto label_2abc20;
        }
    }
    ctx->pc = 0x2ABBE8u;
label_2abbe8:
    // 0x2abbe8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2abbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2abbec:
    // 0x2abbec: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x2abbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_2abbf0:
    // 0x2abbf0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2abbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2abbf4:
    // 0x2abbf4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2abbf8:
    if (ctx->pc == 0x2ABBF8u) {
        ctx->pc = 0x2ABBF8u;
            // 0x2abbf8: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->pc = 0x2ABBFCu;
        goto label_2abbfc;
    }
    ctx->pc = 0x2ABBF4u;
    {
        const bool branch_taken_0x2abbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABBF4u;
            // 0x2abbf8: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbf4) {
            ctx->pc = 0x2ABC08u;
            goto label_2abc08;
        }
    }
    ctx->pc = 0x2ABBFCu;
label_2abbfc:
    // 0x2abbfc: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x2abbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_2abc00:
    // 0x2abc00: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2abc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_2abc04:
    // 0x2abc04: 0x0  nop
    ctx->pc = 0x2abc04u;
    // NOP
label_2abc08:
    // 0x2abc08: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2abc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2abc0c:
    // 0x2abc0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2abc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2abc10:
    // 0x2abc10: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x2abc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_2abc14:
    // 0x2abc14: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2abc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_2abc18:
    // 0x2abc18: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x2abc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_2abc1c:
    // 0x2abc1c: 0x0  nop
    ctx->pc = 0x2abc1cu;
    // NOP
label_2abc20:
    // 0x2abc20: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x2abc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2abc24:
    // 0x2abc24: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2abc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2abc28:
    // 0x2abc28: 0x5462ffe6  bnel        $v1, $v0, . + 4 + (-0x1A << 2)
label_2abc2c:
    if (ctx->pc == 0x2ABC2Cu) {
        ctx->pc = 0x2ABC2Cu;
            // 0x2abc2c: 0x8fa40200  lw          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x2ABC30u;
        goto label_2abc30;
    }
    ctx->pc = 0x2ABC28u;
    {
        const bool branch_taken_0x2abc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2abc28) {
            ctx->pc = 0x2ABC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC28u;
            // 0x2abc2c: 0x8fa40200  lw          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abbc4;
        }
    }
    ctx->pc = 0x2ABC30u;
label_2abc30:
    // 0x2abc30: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2abc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2abc34:
    // 0x2abc34: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2abc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2abc38:
    // 0x2abc38: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2abc38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2abc3c:
    // 0x2abc3c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2abc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2abc40:
    // 0x2abc40: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x2abc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2abc44:
    // 0x2abc44: 0x14400090  bnez        $v0, . + 4 + (0x90 << 2)
label_2abc48:
    if (ctx->pc == 0x2ABC48u) {
        ctx->pc = 0x2ABC4Cu;
        goto label_2abc4c;
    }
    ctx->pc = 0x2ABC44u;
    {
        const bool branch_taken_0x2abc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abc44) {
            ctx->pc = 0x2ABE88u;
            goto label_2abe88;
        }
    }
    ctx->pc = 0x2ABC4Cu;
label_2abc4c:
    // 0x2abc4c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2abc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2abc50:
    // 0x2abc50: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2abc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2abc54:
    // 0x2abc54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2abc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2abc58:
    // 0x2abc58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2abc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2abc5c:
    // 0x2abc5c: 0xc0400a8  jal         func_1002A0
label_2abc60:
    if (ctx->pc == 0x2ABC60u) {
        ctx->pc = 0x2ABC60u;
            // 0x2abc60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2ABC64u;
        goto label_2abc64;
    }
    ctx->pc = 0x2ABC5Cu;
    SET_GPR_U32(ctx, 31, 0x2ABC64u);
    ctx->pc = 0x2ABC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC5Cu;
            // 0x2abc60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC64u; }
        if (ctx->pc != 0x2ABC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC64u; }
        if (ctx->pc != 0x2ABC64u) { return; }
    }
    ctx->pc = 0x2ABC64u;
label_2abc64:
    // 0x2abc64: 0xc0ab314  jal         func_2ACC50
label_2abc68:
    if (ctx->pc == 0x2ABC68u) {
        ctx->pc = 0x2ABC68u;
            // 0x2abc68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC6Cu;
        goto label_2abc6c;
    }
    ctx->pc = 0x2ABC64u;
    SET_GPR_U32(ctx, 31, 0x2ABC6Cu);
    ctx->pc = 0x2ABC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC64u;
            // 0x2abc68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC50u;
    if (runtime->hasFunction(0x2ACC50u)) {
        auto targetFn = runtime->lookupFunction(0x2ACC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC6Cu; }
        if (ctx->pc != 0x2ABC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACC50_0x2acc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABC6Cu; }
        if (ctx->pc != 0x2ABC6Cu) { return; }
    }
    ctx->pc = 0x2ABC6Cu;
label_2abc6c:
    // 0x2abc6c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2abc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2abc70:
    // 0x2abc70: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2abc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2abc74:
    // 0x2abc74: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x2abc74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2abc78:
    // 0x2abc78: 0x1020fff4  beqz        $at, . + 4 + (-0xC << 2)
label_2abc7c:
    if (ctx->pc == 0x2ABC7Cu) {
        ctx->pc = 0x2ABC7Cu;
            // 0x2abc7c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2ABC80u;
        goto label_2abc80;
    }
    ctx->pc = 0x2ABC78u;
    {
        const bool branch_taken_0x2abc78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABC78u;
            // 0x2abc7c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc78) {
            ctx->pc = 0x2ABC4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abc4c;
        }
    }
    ctx->pc = 0x2ABC80u;
label_2abc80:
    // 0x2abc80: 0x10000081  b           . + 4 + (0x81 << 2)
label_2abc84:
    if (ctx->pc == 0x2ABC84u) {
        ctx->pc = 0x2ABC88u;
        goto label_2abc88;
    }
    ctx->pc = 0x2ABC80u;
    {
        const bool branch_taken_0x2abc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abc80) {
            ctx->pc = 0x2ABE88u;
            goto label_2abe88;
        }
    }
    ctx->pc = 0x2ABC88u;
label_2abc88:
    // 0x2abc88: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2abc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2abc8c:
    // 0x2abc8c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2abc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2abc90:
    // 0x2abc90: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x2abc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
label_2abc94:
    // 0x2abc94: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2abc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_2abc98:
    // 0x2abc98: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2abc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_2abc9c:
    // 0x2abc9c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2abc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2abca0:
    // 0x2abca0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2abca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2abca4:
    // 0x2abca4: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x2abca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2abca8:
    // 0x2abca8: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x2abca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
label_2abcac:
    // 0x2abcac: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2abcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_2abcb0:
    // 0x2abcb0: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x2abcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_2abcb4:
    // 0x2abcb4: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x2abcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2abcb8:
    // 0x2abcb8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2abcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2abcbc:
    // 0x2abcbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2abcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2abcc0:
    // 0x2abcc0: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2abcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_2abcc4:
    // 0x2abcc4: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2abcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_2abcc8:
    // 0x2abcc8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2abcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_2abccc:
    // 0x2abccc: 0x8fa601dc  lw          $a2, 0x1DC($sp)
    ctx->pc = 0x2abcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2abcd0:
    // 0x2abcd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2abcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2abcd4:
    // 0x2abcd4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2abcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2abcd8:
    // 0x2abcd8: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x2abcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
label_2abcdc:
    // 0x2abcdc: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x2abcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_2abce0:
    // 0x2abce0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2abce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_2abce4:
    // 0x2abce4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2abce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2abce8:
    // 0x2abce8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2abce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2abcec:
    // 0x2abcec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2abcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2abcf0:
    // 0x2abcf0: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x2abcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_2abcf4:
    // 0x2abcf4: 0xafaa00d0  sw          $t2, 0xD0($sp)
    ctx->pc = 0x2abcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 10));
label_2abcf8:
    // 0x2abcf8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2abcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2abcfc:
    // 0x2abcfc: 0xafa60118  sw          $a2, 0x118($sp)
    ctx->pc = 0x2abcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
label_2abd00:
    // 0x2abd00: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x2abd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_2abd04:
    // 0x2abd04: 0xc0ab020  jal         func_2AC080
label_2abd08:
    if (ctx->pc == 0x2ABD08u) {
        ctx->pc = 0x2ABD08u;
            // 0x2abd08: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->pc = 0x2ABD0Cu;
        goto label_2abd0c;
    }
    ctx->pc = 0x2ABD04u;
    SET_GPR_U32(ctx, 31, 0x2ABD0Cu);
    ctx->pc = 0x2ABD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD04u;
            // 0x2abd08: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC080u;
    if (runtime->hasFunction(0x2AC080u)) {
        auto targetFn = runtime->lookupFunction(0x2AC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD0Cu; }
        if (ctx->pc != 0x2ABD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC080_0x2ac080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD0Cu; }
        if (ctx->pc != 0x2ABD0Cu) { return; }
    }
    ctx->pc = 0x2ABD0Cu;
label_2abd0c:
    // 0x2abd0c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2abd10:
    if (ctx->pc == 0x2ABD10u) {
        ctx->pc = 0x2ABD14u;
        goto label_2abd14;
    }
    ctx->pc = 0x2ABD0Cu;
    {
        const bool branch_taken_0x2abd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abd0c) {
            ctx->pc = 0x2ABD58u;
            goto label_2abd58;
        }
    }
    ctx->pc = 0x2ABD14u;
label_2abd14:
    // 0x2abd14: 0xc0ab048  jal         func_2AC120
label_2abd18:
    if (ctx->pc == 0x2ABD18u) {
        ctx->pc = 0x2ABD18u;
            // 0x2abd18: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2ABD1Cu;
        goto label_2abd1c;
    }
    ctx->pc = 0x2ABD14u;
    SET_GPR_U32(ctx, 31, 0x2ABD1Cu);
    ctx->pc = 0x2ABD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD14u;
            // 0x2abd18: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC120u;
    if (runtime->hasFunction(0x2AC120u)) {
        auto targetFn = runtime->lookupFunction(0x2AC120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD1Cu; }
        if (ctx->pc != 0x2ABD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC120_0x2ac120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD1Cu; }
        if (ctx->pc != 0x2ABD1Cu) { return; }
    }
    ctx->pc = 0x2ABD1Cu;
label_2abd1c:
    // 0x2abd1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2abd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abd20:
    // 0x2abd20: 0xc0ab048  jal         func_2AC120
label_2abd24:
    if (ctx->pc == 0x2ABD24u) {
        ctx->pc = 0x2ABD24u;
            // 0x2abd24: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2ABD28u;
        goto label_2abd28;
    }
    ctx->pc = 0x2ABD20u;
    SET_GPR_U32(ctx, 31, 0x2ABD28u);
    ctx->pc = 0x2ABD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD20u;
            // 0x2abd24: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC120u;
    if (runtime->hasFunction(0x2AC120u)) {
        auto targetFn = runtime->lookupFunction(0x2AC120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD28u; }
        if (ctx->pc != 0x2ABD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC120_0x2ac120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD28u; }
        if (ctx->pc != 0x2ABD28u) { return; }
    }
    ctx->pc = 0x2ABD28u;
label_2abd28:
    // 0x2abd28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2abd2c:
    // 0x2abd2c: 0xc0ab028  jal         func_2AC0A0
label_2abd30:
    if (ctx->pc == 0x2ABD30u) {
        ctx->pc = 0x2ABD30u;
            // 0x2abd30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD34u;
        goto label_2abd34;
    }
    ctx->pc = 0x2ABD2Cu;
    SET_GPR_U32(ctx, 31, 0x2ABD34u);
    ctx->pc = 0x2ABD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD2Cu;
            // 0x2abd30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC0A0u;
    if (runtime->hasFunction(0x2AC0A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD34u; }
        if (ctx->pc != 0x2ABD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC0A0_0x2ac0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD34u; }
        if (ctx->pc != 0x2ABD34u) { return; }
    }
    ctx->pc = 0x2ABD34u;
label_2abd34:
    // 0x2abd34: 0xc0aa4ec  jal         func_2A93B0
label_2abd38:
    if (ctx->pc == 0x2ABD38u) {
        ctx->pc = 0x2ABD38u;
            // 0x2abd38: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2ABD3Cu;
        goto label_2abd3c;
    }
    ctx->pc = 0x2ABD34u;
    SET_GPR_U32(ctx, 31, 0x2ABD3Cu);
    ctx->pc = 0x2ABD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD34u;
            // 0x2abd38: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A93B0u;
    if (runtime->hasFunction(0x2A93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD3Cu; }
        if (ctx->pc != 0x2ABD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A93B0_0x2a93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD3Cu; }
        if (ctx->pc != 0x2ABD3Cu) { return; }
    }
    ctx->pc = 0x2ABD3Cu;
label_2abd3c:
    // 0x2abd3c: 0xc0aa4ec  jal         func_2A93B0
label_2abd40:
    if (ctx->pc == 0x2ABD40u) {
        ctx->pc = 0x2ABD40u;
            // 0x2abd40: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2ABD44u;
        goto label_2abd44;
    }
    ctx->pc = 0x2ABD3Cu;
    SET_GPR_U32(ctx, 31, 0x2ABD44u);
    ctx->pc = 0x2ABD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD3Cu;
            // 0x2abd40: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A93B0u;
    if (runtime->hasFunction(0x2A93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD44u; }
        if (ctx->pc != 0x2ABD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A93B0_0x2a93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD44u; }
        if (ctx->pc != 0x2ABD44u) { return; }
    }
    ctx->pc = 0x2ABD44u;
label_2abd44:
    // 0x2abd44: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2abd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2abd48:
    // 0x2abd48: 0xc0ab020  jal         func_2AC080
label_2abd4c:
    if (ctx->pc == 0x2ABD4Cu) {
        ctx->pc = 0x2ABD4Cu;
            // 0x2abd4c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2ABD50u;
        goto label_2abd50;
    }
    ctx->pc = 0x2ABD48u;
    SET_GPR_U32(ctx, 31, 0x2ABD50u);
    ctx->pc = 0x2ABD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD48u;
            // 0x2abd4c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC080u;
    if (runtime->hasFunction(0x2AC080u)) {
        auto targetFn = runtime->lookupFunction(0x2AC080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD50u; }
        if (ctx->pc != 0x2ABD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC080_0x2ac080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD50u; }
        if (ctx->pc != 0x2ABD50u) { return; }
    }
    ctx->pc = 0x2ABD50u;
label_2abd50:
    // 0x2abd50: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2abd54:
    if (ctx->pc == 0x2ABD54u) {
        ctx->pc = 0x2ABD58u;
        goto label_2abd58;
    }
    ctx->pc = 0x2ABD50u;
    {
        const bool branch_taken_0x2abd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abd50) {
            ctx->pc = 0x2ABD14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abd14;
        }
    }
    ctx->pc = 0x2ABD58u;
label_2abd58:
    // 0x2abd58: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2abd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2abd5c:
    // 0x2abd5c: 0xc0aa504  jal         func_2A9410
label_2abd60:
    if (ctx->pc == 0x2ABD60u) {
        ctx->pc = 0x2ABD60u;
            // 0x2abd60: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2ABD64u;
        goto label_2abd64;
    }
    ctx->pc = 0x2ABD5Cu;
    SET_GPR_U32(ctx, 31, 0x2ABD64u);
    ctx->pc = 0x2ABD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD5Cu;
            // 0x2abd60: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD64u; }
        if (ctx->pc != 0x2ABD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD64u; }
        if (ctx->pc != 0x2ABD64u) { return; }
    }
    ctx->pc = 0x2ABD64u;
label_2abd64:
    // 0x2abd64: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2abd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2abd68:
    // 0x2abd68: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2abd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2abd6c:
    // 0x2abd6c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x2abd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_2abd70:
    // 0x2abd70: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x2abd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_2abd74:
    // 0x2abd74: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x2abd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_2abd78:
    // 0x2abd78: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x2abd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
label_2abd7c:
    // 0x2abd7c: 0xafa301f4  sw          $v1, 0x1F4($sp)
    ctx->pc = 0x2abd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 3));
label_2abd80:
    // 0x2abd80: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x2abd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_2abd84:
    // 0x2abd84: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x2abd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_2abd88:
    // 0x2abd88: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x2abd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2abd8c:
    // 0x2abd8c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2abd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2abd90:
    // 0x2abd90: 0xafa401fc  sw          $a0, 0x1FC($sp)
    ctx->pc = 0x2abd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 4));
label_2abd94:
    // 0x2abd94: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_2abd98:
    if (ctx->pc == 0x2ABD98u) {
        ctx->pc = 0x2ABD98u;
            // 0x2abd98: 0xafa30200  sw          $v1, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
        ctx->pc = 0x2ABD9Cu;
        goto label_2abd9c;
    }
    ctx->pc = 0x2ABD94u;
    {
        const bool branch_taken_0x2abd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABD94u;
            // 0x2abd98: 0xafa30200  sw          $v1, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd94) {
            ctx->pc = 0x2ABE08u;
            goto label_2abe08;
        }
    }
    ctx->pc = 0x2ABD9Cu;
label_2abd9c:
    // 0x2abd9c: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x2abd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2abda0:
    // 0x2abda0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2abda0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2abda4:
    // 0x2abda4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2abda4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2abda8:
    // 0x2abda8: 0x320f809  jalr        $t9
label_2abdac:
    if (ctx->pc == 0x2ABDACu) {
        ctx->pc = 0x2ABDACu;
            // 0x2abdac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2ABDB0u;
        goto label_2abdb0;
    }
    ctx->pc = 0x2ABDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2ABDB0u);
        ctx->pc = 0x2ABDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABDA8u;
            // 0x2abdac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ABDB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ABDB0u; }
            if (ctx->pc != 0x2ABDB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2ABDB0u;
label_2abdb0:
    // 0x2abdb0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x2abdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2abdb4:
    // 0x2abdb4: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x2abdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_2abdb8:
    // 0x2abdb8: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x2abdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_2abdbc:
    // 0x2abdbc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2abdc0:
    if (ctx->pc == 0x2ABDC0u) {
        ctx->pc = 0x2ABDC0u;
            // 0x2abdc0: 0xafa30200  sw          $v1, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
        ctx->pc = 0x2ABDC4u;
        goto label_2abdc4;
    }
    ctx->pc = 0x2ABDBCu;
    {
        const bool branch_taken_0x2abdbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABDBCu;
            // 0x2abdc0: 0xafa30200  sw          $v1, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdbc) {
            ctx->pc = 0x2ABDF8u;
            goto label_2abdf8;
        }
    }
    ctx->pc = 0x2ABDC4u;
label_2abdc4:
    // 0x2abdc4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2abdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2abdc8:
    // 0x2abdc8: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x2abdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_2abdcc:
    // 0x2abdcc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2abdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2abdd0:
    // 0x2abdd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2abdd4:
    if (ctx->pc == 0x2ABDD4u) {
        ctx->pc = 0x2ABDD4u;
            // 0x2abdd4: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->pc = 0x2ABDD8u;
        goto label_2abdd8;
    }
    ctx->pc = 0x2ABDD0u;
    {
        const bool branch_taken_0x2abdd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABDD0u;
            // 0x2abdd4: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdd0) {
            ctx->pc = 0x2ABDE0u;
            goto label_2abde0;
        }
    }
    ctx->pc = 0x2ABDD8u;
label_2abdd8:
    // 0x2abdd8: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x2abdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_2abddc:
    // 0x2abddc: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2abddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_2abde0:
    // 0x2abde0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2abde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2abde4:
    // 0x2abde4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2abde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2abde8:
    // 0x2abde8: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x2abde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_2abdec:
    // 0x2abdec: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x2abdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_2abdf0:
    // 0x2abdf0: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x2abdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_2abdf4:
    // 0x2abdf4: 0x0  nop
    ctx->pc = 0x2abdf4u;
    // NOP
label_2abdf8:
    // 0x2abdf8: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x2abdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2abdfc:
    // 0x2abdfc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2abdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2abe00:
    // 0x2abe00: 0x5462ffe7  bnel        $v1, $v0, . + 4 + (-0x19 << 2)
label_2abe04:
    if (ctx->pc == 0x2ABE04u) {
        ctx->pc = 0x2ABE04u;
            // 0x2abe04: 0x8fa40200  lw          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x2ABE08u;
        goto label_2abe08;
    }
    ctx->pc = 0x2ABE00u;
    {
        const bool branch_taken_0x2abe00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2abe00) {
            ctx->pc = 0x2ABE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE00u;
            // 0x2abe04: 0x8fa40200  lw          $a0, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABDA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abda0;
        }
    }
    ctx->pc = 0x2ABE08u;
label_2abe08:
    // 0x2abe08: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2abe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2abe0c:
    // 0x2abe0c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2abe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2abe10:
    // 0x2abe10: 0x1000000f  b           . + 4 + (0xF << 2)
label_2abe14:
    if (ctx->pc == 0x2ABE14u) {
        ctx->pc = 0x2ABE14u;
            // 0x2abe14: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2ABE18u;
        goto label_2abe18;
    }
    ctx->pc = 0x2ABE10u;
    {
        const bool branch_taken_0x2abe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE10u;
            // 0x2abe14: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe10) {
            ctx->pc = 0x2ABE50u;
            goto label_2abe50;
        }
    }
    ctx->pc = 0x2ABE18u;
label_2abe18:
    // 0x2abe18: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x2abe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2abe1c:
    // 0x2abe1c: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x2abe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
label_2abe20:
    // 0x2abe20: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2abe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2abe24:
    // 0x2abe24: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2abe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2abe28:
    // 0x2abe28: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2abe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2abe2c:
    // 0x2abe2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2abe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2abe30:
    // 0x2abe30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2abe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2abe34:
    // 0x2abe34: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2abe34u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2abe38:
    // 0x2abe38: 0x1810  mfhi        $v1
    ctx->pc = 0x2abe38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2abe3c:
    // 0x2abe3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2abe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2abe40:
    // 0x2abe40: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2abe40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2abe44:
    // 0x2abe44: 0xc0400a8  jal         func_1002A0
label_2abe48:
    if (ctx->pc == 0x2ABE48u) {
        ctx->pc = 0x2ABE48u;
            // 0x2abe48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2ABE4Cu;
        goto label_2abe4c;
    }
    ctx->pc = 0x2ABE44u;
    SET_GPR_U32(ctx, 31, 0x2ABE4Cu);
    ctx->pc = 0x2ABE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE44u;
            // 0x2abe48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE4Cu; }
        if (ctx->pc != 0x2ABE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE4Cu; }
        if (ctx->pc != 0x2ABE4Cu) { return; }
    }
    ctx->pc = 0x2ABE4Cu;
label_2abe4c:
    // 0x2abe4c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2abe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2abe50:
    // 0x2abe50: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2abe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2abe54:
    // 0x2abe54: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2abe58:
    if (ctx->pc == 0x2ABE58u) {
        ctx->pc = 0x2ABE58u;
            // 0x2abe58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2ABE5Cu;
        goto label_2abe5c;
    }
    ctx->pc = 0x2ABE54u;
    {
        const bool branch_taken_0x2abe54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abe54) {
            ctx->pc = 0x2ABE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE54u;
            // 0x2abe58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE64u;
            goto label_2abe64;
        }
    }
    ctx->pc = 0x2ABE5Cu;
label_2abe5c:
    // 0x2abe5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2abe60:
    if (ctx->pc == 0x2ABE60u) {
        ctx->pc = 0x2ABE60u;
            // 0x2abe60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE64u;
        goto label_2abe64;
    }
    ctx->pc = 0x2ABE5Cu;
    {
        const bool branch_taken_0x2abe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE5Cu;
            // 0x2abe60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe5c) {
            ctx->pc = 0x2ABE68u;
            goto label_2abe68;
        }
    }
    ctx->pc = 0x2ABE64u;
label_2abe64:
    // 0x2abe64: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2abe64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2abe68:
    // 0x2abe68: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2abe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2abe6c:
    // 0x2abe6c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2abe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2abe70:
    // 0x2abe70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2abe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2abe74:
    // 0x2abe74: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2abe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2abe78:
    // 0x2abe78: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x2abe78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2abe7c:
    // 0x2abe7c: 0x5020ffe6  beql        $at, $zero, . + 4 + (-0x1A << 2)
label_2abe80:
    if (ctx->pc == 0x2ABE80u) {
        ctx->pc = 0x2ABE80u;
            // 0x2abe80: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x2ABE84u;
        goto label_2abe84;
    }
    ctx->pc = 0x2ABE7Cu;
    {
        const bool branch_taken_0x2abe7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe7c) {
            ctx->pc = 0x2ABE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE7Cu;
            // 0x2abe80: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2abe18;
        }
    }
    ctx->pc = 0x2ABE84u;
label_2abe84:
    // 0x2abe84: 0x0  nop
    ctx->pc = 0x2abe84u;
    // NOP
label_2abe88:
    // 0x2abe88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2abe88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2abe8c:
    // 0x2abe8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2abe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2abe90:
    // 0x2abe90: 0xc0ab288  jal         func_2ACA20
label_2abe94:
    if (ctx->pc == 0x2ABE94u) {
        ctx->pc = 0x2ABE94u;
            // 0x2abe94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE98u;
        goto label_2abe98;
    }
    ctx->pc = 0x2ABE90u;
    SET_GPR_U32(ctx, 31, 0x2ABE98u);
    ctx->pc = 0x2ABE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE90u;
            // 0x2abe94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE98u; }
        if (ctx->pc != 0x2ABE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABE98u; }
        if (ctx->pc != 0x2ABE98u) { return; }
    }
    ctx->pc = 0x2ABE98u;
label_2abe98:
    // 0x2abe98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2abe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2abe9c:
    // 0x2abe9c: 0xc0aa504  jal         func_2A9410
label_2abea0:
    if (ctx->pc == 0x2ABEA0u) {
        ctx->pc = 0x2ABEA0u;
            // 0x2abea0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2ABEA4u;
        goto label_2abea4;
    }
    ctx->pc = 0x2ABE9Cu;
    SET_GPR_U32(ctx, 31, 0x2ABEA4u);
    ctx->pc = 0x2ABEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABE9Cu;
            // 0x2abea0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEA4u; }
        if (ctx->pc != 0x2ABEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEA4u; }
        if (ctx->pc != 0x2ABEA4u) { return; }
    }
    ctx->pc = 0x2ABEA4u;
label_2abea4:
    // 0x2abea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2abea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2abea8:
    // 0x2abea8: 0xc0aafbc  jal         func_2ABEF0
label_2abeac:
    if (ctx->pc == 0x2ABEACu) {
        ctx->pc = 0x2ABEACu;
            // 0x2abeac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEB0u;
        goto label_2abeb0;
    }
    ctx->pc = 0x2ABEA8u;
    SET_GPR_U32(ctx, 31, 0x2ABEB0u);
    ctx->pc = 0x2ABEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEA8u;
            // 0x2abeac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEF0u;
    if (runtime->hasFunction(0x2ABEF0u)) {
        auto targetFn = runtime->lookupFunction(0x2ABEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEB0u; }
        if (ctx->pc != 0x2ABEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ABEF0_0x2abef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEB0u; }
        if (ctx->pc != 0x2ABEB0u) { return; }
    }
    ctx->pc = 0x2ABEB0u;
label_2abeb0:
    // 0x2abeb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2abeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2abeb4:
    // 0x2abeb4: 0xc0aa504  jal         func_2A9410
label_2abeb8:
    if (ctx->pc == 0x2ABEB8u) {
        ctx->pc = 0x2ABEB8u;
            // 0x2abeb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEBCu;
        goto label_2abebc;
    }
    ctx->pc = 0x2ABEB4u;
    SET_GPR_U32(ctx, 31, 0x2ABEBCu);
    ctx->pc = 0x2ABEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEB4u;
            // 0x2abeb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9410u;
    if (runtime->hasFunction(0x2A9410u)) {
        auto targetFn = runtime->lookupFunction(0x2A9410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEBCu; }
        if (ctx->pc != 0x2ABEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9410_0x2a9410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABEBCu; }
        if (ctx->pc != 0x2ABEBCu) { return; }
    }
    ctx->pc = 0x2ABEBCu;
label_2abebc:
    // 0x2abebc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2abebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2abec0:
    // 0x2abec0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2abec0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2abec4:
    // 0x2abec4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2abec4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2abec8:
    // 0x2abec8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2abec8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2abecc:
    // 0x2abecc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2abeccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2abed0:
    // 0x2abed0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2abed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2abed4:
    // 0x2abed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2abed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2abed8:
    // 0x2abed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2abed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2abedc:
    // 0x2abedc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2abedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2abee0:
    // 0x2abee0: 0x3e00008  jr          $ra
label_2abee4:
    if (ctx->pc == 0x2ABEE4u) {
        ctx->pc = 0x2ABEE4u;
            // 0x2abee4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x2ABEE8u;
        goto label_2abee8;
    }
    ctx->pc = 0x2ABEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEE0u;
            // 0x2abee4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ABEE8u;
label_2abee8:
    // 0x2abee8: 0x0  nop
    ctx->pc = 0x2abee8u;
    // NOP
label_2abeec:
    // 0x2abeec: 0x0  nop
    ctx->pc = 0x2abeecu;
    // NOP
}
