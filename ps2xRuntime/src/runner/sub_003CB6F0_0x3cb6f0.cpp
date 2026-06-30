#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CB6F0
// Address: 0x3cb6f0 - 0x3cbe10
void sub_003CB6F0_0x3cb6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB6F0_0x3cb6f0");
#endif

    switch (ctx->pc) {
        case 0x3cb6f0u: goto label_3cb6f0;
        case 0x3cb6f4u: goto label_3cb6f4;
        case 0x3cb6f8u: goto label_3cb6f8;
        case 0x3cb6fcu: goto label_3cb6fc;
        case 0x3cb700u: goto label_3cb700;
        case 0x3cb704u: goto label_3cb704;
        case 0x3cb708u: goto label_3cb708;
        case 0x3cb70cu: goto label_3cb70c;
        case 0x3cb710u: goto label_3cb710;
        case 0x3cb714u: goto label_3cb714;
        case 0x3cb718u: goto label_3cb718;
        case 0x3cb71cu: goto label_3cb71c;
        case 0x3cb720u: goto label_3cb720;
        case 0x3cb724u: goto label_3cb724;
        case 0x3cb728u: goto label_3cb728;
        case 0x3cb72cu: goto label_3cb72c;
        case 0x3cb730u: goto label_3cb730;
        case 0x3cb734u: goto label_3cb734;
        case 0x3cb738u: goto label_3cb738;
        case 0x3cb73cu: goto label_3cb73c;
        case 0x3cb740u: goto label_3cb740;
        case 0x3cb744u: goto label_3cb744;
        case 0x3cb748u: goto label_3cb748;
        case 0x3cb74cu: goto label_3cb74c;
        case 0x3cb750u: goto label_3cb750;
        case 0x3cb754u: goto label_3cb754;
        case 0x3cb758u: goto label_3cb758;
        case 0x3cb75cu: goto label_3cb75c;
        case 0x3cb760u: goto label_3cb760;
        case 0x3cb764u: goto label_3cb764;
        case 0x3cb768u: goto label_3cb768;
        case 0x3cb76cu: goto label_3cb76c;
        case 0x3cb770u: goto label_3cb770;
        case 0x3cb774u: goto label_3cb774;
        case 0x3cb778u: goto label_3cb778;
        case 0x3cb77cu: goto label_3cb77c;
        case 0x3cb780u: goto label_3cb780;
        case 0x3cb784u: goto label_3cb784;
        case 0x3cb788u: goto label_3cb788;
        case 0x3cb78cu: goto label_3cb78c;
        case 0x3cb790u: goto label_3cb790;
        case 0x3cb794u: goto label_3cb794;
        case 0x3cb798u: goto label_3cb798;
        case 0x3cb79cu: goto label_3cb79c;
        case 0x3cb7a0u: goto label_3cb7a0;
        case 0x3cb7a4u: goto label_3cb7a4;
        case 0x3cb7a8u: goto label_3cb7a8;
        case 0x3cb7acu: goto label_3cb7ac;
        case 0x3cb7b0u: goto label_3cb7b0;
        case 0x3cb7b4u: goto label_3cb7b4;
        case 0x3cb7b8u: goto label_3cb7b8;
        case 0x3cb7bcu: goto label_3cb7bc;
        case 0x3cb7c0u: goto label_3cb7c0;
        case 0x3cb7c4u: goto label_3cb7c4;
        case 0x3cb7c8u: goto label_3cb7c8;
        case 0x3cb7ccu: goto label_3cb7cc;
        case 0x3cb7d0u: goto label_3cb7d0;
        case 0x3cb7d4u: goto label_3cb7d4;
        case 0x3cb7d8u: goto label_3cb7d8;
        case 0x3cb7dcu: goto label_3cb7dc;
        case 0x3cb7e0u: goto label_3cb7e0;
        case 0x3cb7e4u: goto label_3cb7e4;
        case 0x3cb7e8u: goto label_3cb7e8;
        case 0x3cb7ecu: goto label_3cb7ec;
        case 0x3cb7f0u: goto label_3cb7f0;
        case 0x3cb7f4u: goto label_3cb7f4;
        case 0x3cb7f8u: goto label_3cb7f8;
        case 0x3cb7fcu: goto label_3cb7fc;
        case 0x3cb800u: goto label_3cb800;
        case 0x3cb804u: goto label_3cb804;
        case 0x3cb808u: goto label_3cb808;
        case 0x3cb80cu: goto label_3cb80c;
        case 0x3cb810u: goto label_3cb810;
        case 0x3cb814u: goto label_3cb814;
        case 0x3cb818u: goto label_3cb818;
        case 0x3cb81cu: goto label_3cb81c;
        case 0x3cb820u: goto label_3cb820;
        case 0x3cb824u: goto label_3cb824;
        case 0x3cb828u: goto label_3cb828;
        case 0x3cb82cu: goto label_3cb82c;
        case 0x3cb830u: goto label_3cb830;
        case 0x3cb834u: goto label_3cb834;
        case 0x3cb838u: goto label_3cb838;
        case 0x3cb83cu: goto label_3cb83c;
        case 0x3cb840u: goto label_3cb840;
        case 0x3cb844u: goto label_3cb844;
        case 0x3cb848u: goto label_3cb848;
        case 0x3cb84cu: goto label_3cb84c;
        case 0x3cb850u: goto label_3cb850;
        case 0x3cb854u: goto label_3cb854;
        case 0x3cb858u: goto label_3cb858;
        case 0x3cb85cu: goto label_3cb85c;
        case 0x3cb860u: goto label_3cb860;
        case 0x3cb864u: goto label_3cb864;
        case 0x3cb868u: goto label_3cb868;
        case 0x3cb86cu: goto label_3cb86c;
        case 0x3cb870u: goto label_3cb870;
        case 0x3cb874u: goto label_3cb874;
        case 0x3cb878u: goto label_3cb878;
        case 0x3cb87cu: goto label_3cb87c;
        case 0x3cb880u: goto label_3cb880;
        case 0x3cb884u: goto label_3cb884;
        case 0x3cb888u: goto label_3cb888;
        case 0x3cb88cu: goto label_3cb88c;
        case 0x3cb890u: goto label_3cb890;
        case 0x3cb894u: goto label_3cb894;
        case 0x3cb898u: goto label_3cb898;
        case 0x3cb89cu: goto label_3cb89c;
        case 0x3cb8a0u: goto label_3cb8a0;
        case 0x3cb8a4u: goto label_3cb8a4;
        case 0x3cb8a8u: goto label_3cb8a8;
        case 0x3cb8acu: goto label_3cb8ac;
        case 0x3cb8b0u: goto label_3cb8b0;
        case 0x3cb8b4u: goto label_3cb8b4;
        case 0x3cb8b8u: goto label_3cb8b8;
        case 0x3cb8bcu: goto label_3cb8bc;
        case 0x3cb8c0u: goto label_3cb8c0;
        case 0x3cb8c4u: goto label_3cb8c4;
        case 0x3cb8c8u: goto label_3cb8c8;
        case 0x3cb8ccu: goto label_3cb8cc;
        case 0x3cb8d0u: goto label_3cb8d0;
        case 0x3cb8d4u: goto label_3cb8d4;
        case 0x3cb8d8u: goto label_3cb8d8;
        case 0x3cb8dcu: goto label_3cb8dc;
        case 0x3cb8e0u: goto label_3cb8e0;
        case 0x3cb8e4u: goto label_3cb8e4;
        case 0x3cb8e8u: goto label_3cb8e8;
        case 0x3cb8ecu: goto label_3cb8ec;
        case 0x3cb8f0u: goto label_3cb8f0;
        case 0x3cb8f4u: goto label_3cb8f4;
        case 0x3cb8f8u: goto label_3cb8f8;
        case 0x3cb8fcu: goto label_3cb8fc;
        case 0x3cb900u: goto label_3cb900;
        case 0x3cb904u: goto label_3cb904;
        case 0x3cb908u: goto label_3cb908;
        case 0x3cb90cu: goto label_3cb90c;
        case 0x3cb910u: goto label_3cb910;
        case 0x3cb914u: goto label_3cb914;
        case 0x3cb918u: goto label_3cb918;
        case 0x3cb91cu: goto label_3cb91c;
        case 0x3cb920u: goto label_3cb920;
        case 0x3cb924u: goto label_3cb924;
        case 0x3cb928u: goto label_3cb928;
        case 0x3cb92cu: goto label_3cb92c;
        case 0x3cb930u: goto label_3cb930;
        case 0x3cb934u: goto label_3cb934;
        case 0x3cb938u: goto label_3cb938;
        case 0x3cb93cu: goto label_3cb93c;
        case 0x3cb940u: goto label_3cb940;
        case 0x3cb944u: goto label_3cb944;
        case 0x3cb948u: goto label_3cb948;
        case 0x3cb94cu: goto label_3cb94c;
        case 0x3cb950u: goto label_3cb950;
        case 0x3cb954u: goto label_3cb954;
        case 0x3cb958u: goto label_3cb958;
        case 0x3cb95cu: goto label_3cb95c;
        case 0x3cb960u: goto label_3cb960;
        case 0x3cb964u: goto label_3cb964;
        case 0x3cb968u: goto label_3cb968;
        case 0x3cb96cu: goto label_3cb96c;
        case 0x3cb970u: goto label_3cb970;
        case 0x3cb974u: goto label_3cb974;
        case 0x3cb978u: goto label_3cb978;
        case 0x3cb97cu: goto label_3cb97c;
        case 0x3cb980u: goto label_3cb980;
        case 0x3cb984u: goto label_3cb984;
        case 0x3cb988u: goto label_3cb988;
        case 0x3cb98cu: goto label_3cb98c;
        case 0x3cb990u: goto label_3cb990;
        case 0x3cb994u: goto label_3cb994;
        case 0x3cb998u: goto label_3cb998;
        case 0x3cb99cu: goto label_3cb99c;
        case 0x3cb9a0u: goto label_3cb9a0;
        case 0x3cb9a4u: goto label_3cb9a4;
        case 0x3cb9a8u: goto label_3cb9a8;
        case 0x3cb9acu: goto label_3cb9ac;
        case 0x3cb9b0u: goto label_3cb9b0;
        case 0x3cb9b4u: goto label_3cb9b4;
        case 0x3cb9b8u: goto label_3cb9b8;
        case 0x3cb9bcu: goto label_3cb9bc;
        case 0x3cb9c0u: goto label_3cb9c0;
        case 0x3cb9c4u: goto label_3cb9c4;
        case 0x3cb9c8u: goto label_3cb9c8;
        case 0x3cb9ccu: goto label_3cb9cc;
        case 0x3cb9d0u: goto label_3cb9d0;
        case 0x3cb9d4u: goto label_3cb9d4;
        case 0x3cb9d8u: goto label_3cb9d8;
        case 0x3cb9dcu: goto label_3cb9dc;
        case 0x3cb9e0u: goto label_3cb9e0;
        case 0x3cb9e4u: goto label_3cb9e4;
        case 0x3cb9e8u: goto label_3cb9e8;
        case 0x3cb9ecu: goto label_3cb9ec;
        case 0x3cb9f0u: goto label_3cb9f0;
        case 0x3cb9f4u: goto label_3cb9f4;
        case 0x3cb9f8u: goto label_3cb9f8;
        case 0x3cb9fcu: goto label_3cb9fc;
        case 0x3cba00u: goto label_3cba00;
        case 0x3cba04u: goto label_3cba04;
        case 0x3cba08u: goto label_3cba08;
        case 0x3cba0cu: goto label_3cba0c;
        case 0x3cba10u: goto label_3cba10;
        case 0x3cba14u: goto label_3cba14;
        case 0x3cba18u: goto label_3cba18;
        case 0x3cba1cu: goto label_3cba1c;
        case 0x3cba20u: goto label_3cba20;
        case 0x3cba24u: goto label_3cba24;
        case 0x3cba28u: goto label_3cba28;
        case 0x3cba2cu: goto label_3cba2c;
        case 0x3cba30u: goto label_3cba30;
        case 0x3cba34u: goto label_3cba34;
        case 0x3cba38u: goto label_3cba38;
        case 0x3cba3cu: goto label_3cba3c;
        case 0x3cba40u: goto label_3cba40;
        case 0x3cba44u: goto label_3cba44;
        case 0x3cba48u: goto label_3cba48;
        case 0x3cba4cu: goto label_3cba4c;
        case 0x3cba50u: goto label_3cba50;
        case 0x3cba54u: goto label_3cba54;
        case 0x3cba58u: goto label_3cba58;
        case 0x3cba5cu: goto label_3cba5c;
        case 0x3cba60u: goto label_3cba60;
        case 0x3cba64u: goto label_3cba64;
        case 0x3cba68u: goto label_3cba68;
        case 0x3cba6cu: goto label_3cba6c;
        case 0x3cba70u: goto label_3cba70;
        case 0x3cba74u: goto label_3cba74;
        case 0x3cba78u: goto label_3cba78;
        case 0x3cba7cu: goto label_3cba7c;
        case 0x3cba80u: goto label_3cba80;
        case 0x3cba84u: goto label_3cba84;
        case 0x3cba88u: goto label_3cba88;
        case 0x3cba8cu: goto label_3cba8c;
        case 0x3cba90u: goto label_3cba90;
        case 0x3cba94u: goto label_3cba94;
        case 0x3cba98u: goto label_3cba98;
        case 0x3cba9cu: goto label_3cba9c;
        case 0x3cbaa0u: goto label_3cbaa0;
        case 0x3cbaa4u: goto label_3cbaa4;
        case 0x3cbaa8u: goto label_3cbaa8;
        case 0x3cbaacu: goto label_3cbaac;
        case 0x3cbab0u: goto label_3cbab0;
        case 0x3cbab4u: goto label_3cbab4;
        case 0x3cbab8u: goto label_3cbab8;
        case 0x3cbabcu: goto label_3cbabc;
        case 0x3cbac0u: goto label_3cbac0;
        case 0x3cbac4u: goto label_3cbac4;
        case 0x3cbac8u: goto label_3cbac8;
        case 0x3cbaccu: goto label_3cbacc;
        case 0x3cbad0u: goto label_3cbad0;
        case 0x3cbad4u: goto label_3cbad4;
        case 0x3cbad8u: goto label_3cbad8;
        case 0x3cbadcu: goto label_3cbadc;
        case 0x3cbae0u: goto label_3cbae0;
        case 0x3cbae4u: goto label_3cbae4;
        case 0x3cbae8u: goto label_3cbae8;
        case 0x3cbaecu: goto label_3cbaec;
        case 0x3cbaf0u: goto label_3cbaf0;
        case 0x3cbaf4u: goto label_3cbaf4;
        case 0x3cbaf8u: goto label_3cbaf8;
        case 0x3cbafcu: goto label_3cbafc;
        case 0x3cbb00u: goto label_3cbb00;
        case 0x3cbb04u: goto label_3cbb04;
        case 0x3cbb08u: goto label_3cbb08;
        case 0x3cbb0cu: goto label_3cbb0c;
        case 0x3cbb10u: goto label_3cbb10;
        case 0x3cbb14u: goto label_3cbb14;
        case 0x3cbb18u: goto label_3cbb18;
        case 0x3cbb1cu: goto label_3cbb1c;
        case 0x3cbb20u: goto label_3cbb20;
        case 0x3cbb24u: goto label_3cbb24;
        case 0x3cbb28u: goto label_3cbb28;
        case 0x3cbb2cu: goto label_3cbb2c;
        case 0x3cbb30u: goto label_3cbb30;
        case 0x3cbb34u: goto label_3cbb34;
        case 0x3cbb38u: goto label_3cbb38;
        case 0x3cbb3cu: goto label_3cbb3c;
        case 0x3cbb40u: goto label_3cbb40;
        case 0x3cbb44u: goto label_3cbb44;
        case 0x3cbb48u: goto label_3cbb48;
        case 0x3cbb4cu: goto label_3cbb4c;
        case 0x3cbb50u: goto label_3cbb50;
        case 0x3cbb54u: goto label_3cbb54;
        case 0x3cbb58u: goto label_3cbb58;
        case 0x3cbb5cu: goto label_3cbb5c;
        case 0x3cbb60u: goto label_3cbb60;
        case 0x3cbb64u: goto label_3cbb64;
        case 0x3cbb68u: goto label_3cbb68;
        case 0x3cbb6cu: goto label_3cbb6c;
        case 0x3cbb70u: goto label_3cbb70;
        case 0x3cbb74u: goto label_3cbb74;
        case 0x3cbb78u: goto label_3cbb78;
        case 0x3cbb7cu: goto label_3cbb7c;
        case 0x3cbb80u: goto label_3cbb80;
        case 0x3cbb84u: goto label_3cbb84;
        case 0x3cbb88u: goto label_3cbb88;
        case 0x3cbb8cu: goto label_3cbb8c;
        case 0x3cbb90u: goto label_3cbb90;
        case 0x3cbb94u: goto label_3cbb94;
        case 0x3cbb98u: goto label_3cbb98;
        case 0x3cbb9cu: goto label_3cbb9c;
        case 0x3cbba0u: goto label_3cbba0;
        case 0x3cbba4u: goto label_3cbba4;
        case 0x3cbba8u: goto label_3cbba8;
        case 0x3cbbacu: goto label_3cbbac;
        case 0x3cbbb0u: goto label_3cbbb0;
        case 0x3cbbb4u: goto label_3cbbb4;
        case 0x3cbbb8u: goto label_3cbbb8;
        case 0x3cbbbcu: goto label_3cbbbc;
        case 0x3cbbc0u: goto label_3cbbc0;
        case 0x3cbbc4u: goto label_3cbbc4;
        case 0x3cbbc8u: goto label_3cbbc8;
        case 0x3cbbccu: goto label_3cbbcc;
        case 0x3cbbd0u: goto label_3cbbd0;
        case 0x3cbbd4u: goto label_3cbbd4;
        case 0x3cbbd8u: goto label_3cbbd8;
        case 0x3cbbdcu: goto label_3cbbdc;
        case 0x3cbbe0u: goto label_3cbbe0;
        case 0x3cbbe4u: goto label_3cbbe4;
        case 0x3cbbe8u: goto label_3cbbe8;
        case 0x3cbbecu: goto label_3cbbec;
        case 0x3cbbf0u: goto label_3cbbf0;
        case 0x3cbbf4u: goto label_3cbbf4;
        case 0x3cbbf8u: goto label_3cbbf8;
        case 0x3cbbfcu: goto label_3cbbfc;
        case 0x3cbc00u: goto label_3cbc00;
        case 0x3cbc04u: goto label_3cbc04;
        case 0x3cbc08u: goto label_3cbc08;
        case 0x3cbc0cu: goto label_3cbc0c;
        case 0x3cbc10u: goto label_3cbc10;
        case 0x3cbc14u: goto label_3cbc14;
        case 0x3cbc18u: goto label_3cbc18;
        case 0x3cbc1cu: goto label_3cbc1c;
        case 0x3cbc20u: goto label_3cbc20;
        case 0x3cbc24u: goto label_3cbc24;
        case 0x3cbc28u: goto label_3cbc28;
        case 0x3cbc2cu: goto label_3cbc2c;
        case 0x3cbc30u: goto label_3cbc30;
        case 0x3cbc34u: goto label_3cbc34;
        case 0x3cbc38u: goto label_3cbc38;
        case 0x3cbc3cu: goto label_3cbc3c;
        case 0x3cbc40u: goto label_3cbc40;
        case 0x3cbc44u: goto label_3cbc44;
        case 0x3cbc48u: goto label_3cbc48;
        case 0x3cbc4cu: goto label_3cbc4c;
        case 0x3cbc50u: goto label_3cbc50;
        case 0x3cbc54u: goto label_3cbc54;
        case 0x3cbc58u: goto label_3cbc58;
        case 0x3cbc5cu: goto label_3cbc5c;
        case 0x3cbc60u: goto label_3cbc60;
        case 0x3cbc64u: goto label_3cbc64;
        case 0x3cbc68u: goto label_3cbc68;
        case 0x3cbc6cu: goto label_3cbc6c;
        case 0x3cbc70u: goto label_3cbc70;
        case 0x3cbc74u: goto label_3cbc74;
        case 0x3cbc78u: goto label_3cbc78;
        case 0x3cbc7cu: goto label_3cbc7c;
        case 0x3cbc80u: goto label_3cbc80;
        case 0x3cbc84u: goto label_3cbc84;
        case 0x3cbc88u: goto label_3cbc88;
        case 0x3cbc8cu: goto label_3cbc8c;
        case 0x3cbc90u: goto label_3cbc90;
        case 0x3cbc94u: goto label_3cbc94;
        case 0x3cbc98u: goto label_3cbc98;
        case 0x3cbc9cu: goto label_3cbc9c;
        case 0x3cbca0u: goto label_3cbca0;
        case 0x3cbca4u: goto label_3cbca4;
        case 0x3cbca8u: goto label_3cbca8;
        case 0x3cbcacu: goto label_3cbcac;
        case 0x3cbcb0u: goto label_3cbcb0;
        case 0x3cbcb4u: goto label_3cbcb4;
        case 0x3cbcb8u: goto label_3cbcb8;
        case 0x3cbcbcu: goto label_3cbcbc;
        case 0x3cbcc0u: goto label_3cbcc0;
        case 0x3cbcc4u: goto label_3cbcc4;
        case 0x3cbcc8u: goto label_3cbcc8;
        case 0x3cbcccu: goto label_3cbccc;
        case 0x3cbcd0u: goto label_3cbcd0;
        case 0x3cbcd4u: goto label_3cbcd4;
        case 0x3cbcd8u: goto label_3cbcd8;
        case 0x3cbcdcu: goto label_3cbcdc;
        case 0x3cbce0u: goto label_3cbce0;
        case 0x3cbce4u: goto label_3cbce4;
        case 0x3cbce8u: goto label_3cbce8;
        case 0x3cbcecu: goto label_3cbcec;
        case 0x3cbcf0u: goto label_3cbcf0;
        case 0x3cbcf4u: goto label_3cbcf4;
        case 0x3cbcf8u: goto label_3cbcf8;
        case 0x3cbcfcu: goto label_3cbcfc;
        case 0x3cbd00u: goto label_3cbd00;
        case 0x3cbd04u: goto label_3cbd04;
        case 0x3cbd08u: goto label_3cbd08;
        case 0x3cbd0cu: goto label_3cbd0c;
        case 0x3cbd10u: goto label_3cbd10;
        case 0x3cbd14u: goto label_3cbd14;
        case 0x3cbd18u: goto label_3cbd18;
        case 0x3cbd1cu: goto label_3cbd1c;
        case 0x3cbd20u: goto label_3cbd20;
        case 0x3cbd24u: goto label_3cbd24;
        case 0x3cbd28u: goto label_3cbd28;
        case 0x3cbd2cu: goto label_3cbd2c;
        case 0x3cbd30u: goto label_3cbd30;
        case 0x3cbd34u: goto label_3cbd34;
        case 0x3cbd38u: goto label_3cbd38;
        case 0x3cbd3cu: goto label_3cbd3c;
        case 0x3cbd40u: goto label_3cbd40;
        case 0x3cbd44u: goto label_3cbd44;
        case 0x3cbd48u: goto label_3cbd48;
        case 0x3cbd4cu: goto label_3cbd4c;
        case 0x3cbd50u: goto label_3cbd50;
        case 0x3cbd54u: goto label_3cbd54;
        case 0x3cbd58u: goto label_3cbd58;
        case 0x3cbd5cu: goto label_3cbd5c;
        case 0x3cbd60u: goto label_3cbd60;
        case 0x3cbd64u: goto label_3cbd64;
        case 0x3cbd68u: goto label_3cbd68;
        case 0x3cbd6cu: goto label_3cbd6c;
        case 0x3cbd70u: goto label_3cbd70;
        case 0x3cbd74u: goto label_3cbd74;
        case 0x3cbd78u: goto label_3cbd78;
        case 0x3cbd7cu: goto label_3cbd7c;
        case 0x3cbd80u: goto label_3cbd80;
        case 0x3cbd84u: goto label_3cbd84;
        case 0x3cbd88u: goto label_3cbd88;
        case 0x3cbd8cu: goto label_3cbd8c;
        case 0x3cbd90u: goto label_3cbd90;
        case 0x3cbd94u: goto label_3cbd94;
        case 0x3cbd98u: goto label_3cbd98;
        case 0x3cbd9cu: goto label_3cbd9c;
        case 0x3cbda0u: goto label_3cbda0;
        case 0x3cbda4u: goto label_3cbda4;
        case 0x3cbda8u: goto label_3cbda8;
        case 0x3cbdacu: goto label_3cbdac;
        case 0x3cbdb0u: goto label_3cbdb0;
        case 0x3cbdb4u: goto label_3cbdb4;
        case 0x3cbdb8u: goto label_3cbdb8;
        case 0x3cbdbcu: goto label_3cbdbc;
        case 0x3cbdc0u: goto label_3cbdc0;
        case 0x3cbdc4u: goto label_3cbdc4;
        case 0x3cbdc8u: goto label_3cbdc8;
        case 0x3cbdccu: goto label_3cbdcc;
        case 0x3cbdd0u: goto label_3cbdd0;
        case 0x3cbdd4u: goto label_3cbdd4;
        case 0x3cbdd8u: goto label_3cbdd8;
        case 0x3cbddcu: goto label_3cbddc;
        case 0x3cbde0u: goto label_3cbde0;
        case 0x3cbde4u: goto label_3cbde4;
        case 0x3cbde8u: goto label_3cbde8;
        case 0x3cbdecu: goto label_3cbdec;
        case 0x3cbdf0u: goto label_3cbdf0;
        case 0x3cbdf4u: goto label_3cbdf4;
        case 0x3cbdf8u: goto label_3cbdf8;
        case 0x3cbdfcu: goto label_3cbdfc;
        case 0x3cbe00u: goto label_3cbe00;
        case 0x3cbe04u: goto label_3cbe04;
        case 0x3cbe08u: goto label_3cbe08;
        case 0x3cbe0cu: goto label_3cbe0c;
        default: break;
    }

    ctx->pc = 0x3cb6f0u;

label_3cb6f0:
    // 0x3cb6f0: 0x3e00008  jr          $ra
label_3cb6f4:
    if (ctx->pc == 0x3CB6F4u) {
        ctx->pc = 0x3CB6F4u;
            // 0x3cb6f4: 0x8c8200e0  lw          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->pc = 0x3CB6F8u;
        goto label_3cb6f8;
    }
    ctx->pc = 0x3CB6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB6F0u;
            // 0x3cb6f4: 0x8c8200e0  lw          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CB6F8u;
label_3cb6f8:
    // 0x3cb6f8: 0x0  nop
    ctx->pc = 0x3cb6f8u;
    // NOP
label_3cb6fc:
    // 0x3cb6fc: 0x0  nop
    ctx->pc = 0x3cb6fcu;
    // NOP
label_3cb700:
    // 0x3cb700: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3cb700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3cb704:
    // 0x3cb704: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cb704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cb708:
    // 0x3cb708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cb708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3cb70c:
    // 0x3cb70c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cb70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3cb710:
    // 0x3cb710: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3cb710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cb714:
    // 0x3cb714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cb714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb718:
    // 0x3cb718: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x3cb718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb71c:
    // 0x3cb71c: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x3cb71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb720:
    // 0x3cb720: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x3cb720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb724:
    // 0x3cb724: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x3cb724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb728:
    // 0x3cb728: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x3cb728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3cb72c:
    // 0x3cb72c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3cb72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb730:
    // 0x3cb730: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x3cb730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3cb734:
    // 0x3cb734: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x3cb734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3cb738:
    // 0x3cb738: 0xc04c968  jal         func_1325A0
label_3cb73c:
    if (ctx->pc == 0x3CB73Cu) {
        ctx->pc = 0x3CB73Cu;
            // 0x3cb73c: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x3CB740u;
        goto label_3cb740;
    }
    ctx->pc = 0x3CB738u;
    SET_GPR_U32(ctx, 31, 0x3CB740u);
    ctx->pc = 0x3CB73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB738u;
            // 0x3cb73c: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB740u; }
        if (ctx->pc != 0x3CB740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB740u; }
        if (ctx->pc != 0x3CB740u) { return; }
    }
    ctx->pc = 0x3CB740u;
label_3cb740:
    // 0x3cb740: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x3cb740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb744:
    // 0x3cb744: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3cb744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3cb748:
    // 0x3cb748: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3cb748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3cb74c:
    // 0x3cb74c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3cb74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_3cb750:
    // 0x3cb750: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3cb750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3cb754:
    // 0x3cb754: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3cb754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb758:
    // 0x3cb758: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3cb758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3cb75c:
    // 0x3cb75c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3cb75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3cb760:
    // 0x3cb760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cb760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb764:
    // 0x3cb764: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cb764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cb768:
    // 0x3cb768: 0x0  nop
    ctx->pc = 0x3cb768u;
    // NOP
label_3cb76c:
    // 0x3cb76c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3cb76cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3cb770:
    // 0x3cb770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb774:
    // 0x3cb774: 0x0  nop
    ctx->pc = 0x3cb774u;
    // NOP
label_3cb778:
    // 0x3cb778: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cb778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3cb77c:
    // 0x3cb77c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb77cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cb780:
    // 0x3cb780: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cb780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cb784:
    // 0x3cb784: 0xe6000148  swc1        $f0, 0x148($s0)
    ctx->pc = 0x3cb784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
label_3cb788:
    // 0x3cb788: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cb788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cb78c:
    // 0x3cb78c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3cb78cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3cb790:
    // 0x3cb790: 0xc04ca18  jal         func_132860
label_3cb794:
    if (ctx->pc == 0x3CB794u) {
        ctx->pc = 0x3CB794u;
            // 0x3cb794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB798u;
        goto label_3cb798;
    }
    ctx->pc = 0x3CB790u;
    SET_GPR_U32(ctx, 31, 0x3CB798u);
    ctx->pc = 0x3CB794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB790u;
            // 0x3cb794: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB798u; }
        if (ctx->pc != 0x3CB798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB798u; }
        if (ctx->pc != 0x3CB798u) { return; }
    }
    ctx->pc = 0x3CB798u;
label_3cb798:
    // 0x3cb798: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3cb798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3cb79c:
    // 0x3cb79c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3cb79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3cb7a0:
    // 0x3cb7a0: 0xc04c72c  jal         func_131CB0
label_3cb7a4:
    if (ctx->pc == 0x3CB7A4u) {
        ctx->pc = 0x3CB7A4u;
            // 0x3cb7a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB7A8u;
        goto label_3cb7a8;
    }
    ctx->pc = 0x3CB7A0u;
    SET_GPR_U32(ctx, 31, 0x3CB7A8u);
    ctx->pc = 0x3CB7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB7A0u;
            // 0x3cb7a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB7A8u; }
        if (ctx->pc != 0x3CB7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB7A8u; }
        if (ctx->pc != 0x3CB7A8u) { return; }
    }
    ctx->pc = 0x3CB7A8u;
label_3cb7a8:
    // 0x3cb7a8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x3cb7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb7ac:
    // 0x3cb7ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3cb7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb7b0:
    // 0x3cb7b0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3cb7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb7b4:
    // 0x3cb7b4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x3cb7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb7b8:
    // 0x3cb7b8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3cb7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3cb7bc:
    // 0x3cb7bc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3cb7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3cb7c0:
    // 0x3cb7c0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x3cb7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb7c4:
    // 0x3cb7c4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3cb7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb7c8:
    // 0x3cb7c8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x3cb7c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb7cc:
    // 0x3cb7cc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3cb7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3cb7d0:
    // 0x3cb7d0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3cb7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3cb7d4:
    // 0x3cb7d4: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x3cb7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb7d8:
    // 0x3cb7d8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x3cb7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb7dc:
    // 0x3cb7dc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x3cb7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb7e0:
    // 0x3cb7e0: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x3cb7e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3cb7e4:
    // 0x3cb7e4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x3cb7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3cb7e8:
    // 0x3cb7e8: 0xc0d8a80  jal         func_362A00
label_3cb7ec:
    if (ctx->pc == 0x3CB7ECu) {
        ctx->pc = 0x3CB7ECu;
            // 0x3cb7ec: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x3CB7F0u;
        goto label_3cb7f0;
    }
    ctx->pc = 0x3CB7E8u;
    SET_GPR_U32(ctx, 31, 0x3CB7F0u);
    ctx->pc = 0x3CB7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB7E8u;
            // 0x3cb7ec: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB7F0u; }
        if (ctx->pc != 0x3CB7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB7F0u; }
        if (ctx->pc != 0x3CB7F0u) { return; }
    }
    ctx->pc = 0x3CB7F0u;
label_3cb7f0:
    // 0x3cb7f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cb7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb7f4:
    // 0x3cb7f4: 0xc0d8a80  jal         func_362A00
label_3cb7f8:
    if (ctx->pc == 0x3CB7F8u) {
        ctx->pc = 0x3CB7F8u;
            // 0x3cb7f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CB7FCu;
        goto label_3cb7fc;
    }
    ctx->pc = 0x3CB7F4u;
    SET_GPR_U32(ctx, 31, 0x3CB7FCu);
    ctx->pc = 0x3CB7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB7F4u;
            // 0x3cb7f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB7FCu; }
        if (ctx->pc != 0x3CB7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB7FCu; }
        if (ctx->pc != 0x3CB7FCu) { return; }
    }
    ctx->pc = 0x3CB7FCu;
label_3cb7fc:
    // 0x3cb7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cb7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb800:
    // 0x3cb800: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3cb800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb804:
    // 0x3cb804: 0xc0d8a6c  jal         func_3629B0
label_3cb808:
    if (ctx->pc == 0x3CB808u) {
        ctx->pc = 0x3CB808u;
            // 0x3cb808: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CB80Cu;
        goto label_3cb80c;
    }
    ctx->pc = 0x3CB804u;
    SET_GPR_U32(ctx, 31, 0x3CB80Cu);
    ctx->pc = 0x3CB808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB804u;
            // 0x3cb808: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB80Cu; }
        if (ctx->pc != 0x3CB80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB80Cu; }
        if (ctx->pc != 0x3CB80Cu) { return; }
    }
    ctx->pc = 0x3CB80Cu;
label_3cb80c:
    // 0x3cb80c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3cb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3cb810:
    // 0x3cb810: 0xc0b6e90  jal         func_2DBA40
label_3cb814:
    if (ctx->pc == 0x3CB814u) {
        ctx->pc = 0x3CB814u;
            // 0x3cb814: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CB818u;
        goto label_3cb818;
    }
    ctx->pc = 0x3CB810u;
    SET_GPR_U32(ctx, 31, 0x3CB818u);
    ctx->pc = 0x3CB814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB810u;
            // 0x3cb814: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB818u; }
        if (ctx->pc != 0x3CB818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB818u; }
        if (ctx->pc != 0x3CB818u) { return; }
    }
    ctx->pc = 0x3CB818u;
label_3cb818:
    // 0x3cb818: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cb818u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3cb81c:
    // 0x3cb81c: 0xc0d8a80  jal         func_362A00
label_3cb820:
    if (ctx->pc == 0x3CB820u) {
        ctx->pc = 0x3CB820u;
            // 0x3cb820: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3CB824u;
        goto label_3cb824;
    }
    ctx->pc = 0x3CB81Cu;
    SET_GPR_U32(ctx, 31, 0x3CB824u);
    ctx->pc = 0x3CB820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB81Cu;
            // 0x3cb820: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB824u; }
        if (ctx->pc != 0x3CB824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB824u; }
        if (ctx->pc != 0x3CB824u) { return; }
    }
    ctx->pc = 0x3CB824u;
label_3cb824:
    // 0x3cb824: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3cb824u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3cb828:
    // 0x3cb828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3cb828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb82c:
    // 0x3cb82c: 0xc0d8a54  jal         func_362950
label_3cb830:
    if (ctx->pc == 0x3CB830u) {
        ctx->pc = 0x3CB830u;
            // 0x3cb830: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CB834u;
        goto label_3cb834;
    }
    ctx->pc = 0x3CB82Cu;
    SET_GPR_U32(ctx, 31, 0x3CB834u);
    ctx->pc = 0x3CB830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB82Cu;
            // 0x3cb830: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB834u; }
        if (ctx->pc != 0x3CB834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB834u; }
        if (ctx->pc != 0x3CB834u) { return; }
    }
    ctx->pc = 0x3CB834u;
label_3cb834:
    // 0x3cb834: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3cb834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cb838:
    // 0x3cb838: 0xc0b6e90  jal         func_2DBA40
label_3cb83c:
    if (ctx->pc == 0x3CB83Cu) {
        ctx->pc = 0x3CB83Cu;
            // 0x3cb83c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CB840u;
        goto label_3cb840;
    }
    ctx->pc = 0x3CB838u;
    SET_GPR_U32(ctx, 31, 0x3CB840u);
    ctx->pc = 0x3CB83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB838u;
            // 0x3cb83c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB840u; }
        if (ctx->pc != 0x3CB840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB840u; }
        if (ctx->pc != 0x3CB840u) { return; }
    }
    ctx->pc = 0x3CB840u;
label_3cb840:
    // 0x3cb840: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3cb840u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3cb844:
    // 0x3cb844: 0xc0d8a80  jal         func_362A00
label_3cb848:
    if (ctx->pc == 0x3CB848u) {
        ctx->pc = 0x3CB848u;
            // 0x3cb848: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CB84Cu;
        goto label_3cb84c;
    }
    ctx->pc = 0x3CB844u;
    SET_GPR_U32(ctx, 31, 0x3CB84Cu);
    ctx->pc = 0x3CB848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB844u;
            // 0x3cb848: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB84Cu; }
        if (ctx->pc != 0x3CB84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB84Cu; }
        if (ctx->pc != 0x3CB84Cu) { return; }
    }
    ctx->pc = 0x3CB84Cu;
label_3cb84c:
    // 0x3cb84c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3cb84cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3cb850:
    // 0x3cb850: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3cb850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb854:
    // 0x3cb854: 0xc0d8a3c  jal         func_3628F0
label_3cb858:
    if (ctx->pc == 0x3CB858u) {
        ctx->pc = 0x3CB858u;
            // 0x3cb858: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3CB85Cu;
        goto label_3cb85c;
    }
    ctx->pc = 0x3CB854u;
    SET_GPR_U32(ctx, 31, 0x3CB85Cu);
    ctx->pc = 0x3CB858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB854u;
            // 0x3cb858: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB85Cu; }
        if (ctx->pc != 0x3CB85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB85Cu; }
        if (ctx->pc != 0x3CB85Cu) { return; }
    }
    ctx->pc = 0x3CB85Cu;
label_3cb85c:
    // 0x3cb85c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3cb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb860:
    // 0x3cb860: 0xc0b6e00  jal         func_2DB800
label_3cb864:
    if (ctx->pc == 0x3CB864u) {
        ctx->pc = 0x3CB864u;
            // 0x3cb864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB868u;
        goto label_3cb868;
    }
    ctx->pc = 0x3CB860u;
    SET_GPR_U32(ctx, 31, 0x3CB868u);
    ctx->pc = 0x3CB864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB860u;
            // 0x3cb864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB868u; }
        if (ctx->pc != 0x3CB868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB868u; }
        if (ctx->pc != 0x3CB868u) { return; }
    }
    ctx->pc = 0x3CB868u;
label_3cb868:
    // 0x3cb868: 0xc0d8a80  jal         func_362A00
label_3cb86c:
    if (ctx->pc == 0x3CB86Cu) {
        ctx->pc = 0x3CB86Cu;
            // 0x3cb86c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CB870u;
        goto label_3cb870;
    }
    ctx->pc = 0x3CB868u;
    SET_GPR_U32(ctx, 31, 0x3CB870u);
    ctx->pc = 0x3CB86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB868u;
            // 0x3cb86c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB870u; }
        if (ctx->pc != 0x3CB870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB870u; }
        if (ctx->pc != 0x3CB870u) { return; }
    }
    ctx->pc = 0x3CB870u;
label_3cb870:
    // 0x3cb870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cb870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb874:
    // 0x3cb874: 0xc0d8a80  jal         func_362A00
label_3cb878:
    if (ctx->pc == 0x3CB878u) {
        ctx->pc = 0x3CB878u;
            // 0x3cb878: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3CB87Cu;
        goto label_3cb87c;
    }
    ctx->pc = 0x3CB874u;
    SET_GPR_U32(ctx, 31, 0x3CB87Cu);
    ctx->pc = 0x3CB878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB874u;
            // 0x3cb878: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB87Cu; }
        if (ctx->pc != 0x3CB87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB87Cu; }
        if (ctx->pc != 0x3CB87Cu) { return; }
    }
    ctx->pc = 0x3CB87Cu;
label_3cb87c:
    // 0x3cb87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cb87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb880:
    // 0x3cb880: 0xc0d8a2c  jal         func_3628B0
label_3cb884:
    if (ctx->pc == 0x3CB884u) {
        ctx->pc = 0x3CB884u;
            // 0x3cb884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB888u;
        goto label_3cb888;
    }
    ctx->pc = 0x3CB880u;
    SET_GPR_U32(ctx, 31, 0x3CB888u);
    ctx->pc = 0x3CB884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB880u;
            // 0x3cb884: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB888u; }
        if (ctx->pc != 0x3CB888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB888u; }
        if (ctx->pc != 0x3CB888u) { return; }
    }
    ctx->pc = 0x3CB888u;
label_3cb888:
    // 0x3cb888: 0xc0d8a24  jal         func_362890
label_3cb88c:
    if (ctx->pc == 0x3CB88Cu) {
        ctx->pc = 0x3CB88Cu;
            // 0x3cb88c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3CB890u;
        goto label_3cb890;
    }
    ctx->pc = 0x3CB888u;
    SET_GPR_U32(ctx, 31, 0x3CB890u);
    ctx->pc = 0x3CB88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB888u;
            // 0x3cb88c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB890u; }
        if (ctx->pc != 0x3CB890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB890u; }
        if (ctx->pc != 0x3CB890u) { return; }
    }
    ctx->pc = 0x3CB890u;
label_3cb890:
    // 0x3cb890: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3cb894:
    if (ctx->pc == 0x3CB894u) {
        ctx->pc = 0x3CB894u;
            // 0x3cb894: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3CB898u;
        goto label_3cb898;
    }
    ctx->pc = 0x3CB890u;
    {
        const bool branch_taken_0x3cb890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb890) {
            ctx->pc = 0x3CB894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB890u;
            // 0x3cb894: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CB8A8u;
            goto label_3cb8a8;
        }
    }
    ctx->pc = 0x3CB898u;
label_3cb898:
    // 0x3cb898: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3cb898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb89c:
    // 0x3cb89c: 0xc0d8a14  jal         func_362850
label_3cb8a0:
    if (ctx->pc == 0x3CB8A0u) {
        ctx->pc = 0x3CB8A0u;
            // 0x3cb8a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB8A4u;
        goto label_3cb8a4;
    }
    ctx->pc = 0x3CB89Cu;
    SET_GPR_U32(ctx, 31, 0x3CB8A4u);
    ctx->pc = 0x3CB8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB89Cu;
            // 0x3cb8a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB8A4u; }
        if (ctx->pc != 0x3CB8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB8A4u; }
        if (ctx->pc != 0x3CB8A4u) { return; }
    }
    ctx->pc = 0x3CB8A4u;
label_3cb8a4:
    // 0x3cb8a4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3cb8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8a8:
    // 0x3cb8a8: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x3cb8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_3cb8ac:
    // 0x3cb8ac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3cb8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8b0:
    // 0x3cb8b0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x3cb8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_3cb8b4:
    // 0x3cb8b4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3cb8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8b8:
    // 0x3cb8b8: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x3cb8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_3cb8bc:
    // 0x3cb8bc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3cb8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8c0:
    // 0x3cb8c0: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x3cb8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_3cb8c4:
    // 0x3cb8c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3cb8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8c8:
    // 0x3cb8c8: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x3cb8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_3cb8cc:
    // 0x3cb8cc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3cb8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8d0:
    // 0x3cb8d0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3cb8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_3cb8d4:
    // 0x3cb8d4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3cb8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8d8:
    // 0x3cb8d8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3cb8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_3cb8dc:
    // 0x3cb8dc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3cb8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb8e0:
    // 0x3cb8e0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3cb8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
label_3cb8e4:
    // 0x3cb8e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cb8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cb8e8:
    // 0x3cb8e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3cb8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cb8ec:
    // 0x3cb8ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3cb8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb8f0:
    // 0x3cb8f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cb8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cb8f4:
    // 0x3cb8f4: 0x3e00008  jr          $ra
label_3cb8f8:
    if (ctx->pc == 0x3CB8F8u) {
        ctx->pc = 0x3CB8F8u;
            // 0x3cb8f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3CB8FCu;
        goto label_3cb8fc;
    }
    ctx->pc = 0x3CB8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB8F4u;
            // 0x3cb8f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CB8FCu;
label_3cb8fc:
    // 0x3cb8fc: 0x0  nop
    ctx->pc = 0x3cb8fcu;
    // NOP
label_3cb900:
    // 0x3cb900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3cb900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3cb904:
    // 0x3cb904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cb904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3cb908:
    // 0x3cb908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cb908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cb90c:
    // 0x3cb90c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cb90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb910:
    // 0x3cb910: 0xc0e393c  jal         func_38E4F0
label_3cb914:
    if (ctx->pc == 0x3CB914u) {
        ctx->pc = 0x3CB914u;
            // 0x3cb914: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3CB918u;
        goto label_3cb918;
    }
    ctx->pc = 0x3CB910u;
    SET_GPR_U32(ctx, 31, 0x3CB918u);
    ctx->pc = 0x3CB914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB910u;
            // 0x3cb914: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB918u; }
        if (ctx->pc != 0x3CB918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB918u; }
        if (ctx->pc != 0x3CB918u) { return; }
    }
    ctx->pc = 0x3CB918u;
label_3cb918:
    // 0x3cb918: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x3cb918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_3cb91c:
    // 0x3cb91c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cb920:
    // 0x3cb920: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x3cb920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3cb924:
    // 0x3cb924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cb924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb928:
    // 0x3cb928: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x3cb928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_3cb92c:
    // 0x3cb92c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3cb92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3cb930:
    // 0x3cb930: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3cb930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3cb934:
    // 0x3cb934: 0xc08bff0  jal         func_22FFC0
label_3cb938:
    if (ctx->pc == 0x3CB938u) {
        ctx->pc = 0x3CB938u;
            // 0x3cb938: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB93Cu;
        goto label_3cb93c;
    }
    ctx->pc = 0x3CB934u;
    SET_GPR_U32(ctx, 31, 0x3CB93Cu);
    ctx->pc = 0x3CB938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB934u;
            // 0x3cb938: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB93Cu; }
        if (ctx->pc != 0x3CB93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB93Cu; }
        if (ctx->pc != 0x3CB93Cu) { return; }
    }
    ctx->pc = 0x3CB93Cu;
label_3cb93c:
    // 0x3cb93c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3cb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3cb940:
    // 0x3cb940: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3cb940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3cb944:
    // 0x3cb944: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3cb944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb948:
    // 0x3cb948: 0xc08914c  jal         func_224530
label_3cb94c:
    if (ctx->pc == 0x3CB94Cu) {
        ctx->pc = 0x3CB94Cu;
            // 0x3cb94c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB950u;
        goto label_3cb950;
    }
    ctx->pc = 0x3CB948u;
    SET_GPR_U32(ctx, 31, 0x3CB950u);
    ctx->pc = 0x3CB94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB948u;
            // 0x3cb94c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB950u; }
        if (ctx->pc != 0x3CB950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB950u; }
        if (ctx->pc != 0x3CB950u) { return; }
    }
    ctx->pc = 0x3CB950u;
label_3cb950:
    // 0x3cb950: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3cb950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3cb954:
    // 0x3cb954: 0xc04c720  jal         func_131C80
label_3cb958:
    if (ctx->pc == 0x3CB958u) {
        ctx->pc = 0x3CB958u;
            // 0x3cb958: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x3CB95Cu;
        goto label_3cb95c;
    }
    ctx->pc = 0x3CB954u;
    SET_GPR_U32(ctx, 31, 0x3CB95Cu);
    ctx->pc = 0x3CB958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB954u;
            // 0x3cb958: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB95Cu; }
        if (ctx->pc != 0x3CB95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB95Cu; }
        if (ctx->pc != 0x3CB95Cu) { return; }
    }
    ctx->pc = 0x3CB95Cu;
label_3cb95c:
    // 0x3cb95c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3cb95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3cb960:
    // 0x3cb960: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3cb960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb964:
    // 0x3cb964: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3cb964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb968:
    // 0x3cb968: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3cb968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cb96c:
    // 0x3cb96c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3cb96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb970:
    // 0x3cb970: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3cb970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cb974:
    // 0x3cb974: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3cb974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3cb978:
    // 0x3cb978: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3cb978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3cb97c:
    // 0x3cb97c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3cb97cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3cb980:
    // 0x3cb980: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3cb980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3cb984:
    // 0x3cb984: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3cb984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb988:
    // 0x3cb988: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3cb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb98c:
    // 0x3cb98c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3cb98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb990:
    // 0x3cb990: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3cb990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb994:
    // 0x3cb994: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3cb994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3cb998:
    // 0x3cb998: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3cb998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3cb99c:
    // 0x3cb99c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3cb99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3cb9a0:
    // 0x3cb9a0: 0xc0892b0  jal         func_224AC0
label_3cb9a4:
    if (ctx->pc == 0x3CB9A4u) {
        ctx->pc = 0x3CB9A4u;
            // 0x3cb9a4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3CB9A8u;
        goto label_3cb9a8;
    }
    ctx->pc = 0x3CB9A0u;
    SET_GPR_U32(ctx, 31, 0x3CB9A8u);
    ctx->pc = 0x3CB9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB9A0u;
            // 0x3cb9a4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB9A8u; }
        if (ctx->pc != 0x3CB9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB9A8u; }
        if (ctx->pc != 0x3CB9A8u) { return; }
    }
    ctx->pc = 0x3CB9A8u;
label_3cb9a8:
    // 0x3cb9a8: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x3cb9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_3cb9ac:
    // 0x3cb9ac: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3cb9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3cb9b0:
    // 0x3cb9b0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3cb9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3cb9b4:
    // 0x3cb9b4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3cb9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3cb9b8:
    // 0x3cb9b8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3cb9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3cb9bc:
    // 0x3cb9bc: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x3cb9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3cb9c0:
    // 0x3cb9c0: 0xc088b74  jal         func_222DD0
label_3cb9c4:
    if (ctx->pc == 0x3CB9C4u) {
        ctx->pc = 0x3CB9C4u;
            // 0x3cb9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CB9C8u;
        goto label_3cb9c8;
    }
    ctx->pc = 0x3CB9C0u;
    SET_GPR_U32(ctx, 31, 0x3CB9C8u);
    ctx->pc = 0x3CB9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB9C0u;
            // 0x3cb9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB9C8u; }
        if (ctx->pc != 0x3CB9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CB9C8u; }
        if (ctx->pc != 0x3CB9C8u) { return; }
    }
    ctx->pc = 0x3CB9C8u;
label_3cb9c8:
    // 0x3cb9c8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3cb9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3cb9cc:
    // 0x3cb9cc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3cb9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3cb9d0:
    // 0x3cb9d0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3cb9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3cb9d4:
    // 0x3cb9d4: 0x320f809  jalr        $t9
label_3cb9d8:
    if (ctx->pc == 0x3CB9D8u) {
        ctx->pc = 0x3CB9D8u;
            // 0x3cb9d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CB9DCu;
        goto label_3cb9dc;
    }
    ctx->pc = 0x3CB9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CB9DCu);
        ctx->pc = 0x3CB9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CB9D4u;
            // 0x3cb9d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CB9DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CB9DCu; }
            if (ctx->pc != 0x3CB9DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CB9DCu;
label_3cb9dc:
    // 0x3cb9dc: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x3cb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_3cb9e0:
    // 0x3cb9e0: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x3cb9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_3cb9e4:
    // 0x3cb9e4: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x3cb9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
label_3cb9e8:
    // 0x3cb9e8: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x3cb9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_3cb9ec:
    // 0x3cb9ec: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x3cb9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
label_3cb9f0:
    // 0x3cb9f0: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x3cb9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
label_3cb9f4:
    // 0x3cb9f4: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x3cb9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
label_3cb9f8:
    // 0x3cb9f8: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x3cb9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
label_3cb9fc:
    // 0x3cb9fc: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x3cb9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
label_3cba00:
    // 0x3cba00: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x3cba00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_3cba04:
    // 0x3cba04: 0xae20014c  sw          $zero, 0x14C($s1)
    ctx->pc = 0x3cba04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 0));
label_3cba08:
    // 0x3cba08: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x3cba08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
label_3cba0c:
    // 0x3cba0c: 0xa220004d  sb          $zero, 0x4D($s1)
    ctx->pc = 0x3cba0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 0));
label_3cba10:
    // 0x3cba10: 0xae200158  sw          $zero, 0x158($s1)
    ctx->pc = 0x3cba10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
label_3cba14:
    // 0x3cba14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cba18:
    // 0x3cba18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cba18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cba1c:
    // 0x3cba1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cba1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cba20:
    // 0x3cba20: 0x3e00008  jr          $ra
label_3cba24:
    if (ctx->pc == 0x3CBA24u) {
        ctx->pc = 0x3CBA24u;
            // 0x3cba24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3CBA28u;
        goto label_3cba28;
    }
    ctx->pc = 0x3CBA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBA20u;
            // 0x3cba24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CBA28u;
label_3cba28:
    // 0x3cba28: 0x0  nop
    ctx->pc = 0x3cba28u;
    // NOP
label_3cba2c:
    // 0x3cba2c: 0x0  nop
    ctx->pc = 0x3cba2cu;
    // NOP
label_3cba30:
    // 0x3cba30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3cba34:
    // 0x3cba34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3cba38:
    // 0x3cba38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cba3c:
    // 0x3cba3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cba40:
    // 0x3cba40: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3cba40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3cba44:
    // 0x3cba44: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x3cba44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
label_3cba48:
    // 0x3cba48: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3cba4c:
    if (ctx->pc == 0x3CBA4Cu) {
        ctx->pc = 0x3CBA4Cu;
            // 0x3cba4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA50u;
        goto label_3cba50;
    }
    ctx->pc = 0x3CBA48u;
    {
        const bool branch_taken_0x3cba48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBA48u;
            // 0x3cba4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba48) {
            ctx->pc = 0x3CBA8Cu;
            goto label_3cba8c;
        }
    }
    ctx->pc = 0x3CBA50u;
label_3cba50:
    // 0x3cba50: 0xc0754b4  jal         func_1D52D0
label_3cba54:
    if (ctx->pc == 0x3CBA54u) {
        ctx->pc = 0x3CBA54u;
            // 0x3cba54: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x3CBA58u;
        goto label_3cba58;
    }
    ctx->pc = 0x3CBA50u;
    SET_GPR_U32(ctx, 31, 0x3CBA58u);
    ctx->pc = 0x3CBA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBA50u;
            // 0x3cba54: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBA58u; }
        if (ctx->pc != 0x3CBA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBA58u; }
        if (ctx->pc != 0x3CBA58u) { return; }
    }
    ctx->pc = 0x3CBA58u;
label_3cba58:
    // 0x3cba58: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x3cba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3cba5c:
    // 0x3cba5c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3cba5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3cba60:
    // 0x3cba60: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_3cba64:
    if (ctx->pc == 0x3CBA64u) {
        ctx->pc = 0x3CBA64u;
            // 0x3cba64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3CBA68u;
        goto label_3cba68;
    }
    ctx->pc = 0x3CBA60u;
    {
        const bool branch_taken_0x3cba60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cba60) {
            ctx->pc = 0x3CBA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBA60u;
            // 0x3cba64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CBA90u;
            goto label_3cba90;
        }
    }
    ctx->pc = 0x3CBA68u;
label_3cba68:
    // 0x3cba68: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x3cba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_3cba6c:
    // 0x3cba6c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3cba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3cba70:
    // 0x3cba70: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3cba74:
    if (ctx->pc == 0x3CBA74u) {
        ctx->pc = 0x3CBA78u;
        goto label_3cba78;
    }
    ctx->pc = 0x3CBA70u;
    {
        const bool branch_taken_0x3cba70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cba70) {
            ctx->pc = 0x3CBA8Cu;
            goto label_3cba8c;
        }
    }
    ctx->pc = 0x3CBA78u;
label_3cba78:
    // 0x3cba78: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x3cba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_3cba7c:
    // 0x3cba7c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3cba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3cba80:
    // 0x3cba80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cba84:
    // 0x3cba84: 0xae040144  sw          $a0, 0x144($s0)
    ctx->pc = 0x3cba84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 4));
label_3cba88:
    // 0x3cba88: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x3cba88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_3cba8c:
    // 0x3cba8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cba8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cba90:
    // 0x3cba90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cba90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cba94:
    // 0x3cba94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cba94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cba98:
    // 0x3cba98: 0x3e00008  jr          $ra
label_3cba9c:
    if (ctx->pc == 0x3CBA9Cu) {
        ctx->pc = 0x3CBA9Cu;
            // 0x3cba9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3CBAA0u;
        goto label_3cbaa0;
    }
    ctx->pc = 0x3CBA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBA98u;
            // 0x3cba9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CBAA0u;
label_3cbaa0:
    // 0x3cbaa0: 0x3e00008  jr          $ra
label_3cbaa4:
    if (ctx->pc == 0x3CBAA4u) {
        ctx->pc = 0x3CBAA4u;
            // 0x3cbaa4: 0x24020852  addiu       $v0, $zero, 0x852 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2130));
        ctx->pc = 0x3CBAA8u;
        goto label_3cbaa8;
    }
    ctx->pc = 0x3CBAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBAA0u;
            // 0x3cbaa4: 0x24020852  addiu       $v0, $zero, 0x852 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2130));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CBAA8u;
label_3cbaa8:
    // 0x3cbaa8: 0x0  nop
    ctx->pc = 0x3cbaa8u;
    // NOP
label_3cbaac:
    // 0x3cbaac: 0x0  nop
    ctx->pc = 0x3cbaacu;
    // NOP
label_3cbab0:
    // 0x3cbab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cbab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3cbab4:
    // 0x3cbab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cbab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cbab8:
    // 0x3cbab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cbab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cbabc:
    // 0x3cbabc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3cbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3cbac0:
    // 0x3cbac0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3cbac4:
    if (ctx->pc == 0x3CBAC4u) {
        ctx->pc = 0x3CBAC4u;
            // 0x3cbac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAC8u;
        goto label_3cbac8;
    }
    ctx->pc = 0x3CBAC0u;
    {
        const bool branch_taken_0x3cbac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBAC0u;
            // 0x3cbac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbac0) {
            ctx->pc = 0x3CBBE0u;
            goto label_3cbbe0;
        }
    }
    ctx->pc = 0x3CBAC8u;
label_3cbac8:
    // 0x3cbac8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3cbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3cbacc:
    // 0x3cbacc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3cbaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3cbad0:
    // 0x3cbad0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3cbad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3cbad4:
    // 0x3cbad4: 0xc075128  jal         func_1D44A0
label_3cbad8:
    if (ctx->pc == 0x3CBAD8u) {
        ctx->pc = 0x3CBAD8u;
            // 0x3cbad8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3CBADCu;
        goto label_3cbadc;
    }
    ctx->pc = 0x3CBAD4u;
    SET_GPR_U32(ctx, 31, 0x3CBADCu);
    ctx->pc = 0x3CBAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBAD4u;
            // 0x3cbad8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBADCu; }
        if (ctx->pc != 0x3CBADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBADCu; }
        if (ctx->pc != 0x3CBADCu) { return; }
    }
    ctx->pc = 0x3CBADCu;
label_3cbadc:
    // 0x3cbadc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3cbadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3cbae0:
    // 0x3cbae0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cbae4:
    // 0x3cbae4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3cbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3cbae8:
    // 0x3cbae8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3cbae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3cbaec:
    // 0x3cbaec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3cbaecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3cbaf0:
    // 0x3cbaf0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3cbaf4:
    if (ctx->pc == 0x3CBAF4u) {
        ctx->pc = 0x3CBAF4u;
            // 0x3cbaf4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3CBAF8u;
        goto label_3cbaf8;
    }
    ctx->pc = 0x3CBAF0u;
    {
        const bool branch_taken_0x3cbaf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBAF0u;
            // 0x3cbaf4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbaf0) {
            ctx->pc = 0x3CBB00u;
            goto label_3cbb00;
        }
    }
    ctx->pc = 0x3CBAF8u;
label_3cbaf8:
    // 0x3cbaf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cbafc:
    // 0x3cbafc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3cbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3cbb00:
    // 0x3cbb00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbb04:
    // 0x3cbb04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cbb08:
    // 0x3cbb08: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3cbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3cbb0c:
    // 0x3cbb0c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3cbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3cbb10:
    // 0x3cbb10: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3cbb10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3cbb14:
    // 0x3cbb14: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3cbb18:
    if (ctx->pc == 0x3CBB18u) {
        ctx->pc = 0x3CBB18u;
            // 0x3cbb18: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3CBB1Cu;
        goto label_3cbb1c;
    }
    ctx->pc = 0x3CBB14u;
    {
        const bool branch_taken_0x3cbb14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbb14) {
            ctx->pc = 0x3CBB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBB14u;
            // 0x3cbb18: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CBB28u;
            goto label_3cbb28;
        }
    }
    ctx->pc = 0x3CBB1Cu;
label_3cbb1c:
    // 0x3cbb1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cbb20:
    // 0x3cbb20: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3cbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3cbb24:
    // 0x3cbb24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cbb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbb28:
    // 0x3cbb28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cbb2c:
    // 0x3cbb2c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3cbb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3cbb30:
    // 0x3cbb30: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3cbb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3cbb34:
    // 0x3cbb34: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3cbb34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3cbb38:
    // 0x3cbb38: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3cbb3c:
    if (ctx->pc == 0x3CBB3Cu) {
        ctx->pc = 0x3CBB3Cu;
            // 0x3cbb3c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3CBB40u;
        goto label_3cbb40;
    }
    ctx->pc = 0x3CBB38u;
    {
        const bool branch_taken_0x3cbb38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbb38) {
            ctx->pc = 0x3CBB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBB38u;
            // 0x3cbb3c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CBB4Cu;
            goto label_3cbb4c;
        }
    }
    ctx->pc = 0x3CBB40u;
label_3cbb40:
    // 0x3cbb40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3cbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3cbb44:
    // 0x3cbb44: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3cbb44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3cbb48:
    // 0x3cbb48: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3cbb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cbb4c:
    // 0x3cbb4c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3cbb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3cbb50:
    // 0x3cbb50: 0x320f809  jalr        $t9
label_3cbb54:
    if (ctx->pc == 0x3CBB54u) {
        ctx->pc = 0x3CBB54u;
            // 0x3cbb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB58u;
        goto label_3cbb58;
    }
    ctx->pc = 0x3CBB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBB58u);
        ctx->pc = 0x3CBB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBB50u;
            // 0x3cbb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBB58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBB58u; }
            if (ctx->pc != 0x3CBB58u) { return; }
        }
        }
    }
    ctx->pc = 0x3CBB58u;
label_3cbb58:
    // 0x3cbb58: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3cbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3cbb5c:
    // 0x3cbb5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbb60:
    // 0x3cbb60: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3cbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3cbb64:
    // 0x3cbb64: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3cbb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3cbb68:
    // 0x3cbb68: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3cbb68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cbb6c:
    // 0x3cbb6c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3cbb6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3cbb70:
    // 0x3cbb70: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3cbb74:
    if (ctx->pc == 0x3CBB74u) {
        ctx->pc = 0x3CBB74u;
            // 0x3cbb74: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3CBB78u;
        goto label_3cbb78;
    }
    ctx->pc = 0x3CBB70u;
    {
        const bool branch_taken_0x3cbb70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbb70) {
            ctx->pc = 0x3CBB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBB70u;
            // 0x3cbb74: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CBB84u;
            goto label_3cbb84;
        }
    }
    ctx->pc = 0x3CBB78u;
label_3cbb78:
    // 0x3cbb78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbb7c:
    // 0x3cbb7c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3cbb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3cbb80:
    // 0x3cbb80: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3cbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3cbb84:
    // 0x3cbb84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbb88:
    // 0x3cbb88: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3cbb8c:
    // 0x3cbb8c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3cbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3cbb90:
    // 0x3cbb90: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3cbb90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cbb94:
    // 0x3cbb94: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3cbb94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3cbb98:
    // 0x3cbb98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3cbb9c:
    if (ctx->pc == 0x3CBB9Cu) {
        ctx->pc = 0x3CBBA0u;
        goto label_3cbba0;
    }
    ctx->pc = 0x3CBB98u;
    {
        const bool branch_taken_0x3cbb98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbb98) {
            ctx->pc = 0x3CBBA8u;
            goto label_3cbba8;
        }
    }
    ctx->pc = 0x3CBBA0u;
label_3cbba0:
    // 0x3cbba0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbba4:
    // 0x3cbba4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3cbba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3cbba8:
    // 0x3cbba8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbbac:
    // 0x3cbbac: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3cbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3cbbb0:
    // 0x3cbbb0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3cbbb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cbbb4:
    // 0x3cbbb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3cbbb8:
    if (ctx->pc == 0x3CBBB8u) {
        ctx->pc = 0x3CBBBCu;
        goto label_3cbbbc;
    }
    ctx->pc = 0x3CBBB4u;
    {
        const bool branch_taken_0x3cbbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbbb4) {
            ctx->pc = 0x3CBBC4u;
            goto label_3cbbc4;
        }
    }
    ctx->pc = 0x3CBBBCu;
label_3cbbbc:
    // 0x3cbbbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbbc0:
    // 0x3cbbc0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3cbbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3cbbc4:
    // 0x3cbbc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbbc8:
    // 0x3cbbc8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3cbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3cbbcc:
    // 0x3cbbcc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3cbbccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cbbd0:
    // 0x3cbbd0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3cbbd4:
    if (ctx->pc == 0x3CBBD4u) {
        ctx->pc = 0x3CBBD4u;
            // 0x3cbbd4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3CBBD8u;
        goto label_3cbbd8;
    }
    ctx->pc = 0x3CBBD0u;
    {
        const bool branch_taken_0x3cbbd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbbd0) {
            ctx->pc = 0x3CBBD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBBD0u;
            // 0x3cbbd4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CBBE4u;
            goto label_3cbbe4;
        }
    }
    ctx->pc = 0x3CBBD8u;
label_3cbbd8:
    // 0x3cbbd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3cbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3cbbdc:
    // 0x3cbbdc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3cbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3cbbe0:
    // 0x3cbbe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cbbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cbbe4:
    // 0x3cbbe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cbbe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cbbe8:
    // 0x3cbbe8: 0x3e00008  jr          $ra
label_3cbbec:
    if (ctx->pc == 0x3CBBECu) {
        ctx->pc = 0x3CBBECu;
            // 0x3cbbec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3CBBF0u;
        goto label_3cbbf0;
    }
    ctx->pc = 0x3CBBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBBE8u;
            // 0x3cbbec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CBBF0u;
label_3cbbf0:
    // 0x3cbbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cbbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3cbbf4:
    // 0x3cbbf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3cbbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbbf8:
    // 0x3cbbf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cbbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cbbfc:
    // 0x3cbbfc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3cbbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3cbc00:
    // 0x3cbc00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cbc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cbc04:
    // 0x3cbc04: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3cbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3cbc08:
    // 0x3cbc08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cbc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc0c:
    // 0x3cbc0c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3cbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3cbc10:
    // 0x3cbc10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cbc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3cbc14:
    // 0x3cbc14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cbc18:
    // 0x3cbc18: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3cbc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3cbc1c:
    // 0x3cbc1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3cbc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbc20:
    // 0x3cbc20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3cbc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3cbc24:
    // 0x3cbc24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3cbc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3cbc28:
    // 0x3cbc28: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3cbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3cbc2c:
    // 0x3cbc2c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3cbc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3cbc30:
    // 0x3cbc30: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3cbc34:
    // 0x3cbc34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3cbc38:
    // 0x3cbc38: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3cbc38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3cbc3c:
    // 0x3cbc3c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3cbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3cbc40:
    // 0x3cbc40: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3cbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3cbc44:
    // 0x3cbc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cbc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3cbc48:
    // 0x3cbc48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3cbc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cbc4c:
    // 0x3cbc4c: 0xc0a997c  jal         func_2A65F0
label_3cbc50:
    if (ctx->pc == 0x3CBC50u) {
        ctx->pc = 0x3CBC50u;
            // 0x3cbc50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3CBC54u;
        goto label_3cbc54;
    }
    ctx->pc = 0x3CBC4Cu;
    SET_GPR_U32(ctx, 31, 0x3CBC54u);
    ctx->pc = 0x3CBC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBC4Cu;
            // 0x3cbc50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBC54u; }
        if (ctx->pc != 0x3CBC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBC54u; }
        if (ctx->pc != 0x3CBC54u) { return; }
    }
    ctx->pc = 0x3CBC54u;
label_3cbc54:
    // 0x3cbc54: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3cbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3cbc58:
    // 0x3cbc58: 0xc0d879c  jal         func_361E70
label_3cbc5c:
    if (ctx->pc == 0x3CBC5Cu) {
        ctx->pc = 0x3CBC5Cu;
            // 0x3cbc5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBC60u;
        goto label_3cbc60;
    }
    ctx->pc = 0x3CBC58u;
    SET_GPR_U32(ctx, 31, 0x3CBC60u);
    ctx->pc = 0x3CBC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBC58u;
            // 0x3cbc5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBC60u; }
        if (ctx->pc != 0x3CBC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBC60u; }
        if (ctx->pc != 0x3CBC60u) { return; }
    }
    ctx->pc = 0x3CBC60u;
label_3cbc60:
    // 0x3cbc60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cbc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cbc64:
    // 0x3cbc64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cbc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cbc68:
    // 0x3cbc68: 0x3e00008  jr          $ra
label_3cbc6c:
    if (ctx->pc == 0x3CBC6Cu) {
        ctx->pc = 0x3CBC6Cu;
            // 0x3cbc6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3CBC70u;
        goto label_3cbc70;
    }
    ctx->pc = 0x3CBC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBC68u;
            // 0x3cbc6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CBC70u;
label_3cbc70:
    // 0x3cbc70: 0x80f25ac  j           func_3C96B0
label_3cbc74:
    if (ctx->pc == 0x3CBC74u) {
        ctx->pc = 0x3CBC74u;
            // 0x3cbc74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3CBC78u;
        goto label_3cbc78;
    }
    ctx->pc = 0x3CBC70u;
    ctx->pc = 0x3CBC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBC70u;
            // 0x3cbc74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C96B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3C96B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3CBC78u;
label_3cbc78:
    // 0x3cbc78: 0x0  nop
    ctx->pc = 0x3cbc78u;
    // NOP
label_3cbc7c:
    // 0x3cbc7c: 0x0  nop
    ctx->pc = 0x3cbc7cu;
    // NOP
label_3cbc80:
    // 0x3cbc80: 0x80f2804  j           func_3CA010
label_3cbc84:
    if (ctx->pc == 0x3CBC84u) {
        ctx->pc = 0x3CBC84u;
            // 0x3cbc84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3CBC88u;
        goto label_3cbc88;
    }
    ctx->pc = 0x3CBC80u;
    ctx->pc = 0x3CBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBC80u;
            // 0x3cbc84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CA010u;
    {
        auto targetFn = runtime->lookupFunction(0x3CA010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3CBC88u;
label_3cbc88:
    // 0x3cbc88: 0x0  nop
    ctx->pc = 0x3cbc88u;
    // NOP
label_3cbc8c:
    // 0x3cbc8c: 0x0  nop
    ctx->pc = 0x3cbc8cu;
    // NOP
label_3cbc90:
    // 0x3cbc90: 0x80f2554  j           func_3C9550
label_3cbc94:
    if (ctx->pc == 0x3CBC94u) {
        ctx->pc = 0x3CBC94u;
            // 0x3cbc94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3CBC98u;
        goto label_3cbc98;
    }
    ctx->pc = 0x3CBC90u;
    ctx->pc = 0x3CBC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBC90u;
            // 0x3cbc94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C9550u;
    if (runtime->hasFunction(0x3C9550u)) {
        auto targetFn = runtime->lookupFunction(0x3C9550u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003C9550_0x3c9550(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3CBC98u;
label_3cbc98:
    // 0x3cbc98: 0x0  nop
    ctx->pc = 0x3cbc98u;
    // NOP
label_3cbc9c:
    // 0x3cbc9c: 0x0  nop
    ctx->pc = 0x3cbc9cu;
    // NOP
label_3cbca0:
    // 0x3cbca0: 0x80f2530  j           func_3C94C0
label_3cbca4:
    if (ctx->pc == 0x3CBCA4u) {
        ctx->pc = 0x3CBCA4u;
            // 0x3cbca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3CBCA8u;
        goto label_3cbca8;
    }
    ctx->pc = 0x3CBCA0u;
    ctx->pc = 0x3CBCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBCA0u;
            // 0x3cbca4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C94C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3C94C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3CBCA8u;
label_3cbca8:
    // 0x3cbca8: 0x0  nop
    ctx->pc = 0x3cbca8u;
    // NOP
label_3cbcac:
    // 0x3cbcac: 0x0  nop
    ctx->pc = 0x3cbcacu;
    // NOP
label_3cbcb0:
    // 0x3cbcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cbcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3cbcb4:
    // 0x3cbcb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cbcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cbcb8:
    // 0x3cbcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cbcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cbcbc:
    // 0x3cbcbc: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x3cbcbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3cbcc0:
    // 0x3cbcc0: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x3cbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_3cbcc4:
    // 0x3cbcc4: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3cbcc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3cbcc8:
    // 0x3cbcc8: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
label_3cbccc:
    if (ctx->pc == 0x3CBCCCu) {
        ctx->pc = 0x3CBCCCu;
            // 0x3cbccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBCD0u;
        goto label_3cbcd0;
    }
    ctx->pc = 0x3CBCC8u;
    {
        const bool branch_taken_0x3cbcc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBCC8u;
            // 0x3cbccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbcc8) {
            ctx->pc = 0x3CBDF4u;
            goto label_3cbdf4;
        }
    }
    ctx->pc = 0x3CBCD0u;
label_3cbcd0:
    // 0x3cbcd0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3cbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3cbcd4:
    // 0x3cbcd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3cbcd8:
    // 0x3cbcd8: 0x24a59020  addiu       $a1, $a1, -0x6FE0
    ctx->pc = 0x3cbcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938656));
label_3cbcdc:
    // 0x3cbcdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3cbcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3cbce0:
    // 0x3cbce0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cbce4:
    // 0x3cbce4: 0x600008  jr          $v1
label_3cbce8:
    if (ctx->pc == 0x3CBCE8u) {
        ctx->pc = 0x3CBCECu;
        goto label_3cbcec;
    }
    ctx->pc = 0x3CBCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CBCECu: goto label_3cbcec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3CBCECu;
label_3cbcec:
    // 0x3cbcec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cbcf0:
    // 0x3cbcf0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3cbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3cbcf4:
    // 0x3cbcf4: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3cbcf8:
    // 0x3cbcf8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3cbcf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cbcfc:
    // 0x3cbcfc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3cbd00:
    if (ctx->pc == 0x3CBD00u) {
        ctx->pc = 0x3CBD04u;
        goto label_3cbd04;
    }
    ctx->pc = 0x3CBCFCu;
    {
        const bool branch_taken_0x3cbcfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbcfc) {
            ctx->pc = 0x3CBD1Cu;
            goto label_3cbd1c;
        }
    }
    ctx->pc = 0x3CBD04u;
label_3cbd04:
    // 0x3cbd04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cbd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbd08:
    // 0x3cbd08: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cbd08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cbd0c:
    // 0x3cbd0c: 0x320f809  jalr        $t9
label_3cbd10:
    if (ctx->pc == 0x3CBD10u) {
        ctx->pc = 0x3CBD10u;
            // 0x3cbd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD14u;
        goto label_3cbd14;
    }
    ctx->pc = 0x3CBD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBD14u);
        ctx->pc = 0x3CBD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD0Cu;
            // 0x3cbd10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBD14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD14u; }
            if (ctx->pc != 0x3CBD14u) { return; }
        }
        }
    }
    ctx->pc = 0x3CBD14u;
label_3cbd14:
    // 0x3cbd14: 0x10000038  b           . + 4 + (0x38 << 2)
label_3cbd18:
    if (ctx->pc == 0x3CBD18u) {
        ctx->pc = 0x3CBD18u;
            // 0x3cbd18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3CBD1Cu;
        goto label_3cbd1c;
    }
    ctx->pc = 0x3CBD14u;
    {
        const bool branch_taken_0x3cbd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD14u;
            // 0x3cbd18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd14) {
            ctx->pc = 0x3CBDF8u;
            goto label_3cbdf8;
        }
    }
    ctx->pc = 0x3CBD1Cu;
label_3cbd1c:
    // 0x3cbd1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cbd20:
    // 0x3cbd20: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3cbd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3cbd24:
    // 0x3cbd24: 0xc0506ac  jal         func_141AB0
label_3cbd28:
    if (ctx->pc == 0x3CBD28u) {
        ctx->pc = 0x3CBD28u;
            // 0x3cbd28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3CBD2Cu;
        goto label_3cbd2c;
    }
    ctx->pc = 0x3CBD24u;
    SET_GPR_U32(ctx, 31, 0x3CBD2Cu);
    ctx->pc = 0x3CBD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD24u;
            // 0x3cbd28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD2Cu; }
        if (ctx->pc != 0x3CBD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD2Cu; }
        if (ctx->pc != 0x3CBD2Cu) { return; }
    }
    ctx->pc = 0x3CBD2Cu;
label_3cbd2c:
    // 0x3cbd2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cbd30:
    // 0x3cbd30: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3cbd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3cbd34:
    // 0x3cbd34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cbd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbd38:
    // 0x3cbd38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3cbd38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3cbd3c:
    // 0x3cbd3c: 0x320f809  jalr        $t9
label_3cbd40:
    if (ctx->pc == 0x3CBD40u) {
        ctx->pc = 0x3CBD40u;
            // 0x3cbd40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CBD44u;
        goto label_3cbd44;
    }
    ctx->pc = 0x3CBD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBD44u);
        ctx->pc = 0x3CBD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD3Cu;
            // 0x3cbd40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBD44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD44u; }
            if (ctx->pc != 0x3CBD44u) { return; }
        }
        }
    }
    ctx->pc = 0x3CBD44u;
label_3cbd44:
    // 0x3cbd44: 0xc0f2f84  jal         func_3CBE10
label_3cbd48:
    if (ctx->pc == 0x3CBD48u) {
        ctx->pc = 0x3CBD48u;
            // 0x3cbd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD4Cu;
        goto label_3cbd4c;
    }
    ctx->pc = 0x3CBD44u;
    SET_GPR_U32(ctx, 31, 0x3CBD4Cu);
    ctx->pc = 0x3CBD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD44u;
            // 0x3cbd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CBE10u;
    if (runtime->hasFunction(0x3CBE10u)) {
        auto targetFn = runtime->lookupFunction(0x3CBE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD4Cu; }
        if (ctx->pc != 0x3CBD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CBE10_0x3cbe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD4Cu; }
        if (ctx->pc != 0x3CBD4Cu) { return; }
    }
    ctx->pc = 0x3CBD4Cu;
label_3cbd4c:
    // 0x3cbd4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cbd50:
    // 0x3cbd50: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3cbd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3cbd54:
    // 0x3cbd54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cbd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbd58:
    // 0x3cbd58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3cbd58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3cbd5c:
    // 0x3cbd5c: 0x320f809  jalr        $t9
label_3cbd60:
    if (ctx->pc == 0x3CBD60u) {
        ctx->pc = 0x3CBD64u;
        goto label_3cbd64;
    }
    ctx->pc = 0x3CBD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBD64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBD64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD64u; }
            if (ctx->pc != 0x3CBD64u) { return; }
        }
        }
    }
    ctx->pc = 0x3CBD64u;
label_3cbd64:
    // 0x3cbd64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cbd68:
    // 0x3cbd68: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3cbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3cbd6c:
    // 0x3cbd6c: 0xc0506ac  jal         func_141AB0
label_3cbd70:
    if (ctx->pc == 0x3CBD70u) {
        ctx->pc = 0x3CBD70u;
            // 0x3cbd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD74u;
        goto label_3cbd74;
    }
    ctx->pc = 0x3CBD6Cu;
    SET_GPR_U32(ctx, 31, 0x3CBD74u);
    ctx->pc = 0x3CBD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD6Cu;
            // 0x3cbd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD74u; }
        if (ctx->pc != 0x3CBD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD74u; }
        if (ctx->pc != 0x3CBD74u) { return; }
    }
    ctx->pc = 0x3CBD74u;
label_3cbd74:
    // 0x3cbd74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cbd78:
    // 0x3cbd78: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3cbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3cbd7c:
    // 0x3cbd7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cbd7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbd80:
    // 0x3cbd80: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3cbd80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3cbd84:
    // 0x3cbd84: 0x320f809  jalr        $t9
label_3cbd88:
    if (ctx->pc == 0x3CBD88u) {
        ctx->pc = 0x3CBD88u;
            // 0x3cbd88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CBD8Cu;
        goto label_3cbd8c;
    }
    ctx->pc = 0x3CBD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBD8Cu);
        ctx->pc = 0x3CBD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD84u;
            // 0x3cbd88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBD8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD8Cu; }
            if (ctx->pc != 0x3CBD8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CBD8Cu;
label_3cbd8c:
    // 0x3cbd8c: 0xc110754  jal         func_441D50
label_3cbd90:
    if (ctx->pc == 0x3CBD90u) {
        ctx->pc = 0x3CBD90u;
            // 0x3cbd90: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x3CBD94u;
        goto label_3cbd94;
    }
    ctx->pc = 0x3CBD8Cu;
    SET_GPR_U32(ctx, 31, 0x3CBD94u);
    ctx->pc = 0x3CBD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBD8Cu;
            // 0x3cbd90: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD94u; }
        if (ctx->pc != 0x3CBD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBD94u; }
        if (ctx->pc != 0x3CBD94u) { return; }
    }
    ctx->pc = 0x3CBD94u;
label_3cbd94:
    // 0x3cbd94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cbd98:
    // 0x3cbd98: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3cbd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3cbd9c:
    // 0x3cbd9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cbd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbda0:
    // 0x3cbda0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3cbda0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3cbda4:
    // 0x3cbda4: 0x320f809  jalr        $t9
label_3cbda8:
    if (ctx->pc == 0x3CBDA8u) {
        ctx->pc = 0x3CBDACu;
        goto label_3cbdac;
    }
    ctx->pc = 0x3CBDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBDACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBDACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDACu; }
            if (ctx->pc != 0x3CBDACu) { return; }
        }
        }
    }
    ctx->pc = 0x3CBDACu;
label_3cbdac:
    // 0x3cbdac: 0xc05068c  jal         func_141A30
label_3cbdb0:
    if (ctx->pc == 0x3CBDB0u) {
        ctx->pc = 0x3CBDB0u;
            // 0x3cbdb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CBDB4u;
        goto label_3cbdb4;
    }
    ctx->pc = 0x3CBDACu;
    SET_GPR_U32(ctx, 31, 0x3CBDB4u);
    ctx->pc = 0x3CBDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBDACu;
            // 0x3cbdb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDB4u; }
        if (ctx->pc != 0x3CBDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDB4u; }
        if (ctx->pc != 0x3CBDB4u) { return; }
    }
    ctx->pc = 0x3CBDB4u;
label_3cbdb4:
    // 0x3cbdb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cbdb8:
    // 0x3cbdb8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3cbdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3cbdbc:
    // 0x3cbdbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cbdbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbdc0:
    // 0x3cbdc0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3cbdc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3cbdc4:
    // 0x3cbdc4: 0x320f809  jalr        $t9
label_3cbdc8:
    if (ctx->pc == 0x3CBDC8u) {
        ctx->pc = 0x3CBDC8u;
            // 0x3cbdc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CBDCCu;
        goto label_3cbdcc;
    }
    ctx->pc = 0x3CBDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBDCCu);
        ctx->pc = 0x3CBDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBDC4u;
            // 0x3cbdc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBDCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDCCu; }
            if (ctx->pc != 0x3CBDCCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CBDCCu;
label_3cbdcc:
    // 0x3cbdcc: 0xc110754  jal         func_441D50
label_3cbdd0:
    if (ctx->pc == 0x3CBDD0u) {
        ctx->pc = 0x3CBDD0u;
            // 0x3cbdd0: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x3CBDD4u;
        goto label_3cbdd4;
    }
    ctx->pc = 0x3CBDCCu;
    SET_GPR_U32(ctx, 31, 0x3CBDD4u);
    ctx->pc = 0x3CBDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBDCCu;
            // 0x3cbdd0: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDD4u; }
        if (ctx->pc != 0x3CBDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDD4u; }
        if (ctx->pc != 0x3CBDD4u) { return; }
    }
    ctx->pc = 0x3CBDD4u;
label_3cbdd4:
    // 0x3cbdd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3cbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3cbdd8:
    // 0x3cbdd8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3cbdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3cbddc:
    // 0x3cbddc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cbddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cbde0:
    // 0x3cbde0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3cbde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3cbde4:
    // 0x3cbde4: 0x320f809  jalr        $t9
label_3cbde8:
    if (ctx->pc == 0x3CBDE8u) {
        ctx->pc = 0x3CBDECu;
        goto label_3cbdec;
    }
    ctx->pc = 0x3CBDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CBDECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CBDECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDECu; }
            if (ctx->pc != 0x3CBDECu) { return; }
        }
        }
    }
    ctx->pc = 0x3CBDECu;
label_3cbdec:
    // 0x3cbdec: 0xc05068c  jal         func_141A30
label_3cbdf0:
    if (ctx->pc == 0x3CBDF0u) {
        ctx->pc = 0x3CBDF0u;
            // 0x3cbdf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CBDF4u;
        goto label_3cbdf4;
    }
    ctx->pc = 0x3CBDECu;
    SET_GPR_U32(ctx, 31, 0x3CBDF4u);
    ctx->pc = 0x3CBDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBDECu;
            // 0x3cbdf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDF4u; }
        if (ctx->pc != 0x3CBDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CBDF4u; }
        if (ctx->pc != 0x3CBDF4u) { return; }
    }
    ctx->pc = 0x3CBDF4u;
label_3cbdf4:
    // 0x3cbdf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cbdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cbdf8:
    // 0x3cbdf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cbdf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cbdfc:
    // 0x3cbdfc: 0x3e00008  jr          $ra
label_3cbe00:
    if (ctx->pc == 0x3CBE00u) {
        ctx->pc = 0x3CBE00u;
            // 0x3cbe00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3CBE04u;
        goto label_3cbe04;
    }
    ctx->pc = 0x3CBDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CBDFCu;
            // 0x3cbe00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CBE04u;
label_3cbe04:
    // 0x3cbe04: 0x0  nop
    ctx->pc = 0x3cbe04u;
    // NOP
label_3cbe08:
    // 0x3cbe08: 0x0  nop
    ctx->pc = 0x3cbe08u;
    // NOP
label_3cbe0c:
    // 0x3cbe0c: 0x0  nop
    ctx->pc = 0x3cbe0cu;
    // NOP
}
