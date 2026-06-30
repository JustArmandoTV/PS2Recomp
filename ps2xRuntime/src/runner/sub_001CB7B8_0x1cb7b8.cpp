#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB7B8
// Address: 0x1cb7b8 - 0x1cc398
void sub_001CB7B8_0x1cb7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB7B8_0x1cb7b8");
#endif

    switch (ctx->pc) {
        case 0x1cb7b8u: goto label_1cb7b8;
        case 0x1cb7bcu: goto label_1cb7bc;
        case 0x1cb7c0u: goto label_1cb7c0;
        case 0x1cb7c4u: goto label_1cb7c4;
        case 0x1cb7c8u: goto label_1cb7c8;
        case 0x1cb7ccu: goto label_1cb7cc;
        case 0x1cb7d0u: goto label_1cb7d0;
        case 0x1cb7d4u: goto label_1cb7d4;
        case 0x1cb7d8u: goto label_1cb7d8;
        case 0x1cb7dcu: goto label_1cb7dc;
        case 0x1cb7e0u: goto label_1cb7e0;
        case 0x1cb7e4u: goto label_1cb7e4;
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb7ecu: goto label_1cb7ec;
        case 0x1cb7f0u: goto label_1cb7f0;
        case 0x1cb7f4u: goto label_1cb7f4;
        case 0x1cb7f8u: goto label_1cb7f8;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb800u: goto label_1cb800;
        case 0x1cb804u: goto label_1cb804;
        case 0x1cb808u: goto label_1cb808;
        case 0x1cb80cu: goto label_1cb80c;
        case 0x1cb810u: goto label_1cb810;
        case 0x1cb814u: goto label_1cb814;
        case 0x1cb818u: goto label_1cb818;
        case 0x1cb81cu: goto label_1cb81c;
        case 0x1cb820u: goto label_1cb820;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb828u: goto label_1cb828;
        case 0x1cb82cu: goto label_1cb82c;
        case 0x1cb830u: goto label_1cb830;
        case 0x1cb834u: goto label_1cb834;
        case 0x1cb838u: goto label_1cb838;
        case 0x1cb83cu: goto label_1cb83c;
        case 0x1cb840u: goto label_1cb840;
        case 0x1cb844u: goto label_1cb844;
        case 0x1cb848u: goto label_1cb848;
        case 0x1cb84cu: goto label_1cb84c;
        case 0x1cb850u: goto label_1cb850;
        case 0x1cb854u: goto label_1cb854;
        case 0x1cb858u: goto label_1cb858;
        case 0x1cb85cu: goto label_1cb85c;
        case 0x1cb860u: goto label_1cb860;
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb868u: goto label_1cb868;
        case 0x1cb86cu: goto label_1cb86c;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb874u: goto label_1cb874;
        case 0x1cb878u: goto label_1cb878;
        case 0x1cb87cu: goto label_1cb87c;
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb884u: goto label_1cb884;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb88cu: goto label_1cb88c;
        case 0x1cb890u: goto label_1cb890;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb89cu: goto label_1cb89c;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8a8u: goto label_1cb8a8;
        case 0x1cb8acu: goto label_1cb8ac;
        case 0x1cb8b0u: goto label_1cb8b0;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8b8u: goto label_1cb8b8;
        case 0x1cb8bcu: goto label_1cb8bc;
        case 0x1cb8c0u: goto label_1cb8c0;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8c8u: goto label_1cb8c8;
        case 0x1cb8ccu: goto label_1cb8cc;
        case 0x1cb8d0u: goto label_1cb8d0;
        case 0x1cb8d4u: goto label_1cb8d4;
        case 0x1cb8d8u: goto label_1cb8d8;
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8e0u: goto label_1cb8e0;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb8e8u: goto label_1cb8e8;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb8f0u: goto label_1cb8f0;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb8f8u: goto label_1cb8f8;
        case 0x1cb8fcu: goto label_1cb8fc;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb904u: goto label_1cb904;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb90cu: goto label_1cb90c;
        case 0x1cb910u: goto label_1cb910;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb918u: goto label_1cb918;
        case 0x1cb91cu: goto label_1cb91c;
        case 0x1cb920u: goto label_1cb920;
        case 0x1cb924u: goto label_1cb924;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb938u: goto label_1cb938;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb940u: goto label_1cb940;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb948u: goto label_1cb948;
        case 0x1cb94cu: goto label_1cb94c;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb954u: goto label_1cb954;
        case 0x1cb958u: goto label_1cb958;
        case 0x1cb95cu: goto label_1cb95c;
        case 0x1cb960u: goto label_1cb960;
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb96cu: goto label_1cb96c;
        case 0x1cb970u: goto label_1cb970;
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb97cu: goto label_1cb97c;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb984u: goto label_1cb984;
        case 0x1cb988u: goto label_1cb988;
        case 0x1cb98cu: goto label_1cb98c;
        case 0x1cb990u: goto label_1cb990;
        case 0x1cb994u: goto label_1cb994;
        case 0x1cb998u: goto label_1cb998;
        case 0x1cb99cu: goto label_1cb99c;
        case 0x1cb9a0u: goto label_1cb9a0;
        case 0x1cb9a4u: goto label_1cb9a4;
        case 0x1cb9a8u: goto label_1cb9a8;
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9b4u: goto label_1cb9b4;
        case 0x1cb9b8u: goto label_1cb9b8;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9c0u: goto label_1cb9c0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9c8u: goto label_1cb9c8;
        case 0x1cb9ccu: goto label_1cb9cc;
        case 0x1cb9d0u: goto label_1cb9d0;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cb9dcu: goto label_1cb9dc;
        case 0x1cb9e0u: goto label_1cb9e0;
        case 0x1cb9e4u: goto label_1cb9e4;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cb9ecu: goto label_1cb9ec;
        case 0x1cb9f0u: goto label_1cb9f0;
        case 0x1cb9f4u: goto label_1cb9f4;
        case 0x1cb9f8u: goto label_1cb9f8;
        case 0x1cb9fcu: goto label_1cb9fc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba04u: goto label_1cba04;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba10u: goto label_1cba10;
        case 0x1cba14u: goto label_1cba14;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba1cu: goto label_1cba1c;
        case 0x1cba20u: goto label_1cba20;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba28u: goto label_1cba28;
        case 0x1cba2cu: goto label_1cba2c;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cba34u: goto label_1cba34;
        case 0x1cba38u: goto label_1cba38;
        case 0x1cba3cu: goto label_1cba3c;
        case 0x1cba40u: goto label_1cba40;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba4cu: goto label_1cba4c;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba54u: goto label_1cba54;
        case 0x1cba58u: goto label_1cba58;
        case 0x1cba5cu: goto label_1cba5c;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba64u: goto label_1cba64;
        case 0x1cba68u: goto label_1cba68;
        case 0x1cba6cu: goto label_1cba6c;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cba74u: goto label_1cba74;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba7cu: goto label_1cba7c;
        case 0x1cba80u: goto label_1cba80;
        case 0x1cba84u: goto label_1cba84;
        case 0x1cba88u: goto label_1cba88;
        case 0x1cba8cu: goto label_1cba8c;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cba9cu: goto label_1cba9c;
        case 0x1cbaa0u: goto label_1cbaa0;
        case 0x1cbaa4u: goto label_1cbaa4;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaacu: goto label_1cbaac;
        case 0x1cbab0u: goto label_1cbab0;
        case 0x1cbab4u: goto label_1cbab4;
        case 0x1cbab8u: goto label_1cbab8;
        case 0x1cbabcu: goto label_1cbabc;
        case 0x1cbac0u: goto label_1cbac0;
        case 0x1cbac4u: goto label_1cbac4;
        case 0x1cbac8u: goto label_1cbac8;
        case 0x1cbaccu: goto label_1cbacc;
        case 0x1cbad0u: goto label_1cbad0;
        case 0x1cbad4u: goto label_1cbad4;
        case 0x1cbad8u: goto label_1cbad8;
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbae0u: goto label_1cbae0;
        case 0x1cbae4u: goto label_1cbae4;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbaecu: goto label_1cbaec;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbaf4u: goto label_1cbaf4;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbafcu: goto label_1cbafc;
        case 0x1cbb00u: goto label_1cbb00;
        case 0x1cbb04u: goto label_1cbb04;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb10u: goto label_1cbb10;
        case 0x1cbb14u: goto label_1cbb14;
        case 0x1cbb18u: goto label_1cbb18;
        case 0x1cbb1cu: goto label_1cbb1c;
        case 0x1cbb20u: goto label_1cbb20;
        case 0x1cbb24u: goto label_1cbb24;
        case 0x1cbb28u: goto label_1cbb28;
        case 0x1cbb2cu: goto label_1cbb2c;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb34u: goto label_1cbb34;
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb3cu: goto label_1cbb3c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb44u: goto label_1cbb44;
        case 0x1cbb48u: goto label_1cbb48;
        case 0x1cbb4cu: goto label_1cbb4c;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb54u: goto label_1cbb54;
        case 0x1cbb58u: goto label_1cbb58;
        case 0x1cbb5cu: goto label_1cbb5c;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbb68u: goto label_1cbb68;
        case 0x1cbb6cu: goto label_1cbb6c;
        case 0x1cbb70u: goto label_1cbb70;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb84u: goto label_1cbb84;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbb8cu: goto label_1cbb8c;
        case 0x1cbb90u: goto label_1cbb90;
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbb9cu: goto label_1cbb9c;
        case 0x1cbba0u: goto label_1cbba0;
        case 0x1cbba4u: goto label_1cbba4;
        case 0x1cbba8u: goto label_1cbba8;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbb0u: goto label_1cbbb0;
        case 0x1cbbb4u: goto label_1cbbb4;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbbcu: goto label_1cbbbc;
        case 0x1cbbc0u: goto label_1cbbc0;
        case 0x1cbbc4u: goto label_1cbbc4;
        case 0x1cbbc8u: goto label_1cbbc8;
        case 0x1cbbccu: goto label_1cbbcc;
        case 0x1cbbd0u: goto label_1cbbd0;
        case 0x1cbbd4u: goto label_1cbbd4;
        case 0x1cbbd8u: goto label_1cbbd8;
        case 0x1cbbdcu: goto label_1cbbdc;
        case 0x1cbbe0u: goto label_1cbbe0;
        case 0x1cbbe4u: goto label_1cbbe4;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbbecu: goto label_1cbbec;
        case 0x1cbbf0u: goto label_1cbbf0;
        case 0x1cbbf4u: goto label_1cbbf4;
        case 0x1cbbf8u: goto label_1cbbf8;
        case 0x1cbbfcu: goto label_1cbbfc;
        case 0x1cbc00u: goto label_1cbc00;
        case 0x1cbc04u: goto label_1cbc04;
        case 0x1cbc08u: goto label_1cbc08;
        case 0x1cbc0cu: goto label_1cbc0c;
        case 0x1cbc10u: goto label_1cbc10;
        case 0x1cbc14u: goto label_1cbc14;
        case 0x1cbc18u: goto label_1cbc18;
        case 0x1cbc1cu: goto label_1cbc1c;
        case 0x1cbc20u: goto label_1cbc20;
        case 0x1cbc24u: goto label_1cbc24;
        case 0x1cbc28u: goto label_1cbc28;
        case 0x1cbc2cu: goto label_1cbc2c;
        case 0x1cbc30u: goto label_1cbc30;
        case 0x1cbc34u: goto label_1cbc34;
        case 0x1cbc38u: goto label_1cbc38;
        case 0x1cbc3cu: goto label_1cbc3c;
        case 0x1cbc40u: goto label_1cbc40;
        case 0x1cbc44u: goto label_1cbc44;
        case 0x1cbc48u: goto label_1cbc48;
        case 0x1cbc4cu: goto label_1cbc4c;
        case 0x1cbc50u: goto label_1cbc50;
        case 0x1cbc54u: goto label_1cbc54;
        case 0x1cbc58u: goto label_1cbc58;
        case 0x1cbc5cu: goto label_1cbc5c;
        case 0x1cbc60u: goto label_1cbc60;
        case 0x1cbc64u: goto label_1cbc64;
        case 0x1cbc68u: goto label_1cbc68;
        case 0x1cbc6cu: goto label_1cbc6c;
        case 0x1cbc70u: goto label_1cbc70;
        case 0x1cbc74u: goto label_1cbc74;
        case 0x1cbc78u: goto label_1cbc78;
        case 0x1cbc7cu: goto label_1cbc7c;
        case 0x1cbc80u: goto label_1cbc80;
        case 0x1cbc84u: goto label_1cbc84;
        case 0x1cbc88u: goto label_1cbc88;
        case 0x1cbc8cu: goto label_1cbc8c;
        case 0x1cbc90u: goto label_1cbc90;
        case 0x1cbc94u: goto label_1cbc94;
        case 0x1cbc98u: goto label_1cbc98;
        case 0x1cbc9cu: goto label_1cbc9c;
        case 0x1cbca0u: goto label_1cbca0;
        case 0x1cbca4u: goto label_1cbca4;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcacu: goto label_1cbcac;
        case 0x1cbcb0u: goto label_1cbcb0;
        case 0x1cbcb4u: goto label_1cbcb4;
        case 0x1cbcb8u: goto label_1cbcb8;
        case 0x1cbcbcu: goto label_1cbcbc;
        case 0x1cbcc0u: goto label_1cbcc0;
        case 0x1cbcc4u: goto label_1cbcc4;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbcccu: goto label_1cbccc;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcd4u: goto label_1cbcd4;
        case 0x1cbcd8u: goto label_1cbcd8;
        case 0x1cbcdcu: goto label_1cbcdc;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbce4u: goto label_1cbce4;
        case 0x1cbce8u: goto label_1cbce8;
        case 0x1cbcecu: goto label_1cbcec;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbcf4u: goto label_1cbcf4;
        case 0x1cbcf8u: goto label_1cbcf8;
        case 0x1cbcfcu: goto label_1cbcfc;
        case 0x1cbd00u: goto label_1cbd00;
        case 0x1cbd04u: goto label_1cbd04;
        case 0x1cbd08u: goto label_1cbd08;
        case 0x1cbd0cu: goto label_1cbd0c;
        case 0x1cbd10u: goto label_1cbd10;
        case 0x1cbd14u: goto label_1cbd14;
        case 0x1cbd18u: goto label_1cbd18;
        case 0x1cbd1cu: goto label_1cbd1c;
        case 0x1cbd20u: goto label_1cbd20;
        case 0x1cbd24u: goto label_1cbd24;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd2cu: goto label_1cbd2c;
        case 0x1cbd30u: goto label_1cbd30;
        case 0x1cbd34u: goto label_1cbd34;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd3cu: goto label_1cbd3c;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbd44u: goto label_1cbd44;
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbedcu: goto label_1cbedc;
        case 0x1cbee0u: goto label_1cbee0;
        case 0x1cbee4u: goto label_1cbee4;
        case 0x1cbee8u: goto label_1cbee8;
        case 0x1cbeecu: goto label_1cbeec;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef4u: goto label_1cbef4;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbefcu: goto label_1cbefc;
        case 0x1cbf00u: goto label_1cbf00;
        case 0x1cbf04u: goto label_1cbf04;
        case 0x1cbf08u: goto label_1cbf08;
        case 0x1cbf0cu: goto label_1cbf0c;
        case 0x1cbf10u: goto label_1cbf10;
        case 0x1cbf14u: goto label_1cbf14;
        case 0x1cbf18u: goto label_1cbf18;
        case 0x1cbf1cu: goto label_1cbf1c;
        case 0x1cbf20u: goto label_1cbf20;
        case 0x1cbf24u: goto label_1cbf24;
        case 0x1cbf28u: goto label_1cbf28;
        case 0x1cbf2cu: goto label_1cbf2c;
        case 0x1cbf30u: goto label_1cbf30;
        case 0x1cbf34u: goto label_1cbf34;
        case 0x1cbf38u: goto label_1cbf38;
        case 0x1cbf3cu: goto label_1cbf3c;
        case 0x1cbf40u: goto label_1cbf40;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf48u: goto label_1cbf48;
        case 0x1cbf4cu: goto label_1cbf4c;
        case 0x1cbf50u: goto label_1cbf50;
        case 0x1cbf54u: goto label_1cbf54;
        case 0x1cbf58u: goto label_1cbf58;
        case 0x1cbf5cu: goto label_1cbf5c;
        case 0x1cbf60u: goto label_1cbf60;
        case 0x1cbf64u: goto label_1cbf64;
        case 0x1cbf68u: goto label_1cbf68;
        case 0x1cbf6cu: goto label_1cbf6c;
        case 0x1cbf70u: goto label_1cbf70;
        case 0x1cbf74u: goto label_1cbf74;
        case 0x1cbf78u: goto label_1cbf78;
        case 0x1cbf7cu: goto label_1cbf7c;
        case 0x1cbf80u: goto label_1cbf80;
        case 0x1cbf84u: goto label_1cbf84;
        case 0x1cbf88u: goto label_1cbf88;
        case 0x1cbf8cu: goto label_1cbf8c;
        case 0x1cbf90u: goto label_1cbf90;
        case 0x1cbf94u: goto label_1cbf94;
        case 0x1cbf98u: goto label_1cbf98;
        case 0x1cbf9cu: goto label_1cbf9c;
        case 0x1cbfa0u: goto label_1cbfa0;
        case 0x1cbfa4u: goto label_1cbfa4;
        case 0x1cbfa8u: goto label_1cbfa8;
        case 0x1cbfacu: goto label_1cbfac;
        case 0x1cbfb0u: goto label_1cbfb0;
        case 0x1cbfb4u: goto label_1cbfb4;
        case 0x1cbfb8u: goto label_1cbfb8;
        case 0x1cbfbcu: goto label_1cbfbc;
        case 0x1cbfc0u: goto label_1cbfc0;
        case 0x1cbfc4u: goto label_1cbfc4;
        case 0x1cbfc8u: goto label_1cbfc8;
        case 0x1cbfccu: goto label_1cbfcc;
        case 0x1cbfd0u: goto label_1cbfd0;
        case 0x1cbfd4u: goto label_1cbfd4;
        case 0x1cbfd8u: goto label_1cbfd8;
        case 0x1cbfdcu: goto label_1cbfdc;
        case 0x1cbfe0u: goto label_1cbfe0;
        case 0x1cbfe4u: goto label_1cbfe4;
        case 0x1cbfe8u: goto label_1cbfe8;
        case 0x1cbfecu: goto label_1cbfec;
        case 0x1cbff0u: goto label_1cbff0;
        case 0x1cbff4u: goto label_1cbff4;
        case 0x1cbff8u: goto label_1cbff8;
        case 0x1cbffcu: goto label_1cbffc;
        case 0x1cc000u: goto label_1cc000;
        case 0x1cc004u: goto label_1cc004;
        case 0x1cc008u: goto label_1cc008;
        case 0x1cc00cu: goto label_1cc00c;
        case 0x1cc010u: goto label_1cc010;
        case 0x1cc014u: goto label_1cc014;
        case 0x1cc018u: goto label_1cc018;
        case 0x1cc01cu: goto label_1cc01c;
        case 0x1cc020u: goto label_1cc020;
        case 0x1cc024u: goto label_1cc024;
        case 0x1cc028u: goto label_1cc028;
        case 0x1cc02cu: goto label_1cc02c;
        case 0x1cc030u: goto label_1cc030;
        case 0x1cc034u: goto label_1cc034;
        case 0x1cc038u: goto label_1cc038;
        case 0x1cc03cu: goto label_1cc03c;
        case 0x1cc040u: goto label_1cc040;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc048u: goto label_1cc048;
        case 0x1cc04cu: goto label_1cc04c;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc054u: goto label_1cc054;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc05cu: goto label_1cc05c;
        case 0x1cc060u: goto label_1cc060;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc068u: goto label_1cc068;
        case 0x1cc06cu: goto label_1cc06c;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc074u: goto label_1cc074;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc080u: goto label_1cc080;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc088u: goto label_1cc088;
        case 0x1cc08cu: goto label_1cc08c;
        case 0x1cc090u: goto label_1cc090;
        case 0x1cc094u: goto label_1cc094;
        case 0x1cc098u: goto label_1cc098;
        case 0x1cc09cu: goto label_1cc09c;
        case 0x1cc0a0u: goto label_1cc0a0;
        case 0x1cc0a4u: goto label_1cc0a4;
        case 0x1cc0a8u: goto label_1cc0a8;
        case 0x1cc0acu: goto label_1cc0ac;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc0b4u: goto label_1cc0b4;
        case 0x1cc0b8u: goto label_1cc0b8;
        case 0x1cc0bcu: goto label_1cc0bc;
        case 0x1cc0c0u: goto label_1cc0c0;
        case 0x1cc0c4u: goto label_1cc0c4;
        case 0x1cc0c8u: goto label_1cc0c8;
        case 0x1cc0ccu: goto label_1cc0cc;
        case 0x1cc0d0u: goto label_1cc0d0;
        case 0x1cc0d4u: goto label_1cc0d4;
        case 0x1cc0d8u: goto label_1cc0d8;
        case 0x1cc0dcu: goto label_1cc0dc;
        case 0x1cc0e0u: goto label_1cc0e0;
        case 0x1cc0e4u: goto label_1cc0e4;
        case 0x1cc0e8u: goto label_1cc0e8;
        case 0x1cc0ecu: goto label_1cc0ec;
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f4u: goto label_1cc0f4;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc0fcu: goto label_1cc0fc;
        case 0x1cc100u: goto label_1cc100;
        case 0x1cc104u: goto label_1cc104;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc10cu: goto label_1cc10c;
        case 0x1cc110u: goto label_1cc110;
        case 0x1cc114u: goto label_1cc114;
        case 0x1cc118u: goto label_1cc118;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc120u: goto label_1cc120;
        case 0x1cc124u: goto label_1cc124;
        case 0x1cc128u: goto label_1cc128;
        case 0x1cc12cu: goto label_1cc12c;
        case 0x1cc130u: goto label_1cc130;
        case 0x1cc134u: goto label_1cc134;
        case 0x1cc138u: goto label_1cc138;
        case 0x1cc13cu: goto label_1cc13c;
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc148u: goto label_1cc148;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc150u: goto label_1cc150;
        case 0x1cc154u: goto label_1cc154;
        case 0x1cc158u: goto label_1cc158;
        case 0x1cc15cu: goto label_1cc15c;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc164u: goto label_1cc164;
        case 0x1cc168u: goto label_1cc168;
        case 0x1cc16cu: goto label_1cc16c;
        case 0x1cc170u: goto label_1cc170;
        case 0x1cc174u: goto label_1cc174;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc17cu: goto label_1cc17c;
        case 0x1cc180u: goto label_1cc180;
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc188u: goto label_1cc188;
        case 0x1cc18cu: goto label_1cc18c;
        case 0x1cc190u: goto label_1cc190;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc198u: goto label_1cc198;
        case 0x1cc19cu: goto label_1cc19c;
        case 0x1cc1a0u: goto label_1cc1a0;
        case 0x1cc1a4u: goto label_1cc1a4;
        case 0x1cc1a8u: goto label_1cc1a8;
        case 0x1cc1acu: goto label_1cc1ac;
        case 0x1cc1b0u: goto label_1cc1b0;
        case 0x1cc1b4u: goto label_1cc1b4;
        case 0x1cc1b8u: goto label_1cc1b8;
        case 0x1cc1bcu: goto label_1cc1bc;
        case 0x1cc1c0u: goto label_1cc1c0;
        case 0x1cc1c4u: goto label_1cc1c4;
        case 0x1cc1c8u: goto label_1cc1c8;
        case 0x1cc1ccu: goto label_1cc1cc;
        case 0x1cc1d0u: goto label_1cc1d0;
        case 0x1cc1d4u: goto label_1cc1d4;
        case 0x1cc1d8u: goto label_1cc1d8;
        case 0x1cc1dcu: goto label_1cc1dc;
        case 0x1cc1e0u: goto label_1cc1e0;
        case 0x1cc1e4u: goto label_1cc1e4;
        case 0x1cc1e8u: goto label_1cc1e8;
        case 0x1cc1ecu: goto label_1cc1ec;
        case 0x1cc1f0u: goto label_1cc1f0;
        case 0x1cc1f4u: goto label_1cc1f4;
        case 0x1cc1f8u: goto label_1cc1f8;
        case 0x1cc1fcu: goto label_1cc1fc;
        case 0x1cc200u: goto label_1cc200;
        case 0x1cc204u: goto label_1cc204;
        case 0x1cc208u: goto label_1cc208;
        case 0x1cc20cu: goto label_1cc20c;
        case 0x1cc210u: goto label_1cc210;
        case 0x1cc214u: goto label_1cc214;
        case 0x1cc218u: goto label_1cc218;
        case 0x1cc21cu: goto label_1cc21c;
        case 0x1cc220u: goto label_1cc220;
        case 0x1cc224u: goto label_1cc224;
        case 0x1cc228u: goto label_1cc228;
        case 0x1cc22cu: goto label_1cc22c;
        case 0x1cc230u: goto label_1cc230;
        case 0x1cc234u: goto label_1cc234;
        case 0x1cc238u: goto label_1cc238;
        case 0x1cc23cu: goto label_1cc23c;
        case 0x1cc240u: goto label_1cc240;
        case 0x1cc244u: goto label_1cc244;
        case 0x1cc248u: goto label_1cc248;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc250u: goto label_1cc250;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc25cu: goto label_1cc25c;
        case 0x1cc260u: goto label_1cc260;
        case 0x1cc264u: goto label_1cc264;
        case 0x1cc268u: goto label_1cc268;
        case 0x1cc26cu: goto label_1cc26c;
        case 0x1cc270u: goto label_1cc270;
        case 0x1cc274u: goto label_1cc274;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc27cu: goto label_1cc27c;
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc284u: goto label_1cc284;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc28cu: goto label_1cc28c;
        case 0x1cc290u: goto label_1cc290;
        case 0x1cc294u: goto label_1cc294;
        case 0x1cc298u: goto label_1cc298;
        case 0x1cc29cu: goto label_1cc29c;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2a4u: goto label_1cc2a4;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2acu: goto label_1cc2ac;
        case 0x1cc2b0u: goto label_1cc2b0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2b8u: goto label_1cc2b8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2c0u: goto label_1cc2c0;
        case 0x1cc2c4u: goto label_1cc2c4;
        case 0x1cc2c8u: goto label_1cc2c8;
        case 0x1cc2ccu: goto label_1cc2cc;
        case 0x1cc2d0u: goto label_1cc2d0;
        case 0x1cc2d4u: goto label_1cc2d4;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2dcu: goto label_1cc2dc;
        case 0x1cc2e0u: goto label_1cc2e0;
        case 0x1cc2e4u: goto label_1cc2e4;
        case 0x1cc2e8u: goto label_1cc2e8;
        case 0x1cc2ecu: goto label_1cc2ec;
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc2f8u: goto label_1cc2f8;
        case 0x1cc2fcu: goto label_1cc2fc;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc304u: goto label_1cc304;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc310u: goto label_1cc310;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc318u: goto label_1cc318;
        case 0x1cc31cu: goto label_1cc31c;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc324u: goto label_1cc324;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc32cu: goto label_1cc32c;
        case 0x1cc330u: goto label_1cc330;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc338u: goto label_1cc338;
        case 0x1cc33cu: goto label_1cc33c;
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc344u: goto label_1cc344;
        case 0x1cc348u: goto label_1cc348;
        case 0x1cc34cu: goto label_1cc34c;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc354u: goto label_1cc354;
        case 0x1cc358u: goto label_1cc358;
        case 0x1cc35cu: goto label_1cc35c;
        case 0x1cc360u: goto label_1cc360;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc368u: goto label_1cc368;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        default: break;
    }

    ctx->pc = 0x1cb7b8u;

label_1cb7b8:
    // 0x1cb7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb7bc:
    // 0x1cb7bc: 0x3404f600  ori         $a0, $zero, 0xF600
    ctx->pc = 0x1cb7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
label_1cb7c0:
    // 0x1cb7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb7c4:
    // 0x1cb7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7c8:
    // 0x1cb7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7cc:
    // 0x1cb7cc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb7d0:
    // 0x1cb7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb7d4:
    // 0x1cb7d4: 0x80728d0  j           func_1CA340
label_1cb7d8:
    if (ctx->pc == 0x1CB7D8u) {
        ctx->pc = 0x1CB7D8u;
            // 0x1cb7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB7DCu;
        goto label_1cb7dc;
    }
    ctx->pc = 0x1CB7D4u;
    ctx->pc = 0x1CB7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7D4u;
            // 0x1cb7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB7DCu;
label_1cb7dc:
    // 0x1cb7dc: 0x0  nop
    ctx->pc = 0x1cb7dcu;
    // NOP
label_1cb7e0:
    // 0x1cb7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb7e4:
    // 0x1cb7e4: 0x3404f500  ori         $a0, $zero, 0xF500
    ctx->pc = 0x1cb7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62720);
label_1cb7e8:
    // 0x1cb7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb7ec:
    // 0x1cb7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7f0:
    // 0x1cb7f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7f4:
    // 0x1cb7f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cb7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb7f8:
    // 0x1cb7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb7fc:
    // 0x1cb7fc: 0x80728d0  j           func_1CA340
label_1cb800:
    if (ctx->pc == 0x1CB800u) {
        ctx->pc = 0x1CB800u;
            // 0x1cb800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB804u;
        goto label_1cb804;
    }
    ctx->pc = 0x1CB7FCu;
    ctx->pc = 0x1CB800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7FCu;
            // 0x1cb800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB804u;
label_1cb804:
    // 0x1cb804: 0x0  nop
    ctx->pc = 0x1cb804u;
    // NOP
label_1cb808:
    // 0x1cb808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb80c:
    // 0x1cb80c: 0x3404f400  ori         $a0, $zero, 0xF400
    ctx->pc = 0x1cb80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62464);
label_1cb810:
    // 0x1cb810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb814:
    // 0x1cb814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb818:
    // 0x1cb818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb81c:
    // 0x1cb81c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cb81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb820:
    // 0x1cb820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb824:
    // 0x1cb824: 0x80728d0  j           func_1CA340
label_1cb828:
    if (ctx->pc == 0x1CB828u) {
        ctx->pc = 0x1CB828u;
            // 0x1cb828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB82Cu;
        goto label_1cb82c;
    }
    ctx->pc = 0x1CB824u;
    ctx->pc = 0x1CB828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB824u;
            // 0x1cb828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA340_0x1ca340(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB82Cu;
label_1cb82c:
    // 0x1cb82c: 0x0  nop
    ctx->pc = 0x1cb82cu;
    // NOP
label_1cb830:
    // 0x1cb830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cb834:
    // 0x1cb834: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1cb834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1cb838:
    // 0x1cb838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cb83c:
    // 0x1cb83c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cb840:
    // 0x1cb840: 0xc05e086  jal         func_178218
label_1cb844:
    if (ctx->pc == 0x1CB844u) {
        ctx->pc = 0x1CB844u;
            // 0x1cb844: 0x2484c170  addiu       $a0, $a0, -0x3E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951280));
        ctx->pc = 0x1CB848u;
        goto label_1cb848;
    }
    ctx->pc = 0x1CB840u;
    SET_GPR_U32(ctx, 31, 0x1CB848u);
    ctx->pc = 0x1CB844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB840u;
            // 0x1cb844: 0x2484c170  addiu       $a0, $a0, -0x3E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178218u;
    if (runtime->hasFunction(0x178218u)) {
        auto targetFn = runtime->lookupFunction(0x178218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB848u; }
        if (ctx->pc != 0x1CB848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178218_0x178218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB848u; }
        if (ctx->pc != 0x1CB848u) { return; }
    }
    ctx->pc = 0x1CB848u;
label_1cb848:
    // 0x1cb848: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cb848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb84c:
    // 0x1cb84c: 0x3403bb80  ori         $v1, $zero, 0xBB80
    ctx->pc = 0x1cb84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_1cb850:
    // 0x1cb850: 0xc07243a  jal         func_1C90E8
label_1cb854:
    if (ctx->pc == 0x1CB854u) {
        ctx->pc = 0x1CB854u;
            // 0x1cb854: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->pc = 0x1CB858u;
        goto label_1cb858;
    }
    ctx->pc = 0x1CB850u;
    SET_GPR_U32(ctx, 31, 0x1CB858u);
    ctx->pc = 0x1CB854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB850u;
            // 0x1cb854: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C90E8u;
    if (runtime->hasFunction(0x1C90E8u)) {
        auto targetFn = runtime->lookupFunction(0x1C90E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB858u; }
        if (ctx->pc != 0x1CB858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C90E8_0x1c90e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB858u; }
        if (ctx->pc != 0x1CB858u) { return; }
    }
    ctx->pc = 0x1CB858u;
label_1cb858:
    // 0x1cb858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb85c:
    // 0x1cb85c: 0x3e00008  jr          $ra
label_1cb860:
    if (ctx->pc == 0x1CB860u) {
        ctx->pc = 0x1CB860u;
            // 0x1cb860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CB864u;
        goto label_1cb864;
    }
    ctx->pc = 0x1CB85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB85Cu;
            // 0x1cb860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB864u;
label_1cb864:
    // 0x1cb864: 0x0  nop
    ctx->pc = 0x1cb864u;
    // NOP
label_1cb868:
    // 0x1cb868: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cb868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cb86c:
    // 0x1cb86c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1cb870:
    // 0x1cb870: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1cb870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1cb874:
    // 0x1cb874: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1cb874u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb878:
    // 0x1cb878: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1cb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1cb87c:
    // 0x1cb87c: 0x15a040  sll         $s4, $s5, 1
    ctx->pc = 0x1cb87cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_1cb880:
    // 0x1cb880: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cb880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1cb884:
    // 0x1cb884: 0x2958821  addu        $s1, $s4, $s5
    ctx->pc = 0x1cb884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1cb888:
    // 0x1cb888: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1cb88c:
    // 0x1cb88c: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x1cb88cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1cb890:
    // 0x1cb890: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cb890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1cb894:
    // 0x1cb894: 0x24528a88  addiu       $s2, $v0, -0x7578
    ctx->pc = 0x1cb894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937224));
label_1cb898:
    // 0x1cb898: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1cb898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1cb89c:
    // 0x1cb89c: 0x212b021  addu        $s6, $s0, $s2
    ctx->pc = 0x1cb89cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1cb8a0:
    // 0x1cb8a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cb8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1cb8a4:
    // 0x1cb8a4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1cb8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1cb8a8:
    // 0x1cb8a8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1cb8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_1cb8ac:
    // 0x1cb8ac: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1cb8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1cb8b0:
    // 0x1cb8b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cb8b4:
    // 0x1cb8b4: 0xc05abde  jal         func_16AF78
label_1cb8b8:
    if (ctx->pc == 0x1CB8B8u) {
        ctx->pc = 0x1CB8B8u;
            // 0x1cb8b8: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x1CB8BCu;
        goto label_1cb8bc;
    }
    ctx->pc = 0x1CB8B4u;
    SET_GPR_U32(ctx, 31, 0x1CB8BCu);
    ctx->pc = 0x1CB8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8B4u;
            // 0x1cb8b8: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AF78u;
    if (runtime->hasFunction(0x16AF78u)) {
        auto targetFn = runtime->lookupFunction(0x16AF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8BCu; }
        if (ctx->pc != 0x1CB8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AF78_0x16af78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8BCu; }
        if (ctx->pc != 0x1CB8BCu) { return; }
    }
    ctx->pc = 0x1CB8BCu;
label_1cb8bc:
    // 0x1cb8bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cb8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb8c0:
    // 0x1cb8c0: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
label_1cb8c4:
    if (ctx->pc == 0x1CB8C4u) {
        ctx->pc = 0x1CB8C4u;
            // 0x1cb8c4: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1CB8C8u;
        goto label_1cb8c8;
    }
    ctx->pc = 0x1CB8C0u;
    {
        const bool branch_taken_0x1cb8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb8c0) {
            ctx->pc = 0x1CB8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8C0u;
            // 0x1cb8c4: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB968u;
            goto label_1cb968;
        }
    }
    ctx->pc = 0x1CB8C8u;
label_1cb8c8:
    // 0x1cb8c8: 0xc05a804  jal         func_16A010
label_1cb8cc:
    if (ctx->pc == 0x1CB8CCu) {
        ctx->pc = 0x1CB8CCu;
            // 0x1cb8cc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x1CB8D0u;
        goto label_1cb8d0;
    }
    ctx->pc = 0x1CB8C8u;
    SET_GPR_U32(ctx, 31, 0x1CB8D0u);
    ctx->pc = 0x1CB8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8C8u;
            // 0x1cb8cc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8D0u; }
        if (ctx->pc != 0x1CB8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8D0u; }
        if (ctx->pc != 0x1CB8D0u) { return; }
    }
    ctx->pc = 0x1CB8D0u;
label_1cb8d0:
    // 0x1cb8d0: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1cb8d4:
    // 0x1cb8d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cb8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cb8d8:
    // 0x1cb8d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb8dc:
    // 0x1cb8dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1cb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1cb8e0:
    // 0x1cb8e0: 0x40f809  jalr        $v0
label_1cb8e4:
    if (ctx->pc == 0x1CB8E4u) {
        ctx->pc = 0x1CB8E8u;
        goto label_1cb8e8;
    }
    ctx->pc = 0x1CB8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB8E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB8E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB8E8u; }
            if (ctx->pc != 0x1CB8E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB8E8u;
label_1cb8e8:
    // 0x1cb8e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1cb8ec:
    // 0x1cb8ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1cb8f0:
    // 0x1cb8f0: 0x2472a70c  addiu       $s2, $v1, -0x58F4
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944524));
label_1cb8f4:
    // 0x1cb8f4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1cb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cb8f8:
    // 0x1cb8f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cb8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb8fc:
    // 0x1cb8fc: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1cb8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb900:
    // 0x1cb900: 0x26300eb0  addiu       $s0, $s1, 0xEB0
    ctx->pc = 0x1cb900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3760));
label_1cb904:
    // 0x1cb904: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1cb908:
    // 0x1cb908: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1cb908u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1cb90c:
    // 0x1cb90c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cb910:
    if (ctx->pc == 0x1CB910u) {
        ctx->pc = 0x1CB910u;
            // 0x1cb910: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->pc = 0x1CB914u;
        goto label_1cb914;
    }
    ctx->pc = 0x1CB90Cu;
    {
        const bool branch_taken_0x1cb90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb90c) {
            ctx->pc = 0x1CB910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB90Cu;
            // 0x1cb910: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB928u;
            goto label_1cb928;
        }
    }
    ctx->pc = 0x1CB914u;
label_1cb914:
    // 0x1cb914: 0xc04a246  jal         func_128918
label_1cb918:
    if (ctx->pc == 0x1CB918u) {
        ctx->pc = 0x1CB918u;
            // 0x1cb918: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x1CB91Cu;
        goto label_1cb91c;
    }
    ctx->pc = 0x1CB914u;
    SET_GPR_U32(ctx, 31, 0x1CB91Cu);
    ctx->pc = 0x1CB918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB914u;
            // 0x1cb918: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB91Cu; }
        if (ctx->pc != 0x1CB91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB91Cu; }
        if (ctx->pc != 0x1CB91Cu) { return; }
    }
    ctx->pc = 0x1CB91Cu;
label_1cb91c:
    // 0x1cb91c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cb91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb920:
    // 0x1cb920: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1cb920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1cb924:
    // 0x1cb924: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1cb924u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1cb928:
    // 0x1cb928: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cb92c:
    if (ctx->pc == 0x1CB92Cu) {
        ctx->pc = 0x1CB92Cu;
            // 0x1cb92c: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->pc = 0x1CB930u;
        goto label_1cb930;
    }
    ctx->pc = 0x1CB928u;
    {
        const bool branch_taken_0x1cb928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb928) {
            ctx->pc = 0x1CB92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB928u;
            // 0x1cb92c: 0x901821  addu        $v1, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB944u;
            goto label_1cb944;
        }
    }
    ctx->pc = 0x1CB930u;
label_1cb930:
    // 0x1cb930: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1cb934:
    // 0x1cb934: 0xc045262  jal         func_114988
label_1cb938:
    if (ctx->pc == 0x1CB938u) {
        ctx->pc = 0x1CB938u;
            // 0x1cb938: 0x8c440ecc  lw          $a0, 0xECC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
        ctx->pc = 0x1CB93Cu;
        goto label_1cb93c;
    }
    ctx->pc = 0x1CB934u;
    SET_GPR_U32(ctx, 31, 0x1CB93Cu);
    ctx->pc = 0x1CB938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB934u;
            // 0x1cb938: 0x8c440ecc  lw          $a0, 0xECC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB93Cu; }
        if (ctx->pc != 0x1CB93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB93Cu; }
        if (ctx->pc != 0x1CB93Cu) { return; }
    }
    ctx->pc = 0x1CB93Cu;
label_1cb93c:
    // 0x1cb93c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb940:
    // 0x1cb940: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1cb940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1cb944:
    // 0x1cb944: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1cb948:
    // 0x1cb948: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cb948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cb94c:
    // 0x1cb94c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cb950:
    // 0x1cb950: 0xa062000e  sb          $v0, 0xE($v1)
    ctx->pc = 0x1cb950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
label_1cb954:
    // 0x1cb954: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1cb954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1cb958:
    // 0x1cb958: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1cb958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cb95c:
    // 0x1cb95c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cb95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb960:
    // 0x1cb960: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_1cb964:
    if (ctx->pc == 0x1CB964u) {
        ctx->pc = 0x1CB964u;
            // 0x1cb964: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1CB968u;
        goto label_1cb968;
    }
    ctx->pc = 0x1CB960u;
    {
        const bool branch_taken_0x1cb960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB960u;
            // 0x1cb964: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb960) {
            ctx->pc = 0x1CC074u;
            goto label_1cc074;
        }
    }
    ctx->pc = 0x1CB968u;
label_1cb968:
    // 0x1cb968: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1cb968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1cb96c:
    // 0x1cb96c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cb970:
    // 0x1cb970: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1cb974:
    if (ctx->pc == 0x1CB974u) {
        ctx->pc = 0x1CB974u;
            // 0x1cb974: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1CB978u;
        goto label_1cb978;
    }
    ctx->pc = 0x1CB970u;
    {
        const bool branch_taken_0x1cb970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB970u;
            // 0x1cb974: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb970) {
            ctx->pc = 0x1CB9A8u;
            goto label_1cb9a8;
        }
    }
    ctx->pc = 0x1CB978u;
label_1cb978:
    // 0x1cb978: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cb978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1cb97c:
    // 0x1cb97c: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x1cb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_1cb980:
    // 0x1cb980: 0x8c83a70c  lw          $v1, -0x58F4($a0)
    ctx->pc = 0x1cb980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944524)));
label_1cb984:
    // 0x1cb984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cb984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb988:
    // 0x1cb988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb98c:
    // 0x1cb98c: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
label_1cb990:
    // 0x1cb990: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1cb990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cb994:
    // 0x1cb994: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1cb994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cb998:
    // 0x1cb998: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x1cb998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1cb99c:
    // 0x1cb99c: 0xc06156e  jal         func_1855B8
label_1cb9a0:
    if (ctx->pc == 0x1CB9A0u) {
        ctx->pc = 0x1CB9A0u;
            // 0x1cb9a0: 0x8c640018  lw          $a0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->pc = 0x1CB9A4u;
        goto label_1cb9a4;
    }
    ctx->pc = 0x1CB99Cu;
    SET_GPR_U32(ctx, 31, 0x1CB9A4u);
    ctx->pc = 0x1CB9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB99Cu;
            // 0x1cb9a0: 0x8c640018  lw          $a0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9A4u; }
        if (ctx->pc != 0x1CB9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9A4u; }
        if (ctx->pc != 0x1CB9A4u) { return; }
    }
    ctx->pc = 0x1CB9A4u;
label_1cb9a4:
    // 0x1cb9a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1cb9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1cb9a8:
    // 0x1cb9a8: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_1cb9ac:
    // 0x1cb9ac: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x1cb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_1cb9b0:
    // 0x1cb9b0: 0x24d1a70c  addiu       $s1, $a2, -0x58F4
    ctx->pc = 0x1cb9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944524));
label_1cb9b4:
    // 0x1cb9b4: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x1cb9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cb9b8:
    // 0x1cb9b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1cb9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb9bc:
    // 0x1cb9bc: 0x26700ec0  addiu       $s0, $s3, 0xEC0
    ctx->pc = 0x1cb9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3776));
label_1cb9c0:
    // 0x1cb9c0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1cb9c4:
    // 0x1cb9c4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1cb9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1cb9c8:
    // 0x1cb9c8: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_1cb9cc:
    if (ctx->pc == 0x1CB9CCu) {
        ctx->pc = 0x1CB9CCu;
            // 0x1cb9cc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x1CB9D0u;
        goto label_1cb9d0;
    }
    ctx->pc = 0x1CB9C8u;
    {
        const bool branch_taken_0x1cb9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9c8) {
            ctx->pc = 0x1CB9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9C8u;
            // 0x1cb9cc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB9F0u;
            goto label_1cb9f0;
        }
    }
    ctx->pc = 0x1CB9D0u;
label_1cb9d0:
    // 0x1cb9d0: 0xc05ab1c  jal         func_16AC70
label_1cb9d4:
    if (ctx->pc == 0x1CB9D4u) {
        ctx->pc = 0x1CB9D4u;
            // 0x1cb9d4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x1CB9D8u;
        goto label_1cb9d8;
    }
    ctx->pc = 0x1CB9D0u;
    SET_GPR_U32(ctx, 31, 0x1CB9D8u);
    ctx->pc = 0x1CB9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9D0u;
            // 0x1cb9d4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AC70u;
    if (runtime->hasFunction(0x16AC70u)) {
        auto targetFn = runtime->lookupFunction(0x16AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9D8u; }
        if (ctx->pc != 0x1CB9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AC70_0x16ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9D8u; }
        if (ctx->pc != 0x1CB9D8u) { return; }
    }
    ctx->pc = 0x1CB9D8u;
label_1cb9d8:
    // 0x1cb9d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb9dc:
    // 0x1cb9dc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1cb9e0:
    // 0x1cb9e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1cb9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cb9e4:
    // 0x1cb9e4: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1cb9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1cb9e8:
    // 0x1cb9e8: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1cb9ec:
    // 0x1cb9ec: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1cb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cb9f0:
    // 0x1cb9f0: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1cb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1cb9f4:
    // 0x1cb9f4: 0xc05a8de  jal         func_16A378
label_1cb9f8:
    if (ctx->pc == 0x1CB9F8u) {
        ctx->pc = 0x1CB9F8u;
            // 0x1cb9f8: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1CB9FCu;
        goto label_1cb9fc;
    }
    ctx->pc = 0x1CB9F4u;
    SET_GPR_U32(ctx, 31, 0x1CB9FCu);
    ctx->pc = 0x1CB9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB9F4u;
            // 0x1cb9f8: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A378u;
    if (runtime->hasFunction(0x16A378u)) {
        auto targetFn = runtime->lookupFunction(0x16A378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9FCu; }
        if (ctx->pc != 0x1CB9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A378_0x16a378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9FCu; }
        if (ctx->pc != 0x1CB9FCu) { return; }
    }
    ctx->pc = 0x1CB9FCu;
label_1cb9fc:
    // 0x1cb9fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cba00:
    // 0x1cba00: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1cba04:
    // 0x1cba04: 0x90620ebe  lbu         $v0, 0xEBE($v1)
    ctx->pc = 0x1cba04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3774)));
label_1cba08:
    // 0x1cba08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cba0c:
    // 0x1cba0c: 0x2c430007  sltiu       $v1, $v0, 0x7
    ctx->pc = 0x1cba0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1cba10:
    // 0x1cba10: 0x50600254  beql        $v1, $zero, . + 4 + (0x254 << 2)
label_1cba14:
    if (ctx->pc == 0x1CBA14u) {
        ctx->pc = 0x1CBA14u;
            // 0x1cba14: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CBA18u;
        goto label_1cba18;
    }
    ctx->pc = 0x1CBA10u;
    {
        const bool branch_taken_0x1cba10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba10) {
            ctx->pc = 0x1CBA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA10u;
            // 0x1cba14: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC364u;
            goto label_1cc364;
        }
    }
    ctx->pc = 0x1CBA18u;
label_1cba18:
    // 0x1cba18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cba18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cba1c:
    // 0x1cba1c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1cba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1cba20:
    // 0x1cba20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cba24:
    // 0x1cba24: 0x8c63c180  lw          $v1, -0x3E80($v1)
    ctx->pc = 0x1cba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951296)));
label_1cba28:
    // 0x1cba28: 0x600008  jr          $v1
label_1cba2c:
    if (ctx->pc == 0x1CBA2Cu) {
        ctx->pc = 0x1CBA30u;
        goto label_1cba30;
    }
    ctx->pc = 0x1CBA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBA30u: goto label_1cba30;
            case 0x1CBC18u: goto label_1cbc18;
            case 0x1CBDD0u: goto label_1cbdd0;
            case 0x1CBEC8u: goto label_1cbec8;
            case 0x1CC1C8u: goto label_1cc1c8;
            case 0x1CC290u: goto label_1cc290;
            case 0x1CC360u: goto label_1cc360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBA30u;
label_1cba30:
    // 0x1cba30: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1cba34:
    // 0x1cba34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1cba38:
    // 0x1cba38: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1cba38u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cba3c:
    // 0x1cba3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cba40:
    // 0x1cba40: 0x24508a88  addiu       $s0, $v0, -0x7578
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937224));
label_1cba44:
    // 0x1cba44: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1cba44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1cba48:
    // 0x1cba48: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x1cba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1cba4c:
    // 0x1cba4c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x1cba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_1cba50:
    // 0x1cba50: 0x3b880  sll         $s7, $v1, 2
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cba54:
    // 0x1cba54: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1cba58:
    // 0x1cba58: 0x24dea70c  addiu       $fp, $a2, -0x58F4
    ctx->pc = 0x1cba58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944524));
label_1cba5c:
    // 0x1cba5c: 0x26e30eb0  addiu       $v1, $s7, 0xEB0
    ctx->pc = 0x1cba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 3760));
label_1cba60:
    // 0x1cba60: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cba64:
    // 0x1cba64: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1cba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cba68:
    // 0x1cba68: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1cba68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_1cba6c:
    // 0x1cba6c: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1cba70:
    // 0x1cba70: 0x2239021  addu        $s2, $s1, $v1
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1cba74:
    // 0x1cba74: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1cba74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1cba78:
    // 0x1cba78: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cba7c:
    // 0x1cba7c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1cba7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cba80:
    // 0x1cba80: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cba84:
    // 0x1cba84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cba88:
    // 0x1cba88: 0x8ca80018  lw          $t0, 0x18($a1)
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1cba8c:
    // 0x1cba8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cba90:
    // 0x1cba90: 0x100f809  jalr        $t0
label_1cba94:
    if (ctx->pc == 0x1CBA94u) {
        ctx->pc = 0x1CBA94u;
            // 0x1cba94: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x1CBA98u;
        goto label_1cba98;
    }
    ctx->pc = 0x1CBA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1CBA98u);
        ctx->pc = 0x1CBA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA90u;
            // 0x1cba94: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA98u; }
            if (ctx->pc != 0x1CBA98u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBA98u;
label_1cba98:
    // 0x1cba98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cba9c:
    // 0x1cba9c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_1cbaa0:
    if (ctx->pc == 0x1CBAA0u) {
        ctx->pc = 0x1CBAA0u;
            // 0x1cbaa0: 0x15b080  sll         $s6, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x1CBAA4u;
        goto label_1cbaa4;
    }
    ctx->pc = 0x1CBA9Cu;
    {
        const bool branch_taken_0x1cba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBA9Cu;
            // 0x1cbaa0: 0x15b080  sll         $s6, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba9c) {
            ctx->pc = 0x1CBC10u;
            goto label_1cbc10;
        }
    }
    ctx->pc = 0x1CBAA4u;
label_1cbaa4:
    // 0x1cbaa4: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x1cbaa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbaa8:
    // 0x1cbaa8: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cbaac:
    // 0x1cbaac: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x1cbaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1cbab0:
    // 0x1cbab0: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x1cbab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_1cbab4:
    // 0x1cbab4: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x1cbab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_1cbab8:
    // 0x1cbab8: 0x8c621880  lw          $v0, 0x1880($v1)
    ctx->pc = 0x1cbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6272)));
label_1cbabc:
    // 0x1cbabc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1cbabcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1cbac0:
    // 0x1cbac0: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_1cbac4:
    if (ctx->pc == 0x1CBAC4u) {
        ctx->pc = 0x1CBAC4u;
            // 0x1cbac4: 0x2958821  addu        $s1, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->pc = 0x1CBAC8u;
        goto label_1cbac8;
    }
    ctx->pc = 0x1CBAC0u;
    {
        const bool branch_taken_0x1cbac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbac0) {
            ctx->pc = 0x1CBAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAC0u;
            // 0x1cbac4: 0x2958821  addu        $s1, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB50u;
            goto label_1cbb50;
        }
    }
    ctx->pc = 0x1CBAC8u;
label_1cbac8:
    // 0x1cbac8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cbac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cbacc:
    // 0x1cbacc: 0x8d440018  lw          $a0, 0x18($t2)
    ctx->pc = 0x1cbaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_1cbad0:
    // 0x1cbad0: 0x8c431940  lw          $v1, 0x1940($v0)
    ctx->pc = 0x1cbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6464)));
label_1cbad4:
    // 0x1cbad4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1cbad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1cbad8:
    // 0x1cbad8: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
label_1cbadc:
    if (ctx->pc == 0x1CBADCu) {
        ctx->pc = 0x1CBADCu;
            // 0x1cbadc: 0x2958821  addu        $s1, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->pc = 0x1CBAE0u;
        goto label_1cbae0;
    }
    ctx->pc = 0x1CBAD8u;
    {
        const bool branch_taken_0x1cbad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbad8) {
            ctx->pc = 0x1CBADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAD8u;
            // 0x1cbadc: 0x2958821  addu        $s1, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB50u;
            goto label_1cbb50;
        }
    }
    ctx->pc = 0x1CBAE0u;
label_1cbae0:
    // 0x1cbae0: 0x26f00ed0  addiu       $s0, $s7, 0xED0
    ctx->pc = 0x1cbae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3792));
label_1cbae4:
    // 0x1cbae4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cbae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cbae8:
    // 0x1cbae8: 0x1301021  addu        $v0, $t1, $s0
    ctx->pc = 0x1cbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_1cbaec:
    // 0x1cbaec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cbaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbaf0:
    // 0x1cbaf0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1cbaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_1cbaf4:
    // 0x1cbaf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cbaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbaf8:
    // 0x1cbaf8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1cbaf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbafc:
    // 0x1cbafc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbb00:
    // 0x1cbb00: 0x8d43001c  lw          $v1, 0x1C($t2)
    ctx->pc = 0x1cbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_1cbb04:
    // 0x1cbb04: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1cbb04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb08:
    // 0x1cbb08: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x1cbb08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1cbb0c:
    // 0x1cbb0c: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x1cbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_1cbb10:
    // 0x1cbb10: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x1cbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_1cbb14:
    // 0x1cbb14: 0xe0f809  jalr        $a3
label_1cbb18:
    if (ctx->pc == 0x1CBB18u) {
        ctx->pc = 0x1CBB18u;
            // 0x1cbb18: 0xad220014  sw          $v0, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x1CBB1Cu;
        goto label_1cbb1c;
    }
    ctx->pc = 0x1CBB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1CBB1Cu);
        ctx->pc = 0x1CBB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB14u;
            // 0x1cbb18: 0xad220014  sw          $v0, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBB1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB1Cu; }
            if (ctx->pc != 0x1CBB1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CBB1Cu;
label_1cbb1c:
    // 0x1cbb1c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbb20:
    // 0x1cbb20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cbb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cbb24:
    // 0x1cbb24: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1cbb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1cbb28:
    // 0x1cbb28: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1cbb28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb2c:
    // 0x1cbb2c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1cbb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1cbb30:
    // 0x1cbb30: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cbb34:
    // 0x1cbb34: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x1cbb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cbb38:
    // 0x1cbb38: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1cbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1cbb3c:
    // 0x1cbb3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cbb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb40:
    // 0x1cbb40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cbb44:
    // 0x1cbb44: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1cbb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1cbb48:
    // 0x1cbb48: 0x10000205  b           . + 4 + (0x205 << 2)
label_1cbb4c:
    if (ctx->pc == 0x1CBB4Cu) {
        ctx->pc = 0x1CBB4Cu;
            // 0x1cbb4c: 0xa0c7000e  sb          $a3, 0xE($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x1CBB50u;
        goto label_1cbb50;
    }
    ctx->pc = 0x1CBB48u;
    {
        const bool branch_taken_0x1cbb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB48u;
            // 0x1cbb4c: 0xa0c7000e  sb          $a3, 0xE($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb48) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CBB50u;
label_1cbb50:
    // 0x1cbb50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cbb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1cbb54:
    // 0x1cbb54: 0x24708a88  addiu       $s0, $v1, -0x7578
    ctx->pc = 0x1cbb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937224));
label_1cbb58:
    // 0x1cbb58: 0x1190c0  sll         $s2, $s1, 3
    ctx->pc = 0x1cbb58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1cbb5c:
    // 0x1cbb5c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cbb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1cbb60:
    // 0x1cbb60: 0x250a021  addu        $s4, $s2, $s0
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1cbb64:
    // 0x1cbb64: 0x2493a70c  addiu       $s3, $a0, -0x58F4
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944524));
label_1cbb68:
    // 0x1cbb68: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cbb6c:
    // 0x1cbb6c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1cbb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1cbb70:
    // 0x1cbb70: 0xc05a804  jal         func_16A010
label_1cbb74:
    if (ctx->pc == 0x1CBB74u) {
        ctx->pc = 0x1CBB74u;
            // 0x1cbb74: 0x118880  sll         $s1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1CBB78u;
        goto label_1cbb78;
    }
    ctx->pc = 0x1CBB70u;
    SET_GPR_U32(ctx, 31, 0x1CBB78u);
    ctx->pc = 0x1CBB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB70u;
            // 0x1cbb74: 0x118880  sll         $s1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB78u; }
        if (ctx->pc != 0x1CBB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB78u; }
        if (ctx->pc != 0x1CBB78u) { return; }
    }
    ctx->pc = 0x1CBB78u;
label_1cbb78:
    // 0x1cbb78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cbb7c:
    // 0x1cbb7c: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1cbb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_1cbb80:
    // 0x1cbb80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbb84:
    // 0x1cbb84: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1cbb88:
    // 0x1cbb88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1cbb8c:
    // 0x1cbb8c: 0x40f809  jalr        $v0
label_1cbb90:
    if (ctx->pc == 0x1CBB90u) {
        ctx->pc = 0x1CBB90u;
            // 0x1cbb90: 0x26110eb0  addiu       $s1, $s0, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
        ctx->pc = 0x1CBB94u;
        goto label_1cbb94;
    }
    ctx->pc = 0x1CBB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBB94u);
        ctx->pc = 0x1CBB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB8Cu;
            // 0x1cbb90: 0x26110eb0  addiu       $s1, $s0, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBB94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB94u; }
            if (ctx->pc != 0x1CBB94u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBB94u;
label_1cbb94:
    // 0x1cbb94: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cbb98:
    // 0x1cbb98: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1cbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1cbb9c:
    // 0x1cbb9c: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1cbb9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1cbba0:
    // 0x1cbba0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cbba4:
    if (ctx->pc == 0x1CBBA4u) {
        ctx->pc = 0x1CBBA4u;
            // 0x1cbba4: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->pc = 0x1CBBA8u;
        goto label_1cbba8;
    }
    ctx->pc = 0x1CBBA0u;
    {
        const bool branch_taken_0x1cbba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbba0) {
            ctx->pc = 0x1CBBA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBA0u;
            // 0x1cbba4: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBBBCu;
            goto label_1cbbbc;
        }
    }
    ctx->pc = 0x1CBBA8u;
label_1cbba8:
    // 0x1cbba8: 0xc04a246  jal         func_128918
label_1cbbac:
    if (ctx->pc == 0x1CBBACu) {
        ctx->pc = 0x1CBBACu;
            // 0x1cbbac: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x1CBBB0u;
        goto label_1cbbb0;
    }
    ctx->pc = 0x1CBBA8u;
    SET_GPR_U32(ctx, 31, 0x1CBBB0u);
    ctx->pc = 0x1CBBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBA8u;
            // 0x1cbbac: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBB0u; }
        if (ctx->pc != 0x1CBBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBB0u; }
        if (ctx->pc != 0x1CBBB0u) { return; }
    }
    ctx->pc = 0x1CBBB0u;
label_1cbbb0:
    // 0x1cbbb0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cbbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cbbb4:
    // 0x1cbbb4: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1cbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1cbbb8:
    // 0x1cbbb8: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1cbbb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1cbbbc:
    // 0x1cbbbc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cbbc0:
    if (ctx->pc == 0x1CBBC0u) {
        ctx->pc = 0x1CBBC0u;
            // 0x1cbbc0: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->pc = 0x1CBBC4u;
        goto label_1cbbc4;
    }
    ctx->pc = 0x1CBBBCu;
    {
        const bool branch_taken_0x1cbbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbbc) {
            ctx->pc = 0x1CBBC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBBCu;
            // 0x1cbbc0: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBBD8u;
            goto label_1cbbd8;
        }
    }
    ctx->pc = 0x1CBBC4u;
label_1cbbc4:
    // 0x1cbbc4: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1cbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1cbbc8:
    // 0x1cbbc8: 0xc045262  jal         func_114988
label_1cbbcc:
    if (ctx->pc == 0x1CBBCCu) {
        ctx->pc = 0x1CBBCCu;
            // 0x1cbbcc: 0x8c440ecc  lw          $a0, 0xECC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
        ctx->pc = 0x1CBBD0u;
        goto label_1cbbd0;
    }
    ctx->pc = 0x1CBBC8u;
    SET_GPR_U32(ctx, 31, 0x1CBBD0u);
    ctx->pc = 0x1CBBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBC8u;
            // 0x1cbbcc: 0x8c440ecc  lw          $a0, 0xECC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBD0u; }
        if (ctx->pc != 0x1CBBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBD0u; }
        if (ctx->pc != 0x1CBBD0u) { return; }
    }
    ctx->pc = 0x1CBBD0u;
label_1cbbd0:
    // 0x1cbbd0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cbbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cbbd4:
    // 0x1cbbd4: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1cbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1cbbd8:
    // 0x1cbbd8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cbbdc:
    // 0x1cbbdc: 0xa062000e  sb          $v0, 0xE($v1)
    ctx->pc = 0x1cbbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
label_1cbbe0:
    // 0x1cbbe0: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x1cbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_1cbbe4:
    // 0x1cbbe4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1cbbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1cbbe8:
    // 0x1cbbe8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cbbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cbbec:
    // 0x1cbbec: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1cbbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cbbf0:
    // 0x1cbbf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cbbf4:
    // 0x1cbbf4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1cbbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cbbf8:
    // 0x1cbbf8: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x1cbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_1cbbfc:
    // 0x1cbbfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cbbfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc00:
    // 0x1cbc00: 0xac650bb0  sw          $a1, 0xBB0($v1)
    ctx->pc = 0x1cbc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2992), GPR_U32(ctx, 5));
label_1cbc04:
    // 0x1cbc04: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_1cbc08:
    if (ctx->pc == 0x1CBC08u) {
        ctx->pc = 0x1CBC08u;
            // 0x1cbc08: 0xac860df0  sw          $a2, 0xDF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3568), GPR_U32(ctx, 6));
        ctx->pc = 0x1CBC0Cu;
        goto label_1cbc0c;
    }
    ctx->pc = 0x1CBC04u;
    {
        const bool branch_taken_0x1cbc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC04u;
            // 0x1cbc08: 0xac860df0  sw          $a2, 0xDF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3568), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc04) {
            ctx->pc = 0x1CC364u;
            goto label_1cc364;
        }
    }
    ctx->pc = 0x1CBC0Cu;
label_1cbc0c:
    // 0x1cbc0c: 0x0  nop
    ctx->pc = 0x1cbc0cu;
    // NOP
label_1cbc10:
    // 0x1cbc10: 0x10000165  b           . + 4 + (0x165 << 2)
label_1cbc14:
    if (ctx->pc == 0x1CBC14u) {
        ctx->pc = 0x1CBC14u;
            // 0x1cbc14: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1CBC18u;
        goto label_1cbc18;
    }
    ctx->pc = 0x1CBC10u;
    {
        const bool branch_taken_0x1cbc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC10u;
            // 0x1cbc14: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc10) {
            ctx->pc = 0x1CC1A8u;
            goto label_1cc1a8;
        }
    }
    ctx->pc = 0x1CBC18u;
label_1cbc18:
    // 0x1cbc18: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1cbc18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1cbc1c:
    // 0x1cbc1c: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x1cbc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1cbc20:
    // 0x1cbc20: 0x24c68a88  addiu       $a2, $a2, -0x7578
    ctx->pc = 0x1cbc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937224));
label_1cbc24:
    // 0x1cbc24: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x1cbc24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cbc28:
    // 0x1cbc28: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1cbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1cbc2c:
    // 0x1cbc2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cbc30:
    // 0x1cbc30: 0x262b021  addu        $s6, $s3, $v0
    ctx->pc = 0x1cbc30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1cbc34:
    // 0x1cbc34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cbc38:
    // 0x1cbc38: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1cbc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1cbc3c:
    // 0x1cbc3c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1cbc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbc40:
    // 0x1cbc40: 0x245ea70c  addiu       $fp, $v0, -0x58F4
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
label_1cbc44:
    // 0x1cbc44: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cbc48:
    // 0x1cbc48: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbc4c:
    // 0x1cbc4c: 0x26370ed0  addiu       $s7, $s1, 0xED0
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 3792));
label_1cbc50:
    // 0x1cbc50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbc54:
    // 0x1cbc54: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1cbc58:
    // 0x1cbc58: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1cbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1cbc5c:
    // 0x1cbc5c: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x1cbc5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1cbc60:
    // 0x1cbc60: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1cbc60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1cbc64:
    // 0x1cbc64: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1cbc64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc68:
    // 0x1cbc68: 0x8ca80018  lw          $t0, 0x18($a1)
    ctx->pc = 0x1cbc68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1cbc6c:
    // 0x1cbc6c: 0x100f809  jalr        $t0
label_1cbc70:
    if (ctx->pc == 0x1CBC70u) {
        ctx->pc = 0x1CBC70u;
            // 0x1cbc70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CBC74u;
        goto label_1cbc74;
    }
    ctx->pc = 0x1CBC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1CBC74u);
        ctx->pc = 0x1CBC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC6Cu;
            // 0x1cbc70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBC74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC74u; }
            if (ctx->pc != 0x1CBC74u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBC74u;
label_1cbc74:
    // 0x1cbc74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1cbc78:
    // 0x1cbc78: 0x24638a88  addiu       $v1, $v1, -0x7578
    ctx->pc = 0x1cbc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937224));
label_1cbc7c:
    // 0x1cbc7c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1cbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cbc80:
    // 0x1cbc80: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x1cbc80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1cbc84:
    // 0x1cbc84: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1cbc84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cbc88:
    // 0x1cbc88: 0x10c0004f  beqz        $a2, . + 4 + (0x4F << 2)
label_1cbc8c:
    if (ctx->pc == 0x1CBC8Cu) {
        ctx->pc = 0x1CBC8Cu;
            // 0x1cbc8c: 0x26300ec0  addiu       $s0, $s1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3776));
        ctx->pc = 0x1CBC90u;
        goto label_1cbc90;
    }
    ctx->pc = 0x1CBC88u;
    {
        const bool branch_taken_0x1cbc88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC88u;
            // 0x1cbc8c: 0x26300ec0  addiu       $s0, $s1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc88) {
            ctx->pc = 0x1CBDC8u;
            goto label_1cbdc8;
        }
    }
    ctx->pc = 0x1CBC90u;
label_1cbc90:
    // 0x1cbc90: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbc94:
    // 0x1cbc94: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cbc98:
    // 0x1cbc98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbc9c:
    // 0x1cbc9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1cbca0:
    // 0x1cbca0: 0xc046238  jal         func_1188E0
label_1cbca4:
    if (ctx->pc == 0x1CBCA4u) {
        ctx->pc = 0x1CBCA4u;
            // 0x1cbca4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x1CBCA8u;
        goto label_1cbca8;
    }
    ctx->pc = 0x1CBCA0u;
    SET_GPR_U32(ctx, 31, 0x1CBCA8u);
    ctx->pc = 0x1CBCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCA0u;
            // 0x1cbca4: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1188E0u;
    if (runtime->hasFunction(0x1188E0u)) {
        auto targetFn = runtime->lookupFunction(0x1188E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCA8u; }
        if (ctx->pc != 0x1CBCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001188E0_0x1188e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCA8u; }
        if (ctx->pc != 0x1CBCA8u) { return; }
    }
    ctx->pc = 0x1CBCA8u;
label_1cbca8:
    // 0x1cbca8: 0x4410027  bgez        $v0, . + 4 + (0x27 << 2)
label_1cbcac:
    if (ctx->pc == 0x1CBCACu) {
        ctx->pc = 0x1CBCACu;
            // 0x1cbcac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CBCB0u;
        goto label_1cbcb0;
    }
    ctx->pc = 0x1CBCA8u;
    {
        const bool branch_taken_0x1cbca8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CBCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCA8u;
            // 0x1cbcac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbca8) {
            ctx->pc = 0x1CBD48u;
            goto label_1cbd48;
        }
    }
    ctx->pc = 0x1CBCB0u;
label_1cbcb0:
    // 0x1cbcb0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1cbcb4:
    // 0x1cbcb4: 0x26310eb0  addiu       $s1, $s1, 0xEB0
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3760));
label_1cbcb8:
    // 0x1cbcb8: 0x24848a88  addiu       $a0, $a0, -0x7578
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937224));
label_1cbcbc:
    // 0x1cbcbc: 0x2649021  addu        $s2, $s3, $a0
    ctx->pc = 0x1cbcbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1cbcc0:
    // 0x1cbcc0: 0xc05a804  jal         func_16A010
label_1cbcc4:
    if (ctx->pc == 0x1CBCC4u) {
        ctx->pc = 0x1CBCC4u;
            // 0x1cbcc4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1CBCC8u;
        goto label_1cbcc8;
    }
    ctx->pc = 0x1CBCC0u;
    SET_GPR_U32(ctx, 31, 0x1CBCC8u);
    ctx->pc = 0x1CBCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCC0u;
            // 0x1cbcc4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCC8u; }
        if (ctx->pc != 0x1CBCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCC8u; }
        if (ctx->pc != 0x1CBCC8u) { return; }
    }
    ctx->pc = 0x1CBCC8u;
label_1cbcc8:
    // 0x1cbcc8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbccc:
    // 0x1cbccc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbcd0:
    // 0x1cbcd0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1cbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1cbcd4:
    // 0x1cbcd4: 0x40f809  jalr        $v0
label_1cbcd8:
    if (ctx->pc == 0x1CBCD8u) {
        ctx->pc = 0x1CBCDCu;
        goto label_1cbcdc;
    }
    ctx->pc = 0x1CBCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBCDCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBCDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCDCu; }
            if (ctx->pc != 0x1CBCDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CBCDCu;
label_1cbcdc:
    // 0x1cbcdc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1cbcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbce0:
    // 0x1cbce0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1cbce4:
    // 0x1cbce4: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1cbce4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1cbce8:
    // 0x1cbce8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cbcec:
    if (ctx->pc == 0x1CBCECu) {
        ctx->pc = 0x1CBCECu;
            // 0x1cbcec: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->pc = 0x1CBCF0u;
        goto label_1cbcf0;
    }
    ctx->pc = 0x1CBCE8u;
    {
        const bool branch_taken_0x1cbce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbce8) {
            ctx->pc = 0x1CBCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCE8u;
            // 0x1cbcec: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD04u;
            goto label_1cbd04;
        }
    }
    ctx->pc = 0x1CBCF0u;
label_1cbcf0:
    // 0x1cbcf0: 0xc04a246  jal         func_128918
label_1cbcf4:
    if (ctx->pc == 0x1CBCF4u) {
        ctx->pc = 0x1CBCF4u;
            // 0x1cbcf4: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x1CBCF8u;
        goto label_1cbcf8;
    }
    ctx->pc = 0x1CBCF0u;
    SET_GPR_U32(ctx, 31, 0x1CBCF8u);
    ctx->pc = 0x1CBCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCF0u;
            // 0x1cbcf4: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCF8u; }
        if (ctx->pc != 0x1CBCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCF8u; }
        if (ctx->pc != 0x1CBCF8u) { return; }
    }
    ctx->pc = 0x1CBCF8u;
label_1cbcf8:
    // 0x1cbcf8: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbcfc:
    // 0x1cbcfc: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1cbd00:
    // 0x1cbd00: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1cbd00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1cbd04:
    // 0x1cbd04: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cbd08:
    if (ctx->pc == 0x1CBD08u) {
        ctx->pc = 0x1CBD08u;
            // 0x1cbd08: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->pc = 0x1CBD0Cu;
        goto label_1cbd0c;
    }
    ctx->pc = 0x1CBD04u;
    {
        const bool branch_taken_0x1cbd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd04) {
            ctx->pc = 0x1CBD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD04u;
            // 0x1cbd08: 0x911821  addu        $v1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD20u;
            goto label_1cbd20;
        }
    }
    ctx->pc = 0x1CBD0Cu;
label_1cbd0c:
    // 0x1cbd0c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1cbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1cbd10:
    // 0x1cbd10: 0xc045262  jal         func_114988
label_1cbd14:
    if (ctx->pc == 0x1CBD14u) {
        ctx->pc = 0x1CBD14u;
            // 0x1cbd14: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x1CBD18u;
        goto label_1cbd18;
    }
    ctx->pc = 0x1CBD10u;
    SET_GPR_U32(ctx, 31, 0x1CBD18u);
    ctx->pc = 0x1CBD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD10u;
            // 0x1cbd14: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD18u; }
        if (ctx->pc != 0x1CBD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD18u; }
        if (ctx->pc != 0x1CBD18u) { return; }
    }
    ctx->pc = 0x1CBD18u;
label_1cbd18:
    // 0x1cbd18: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1cbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbd1c:
    // 0x1cbd1c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1cbd20:
    // 0x1cbd20: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x1cbd20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1cbd24:
    // 0x1cbd24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cbd28:
    // 0x1cbd28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cbd2c:
    // 0x1cbd2c: 0xa062000e  sb          $v0, 0xE($v1)
    ctx->pc = 0x1cbd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
label_1cbd30:
    // 0x1cbd30: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1cbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1cbd34:
    // 0x1cbd34: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1cbd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cbd38:
    // 0x1cbd38: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbd3c:
    // 0x1cbd3c: 0x100000cd  b           . + 4 + (0xCD << 2)
label_1cbd40:
    if (ctx->pc == 0x1CBD40u) {
        ctx->pc = 0x1CBD40u;
            // 0x1cbd40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1CBD44u;
        goto label_1cbd44;
    }
    ctx->pc = 0x1CBD3Cu;
    {
        const bool branch_taken_0x1cbd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD3Cu;
            // 0x1cbd40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd3c) {
            ctx->pc = 0x1CC074u;
            goto label_1cc074;
        }
    }
    ctx->pc = 0x1CBD44u;
label_1cbd44:
    // 0x1cbd44: 0x0  nop
    ctx->pc = 0x1cbd44u;
    // NOP
label_1cbd48:
    // 0x1cbd48: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbd4c:
    // 0x1cbd4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cbd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd50:
    // 0x1cbd50: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1cbd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cbd54:
    // 0x1cbd54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cbd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd58:
    // 0x1cbd58: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1cbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1cbd5c:
    // 0x1cbd5c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1cbd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_1cbd60:
    // 0x1cbd60: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1cbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1cbd64:
    // 0x1cbd64: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbd68:
    // 0x1cbd68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbd6c:
    // 0x1cbd6c: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_1cbd70:
    // 0x1cbd70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cbd74:
    // 0x1cbd74: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1cbd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd78:
    // 0x1cbd78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cbd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1cbd7c:
    // 0x1cbd7c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1cbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cbd80:
    // 0x1cbd80: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cbd84:
    // 0x1cbd84: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1cbd88:
    // 0x1cbd88: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1cbd8c:
    // 0x1cbd8c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1cbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1cbd90:
    // 0x1cbd90: 0x100f809  jalr        $t0
label_1cbd94:
    if (ctx->pc == 0x1CBD94u) {
        ctx->pc = 0x1CBD94u;
            // 0x1cbd94: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CBD98u;
        goto label_1cbd98;
    }
    ctx->pc = 0x1CBD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1CBD98u);
        ctx->pc = 0x1CBD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD90u;
            // 0x1cbd94: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBD98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD98u; }
            if (ctx->pc != 0x1CBD98u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBD98u;
label_1cbd98:
    // 0x1cbd98: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x1cbd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbd9c:
    // 0x1cbd9c: 0xd71021  addu        $v0, $a2, $s7
    ctx->pc = 0x1cbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_1cbda0:
    // 0x1cbda0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1cbda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1cbda4:
    // 0x1cbda4: 0x5460016f  bnel        $v1, $zero, . + 4 + (0x16F << 2)
label_1cbda8:
    if (ctx->pc == 0x1CBDA8u) {
        ctx->pc = 0x1CBDA8u;
            // 0x1cbda8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CBDACu;
        goto label_1cbdac;
    }
    ctx->pc = 0x1CBDA4u;
    {
        const bool branch_taken_0x1cbda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbda4) {
            ctx->pc = 0x1CBDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDA4u;
            // 0x1cbda8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC364u;
            goto label_1cc364;
        }
    }
    ctx->pc = 0x1CBDACu;
label_1cbdac:
    // 0x1cbdac: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1cbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1cbdb0:
    // 0x1cbdb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1cbdb4:
    if (ctx->pc == 0x1CBDB4u) {
        ctx->pc = 0x1CBDB4u;
            // 0x1cbdb4: 0x2261821  addu        $v1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->pc = 0x1CBDB8u;
        goto label_1cbdb8;
    }
    ctx->pc = 0x1CBDB0u;
    {
        const bool branch_taken_0x1cbdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDB0u;
            // 0x1cbdb4: 0x2261821  addu        $v1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdb0) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBDB8u;
label_1cbdb8:
    // 0x1cbdb8: 0x10000168  b           . + 4 + (0x168 << 2)
label_1cbdbc:
    if (ctx->pc == 0x1CBDBCu) {
        ctx->pc = 0x1CBDBCu;
            // 0x1cbdbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1CBDC0u;
        goto label_1cbdc0;
    }
    ctx->pc = 0x1CBDB8u;
    {
        const bool branch_taken_0x1cbdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDB8u;
            // 0x1cbdbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdb8) {
            ctx->pc = 0x1CC35Cu;
            goto label_1cc35c;
        }
    }
    ctx->pc = 0x1CBDC0u;
label_1cbdc0:
    // 0x1cbdc0: 0x10000166  b           . + 4 + (0x166 << 2)
label_1cbdc4:
    if (ctx->pc == 0x1CBDC4u) {
        ctx->pc = 0x1CBDC4u;
            // 0x1cbdc4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1CBDC8u;
        goto label_1cbdc8;
    }
    ctx->pc = 0x1CBDC0u;
    {
        const bool branch_taken_0x1cbdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDC0u;
            // 0x1cbdc4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdc0) {
            ctx->pc = 0x1CC35Cu;
            goto label_1cc35c;
        }
    }
    ctx->pc = 0x1CBDC8u;
label_1cbdc8:
    // 0x1cbdc8: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_1cbdcc:
    if (ctx->pc == 0x1CBDCCu) {
        ctx->pc = 0x1CBDCCu;
            // 0x1cbdcc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x1CBDD0u;
        goto label_1cbdd0;
    }
    ctx->pc = 0x1CBDC8u;
    {
        const bool branch_taken_0x1cbdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDC8u;
            // 0x1cbdcc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdc8) {
            ctx->pc = 0x1CC1A8u;
            goto label_1cc1a8;
        }
    }
    ctx->pc = 0x1CBDD0u;
label_1cbdd0:
    // 0x1cbdd0: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x1cbdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1cbdd4:
    // 0x1cbdd4: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_1cbdd8:
    // 0x1cbdd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cbddc:
    // 0x1cbddc: 0x24d6a70c  addiu       $s6, $a2, -0x58F4
    ctx->pc = 0x1cbddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944524));
label_1cbde0:
    // 0x1cbde0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cbde4:
    // 0x1cbde4: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1cbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbde8:
    // 0x1cbde8: 0x2a880  sll         $s5, $v0, 2
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cbdec:
    // 0x1cbdec: 0x26b40ed0  addiu       $s4, $s5, 0xED0
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 3792));
label_1cbdf0:
    // 0x1cbdf0: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1cbdf4:
    // 0x1cbdf4: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1cbdf8:
    // 0x1cbdf8: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
label_1cbdfc:
    if (ctx->pc == 0x1CBDFCu) {
        ctx->pc = 0x1CBDFCu;
            // 0x1cbdfc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1CBE00u;
        goto label_1cbe00;
    }
    ctx->pc = 0x1CBDF8u;
    {
        const bool branch_taken_0x1cbdf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDF8u;
            // 0x1cbdfc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdf8) {
            ctx->pc = 0x1CBE90u;
            goto label_1cbe90;
        }
    }
    ctx->pc = 0x1CBE00u;
label_1cbe00:
    // 0x1cbe00: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cbe04:
    // 0x1cbe04: 0x24508a88  addiu       $s0, $v0, -0x7578
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937224));
label_1cbe08:
    // 0x1cbe08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbe0c:
    // 0x1cbe0c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1cbe10:
    // 0x1cbe10: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1cbe14:
    // 0x1cbe14: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1cbe18:
    // 0x1cbe18: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x1cbe18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1cbe1c:
    // 0x1cbe1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cbe20:
    // 0x1cbe20: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cbe20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe24:
    // 0x1cbe24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbe28:
    // 0x1cbe28: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1cbe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1cbe2c:
    // 0x1cbe2c: 0x40f809  jalr        $v0
label_1cbe30:
    if (ctx->pc == 0x1CBE30u) {
        ctx->pc = 0x1CBE30u;
            // 0x1cbe30: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->pc = 0x1CBE34u;
        goto label_1cbe34;
    }
    ctx->pc = 0x1CBE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBE34u);
        ctx->pc = 0x1CBE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE2Cu;
            // 0x1cbe30: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE34u; }
            if (ctx->pc != 0x1CBE34u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBE34u;
label_1cbe34:
    // 0x1cbe34: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbe38:
    // 0x1cbe38: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbe3c:
    // 0x1cbe3c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1cbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1cbe40:
    // 0x1cbe40: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1cbe44:
    // 0x1cbe44: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_1cbe48:
    if (ctx->pc == 0x1CBE48u) {
        ctx->pc = 0x1CBE48u;
            // 0x1cbe48: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1CBE4Cu;
        goto label_1cbe4c;
    }
    ctx->pc = 0x1CBE44u;
    {
        const bool branch_taken_0x1cbe44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CBE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE44u;
            // 0x1cbe48: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe44) {
            ctx->pc = 0x1CBE88u;
            goto label_1cbe88;
        }
    }
    ctx->pc = 0x1CBE4Cu;
label_1cbe4c:
    // 0x1cbe4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1cbe4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe50:
    // 0x1cbe50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbe54:
    // 0x1cbe54: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1cbe58:
    // 0x1cbe58: 0x60f809  jalr        $v1
label_1cbe5c:
    if (ctx->pc == 0x1CBE5Cu) {
        ctx->pc = 0x1CBE5Cu;
            // 0x1cbe5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE60u;
        goto label_1cbe60;
    }
    ctx->pc = 0x1CBE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CBE60u);
        ctx->pc = 0x1CBE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE58u;
            // 0x1cbe5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBE60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE60u; }
            if (ctx->pc != 0x1CBE60u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBE60u;
label_1cbe60:
    // 0x1cbe60: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1cbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbe64:
    // 0x1cbe64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cbe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cbe68:
    // 0x1cbe68: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1cbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1cbe6c:
    // 0x1cbe6c: 0xa0440ebe  sb          $a0, 0xEBE($v0)
    ctx->pc = 0x1cbe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3774), (uint8_t)GPR_U32(ctx, 4));
label_1cbe70:
    // 0x1cbe70: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1cbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbe74:
    // 0x1cbe74: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1cbe78:
    // 0x1cbe78: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1cbe7c:
    // 0x1cbe7c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cbe7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe80:
    // 0x1cbe80: 0x10000137  b           . + 4 + (0x137 << 2)
label_1cbe84:
    if (ctx->pc == 0x1CBE84u) {
        ctx->pc = 0x1CBE84u;
            // 0x1cbe84: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x1CBE88u;
        goto label_1cbe88;
    }
    ctx->pc = 0x1CBE80u;
    {
        const bool branch_taken_0x1cbe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE80u;
            // 0x1cbe84: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe80) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CBE88u;
label_1cbe88:
    // 0x1cbe88: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_1cbe8c:
    if (ctx->pc == 0x1CBE8Cu) {
        ctx->pc = 0x1CBE8Cu;
            // 0x1cbe8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE90u;
        goto label_1cbe90;
    }
    ctx->pc = 0x1CBE88u;
    {
        const bool branch_taken_0x1cbe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE88u;
            // 0x1cbe8c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe88) {
            ctx->pc = 0x1CC1ACu;
            goto label_1cc1ac;
        }
    }
    ctx->pc = 0x1CBE90u;
label_1cbe90:
    // 0x1cbe90: 0x26a60eb0  addiu       $a2, $s5, 0xEB0
    ctx->pc = 0x1cbe90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3760));
label_1cbe94:
    // 0x1cbe94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cbe98:
    // 0x1cbe98: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1cbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cbe9c:
    // 0x1cbe9c: 0xa043000e  sb          $v1, 0xE($v0)
    ctx->pc = 0x1cbe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
label_1cbea0:
    // 0x1cbea0: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x1cbea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbea4:
    // 0x1cbea4: 0xf41821  addu        $v1, $a3, $s4
    ctx->pc = 0x1cbea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_1cbea8:
    // 0x1cbea8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1cbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1cbeac:
    // 0x1cbeac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1cbeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeb0:
    // 0x1cbeb0: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
label_1cbeb4:
    if (ctx->pc == 0x1CBEB4u) {
        ctx->pc = 0x1CBEB4u;
            // 0x1cbeb4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x1CBEB8u;
        goto label_1cbeb8;
    }
    ctx->pc = 0x1CBEB0u;
    {
        const bool branch_taken_0x1cbeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEB0u;
            // 0x1cbeb4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbeb0) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CBEB8u;
label_1cbeb8:
    // 0x1cbeb8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1cbeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1cbebc:
    // 0x1cbebc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cbec0:
    // 0x1cbec0: 0x10000127  b           . + 4 + (0x127 << 2)
label_1cbec4:
    if (ctx->pc == 0x1CBEC4u) {
        ctx->pc = 0x1CBEC4u;
            // 0x1cbec4: 0xa062000e  sb          $v0, 0xE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1CBEC8u;
        goto label_1cbec8;
    }
    ctx->pc = 0x1CBEC0u;
    {
        const bool branch_taken_0x1cbec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEC0u;
            // 0x1cbec4: 0xa062000e  sb          $v0, 0xE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbec0) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CBEC8u;
label_1cbec8:
    // 0x1cbec8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cbecc:
    // 0x1cbecc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cbeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1cbed0:
    // 0x1cbed0: 0x2442a704  addiu       $v0, $v0, -0x58FC
    ctx->pc = 0x1cbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944516));
label_1cbed4:
    // 0x1cbed4: 0x247ea70c  addiu       $fp, $v1, -0x58F4
    ctx->pc = 0x1cbed4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944524));
label_1cbed8:
    // 0x1cbed8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbedc:
    // 0x1cbedc: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x1cbedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
label_1cbee0:
    // 0x1cbee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbee4:
    // 0x1cbee4: 0xc046262  jal         func_118988
label_1cbee8:
    if (ctx->pc == 0x1CBEE8u) {
        ctx->pc = 0x1CBEE8u;
            // 0x1cbee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEECu;
        goto label_1cbeec;
    }
    ctx->pc = 0x1CBEE4u;
    SET_GPR_U32(ctx, 31, 0x1CBEECu);
    ctx->pc = 0x1CBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEE4u;
            // 0x1cbee8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEECu; }
        if (ctx->pc != 0x1CBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEECu; }
        if (ctx->pc != 0x1CBEECu) { return; }
    }
    ctx->pc = 0x1CBEECu;
label_1cbeec:
    // 0x1cbeec: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1cbeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbef0:
    // 0x1cbef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cbef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbef4:
    // 0x1cbef4: 0x1443011a  bne         $v0, $v1, . + 4 + (0x11A << 2)
label_1cbef8:
    if (ctx->pc == 0x1CBEF8u) {
        ctx->pc = 0x1CBEF8u;
            // 0x1cbef8: 0xaca20ac4  sw          $v0, 0xAC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2756), GPR_U32(ctx, 2));
        ctx->pc = 0x1CBEFCu;
        goto label_1cbefc;
    }
    ctx->pc = 0x1CBEF4u;
    {
        const bool branch_taken_0x1cbef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CBEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEF4u;
            // 0x1cbef8: 0xaca20ac4  sw          $v0, 0xAC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbef4) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CBEFCu;
label_1cbefc:
    // 0x1cbefc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1cbf00:
    // 0x1cbf00: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1cbf04:
    // 0x1cbf04: 0x24848a88  addiu       $a0, $a0, -0x7578
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937224));
label_1cbf08:
    // 0x1cbf08: 0x2a0c0  sll         $s4, $v0, 3
    ctx->pc = 0x1cbf08u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cbf0c:
    // 0x1cbf0c: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x1cbf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1cbf10:
    // 0x1cbf10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cbf14:
    // 0x1cbf14: 0x283b821  addu        $s7, $s4, $v1
    ctx->pc = 0x1cbf14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1cbf18:
    // 0x1cbf18: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cbf1c:
    // 0x1cbf1c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1cbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1cbf20:
    // 0x1cbf20: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1cbf20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cbf24:
    // 0x1cbf24: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1cbf24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1cbf28:
    // 0x1cbf28: 0x26330eb0  addiu       $s3, $s1, 0xEB0
    ctx->pc = 0x1cbf28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3760));
label_1cbf2c:
    // 0x1cbf2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbf30:
    // 0x1cbf30: 0x24c68a88  addiu       $a2, $a2, -0x7578
    ctx->pc = 0x1cbf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937224));
label_1cbf34:
    // 0x1cbf34: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x1cbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1cbf38:
    // 0x1cbf38: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1cbf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1cbf3c:
    // 0x1cbf3c: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x1cbf3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1cbf40:
    // 0x1cbf40: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1cbf40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1cbf44:
    // 0x1cbf44: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x1cbf44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1cbf48:
    // 0x1cbf48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1cbf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf4c:
    // 0x1cbf4c: 0x100f809  jalr        $t0
label_1cbf50:
    if (ctx->pc == 0x1CBF50u) {
        ctx->pc = 0x1CBF50u;
            // 0x1cbf50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CBF54u;
        goto label_1cbf54;
    }
    ctx->pc = 0x1CBF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1CBF54u);
        ctx->pc = 0x1CBF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF4Cu;
            // 0x1cbf50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBF54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF54u; }
            if (ctx->pc != 0x1CBF54u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBF54u;
label_1cbf54:
    // 0x1cbf54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1cbf58:
    // 0x1cbf58: 0x24638a88  addiu       $v1, $v1, -0x7578
    ctx->pc = 0x1cbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937224));
label_1cbf5c:
    // 0x1cbf5c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1cbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cbf60:
    // 0x1cbf60: 0x282b021  addu        $s6, $s4, $v0
    ctx->pc = 0x1cbf60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1cbf64:
    // 0x1cbf64: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x1cbf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbf68:
    // 0x1cbf68: 0x50c0008f  beql        $a2, $zero, . + 4 + (0x8F << 2)
label_1cbf6c:
    if (ctx->pc == 0x1CBF6Cu) {
        ctx->pc = 0x1CBF6Cu;
            // 0x1cbf6c: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x1CBF70u;
        goto label_1cbf70;
    }
    ctx->pc = 0x1CBF68u;
    {
        const bool branch_taken_0x1cbf68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf68) {
            ctx->pc = 0x1CBF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF68u;
            // 0x1cbf6c: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC1A8u;
            goto label_1cc1a8;
        }
    }
    ctx->pc = 0x1CBF70u;
label_1cbf70:
    // 0x1cbf70: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cbf70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbf74:
    // 0x1cbf74: 0x2271021  addu        $v0, $s1, $a3
    ctx->pc = 0x1cbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_1cbf78:
    // 0x1cbf78: 0x8c450edc  lw          $a1, 0xEDC($v0)
    ctx->pc = 0x1cbf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3804)));
label_1cbf7c:
    // 0x1cbf7c: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x1cbf7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cbf80:
    // 0x1cbf80: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_1cbf84:
    if (ctx->pc == 0x1CBF84u) {
        ctx->pc = 0x1CBF84u;
            // 0x1cbf84: 0x26310ec0  addiu       $s1, $s1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3776));
        ctx->pc = 0x1CBF88u;
        goto label_1cbf88;
    }
    ctx->pc = 0x1CBF80u;
    {
        const bool branch_taken_0x1cbf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf80) {
            ctx->pc = 0x1CBF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF80u;
            // 0x1cbf84: 0x26310ec0  addiu       $s1, $s1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3776));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBFCCu;
            goto label_1cbfcc;
        }
    }
    ctx->pc = 0x1CBF88u;
label_1cbf88:
    // 0x1cbf88: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1cbf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1cbf8c:
    // 0x1cbf8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cbf8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf90:
    // 0x1cbf90: 0x24848a88  addiu       $a0, $a0, -0x7578
    ctx->pc = 0x1cbf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937224));
label_1cbf94:
    // 0x1cbf94: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1cbf94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1cbf98:
    // 0x1cbf98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cbf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf9c:
    // 0x1cbf9c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x1cbf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1cbfa0:
    // 0x1cbfa0: 0xc061c20  jal         func_187080
label_1cbfa4:
    if (ctx->pc == 0x1CBFA4u) {
        ctx->pc = 0x1CBFA4u;
            // 0x1cbfa4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFA8u;
        goto label_1cbfa8;
    }
    ctx->pc = 0x1CBFA0u;
    SET_GPR_U32(ctx, 31, 0x1CBFA8u);
    ctx->pc = 0x1CBFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFA0u;
            // 0x1cbfa4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFA8u; }
        if (ctx->pc != 0x1CBFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFA8u; }
        if (ctx->pc != 0x1CBFA8u) { return; }
    }
    ctx->pc = 0x1CBFA8u;
label_1cbfa8:
    // 0x1cbfa8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1cbfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1cbfac:
    // 0x1cbfac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cbfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfb0:
    // 0x1cbfb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbfb4:
    // 0x1cbfb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1cbfb8:
    // 0x1cbfb8: 0x40f809  jalr        $v0
label_1cbfbc:
    if (ctx->pc == 0x1CBFBCu) {
        ctx->pc = 0x1CBFBCu;
            // 0x1cbfbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFC0u;
        goto label_1cbfc0;
    }
    ctx->pc = 0x1CBFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBFC0u);
        ctx->pc = 0x1CBFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFB8u;
            // 0x1cbfbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBFC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFC0u; }
            if (ctx->pc != 0x1CBFC0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBFC0u;
label_1cbfc0:
    // 0x1cbfc0: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cbfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cbfc4:
    // 0x1cbfc4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x1cbfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cbfc8:
    // 0x1cbfc8: 0x26310ec0  addiu       $s1, $s1, 0xEC0
    ctx->pc = 0x1cbfc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3776));
label_1cbfcc:
    // 0x1cbfcc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cbfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cbfd0:
    // 0x1cbfd0: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_1cbfd4:
    // 0x1cbfd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbfd8:
    // 0x1cbfd8: 0xc046238  jal         func_1188E0
label_1cbfdc:
    if (ctx->pc == 0x1CBFDCu) {
        ctx->pc = 0x1CBFDCu;
            // 0x1cbfdc: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x1CBFE0u;
        goto label_1cbfe0;
    }
    ctx->pc = 0x1CBFD8u;
    SET_GPR_U32(ctx, 31, 0x1CBFE0u);
    ctx->pc = 0x1CBFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFD8u;
            // 0x1cbfdc: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1188E0u;
    if (runtime->hasFunction(0x1188E0u)) {
        auto targetFn = runtime->lookupFunction(0x1188E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFE0u; }
        if (ctx->pc != 0x1CBFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001188E0_0x1188e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFE0u; }
        if (ctx->pc != 0x1CBFE0u) { return; }
    }
    ctx->pc = 0x1CBFE0u;
label_1cbfe0:
    // 0x1cbfe0: 0x443002b  bgezl       $v0, . + 4 + (0x2B << 2)
label_1cbfe4:
    if (ctx->pc == 0x1CBFE4u) {
        ctx->pc = 0x1CBFE4u;
            // 0x1cbfe4: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x1CBFE8u;
        goto label_1cbfe8;
    }
    ctx->pc = 0x1CBFE0u;
    {
        const bool branch_taken_0x1cbfe0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cbfe0) {
            ctx->pc = 0x1CBFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFE0u;
            // 0x1cbfe4: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC090u;
            goto label_1cc090;
        }
    }
    ctx->pc = 0x1CBFE8u;
label_1cbfe8:
    // 0x1cbfe8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1cbfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1cbfec:
    // 0x1cbfec: 0x24c68a88  addiu       $a2, $a2, -0x7578
    ctx->pc = 0x1cbfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937224));
label_1cbff0:
    // 0x1cbff0: 0x2868021  addu        $s0, $s4, $a2
    ctx->pc = 0x1cbff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_1cbff4:
    // 0x1cbff4: 0xc05a804  jal         func_16A010
label_1cbff8:
    if (ctx->pc == 0x1CBFF8u) {
        ctx->pc = 0x1CBFF8u;
            // 0x1cbff8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CBFFCu;
        goto label_1cbffc;
    }
    ctx->pc = 0x1CBFF4u;
    SET_GPR_U32(ctx, 31, 0x1CBFFCu);
    ctx->pc = 0x1CBFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFF4u;
            // 0x1cbff8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFFCu; }
        if (ctx->pc != 0x1CBFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFFCu; }
        if (ctx->pc != 0x1CBFFCu) { return; }
    }
    ctx->pc = 0x1CBFFCu;
label_1cbffc:
    // 0x1cbffc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1cc000:
    // 0x1cc000: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc004:
    // 0x1cc004: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1cc004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1cc008:
    // 0x1cc008: 0x40f809  jalr        $v0
label_1cc00c:
    if (ctx->pc == 0x1CC00Cu) {
        ctx->pc = 0x1CC010u;
        goto label_1cc010;
    }
    ctx->pc = 0x1CC008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC010u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC010u; }
            if (ctx->pc != 0x1CC010u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC010u;
label_1cc010:
    // 0x1cc010: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc014:
    // 0x1cc014: 0xf31021  addu        $v0, $a3, $s3
    ctx->pc = 0x1cc014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1cc018:
    // 0x1cc018: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1cc018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1cc01c:
    // 0x1cc01c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cc020:
    if (ctx->pc == 0x1CC020u) {
        ctx->pc = 0x1CC020u;
            // 0x1cc020: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->pc = 0x1CC024u;
        goto label_1cc024;
    }
    ctx->pc = 0x1CC01Cu;
    {
        const bool branch_taken_0x1cc01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc01c) {
            ctx->pc = 0x1CC020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC01Cu;
            // 0x1cc020: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC038u;
            goto label_1cc038;
        }
    }
    ctx->pc = 0x1CC024u;
label_1cc024:
    // 0x1cc024: 0xc04a246  jal         func_128918
label_1cc028:
    if (ctx->pc == 0x1CC028u) {
        ctx->pc = 0x1CC028u;
            // 0x1cc028: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x1CC02Cu;
        goto label_1cc02c;
    }
    ctx->pc = 0x1CC024u;
    SET_GPR_U32(ctx, 31, 0x1CC02Cu);
    ctx->pc = 0x1CC028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC024u;
            // 0x1cc028: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC02Cu; }
        if (ctx->pc != 0x1CC02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC02Cu; }
        if (ctx->pc != 0x1CC02Cu) { return; }
    }
    ctx->pc = 0x1CC02Cu;
label_1cc02c:
    // 0x1cc02c: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cc02cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc030:
    // 0x1cc030: 0xf31021  addu        $v0, $a3, $s3
    ctx->pc = 0x1cc030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1cc034:
    // 0x1cc034: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1cc034u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1cc038:
    // 0x1cc038: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cc03c:
    if (ctx->pc == 0x1CC03Cu) {
        ctx->pc = 0x1CC03Cu;
            // 0x1cc03c: 0xf31821  addu        $v1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->pc = 0x1CC040u;
        goto label_1cc040;
    }
    ctx->pc = 0x1CC038u;
    {
        const bool branch_taken_0x1cc038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc038) {
            ctx->pc = 0x1CC03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC038u;
            // 0x1cc03c: 0xf31821  addu        $v1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC054u;
            goto label_1cc054;
        }
    }
    ctx->pc = 0x1CC040u;
label_1cc040:
    // 0x1cc040: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1cc040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_1cc044:
    // 0x1cc044: 0xc045262  jal         func_114988
label_1cc048:
    if (ctx->pc == 0x1CC048u) {
        ctx->pc = 0x1CC048u;
            // 0x1cc048: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x1CC04Cu;
        goto label_1cc04c;
    }
    ctx->pc = 0x1CC044u;
    SET_GPR_U32(ctx, 31, 0x1CC04Cu);
    ctx->pc = 0x1CC048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC044u;
            // 0x1cc048: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC04Cu; }
        if (ctx->pc != 0x1CC04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC04Cu; }
        if (ctx->pc != 0x1CC04Cu) { return; }
    }
    ctx->pc = 0x1CC04Cu;
label_1cc04c:
    // 0x1cc04c: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cc04cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc050:
    // 0x1cc050: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x1cc050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1cc054:
    // 0x1cc054: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1cc054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cc058:
    // 0x1cc058: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cc058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc05c:
    // 0x1cc05c: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x1cc05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1cc060:
    // 0x1cc060: 0xa062000e  sb          $v0, 0xE($v1)
    ctx->pc = 0x1cc060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
label_1cc064:
    // 0x1cc064: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1cc064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1cc068:
    // 0x1cc068: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc06c:
    // 0x1cc06c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc070:
    // 0x1cc070: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cc070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1cc074:
    // 0x1cc074: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1cc074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cc078:
    // 0x1cc078: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1cc078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cc07c:
    // 0x1cc07c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cc07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc080:
    // 0x1cc080: 0xac860bb0  sw          $a2, 0xBB0($a0)
    ctx->pc = 0x1cc080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2992), GPR_U32(ctx, 6));
label_1cc084:
    // 0x1cc084: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1cc088:
    if (ctx->pc == 0x1CC088u) {
        ctx->pc = 0x1CC088u;
            // 0x1cc088: 0xaca70df0  sw          $a3, 0xDF0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3568), GPR_U32(ctx, 7));
        ctx->pc = 0x1CC08Cu;
        goto label_1cc08c;
    }
    ctx->pc = 0x1CC084u;
    {
        const bool branch_taken_0x1cc084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC084u;
            // 0x1cc088: 0xaca70df0  sw          $a3, 0xDF0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3568), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc084) {
            ctx->pc = 0x1CC364u;
            goto label_1cc364;
        }
    }
    ctx->pc = 0x1CC08Cu;
label_1cc08c:
    // 0x1cc08c: 0x0  nop
    ctx->pc = 0x1cc08cu;
    // NOP
label_1cc090:
    // 0x1cc090: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1cc094:
    // 0x1cc094: 0x2463a704  addiu       $v1, $v1, -0x58FC
    ctx->pc = 0x1cc094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944516));
label_1cc098:
    // 0x1cc098: 0x8eca0000  lw          $t2, 0x0($s6)
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1cc09c:
    // 0x1cc09c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1cc09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc0a0:
    // 0x1cc0a0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1cc0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cc0a4:
    // 0x1cc0a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cc0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0a8:
    // 0x1cc0a8: 0x8c690014  lw          $t1, 0x14($v1)
    ctx->pc = 0x1cc0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1cc0ac:
    // 0x1cc0ac: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x1cc0acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1cc0b0:
    // 0x1cc0b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc0b4:
    // 0x1cc0b4: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x1cc0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
label_1cc0b8:
    // 0x1cc0b8: 0xc046262  jal         func_118988
label_1cc0bc:
    if (ctx->pc == 0x1CC0BCu) {
        ctx->pc = 0x1CC0BCu;
            // 0x1cc0bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0C0u;
        goto label_1cc0c0;
    }
    ctx->pc = 0x1CC0B8u;
    SET_GPR_U32(ctx, 31, 0x1CC0C0u);
    ctx->pc = 0x1CC0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0B8u;
            // 0x1cc0bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0C0u; }
        if (ctx->pc != 0x1CC0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0C0u; }
        if (ctx->pc != 0x1CC0C0u) { return; }
    }
    ctx->pc = 0x1CC0C0u;
label_1cc0c0:
    // 0x1cc0c0: 0x4410033  bgez        $v0, . + 4 + (0x33 << 2)
label_1cc0c4:
    if (ctx->pc == 0x1CC0C4u) {
        ctx->pc = 0x1CC0C4u;
            // 0x1cc0c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC0C8u;
        goto label_1cc0c8;
    }
    ctx->pc = 0x1CC0C0u;
    {
        const bool branch_taken_0x1cc0c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0C0u;
            // 0x1cc0c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0c0) {
            ctx->pc = 0x1CC190u;
            goto label_1cc190;
        }
    }
    ctx->pc = 0x1CC0C8u;
label_1cc0c8:
    // 0x1cc0c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1cc0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1cc0cc:
    // 0x1cc0cc: 0x24848a88  addiu       $a0, $a0, -0x7578
    ctx->pc = 0x1cc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937224));
label_1cc0d0:
    // 0x1cc0d0: 0x2848021  addu        $s0, $s4, $a0
    ctx->pc = 0x1cc0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1cc0d4:
    // 0x1cc0d4: 0xc05a804  jal         func_16A010
label_1cc0d8:
    if (ctx->pc == 0x1CC0D8u) {
        ctx->pc = 0x1CC0D8u;
            // 0x1cc0d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CC0DCu;
        goto label_1cc0dc;
    }
    ctx->pc = 0x1CC0D4u;
    SET_GPR_U32(ctx, 31, 0x1CC0DCu);
    ctx->pc = 0x1CC0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0D4u;
            // 0x1cc0d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0DCu; }
        if (ctx->pc != 0x1CC0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0DCu; }
        if (ctx->pc != 0x1CC0DCu) { return; }
    }
    ctx->pc = 0x1CC0DCu;
label_1cc0dc:
    // 0x1cc0dc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1cc0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1cc0e0:
    // 0x1cc0e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc0e4:
    // 0x1cc0e4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1cc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1cc0e8:
    // 0x1cc0e8: 0x40f809  jalr        $v0
label_1cc0ec:
    if (ctx->pc == 0x1CC0ECu) {
        ctx->pc = 0x1CC0F0u;
        goto label_1cc0f0;
    }
    ctx->pc = 0x1CC0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC0F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC0F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F0u; }
            if (ctx->pc != 0x1CC0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC0F0u;
label_1cc0f0:
    // 0x1cc0f0: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cc0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc0f4:
    // 0x1cc0f4: 0xf31021  addu        $v0, $a3, $s3
    ctx->pc = 0x1cc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1cc0f8:
    // 0x1cc0f8: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1cc0f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1cc0fc:
    // 0x1cc0fc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cc100:
    if (ctx->pc == 0x1CC100u) {
        ctx->pc = 0x1CC100u;
            // 0x1cc100: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->pc = 0x1CC104u;
        goto label_1cc104;
    }
    ctx->pc = 0x1CC0FCu;
    {
        const bool branch_taken_0x1cc0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc0fc) {
            ctx->pc = 0x1CC100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0FCu;
            // 0x1cc100: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC118u;
            goto label_1cc118;
        }
    }
    ctx->pc = 0x1CC104u;
label_1cc104:
    // 0x1cc104: 0xc04a246  jal         func_128918
label_1cc108:
    if (ctx->pc == 0x1CC108u) {
        ctx->pc = 0x1CC108u;
            // 0x1cc108: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x1CC10Cu;
        goto label_1cc10c;
    }
    ctx->pc = 0x1CC104u;
    SET_GPR_U32(ctx, 31, 0x1CC10Cu);
    ctx->pc = 0x1CC108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC104u;
            // 0x1cc108: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC10Cu; }
        if (ctx->pc != 0x1CC10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC10Cu; }
        if (ctx->pc != 0x1CC10Cu) { return; }
    }
    ctx->pc = 0x1CC10Cu;
label_1cc10c:
    // 0x1cc10c: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cc10cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc110:
    // 0x1cc110: 0xf31021  addu        $v0, $a3, $s3
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1cc114:
    // 0x1cc114: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1cc114u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1cc118:
    // 0x1cc118: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cc11c:
    if (ctx->pc == 0x1CC11Cu) {
        ctx->pc = 0x1CC11Cu;
            // 0x1cc11c: 0xf31821  addu        $v1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->pc = 0x1CC120u;
        goto label_1cc120;
    }
    ctx->pc = 0x1CC118u;
    {
        const bool branch_taken_0x1cc118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc118) {
            ctx->pc = 0x1CC11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC118u;
            // 0x1cc11c: 0xf31821  addu        $v1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC134u;
            goto label_1cc134;
        }
    }
    ctx->pc = 0x1CC120u;
label_1cc120:
    // 0x1cc120: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1cc120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_1cc124:
    // 0x1cc124: 0xc045262  jal         func_114988
label_1cc128:
    if (ctx->pc == 0x1CC128u) {
        ctx->pc = 0x1CC128u;
            // 0x1cc128: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x1CC12Cu;
        goto label_1cc12c;
    }
    ctx->pc = 0x1CC124u;
    SET_GPR_U32(ctx, 31, 0x1CC12Cu);
    ctx->pc = 0x1CC128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC124u;
            // 0x1cc128: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC12Cu; }
        if (ctx->pc != 0x1CC12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC12Cu; }
        if (ctx->pc != 0x1CC12Cu) { return; }
    }
    ctx->pc = 0x1CC12Cu;
label_1cc12c:
    // 0x1cc12c: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x1cc12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc130:
    // 0x1cc130: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x1cc130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1cc134:
    // 0x1cc134: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cc134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc138:
    // 0x1cc138: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cc138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc13c:
    // 0x1cc13c: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1cc140:
    // 0x1cc140: 0xa062000e  sb          $v0, 0xE($v1)
    ctx->pc = 0x1cc140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
label_1cc144:
    // 0x1cc144: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1cc144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cc148:
    // 0x1cc148: 0x2406ff2e  addiu       $a2, $zero, -0xD2
    ctx->pc = 0x1cc148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_1cc14c:
    // 0x1cc14c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x1cc14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc150:
    // 0x1cc150: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cc150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1cc154:
    // 0x1cc154: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1cc158:
    // 0x1cc158: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1cc158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cc15c:
    // 0x1cc15c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cc15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc160:
    // 0x1cc160: 0xac870bb0  sw          $a3, 0xBB0($a0)
    ctx->pc = 0x1cc160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2992), GPR_U32(ctx, 7));
label_1cc164:
    // 0x1cc164: 0xaca80df0  sw          $t0, 0xDF0($a1)
    ctx->pc = 0x1cc164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3568), GPR_U32(ctx, 8));
label_1cc168:
    // 0x1cc168: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cc168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc16c:
    // 0x1cc16c: 0x1066007d  beq         $v1, $a2, . + 4 + (0x7D << 2)
label_1cc170:
    if (ctx->pc == 0x1CC170u) {
        ctx->pc = 0x1CC170u;
            // 0x1cc170: 0x2402fff2  addiu       $v0, $zero, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
        ctx->pc = 0x1CC174u;
        goto label_1cc174;
    }
    ctx->pc = 0x1CC16Cu;
    {
        const bool branch_taken_0x1cc16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CC170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC16Cu;
            // 0x1cc170: 0x2402fff2  addiu       $v0, $zero, -0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc16c) {
            ctx->pc = 0x1CC364u;
            goto label_1cc364;
        }
    }
    ctx->pc = 0x1CC174u;
label_1cc174:
    // 0x1cc174: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1cc174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc178:
    // 0x1cc178: 0x2403ff37  addiu       $v1, $zero, -0xC9
    ctx->pc = 0x1cc178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967095));
label_1cc17c:
    // 0x1cc17c: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1cc17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1cc180:
    // 0x1cc180: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x1cc180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_1cc184:
    // 0x1cc184: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x1cc184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_1cc188:
    // 0x1cc188: 0x10000076  b           . + 4 + (0x76 << 2)
label_1cc18c:
    if (ctx->pc == 0x1CC18Cu) {
        ctx->pc = 0x1CC18Cu;
            // 0x1cc18c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->pc = 0x1CC190u;
        goto label_1cc190;
    }
    ctx->pc = 0x1CC188u;
    {
        const bool branch_taken_0x1cc188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC188u;
            // 0x1cc18c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc188) {
            ctx->pc = 0x1CC364u;
            goto label_1cc364;
        }
    }
    ctx->pc = 0x1CC190u;
label_1cc190:
    // 0x1cc190: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1cc190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1cc194:
    // 0x1cc194: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1cc194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cc198:
    // 0x1cc198: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1cc19c:
    // 0x1cc19c: 0x10000070  b           . + 4 + (0x70 << 2)
label_1cc1a0:
    if (ctx->pc == 0x1CC1A0u) {
        ctx->pc = 0x1CC1A0u;
            // 0x1cc1a0: 0xa043000e  sb          $v1, 0xE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1CC1A4u;
        goto label_1cc1a4;
    }
    ctx->pc = 0x1CC19Cu;
    {
        const bool branch_taken_0x1cc19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC19Cu;
            // 0x1cc1a0: 0xa043000e  sb          $v1, 0xE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc19c) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CC1A4u;
label_1cc1a4:
    // 0x1cc1a4: 0x0  nop
    ctx->pc = 0x1cc1a4u;
    // NOP
label_1cc1a8:
    // 0x1cc1a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cc1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1ac:
    // 0x1cc1ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc1b0:
    // 0x1cc1b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1cc1b4:
    // 0x1cc1b4: 0x40f809  jalr        $v0
label_1cc1b8:
    if (ctx->pc == 0x1CC1B8u) {
        ctx->pc = 0x1CC1B8u;
            // 0x1cc1b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CC1BCu;
        goto label_1cc1bc;
    }
    ctx->pc = 0x1CC1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC1BCu);
        ctx->pc = 0x1CC1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1B4u;
            // 0x1cc1b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC1BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1BCu; }
            if (ctx->pc != 0x1CC1BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CC1BCu;
label_1cc1bc:
    // 0x1cc1bc: 0x10000069  b           . + 4 + (0x69 << 2)
label_1cc1c0:
    if (ctx->pc == 0x1CC1C0u) {
        ctx->pc = 0x1CC1C0u;
            // 0x1cc1c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CC1C4u;
        goto label_1cc1c4;
    }
    ctx->pc = 0x1CC1BCu;
    {
        const bool branch_taken_0x1cc1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1BCu;
            // 0x1cc1c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1bc) {
            ctx->pc = 0x1CC364u;
            goto label_1cc364;
        }
    }
    ctx->pc = 0x1CC1C4u;
label_1cc1c4:
    // 0x1cc1c4: 0x0  nop
    ctx->pc = 0x1cc1c4u;
    // NOP
label_1cc1c8:
    // 0x1cc1c8: 0x2958821  addu        $s1, $s4, $s5
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1cc1cc:
    // 0x1cc1cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1cc1d0:
    // 0x1cc1d0: 0x24508a88  addiu       $s0, $v0, -0x7578
    ctx->pc = 0x1cc1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937224));
label_1cc1d4:
    // 0x1cc1d4: 0x1190c0  sll         $s2, $s1, 3
    ctx->pc = 0x1cc1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1cc1d8:
    // 0x1cc1d8: 0x250a021  addu        $s4, $s2, $s0
    ctx->pc = 0x1cc1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1cc1dc:
    // 0x1cc1dc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1cc1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1cc1e0:
    // 0x1cc1e0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cc1e4:
    // 0x1cc1e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1cc1e8:
    // 0x1cc1e8: 0x2473a70c  addiu       $s3, $v1, -0x58F4
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944524));
label_1cc1ec:
    // 0x1cc1ec: 0xc05a804  jal         func_16A010
label_1cc1f0:
    if (ctx->pc == 0x1CC1F0u) {
        ctx->pc = 0x1CC1F0u;
            // 0x1cc1f0: 0x118880  sll         $s1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1CC1F4u;
        goto label_1cc1f4;
    }
    ctx->pc = 0x1CC1ECu;
    SET_GPR_U32(ctx, 31, 0x1CC1F4u);
    ctx->pc = 0x1CC1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1ECu;
            // 0x1cc1f0: 0x118880  sll         $s1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1F4u; }
        if (ctx->pc != 0x1CC1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1F4u; }
        if (ctx->pc != 0x1CC1F4u) { return; }
    }
    ctx->pc = 0x1CC1F4u;
label_1cc1f4:
    // 0x1cc1f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1cc1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cc1f8:
    // 0x1cc1f8: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1cc1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_1cc1fc:
    // 0x1cc1fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc200:
    // 0x1cc200: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1cc204:
    // 0x1cc204: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1cc204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1cc208:
    // 0x1cc208: 0x40f809  jalr        $v0
label_1cc20c:
    if (ctx->pc == 0x1CC20Cu) {
        ctx->pc = 0x1CC20Cu;
            // 0x1cc20c: 0x26300eb0  addiu       $s0, $s1, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3760));
        ctx->pc = 0x1CC210u;
        goto label_1cc210;
    }
    ctx->pc = 0x1CC208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC210u);
        ctx->pc = 0x1CC20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC208u;
            // 0x1cc20c: 0x26300eb0  addiu       $s0, $s1, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3760));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC210u; }
            if (ctx->pc != 0x1CC210u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC210u;
label_1cc210:
    // 0x1cc210: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc214:
    // 0x1cc214: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1cc214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_1cc218:
    // 0x1cc218: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1cc218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1cc21c:
    // 0x1cc21c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_1cc220:
    if (ctx->pc == 0x1CC220u) {
        ctx->pc = 0x1CC220u;
            // 0x1cc220: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->pc = 0x1CC224u;
        goto label_1cc224;
    }
    ctx->pc = 0x1CC21Cu;
    {
        const bool branch_taken_0x1cc21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc21c) {
            ctx->pc = 0x1CC220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC21Cu;
            // 0x1cc220: 0x9043000d  lbu         $v1, 0xD($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC238u;
            goto label_1cc238;
        }
    }
    ctx->pc = 0x1CC224u;
label_1cc224:
    // 0x1cc224: 0xc04a246  jal         func_128918
label_1cc228:
    if (ctx->pc == 0x1CC228u) {
        ctx->pc = 0x1CC228u;
            // 0x1cc228: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x1CC22Cu;
        goto label_1cc22c;
    }
    ctx->pc = 0x1CC224u;
    SET_GPR_U32(ctx, 31, 0x1CC22Cu);
    ctx->pc = 0x1CC228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC224u;
            // 0x1cc228: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC22Cu; }
        if (ctx->pc != 0x1CC22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC22Cu; }
        if (ctx->pc != 0x1CC22Cu) { return; }
    }
    ctx->pc = 0x1CC22Cu;
label_1cc22c:
    // 0x1cc22c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1cc22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc230:
    // 0x1cc230: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1cc230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_1cc234:
    // 0x1cc234: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x1cc234u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_1cc238:
    // 0x1cc238: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1cc23c:
    if (ctx->pc == 0x1CC23Cu) {
        ctx->pc = 0x1CC23Cu;
            // 0x1cc23c: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->pc = 0x1CC240u;
        goto label_1cc240;
    }
    ctx->pc = 0x1CC238u;
    {
        const bool branch_taken_0x1cc238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC238u;
            // 0x1cc23c: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc238) {
            ctx->pc = 0x1CC248u;
            goto label_1cc248;
        }
    }
    ctx->pc = 0x1CC240u;
label_1cc240:
    // 0x1cc240: 0xc045262  jal         func_114988
label_1cc244:
    if (ctx->pc == 0x1CC244u) {
        ctx->pc = 0x1CC244u;
            // 0x1cc244: 0x8c440ecc  lw          $a0, 0xECC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
        ctx->pc = 0x1CC248u;
        goto label_1cc248;
    }
    ctx->pc = 0x1CC240u;
    SET_GPR_U32(ctx, 31, 0x1CC248u);
    ctx->pc = 0x1CC244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC240u;
            // 0x1cc244: 0x8c440ecc  lw          $a0, 0xECC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC248u; }
        if (ctx->pc != 0x1CC248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC248u; }
        if (ctx->pc != 0x1CC248u) { return; }
    }
    ctx->pc = 0x1CC248u;
label_1cc248:
    // 0x1cc248: 0xc0726d0  jal         func_1C9B40
label_1cc24c:
    if (ctx->pc == 0x1CC24Cu) {
        ctx->pc = 0x1CC24Cu;
            // 0x1cc24c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC250u;
        goto label_1cc250;
    }
    ctx->pc = 0x1CC248u;
    SET_GPR_U32(ctx, 31, 0x1CC250u);
    ctx->pc = 0x1CC24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC248u;
            // 0x1cc24c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9B40u;
    if (runtime->hasFunction(0x1C9B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C9B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC250u; }
        if (ctx->pc != 0x1CC250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9B40_0x1c9b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC250u; }
        if (ctx->pc != 0x1CC250u) { return; }
    }
    ctx->pc = 0x1CC250u;
label_1cc250:
    // 0x1cc250: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cc250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc254:
    // 0x1cc254: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1cc254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1cc258:
    // 0x1cc258: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x1cc258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1cc25c:
    // 0x1cc25c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc260:
    // 0x1cc260: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1cc260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cc264:
    // 0x1cc264: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cc264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc268:
    // 0x1cc268: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cc268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1cc26c:
    // 0x1cc26c: 0xa044000e  sb          $a0, 0xE($v0)
    ctx->pc = 0x1cc26cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 4));
label_1cc270:
    // 0x1cc270: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1cc270u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1cc274:
    // 0x1cc274: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cc274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc278:
    // 0x1cc278: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cc278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cc27c:
    // 0x1cc27c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cc280:
    // 0x1cc280: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cc280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc284:
    // 0x1cc284: 0xac660bb0  sw          $a2, 0xBB0($v1)
    ctx->pc = 0x1cc284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2992), GPR_U32(ctx, 6));
label_1cc288:
    // 0x1cc288: 0x10000035  b           . + 4 + (0x35 << 2)
label_1cc28c:
    if (ctx->pc == 0x1CC28Cu) {
        ctx->pc = 0x1CC28Cu;
            // 0x1cc28c: 0xac850df0  sw          $a1, 0xDF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3568), GPR_U32(ctx, 5));
        ctx->pc = 0x1CC290u;
        goto label_1cc290;
    }
    ctx->pc = 0x1CC288u;
    {
        const bool branch_taken_0x1cc288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC288u;
            // 0x1cc28c: 0xac850df0  sw          $a1, 0xDF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3568), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc288) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CC290u;
label_1cc290:
    // 0x1cc290: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cc290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1cc294:
    // 0x1cc294: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1cc298:
    // 0x1cc298: 0x8c46a704  lw          $a2, -0x58FC($v0)
    ctx->pc = 0x1cc298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944516)));
label_1cc29c:
    // 0x1cc29c: 0x2492a70c  addiu       $s2, $a0, -0x58F4
    ctx->pc = 0x1cc29cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944524));
label_1cc2a0:
    // 0x1cc2a0: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x1cc2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
label_1cc2a4:
    // 0x1cc2a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc2a8:
    // 0x1cc2a8: 0xc046262  jal         func_118988
label_1cc2ac:
    if (ctx->pc == 0x1CC2ACu) {
        ctx->pc = 0x1CC2ACu;
            // 0x1cc2ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CC2B0u;
        goto label_1cc2b0;
    }
    ctx->pc = 0x1CC2A8u;
    SET_GPR_U32(ctx, 31, 0x1CC2B0u);
    ctx->pc = 0x1CC2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2A8u;
            // 0x1cc2ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118988u;
    if (runtime->hasFunction(0x118988u)) {
        auto targetFn = runtime->lookupFunction(0x118988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2B0u; }
        if (ctx->pc != 0x1CC2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118988_0x118988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2B0u; }
        if (ctx->pc != 0x1CC2B0u) { return; }
    }
    ctx->pc = 0x1CC2B0u;
label_1cc2b0:
    // 0x1cc2b0: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x1cc2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cc2b4:
    // 0x1cc2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc2b8:
    // 0x1cc2b8: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
label_1cc2bc:
    if (ctx->pc == 0x1CC2BCu) {
        ctx->pc = 0x1CC2BCu;
            // 0x1cc2bc: 0xad220ac4  sw          $v0, 0xAC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 2756), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC2C0u;
        goto label_1cc2c0;
    }
    ctx->pc = 0x1CC2B8u;
    {
        const bool branch_taken_0x1cc2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2B8u;
            // 0x1cc2bc: 0xad220ac4  sw          $v0, 0xAC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 2756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2b8) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CC2C0u;
label_1cc2c0:
    // 0x1cc2c0: 0x2953021  addu        $a2, $s4, $s5
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1cc2c4:
    // 0x1cc2c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1cc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1cc2c8:
    // 0x1cc2c8: 0x24478a88  addiu       $a3, $v0, -0x7578
    ctx->pc = 0x1cc2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937224));
label_1cc2cc:
    // 0x1cc2cc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1cc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cc2d0:
    // 0x1cc2d0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cc2d4:
    // 0x1cc2d4: 0x24e8000c  addiu       $t0, $a3, 0xC
    ctx->pc = 0x1cc2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_1cc2d8:
    // 0x1cc2d8: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1cc2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cc2dc:
    // 0x1cc2dc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1cc2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cc2e0:
    // 0x1cc2e0: 0x2291821  addu        $v1, $s1, $t1
    ctx->pc = 0x1cc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_1cc2e4:
    // 0x1cc2e4: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x1cc2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_1cc2e8:
    // 0x1cc2e8: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x1cc2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1cc2ec:
    // 0x1cc2ec: 0x24630ed4  addiu       $v1, $v1, 0xED4
    ctx->pc = 0x1cc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3796));
label_1cc2f0:
    // 0x1cc2f0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cc2f4:
    // 0x1cc2f4: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1cc2f8:
    // 0x1cc2f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc2fc:
    // 0x1cc2fc: 0x26300ed0  addiu       $s0, $s1, 0xED0
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3792));
label_1cc300:
    // 0x1cc300: 0x1304821  addu        $t1, $t1, $s0
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_1cc304:
    // 0x1cc304: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1cc308:
    // 0x1cc308: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cc30c:
    // 0x1cc30c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1cc30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1cc310:
    // 0x1cc310: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cc310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1cc314:
    // 0x1cc314: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1cc314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1cc318:
    // 0x1cc318: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x1cc318u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc31c:
    // 0x1cc31c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc320:
    // 0x1cc320: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cc324:
    // 0x1cc324: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1cc324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1cc328:
    // 0x1cc328: 0x8d630020  lw          $v1, 0x20($t3)
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
label_1cc32c:
    // 0x1cc32c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1cc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1cc330:
    // 0x1cc330: 0x60f809  jalr        $v1
label_1cc334:
    if (ctx->pc == 0x1CC334u) {
        ctx->pc = 0x1CC334u;
            // 0x1cc334: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC338u;
        goto label_1cc338;
    }
    ctx->pc = 0x1CC330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC338u);
        ctx->pc = 0x1CC334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC330u;
            // 0x1cc334: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC338u; }
            if (ctx->pc != 0x1CC338u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC338u;
label_1cc338:
    // 0x1cc338: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cc338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cc33c:
    // 0x1cc33c: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x1cc33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1cc340:
    // 0x1cc340: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cc340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cc344:
    // 0x1cc344: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1cc348:
    if (ctx->pc == 0x1CC348u) {
        ctx->pc = 0x1CC348u;
            // 0x1cc348: 0x2231821  addu        $v1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CC34Cu;
        goto label_1cc34c;
    }
    ctx->pc = 0x1CC344u;
    {
        const bool branch_taken_0x1cc344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC344u;
            // 0x1cc348: 0x2231821  addu        $v1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc344) {
            ctx->pc = 0x1CC358u;
            goto label_1cc358;
        }
    }
    ctx->pc = 0x1CC34Cu;
label_1cc34c:
    // 0x1cc34c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cc350:
    if (ctx->pc == 0x1CC350u) {
        ctx->pc = 0x1CC350u;
            // 0x1cc350: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1CC354u;
        goto label_1cc354;
    }
    ctx->pc = 0x1CC34Cu;
    {
        const bool branch_taken_0x1cc34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC34Cu;
            // 0x1cc350: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc34c) {
            ctx->pc = 0x1CC35Cu;
            goto label_1cc35c;
        }
    }
    ctx->pc = 0x1CC354u;
label_1cc354:
    // 0x1cc354: 0x0  nop
    ctx->pc = 0x1cc354u;
    // NOP
label_1cc358:
    // 0x1cc358: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cc358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc35c:
    // 0x1cc35c: 0xa0620ebe  sb          $v0, 0xEBE($v1)
    ctx->pc = 0x1cc35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3774), (uint8_t)GPR_U32(ctx, 2));
label_1cc360:
    // 0x1cc360: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc364:
    // 0x1cc364: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cc364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc368:
    // 0x1cc368: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cc368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc36c:
    // 0x1cc36c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cc36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc370:
    // 0x1cc370: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cc370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cc374:
    // 0x1cc374: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1cc374u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc378:
    // 0x1cc378: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1cc378u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cc37c:
    // 0x1cc37c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1cc37cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc380:
    // 0x1cc380: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1cc380u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1cc384:
    // 0x1cc384: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1cc384u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc388:
    // 0x1cc388: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1cc388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1cc38c:
    // 0x1cc38c: 0x3e00008  jr          $ra
label_1cc390:
    if (ctx->pc == 0x1CC390u) {
        ctx->pc = 0x1CC390u;
            // 0x1cc390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1CC394u;
        goto label_1cc394;
    }
    ctx->pc = 0x1CC38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC38Cu;
            // 0x1cc390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC394u;
label_1cc394:
    // 0x1cc394: 0x0  nop
    ctx->pc = 0x1cc394u;
    // NOP
}
