#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BB9C0
// Address: 0x4bb9c0 - 0x4bccc0
void sub_004BB9C0_0x4bb9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BB9C0_0x4bb9c0");
#endif

    switch (ctx->pc) {
        case 0x4bb9c0u: goto label_4bb9c0;
        case 0x4bb9c4u: goto label_4bb9c4;
        case 0x4bb9c8u: goto label_4bb9c8;
        case 0x4bb9ccu: goto label_4bb9cc;
        case 0x4bb9d0u: goto label_4bb9d0;
        case 0x4bb9d4u: goto label_4bb9d4;
        case 0x4bb9d8u: goto label_4bb9d8;
        case 0x4bb9dcu: goto label_4bb9dc;
        case 0x4bb9e0u: goto label_4bb9e0;
        case 0x4bb9e4u: goto label_4bb9e4;
        case 0x4bb9e8u: goto label_4bb9e8;
        case 0x4bb9ecu: goto label_4bb9ec;
        case 0x4bb9f0u: goto label_4bb9f0;
        case 0x4bb9f4u: goto label_4bb9f4;
        case 0x4bb9f8u: goto label_4bb9f8;
        case 0x4bb9fcu: goto label_4bb9fc;
        case 0x4bba00u: goto label_4bba00;
        case 0x4bba04u: goto label_4bba04;
        case 0x4bba08u: goto label_4bba08;
        case 0x4bba0cu: goto label_4bba0c;
        case 0x4bba10u: goto label_4bba10;
        case 0x4bba14u: goto label_4bba14;
        case 0x4bba18u: goto label_4bba18;
        case 0x4bba1cu: goto label_4bba1c;
        case 0x4bba20u: goto label_4bba20;
        case 0x4bba24u: goto label_4bba24;
        case 0x4bba28u: goto label_4bba28;
        case 0x4bba2cu: goto label_4bba2c;
        case 0x4bba30u: goto label_4bba30;
        case 0x4bba34u: goto label_4bba34;
        case 0x4bba38u: goto label_4bba38;
        case 0x4bba3cu: goto label_4bba3c;
        case 0x4bba40u: goto label_4bba40;
        case 0x4bba44u: goto label_4bba44;
        case 0x4bba48u: goto label_4bba48;
        case 0x4bba4cu: goto label_4bba4c;
        case 0x4bba50u: goto label_4bba50;
        case 0x4bba54u: goto label_4bba54;
        case 0x4bba58u: goto label_4bba58;
        case 0x4bba5cu: goto label_4bba5c;
        case 0x4bba60u: goto label_4bba60;
        case 0x4bba64u: goto label_4bba64;
        case 0x4bba68u: goto label_4bba68;
        case 0x4bba6cu: goto label_4bba6c;
        case 0x4bba70u: goto label_4bba70;
        case 0x4bba74u: goto label_4bba74;
        case 0x4bba78u: goto label_4bba78;
        case 0x4bba7cu: goto label_4bba7c;
        case 0x4bba80u: goto label_4bba80;
        case 0x4bba84u: goto label_4bba84;
        case 0x4bba88u: goto label_4bba88;
        case 0x4bba8cu: goto label_4bba8c;
        case 0x4bba90u: goto label_4bba90;
        case 0x4bba94u: goto label_4bba94;
        case 0x4bba98u: goto label_4bba98;
        case 0x4bba9cu: goto label_4bba9c;
        case 0x4bbaa0u: goto label_4bbaa0;
        case 0x4bbaa4u: goto label_4bbaa4;
        case 0x4bbaa8u: goto label_4bbaa8;
        case 0x4bbaacu: goto label_4bbaac;
        case 0x4bbab0u: goto label_4bbab0;
        case 0x4bbab4u: goto label_4bbab4;
        case 0x4bbab8u: goto label_4bbab8;
        case 0x4bbabcu: goto label_4bbabc;
        case 0x4bbac0u: goto label_4bbac0;
        case 0x4bbac4u: goto label_4bbac4;
        case 0x4bbac8u: goto label_4bbac8;
        case 0x4bbaccu: goto label_4bbacc;
        case 0x4bbad0u: goto label_4bbad0;
        case 0x4bbad4u: goto label_4bbad4;
        case 0x4bbad8u: goto label_4bbad8;
        case 0x4bbadcu: goto label_4bbadc;
        case 0x4bbae0u: goto label_4bbae0;
        case 0x4bbae4u: goto label_4bbae4;
        case 0x4bbae8u: goto label_4bbae8;
        case 0x4bbaecu: goto label_4bbaec;
        case 0x4bbaf0u: goto label_4bbaf0;
        case 0x4bbaf4u: goto label_4bbaf4;
        case 0x4bbaf8u: goto label_4bbaf8;
        case 0x4bbafcu: goto label_4bbafc;
        case 0x4bbb00u: goto label_4bbb00;
        case 0x4bbb04u: goto label_4bbb04;
        case 0x4bbb08u: goto label_4bbb08;
        case 0x4bbb0cu: goto label_4bbb0c;
        case 0x4bbb10u: goto label_4bbb10;
        case 0x4bbb14u: goto label_4bbb14;
        case 0x4bbb18u: goto label_4bbb18;
        case 0x4bbb1cu: goto label_4bbb1c;
        case 0x4bbb20u: goto label_4bbb20;
        case 0x4bbb24u: goto label_4bbb24;
        case 0x4bbb28u: goto label_4bbb28;
        case 0x4bbb2cu: goto label_4bbb2c;
        case 0x4bbb30u: goto label_4bbb30;
        case 0x4bbb34u: goto label_4bbb34;
        case 0x4bbb38u: goto label_4bbb38;
        case 0x4bbb3cu: goto label_4bbb3c;
        case 0x4bbb40u: goto label_4bbb40;
        case 0x4bbb44u: goto label_4bbb44;
        case 0x4bbb48u: goto label_4bbb48;
        case 0x4bbb4cu: goto label_4bbb4c;
        case 0x4bbb50u: goto label_4bbb50;
        case 0x4bbb54u: goto label_4bbb54;
        case 0x4bbb58u: goto label_4bbb58;
        case 0x4bbb5cu: goto label_4bbb5c;
        case 0x4bbb60u: goto label_4bbb60;
        case 0x4bbb64u: goto label_4bbb64;
        case 0x4bbb68u: goto label_4bbb68;
        case 0x4bbb6cu: goto label_4bbb6c;
        case 0x4bbb70u: goto label_4bbb70;
        case 0x4bbb74u: goto label_4bbb74;
        case 0x4bbb78u: goto label_4bbb78;
        case 0x4bbb7cu: goto label_4bbb7c;
        case 0x4bbb80u: goto label_4bbb80;
        case 0x4bbb84u: goto label_4bbb84;
        case 0x4bbb88u: goto label_4bbb88;
        case 0x4bbb8cu: goto label_4bbb8c;
        case 0x4bbb90u: goto label_4bbb90;
        case 0x4bbb94u: goto label_4bbb94;
        case 0x4bbb98u: goto label_4bbb98;
        case 0x4bbb9cu: goto label_4bbb9c;
        case 0x4bbba0u: goto label_4bbba0;
        case 0x4bbba4u: goto label_4bbba4;
        case 0x4bbba8u: goto label_4bbba8;
        case 0x4bbbacu: goto label_4bbbac;
        case 0x4bbbb0u: goto label_4bbbb0;
        case 0x4bbbb4u: goto label_4bbbb4;
        case 0x4bbbb8u: goto label_4bbbb8;
        case 0x4bbbbcu: goto label_4bbbbc;
        case 0x4bbbc0u: goto label_4bbbc0;
        case 0x4bbbc4u: goto label_4bbbc4;
        case 0x4bbbc8u: goto label_4bbbc8;
        case 0x4bbbccu: goto label_4bbbcc;
        case 0x4bbbd0u: goto label_4bbbd0;
        case 0x4bbbd4u: goto label_4bbbd4;
        case 0x4bbbd8u: goto label_4bbbd8;
        case 0x4bbbdcu: goto label_4bbbdc;
        case 0x4bbbe0u: goto label_4bbbe0;
        case 0x4bbbe4u: goto label_4bbbe4;
        case 0x4bbbe8u: goto label_4bbbe8;
        case 0x4bbbecu: goto label_4bbbec;
        case 0x4bbbf0u: goto label_4bbbf0;
        case 0x4bbbf4u: goto label_4bbbf4;
        case 0x4bbbf8u: goto label_4bbbf8;
        case 0x4bbbfcu: goto label_4bbbfc;
        case 0x4bbc00u: goto label_4bbc00;
        case 0x4bbc04u: goto label_4bbc04;
        case 0x4bbc08u: goto label_4bbc08;
        case 0x4bbc0cu: goto label_4bbc0c;
        case 0x4bbc10u: goto label_4bbc10;
        case 0x4bbc14u: goto label_4bbc14;
        case 0x4bbc18u: goto label_4bbc18;
        case 0x4bbc1cu: goto label_4bbc1c;
        case 0x4bbc20u: goto label_4bbc20;
        case 0x4bbc24u: goto label_4bbc24;
        case 0x4bbc28u: goto label_4bbc28;
        case 0x4bbc2cu: goto label_4bbc2c;
        case 0x4bbc30u: goto label_4bbc30;
        case 0x4bbc34u: goto label_4bbc34;
        case 0x4bbc38u: goto label_4bbc38;
        case 0x4bbc3cu: goto label_4bbc3c;
        case 0x4bbc40u: goto label_4bbc40;
        case 0x4bbc44u: goto label_4bbc44;
        case 0x4bbc48u: goto label_4bbc48;
        case 0x4bbc4cu: goto label_4bbc4c;
        case 0x4bbc50u: goto label_4bbc50;
        case 0x4bbc54u: goto label_4bbc54;
        case 0x4bbc58u: goto label_4bbc58;
        case 0x4bbc5cu: goto label_4bbc5c;
        case 0x4bbc60u: goto label_4bbc60;
        case 0x4bbc64u: goto label_4bbc64;
        case 0x4bbc68u: goto label_4bbc68;
        case 0x4bbc6cu: goto label_4bbc6c;
        case 0x4bbc70u: goto label_4bbc70;
        case 0x4bbc74u: goto label_4bbc74;
        case 0x4bbc78u: goto label_4bbc78;
        case 0x4bbc7cu: goto label_4bbc7c;
        case 0x4bbc80u: goto label_4bbc80;
        case 0x4bbc84u: goto label_4bbc84;
        case 0x4bbc88u: goto label_4bbc88;
        case 0x4bbc8cu: goto label_4bbc8c;
        case 0x4bbc90u: goto label_4bbc90;
        case 0x4bbc94u: goto label_4bbc94;
        case 0x4bbc98u: goto label_4bbc98;
        case 0x4bbc9cu: goto label_4bbc9c;
        case 0x4bbca0u: goto label_4bbca0;
        case 0x4bbca4u: goto label_4bbca4;
        case 0x4bbca8u: goto label_4bbca8;
        case 0x4bbcacu: goto label_4bbcac;
        case 0x4bbcb0u: goto label_4bbcb0;
        case 0x4bbcb4u: goto label_4bbcb4;
        case 0x4bbcb8u: goto label_4bbcb8;
        case 0x4bbcbcu: goto label_4bbcbc;
        case 0x4bbcc0u: goto label_4bbcc0;
        case 0x4bbcc4u: goto label_4bbcc4;
        case 0x4bbcc8u: goto label_4bbcc8;
        case 0x4bbcccu: goto label_4bbccc;
        case 0x4bbcd0u: goto label_4bbcd0;
        case 0x4bbcd4u: goto label_4bbcd4;
        case 0x4bbcd8u: goto label_4bbcd8;
        case 0x4bbcdcu: goto label_4bbcdc;
        case 0x4bbce0u: goto label_4bbce0;
        case 0x4bbce4u: goto label_4bbce4;
        case 0x4bbce8u: goto label_4bbce8;
        case 0x4bbcecu: goto label_4bbcec;
        case 0x4bbcf0u: goto label_4bbcf0;
        case 0x4bbcf4u: goto label_4bbcf4;
        case 0x4bbcf8u: goto label_4bbcf8;
        case 0x4bbcfcu: goto label_4bbcfc;
        case 0x4bbd00u: goto label_4bbd00;
        case 0x4bbd04u: goto label_4bbd04;
        case 0x4bbd08u: goto label_4bbd08;
        case 0x4bbd0cu: goto label_4bbd0c;
        case 0x4bbd10u: goto label_4bbd10;
        case 0x4bbd14u: goto label_4bbd14;
        case 0x4bbd18u: goto label_4bbd18;
        case 0x4bbd1cu: goto label_4bbd1c;
        case 0x4bbd20u: goto label_4bbd20;
        case 0x4bbd24u: goto label_4bbd24;
        case 0x4bbd28u: goto label_4bbd28;
        case 0x4bbd2cu: goto label_4bbd2c;
        case 0x4bbd30u: goto label_4bbd30;
        case 0x4bbd34u: goto label_4bbd34;
        case 0x4bbd38u: goto label_4bbd38;
        case 0x4bbd3cu: goto label_4bbd3c;
        case 0x4bbd40u: goto label_4bbd40;
        case 0x4bbd44u: goto label_4bbd44;
        case 0x4bbd48u: goto label_4bbd48;
        case 0x4bbd4cu: goto label_4bbd4c;
        case 0x4bbd50u: goto label_4bbd50;
        case 0x4bbd54u: goto label_4bbd54;
        case 0x4bbd58u: goto label_4bbd58;
        case 0x4bbd5cu: goto label_4bbd5c;
        case 0x4bbd60u: goto label_4bbd60;
        case 0x4bbd64u: goto label_4bbd64;
        case 0x4bbd68u: goto label_4bbd68;
        case 0x4bbd6cu: goto label_4bbd6c;
        case 0x4bbd70u: goto label_4bbd70;
        case 0x4bbd74u: goto label_4bbd74;
        case 0x4bbd78u: goto label_4bbd78;
        case 0x4bbd7cu: goto label_4bbd7c;
        case 0x4bbd80u: goto label_4bbd80;
        case 0x4bbd84u: goto label_4bbd84;
        case 0x4bbd88u: goto label_4bbd88;
        case 0x4bbd8cu: goto label_4bbd8c;
        case 0x4bbd90u: goto label_4bbd90;
        case 0x4bbd94u: goto label_4bbd94;
        case 0x4bbd98u: goto label_4bbd98;
        case 0x4bbd9cu: goto label_4bbd9c;
        case 0x4bbda0u: goto label_4bbda0;
        case 0x4bbda4u: goto label_4bbda4;
        case 0x4bbda8u: goto label_4bbda8;
        case 0x4bbdacu: goto label_4bbdac;
        case 0x4bbdb0u: goto label_4bbdb0;
        case 0x4bbdb4u: goto label_4bbdb4;
        case 0x4bbdb8u: goto label_4bbdb8;
        case 0x4bbdbcu: goto label_4bbdbc;
        case 0x4bbdc0u: goto label_4bbdc0;
        case 0x4bbdc4u: goto label_4bbdc4;
        case 0x4bbdc8u: goto label_4bbdc8;
        case 0x4bbdccu: goto label_4bbdcc;
        case 0x4bbdd0u: goto label_4bbdd0;
        case 0x4bbdd4u: goto label_4bbdd4;
        case 0x4bbdd8u: goto label_4bbdd8;
        case 0x4bbddcu: goto label_4bbddc;
        case 0x4bbde0u: goto label_4bbde0;
        case 0x4bbde4u: goto label_4bbde4;
        case 0x4bbde8u: goto label_4bbde8;
        case 0x4bbdecu: goto label_4bbdec;
        case 0x4bbdf0u: goto label_4bbdf0;
        case 0x4bbdf4u: goto label_4bbdf4;
        case 0x4bbdf8u: goto label_4bbdf8;
        case 0x4bbdfcu: goto label_4bbdfc;
        case 0x4bbe00u: goto label_4bbe00;
        case 0x4bbe04u: goto label_4bbe04;
        case 0x4bbe08u: goto label_4bbe08;
        case 0x4bbe0cu: goto label_4bbe0c;
        case 0x4bbe10u: goto label_4bbe10;
        case 0x4bbe14u: goto label_4bbe14;
        case 0x4bbe18u: goto label_4bbe18;
        case 0x4bbe1cu: goto label_4bbe1c;
        case 0x4bbe20u: goto label_4bbe20;
        case 0x4bbe24u: goto label_4bbe24;
        case 0x4bbe28u: goto label_4bbe28;
        case 0x4bbe2cu: goto label_4bbe2c;
        case 0x4bbe30u: goto label_4bbe30;
        case 0x4bbe34u: goto label_4bbe34;
        case 0x4bbe38u: goto label_4bbe38;
        case 0x4bbe3cu: goto label_4bbe3c;
        case 0x4bbe40u: goto label_4bbe40;
        case 0x4bbe44u: goto label_4bbe44;
        case 0x4bbe48u: goto label_4bbe48;
        case 0x4bbe4cu: goto label_4bbe4c;
        case 0x4bbe50u: goto label_4bbe50;
        case 0x4bbe54u: goto label_4bbe54;
        case 0x4bbe58u: goto label_4bbe58;
        case 0x4bbe5cu: goto label_4bbe5c;
        case 0x4bbe60u: goto label_4bbe60;
        case 0x4bbe64u: goto label_4bbe64;
        case 0x4bbe68u: goto label_4bbe68;
        case 0x4bbe6cu: goto label_4bbe6c;
        case 0x4bbe70u: goto label_4bbe70;
        case 0x4bbe74u: goto label_4bbe74;
        case 0x4bbe78u: goto label_4bbe78;
        case 0x4bbe7cu: goto label_4bbe7c;
        case 0x4bbe80u: goto label_4bbe80;
        case 0x4bbe84u: goto label_4bbe84;
        case 0x4bbe88u: goto label_4bbe88;
        case 0x4bbe8cu: goto label_4bbe8c;
        case 0x4bbe90u: goto label_4bbe90;
        case 0x4bbe94u: goto label_4bbe94;
        case 0x4bbe98u: goto label_4bbe98;
        case 0x4bbe9cu: goto label_4bbe9c;
        case 0x4bbea0u: goto label_4bbea0;
        case 0x4bbea4u: goto label_4bbea4;
        case 0x4bbea8u: goto label_4bbea8;
        case 0x4bbeacu: goto label_4bbeac;
        case 0x4bbeb0u: goto label_4bbeb0;
        case 0x4bbeb4u: goto label_4bbeb4;
        case 0x4bbeb8u: goto label_4bbeb8;
        case 0x4bbebcu: goto label_4bbebc;
        case 0x4bbec0u: goto label_4bbec0;
        case 0x4bbec4u: goto label_4bbec4;
        case 0x4bbec8u: goto label_4bbec8;
        case 0x4bbeccu: goto label_4bbecc;
        case 0x4bbed0u: goto label_4bbed0;
        case 0x4bbed4u: goto label_4bbed4;
        case 0x4bbed8u: goto label_4bbed8;
        case 0x4bbedcu: goto label_4bbedc;
        case 0x4bbee0u: goto label_4bbee0;
        case 0x4bbee4u: goto label_4bbee4;
        case 0x4bbee8u: goto label_4bbee8;
        case 0x4bbeecu: goto label_4bbeec;
        case 0x4bbef0u: goto label_4bbef0;
        case 0x4bbef4u: goto label_4bbef4;
        case 0x4bbef8u: goto label_4bbef8;
        case 0x4bbefcu: goto label_4bbefc;
        case 0x4bbf00u: goto label_4bbf00;
        case 0x4bbf04u: goto label_4bbf04;
        case 0x4bbf08u: goto label_4bbf08;
        case 0x4bbf0cu: goto label_4bbf0c;
        case 0x4bbf10u: goto label_4bbf10;
        case 0x4bbf14u: goto label_4bbf14;
        case 0x4bbf18u: goto label_4bbf18;
        case 0x4bbf1cu: goto label_4bbf1c;
        case 0x4bbf20u: goto label_4bbf20;
        case 0x4bbf24u: goto label_4bbf24;
        case 0x4bbf28u: goto label_4bbf28;
        case 0x4bbf2cu: goto label_4bbf2c;
        case 0x4bbf30u: goto label_4bbf30;
        case 0x4bbf34u: goto label_4bbf34;
        case 0x4bbf38u: goto label_4bbf38;
        case 0x4bbf3cu: goto label_4bbf3c;
        case 0x4bbf40u: goto label_4bbf40;
        case 0x4bbf44u: goto label_4bbf44;
        case 0x4bbf48u: goto label_4bbf48;
        case 0x4bbf4cu: goto label_4bbf4c;
        case 0x4bbf50u: goto label_4bbf50;
        case 0x4bbf54u: goto label_4bbf54;
        case 0x4bbf58u: goto label_4bbf58;
        case 0x4bbf5cu: goto label_4bbf5c;
        case 0x4bbf60u: goto label_4bbf60;
        case 0x4bbf64u: goto label_4bbf64;
        case 0x4bbf68u: goto label_4bbf68;
        case 0x4bbf6cu: goto label_4bbf6c;
        case 0x4bbf70u: goto label_4bbf70;
        case 0x4bbf74u: goto label_4bbf74;
        case 0x4bbf78u: goto label_4bbf78;
        case 0x4bbf7cu: goto label_4bbf7c;
        case 0x4bbf80u: goto label_4bbf80;
        case 0x4bbf84u: goto label_4bbf84;
        case 0x4bbf88u: goto label_4bbf88;
        case 0x4bbf8cu: goto label_4bbf8c;
        case 0x4bbf90u: goto label_4bbf90;
        case 0x4bbf94u: goto label_4bbf94;
        case 0x4bbf98u: goto label_4bbf98;
        case 0x4bbf9cu: goto label_4bbf9c;
        case 0x4bbfa0u: goto label_4bbfa0;
        case 0x4bbfa4u: goto label_4bbfa4;
        case 0x4bbfa8u: goto label_4bbfa8;
        case 0x4bbfacu: goto label_4bbfac;
        case 0x4bbfb0u: goto label_4bbfb0;
        case 0x4bbfb4u: goto label_4bbfb4;
        case 0x4bbfb8u: goto label_4bbfb8;
        case 0x4bbfbcu: goto label_4bbfbc;
        case 0x4bbfc0u: goto label_4bbfc0;
        case 0x4bbfc4u: goto label_4bbfc4;
        case 0x4bbfc8u: goto label_4bbfc8;
        case 0x4bbfccu: goto label_4bbfcc;
        case 0x4bbfd0u: goto label_4bbfd0;
        case 0x4bbfd4u: goto label_4bbfd4;
        case 0x4bbfd8u: goto label_4bbfd8;
        case 0x4bbfdcu: goto label_4bbfdc;
        case 0x4bbfe0u: goto label_4bbfe0;
        case 0x4bbfe4u: goto label_4bbfe4;
        case 0x4bbfe8u: goto label_4bbfe8;
        case 0x4bbfecu: goto label_4bbfec;
        case 0x4bbff0u: goto label_4bbff0;
        case 0x4bbff4u: goto label_4bbff4;
        case 0x4bbff8u: goto label_4bbff8;
        case 0x4bbffcu: goto label_4bbffc;
        case 0x4bc000u: goto label_4bc000;
        case 0x4bc004u: goto label_4bc004;
        case 0x4bc008u: goto label_4bc008;
        case 0x4bc00cu: goto label_4bc00c;
        case 0x4bc010u: goto label_4bc010;
        case 0x4bc014u: goto label_4bc014;
        case 0x4bc018u: goto label_4bc018;
        case 0x4bc01cu: goto label_4bc01c;
        case 0x4bc020u: goto label_4bc020;
        case 0x4bc024u: goto label_4bc024;
        case 0x4bc028u: goto label_4bc028;
        case 0x4bc02cu: goto label_4bc02c;
        case 0x4bc030u: goto label_4bc030;
        case 0x4bc034u: goto label_4bc034;
        case 0x4bc038u: goto label_4bc038;
        case 0x4bc03cu: goto label_4bc03c;
        case 0x4bc040u: goto label_4bc040;
        case 0x4bc044u: goto label_4bc044;
        case 0x4bc048u: goto label_4bc048;
        case 0x4bc04cu: goto label_4bc04c;
        case 0x4bc050u: goto label_4bc050;
        case 0x4bc054u: goto label_4bc054;
        case 0x4bc058u: goto label_4bc058;
        case 0x4bc05cu: goto label_4bc05c;
        case 0x4bc060u: goto label_4bc060;
        case 0x4bc064u: goto label_4bc064;
        case 0x4bc068u: goto label_4bc068;
        case 0x4bc06cu: goto label_4bc06c;
        case 0x4bc070u: goto label_4bc070;
        case 0x4bc074u: goto label_4bc074;
        case 0x4bc078u: goto label_4bc078;
        case 0x4bc07cu: goto label_4bc07c;
        case 0x4bc080u: goto label_4bc080;
        case 0x4bc084u: goto label_4bc084;
        case 0x4bc088u: goto label_4bc088;
        case 0x4bc08cu: goto label_4bc08c;
        case 0x4bc090u: goto label_4bc090;
        case 0x4bc094u: goto label_4bc094;
        case 0x4bc098u: goto label_4bc098;
        case 0x4bc09cu: goto label_4bc09c;
        case 0x4bc0a0u: goto label_4bc0a0;
        case 0x4bc0a4u: goto label_4bc0a4;
        case 0x4bc0a8u: goto label_4bc0a8;
        case 0x4bc0acu: goto label_4bc0ac;
        case 0x4bc0b0u: goto label_4bc0b0;
        case 0x4bc0b4u: goto label_4bc0b4;
        case 0x4bc0b8u: goto label_4bc0b8;
        case 0x4bc0bcu: goto label_4bc0bc;
        case 0x4bc0c0u: goto label_4bc0c0;
        case 0x4bc0c4u: goto label_4bc0c4;
        case 0x4bc0c8u: goto label_4bc0c8;
        case 0x4bc0ccu: goto label_4bc0cc;
        case 0x4bc0d0u: goto label_4bc0d0;
        case 0x4bc0d4u: goto label_4bc0d4;
        case 0x4bc0d8u: goto label_4bc0d8;
        case 0x4bc0dcu: goto label_4bc0dc;
        case 0x4bc0e0u: goto label_4bc0e0;
        case 0x4bc0e4u: goto label_4bc0e4;
        case 0x4bc0e8u: goto label_4bc0e8;
        case 0x4bc0ecu: goto label_4bc0ec;
        case 0x4bc0f0u: goto label_4bc0f0;
        case 0x4bc0f4u: goto label_4bc0f4;
        case 0x4bc0f8u: goto label_4bc0f8;
        case 0x4bc0fcu: goto label_4bc0fc;
        case 0x4bc100u: goto label_4bc100;
        case 0x4bc104u: goto label_4bc104;
        case 0x4bc108u: goto label_4bc108;
        case 0x4bc10cu: goto label_4bc10c;
        case 0x4bc110u: goto label_4bc110;
        case 0x4bc114u: goto label_4bc114;
        case 0x4bc118u: goto label_4bc118;
        case 0x4bc11cu: goto label_4bc11c;
        case 0x4bc120u: goto label_4bc120;
        case 0x4bc124u: goto label_4bc124;
        case 0x4bc128u: goto label_4bc128;
        case 0x4bc12cu: goto label_4bc12c;
        case 0x4bc130u: goto label_4bc130;
        case 0x4bc134u: goto label_4bc134;
        case 0x4bc138u: goto label_4bc138;
        case 0x4bc13cu: goto label_4bc13c;
        case 0x4bc140u: goto label_4bc140;
        case 0x4bc144u: goto label_4bc144;
        case 0x4bc148u: goto label_4bc148;
        case 0x4bc14cu: goto label_4bc14c;
        case 0x4bc150u: goto label_4bc150;
        case 0x4bc154u: goto label_4bc154;
        case 0x4bc158u: goto label_4bc158;
        case 0x4bc15cu: goto label_4bc15c;
        case 0x4bc160u: goto label_4bc160;
        case 0x4bc164u: goto label_4bc164;
        case 0x4bc168u: goto label_4bc168;
        case 0x4bc16cu: goto label_4bc16c;
        case 0x4bc170u: goto label_4bc170;
        case 0x4bc174u: goto label_4bc174;
        case 0x4bc178u: goto label_4bc178;
        case 0x4bc17cu: goto label_4bc17c;
        case 0x4bc180u: goto label_4bc180;
        case 0x4bc184u: goto label_4bc184;
        case 0x4bc188u: goto label_4bc188;
        case 0x4bc18cu: goto label_4bc18c;
        case 0x4bc190u: goto label_4bc190;
        case 0x4bc194u: goto label_4bc194;
        case 0x4bc198u: goto label_4bc198;
        case 0x4bc19cu: goto label_4bc19c;
        case 0x4bc1a0u: goto label_4bc1a0;
        case 0x4bc1a4u: goto label_4bc1a4;
        case 0x4bc1a8u: goto label_4bc1a8;
        case 0x4bc1acu: goto label_4bc1ac;
        case 0x4bc1b0u: goto label_4bc1b0;
        case 0x4bc1b4u: goto label_4bc1b4;
        case 0x4bc1b8u: goto label_4bc1b8;
        case 0x4bc1bcu: goto label_4bc1bc;
        case 0x4bc1c0u: goto label_4bc1c0;
        case 0x4bc1c4u: goto label_4bc1c4;
        case 0x4bc1c8u: goto label_4bc1c8;
        case 0x4bc1ccu: goto label_4bc1cc;
        case 0x4bc1d0u: goto label_4bc1d0;
        case 0x4bc1d4u: goto label_4bc1d4;
        case 0x4bc1d8u: goto label_4bc1d8;
        case 0x4bc1dcu: goto label_4bc1dc;
        case 0x4bc1e0u: goto label_4bc1e0;
        case 0x4bc1e4u: goto label_4bc1e4;
        case 0x4bc1e8u: goto label_4bc1e8;
        case 0x4bc1ecu: goto label_4bc1ec;
        case 0x4bc1f0u: goto label_4bc1f0;
        case 0x4bc1f4u: goto label_4bc1f4;
        case 0x4bc1f8u: goto label_4bc1f8;
        case 0x4bc1fcu: goto label_4bc1fc;
        case 0x4bc200u: goto label_4bc200;
        case 0x4bc204u: goto label_4bc204;
        case 0x4bc208u: goto label_4bc208;
        case 0x4bc20cu: goto label_4bc20c;
        case 0x4bc210u: goto label_4bc210;
        case 0x4bc214u: goto label_4bc214;
        case 0x4bc218u: goto label_4bc218;
        case 0x4bc21cu: goto label_4bc21c;
        case 0x4bc220u: goto label_4bc220;
        case 0x4bc224u: goto label_4bc224;
        case 0x4bc228u: goto label_4bc228;
        case 0x4bc22cu: goto label_4bc22c;
        case 0x4bc230u: goto label_4bc230;
        case 0x4bc234u: goto label_4bc234;
        case 0x4bc238u: goto label_4bc238;
        case 0x4bc23cu: goto label_4bc23c;
        case 0x4bc240u: goto label_4bc240;
        case 0x4bc244u: goto label_4bc244;
        case 0x4bc248u: goto label_4bc248;
        case 0x4bc24cu: goto label_4bc24c;
        case 0x4bc250u: goto label_4bc250;
        case 0x4bc254u: goto label_4bc254;
        case 0x4bc258u: goto label_4bc258;
        case 0x4bc25cu: goto label_4bc25c;
        case 0x4bc260u: goto label_4bc260;
        case 0x4bc264u: goto label_4bc264;
        case 0x4bc268u: goto label_4bc268;
        case 0x4bc26cu: goto label_4bc26c;
        case 0x4bc270u: goto label_4bc270;
        case 0x4bc274u: goto label_4bc274;
        case 0x4bc278u: goto label_4bc278;
        case 0x4bc27cu: goto label_4bc27c;
        case 0x4bc280u: goto label_4bc280;
        case 0x4bc284u: goto label_4bc284;
        case 0x4bc288u: goto label_4bc288;
        case 0x4bc28cu: goto label_4bc28c;
        case 0x4bc290u: goto label_4bc290;
        case 0x4bc294u: goto label_4bc294;
        case 0x4bc298u: goto label_4bc298;
        case 0x4bc29cu: goto label_4bc29c;
        case 0x4bc2a0u: goto label_4bc2a0;
        case 0x4bc2a4u: goto label_4bc2a4;
        case 0x4bc2a8u: goto label_4bc2a8;
        case 0x4bc2acu: goto label_4bc2ac;
        case 0x4bc2b0u: goto label_4bc2b0;
        case 0x4bc2b4u: goto label_4bc2b4;
        case 0x4bc2b8u: goto label_4bc2b8;
        case 0x4bc2bcu: goto label_4bc2bc;
        case 0x4bc2c0u: goto label_4bc2c0;
        case 0x4bc2c4u: goto label_4bc2c4;
        case 0x4bc2c8u: goto label_4bc2c8;
        case 0x4bc2ccu: goto label_4bc2cc;
        case 0x4bc2d0u: goto label_4bc2d0;
        case 0x4bc2d4u: goto label_4bc2d4;
        case 0x4bc2d8u: goto label_4bc2d8;
        case 0x4bc2dcu: goto label_4bc2dc;
        case 0x4bc2e0u: goto label_4bc2e0;
        case 0x4bc2e4u: goto label_4bc2e4;
        case 0x4bc2e8u: goto label_4bc2e8;
        case 0x4bc2ecu: goto label_4bc2ec;
        case 0x4bc2f0u: goto label_4bc2f0;
        case 0x4bc2f4u: goto label_4bc2f4;
        case 0x4bc2f8u: goto label_4bc2f8;
        case 0x4bc2fcu: goto label_4bc2fc;
        case 0x4bc300u: goto label_4bc300;
        case 0x4bc304u: goto label_4bc304;
        case 0x4bc308u: goto label_4bc308;
        case 0x4bc30cu: goto label_4bc30c;
        case 0x4bc310u: goto label_4bc310;
        case 0x4bc314u: goto label_4bc314;
        case 0x4bc318u: goto label_4bc318;
        case 0x4bc31cu: goto label_4bc31c;
        case 0x4bc320u: goto label_4bc320;
        case 0x4bc324u: goto label_4bc324;
        case 0x4bc328u: goto label_4bc328;
        case 0x4bc32cu: goto label_4bc32c;
        case 0x4bc330u: goto label_4bc330;
        case 0x4bc334u: goto label_4bc334;
        case 0x4bc338u: goto label_4bc338;
        case 0x4bc33cu: goto label_4bc33c;
        case 0x4bc340u: goto label_4bc340;
        case 0x4bc344u: goto label_4bc344;
        case 0x4bc348u: goto label_4bc348;
        case 0x4bc34cu: goto label_4bc34c;
        case 0x4bc350u: goto label_4bc350;
        case 0x4bc354u: goto label_4bc354;
        case 0x4bc358u: goto label_4bc358;
        case 0x4bc35cu: goto label_4bc35c;
        case 0x4bc360u: goto label_4bc360;
        case 0x4bc364u: goto label_4bc364;
        case 0x4bc368u: goto label_4bc368;
        case 0x4bc36cu: goto label_4bc36c;
        case 0x4bc370u: goto label_4bc370;
        case 0x4bc374u: goto label_4bc374;
        case 0x4bc378u: goto label_4bc378;
        case 0x4bc37cu: goto label_4bc37c;
        case 0x4bc380u: goto label_4bc380;
        case 0x4bc384u: goto label_4bc384;
        case 0x4bc388u: goto label_4bc388;
        case 0x4bc38cu: goto label_4bc38c;
        case 0x4bc390u: goto label_4bc390;
        case 0x4bc394u: goto label_4bc394;
        case 0x4bc398u: goto label_4bc398;
        case 0x4bc39cu: goto label_4bc39c;
        case 0x4bc3a0u: goto label_4bc3a0;
        case 0x4bc3a4u: goto label_4bc3a4;
        case 0x4bc3a8u: goto label_4bc3a8;
        case 0x4bc3acu: goto label_4bc3ac;
        case 0x4bc3b0u: goto label_4bc3b0;
        case 0x4bc3b4u: goto label_4bc3b4;
        case 0x4bc3b8u: goto label_4bc3b8;
        case 0x4bc3bcu: goto label_4bc3bc;
        case 0x4bc3c0u: goto label_4bc3c0;
        case 0x4bc3c4u: goto label_4bc3c4;
        case 0x4bc3c8u: goto label_4bc3c8;
        case 0x4bc3ccu: goto label_4bc3cc;
        case 0x4bc3d0u: goto label_4bc3d0;
        case 0x4bc3d4u: goto label_4bc3d4;
        case 0x4bc3d8u: goto label_4bc3d8;
        case 0x4bc3dcu: goto label_4bc3dc;
        case 0x4bc3e0u: goto label_4bc3e0;
        case 0x4bc3e4u: goto label_4bc3e4;
        case 0x4bc3e8u: goto label_4bc3e8;
        case 0x4bc3ecu: goto label_4bc3ec;
        case 0x4bc3f0u: goto label_4bc3f0;
        case 0x4bc3f4u: goto label_4bc3f4;
        case 0x4bc3f8u: goto label_4bc3f8;
        case 0x4bc3fcu: goto label_4bc3fc;
        case 0x4bc400u: goto label_4bc400;
        case 0x4bc404u: goto label_4bc404;
        case 0x4bc408u: goto label_4bc408;
        case 0x4bc40cu: goto label_4bc40c;
        case 0x4bc410u: goto label_4bc410;
        case 0x4bc414u: goto label_4bc414;
        case 0x4bc418u: goto label_4bc418;
        case 0x4bc41cu: goto label_4bc41c;
        case 0x4bc420u: goto label_4bc420;
        case 0x4bc424u: goto label_4bc424;
        case 0x4bc428u: goto label_4bc428;
        case 0x4bc42cu: goto label_4bc42c;
        case 0x4bc430u: goto label_4bc430;
        case 0x4bc434u: goto label_4bc434;
        case 0x4bc438u: goto label_4bc438;
        case 0x4bc43cu: goto label_4bc43c;
        case 0x4bc440u: goto label_4bc440;
        case 0x4bc444u: goto label_4bc444;
        case 0x4bc448u: goto label_4bc448;
        case 0x4bc44cu: goto label_4bc44c;
        case 0x4bc450u: goto label_4bc450;
        case 0x4bc454u: goto label_4bc454;
        case 0x4bc458u: goto label_4bc458;
        case 0x4bc45cu: goto label_4bc45c;
        case 0x4bc460u: goto label_4bc460;
        case 0x4bc464u: goto label_4bc464;
        case 0x4bc468u: goto label_4bc468;
        case 0x4bc46cu: goto label_4bc46c;
        case 0x4bc470u: goto label_4bc470;
        case 0x4bc474u: goto label_4bc474;
        case 0x4bc478u: goto label_4bc478;
        case 0x4bc47cu: goto label_4bc47c;
        case 0x4bc480u: goto label_4bc480;
        case 0x4bc484u: goto label_4bc484;
        case 0x4bc488u: goto label_4bc488;
        case 0x4bc48cu: goto label_4bc48c;
        case 0x4bc490u: goto label_4bc490;
        case 0x4bc494u: goto label_4bc494;
        case 0x4bc498u: goto label_4bc498;
        case 0x4bc49cu: goto label_4bc49c;
        case 0x4bc4a0u: goto label_4bc4a0;
        case 0x4bc4a4u: goto label_4bc4a4;
        case 0x4bc4a8u: goto label_4bc4a8;
        case 0x4bc4acu: goto label_4bc4ac;
        case 0x4bc4b0u: goto label_4bc4b0;
        case 0x4bc4b4u: goto label_4bc4b4;
        case 0x4bc4b8u: goto label_4bc4b8;
        case 0x4bc4bcu: goto label_4bc4bc;
        case 0x4bc4c0u: goto label_4bc4c0;
        case 0x4bc4c4u: goto label_4bc4c4;
        case 0x4bc4c8u: goto label_4bc4c8;
        case 0x4bc4ccu: goto label_4bc4cc;
        case 0x4bc4d0u: goto label_4bc4d0;
        case 0x4bc4d4u: goto label_4bc4d4;
        case 0x4bc4d8u: goto label_4bc4d8;
        case 0x4bc4dcu: goto label_4bc4dc;
        case 0x4bc4e0u: goto label_4bc4e0;
        case 0x4bc4e4u: goto label_4bc4e4;
        case 0x4bc4e8u: goto label_4bc4e8;
        case 0x4bc4ecu: goto label_4bc4ec;
        case 0x4bc4f0u: goto label_4bc4f0;
        case 0x4bc4f4u: goto label_4bc4f4;
        case 0x4bc4f8u: goto label_4bc4f8;
        case 0x4bc4fcu: goto label_4bc4fc;
        case 0x4bc500u: goto label_4bc500;
        case 0x4bc504u: goto label_4bc504;
        case 0x4bc508u: goto label_4bc508;
        case 0x4bc50cu: goto label_4bc50c;
        case 0x4bc510u: goto label_4bc510;
        case 0x4bc514u: goto label_4bc514;
        case 0x4bc518u: goto label_4bc518;
        case 0x4bc51cu: goto label_4bc51c;
        case 0x4bc520u: goto label_4bc520;
        case 0x4bc524u: goto label_4bc524;
        case 0x4bc528u: goto label_4bc528;
        case 0x4bc52cu: goto label_4bc52c;
        case 0x4bc530u: goto label_4bc530;
        case 0x4bc534u: goto label_4bc534;
        case 0x4bc538u: goto label_4bc538;
        case 0x4bc53cu: goto label_4bc53c;
        case 0x4bc540u: goto label_4bc540;
        case 0x4bc544u: goto label_4bc544;
        case 0x4bc548u: goto label_4bc548;
        case 0x4bc54cu: goto label_4bc54c;
        case 0x4bc550u: goto label_4bc550;
        case 0x4bc554u: goto label_4bc554;
        case 0x4bc558u: goto label_4bc558;
        case 0x4bc55cu: goto label_4bc55c;
        case 0x4bc560u: goto label_4bc560;
        case 0x4bc564u: goto label_4bc564;
        case 0x4bc568u: goto label_4bc568;
        case 0x4bc56cu: goto label_4bc56c;
        case 0x4bc570u: goto label_4bc570;
        case 0x4bc574u: goto label_4bc574;
        case 0x4bc578u: goto label_4bc578;
        case 0x4bc57cu: goto label_4bc57c;
        case 0x4bc580u: goto label_4bc580;
        case 0x4bc584u: goto label_4bc584;
        case 0x4bc588u: goto label_4bc588;
        case 0x4bc58cu: goto label_4bc58c;
        case 0x4bc590u: goto label_4bc590;
        case 0x4bc594u: goto label_4bc594;
        case 0x4bc598u: goto label_4bc598;
        case 0x4bc59cu: goto label_4bc59c;
        case 0x4bc5a0u: goto label_4bc5a0;
        case 0x4bc5a4u: goto label_4bc5a4;
        case 0x4bc5a8u: goto label_4bc5a8;
        case 0x4bc5acu: goto label_4bc5ac;
        case 0x4bc5b0u: goto label_4bc5b0;
        case 0x4bc5b4u: goto label_4bc5b4;
        case 0x4bc5b8u: goto label_4bc5b8;
        case 0x4bc5bcu: goto label_4bc5bc;
        case 0x4bc5c0u: goto label_4bc5c0;
        case 0x4bc5c4u: goto label_4bc5c4;
        case 0x4bc5c8u: goto label_4bc5c8;
        case 0x4bc5ccu: goto label_4bc5cc;
        case 0x4bc5d0u: goto label_4bc5d0;
        case 0x4bc5d4u: goto label_4bc5d4;
        case 0x4bc5d8u: goto label_4bc5d8;
        case 0x4bc5dcu: goto label_4bc5dc;
        case 0x4bc5e0u: goto label_4bc5e0;
        case 0x4bc5e4u: goto label_4bc5e4;
        case 0x4bc5e8u: goto label_4bc5e8;
        case 0x4bc5ecu: goto label_4bc5ec;
        case 0x4bc5f0u: goto label_4bc5f0;
        case 0x4bc5f4u: goto label_4bc5f4;
        case 0x4bc5f8u: goto label_4bc5f8;
        case 0x4bc5fcu: goto label_4bc5fc;
        case 0x4bc600u: goto label_4bc600;
        case 0x4bc604u: goto label_4bc604;
        case 0x4bc608u: goto label_4bc608;
        case 0x4bc60cu: goto label_4bc60c;
        case 0x4bc610u: goto label_4bc610;
        case 0x4bc614u: goto label_4bc614;
        case 0x4bc618u: goto label_4bc618;
        case 0x4bc61cu: goto label_4bc61c;
        case 0x4bc620u: goto label_4bc620;
        case 0x4bc624u: goto label_4bc624;
        case 0x4bc628u: goto label_4bc628;
        case 0x4bc62cu: goto label_4bc62c;
        case 0x4bc630u: goto label_4bc630;
        case 0x4bc634u: goto label_4bc634;
        case 0x4bc638u: goto label_4bc638;
        case 0x4bc63cu: goto label_4bc63c;
        case 0x4bc640u: goto label_4bc640;
        case 0x4bc644u: goto label_4bc644;
        case 0x4bc648u: goto label_4bc648;
        case 0x4bc64cu: goto label_4bc64c;
        case 0x4bc650u: goto label_4bc650;
        case 0x4bc654u: goto label_4bc654;
        case 0x4bc658u: goto label_4bc658;
        case 0x4bc65cu: goto label_4bc65c;
        case 0x4bc660u: goto label_4bc660;
        case 0x4bc664u: goto label_4bc664;
        case 0x4bc668u: goto label_4bc668;
        case 0x4bc66cu: goto label_4bc66c;
        case 0x4bc670u: goto label_4bc670;
        case 0x4bc674u: goto label_4bc674;
        case 0x4bc678u: goto label_4bc678;
        case 0x4bc67cu: goto label_4bc67c;
        case 0x4bc680u: goto label_4bc680;
        case 0x4bc684u: goto label_4bc684;
        case 0x4bc688u: goto label_4bc688;
        case 0x4bc68cu: goto label_4bc68c;
        case 0x4bc690u: goto label_4bc690;
        case 0x4bc694u: goto label_4bc694;
        case 0x4bc698u: goto label_4bc698;
        case 0x4bc69cu: goto label_4bc69c;
        case 0x4bc6a0u: goto label_4bc6a0;
        case 0x4bc6a4u: goto label_4bc6a4;
        case 0x4bc6a8u: goto label_4bc6a8;
        case 0x4bc6acu: goto label_4bc6ac;
        case 0x4bc6b0u: goto label_4bc6b0;
        case 0x4bc6b4u: goto label_4bc6b4;
        case 0x4bc6b8u: goto label_4bc6b8;
        case 0x4bc6bcu: goto label_4bc6bc;
        case 0x4bc6c0u: goto label_4bc6c0;
        case 0x4bc6c4u: goto label_4bc6c4;
        case 0x4bc6c8u: goto label_4bc6c8;
        case 0x4bc6ccu: goto label_4bc6cc;
        case 0x4bc6d0u: goto label_4bc6d0;
        case 0x4bc6d4u: goto label_4bc6d4;
        case 0x4bc6d8u: goto label_4bc6d8;
        case 0x4bc6dcu: goto label_4bc6dc;
        case 0x4bc6e0u: goto label_4bc6e0;
        case 0x4bc6e4u: goto label_4bc6e4;
        case 0x4bc6e8u: goto label_4bc6e8;
        case 0x4bc6ecu: goto label_4bc6ec;
        case 0x4bc6f0u: goto label_4bc6f0;
        case 0x4bc6f4u: goto label_4bc6f4;
        case 0x4bc6f8u: goto label_4bc6f8;
        case 0x4bc6fcu: goto label_4bc6fc;
        case 0x4bc700u: goto label_4bc700;
        case 0x4bc704u: goto label_4bc704;
        case 0x4bc708u: goto label_4bc708;
        case 0x4bc70cu: goto label_4bc70c;
        case 0x4bc710u: goto label_4bc710;
        case 0x4bc714u: goto label_4bc714;
        case 0x4bc718u: goto label_4bc718;
        case 0x4bc71cu: goto label_4bc71c;
        case 0x4bc720u: goto label_4bc720;
        case 0x4bc724u: goto label_4bc724;
        case 0x4bc728u: goto label_4bc728;
        case 0x4bc72cu: goto label_4bc72c;
        case 0x4bc730u: goto label_4bc730;
        case 0x4bc734u: goto label_4bc734;
        case 0x4bc738u: goto label_4bc738;
        case 0x4bc73cu: goto label_4bc73c;
        case 0x4bc740u: goto label_4bc740;
        case 0x4bc744u: goto label_4bc744;
        case 0x4bc748u: goto label_4bc748;
        case 0x4bc74cu: goto label_4bc74c;
        case 0x4bc750u: goto label_4bc750;
        case 0x4bc754u: goto label_4bc754;
        case 0x4bc758u: goto label_4bc758;
        case 0x4bc75cu: goto label_4bc75c;
        case 0x4bc760u: goto label_4bc760;
        case 0x4bc764u: goto label_4bc764;
        case 0x4bc768u: goto label_4bc768;
        case 0x4bc76cu: goto label_4bc76c;
        case 0x4bc770u: goto label_4bc770;
        case 0x4bc774u: goto label_4bc774;
        case 0x4bc778u: goto label_4bc778;
        case 0x4bc77cu: goto label_4bc77c;
        case 0x4bc780u: goto label_4bc780;
        case 0x4bc784u: goto label_4bc784;
        case 0x4bc788u: goto label_4bc788;
        case 0x4bc78cu: goto label_4bc78c;
        case 0x4bc790u: goto label_4bc790;
        case 0x4bc794u: goto label_4bc794;
        case 0x4bc798u: goto label_4bc798;
        case 0x4bc79cu: goto label_4bc79c;
        case 0x4bc7a0u: goto label_4bc7a0;
        case 0x4bc7a4u: goto label_4bc7a4;
        case 0x4bc7a8u: goto label_4bc7a8;
        case 0x4bc7acu: goto label_4bc7ac;
        case 0x4bc7b0u: goto label_4bc7b0;
        case 0x4bc7b4u: goto label_4bc7b4;
        case 0x4bc7b8u: goto label_4bc7b8;
        case 0x4bc7bcu: goto label_4bc7bc;
        case 0x4bc7c0u: goto label_4bc7c0;
        case 0x4bc7c4u: goto label_4bc7c4;
        case 0x4bc7c8u: goto label_4bc7c8;
        case 0x4bc7ccu: goto label_4bc7cc;
        case 0x4bc7d0u: goto label_4bc7d0;
        case 0x4bc7d4u: goto label_4bc7d4;
        case 0x4bc7d8u: goto label_4bc7d8;
        case 0x4bc7dcu: goto label_4bc7dc;
        case 0x4bc7e0u: goto label_4bc7e0;
        case 0x4bc7e4u: goto label_4bc7e4;
        case 0x4bc7e8u: goto label_4bc7e8;
        case 0x4bc7ecu: goto label_4bc7ec;
        case 0x4bc7f0u: goto label_4bc7f0;
        case 0x4bc7f4u: goto label_4bc7f4;
        case 0x4bc7f8u: goto label_4bc7f8;
        case 0x4bc7fcu: goto label_4bc7fc;
        case 0x4bc800u: goto label_4bc800;
        case 0x4bc804u: goto label_4bc804;
        case 0x4bc808u: goto label_4bc808;
        case 0x4bc80cu: goto label_4bc80c;
        case 0x4bc810u: goto label_4bc810;
        case 0x4bc814u: goto label_4bc814;
        case 0x4bc818u: goto label_4bc818;
        case 0x4bc81cu: goto label_4bc81c;
        case 0x4bc820u: goto label_4bc820;
        case 0x4bc824u: goto label_4bc824;
        case 0x4bc828u: goto label_4bc828;
        case 0x4bc82cu: goto label_4bc82c;
        case 0x4bc830u: goto label_4bc830;
        case 0x4bc834u: goto label_4bc834;
        case 0x4bc838u: goto label_4bc838;
        case 0x4bc83cu: goto label_4bc83c;
        case 0x4bc840u: goto label_4bc840;
        case 0x4bc844u: goto label_4bc844;
        case 0x4bc848u: goto label_4bc848;
        case 0x4bc84cu: goto label_4bc84c;
        case 0x4bc850u: goto label_4bc850;
        case 0x4bc854u: goto label_4bc854;
        case 0x4bc858u: goto label_4bc858;
        case 0x4bc85cu: goto label_4bc85c;
        case 0x4bc860u: goto label_4bc860;
        case 0x4bc864u: goto label_4bc864;
        case 0x4bc868u: goto label_4bc868;
        case 0x4bc86cu: goto label_4bc86c;
        case 0x4bc870u: goto label_4bc870;
        case 0x4bc874u: goto label_4bc874;
        case 0x4bc878u: goto label_4bc878;
        case 0x4bc87cu: goto label_4bc87c;
        case 0x4bc880u: goto label_4bc880;
        case 0x4bc884u: goto label_4bc884;
        case 0x4bc888u: goto label_4bc888;
        case 0x4bc88cu: goto label_4bc88c;
        case 0x4bc890u: goto label_4bc890;
        case 0x4bc894u: goto label_4bc894;
        case 0x4bc898u: goto label_4bc898;
        case 0x4bc89cu: goto label_4bc89c;
        case 0x4bc8a0u: goto label_4bc8a0;
        case 0x4bc8a4u: goto label_4bc8a4;
        case 0x4bc8a8u: goto label_4bc8a8;
        case 0x4bc8acu: goto label_4bc8ac;
        case 0x4bc8b0u: goto label_4bc8b0;
        case 0x4bc8b4u: goto label_4bc8b4;
        case 0x4bc8b8u: goto label_4bc8b8;
        case 0x4bc8bcu: goto label_4bc8bc;
        case 0x4bc8c0u: goto label_4bc8c0;
        case 0x4bc8c4u: goto label_4bc8c4;
        case 0x4bc8c8u: goto label_4bc8c8;
        case 0x4bc8ccu: goto label_4bc8cc;
        case 0x4bc8d0u: goto label_4bc8d0;
        case 0x4bc8d4u: goto label_4bc8d4;
        case 0x4bc8d8u: goto label_4bc8d8;
        case 0x4bc8dcu: goto label_4bc8dc;
        case 0x4bc8e0u: goto label_4bc8e0;
        case 0x4bc8e4u: goto label_4bc8e4;
        case 0x4bc8e8u: goto label_4bc8e8;
        case 0x4bc8ecu: goto label_4bc8ec;
        case 0x4bc8f0u: goto label_4bc8f0;
        case 0x4bc8f4u: goto label_4bc8f4;
        case 0x4bc8f8u: goto label_4bc8f8;
        case 0x4bc8fcu: goto label_4bc8fc;
        case 0x4bc900u: goto label_4bc900;
        case 0x4bc904u: goto label_4bc904;
        case 0x4bc908u: goto label_4bc908;
        case 0x4bc90cu: goto label_4bc90c;
        case 0x4bc910u: goto label_4bc910;
        case 0x4bc914u: goto label_4bc914;
        case 0x4bc918u: goto label_4bc918;
        case 0x4bc91cu: goto label_4bc91c;
        case 0x4bc920u: goto label_4bc920;
        case 0x4bc924u: goto label_4bc924;
        case 0x4bc928u: goto label_4bc928;
        case 0x4bc92cu: goto label_4bc92c;
        case 0x4bc930u: goto label_4bc930;
        case 0x4bc934u: goto label_4bc934;
        case 0x4bc938u: goto label_4bc938;
        case 0x4bc93cu: goto label_4bc93c;
        case 0x4bc940u: goto label_4bc940;
        case 0x4bc944u: goto label_4bc944;
        case 0x4bc948u: goto label_4bc948;
        case 0x4bc94cu: goto label_4bc94c;
        case 0x4bc950u: goto label_4bc950;
        case 0x4bc954u: goto label_4bc954;
        case 0x4bc958u: goto label_4bc958;
        case 0x4bc95cu: goto label_4bc95c;
        case 0x4bc960u: goto label_4bc960;
        case 0x4bc964u: goto label_4bc964;
        case 0x4bc968u: goto label_4bc968;
        case 0x4bc96cu: goto label_4bc96c;
        case 0x4bc970u: goto label_4bc970;
        case 0x4bc974u: goto label_4bc974;
        case 0x4bc978u: goto label_4bc978;
        case 0x4bc97cu: goto label_4bc97c;
        case 0x4bc980u: goto label_4bc980;
        case 0x4bc984u: goto label_4bc984;
        case 0x4bc988u: goto label_4bc988;
        case 0x4bc98cu: goto label_4bc98c;
        case 0x4bc990u: goto label_4bc990;
        case 0x4bc994u: goto label_4bc994;
        case 0x4bc998u: goto label_4bc998;
        case 0x4bc99cu: goto label_4bc99c;
        case 0x4bc9a0u: goto label_4bc9a0;
        case 0x4bc9a4u: goto label_4bc9a4;
        case 0x4bc9a8u: goto label_4bc9a8;
        case 0x4bc9acu: goto label_4bc9ac;
        case 0x4bc9b0u: goto label_4bc9b0;
        case 0x4bc9b4u: goto label_4bc9b4;
        case 0x4bc9b8u: goto label_4bc9b8;
        case 0x4bc9bcu: goto label_4bc9bc;
        case 0x4bc9c0u: goto label_4bc9c0;
        case 0x4bc9c4u: goto label_4bc9c4;
        case 0x4bc9c8u: goto label_4bc9c8;
        case 0x4bc9ccu: goto label_4bc9cc;
        case 0x4bc9d0u: goto label_4bc9d0;
        case 0x4bc9d4u: goto label_4bc9d4;
        case 0x4bc9d8u: goto label_4bc9d8;
        case 0x4bc9dcu: goto label_4bc9dc;
        case 0x4bc9e0u: goto label_4bc9e0;
        case 0x4bc9e4u: goto label_4bc9e4;
        case 0x4bc9e8u: goto label_4bc9e8;
        case 0x4bc9ecu: goto label_4bc9ec;
        case 0x4bc9f0u: goto label_4bc9f0;
        case 0x4bc9f4u: goto label_4bc9f4;
        case 0x4bc9f8u: goto label_4bc9f8;
        case 0x4bc9fcu: goto label_4bc9fc;
        case 0x4bca00u: goto label_4bca00;
        case 0x4bca04u: goto label_4bca04;
        case 0x4bca08u: goto label_4bca08;
        case 0x4bca0cu: goto label_4bca0c;
        case 0x4bca10u: goto label_4bca10;
        case 0x4bca14u: goto label_4bca14;
        case 0x4bca18u: goto label_4bca18;
        case 0x4bca1cu: goto label_4bca1c;
        case 0x4bca20u: goto label_4bca20;
        case 0x4bca24u: goto label_4bca24;
        case 0x4bca28u: goto label_4bca28;
        case 0x4bca2cu: goto label_4bca2c;
        case 0x4bca30u: goto label_4bca30;
        case 0x4bca34u: goto label_4bca34;
        case 0x4bca38u: goto label_4bca38;
        case 0x4bca3cu: goto label_4bca3c;
        case 0x4bca40u: goto label_4bca40;
        case 0x4bca44u: goto label_4bca44;
        case 0x4bca48u: goto label_4bca48;
        case 0x4bca4cu: goto label_4bca4c;
        case 0x4bca50u: goto label_4bca50;
        case 0x4bca54u: goto label_4bca54;
        case 0x4bca58u: goto label_4bca58;
        case 0x4bca5cu: goto label_4bca5c;
        case 0x4bca60u: goto label_4bca60;
        case 0x4bca64u: goto label_4bca64;
        case 0x4bca68u: goto label_4bca68;
        case 0x4bca6cu: goto label_4bca6c;
        case 0x4bca70u: goto label_4bca70;
        case 0x4bca74u: goto label_4bca74;
        case 0x4bca78u: goto label_4bca78;
        case 0x4bca7cu: goto label_4bca7c;
        case 0x4bca80u: goto label_4bca80;
        case 0x4bca84u: goto label_4bca84;
        case 0x4bca88u: goto label_4bca88;
        case 0x4bca8cu: goto label_4bca8c;
        case 0x4bca90u: goto label_4bca90;
        case 0x4bca94u: goto label_4bca94;
        case 0x4bca98u: goto label_4bca98;
        case 0x4bca9cu: goto label_4bca9c;
        case 0x4bcaa0u: goto label_4bcaa0;
        case 0x4bcaa4u: goto label_4bcaa4;
        case 0x4bcaa8u: goto label_4bcaa8;
        case 0x4bcaacu: goto label_4bcaac;
        case 0x4bcab0u: goto label_4bcab0;
        case 0x4bcab4u: goto label_4bcab4;
        case 0x4bcab8u: goto label_4bcab8;
        case 0x4bcabcu: goto label_4bcabc;
        case 0x4bcac0u: goto label_4bcac0;
        case 0x4bcac4u: goto label_4bcac4;
        case 0x4bcac8u: goto label_4bcac8;
        case 0x4bcaccu: goto label_4bcacc;
        case 0x4bcad0u: goto label_4bcad0;
        case 0x4bcad4u: goto label_4bcad4;
        case 0x4bcad8u: goto label_4bcad8;
        case 0x4bcadcu: goto label_4bcadc;
        case 0x4bcae0u: goto label_4bcae0;
        case 0x4bcae4u: goto label_4bcae4;
        case 0x4bcae8u: goto label_4bcae8;
        case 0x4bcaecu: goto label_4bcaec;
        case 0x4bcaf0u: goto label_4bcaf0;
        case 0x4bcaf4u: goto label_4bcaf4;
        case 0x4bcaf8u: goto label_4bcaf8;
        case 0x4bcafcu: goto label_4bcafc;
        case 0x4bcb00u: goto label_4bcb00;
        case 0x4bcb04u: goto label_4bcb04;
        case 0x4bcb08u: goto label_4bcb08;
        case 0x4bcb0cu: goto label_4bcb0c;
        case 0x4bcb10u: goto label_4bcb10;
        case 0x4bcb14u: goto label_4bcb14;
        case 0x4bcb18u: goto label_4bcb18;
        case 0x4bcb1cu: goto label_4bcb1c;
        case 0x4bcb20u: goto label_4bcb20;
        case 0x4bcb24u: goto label_4bcb24;
        case 0x4bcb28u: goto label_4bcb28;
        case 0x4bcb2cu: goto label_4bcb2c;
        case 0x4bcb30u: goto label_4bcb30;
        case 0x4bcb34u: goto label_4bcb34;
        case 0x4bcb38u: goto label_4bcb38;
        case 0x4bcb3cu: goto label_4bcb3c;
        case 0x4bcb40u: goto label_4bcb40;
        case 0x4bcb44u: goto label_4bcb44;
        case 0x4bcb48u: goto label_4bcb48;
        case 0x4bcb4cu: goto label_4bcb4c;
        case 0x4bcb50u: goto label_4bcb50;
        case 0x4bcb54u: goto label_4bcb54;
        case 0x4bcb58u: goto label_4bcb58;
        case 0x4bcb5cu: goto label_4bcb5c;
        case 0x4bcb60u: goto label_4bcb60;
        case 0x4bcb64u: goto label_4bcb64;
        case 0x4bcb68u: goto label_4bcb68;
        case 0x4bcb6cu: goto label_4bcb6c;
        case 0x4bcb70u: goto label_4bcb70;
        case 0x4bcb74u: goto label_4bcb74;
        case 0x4bcb78u: goto label_4bcb78;
        case 0x4bcb7cu: goto label_4bcb7c;
        case 0x4bcb80u: goto label_4bcb80;
        case 0x4bcb84u: goto label_4bcb84;
        case 0x4bcb88u: goto label_4bcb88;
        case 0x4bcb8cu: goto label_4bcb8c;
        case 0x4bcb90u: goto label_4bcb90;
        case 0x4bcb94u: goto label_4bcb94;
        case 0x4bcb98u: goto label_4bcb98;
        case 0x4bcb9cu: goto label_4bcb9c;
        case 0x4bcba0u: goto label_4bcba0;
        case 0x4bcba4u: goto label_4bcba4;
        case 0x4bcba8u: goto label_4bcba8;
        case 0x4bcbacu: goto label_4bcbac;
        case 0x4bcbb0u: goto label_4bcbb0;
        case 0x4bcbb4u: goto label_4bcbb4;
        case 0x4bcbb8u: goto label_4bcbb8;
        case 0x4bcbbcu: goto label_4bcbbc;
        case 0x4bcbc0u: goto label_4bcbc0;
        case 0x4bcbc4u: goto label_4bcbc4;
        case 0x4bcbc8u: goto label_4bcbc8;
        case 0x4bcbccu: goto label_4bcbcc;
        case 0x4bcbd0u: goto label_4bcbd0;
        case 0x4bcbd4u: goto label_4bcbd4;
        case 0x4bcbd8u: goto label_4bcbd8;
        case 0x4bcbdcu: goto label_4bcbdc;
        case 0x4bcbe0u: goto label_4bcbe0;
        case 0x4bcbe4u: goto label_4bcbe4;
        case 0x4bcbe8u: goto label_4bcbe8;
        case 0x4bcbecu: goto label_4bcbec;
        case 0x4bcbf0u: goto label_4bcbf0;
        case 0x4bcbf4u: goto label_4bcbf4;
        case 0x4bcbf8u: goto label_4bcbf8;
        case 0x4bcbfcu: goto label_4bcbfc;
        case 0x4bcc00u: goto label_4bcc00;
        case 0x4bcc04u: goto label_4bcc04;
        case 0x4bcc08u: goto label_4bcc08;
        case 0x4bcc0cu: goto label_4bcc0c;
        case 0x4bcc10u: goto label_4bcc10;
        case 0x4bcc14u: goto label_4bcc14;
        case 0x4bcc18u: goto label_4bcc18;
        case 0x4bcc1cu: goto label_4bcc1c;
        case 0x4bcc20u: goto label_4bcc20;
        case 0x4bcc24u: goto label_4bcc24;
        case 0x4bcc28u: goto label_4bcc28;
        case 0x4bcc2cu: goto label_4bcc2c;
        case 0x4bcc30u: goto label_4bcc30;
        case 0x4bcc34u: goto label_4bcc34;
        case 0x4bcc38u: goto label_4bcc38;
        case 0x4bcc3cu: goto label_4bcc3c;
        case 0x4bcc40u: goto label_4bcc40;
        case 0x4bcc44u: goto label_4bcc44;
        case 0x4bcc48u: goto label_4bcc48;
        case 0x4bcc4cu: goto label_4bcc4c;
        case 0x4bcc50u: goto label_4bcc50;
        case 0x4bcc54u: goto label_4bcc54;
        case 0x4bcc58u: goto label_4bcc58;
        case 0x4bcc5cu: goto label_4bcc5c;
        case 0x4bcc60u: goto label_4bcc60;
        case 0x4bcc64u: goto label_4bcc64;
        case 0x4bcc68u: goto label_4bcc68;
        case 0x4bcc6cu: goto label_4bcc6c;
        case 0x4bcc70u: goto label_4bcc70;
        case 0x4bcc74u: goto label_4bcc74;
        case 0x4bcc78u: goto label_4bcc78;
        case 0x4bcc7cu: goto label_4bcc7c;
        case 0x4bcc80u: goto label_4bcc80;
        case 0x4bcc84u: goto label_4bcc84;
        case 0x4bcc88u: goto label_4bcc88;
        case 0x4bcc8cu: goto label_4bcc8c;
        case 0x4bcc90u: goto label_4bcc90;
        case 0x4bcc94u: goto label_4bcc94;
        case 0x4bcc98u: goto label_4bcc98;
        case 0x4bcc9cu: goto label_4bcc9c;
        case 0x4bcca0u: goto label_4bcca0;
        case 0x4bcca4u: goto label_4bcca4;
        case 0x4bcca8u: goto label_4bcca8;
        case 0x4bccacu: goto label_4bccac;
        case 0x4bccb0u: goto label_4bccb0;
        case 0x4bccb4u: goto label_4bccb4;
        case 0x4bccb8u: goto label_4bccb8;
        case 0x4bccbcu: goto label_4bccbc;
        default: break;
    }

    ctx->pc = 0x4bb9c0u;

label_4bb9c0:
    // 0x4bb9c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x4bb9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_4bb9c4:
    // 0x4bb9c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4bb9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4bb9c8:
    // 0x4bb9c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4bb9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4bb9cc:
    // 0x4bb9cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4bb9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4bb9d0:
    // 0x4bb9d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bb9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bb9d4:
    // 0x4bb9d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bb9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bb9d8:
    // 0x4bb9d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bb9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bb9dc:
    // 0x4bb9dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4bb9dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bb9e0:
    // 0x4bb9e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bb9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bb9e4:
    // 0x4bb9e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4bb9e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4bb9e8:
    // 0x4bb9e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bb9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bb9ec:
    // 0x4bb9ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4bb9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4bb9f0:
    // 0x4bb9f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bb9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bb9f4:
    // 0x4bb9f4: 0x14b080  sll         $s6, $s4, 2
    ctx->pc = 0x4bb9f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4bb9f8:
    // 0x4bb9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bb9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bb9fc:
    // 0x4bb9fc: 0x2d53821  addu        $a3, $s6, $s5
    ctx->pc = 0x4bb9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_4bba00:
    // 0x4bba00: 0x8ce40cd0  lw          $a0, 0xCD0($a3)
    ctx->pc = 0x4bba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3280)));
label_4bba04:
    // 0x4bba04: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4bba04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4bba08:
    // 0x4bba08: 0x8ce30cd8  lw          $v1, 0xCD8($a3)
    ctx->pc = 0x4bba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3288)));
label_4bba0c:
    // 0x4bba0c: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x4bba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_4bba10:
    // 0x4bba10: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x4bba10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_4bba14:
    // 0x4bba14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4bba14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4bba18:
    // 0x4bba18: 0x24c60e84  addiu       $a2, $a2, 0xE84
    ctx->pc = 0x4bba18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3716));
label_4bba1c:
    // 0x4bba1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bba20:
    // 0x4bba20: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x4bba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4bba24:
    // 0x4bba24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4bba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4bba28:
    // 0x4bba28: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x4bba28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bba2c:
    // 0x4bba2c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x4bba2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bba30:
    // 0x4bba30: 0x8ce50cec  lw          $a1, 0xCEC($a3)
    ctx->pc = 0x4bba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3308)));
label_4bba34:
    // 0x4bba34: 0x8e170d70  lw          $s7, 0xD70($s0)
    ctx->pc = 0x4bba34u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_4bba38:
    // 0x4bba38: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x4bba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_4bba3c:
    // 0x4bba3c: 0x8e1e0d60  lw          $fp, 0xD60($s0)
    ctx->pc = 0x4bba3cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4bba40:
    // 0x4bba40: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x4bba40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4bba44:
    // 0x4bba44: 0xafa900b8  sw          $t1, 0xB8($sp)
    ctx->pc = 0x4bba44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 9));
label_4bba48:
    // 0x4bba48: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x4bba48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_4bba4c:
    // 0x4bba4c: 0x14a000f7  bnez        $a1, . + 4 + (0xF7 << 2)
label_4bba50:
    if (ctx->pc == 0x4BBA50u) {
        ctx->pc = 0x4BBA50u;
            // 0x4bba50: 0xace40cec  sw          $a0, 0xCEC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 3308), GPR_U32(ctx, 4));
        ctx->pc = 0x4BBA54u;
        goto label_4bba54;
    }
    ctx->pc = 0x4BBA4Cu;
    {
        const bool branch_taken_0x4bba4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBA4Cu;
            // 0x4bba50: 0xace40cec  sw          $a0, 0xCEC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 3308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bba4c) {
            ctx->pc = 0x4BBE2Cu;
            goto label_4bbe2c;
        }
    }
    ctx->pc = 0x4BBA54u;
label_4bba54:
    // 0x4bba54: 0xc04f26c  jal         func_13C9B0
label_4bba58:
    if (ctx->pc == 0x4BBA58u) {
        ctx->pc = 0x4BBA58u;
            // 0x4bba58: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4BBA5Cu;
        goto label_4bba5c;
    }
    ctx->pc = 0x4BBA54u;
    SET_GPR_U32(ctx, 31, 0x4BBA5Cu);
    ctx->pc = 0x4BBA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBA54u;
            // 0x4bba58: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBA5Cu; }
        if (ctx->pc != 0x4BBA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBA5Cu; }
        if (ctx->pc != 0x4BBA5Cu) { return; }
    }
    ctx->pc = 0x4BBA5Cu;
label_4bba5c:
    // 0x4bba5c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x4bba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4bba60:
    // 0x4bba60: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4bba60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4bba64:
    // 0x4bba64: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x4bba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4bba68:
    // 0x4bba68: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x4bba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4bba6c:
    // 0x4bba6c: 0xc04ce64  jal         func_133990
label_4bba70:
    if (ctx->pc == 0x4BBA70u) {
        ctx->pc = 0x4BBA70u;
            // 0x4bba70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBA74u;
        goto label_4bba74;
    }
    ctx->pc = 0x4BBA6Cu;
    SET_GPR_U32(ctx, 31, 0x4BBA74u);
    ctx->pc = 0x4BBA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBA6Cu;
            // 0x4bba70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBA74u; }
        if (ctx->pc != 0x4BBA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBA74u; }
        if (ctx->pc != 0x4BBA74u) { return; }
    }
    ctx->pc = 0x4BBA74u;
label_4bba74:
    // 0x4bba74: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4bba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4bba78:
    // 0x4bba78: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4bba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4bba7c:
    // 0x4bba7c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4bba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4bba80:
    // 0x4bba80: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x4bba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bba84:
    // 0x4bba84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4bba84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4bba88:
    // 0x4bba88: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x4bba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bba8c:
    // 0x4bba8c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x4bba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bba90:
    // 0x4bba90: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4bba90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4bba94:
    // 0x4bba94: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x4bba94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4bba98:
    // 0x4bba98: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4bba98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4bba9c:
    // 0x4bba9c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bba9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_4bbaa0:
    // 0x4bbaa0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bbaa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4bbaa4:
    // 0x4bbaa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bbaa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4bbaa8:
    // 0x4bbaa8: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x4bbaa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4bbaac:
    // 0x4bbaac: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x4bbaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_4bbab0:
    // 0x4bbab0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x4bbab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_4bbab4:
    // 0x4bbab4: 0xc04ce10  jal         func_133840
label_4bbab8:
    if (ctx->pc == 0x4BBAB8u) {
        ctx->pc = 0x4BBAB8u;
            // 0x4bbab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBABCu;
        goto label_4bbabc;
    }
    ctx->pc = 0x4BBAB4u;
    SET_GPR_U32(ctx, 31, 0x4BBABCu);
    ctx->pc = 0x4BBAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBAB4u;
            // 0x4bbab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133840u;
    if (runtime->hasFunction(0x133840u)) {
        auto targetFn = runtime->lookupFunction(0x133840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBABCu; }
        if (ctx->pc != 0x4BBABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133840_0x133840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBABCu; }
        if (ctx->pc != 0x4BBABCu) { return; }
    }
    ctx->pc = 0x4BBABCu;
label_4bbabc:
    // 0x4bbabc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x4bbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_4bbac0:
    // 0x4bbac0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4bbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4bbac4:
    // 0x4bbac4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4bbac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bbac8:
    // 0x4bbac8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bbac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bbacc:
    // 0x4bbacc: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x4bbaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4bbad0:
    // 0x4bbad0: 0xc04ce64  jal         func_133990
label_4bbad4:
    if (ctx->pc == 0x4BBAD4u) {
        ctx->pc = 0x4BBAD4u;
            // 0x4bbad4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4BBAD8u;
        goto label_4bbad8;
    }
    ctx->pc = 0x4BBAD0u;
    SET_GPR_U32(ctx, 31, 0x4BBAD8u);
    ctx->pc = 0x4BBAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBAD0u;
            // 0x4bbad4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBAD8u; }
        if (ctx->pc != 0x4BBAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBAD8u; }
        if (ctx->pc != 0x4BBAD8u) { return; }
    }
    ctx->pc = 0x4BBAD8u;
label_4bbad8:
    // 0x4bbad8: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x4bbad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_4bbadc:
    // 0x4bbadc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x4bbadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4bbae0:
    // 0x4bbae0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4bbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4bbae4:
    // 0x4bbae4: 0xc04cce4  jal         func_133390
label_4bbae8:
    if (ctx->pc == 0x4BBAE8u) {
        ctx->pc = 0x4BBAE8u;
            // 0x4bbae8: 0x24440d00  addiu       $a0, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->pc = 0x4BBAECu;
        goto label_4bbaec;
    }
    ctx->pc = 0x4BBAE4u;
    SET_GPR_U32(ctx, 31, 0x4BBAECu);
    ctx->pc = 0x4BBAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBAE4u;
            // 0x4bbae8: 0x24440d00  addiu       $a0, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBAECu; }
        if (ctx->pc != 0x4BBAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBAECu; }
        if (ctx->pc != 0x4BBAECu) { return; }
    }
    ctx->pc = 0x4BBAECu;
label_4bbaec:
    // 0x4bbaec: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x4bbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_4bbaf0:
    // 0x4bbaf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bbaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bbaf4:
    // 0x4bbaf4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4bbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4bbaf8:
    // 0x4bbaf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bbafc:
    // 0x4bbafc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4bbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4bbb00:
    // 0x4bbb00: 0xc04cb1c  jal         func_132C70
label_4bbb04:
    if (ctx->pc == 0x4BBB04u) {
        ctx->pc = 0x4BBB04u;
            // 0x4bbb04: 0x24440d20  addiu       $a0, $v0, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
        ctx->pc = 0x4BBB08u;
        goto label_4bbb08;
    }
    ctx->pc = 0x4BBB00u;
    SET_GPR_U32(ctx, 31, 0x4BBB08u);
    ctx->pc = 0x4BBB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBB00u;
            // 0x4bbb04: 0x24440d20  addiu       $a0, $v0, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBB08u; }
        if (ctx->pc != 0x4BBB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBB08u; }
        if (ctx->pc != 0x4BBB08u) { return; }
    }
    ctx->pc = 0x4BBB08u;
label_4bbb08:
    // 0x4bbb08: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x4bbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_4bbb0c:
    // 0x4bbb0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4bbb10:
    if (ctx->pc == 0x4BBB10u) {
        ctx->pc = 0x4BBB14u;
        goto label_4bbb14;
    }
    ctx->pc = 0x4BBB0Cu;
    {
        const bool branch_taken_0x4bbb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbb0c) {
            ctx->pc = 0x4BBB3Cu;
            goto label_4bbb3c;
        }
    }
    ctx->pc = 0x4BBB14u;
label_4bbb14:
    // 0x4bbb14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bbb18:
    // 0x4bbb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bbb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bbb1c:
    // 0x4bbb1c: 0x24420e8c  addiu       $v0, $v0, 0xE8C
    ctx->pc = 0x4bbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3724));
label_4bbb20:
    // 0x4bbb20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4bbb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bbb24:
    // 0x4bbb24: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x4bbb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4bbb28:
    // 0x4bbb28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4bbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bbb2c:
    // 0x4bbb2c: 0xc146148  jal         func_518520
label_4bbb30:
    if (ctx->pc == 0x4BBB30u) {
        ctx->pc = 0x4BBB30u;
            // 0x4bbb30: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BBB34u;
        goto label_4bbb34;
    }
    ctx->pc = 0x4BBB2Cu;
    SET_GPR_U32(ctx, 31, 0x4BBB34u);
    ctx->pc = 0x4BBB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBB2Cu;
            // 0x4bbb30: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518520u;
    if (runtime->hasFunction(0x518520u)) {
        auto targetFn = runtime->lookupFunction(0x518520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBB34u; }
        if (ctx->pc != 0x4BBB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518520_0x518520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBB34u; }
        if (ctx->pc != 0x4BBB34u) { return; }
    }
    ctx->pc = 0x4BBB34u;
label_4bbb34:
    // 0x4bbb34: 0x1000000a  b           . + 4 + (0xA << 2)
label_4bbb38:
    if (ctx->pc == 0x4BBB38u) {
        ctx->pc = 0x4BBB38u;
            // 0x4bbb38: 0x8fd90030  lw          $t9, 0x30($fp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
        ctx->pc = 0x4BBB3Cu;
        goto label_4bbb3c;
    }
    ctx->pc = 0x4BBB34u;
    {
        const bool branch_taken_0x4bbb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBB34u;
            // 0x4bbb38: 0x8fd90030  lw          $t9, 0x30($fp) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbb34) {
            ctx->pc = 0x4BBB60u;
            goto label_4bbb60;
        }
    }
    ctx->pc = 0x4BBB3Cu;
label_4bbb3c:
    // 0x4bbb3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bbb40:
    // 0x4bbb40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bbb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bbb44:
    // 0x4bbb44: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4bbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4bbb48:
    // 0x4bbb48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4bbb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bbb4c:
    // 0x4bbb4c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x4bbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_4bbb50:
    // 0x4bbb50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4bbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bbb54:
    // 0x4bbb54: 0xc146148  jal         func_518520
label_4bbb58:
    if (ctx->pc == 0x4BBB58u) {
        ctx->pc = 0x4BBB58u;
            // 0x4bbb58: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BBB5Cu;
        goto label_4bbb5c;
    }
    ctx->pc = 0x4BBB54u;
    SET_GPR_U32(ctx, 31, 0x4BBB5Cu);
    ctx->pc = 0x4BBB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBB54u;
            // 0x4bbb58: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518520u;
    if (runtime->hasFunction(0x518520u)) {
        auto targetFn = runtime->lookupFunction(0x518520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBB5Cu; }
        if (ctx->pc != 0x4BBB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518520_0x518520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBB5Cu; }
        if (ctx->pc != 0x4BBB5Cu) { return; }
    }
    ctx->pc = 0x4BBB5Cu;
label_4bbb5c:
    // 0x4bbb5c: 0x8fd90030  lw          $t9, 0x30($fp)
    ctx->pc = 0x4bbb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_4bbb60:
    // 0x4bbb60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bbb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4bbb64:
    // 0x4bbb64: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4bbb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4bbb68:
    // 0x4bbb68: 0x320f809  jalr        $t9
label_4bbb6c:
    if (ctx->pc == 0x4BBB6Cu) {
        ctx->pc = 0x4BBB6Cu;
            // 0x4bbb6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4BBB70u;
        goto label_4bbb70;
    }
    ctx->pc = 0x4BBB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BBB70u);
        ctx->pc = 0x4BBB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBB68u;
            // 0x4bbb6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BBB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BBB70u; }
            if (ctx->pc != 0x4BBB70u) { return; }
        }
        }
    }
    ctx->pc = 0x4BBB70u;
label_4bbb70:
    // 0x4bbb70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bbb74:
    // 0x4bbb74: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x4bbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_4bbb78:
    // 0x4bbb78: 0xa20311a1  sb          $v1, 0x11A1($s0)
    ctx->pc = 0x4bbb78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4513), (uint8_t)GPR_U32(ctx, 3));
label_4bbb7c:
    // 0x4bbb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bbb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bbb80:
    // 0x4bbb80: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x4bbb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_4bbb84:
    // 0x4bbb84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4bbb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bbb88:
    // 0x4bbb88: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x4bbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4bbb8c:
    // 0x4bbb8c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4bbb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4bbb90:
    // 0x4bbb90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4bbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_4bbb94:
    // 0x4bbb94: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x4bbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4bbb98:
    // 0x4bbb98: 0xc077fb0  jal         func_1DFEC0
label_4bbb9c:
    if (ctx->pc == 0x4BBB9Cu) {
        ctx->pc = 0x4BBB9Cu;
            // 0x4bbb9c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x4BBBA0u;
        goto label_4bbba0;
    }
    ctx->pc = 0x4BBB98u;
    SET_GPR_U32(ctx, 31, 0x4BBBA0u);
    ctx->pc = 0x4BBB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBB98u;
            // 0x4bbb9c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBBA0u; }
        if (ctx->pc != 0x4BBBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBBA0u; }
        if (ctx->pc != 0x4BBBA0u) { return; }
    }
    ctx->pc = 0x4BBBA0u;
label_4bbba0:
    // 0x4bbba0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bbba4:
    // 0x4bbba4: 0x8c420e18  lw          $v0, 0xE18($v0)
    ctx->pc = 0x4bbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3608)));
label_4bbba8:
    // 0x4bbba8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4bbbac:
    if (ctx->pc == 0x4BBBACu) {
        ctx->pc = 0x4BBBACu;
            // 0x4bbbac: 0x8e230d9c  lw          $v1, 0xD9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
        ctx->pc = 0x4BBBB0u;
        goto label_4bbbb0;
    }
    ctx->pc = 0x4BBBA8u;
    {
        const bool branch_taken_0x4bbba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbba8) {
            ctx->pc = 0x4BBBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBBA8u;
            // 0x4bbbac: 0x8e230d9c  lw          $v1, 0xD9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BBBD8u;
            goto label_4bbbd8;
        }
    }
    ctx->pc = 0x4BBBB0u;
label_4bbbb0:
    // 0x4bbbb0: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4bbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4bbbb4:
    // 0x4bbbb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4bbbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bbbb8:
    // 0x4bbbb8: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x4bbbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4bbbbc:
    // 0x4bbbbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4bbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bbbc0:
    // 0x4bbbc0: 0xa41004  sllv        $v0, $a0, $a1
    ctx->pc = 0x4bbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_4bbbc4:
    // 0x4bbbc4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4bbbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4bbbc8:
    // 0x4bbbc8: 0x94620074  lhu         $v0, 0x74($v1)
    ctx->pc = 0x4bbbc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
label_4bbbcc:
    // 0x4bbbcc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4bbbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4bbbd0:
    // 0x4bbbd0: 0xa4620074  sh          $v0, 0x74($v1)
    ctx->pc = 0x4bbbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 116), (uint16_t)GPR_U32(ctx, 2));
label_4bbbd4:
    // 0x4bbbd4: 0x8e230d9c  lw          $v1, 0xD9C($s1)
    ctx->pc = 0x4bbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_4bbbd8:
    // 0x4bbbd8: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x4bbbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4bbbdc:
    // 0x4bbbdc: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x4bbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_4bbbe0:
    // 0x4bbbe0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4bbbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4bbbe4:
    // 0x4bbbe4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4bbbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4bbbe8:
    // 0x4bbbe8: 0xae230d9c  sw          $v1, 0xD9C($s1)
    ctx->pc = 0x4bbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 3));
label_4bbbec:
    // 0x4bbbec: 0x8e030d9c  lw          $v1, 0xD9C($s0)
    ctx->pc = 0x4bbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_4bbbf0:
    // 0x4bbbf0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4bbbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4bbbf4:
    // 0x4bbbf4: 0xae030d9c  sw          $v1, 0xD9C($s0)
    ctx->pc = 0x4bbbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
label_4bbbf8:
    // 0x4bbbf8: 0x8e320d74  lw          $s2, 0xD74($s1)
    ctx->pc = 0x4bbbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4bbbfc:
    // 0x4bbbfc: 0x8e4302c8  lw          $v1, 0x2C8($s2)
    ctx->pc = 0x4bbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_4bbc00:
    // 0x4bbc00: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4bbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4bbc04:
    // 0x4bbc04: 0xc0a545c  jal         func_295170
label_4bbc08:
    if (ctx->pc == 0x4BBC08u) {
        ctx->pc = 0x4BBC08u;
            // 0x4bbc08: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BBC0Cu;
        goto label_4bbc0c;
    }
    ctx->pc = 0x4BBC04u;
    SET_GPR_U32(ctx, 31, 0x4BBC0Cu);
    ctx->pc = 0x4BBC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBC04u;
            // 0x4bbc08: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC0Cu; }
        if (ctx->pc != 0x4BBC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC0Cu; }
        if (ctx->pc != 0x4BBC0Cu) { return; }
    }
    ctx->pc = 0x4BBC0Cu;
label_4bbc0c:
    // 0x4bbc0c: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x4bbc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_4bbc10:
    // 0x4bbc10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bbc14:
    // 0x4bbc14: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x4bbc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4bbc18:
    // 0x4bbc18: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bbc1c:
    // 0x4bbc1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bbc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bbc20:
    // 0x4bbc20: 0xc08bf20  jal         func_22FC80
label_4bbc24:
    if (ctx->pc == 0x4BBC24u) {
        ctx->pc = 0x4BBC24u;
            // 0x4bbc24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC28u;
        goto label_4bbc28;
    }
    ctx->pc = 0x4BBC20u;
    SET_GPR_U32(ctx, 31, 0x4BBC28u);
    ctx->pc = 0x4BBC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBC20u;
            // 0x4bbc24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC28u; }
        if (ctx->pc != 0x4BBC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC28u; }
        if (ctx->pc != 0x4BBC28u) { return; }
    }
    ctx->pc = 0x4BBC28u;
label_4bbc28:
    // 0x4bbc28: 0x8e120d74  lw          $s2, 0xD74($s0)
    ctx->pc = 0x4bbc28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4bbc2c:
    // 0x4bbc2c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4bbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4bbc30:
    // 0x4bbc30: 0x8e4302c8  lw          $v1, 0x2C8($s2)
    ctx->pc = 0x4bbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_4bbc34:
    // 0x4bbc34: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4bbc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4bbc38:
    // 0x4bbc38: 0xc0a545c  jal         func_295170
label_4bbc3c:
    if (ctx->pc == 0x4BBC3Cu) {
        ctx->pc = 0x4BBC3Cu;
            // 0x4bbc3c: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BBC40u;
        goto label_4bbc40;
    }
    ctx->pc = 0x4BBC38u;
    SET_GPR_U32(ctx, 31, 0x4BBC40u);
    ctx->pc = 0x4BBC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBC38u;
            // 0x4bbc3c: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC40u; }
        if (ctx->pc != 0x4BBC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC40u; }
        if (ctx->pc != 0x4BBC40u) { return; }
    }
    ctx->pc = 0x4BBC40u;
label_4bbc40:
    // 0x4bbc40: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x4bbc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_4bbc44:
    // 0x4bbc44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bbc48:
    // 0x4bbc48: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x4bbc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4bbc4c:
    // 0x4bbc4c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bbc50:
    // 0x4bbc50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bbc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bbc54:
    // 0x4bbc54: 0xc08bf20  jal         func_22FC80
label_4bbc58:
    if (ctx->pc == 0x4BBC58u) {
        ctx->pc = 0x4BBC58u;
            // 0x4bbc58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC5Cu;
        goto label_4bbc5c;
    }
    ctx->pc = 0x4BBC54u;
    SET_GPR_U32(ctx, 31, 0x4BBC5Cu);
    ctx->pc = 0x4BBC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBC54u;
            // 0x4bbc58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC5Cu; }
        if (ctx->pc != 0x4BBC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC5Cu; }
        if (ctx->pc != 0x4BBC5Cu) { return; }
    }
    ctx->pc = 0x4BBC5Cu;
label_4bbc5c:
    // 0x4bbc5c: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x4bbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_4bbc60:
    // 0x4bbc60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bbc64:
    // 0x4bbc64: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
label_4bbc68:
    if (ctx->pc == 0x4BBC68u) {
        ctx->pc = 0x4BBC68u;
            // 0x4bbc68: 0x8e240d60  lw          $a0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->pc = 0x4BBC6Cu;
        goto label_4bbc6c;
    }
    ctx->pc = 0x4BBC64u;
    {
        const bool branch_taken_0x4bbc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bbc64) {
            ctx->pc = 0x4BBC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBC64u;
            // 0x4bbc68: 0x8e240d60  lw          $a0, 0xD60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BBCD0u;
            goto label_4bbcd0;
        }
    }
    ctx->pc = 0x4BBC6Cu;
label_4bbc6c:
    // 0x4bbc6c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x4bbc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4bbc70:
    // 0x4bbc70: 0xc0be364  jal         func_2F8D90
label_4bbc74:
    if (ctx->pc == 0x4BBC74u) {
        ctx->pc = 0x4BBC74u;
            // 0x4bbc74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC78u;
        goto label_4bbc78;
    }
    ctx->pc = 0x4BBC70u;
    SET_GPR_U32(ctx, 31, 0x4BBC78u);
    ctx->pc = 0x4BBC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBC70u;
            // 0x4bbc74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8D90u;
    if (runtime->hasFunction(0x2F8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2F8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC78u; }
        if (ctx->pc != 0x4BBC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8D90_0x2f8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC78u; }
        if (ctx->pc != 0x4BBC78u) { return; }
    }
    ctx->pc = 0x4BBC78u;
label_4bbc78:
    // 0x4bbc78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bbc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4bbc7c:
    // 0x4bbc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bbc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bbc80:
    // 0x4bbc80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4bbc80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bbc84:
    // 0x4bbc84: 0xc0bdf30  jal         func_2F7CC0
label_4bbc88:
    if (ctx->pc == 0x4BBC88u) {
        ctx->pc = 0x4BBC88u;
            // 0x4bbc88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4BBC8Cu;
        goto label_4bbc8c;
    }
    ctx->pc = 0x4BBC84u;
    SET_GPR_U32(ctx, 31, 0x4BBC8Cu);
    ctx->pc = 0x4BBC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBC84u;
            // 0x4bbc88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7CC0u;
    if (runtime->hasFunction(0x2F7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC8Cu; }
        if (ctx->pc != 0x4BBC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7CC0_0x2f7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBC8Cu; }
        if (ctx->pc != 0x4BBC8Cu) { return; }
    }
    ctx->pc = 0x4BBC8Cu;
label_4bbc8c:
    // 0x4bbc8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bbc90:
    // 0x4bbc90: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x4bbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_4bbc94:
    // 0x4bbc94: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x4bbc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_4bbc98:
    // 0x4bbc98: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x4bbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4bbc9c:
    // 0x4bbc9c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4bbc9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4bbca0:
    // 0x4bbca0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4bbca4:
    if (ctx->pc == 0x4BBCA4u) {
        ctx->pc = 0x4BBCA4u;
            // 0x4bbca4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x4BBCA8u;
        goto label_4bbca8;
    }
    ctx->pc = 0x4BBCA0u;
    {
        const bool branch_taken_0x4bbca0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bbca0) {
            ctx->pc = 0x4BBCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBCA0u;
            // 0x4bbca4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BBCB0u;
            goto label_4bbcb0;
        }
    }
    ctx->pc = 0x4BBCA8u;
label_4bbca8:
    // 0x4bbca8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4bbcac:
    if (ctx->pc == 0x4BBCACu) {
        ctx->pc = 0x4BBCACu;
            // 0x4bbcac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBCB0u;
        goto label_4bbcb0;
    }
    ctx->pc = 0x4BBCA8u;
    {
        const bool branch_taken_0x4bbca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBCA8u;
            // 0x4bbcac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbca8) {
            ctx->pc = 0x4BBCBCu;
            goto label_4bbcbc;
        }
    }
    ctx->pc = 0x4BBCB0u;
label_4bbcb0:
    // 0x4bbcb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bbcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bbcb4:
    // 0x4bbcb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bbcb8:
    // 0x4bbcb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4bbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bbcbc:
    // 0x4bbcbc: 0x26a50d38  addiu       $a1, $s5, 0xD38
    ctx->pc = 0x4bbcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3384));
label_4bbcc0:
    // 0x4bbcc0: 0xc0b79e8  jal         func_2DE7A0
label_4bbcc4:
    if (ctx->pc == 0x4BBCC4u) {
        ctx->pc = 0x4BBCC4u;
            // 0x4bbcc4: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4BBCC8u;
        goto label_4bbcc8;
    }
    ctx->pc = 0x4BBCC0u;
    SET_GPR_U32(ctx, 31, 0x4BBCC8u);
    ctx->pc = 0x4BBCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBCC0u;
            // 0x4bbcc4: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7A0u;
    if (runtime->hasFunction(0x2DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBCC8u; }
        if (ctx->pc != 0x4BBCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE7A0_0x2de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBCC8u; }
        if (ctx->pc != 0x4BBCC8u) { return; }
    }
    ctx->pc = 0x4BBCC8u;
label_4bbcc8:
    // 0x4bbcc8: 0x1000000f  b           . + 4 + (0xF << 2)
label_4bbccc:
    if (ctx->pc == 0x4BBCCCu) {
        ctx->pc = 0x4BBCCCu;
            // 0x4bbccc: 0x8e230d78  lw          $v1, 0xD78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
        ctx->pc = 0x4BBCD0u;
        goto label_4bbcd0;
    }
    ctx->pc = 0x4BBCC8u;
    {
        const bool branch_taken_0x4bbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBCC8u;
            // 0x4bbccc: 0x8e230d78  lw          $v1, 0xD78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbcc8) {
            ctx->pc = 0x4BBD08u;
            goto label_4bbd08;
        }
    }
    ctx->pc = 0x4BBCD0u;
label_4bbcd0:
    // 0x4bbcd0: 0x8e030d60  lw          $v1, 0xD60($s0)
    ctx->pc = 0x4bbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4bbcd4:
    // 0x4bbcd4: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x4bbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_4bbcd8:
    // 0x4bbcd8: 0xac6200ac  sw          $v0, 0xAC($v1)
    ctx->pc = 0x4bbcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 2));
label_4bbcdc:
    // 0x4bbcdc: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x4bbcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_4bbce0:
    // 0x4bbce0: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x4bbce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_4bbce4:
    // 0x4bbce4: 0x8e230d78  lw          $v1, 0xD78($s1)
    ctx->pc = 0x4bbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_4bbce8:
    // 0x4bbce8: 0x8e020d78  lw          $v0, 0xD78($s0)
    ctx->pc = 0x4bbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbcec:
    // 0x4bbcec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4bbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4bbcf0:
    // 0x4bbcf0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x4bbcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_4bbcf4:
    // 0x4bbcf4: 0x8e230d78  lw          $v1, 0xD78($s1)
    ctx->pc = 0x4bbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_4bbcf8:
    // 0x4bbcf8: 0x8e020d78  lw          $v0, 0xD78($s0)
    ctx->pc = 0x4bbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbcfc:
    // 0x4bbcfc: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x4bbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4bbd00:
    // 0x4bbd00: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x4bbd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_4bbd04:
    // 0x4bbd04: 0x8e230d78  lw          $v1, 0xD78($s1)
    ctx->pc = 0x4bbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_4bbd08:
    // 0x4bbd08: 0x8e020d78  lw          $v0, 0xD78($s0)
    ctx->pc = 0x4bbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbd0c:
    // 0x4bbd0c: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x4bbd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4bbd10:
    // 0x4bbd10: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4bbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4bbd14:
    // 0x4bbd14: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x4bbd14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_4bbd18:
    // 0x4bbd18: 0x8e250e00  lw          $a1, 0xE00($s1)
    ctx->pc = 0x4bbd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3584)));
label_4bbd1c:
    // 0x4bbd1c: 0xc075ecc  jal         func_1D7B30
label_4bbd20:
    if (ctx->pc == 0x4BBD20u) {
        ctx->pc = 0x4BBD20u;
            // 0x4bbd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBD24u;
        goto label_4bbd24;
    }
    ctx->pc = 0x4BBD1Cu;
    SET_GPR_U32(ctx, 31, 0x4BBD24u);
    ctx->pc = 0x4BBD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBD1Cu;
            // 0x4bbd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD24u; }
        if (ctx->pc != 0x4BBD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD24u; }
        if (ctx->pc != 0x4BBD24u) { return; }
    }
    ctx->pc = 0x4BBD24u;
label_4bbd24:
    // 0x4bbd24: 0xc6200a7c  lwc1        $f0, 0xA7C($s1)
    ctx->pc = 0x4bbd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bbd28:
    // 0x4bbd28: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x4bbd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_4bbd2c:
    // 0x4bbd2c: 0xc0eea24  jal         func_3BA890
label_4bbd30:
    if (ctx->pc == 0x4BBD30u) {
        ctx->pc = 0x4BBD30u;
            // 0x4bbd30: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->pc = 0x4BBD34u;
        goto label_4bbd34;
    }
    ctx->pc = 0x4BBD2Cu;
    SET_GPR_U32(ctx, 31, 0x4BBD34u);
    ctx->pc = 0x4BBD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBD2Cu;
            // 0x4bbd30: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD34u; }
        if (ctx->pc != 0x4BBD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD34u; }
        if (ctx->pc != 0x4BBD34u) { return; }
    }
    ctx->pc = 0x4BBD34u;
label_4bbd34:
    // 0x4bbd34: 0x8e040d78  lw          $a0, 0xD78($s0)
    ctx->pc = 0x4bbd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbd38:
    // 0x4bbd38: 0xc0ca5e8  jal         func_3297A0
label_4bbd3c:
    if (ctx->pc == 0x4BBD3Cu) {
        ctx->pc = 0x4BBD3Cu;
            // 0x4bbd3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBD40u;
        goto label_4bbd40;
    }
    ctx->pc = 0x4BBD38u;
    SET_GPR_U32(ctx, 31, 0x4BBD40u);
    ctx->pc = 0x4BBD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBD38u;
            // 0x4bbd3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3297A0u;
    if (runtime->hasFunction(0x3297A0u)) {
        auto targetFn = runtime->lookupFunction(0x3297A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD40u; }
        if (ctx->pc != 0x4BBD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003297A0_0x3297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD40u; }
        if (ctx->pc != 0x4BBD40u) { return; }
    }
    ctx->pc = 0x4BBD40u;
label_4bbd40:
    // 0x4bbd40: 0x8ea30968  lw          $v1, 0x968($s5)
    ctx->pc = 0x4bbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
label_4bbd44:
    // 0x4bbd44: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4bbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4bbd48:
    // 0x4bbd48: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_4bbd4c:
    if (ctx->pc == 0x4BBD4Cu) {
        ctx->pc = 0x4BBD4Cu;
            // 0x4bbd4c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4BBD50u;
        goto label_4bbd50;
    }
    ctx->pc = 0x4BBD48u;
    {
        const bool branch_taken_0x4bbd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bbd48) {
            ctx->pc = 0x4BBD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBD48u;
            // 0x4bbd4c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BBD64u;
            goto label_4bbd64;
        }
    }
    ctx->pc = 0x4BBD50u;
label_4bbd50:
    // 0x4bbd50: 0x8e230d78  lw          $v1, 0xD78($s1)
    ctx->pc = 0x4bbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_4bbd54:
    // 0x4bbd54: 0x8e020d78  lw          $v0, 0xD78($s0)
    ctx->pc = 0x4bbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbd58:
    // 0x4bbd58: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x4bbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_4bbd5c:
    // 0x4bbd5c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4bbd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_4bbd60:
    // 0x4bbd60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4bbd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4bbd64:
    // 0x4bbd64: 0xc04f278  jal         func_13C9E0
label_4bbd68:
    if (ctx->pc == 0x4BBD68u) {
        ctx->pc = 0x4BBD68u;
            // 0x4bbd68: 0x26050830  addiu       $a1, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x4BBD6Cu;
        goto label_4bbd6c;
    }
    ctx->pc = 0x4BBD64u;
    SET_GPR_U32(ctx, 31, 0x4BBD6Cu);
    ctx->pc = 0x4BBD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBD64u;
            // 0x4bbd68: 0x26050830  addiu       $a1, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD6Cu; }
        if (ctx->pc != 0x4BBD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD6Cu; }
        if (ctx->pc != 0x4BBD6Cu) { return; }
    }
    ctx->pc = 0x4BBD6Cu;
label_4bbd6c:
    // 0x4bbd6c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4bbd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4bbd70:
    // 0x4bbd70: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4bbd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4bbd74:
    // 0x4bbd74: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x4bbd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4bbd78:
    // 0x4bbd78: 0xc04cca0  jal         func_133280
label_4bbd7c:
    if (ctx->pc == 0x4BBD7Cu) {
        ctx->pc = 0x4BBD7Cu;
            // 0x4bbd7c: 0x24c66fb0  addiu       $a2, $a2, 0x6FB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28592));
        ctx->pc = 0x4BBD80u;
        goto label_4bbd80;
    }
    ctx->pc = 0x4BBD78u;
    SET_GPR_U32(ctx, 31, 0x4BBD80u);
    ctx->pc = 0x4BBD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBD78u;
            // 0x4bbd7c: 0x24c66fb0  addiu       $a2, $a2, 0x6FB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD80u; }
        if (ctx->pc != 0x4BBD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBD80u; }
        if (ctx->pc != 0x4BBD80u) { return; }
    }
    ctx->pc = 0x4BBD80u;
label_4bbd80:
    // 0x4bbd80: 0x8ea30968  lw          $v1, 0x968($s5)
    ctx->pc = 0x4bbd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
label_4bbd84:
    // 0x4bbd84: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4bbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4bbd88:
    // 0x4bbd88: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4bbd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4bbd8c:
    // 0x4bbd8c: 0x24426ef0  addiu       $v0, $v0, 0x6EF0
    ctx->pc = 0x4bbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28400));
label_4bbd90:
    // 0x4bbd90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4bbd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bbd94:
    // 0x4bbd94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bbd98:
    // 0x4bbd98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bbd9c:
    // 0x4bbd9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bbd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bbda0:
    // 0x4bbda0: 0xc04cc70  jal         func_1331C0
label_4bbda4:
    if (ctx->pc == 0x4BBDA4u) {
        ctx->pc = 0x4BBDA4u;
            // 0x4bbda4: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x4BBDA8u;
        goto label_4bbda8;
    }
    ctx->pc = 0x4BBDA0u;
    SET_GPR_U32(ctx, 31, 0x4BBDA8u);
    ctx->pc = 0x4BBDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBDA0u;
            // 0x4bbda4: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDA8u; }
        if (ctx->pc != 0x4BBDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDA8u; }
        if (ctx->pc != 0x4BBDA8u) { return; }
    }
    ctx->pc = 0x4BBDA8u;
label_4bbda8:
    // 0x4bbda8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4bbda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4bbdac:
    // 0x4bbdac: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x4bbdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_4bbdb0:
    // 0x4bbdb0: 0xc04cbe0  jal         func_132F80
label_4bbdb4:
    if (ctx->pc == 0x4BBDB4u) {
        ctx->pc = 0x4BBDB4u;
            // 0x4bbdb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BBDB8u;
        goto label_4bbdb8;
    }
    ctx->pc = 0x4BBDB0u;
    SET_GPR_U32(ctx, 31, 0x4BBDB8u);
    ctx->pc = 0x4BBDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBDB0u;
            // 0x4bbdb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDB8u; }
        if (ctx->pc != 0x4BBDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDB8u; }
        if (ctx->pc != 0x4BBDB8u) { return; }
    }
    ctx->pc = 0x4BBDB8u;
label_4bbdb8:
    // 0x4bbdb8: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x4bbdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
label_4bbdbc:
    // 0x4bbdbc: 0xc04cc04  jal         func_133010
label_4bbdc0:
    if (ctx->pc == 0x4BBDC0u) {
        ctx->pc = 0x4BBDC0u;
            // 0x4bbdc0: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x4BBDC4u;
        goto label_4bbdc4;
    }
    ctx->pc = 0x4BBDBCu;
    SET_GPR_U32(ctx, 31, 0x4BBDC4u);
    ctx->pc = 0x4BBDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBDBCu;
            // 0x4bbdc0: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDC4u; }
        if (ctx->pc != 0x4BBDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDC4u; }
        if (ctx->pc != 0x4BBDC4u) { return; }
    }
    ctx->pc = 0x4BBDC4u;
label_4bbdc4:
    // 0x4bbdc4: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x4bbdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_4bbdc8:
    // 0x4bbdc8: 0xc04cc04  jal         func_133010
label_4bbdcc:
    if (ctx->pc == 0x4BBDCCu) {
        ctx->pc = 0x4BBDCCu;
            // 0x4bbdcc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4BBDD0u;
        goto label_4bbdd0;
    }
    ctx->pc = 0x4BBDC8u;
    SET_GPR_U32(ctx, 31, 0x4BBDD0u);
    ctx->pc = 0x4BBDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBDC8u;
            // 0x4bbdcc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDD0u; }
        if (ctx->pc != 0x4BBDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDD0u; }
        if (ctx->pc != 0x4BBDD0u) { return; }
    }
    ctx->pc = 0x4BBDD0u;
label_4bbdd0:
    // 0x4bbdd0: 0x8e110d74  lw          $s1, 0xD74($s0)
    ctx->pc = 0x4bbdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4bbdd4:
    // 0x4bbdd4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x4bbdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bbdd8:
    // 0x4bbdd8: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x4bbdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bbddc:
    // 0x4bbddc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x4bbddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_4bbde0:
    // 0x4bbde0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x4bbde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_4bbde4:
    // 0x4bbde4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x4bbde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bbde8:
    // 0x4bbde8: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x4bbde8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_4bbdec:
    // 0x4bbdec: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x4bbdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_4bbdf0:
    // 0x4bbdf0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4bbdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4bbdf4:
    // 0x4bbdf4: 0xc0a5444  jal         func_295110
label_4bbdf8:
    if (ctx->pc == 0x4BBDF8u) {
        ctx->pc = 0x4BBDF8u;
            // 0x4bbdf8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4BBDFCu;
        goto label_4bbdfc;
    }
    ctx->pc = 0x4BBDF4u;
    SET_GPR_U32(ctx, 31, 0x4BBDFCu);
    ctx->pc = 0x4BBDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBDF4u;
            // 0x4bbdf8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDFCu; }
        if (ctx->pc != 0x4BBDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBDFCu; }
        if (ctx->pc != 0x4BBDFCu) { return; }
    }
    ctx->pc = 0x4BBDFCu;
label_4bbdfc:
    // 0x4bbdfc: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x4bbdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_4bbe00:
    // 0x4bbe00: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x4bbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
label_4bbe04:
    // 0x4bbe04: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x4bbe04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_4bbe08:
    // 0x4bbe08: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x4bbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_4bbe0c:
    // 0x4bbe0c: 0x8e030518  lw          $v1, 0x518($s0)
    ctx->pc = 0x4bbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
label_4bbe10:
    // 0x4bbe10: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x4bbe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_4bbe14:
    // 0x4bbe14: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_4bbe18:
    if (ctx->pc == 0x4BBE18u) {
        ctx->pc = 0x4BBE18u;
            // 0x4bbe18: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4BBE1Cu;
        goto label_4bbe1c;
    }
    ctx->pc = 0x4BBE14u;
    {
        const bool branch_taken_0x4bbe14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbe14) {
            ctx->pc = 0x4BBE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBE14u;
            // 0x4bbe18: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BBE30u;
            goto label_4bbe30;
        }
    }
    ctx->pc = 0x4BBE1Cu;
label_4bbe1c:
    // 0x4bbe1c: 0x8e040da0  lw          $a0, 0xDA0($s0)
    ctx->pc = 0x4bbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_4bbe20:
    // 0x4bbe20: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x4bbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_4bbe24:
    // 0x4bbe24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4bbe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4bbe28:
    // 0x4bbe28: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x4bbe28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
label_4bbe2c:
    // 0x4bbe2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4bbe2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4bbe30:
    // 0x4bbe30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4bbe30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4bbe34:
    // 0x4bbe34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4bbe34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4bbe38:
    // 0x4bbe38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bbe38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bbe3c:
    // 0x4bbe3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bbe3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bbe40:
    // 0x4bbe40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bbe40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bbe44:
    // 0x4bbe44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bbe44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bbe48:
    // 0x4bbe48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bbe48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bbe4c:
    // 0x4bbe4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bbe4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bbe50:
    // 0x4bbe50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bbe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bbe54:
    // 0x4bbe54: 0x3e00008  jr          $ra
label_4bbe58:
    if (ctx->pc == 0x4BBE58u) {
        ctx->pc = 0x4BBE58u;
            // 0x4bbe58: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x4BBE5Cu;
        goto label_4bbe5c;
    }
    ctx->pc = 0x4BBE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BBE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBE54u;
            // 0x4bbe58: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BBE5Cu;
label_4bbe5c:
    // 0x4bbe5c: 0x0  nop
    ctx->pc = 0x4bbe5cu;
    // NOP
label_4bbe60:
    // 0x4bbe60: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x4bbe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_4bbe64:
    // 0x4bbe64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4bbe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4bbe68:
    // 0x4bbe68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4bbe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4bbe6c:
    // 0x4bbe6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4bbe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4bbe70:
    // 0x4bbe70: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4bbe70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bbe74:
    // 0x4bbe74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bbe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bbe78:
    // 0x4bbe78: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4bbe78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bbe7c:
    // 0x4bbe7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bbe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bbe80:
    // 0x4bbe80: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4bbe80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bbe84:
    // 0x4bbe84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bbe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bbe88:
    // 0x4bbe88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4bbe88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bbe8c:
    // 0x4bbe8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bbe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bbe90:
    // 0x4bbe90: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x4bbe90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4bbe94:
    // 0x4bbe94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bbe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bbe98:
    // 0x4bbe98: 0x27b30120  addiu       $s3, $sp, 0x120
    ctx->pc = 0x4bbe98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4bbe9c:
    // 0x4bbe9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bbe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bbea0:
    // 0x4bbea0: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x4bbea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4bbea4:
    // 0x4bbea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bbea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bbea8:
    // 0x4bbea8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x4bbea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bbeac:
    // 0x4bbeac: 0x8e830cd0  lw          $v1, 0xCD0($s4)
    ctx->pc = 0x4bbeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3280)));
label_4bbeb0:
    // 0x4bbeb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bbeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bbeb4:
    // 0x4bbeb4: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x4bbeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_4bbeb8:
    // 0x4bbeb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bbeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bbebc:
    // 0x4bbebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bbec0:
    // 0x4bbec0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x4bbec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bbec4:
    // 0x4bbec4: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x4bbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_4bbec8:
    // 0x4bbec8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4bbec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4bbecc:
    // 0x4bbecc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_4bbed0:
    if (ctx->pc == 0x4BBED0u) {
        ctx->pc = 0x4BBED4u;
        goto label_4bbed4;
    }
    ctx->pc = 0x4BBECCu;
    {
        const bool branch_taken_0x4bbecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bbecc) {
            ctx->pc = 0x4BBF28u;
            goto label_4bbf28;
        }
    }
    ctx->pc = 0x4BBED4u;
label_4bbed4:
    // 0x4bbed4: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x4bbed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbed8:
    // 0x4bbed8: 0x8ec2078c  lw          $v0, 0x78C($s6)
    ctx->pc = 0x4bbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1932)));
label_4bbedc:
    // 0x4bbedc: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x4bbedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4bbee0:
    // 0x4bbee0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x4bbee0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4bbee4:
    // 0x4bbee4: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
label_4bbee8:
    if (ctx->pc == 0x4BBEE8u) {
        ctx->pc = 0x4BBEECu;
        goto label_4bbeec;
    }
    ctx->pc = 0x4BBEE4u;
    {
        const bool branch_taken_0x4bbee4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bbee4) {
            ctx->pc = 0x4BBF28u;
            goto label_4bbf28;
        }
    }
    ctx->pc = 0x4BBEECu;
label_4bbeec:
    // 0x4bbeec: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x4bbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4bbef0:
    // 0x4bbef0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4bbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4bbef4:
    // 0x4bbef4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x4bbef4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_4bbef8:
    // 0x4bbef8: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x4bbef8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_4bbefc:
    // 0x4bbefc: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x4bbefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbf00:
    // 0x4bbf00: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x4bbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_4bbf04:
    // 0x4bbf04: 0xa6630002  sh          $v1, 0x2($s3)
    ctx->pc = 0x4bbf04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
label_4bbf08:
    // 0x4bbf08: 0x8e030d78  lw          $v1, 0xD78($s0)
    ctx->pc = 0x4bbf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbf0c:
    // 0x4bbf0c: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x4bbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bbf10:
    // 0x4bbf10: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x4bbf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_4bbf14:
    // 0x4bbf14: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x4bbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_4bbf18:
    // 0x4bbf18: 0x82020e3f  lb          $v0, 0xE3F($s0)
    ctx->pc = 0x4bbf18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_4bbf1c:
    // 0x4bbf1c: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x4bbf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
label_4bbf20:
    // 0x4bbf20: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4bbf24:
    if (ctx->pc == 0x4BBF24u) {
        ctx->pc = 0x4BBF24u;
            // 0x4bbf24: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4BBF28u;
        goto label_4bbf28;
    }
    ctx->pc = 0x4BBF20u;
    {
        const bool branch_taken_0x4bbf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBF20u;
            // 0x4bbf24: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbf20) {
            ctx->pc = 0x4BBF98u;
            goto label_4bbf98;
        }
    }
    ctx->pc = 0x4BBF28u;
label_4bbf28:
    // 0x4bbf28: 0x8e040d78  lw          $a0, 0xD78($s0)
    ctx->pc = 0x4bbf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_4bbf2c:
    // 0x4bbf2c: 0xc0ca680  jal         func_329A00
label_4bbf30:
    if (ctx->pc == 0x4BBF30u) {
        ctx->pc = 0x4BBF30u;
            // 0x4bbf30: 0x27a501ac  addiu       $a1, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->pc = 0x4BBF34u;
        goto label_4bbf34;
    }
    ctx->pc = 0x4BBF2Cu;
    SET_GPR_U32(ctx, 31, 0x4BBF34u);
    ctx->pc = 0x4BBF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBF2Cu;
            // 0x4bbf30: 0x27a501ac  addiu       $a1, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBF34u; }
        if (ctx->pc != 0x4BBF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBF34u; }
        if (ctx->pc != 0x4BBF34u) { return; }
    }
    ctx->pc = 0x4BBF34u;
label_4bbf34:
    // 0x4bbf34: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x4bbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4bbf38:
    // 0x4bbf38: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x4bbf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_4bbf3c:
    // 0x4bbf3c: 0x93a501ad  lbu         $a1, 0x1AD($sp)
    ctx->pc = 0x4bbf3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 429)));
label_4bbf40:
    // 0x4bbf40: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x4bbf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_4bbf44:
    // 0x4bbf44: 0x97a601ae  lhu         $a2, 0x1AE($sp)
    ctx->pc = 0x4bbf44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 430)));
label_4bbf48:
    // 0x4bbf48: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x4bbf48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4bbf4c:
    // 0x4bbf4c: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x4bbf4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_4bbf50:
    // 0x4bbf50: 0x93a301ac  lbu         $v1, 0x1AC($sp)
    ctx->pc = 0x4bbf50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 428)));
label_4bbf54:
    // 0x4bbf54: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x4bbf54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_4bbf58:
    // 0x4bbf58: 0x82080e3f  lb          $t0, 0xE3F($s0)
    ctx->pc = 0x4bbf58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_4bbf5c:
    // 0x4bbf5c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4bbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4bbf60:
    // 0x4bbf60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4bbf60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4bbf64:
    // 0x4bbf64: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4bbf64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4bbf68:
    // 0x4bbf68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4bbf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4bbf6c:
    // 0x4bbf6c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x4bbf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4bbf70:
    // 0x4bbf70: 0xa6470002  sh          $a3, 0x2($s2)
    ctx->pc = 0x4bbf70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 7));
label_4bbf74:
    // 0x4bbf74: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4bbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_4bbf78:
    // 0x4bbf78: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4bbf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4bbf7c:
    // 0x4bbf7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4bbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4bbf80:
    // 0x4bbf80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4bbf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4bbf84:
    // 0x4bbf84: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x4bbf84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_4bbf88:
    // 0x4bbf88: 0x82020e3f  lb          $v0, 0xE3F($s0)
    ctx->pc = 0x4bbf88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_4bbf8c:
    // 0x4bbf8c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x4bbf8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4bbf90:
    // 0x4bbf90: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x4bbf90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
label_4bbf94:
    // 0x4bbf94: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4bbf94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4bbf98:
    // 0x4bbf98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4bbf98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4bbf9c:
    // 0x4bbf9c: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x4bbf9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_4bbfa0:
    // 0x4bbfa0: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_4bbfa4:
    if (ctx->pc == 0x4BBFA4u) {
        ctx->pc = 0x4BBFA4u;
            // 0x4bbfa4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x4BBFA8u;
        goto label_4bbfa8;
    }
    ctx->pc = 0x4BBFA0u;
    {
        const bool branch_taken_0x4bbfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBFA0u;
            // 0x4bbfa4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbfa0) {
            ctx->pc = 0x4BBEACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bbeac;
        }
    }
    ctx->pc = 0x4BBFA8u;
label_4bbfa8:
    // 0x4bbfa8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4bbfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4bbfac:
    // 0x4bbfac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4bbfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bbfb0:
    // 0x4bbfb0: 0x24a50e80  addiu       $a1, $a1, 0xE80
    ctx->pc = 0x4bbfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
label_4bbfb4:
    // 0x4bbfb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bbfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bbfb8:
    // 0x4bbfb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4bbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4bbfbc:
    // 0x4bbfbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4bbfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4bbfc0:
    // 0x4bbfc0: 0xa0430e3f  sb          $v1, 0xE3F($v0)
    ctx->pc = 0x4bbfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3647), (uint8_t)GPR_U32(ctx, 3));
label_4bbfc4:
    // 0x4bbfc4: 0x8ec2077c  lw          $v0, 0x77C($s6)
    ctx->pc = 0x4bbfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1916)));
label_4bbfc8:
    // 0x4bbfc8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x4bbfc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4bbfcc:
    // 0x4bbfcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4bbfd0:
    if (ctx->pc == 0x4BBFD0u) {
        ctx->pc = 0x4BBFD0u;
            // 0x4bbfd0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4BBFD4u;
        goto label_4bbfd4;
    }
    ctx->pc = 0x4BBFCCu;
    {
        const bool branch_taken_0x4bbfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBFCCu;
            // 0x4bbfd0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbfcc) {
            ctx->pc = 0x4BBFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bbfb8;
        }
    }
    ctx->pc = 0x4BBFD4u;
label_4bbfd4:
    // 0x4bbfd4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4bbfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4bbfd8:
    // 0x4bbfd8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4bbfd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4bbfdc:
    // 0x4bbfdc: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4bbfdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4bbfe0:
    // 0x4bbfe0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4bbfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4bbfe4:
    // 0x4bbfe4: 0xc0cc2c8  jal         func_330B20
label_4bbfe8:
    if (ctx->pc == 0x4BBFE8u) {
        ctx->pc = 0x4BBFE8u;
            // 0x4bbfe8: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4BBFECu;
        goto label_4bbfec;
    }
    ctx->pc = 0x4BBFE4u;
    SET_GPR_U32(ctx, 31, 0x4BBFECu);
    ctx->pc = 0x4BBFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BBFE4u;
            // 0x4bbfe8: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330B20u;
    if (runtime->hasFunction(0x330B20u)) {
        auto targetFn = runtime->lookupFunction(0x330B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBFECu; }
        if (ctx->pc != 0x4BBFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330B20_0x330b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BBFECu; }
        if (ctx->pc != 0x4BBFECu) { return; }
    }
    ctx->pc = 0x4BBFECu;
label_4bbfec:
    // 0x4bbfec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4bbfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4bbff0:
    // 0x4bbff0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4bbff0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4bbff4:
    // 0x4bbff4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4bbff4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4bbff8:
    // 0x4bbff8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bbff8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bbffc:
    // 0x4bbffc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bbffcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bc000:
    // 0x4bc000: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bc000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bc004:
    // 0x4bc004: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bc004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bc008:
    // 0x4bc008: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bc008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bc00c:
    // 0x4bc00c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bc00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bc010:
    // 0x4bc010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bc010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bc014:
    // 0x4bc014: 0x3e00008  jr          $ra
label_4bc018:
    if (ctx->pc == 0x4BC018u) {
        ctx->pc = 0x4BC018u;
            // 0x4bc018: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x4BC01Cu;
        goto label_4bc01c;
    }
    ctx->pc = 0x4BC014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC014u;
            // 0x4bc018: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BC01Cu;
label_4bc01c:
    // 0x4bc01c: 0x0  nop
    ctx->pc = 0x4bc01cu;
    // NOP
label_4bc020:
    // 0x4bc020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bc020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4bc024:
    // 0x4bc024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bc024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4bc028:
    // 0x4bc028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bc028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bc02c:
    // 0x4bc02c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bc02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bc030:
    // 0x4bc030: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4bc030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bc034:
    // 0x4bc034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bc034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bc038:
    // 0x4bc038: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4bc038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc03c:
    // 0x4bc03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bc03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bc040:
    // 0x4bc040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bc040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc044:
    // 0x4bc044: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4bc044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bc048:
    // 0x4bc048: 0x8e030cd0  lw          $v1, 0xCD0($s0)
    ctx->pc = 0x4bc048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3280)));
label_4bc04c:
    // 0x4bc04c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bc050:
    // 0x4bc050: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x4bc050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_4bc054:
    // 0x4bc054: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bc054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bc058:
    // 0x4bc058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bc058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bc05c:
    // 0x4bc05c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bc05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bc060:
    // 0x4bc060: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x4bc060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_4bc064:
    // 0x4bc064: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4bc064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4bc068:
    // 0x4bc068: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_4bc06c:
    if (ctx->pc == 0x4BC06Cu) {
        ctx->pc = 0x4BC070u;
        goto label_4bc070;
    }
    ctx->pc = 0x4BC068u;
    {
        const bool branch_taken_0x4bc068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bc068) {
            ctx->pc = 0x4BC0A8u;
            goto label_4bc0a8;
        }
    }
    ctx->pc = 0x4BC070u;
label_4bc070:
    // 0x4bc070: 0x8c830d78  lw          $v1, 0xD78($a0)
    ctx->pc = 0x4bc070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3448)));
label_4bc074:
    // 0x4bc074: 0x8e62078c  lw          $v0, 0x78C($s3)
    ctx->pc = 0x4bc074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1932)));
label_4bc078:
    // 0x4bc078: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x4bc078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4bc07c:
    // 0x4bc07c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x4bc07cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4bc080:
    // 0x4bc080: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_4bc084:
    if (ctx->pc == 0x4BC084u) {
        ctx->pc = 0x4BC088u;
        goto label_4bc088;
    }
    ctx->pc = 0x4BC080u;
    {
        const bool branch_taken_0x4bc080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc080) {
            ctx->pc = 0x4BC0B0u;
            goto label_4bc0b0;
        }
    }
    ctx->pc = 0x4BC088u;
label_4bc088:
    // 0x4bc088: 0xc07634c  jal         func_1D8D30
label_4bc08c:
    if (ctx->pc == 0x4BC08Cu) {
        ctx->pc = 0x4BC090u;
        goto label_4bc090;
    }
    ctx->pc = 0x4BC088u;
    SET_GPR_U32(ctx, 31, 0x4BC090u);
    ctx->pc = 0x1D8D30u;
    if (runtime->hasFunction(0x1D8D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D8D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC090u; }
        if (ctx->pc != 0x4BC090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8D30_0x1d8d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC090u; }
        if (ctx->pc != 0x4BC090u) { return; }
    }
    ctx->pc = 0x4BC090u;
label_4bc090:
    // 0x4bc090: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4bc094:
    if (ctx->pc == 0x4BC094u) {
        ctx->pc = 0x4BC098u;
        goto label_4bc098;
    }
    ctx->pc = 0x4BC090u;
    {
        const bool branch_taken_0x4bc090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc090) {
            ctx->pc = 0x4BC0B0u;
            goto label_4bc0b0;
        }
    }
    ctx->pc = 0x4BC098u;
label_4bc098:
    // 0x4bc098: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x4bc098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4bc09c:
    // 0x4bc09c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4bc0a0:
    if (ctx->pc == 0x4BC0A0u) {
        ctx->pc = 0x4BC0A0u;
            // 0x4bc0a0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4BC0A4u;
        goto label_4bc0a4;
    }
    ctx->pc = 0x4BC09Cu;
    {
        const bool branch_taken_0x4bc09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC09Cu;
            // 0x4bc0a0: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc09c) {
            ctx->pc = 0x4BC0B0u;
            goto label_4bc0b0;
        }
    }
    ctx->pc = 0x4BC0A4u;
label_4bc0a4:
    // 0x4bc0a4: 0x0  nop
    ctx->pc = 0x4bc0a4u;
    // NOP
label_4bc0a8:
    // 0x4bc0a8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x4bc0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4bc0ac:
    // 0x4bc0ac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x4bc0acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4bc0b0:
    // 0x4bc0b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4bc0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4bc0b4:
    // 0x4bc0b4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x4bc0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4bc0b8:
    // 0x4bc0b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_4bc0bc:
    if (ctx->pc == 0x4BC0BCu) {
        ctx->pc = 0x4BC0BCu;
            // 0x4bc0bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4BC0C0u;
        goto label_4bc0c0;
    }
    ctx->pc = 0x4BC0B8u;
    {
        const bool branch_taken_0x4bc0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC0B8u;
            // 0x4bc0bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc0b8) {
            ctx->pc = 0x4BC048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc048;
        }
    }
    ctx->pc = 0x4BC0C0u;
label_4bc0c0:
    // 0x4bc0c0: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x4bc0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4bc0c4:
    // 0x4bc0c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bc0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bc0c8:
    // 0x4bc0c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bc0c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bc0cc:
    // 0x4bc0cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bc0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bc0d0:
    // 0x4bc0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bc0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bc0d4:
    // 0x4bc0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bc0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bc0d8:
    // 0x4bc0d8: 0x3e00008  jr          $ra
label_4bc0dc:
    if (ctx->pc == 0x4BC0DCu) {
        ctx->pc = 0x4BC0DCu;
            // 0x4bc0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BC0E0u;
        goto label_4bc0e0;
    }
    ctx->pc = 0x4BC0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC0D8u;
            // 0x4bc0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BC0E0u;
label_4bc0e0:
    // 0x4bc0e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4bc0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4bc0e4:
    // 0x4bc0e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bc0e8:
    // 0x4bc0e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4bc0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4bc0ec:
    // 0x4bc0ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bc0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bc0f0:
    // 0x4bc0f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bc0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bc0f4:
    // 0x4bc0f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4bc0f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bc0f8:
    // 0x4bc0f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bc0fc:
    // 0x4bc0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bc0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bc100:
    // 0x4bc100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bc100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bc104:
    // 0x4bc104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bc104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bc108:
    // 0x4bc108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bc108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bc10c:
    // 0x4bc10c: 0x8c830cf4  lw          $v1, 0xCF4($a0)
    ctx->pc = 0x4bc10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3316)));
label_4bc110:
    // 0x4bc110: 0x8c920780  lw          $s2, 0x780($a0)
    ctx->pc = 0x4bc110u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_4bc114:
    // 0x4bc114: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_4bc118:
    if (ctx->pc == 0x4BC118u) {
        ctx->pc = 0x4BC118u;
            // 0x4bc118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC11Cu;
        goto label_4bc11c;
    }
    ctx->pc = 0x4BC114u;
    {
        const bool branch_taken_0x4bc114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BC118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC114u;
            // 0x4bc118: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc114) {
            ctx->pc = 0x4BC120u;
            goto label_4bc120;
        }
    }
    ctx->pc = 0x4BC11Cu;
label_4bc11c:
    // 0x4bc11c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4bc11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bc120:
    // 0x4bc120: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x4bc120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_4bc124:
    // 0x4bc124: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x4bc124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_4bc128:
    // 0x4bc128: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_4bc12c:
    if (ctx->pc == 0x4BC12Cu) {
        ctx->pc = 0x4BC12Cu;
            // 0x4bc12c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x4BC130u;
        goto label_4bc130;
    }
    ctx->pc = 0x4BC128u;
    {
        const bool branch_taken_0x4bc128 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC128u;
            // 0x4bc12c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc128) {
            ctx->pc = 0x4BC188u;
            goto label_4bc188;
        }
    }
    ctx->pc = 0x4BC130u;
label_4bc130:
    // 0x4bc130: 0x8e350d74  lw          $s5, 0xD74($s1)
    ctx->pc = 0x4bc130u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4bc134:
    // 0x4bc134: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x4bc134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_4bc138:
    // 0x4bc138: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4bc138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4bc13c:
    // 0x4bc13c: 0x8ea302c8  lw          $v1, 0x2C8($s5)
    ctx->pc = 0x4bc13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 712)));
label_4bc140:
    // 0x4bc140: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4bc140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4bc144:
    // 0x4bc144: 0xc0a545c  jal         func_295170
label_4bc148:
    if (ctx->pc == 0x4BC148u) {
        ctx->pc = 0x4BC148u;
            // 0x4bc148: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BC14Cu;
        goto label_4bc14c;
    }
    ctx->pc = 0x4BC144u;
    SET_GPR_U32(ctx, 31, 0x4BC14Cu);
    ctx->pc = 0x4BC148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC144u;
            // 0x4bc148: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC14Cu; }
        if (ctx->pc != 0x4BC14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC14Cu; }
        if (ctx->pc != 0x4BC14Cu) { return; }
    }
    ctx->pc = 0x4BC14Cu;
label_4bc14c:
    // 0x4bc14c: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x4bc14cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_4bc150:
    // 0x4bc150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bc150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bc154:
    // 0x4bc154: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4bc154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4bc158:
    // 0x4bc158: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bc158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bc15c:
    // 0x4bc15c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bc15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bc160:
    // 0x4bc160: 0xc08bf20  jal         func_22FC80
label_4bc164:
    if (ctx->pc == 0x4BC164u) {
        ctx->pc = 0x4BC164u;
            // 0x4bc164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC168u;
        goto label_4bc168;
    }
    ctx->pc = 0x4BC160u;
    SET_GPR_U32(ctx, 31, 0x4BC168u);
    ctx->pc = 0x4BC164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC160u;
            // 0x4bc164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC168u; }
        if (ctx->pc != 0x4BC168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC168u; }
        if (ctx->pc != 0x4BC168u) { return; }
    }
    ctx->pc = 0x4BC168u;
label_4bc168:
    // 0x4bc168: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4bc168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4bc16c:
    // 0x4bc16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bc16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bc170:
    // 0x4bc170: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4bc170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4bc174:
    // 0x4bc174: 0x320f809  jalr        $t9
label_4bc178:
    if (ctx->pc == 0x4BC178u) {
        ctx->pc = 0x4BC178u;
            // 0x4bc178: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4BC17Cu;
        goto label_4bc17c;
    }
    ctx->pc = 0x4BC174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC17Cu);
        ctx->pc = 0x4BC178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC174u;
            // 0x4bc178: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC17Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC17Cu; }
            if (ctx->pc != 0x4BC17Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4BC17Cu;
label_4bc17c:
    // 0x4bc17c: 0x10000028  b           . + 4 + (0x28 << 2)
label_4bc180:
    if (ctx->pc == 0x4BC180u) {
        ctx->pc = 0x4BC184u;
        goto label_4bc184;
    }
    ctx->pc = 0x4BC17Cu;
    {
        const bool branch_taken_0x4bc17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc17c) {
            ctx->pc = 0x4BC220u;
            goto label_4bc220;
        }
    }
    ctx->pc = 0x4BC184u;
label_4bc184:
    // 0x4bc184: 0x0  nop
    ctx->pc = 0x4bc184u;
    // NOP
label_4bc188:
    // 0x4bc188: 0x16720017  bne         $s3, $s2, . + 4 + (0x17 << 2)
label_4bc18c:
    if (ctx->pc == 0x4BC18Cu) {
        ctx->pc = 0x4BC190u;
        goto label_4bc190;
    }
    ctx->pc = 0x4BC188u;
    {
        const bool branch_taken_0x4bc188 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x4bc188) {
            ctx->pc = 0x4BC1E8u;
            goto label_4bc1e8;
        }
    }
    ctx->pc = 0x4BC190u;
label_4bc190:
    // 0x4bc190: 0x8e350d74  lw          $s5, 0xD74($s1)
    ctx->pc = 0x4bc190u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4bc194:
    // 0x4bc194: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x4bc194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_4bc198:
    // 0x4bc198: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4bc198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4bc19c:
    // 0x4bc19c: 0x8ea302c8  lw          $v1, 0x2C8($s5)
    ctx->pc = 0x4bc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 712)));
label_4bc1a0:
    // 0x4bc1a0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4bc1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4bc1a4:
    // 0x4bc1a4: 0xc0a545c  jal         func_295170
label_4bc1a8:
    if (ctx->pc == 0x4BC1A8u) {
        ctx->pc = 0x4BC1A8u;
            // 0x4bc1a8: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BC1ACu;
        goto label_4bc1ac;
    }
    ctx->pc = 0x4BC1A4u;
    SET_GPR_U32(ctx, 31, 0x4BC1ACu);
    ctx->pc = 0x4BC1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC1A4u;
            // 0x4bc1a8: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC1ACu; }
        if (ctx->pc != 0x4BC1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC1ACu; }
        if (ctx->pc != 0x4BC1ACu) { return; }
    }
    ctx->pc = 0x4BC1ACu;
label_4bc1ac:
    // 0x4bc1ac: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x4bc1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_4bc1b0:
    // 0x4bc1b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bc1b4:
    // 0x4bc1b4: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4bc1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4bc1b8:
    // 0x4bc1b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bc1bc:
    // 0x4bc1bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bc1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bc1c0:
    // 0x4bc1c0: 0xc08bf20  jal         func_22FC80
label_4bc1c4:
    if (ctx->pc == 0x4BC1C4u) {
        ctx->pc = 0x4BC1C4u;
            // 0x4bc1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC1C8u;
        goto label_4bc1c8;
    }
    ctx->pc = 0x4BC1C0u;
    SET_GPR_U32(ctx, 31, 0x4BC1C8u);
    ctx->pc = 0x4BC1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC1C0u;
            // 0x4bc1c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC1C8u; }
        if (ctx->pc != 0x4BC1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC1C8u; }
        if (ctx->pc != 0x4BC1C8u) { return; }
    }
    ctx->pc = 0x4BC1C8u;
label_4bc1c8:
    // 0x4bc1c8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4bc1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4bc1cc:
    // 0x4bc1cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bc1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bc1d0:
    // 0x4bc1d0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4bc1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4bc1d4:
    // 0x4bc1d4: 0x320f809  jalr        $t9
label_4bc1d8:
    if (ctx->pc == 0x4BC1D8u) {
        ctx->pc = 0x4BC1D8u;
            // 0x4bc1d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4BC1DCu;
        goto label_4bc1dc;
    }
    ctx->pc = 0x4BC1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC1DCu);
        ctx->pc = 0x4BC1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC1D4u;
            // 0x4bc1d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC1DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC1DCu; }
            if (ctx->pc != 0x4BC1DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4BC1DCu;
label_4bc1dc:
    // 0x4bc1dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_4bc1e0:
    if (ctx->pc == 0x4BC1E0u) {
        ctx->pc = 0x4BC1E4u;
        goto label_4bc1e4;
    }
    ctx->pc = 0x4BC1DCu;
    {
        const bool branch_taken_0x4bc1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc1dc) {
            ctx->pc = 0x4BC220u;
            goto label_4bc220;
        }
    }
    ctx->pc = 0x4BC1E4u;
label_4bc1e4:
    // 0x4bc1e4: 0x0  nop
    ctx->pc = 0x4bc1e4u;
    // NOP
label_4bc1e8:
    // 0x4bc1e8: 0x8e350d74  lw          $s5, 0xD74($s1)
    ctx->pc = 0x4bc1e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4bc1ec:
    // 0x4bc1ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4bc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4bc1f0:
    // 0x4bc1f0: 0x8ea302c8  lw          $v1, 0x2C8($s5)
    ctx->pc = 0x4bc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 712)));
label_4bc1f4:
    // 0x4bc1f4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4bc1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4bc1f8:
    // 0x4bc1f8: 0xc0a545c  jal         func_295170
label_4bc1fc:
    if (ctx->pc == 0x4BC1FCu) {
        ctx->pc = 0x4BC1FCu;
            // 0x4bc1fc: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BC200u;
        goto label_4bc200;
    }
    ctx->pc = 0x4BC1F8u;
    SET_GPR_U32(ctx, 31, 0x4BC200u);
    ctx->pc = 0x4BC1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC1F8u;
            // 0x4bc1fc: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC200u; }
        if (ctx->pc != 0x4BC200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC200u; }
        if (ctx->pc != 0x4BC200u) { return; }
    }
    ctx->pc = 0x4BC200u;
label_4bc200:
    // 0x4bc200: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x4bc200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_4bc204:
    // 0x4bc204: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bc204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bc208:
    // 0x4bc208: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4bc208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4bc20c:
    // 0x4bc20c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bc210:
    // 0x4bc210: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bc210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bc214:
    // 0x4bc214: 0xc08bf20  jal         func_22FC80
label_4bc218:
    if (ctx->pc == 0x4BC218u) {
        ctx->pc = 0x4BC218u;
            // 0x4bc218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC21Cu;
        goto label_4bc21c;
    }
    ctx->pc = 0x4BC214u;
    SET_GPR_U32(ctx, 31, 0x4BC21Cu);
    ctx->pc = 0x4BC218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC214u;
            // 0x4bc218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC21Cu; }
        if (ctx->pc != 0x4BC21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC21Cu; }
        if (ctx->pc != 0x4BC21Cu) { return; }
    }
    ctx->pc = 0x4BC21Cu;
label_4bc21c:
    // 0x4bc21c: 0xae200db8  sw          $zero, 0xDB8($s1)
    ctx->pc = 0x4bc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 0));
label_4bc220:
    // 0x4bc220: 0xc0761d4  jal         func_1D8750
label_4bc224:
    if (ctx->pc == 0x4BC224u) {
        ctx->pc = 0x4BC224u;
            // 0x4bc224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC228u;
        goto label_4bc228;
    }
    ctx->pc = 0x4BC220u;
    SET_GPR_U32(ctx, 31, 0x4BC228u);
    ctx->pc = 0x4BC224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC220u;
            // 0x4bc224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC228u; }
        if (ctx->pc != 0x4BC228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC228u; }
        if (ctx->pc != 0x4BC228u) { return; }
    }
    ctx->pc = 0x4BC228u;
label_4bc228:
    // 0x4bc228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bc228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bc22c:
    // 0x4bc22c: 0xc07626c  jal         func_1D89B0
label_4bc230:
    if (ctx->pc == 0x4BC230u) {
        ctx->pc = 0x4BC230u;
            // 0x4bc230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4BC234u;
        goto label_4bc234;
    }
    ctx->pc = 0x4BC22Cu;
    SET_GPR_U32(ctx, 31, 0x4BC234u);
    ctx->pc = 0x4BC230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC22Cu;
            // 0x4bc230: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC234u; }
        if (ctx->pc != 0x4BC234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC234u; }
        if (ctx->pc != 0x4BC234u) { return; }
    }
    ctx->pc = 0x4BC234u;
label_4bc234:
    // 0x4bc234: 0x8ec2077c  lw          $v0, 0x77C($s6)
    ctx->pc = 0x4bc234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1916)));
label_4bc238:
    // 0x4bc238: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4bc238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4bc23c:
    // 0x4bc23c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4bc23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4bc240:
    // 0x4bc240: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_4bc244:
    if (ctx->pc == 0x4BC244u) {
        ctx->pc = 0x4BC244u;
            // 0x4bc244: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4BC248u;
        goto label_4bc248;
    }
    ctx->pc = 0x4BC240u;
    {
        const bool branch_taken_0x4bc240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC240u;
            // 0x4bc244: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc240) {
            ctx->pc = 0x4BC128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc128;
        }
    }
    ctx->pc = 0x4BC248u;
label_4bc248:
    // 0x4bc248: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bc248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bc24c:
    // 0x4bc24c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x4bc24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4bc250:
    // 0x4bc250: 0x8c440144  lw          $a0, 0x144($v0)
    ctx->pc = 0x4bc250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_4bc254:
    // 0x4bc254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bc254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bc258:
    // 0x4bc258: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4bc258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4bc25c:
    // 0x4bc25c: 0x320f809  jalr        $t9
label_4bc260:
    if (ctx->pc == 0x4BC260u) {
        ctx->pc = 0x4BC264u;
        goto label_4bc264;
    }
    ctx->pc = 0x4BC25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC264u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC264u; }
            if (ctx->pc != 0x4BC264u) { return; }
        }
        }
    }
    ctx->pc = 0x4BC264u;
label_4bc264:
    // 0x4bc264: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bc264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bc268:
    // 0x4bc268: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x4bc268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4bc26c:
    // 0x4bc26c: 0x8c440148  lw          $a0, 0x148($v0)
    ctx->pc = 0x4bc26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_4bc270:
    // 0x4bc270: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bc270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bc274:
    // 0x4bc274: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4bc274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4bc278:
    // 0x4bc278: 0x320f809  jalr        $t9
label_4bc27c:
    if (ctx->pc == 0x4BC27Cu) {
        ctx->pc = 0x4BC280u;
        goto label_4bc280;
    }
    ctx->pc = 0x4BC278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC280u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC280u; }
            if (ctx->pc != 0x4BC280u) { return; }
        }
        }
    }
    ctx->pc = 0x4BC280u;
label_4bc280:
    // 0x4bc280: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4bc280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4bc284:
    // 0x4bc284: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bc284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bc288:
    // 0x4bc288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bc288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bc28c:
    // 0x4bc28c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bc28cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bc290:
    // 0x4bc290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bc290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bc294:
    // 0x4bc294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bc294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bc298:
    // 0x4bc298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bc298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bc29c:
    // 0x4bc29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bc29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bc2a0:
    // 0x4bc2a0: 0x3e00008  jr          $ra
label_4bc2a4:
    if (ctx->pc == 0x4BC2A4u) {
        ctx->pc = 0x4BC2A4u;
            // 0x4bc2a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4BC2A8u;
        goto label_4bc2a8;
    }
    ctx->pc = 0x4BC2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC2A0u;
            // 0x4bc2a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BC2A8u;
label_4bc2a8:
    // 0x4bc2a8: 0x0  nop
    ctx->pc = 0x4bc2a8u;
    // NOP
label_4bc2ac:
    // 0x4bc2ac: 0x0  nop
    ctx->pc = 0x4bc2acu;
    // NOP
label_4bc2b0:
    // 0x4bc2b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4bc2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4bc2b4:
    // 0x4bc2b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc2b8:
    // 0x4bc2b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4bc2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4bc2bc:
    // 0x4bc2bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bc2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bc2c0:
    // 0x4bc2c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bc2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bc2c4:
    // 0x4bc2c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bc2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bc2c8:
    // 0x4bc2c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bc2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bc2cc:
    // 0x4bc2cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bc2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bc2d0:
    // 0x4bc2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bc2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bc2d4:
    // 0x4bc2d4: 0x8c528a08  lw          $s2, -0x75F8($v0)
    ctx->pc = 0x4bc2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4bc2d8:
    // 0x4bc2d8: 0x8c830cc4  lw          $v1, 0xCC4($a0)
    ctx->pc = 0x4bc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_4bc2dc:
    // 0x4bc2dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bc2e0:
    // 0x4bc2e0: 0x8c51d130  lw          $s1, -0x2ED0($v0)
    ctx->pc = 0x4bc2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bc2e4:
    // 0x4bc2e4: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x4bc2e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4bc2e8:
    // 0x4bc2e8: 0x8c830780  lw          $v1, 0x780($a0)
    ctx->pc = 0x4bc2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_4bc2ec:
    // 0x4bc2ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bc2f0:
    // 0x4bc2f0: 0x14620079  bne         $v1, $v0, . + 4 + (0x79 << 2)
label_4bc2f4:
    if (ctx->pc == 0x4BC2F4u) {
        ctx->pc = 0x4BC2F4u;
            // 0x4bc2f4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC2F8u;
        goto label_4bc2f8;
    }
    ctx->pc = 0x4BC2F0u;
    {
        const bool branch_taken_0x4bc2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BC2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC2F0u;
            // 0x4bc2f4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc2f0) {
            ctx->pc = 0x4BC4D8u;
            goto label_4bc4d8;
        }
    }
    ctx->pc = 0x4BC2F8u;
label_4bc2f8:
    // 0x4bc2f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bc2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bc2fc:
    // 0x4bc2fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4bc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4bc300:
    // 0x4bc300: 0x8c6589f0  lw          $a1, -0x7610($v1)
    ctx->pc = 0x4bc300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4bc304:
    // 0x4bc304: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x4bc304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4bc308:
    // 0x4bc308: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x4bc308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_4bc30c:
    // 0x4bc30c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x4bc30cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_4bc310:
    // 0x4bc310: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x4bc310u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4bc314:
    // 0x4bc314: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x4bc314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_4bc318:
    // 0x4bc318: 0x90a90029  lbu         $t1, 0x29($a1)
    ctx->pc = 0x4bc318u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_4bc31c:
    // 0x4bc31c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x4bc31cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_4bc320:
    // 0x4bc320: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x4bc320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4bc324:
    // 0x4bc324: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bc324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bc328:
    // 0x4bc328: 0x24e7e7b0  addiu       $a3, $a3, -0x1850
    ctx->pc = 0x4bc328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961072));
label_4bc32c:
    // 0x4bc32c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4bc32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bc330:
    // 0x4bc330: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4bc330u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4bc334:
    // 0x4bc334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bc334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc338:
    // 0x4bc338: 0x2695021  addu        $t2, $s3, $t1
    ctx->pc = 0x4bc338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_4bc33c:
    // 0x4bc33c: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x4bc33cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_4bc340:
    // 0x4bc340: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x4bc340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4bc344:
    // 0x4bc344: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x4bc344u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_4bc348:
    // 0x4bc348: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x4bc348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4bc34c:
    // 0x4bc34c: 0xae490050  sw          $t1, 0x50($s2)
    ctx->pc = 0x4bc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 9));
label_4bc350:
    // 0x4bc350: 0x8cc689f0  lw          $a2, -0x7610($a2)
    ctx->pc = 0x4bc350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937072)));
label_4bc354:
    // 0x4bc354: 0x90c60029  lbu         $a2, 0x29($a2)
    ctx->pc = 0x4bc354u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
label_4bc358:
    // 0x4bc358: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4bc358u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4bc35c:
    // 0x4bc35c: 0x2664821  addu        $t1, $s3, $a2
    ctx->pc = 0x4bc35cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_4bc360:
    // 0x4bc360: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x4bc360u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4bc364:
    // 0x4bc364: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4bc364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4bc368:
    // 0x4bc368: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4bc368u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc36c:
    // 0x4bc36c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4bc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc370:
    // 0x4bc370: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x4bc370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_4bc374:
    // 0x4bc374: 0xae480064  sw          $t0, 0x64($s2)
    ctx->pc = 0x4bc374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 8));
label_4bc378:
    // 0x4bc378: 0xae480068  sw          $t0, 0x68($s2)
    ctx->pc = 0x4bc378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 8));
label_4bc37c:
    // 0x4bc37c: 0x8c6289f0  lw          $v0, -0x7610($v1)
    ctx->pc = 0x4bc37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4bc380:
    // 0x4bc380: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc384:
    // 0x4bc384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc388:
    // 0x4bc388: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4bc388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4bc38c:
    // 0x4bc38c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4bc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4bc390:
    // 0x4bc390: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bc390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bc394:
    // 0x4bc394: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc398:
    // 0x4bc398: 0xc0575cc  jal         func_15D730
label_4bc39c:
    if (ctx->pc == 0x4BC39Cu) {
        ctx->pc = 0x4BC39Cu;
            // 0x4bc39c: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BC3A0u;
        goto label_4bc3a0;
    }
    ctx->pc = 0x4BC398u;
    SET_GPR_U32(ctx, 31, 0x4BC3A0u);
    ctx->pc = 0x4BC39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC398u;
            // 0x4bc39c: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC3A0u; }
        if (ctx->pc != 0x4BC3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC3A0u; }
        if (ctx->pc != 0x4BC3A0u) { return; }
    }
    ctx->pc = 0x4BC3A0u;
label_4bc3a0:
    // 0x4bc3a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc3a4:
    // 0x4bc3a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4bc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4bc3a8:
    // 0x4bc3a8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4bc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4bc3ac:
    // 0x4bc3ac: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x4bc3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_4bc3b0:
    // 0x4bc3b0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4bc3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bc3b4:
    // 0x4bc3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4bc3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc3b8:
    // 0x4bc3b8: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc3b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc3bc:
    // 0x4bc3bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc3c0:
    // 0x4bc3c0: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x4bc3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4bc3c4:
    // 0x4bc3c4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x4bc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc3c8:
    // 0x4bc3c8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4bc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc3cc:
    // 0x4bc3cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc3d0:
    // 0x4bc3d0: 0xc0575cc  jal         func_15D730
label_4bc3d4:
    if (ctx->pc == 0x4BC3D4u) {
        ctx->pc = 0x4BC3D4u;
            // 0x4bc3d4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BC3D8u;
        goto label_4bc3d8;
    }
    ctx->pc = 0x4BC3D0u;
    SET_GPR_U32(ctx, 31, 0x4BC3D8u);
    ctx->pc = 0x4BC3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC3D0u;
            // 0x4bc3d4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC3D8u; }
        if (ctx->pc != 0x4BC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC3D8u; }
        if (ctx->pc != 0x4BC3D8u) { return; }
    }
    ctx->pc = 0x4BC3D8u;
label_4bc3d8:
    // 0x4bc3d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bc3dc:
    // 0x4bc3dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4bc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4bc3e0:
    // 0x4bc3e0: 0x8c6489f0  lw          $a0, -0x7610($v1)
    ctx->pc = 0x4bc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4bc3e4:
    // 0x4bc3e4: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x4bc3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_4bc3e8:
    // 0x4bc3e8: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x4bc3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_4bc3ec:
    // 0x4bc3ec: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x4bc3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_4bc3f0:
    // 0x4bc3f0: 0x24e7e7b0  addiu       $a3, $a3, -0x1850
    ctx->pc = 0x4bc3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961072));
label_4bc3f4:
    // 0x4bc3f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4bc3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bc3f8:
    // 0x4bc3f8: 0x90890029  lbu         $t1, 0x29($a0)
    ctx->pc = 0x4bc3f8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_4bc3fc:
    // 0x4bc3fc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x4bc3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4bc400:
    // 0x4bc400: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x4bc400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4bc404:
    // 0x4bc404: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bc404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bc408:
    // 0x4bc408: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4bc408u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4bc40c:
    // 0x4bc40c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4bc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bc410:
    // 0x4bc410: 0x2695021  addu        $t2, $s3, $t1
    ctx->pc = 0x4bc410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_4bc414:
    // 0x4bc414: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x4bc414u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_4bc418:
    // 0x4bc418: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x4bc418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4bc41c:
    // 0x4bc41c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x4bc41cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_4bc420:
    // 0x4bc420: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x4bc420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4bc424:
    // 0x4bc424: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x4bc424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_4bc428:
    // 0x4bc428: 0xae490058  sw          $t1, 0x58($s2)
    ctx->pc = 0x4bc428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 9));
label_4bc42c:
    // 0x4bc42c: 0x8cc689f0  lw          $a2, -0x7610($a2)
    ctx->pc = 0x4bc42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937072)));
label_4bc430:
    // 0x4bc430: 0x90c60029  lbu         $a2, 0x29($a2)
    ctx->pc = 0x4bc430u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
label_4bc434:
    // 0x4bc434: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4bc434u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4bc438:
    // 0x4bc438: 0x2664821  addu        $t1, $s3, $a2
    ctx->pc = 0x4bc438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_4bc43c:
    // 0x4bc43c: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x4bc43cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4bc440:
    // 0x4bc440: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4bc440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4bc444:
    // 0x4bc444: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4bc444u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc448:
    // 0x4bc448: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4bc448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc44c:
    // 0x4bc44c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4bc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4bc450:
    // 0x4bc450: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x4bc450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_4bc454:
    // 0x4bc454: 0xae48006c  sw          $t0, 0x6C($s2)
    ctx->pc = 0x4bc454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 8));
label_4bc458:
    // 0x4bc458: 0xae480070  sw          $t0, 0x70($s2)
    ctx->pc = 0x4bc458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 8));
label_4bc45c:
    // 0x4bc45c: 0x8c6289f0  lw          $v0, -0x7610($v1)
    ctx->pc = 0x4bc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4bc460:
    // 0x4bc460: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc460u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc464:
    // 0x4bc464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc468:
    // 0x4bc468: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4bc468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4bc46c:
    // 0x4bc46c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4bc46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4bc470:
    // 0x4bc470: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bc470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bc474:
    // 0x4bc474: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc478:
    // 0x4bc478: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bc478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4bc47c:
    // 0x4bc47c: 0xc0575cc  jal         func_15D730
label_4bc480:
    if (ctx->pc == 0x4BC480u) {
        ctx->pc = 0x4BC480u;
            // 0x4bc480: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x4BC484u;
        goto label_4bc484;
    }
    ctx->pc = 0x4BC47Cu;
    SET_GPR_U32(ctx, 31, 0x4BC484u);
    ctx->pc = 0x4BC480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC47Cu;
            // 0x4bc480: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC484u; }
        if (ctx->pc != 0x4BC484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC484u; }
        if (ctx->pc != 0x4BC484u) { return; }
    }
    ctx->pc = 0x4BC484u;
label_4bc484:
    // 0x4bc484: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc488:
    // 0x4bc488: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4bc488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4bc48c:
    // 0x4bc48c: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4bc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4bc490:
    // 0x4bc490: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x4bc490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_4bc494:
    // 0x4bc494: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4bc494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bc498:
    // 0x4bc498: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4bc498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bc49c:
    // 0x4bc49c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc49cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc4a0:
    // 0x4bc4a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc4a4:
    // 0x4bc4a4: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x4bc4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4bc4a8:
    // 0x4bc4a8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x4bc4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc4ac:
    // 0x4bc4ac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4bc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc4b0:
    // 0x4bc4b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc4b4:
    // 0x4bc4b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4bc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4bc4b8:
    // 0x4bc4b8: 0xc0575cc  jal         func_15D730
label_4bc4bc:
    if (ctx->pc == 0x4BC4BCu) {
        ctx->pc = 0x4BC4BCu;
            // 0x4bc4bc: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x4BC4C0u;
        goto label_4bc4c0;
    }
    ctx->pc = 0x4BC4B8u;
    SET_GPR_U32(ctx, 31, 0x4BC4C0u);
    ctx->pc = 0x4BC4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC4B8u;
            // 0x4bc4bc: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC4C0u; }
        if (ctx->pc != 0x4BC4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC4C0u; }
        if (ctx->pc != 0x4BC4C0u) { return; }
    }
    ctx->pc = 0x4BC4C0u;
label_4bc4c0:
    // 0x4bc4c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc4c4:
    // 0x4bc4c4: 0xa2220129  sb          $v0, 0x129($s1)
    ctx->pc = 0x4bc4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 297), (uint8_t)GPR_U32(ctx, 2));
label_4bc4c8:
    // 0x4bc4c8: 0xa220012a  sb          $zero, 0x12A($s1)
    ctx->pc = 0x4bc4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 298), (uint8_t)GPR_U32(ctx, 0));
label_4bc4cc:
    // 0x4bc4cc: 0xa222012b  sb          $v0, 0x12B($s1)
    ctx->pc = 0x4bc4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 299), (uint8_t)GPR_U32(ctx, 2));
label_4bc4d0:
    // 0x4bc4d0: 0x10000057  b           . + 4 + (0x57 << 2)
label_4bc4d4:
    if (ctx->pc == 0x4BC4D4u) {
        ctx->pc = 0x4BC4D4u;
            // 0x4bc4d4: 0xa220012c  sb          $zero, 0x12C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 300), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4BC4D8u;
        goto label_4bc4d8;
    }
    ctx->pc = 0x4BC4D0u;
    {
        const bool branch_taken_0x4bc4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC4D0u;
            // 0x4bc4d4: 0xa220012c  sb          $zero, 0x12C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 300), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc4d0) {
            ctx->pc = 0x4BC630u;
            goto label_4bc630;
        }
    }
    ctx->pc = 0x4BC4D8u;
label_4bc4d8:
    // 0x4bc4d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bc4dc:
    // 0x4bc4dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4bc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4bc4e0:
    // 0x4bc4e0: 0x8c6589f0  lw          $a1, -0x7610($v1)
    ctx->pc = 0x4bc4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4bc4e4:
    // 0x4bc4e4: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x4bc4e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_4bc4e8:
    // 0x4bc4e8: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x4bc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_4bc4ec:
    // 0x4bc4ec: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x4bc4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_4bc4f0:
    // 0x4bc4f0: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x4bc4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_4bc4f4:
    // 0x4bc4f4: 0x2508e7b0  addiu       $t0, $t0, -0x1850
    ctx->pc = 0x4bc4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961072));
label_4bc4f8:
    // 0x4bc4f8: 0x90aa0029  lbu         $t2, 0x29($a1)
    ctx->pc = 0x4bc4f8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
label_4bc4fc:
    // 0x4bc4fc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4bc4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4bc500:
    // 0x4bc500: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x4bc500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4bc504:
    // 0x4bc504: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4bc504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4bc508:
    // 0x4bc508: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bc508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bc50c:
    // 0x4bc50c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x4bc50cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_4bc510:
    // 0x4bc510: 0x444821  addu        $t1, $v0, $a0
    ctx->pc = 0x4bc510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4bc514:
    // 0x4bc514: 0x26a5821  addu        $t3, $s3, $t2
    ctx->pc = 0x4bc514u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
label_4bc518:
    // 0x4bc518: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4bc518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bc51c:
    // 0x4bc51c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x4bc51cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4bc520:
    // 0x4bc520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bc520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc524:
    // 0x4bc524: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4bc524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4bc528:
    // 0x4bc528: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x4bc528u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_4bc52c:
    // 0x4bc52c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x4bc52cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_4bc530:
    // 0x4bc530: 0xae4a0050  sw          $t2, 0x50($s2)
    ctx->pc = 0x4bc530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 10));
label_4bc534:
    // 0x4bc534: 0x8ce789f0  lw          $a3, -0x7610($a3)
    ctx->pc = 0x4bc534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294937072)));
label_4bc538:
    // 0x4bc538: 0x90e70029  lbu         $a3, 0x29($a3)
    ctx->pc = 0x4bc538u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 41)));
label_4bc53c:
    // 0x4bc53c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4bc53cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4bc540:
    // 0x4bc540: 0x2675021  addu        $t2, $s3, $a3
    ctx->pc = 0x4bc540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_4bc544:
    // 0x4bc544: 0xa3880  sll         $a3, $t2, 2
    ctx->pc = 0x4bc544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_4bc548:
    // 0x4bc548: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x4bc548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_4bc54c:
    // 0x4bc54c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x4bc54cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_4bc550:
    // 0x4bc550: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x4bc550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4bc554:
    // 0x4bc554: 0xae470054  sw          $a3, 0x54($s2)
    ctx->pc = 0x4bc554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 7));
label_4bc558:
    // 0x4bc558: 0x8cc689f0  lw          $a2, -0x7610($a2)
    ctx->pc = 0x4bc558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937072)));
label_4bc55c:
    // 0x4bc55c: 0x90c60029  lbu         $a2, 0x29($a2)
    ctx->pc = 0x4bc55cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 41)));
label_4bc560:
    // 0x4bc560: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4bc560u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4bc564:
    // 0x4bc564: 0x2663821  addu        $a3, $s3, $a2
    ctx->pc = 0x4bc564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_4bc568:
    // 0x4bc568: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4bc568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4bc56c:
    // 0x4bc56c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4bc56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4bc570:
    // 0x4bc570: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4bc570u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc574:
    // 0x4bc574: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4bc574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc578:
    // 0x4bc578: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x4bc578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_4bc57c:
    // 0x4bc57c: 0xae490064  sw          $t1, 0x64($s2)
    ctx->pc = 0x4bc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 9));
label_4bc580:
    // 0x4bc580: 0xae490068  sw          $t1, 0x68($s2)
    ctx->pc = 0x4bc580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 9));
label_4bc584:
    // 0x4bc584: 0xae49006c  sw          $t1, 0x6C($s2)
    ctx->pc = 0x4bc584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 9));
label_4bc588:
    // 0x4bc588: 0x8c6289f0  lw          $v0, -0x7610($v1)
    ctx->pc = 0x4bc588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_4bc58c:
    // 0x4bc58c: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc58cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc590:
    // 0x4bc590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc594:
    // 0x4bc594: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4bc594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4bc598:
    // 0x4bc598: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4bc598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4bc59c:
    // 0x4bc59c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bc5a0:
    // 0x4bc5a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc5a4:
    // 0x4bc5a4: 0xc0575cc  jal         func_15D730
label_4bc5a8:
    if (ctx->pc == 0x4BC5A8u) {
        ctx->pc = 0x4BC5A8u;
            // 0x4bc5a8: 0x1023021  addu        $a2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BC5ACu;
        goto label_4bc5ac;
    }
    ctx->pc = 0x4BC5A4u;
    SET_GPR_U32(ctx, 31, 0x4BC5ACu);
    ctx->pc = 0x4BC5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC5A4u;
            // 0x4bc5a8: 0x1023021  addu        $a2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC5ACu; }
        if (ctx->pc != 0x4BC5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC5ACu; }
        if (ctx->pc != 0x4BC5ACu) { return; }
    }
    ctx->pc = 0x4BC5ACu;
label_4bc5ac:
    // 0x4bc5ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc5b0:
    // 0x4bc5b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4bc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4bc5b4:
    // 0x4bc5b4: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4bc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4bc5b8:
    // 0x4bc5b8: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x4bc5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_4bc5bc:
    // 0x4bc5bc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4bc5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bc5c0:
    // 0x4bc5c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4bc5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc5c4:
    // 0x4bc5c4: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc5c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc5c8:
    // 0x4bc5c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc5cc:
    // 0x4bc5cc: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x4bc5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4bc5d0:
    // 0x4bc5d0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x4bc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc5d4:
    // 0x4bc5d4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4bc5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc5d8:
    // 0x4bc5d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc5dc:
    // 0x4bc5dc: 0xc0575cc  jal         func_15D730
label_4bc5e0:
    if (ctx->pc == 0x4BC5E0u) {
        ctx->pc = 0x4BC5E0u;
            // 0x4bc5e0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BC5E4u;
        goto label_4bc5e4;
    }
    ctx->pc = 0x4BC5DCu;
    SET_GPR_U32(ctx, 31, 0x4BC5E4u);
    ctx->pc = 0x4BC5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC5DCu;
            // 0x4bc5e0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC5E4u; }
        if (ctx->pc != 0x4BC5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC5E4u; }
        if (ctx->pc != 0x4BC5E4u) { return; }
    }
    ctx->pc = 0x4BC5E4u;
label_4bc5e4:
    // 0x4bc5e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc5e8:
    // 0x4bc5e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4bc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4bc5ec:
    // 0x4bc5ec: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4bc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4bc5f0:
    // 0x4bc5f0: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x4bc5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_4bc5f4:
    // 0x4bc5f4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4bc5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bc5f8:
    // 0x4bc5f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4bc5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bc5fc:
    // 0x4bc5fc: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc5fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc600:
    // 0x4bc600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc604:
    // 0x4bc604: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x4bc604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4bc608:
    // 0x4bc608: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x4bc608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc60c:
    // 0x4bc60c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4bc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc610:
    // 0x4bc610: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc614:
    // 0x4bc614: 0xc0575cc  jal         func_15D730
label_4bc618:
    if (ctx->pc == 0x4BC618u) {
        ctx->pc = 0x4BC618u;
            // 0x4bc618: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BC61Cu;
        goto label_4bc61c;
    }
    ctx->pc = 0x4BC614u;
    SET_GPR_U32(ctx, 31, 0x4BC61Cu);
    ctx->pc = 0x4BC618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC614u;
            // 0x4bc618: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC61Cu; }
        if (ctx->pc != 0x4BC61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC61Cu; }
        if (ctx->pc != 0x4BC61Cu) { return; }
    }
    ctx->pc = 0x4BC61Cu;
label_4bc61c:
    // 0x4bc61c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc620:
    // 0x4bc620: 0xa2220129  sb          $v0, 0x129($s1)
    ctx->pc = 0x4bc620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 297), (uint8_t)GPR_U32(ctx, 2));
label_4bc624:
    // 0x4bc624: 0xa220012a  sb          $zero, 0x12A($s1)
    ctx->pc = 0x4bc624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 298), (uint8_t)GPR_U32(ctx, 0));
label_4bc628:
    // 0x4bc628: 0xa220012b  sb          $zero, 0x12B($s1)
    ctx->pc = 0x4bc628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 299), (uint8_t)GPR_U32(ctx, 0));
label_4bc62c:
    // 0x4bc62c: 0xa220012c  sb          $zero, 0x12C($s1)
    ctx->pc = 0x4bc62cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 300), (uint8_t)GPR_U32(ctx, 0));
label_4bc630:
    // 0x4bc630: 0x8ea30cc4  lw          $v1, 0xCC4($s5)
    ctx->pc = 0x4bc630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3268)));
label_4bc634:
    // 0x4bc634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bc634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bc638:
    // 0x4bc638: 0xa243007a  sb          $v1, 0x7A($s2)
    ctx->pc = 0x4bc638u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 3));
label_4bc63c:
    // 0x4bc63c: 0x8ea50cc4  lw          $a1, 0xCC4($s5)
    ctx->pc = 0x4bc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3268)));
label_4bc640:
    // 0x4bc640: 0xc0a978c  jal         func_2A5E30
label_4bc644:
    if (ctx->pc == 0x4BC644u) {
        ctx->pc = 0x4BC644u;
            // 0x4bc644: 0x8c44e400  lw          $a0, -0x1C00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
        ctx->pc = 0x4BC648u;
        goto label_4bc648;
    }
    ctx->pc = 0x4BC640u;
    SET_GPR_U32(ctx, 31, 0x4BC648u);
    ctx->pc = 0x4BC644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC640u;
            // 0x4bc644: 0x8c44e400  lw          $a0, -0x1C00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5E30u;
    if (runtime->hasFunction(0x2A5E30u)) {
        auto targetFn = runtime->lookupFunction(0x2A5E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC648u; }
        if (ctx->pc != 0x4BC648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5E30_0x2a5e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC648u; }
        if (ctx->pc != 0x4BC648u) { return; }
    }
    ctx->pc = 0x4BC648u;
label_4bc648:
    // 0x4bc648: 0x8ea30cc4  lw          $v1, 0xCC4($s5)
    ctx->pc = 0x4bc648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3268)));
label_4bc64c:
    // 0x4bc64c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bc650:
    // 0x4bc650: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_4bc654:
    if (ctx->pc == 0x4BC654u) {
        ctx->pc = 0x4BC654u;
            // 0x4bc654: 0x24140058  addiu       $s4, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x4BC658u;
        goto label_4bc658;
    }
    ctx->pc = 0x4BC650u;
    {
        const bool branch_taken_0x4bc650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bc650) {
            ctx->pc = 0x4BC654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC650u;
            // 0x4bc654: 0x24140058  addiu       $s4, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BC67Cu;
            goto label_4bc67c;
        }
    }
    ctx->pc = 0x4BC658u;
label_4bc658:
    // 0x4bc658: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4bc658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4bc65c:
    // 0x4bc65c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_4bc660:
    if (ctx->pc == 0x4BC660u) {
        ctx->pc = 0x4BC660u;
            // 0x4bc660: 0x24140058  addiu       $s4, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x4BC664u;
        goto label_4bc664;
    }
    ctx->pc = 0x4BC65Cu;
    {
        const bool branch_taken_0x4bc65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bc65c) {
            ctx->pc = 0x4BC660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC65Cu;
            // 0x4bc660: 0x24140058  addiu       $s4, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BC67Cu;
            goto label_4bc67c;
        }
    }
    ctx->pc = 0x4BC664u;
label_4bc664:
    // 0x4bc664: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bc664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bc668:
    // 0x4bc668: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_4bc66c:
    if (ctx->pc == 0x4BC66Cu) {
        ctx->pc = 0x4BC66Cu;
            // 0x4bc66c: 0x24140056  addiu       $s4, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->pc = 0x4BC670u;
        goto label_4bc670;
    }
    ctx->pc = 0x4BC668u;
    {
        const bool branch_taken_0x4bc668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bc668) {
            ctx->pc = 0x4BC66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC668u;
            // 0x4bc66c: 0x24140056  addiu       $s4, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BC67Cu;
            goto label_4bc67c;
        }
    }
    ctx->pc = 0x4BC670u;
label_4bc670:
    // 0x4bc670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bc670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc674:
    // 0x4bc674: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_4bc678:
    if (ctx->pc == 0x4BC678u) {
        ctx->pc = 0x4BC678u;
            // 0x4bc678: 0x24140024  addiu       $s4, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x4BC67Cu;
        goto label_4bc67c;
    }
    ctx->pc = 0x4BC674u;
    {
        const bool branch_taken_0x4bc674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bc674) {
            ctx->pc = 0x4BC678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC674u;
            // 0x4bc678: 0x24140024  addiu       $s4, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BC67Cu;
            goto label_4bc67c;
        }
    }
    ctx->pc = 0x4BC67Cu;
label_4bc67c:
    // 0x4bc67c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bc67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc680:
    // 0x4bc680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4bc680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc684:
    // 0x4bc684: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4bc684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4bc688:
    // 0x4bc688: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc68c:
    // 0x4bc68c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4bc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4bc690:
    // 0x4bc690: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4bc690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4bc694:
    // 0x4bc694: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4bc694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4bc698:
    // 0x4bc698: 0x8c52003c  lw          $s2, 0x3C($v0)
    ctx->pc = 0x4bc698u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4bc69c:
    // 0x4bc69c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x4bc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4bc6a0:
    // 0x4bc6a0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4bc6a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bc6a4:
    // 0x4bc6a4: 0xc0a9598  jal         func_2A5660
label_4bc6a8:
    if (ctx->pc == 0x4BC6A8u) {
        ctx->pc = 0x4BC6A8u;
            // 0x4bc6a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC6ACu;
        goto label_4bc6ac;
    }
    ctx->pc = 0x4BC6A4u;
    SET_GPR_U32(ctx, 31, 0x4BC6ACu);
    ctx->pc = 0x4BC6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC6A4u;
            // 0x4bc6a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5660u;
    if (runtime->hasFunction(0x2A5660u)) {
        auto targetFn = runtime->lookupFunction(0x2A5660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC6ACu; }
        if (ctx->pc != 0x4BC6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5660_0x2a5660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC6ACu; }
        if (ctx->pc != 0x4BC6ACu) { return; }
    }
    ctx->pc = 0x4BC6ACu;
label_4bc6ac:
    // 0x4bc6ac: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x4bc6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bc6b0:
    // 0x4bc6b0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x4bc6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bc6b4:
    // 0x4bc6b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4bc6b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4bc6b8:
    // 0x4bc6b8: 0xe6600198  swc1        $f0, 0x198($s3)
    ctx->pc = 0x4bc6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 408), bits); }
label_4bc6bc:
    // 0x4bc6bc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4bc6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4bc6c0:
    // 0x4bc6c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4bc6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4bc6c4:
    // 0x4bc6c4: 0x320f809  jalr        $t9
label_4bc6c8:
    if (ctx->pc == 0x4BC6C8u) {
        ctx->pc = 0x4BC6C8u;
            // 0x4bc6c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC6CCu;
        goto label_4bc6cc;
    }
    ctx->pc = 0x4BC6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC6CCu);
        ctx->pc = 0x4BC6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC6C4u;
            // 0x4bc6c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC6CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC6CCu; }
            if (ctx->pc != 0x4BC6CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4BC6CCu;
label_4bc6cc:
    // 0x4bc6cc: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x4bc6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_4bc6d0:
    // 0x4bc6d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bc6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bc6d4:
    // 0x4bc6d4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4bc6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_4bc6d8:
    // 0x4bc6d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4bc6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4bc6dc:
    // 0x4bc6dc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4bc6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_4bc6e0:
    // 0x4bc6e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4bc6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bc6e4:
    // 0x4bc6e4: 0xa0400566  sb          $zero, 0x566($v0)
    ctx->pc = 0x4bc6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1382), (uint8_t)GPR_U32(ctx, 0));
label_4bc6e8:
    // 0x4bc6e8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4bc6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bc6ec:
    // 0x4bc6ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4bc6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4bc6f0:
    // 0x4bc6f0: 0x320f809  jalr        $t9
label_4bc6f4:
    if (ctx->pc == 0x4BC6F4u) {
        ctx->pc = 0x4BC6F4u;
            // 0x4bc6f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC6F8u;
        goto label_4bc6f8;
    }
    ctx->pc = 0x4BC6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC6F8u);
        ctx->pc = 0x4BC6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC6F0u;
            // 0x4bc6f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC6F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC6F8u; }
            if (ctx->pc != 0x4BC6F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4BC6F8u;
label_4bc6f8:
    // 0x4bc6f8: 0xc0a950c  jal         func_2A5430
label_4bc6fc:
    if (ctx->pc == 0x4BC6FCu) {
        ctx->pc = 0x4BC6FCu;
            // 0x4bc6fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC700u;
        goto label_4bc700;
    }
    ctx->pc = 0x4BC6F8u;
    SET_GPR_U32(ctx, 31, 0x4BC700u);
    ctx->pc = 0x4BC6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC6F8u;
            // 0x4bc6fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5430u;
    if (runtime->hasFunction(0x2A5430u)) {
        auto targetFn = runtime->lookupFunction(0x2A5430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC700u; }
        if (ctx->pc != 0x4BC700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5430_0x2a5430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC700u; }
        if (ctx->pc != 0x4BC700u) { return; }
    }
    ctx->pc = 0x4BC700u;
label_4bc700:
    // 0x4bc700: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x4bc700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_4bc704:
    // 0x4bc704: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4bc704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4bc708:
    // 0x4bc708: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4bc708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4bc70c:
    // 0x4bc70c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_4bc710:
    if (ctx->pc == 0x4BC710u) {
        ctx->pc = 0x4BC710u;
            // 0x4bc710: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4BC714u;
        goto label_4bc714;
    }
    ctx->pc = 0x4BC70Cu;
    {
        const bool branch_taken_0x4bc70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC70Cu;
            // 0x4bc710: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc70c) {
            ctx->pc = 0x4BC684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc684;
        }
    }
    ctx->pc = 0x4BC714u;
label_4bc714:
    // 0x4bc714: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x4bc714u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_4bc718:
    // 0x4bc718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bc718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc71c:
    // 0x4bc71c: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x4bc71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_4bc720:
    // 0x4bc720: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4bc720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4bc724:
    // 0x4bc724: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x4bc724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_4bc728:
    // 0x4bc728: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x4bc728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4bc72c:
    // 0x4bc72c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4bc72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4bc730:
    // 0x4bc730: 0x320f809  jalr        $t9
label_4bc734:
    if (ctx->pc == 0x4BC734u) {
        ctx->pc = 0x4BC738u;
        goto label_4bc738;
    }
    ctx->pc = 0x4BC730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC738u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC738u; }
            if (ctx->pc != 0x4BC738u) { return; }
        }
        }
    }
    ctx->pc = 0x4BC738u;
label_4bc738:
    // 0x4bc738: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x4bc738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_4bc73c:
    // 0x4bc73c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4bc73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4bc740:
    // 0x4bc740: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x4bc740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4bc744:
    // 0x4bc744: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_4bc748:
    if (ctx->pc == 0x4BC748u) {
        ctx->pc = 0x4BC748u;
            // 0x4bc748: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4BC74Cu;
        goto label_4bc74c;
    }
    ctx->pc = 0x4BC744u;
    {
        const bool branch_taken_0x4bc744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC744u;
            // 0x4bc748: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc744) {
            ctx->pc = 0x4BC720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc720;
        }
    }
    ctx->pc = 0x4BC74Cu;
label_4bc74c:
    // 0x4bc74c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bc750:
    // 0x4bc750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bc750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc754:
    // 0x4bc754: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4bc754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4bc758:
    // 0x4bc758: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x4bc758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
label_4bc75c:
    // 0x4bc75c: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x4bc75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
label_4bc760:
    // 0x4bc760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bc760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bc764:
    // 0x4bc764: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4bc764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4bc768:
    // 0x4bc768: 0x320f809  jalr        $t9
label_4bc76c:
    if (ctx->pc == 0x4BC76Cu) {
        ctx->pc = 0x4BC770u;
        goto label_4bc770;
    }
    ctx->pc = 0x4BC768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC770u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC770u; }
            if (ctx->pc != 0x4BC770u) { return; }
        }
        }
    }
    ctx->pc = 0x4BC770u;
label_4bc770:
    // 0x4bc770: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4bc774:
    if (ctx->pc == 0x4BC774u) {
        ctx->pc = 0x4BC774u;
            // 0x4bc774: 0x8ea30cf4  lw          $v1, 0xCF4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
        ctx->pc = 0x4BC778u;
        goto label_4bc778;
    }
    ctx->pc = 0x4BC770u;
    {
        const bool branch_taken_0x4bc770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc770) {
            ctx->pc = 0x4BC774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC770u;
            // 0x4bc774: 0x8ea30cf4  lw          $v1, 0xCF4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BC790u;
            goto label_4bc790;
        }
    }
    ctx->pc = 0x4BC778u;
label_4bc778:
    // 0x4bc778: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bc778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bc77c:
    // 0x4bc77c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc780:
    // 0x4bc780: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x4bc780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4bc784:
    // 0x4bc784: 0xac400474  sw          $zero, 0x474($v0)
    ctx->pc = 0x4bc784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1140), GPR_U32(ctx, 0));
label_4bc788:
    // 0x4bc788: 0xac430484  sw          $v1, 0x484($v0)
    ctx->pc = 0x4bc788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 3));
label_4bc78c:
    // 0x4bc78c: 0x8ea30cf4  lw          $v1, 0xCF4($s5)
    ctx->pc = 0x4bc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_4bc790:
    // 0x4bc790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bc794:
    // 0x4bc794: 0x8eb30780  lw          $s3, 0x780($s5)
    ctx->pc = 0x4bc794u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_4bc798:
    // 0x4bc798: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_4bc79c:
    if (ctx->pc == 0x4BC79Cu) {
        ctx->pc = 0x4BC79Cu;
            // 0x4bc79c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC7A0u;
        goto label_4bc7a0;
    }
    ctx->pc = 0x4BC798u;
    {
        const bool branch_taken_0x4bc798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BC79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC798u;
            // 0x4bc79c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc798) {
            ctx->pc = 0x4BC7A4u;
            goto label_4bc7a4;
        }
    }
    ctx->pc = 0x4BC7A0u;
label_4bc7a0:
    // 0x4bc7a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4bc7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bc7a4:
    // 0x4bc7a4: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x4bc7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_4bc7a8:
    // 0x4bc7a8: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x4bc7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_4bc7ac:
    // 0x4bc7ac: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4bc7acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4bc7b0:
    // 0x4bc7b0: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x4bc7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4bc7b4:
    // 0x4bc7b4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4bc7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4bc7b8:
    // 0x4bc7b8: 0x8e300e38  lw          $s0, 0xE38($s1)
    ctx->pc = 0x4bc7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_4bc7bc:
    // 0x4bc7bc: 0x320f809  jalr        $t9
label_4bc7c0:
    if (ctx->pc == 0x4BC7C0u) {
        ctx->pc = 0x4BC7C0u;
            // 0x4bc7c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BC7C4u;
        goto label_4bc7c4;
    }
    ctx->pc = 0x4BC7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BC7C4u);
        ctx->pc = 0x4BC7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC7BCu;
            // 0x4bc7c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BC7C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BC7C4u; }
            if (ctx->pc != 0x4BC7C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4BC7C4u;
label_4bc7c4:
    // 0x4bc7c4: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4bc7c4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
label_4bc7c8:
    // 0x4bc7c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bc7cc:
    // 0x4bc7cc: 0x0  nop
    ctx->pc = 0x4bc7ccu;
    // NOP
label_4bc7d0:
    // 0x4bc7d0: 0x1812  mflo        $v1
    ctx->pc = 0x4bc7d0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4bc7d4:
    // 0x4bc7d4: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_4bc7d8:
    if (ctx->pc == 0x4BC7D8u) {
        ctx->pc = 0x4BC7DCu;
        goto label_4bc7dc;
    }
    ctx->pc = 0x4BC7D4u;
    {
        const bool branch_taken_0x4bc7d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bc7d4) {
            ctx->pc = 0x4BC7E0u;
            goto label_4bc7e0;
        }
    }
    ctx->pc = 0x4BC7DCu;
label_4bc7dc:
    // 0x4bc7dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bc7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc7e0:
    // 0x4bc7e0: 0x12930003  beq         $s4, $s3, . + 4 + (0x3 << 2)
label_4bc7e4:
    if (ctx->pc == 0x4BC7E4u) {
        ctx->pc = 0x4BC7E8u;
        goto label_4bc7e8;
    }
    ctx->pc = 0x4BC7E0u;
    {
        const bool branch_taken_0x4bc7e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        if (branch_taken_0x4bc7e0) {
            ctx->pc = 0x4BC7F0u;
            goto label_4bc7f0;
        }
    }
    ctx->pc = 0x4BC7E8u;
label_4bc7e8:
    // 0x4bc7e8: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_4bc7ec:
    if (ctx->pc == 0x4BC7ECu) {
        ctx->pc = 0x4BC7F0u;
        goto label_4bc7f0;
    }
    ctx->pc = 0x4BC7E8u;
    {
        const bool branch_taken_0x4bc7e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bc7e8) {
            ctx->pc = 0x4BC800u;
            goto label_4bc800;
        }
    }
    ctx->pc = 0x4BC7F0u;
label_4bc7f0:
    // 0x4bc7f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc7f4:
    // 0x4bc7f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4bc7f8:
    if (ctx->pc == 0x4BC7F8u) {
        ctx->pc = 0x4BC7F8u;
            // 0x4bc7f8: 0xa22211a1  sb          $v0, 0x11A1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4513), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4BC7FCu;
        goto label_4bc7fc;
    }
    ctx->pc = 0x4BC7F4u;
    {
        const bool branch_taken_0x4bc7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC7F4u;
            // 0x4bc7f8: 0xa22211a1  sb          $v0, 0x11A1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4513), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc7f4) {
            ctx->pc = 0x4BC808u;
            goto label_4bc808;
        }
    }
    ctx->pc = 0x4BC7FCu;
label_4bc7fc:
    // 0x4bc7fc: 0x0  nop
    ctx->pc = 0x4bc7fcu;
    // NOP
label_4bc800:
    // 0x4bc800: 0xa22011a1  sb          $zero, 0x11A1($s1)
    ctx->pc = 0x4bc800u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4513), (uint8_t)GPR_U32(ctx, 0));
label_4bc804:
    // 0x4bc804: 0x0  nop
    ctx->pc = 0x4bc804u;
    // NOP
label_4bc808:
    // 0x4bc808: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bc808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bc80c:
    // 0x4bc80c: 0x12020002  beq         $s0, $v0, . + 4 + (0x2 << 2)
label_4bc810:
    if (ctx->pc == 0x4BC810u) {
        ctx->pc = 0x4BC814u;
        goto label_4bc814;
    }
    ctx->pc = 0x4BC80Cu;
    {
        const bool branch_taken_0x4bc80c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bc80c) {
            ctx->pc = 0x4BC818u;
            goto label_4bc818;
        }
    }
    ctx->pc = 0x4BC814u;
label_4bc814:
    // 0x4bc814: 0xa22311ab  sb          $v1, 0x11AB($s1)
    ctx->pc = 0x4bc814u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4523), (uint8_t)GPR_U32(ctx, 3));
label_4bc818:
    // 0x4bc818: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x4bc818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4bc81c:
    // 0x4bc81c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4bc81cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4bc820:
    // 0x4bc820: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x4bc820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4bc824:
    // 0x4bc824: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_4bc828:
    if (ctx->pc == 0x4BC828u) {
        ctx->pc = 0x4BC828u;
            // 0x4bc828: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4BC82Cu;
        goto label_4bc82c;
    }
    ctx->pc = 0x4BC824u;
    {
        const bool branch_taken_0x4bc824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC824u;
            // 0x4bc828: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc824) {
            ctx->pc = 0x4BC7ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc7ac;
        }
    }
    ctx->pc = 0x4BC82Cu;
label_4bc82c:
    // 0x4bc82c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bc82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc830:
    // 0x4bc830: 0x26b00054  addiu       $s0, $s5, 0x54
    ctx->pc = 0x4bc830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_4bc834:
    // 0x4bc834: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bc834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bc838:
    // 0x4bc838: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x4bc838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_4bc83c:
    // 0x4bc83c: 0x8c423e58  lw          $v0, 0x3E58($v0)
    ctx->pc = 0x4bc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
label_4bc840:
    // 0x4bc840: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4bc840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bc844:
    // 0x4bc844: 0xc0d1548  jal         func_345520
label_4bc848:
    if (ctx->pc == 0x4BC848u) {
        ctx->pc = 0x4BC848u;
            // 0x4bc848: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4BC84Cu;
        goto label_4bc84c;
    }
    ctx->pc = 0x4BC844u;
    SET_GPR_U32(ctx, 31, 0x4BC84Cu);
    ctx->pc = 0x4BC848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC844u;
            // 0x4bc848: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345520u;
    if (runtime->hasFunction(0x345520u)) {
        auto targetFn = runtime->lookupFunction(0x345520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC84Cu; }
        if (ctx->pc != 0x4BC84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345520_0x345520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BC84Cu; }
        if (ctx->pc != 0x4BC84Cu) { return; }
    }
    ctx->pc = 0x4BC84Cu;
label_4bc84c:
    // 0x4bc84c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4bc84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4bc850:
    // 0x4bc850: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x4bc850u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4bc854:
    // 0x4bc854: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_4bc858:
    if (ctx->pc == 0x4BC858u) {
        ctx->pc = 0x4BC858u;
            // 0x4bc858: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x4BC85Cu;
        goto label_4bc85c;
    }
    ctx->pc = 0x4BC854u;
    {
        const bool branch_taken_0x4bc854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC854u;
            // 0x4bc858: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc854) {
            ctx->pc = 0x4BC834u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc834;
        }
    }
    ctx->pc = 0x4BC85Cu;
label_4bc85c:
    // 0x4bc85c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bc85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc860:
    // 0x4bc860: 0xa2a30c75  sb          $v1, 0xC75($s5)
    ctx->pc = 0x4bc860u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3189), (uint8_t)GPR_U32(ctx, 3));
label_4bc864:
    // 0x4bc864: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4bc864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4bc868:
    // 0x4bc868: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bc868u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bc86c:
    // 0x4bc86c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bc86cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bc870:
    // 0x4bc870: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bc870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bc874:
    // 0x4bc874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bc874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bc878:
    // 0x4bc878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bc878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bc87c:
    // 0x4bc87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bc87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bc880:
    // 0x4bc880: 0x3e00008  jr          $ra
label_4bc884:
    if (ctx->pc == 0x4BC884u) {
        ctx->pc = 0x4BC884u;
            // 0x4bc884: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4BC888u;
        goto label_4bc888;
    }
    ctx->pc = 0x4BC880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC880u;
            // 0x4bc884: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BC888u;
label_4bc888:
    // 0x4bc888: 0x0  nop
    ctx->pc = 0x4bc888u;
    // NOP
label_4bc88c:
    // 0x4bc88c: 0x0  nop
    ctx->pc = 0x4bc88cu;
    // NOP
label_4bc890:
    // 0x4bc890: 0x3c0800af  lui         $t0, 0xAF
    ctx->pc = 0x4bc890u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)175 << 16));
label_4bc894:
    // 0x4bc894: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4bc894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc898:
    // 0x4bc898: 0x25080e80  addiu       $t0, $t0, 0xE80
    ctx->pc = 0x4bc898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3712));
label_4bc89c:
    // 0x4bc89c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4bc89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bc8a0:
    // 0x4bc8a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4bc8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bc8a4:
    // 0x4bc8a4: 0x8c830cf4  lw          $v1, 0xCF4($a0)
    ctx->pc = 0x4bc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3316)));
label_4bc8a8:
    // 0x4bc8a8: 0x1066000d  beq         $v1, $a2, . + 4 + (0xD << 2)
label_4bc8ac:
    if (ctx->pc == 0x4BC8ACu) {
        ctx->pc = 0x4BC8ACu;
            // 0x4bc8ac: 0x8d070004  lw          $a3, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->pc = 0x4BC8B0u;
        goto label_4bc8b0;
    }
    ctx->pc = 0x4BC8A8u;
    {
        const bool branch_taken_0x4bc8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4BC8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC8A8u;
            // 0x4bc8ac: 0x8d070004  lw          $a3, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8a8) {
            ctx->pc = 0x4BC8E0u;
            goto label_4bc8e0;
        }
    }
    ctx->pc = 0x4BC8B0u;
label_4bc8b0:
    // 0x4bc8b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4bc8b4:
    if (ctx->pc == 0x4BC8B4u) {
        ctx->pc = 0x4BC8B8u;
        goto label_4bc8b8;
    }
    ctx->pc = 0x4BC8B0u;
    {
        const bool branch_taken_0x4bc8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc8b0) {
            ctx->pc = 0x4BC8C8u;
            goto label_4bc8c8;
        }
    }
    ctx->pc = 0x4BC8B8u;
label_4bc8b8:
    // 0x4bc8b8: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_4bc8bc:
    if (ctx->pc == 0x4BC8BCu) {
        ctx->pc = 0x4BC8C0u;
        goto label_4bc8c0;
    }
    ctx->pc = 0x4BC8B8u;
    {
        const bool branch_taken_0x4bc8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4bc8b8) {
            ctx->pc = 0x4BC8C8u;
            goto label_4bc8c8;
        }
    }
    ctx->pc = 0x4BC8C0u;
label_4bc8c0:
    // 0x4bc8c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_4bc8c4:
    if (ctx->pc == 0x4BC8C4u) {
        ctx->pc = 0x4BC8C8u;
        goto label_4bc8c8;
    }
    ctx->pc = 0x4BC8C0u;
    {
        const bool branch_taken_0x4bc8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc8c0) {
            ctx->pc = 0x4BC8F8u;
            goto label_4bc8f8;
        }
    }
    ctx->pc = 0x4BC8C8u;
label_4bc8c8:
    // 0x4bc8c8: 0x8c830780  lw          $v1, 0x780($a0)
    ctx->pc = 0x4bc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_4bc8cc:
    // 0x4bc8cc: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x4bc8ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4bc8d0:
    // 0x4bc8d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_4bc8d4:
    if (ctx->pc == 0x4BC8D4u) {
        ctx->pc = 0x4BC8D8u;
        goto label_4bc8d8;
    }
    ctx->pc = 0x4BC8D0u;
    {
        const bool branch_taken_0x4bc8d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc8d0) {
            ctx->pc = 0x4BC8F8u;
            goto label_4bc8f8;
        }
    }
    ctx->pc = 0x4BC8D8u;
label_4bc8d8:
    // 0x4bc8d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4bc8dc:
    if (ctx->pc == 0x4BC8DCu) {
        ctx->pc = 0x4BC8DCu;
            // 0x4bc8dc: 0xa0e511a1  sb          $a1, 0x11A1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4513), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4BC8E0u;
        goto label_4bc8e0;
    }
    ctx->pc = 0x4BC8D8u;
    {
        const bool branch_taken_0x4bc8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC8D8u;
            // 0x4bc8dc: 0xa0e511a1  sb          $a1, 0x11A1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4513), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8d8) {
            ctx->pc = 0x4BC8F8u;
            goto label_4bc8f8;
        }
    }
    ctx->pc = 0x4BC8E0u;
label_4bc8e0:
    // 0x4bc8e0: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_4bc8e4:
    if (ctx->pc == 0x4BC8E4u) {
        ctx->pc = 0x4BC8E8u;
        goto label_4bc8e8;
    }
    ctx->pc = 0x4BC8E0u;
    {
        const bool branch_taken_0x4bc8e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc8e0) {
            ctx->pc = 0x4BC8F0u;
            goto label_4bc8f0;
        }
    }
    ctx->pc = 0x4BC8E8u;
label_4bc8e8:
    // 0x4bc8e8: 0x15260003  bne         $t1, $a2, . + 4 + (0x3 << 2)
label_4bc8ec:
    if (ctx->pc == 0x4BC8ECu) {
        ctx->pc = 0x4BC8F0u;
        goto label_4bc8f0;
    }
    ctx->pc = 0x4BC8E8u;
    {
        const bool branch_taken_0x4bc8e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        if (branch_taken_0x4bc8e8) {
            ctx->pc = 0x4BC8F8u;
            goto label_4bc8f8;
        }
    }
    ctx->pc = 0x4BC8F0u;
label_4bc8f0:
    // 0x4bc8f0: 0xa0e511a1  sb          $a1, 0x11A1($a3)
    ctx->pc = 0x4bc8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4513), (uint8_t)GPR_U32(ctx, 5));
label_4bc8f4:
    // 0x4bc8f4: 0x0  nop
    ctx->pc = 0x4bc8f4u;
    // NOP
label_4bc8f8:
    // 0x4bc8f8: 0x8c83077c  lw          $v1, 0x77C($a0)
    ctx->pc = 0x4bc8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_4bc8fc:
    // 0x4bc8fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4bc8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4bc900:
    // 0x4bc900: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x4bc900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4bc904:
    // 0x4bc904: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_4bc908:
    if (ctx->pc == 0x4BC908u) {
        ctx->pc = 0x4BC908u;
            // 0x4bc908: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x4BC90Cu;
        goto label_4bc90c;
    }
    ctx->pc = 0x4BC904u;
    {
        const bool branch_taken_0x4bc904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC904u;
            // 0x4bc908: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc904) {
            ctx->pc = 0x4BC8A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc8a4;
        }
    }
    ctx->pc = 0x4BC90Cu;
label_4bc90c:
    // 0x4bc90c: 0x3e00008  jr          $ra
label_4bc910:
    if (ctx->pc == 0x4BC910u) {
        ctx->pc = 0x4BC914u;
        goto label_4bc914;
    }
    ctx->pc = 0x4BC90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BC914u;
label_4bc914:
    // 0x4bc914: 0x0  nop
    ctx->pc = 0x4bc914u;
    // NOP
label_4bc918:
    // 0x4bc918: 0x0  nop
    ctx->pc = 0x4bc918u;
    // NOP
label_4bc91c:
    // 0x4bc91c: 0x0  nop
    ctx->pc = 0x4bc91cu;
    // NOP
label_4bc920:
    // 0x4bc920: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4bc920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4bc924:
    // 0x4bc924: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4bc924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4bc928:
    // 0x4bc928: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4bc928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4bc92c:
    // 0x4bc92c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bc930:
    // 0x4bc930: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4bc930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4bc934:
    // 0x4bc934: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4bc934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4bc938:
    // 0x4bc938: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bc938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bc93c:
    // 0x4bc93c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bc93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bc940:
    // 0x4bc940: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bc940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bc944:
    // 0x4bc944: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4bc944u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bc948:
    // 0x4bc948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bc948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bc94c:
    // 0x4bc94c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4bc94cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc950:
    // 0x4bc950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bc950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bc954:
    // 0x4bc954: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4bc954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc958:
    // 0x4bc958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bc958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bc95c:
    // 0x4bc95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bc95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bc960:
    // 0x4bc960: 0x8c840780  lw          $a0, 0x780($a0)
    ctx->pc = 0x4bc960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
label_4bc964:
    // 0x4bc964: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4bc964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bc968:
    // 0x4bc968: 0x8c778a08  lw          $s7, -0x75F8($v1)
    ctx->pc = 0x4bc968u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4bc96c:
    // 0x4bc96c: 0x8c5ed130  lw          $fp, -0x2ED0($v0)
    ctx->pc = 0x4bc96cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4bc970:
    // 0x4bc970: 0x2496ffff  addiu       $s6, $a0, -0x1
    ctx->pc = 0x4bc970u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4bc974:
    // 0x4bc974: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x4bc974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_4bc978:
    // 0x4bc978: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x4bc978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4bc97c:
    // 0x4bc97c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4bc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4bc980:
    // 0x4bc980: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x4bc980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_4bc984:
    // 0x4bc984: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x4bc984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
label_4bc988:
    // 0x4bc988: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4bc988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4bc98c:
    // 0x4bc98c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x4bc98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bc990:
    // 0x4bc990: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc994:
    // 0x4bc994: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x4bc994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_4bc998:
    // 0x4bc998: 0x8c4789f0  lw          $a3, -0x7610($v0)
    ctx->pc = 0x4bc998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4bc99c:
    // 0x4bc99c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4bc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_4bc9a0:
    // 0x4bc9a0: 0x24c6eb70  addiu       $a2, $a2, -0x1490
    ctx->pc = 0x4bc9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962032));
label_4bc9a4:
    // 0x4bc9a4: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x4bc9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_4bc9a8:
    // 0x4bc9a8: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x4bc9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_4bc9ac:
    // 0x4bc9ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4bc9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4bc9b0:
    // 0x4bc9b0: 0x90e70029  lbu         $a3, 0x29($a3)
    ctx->pc = 0x4bc9b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 41)));
label_4bc9b4:
    // 0x4bc9b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bc9b8:
    // 0x4bc9b8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4bc9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4bc9bc:
    // 0x4bc9bc: 0x2c74021  addu        $t0, $s6, $a3
    ctx->pc = 0x4bc9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
label_4bc9c0:
    // 0x4bc9c0: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x4bc9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4bc9c4:
    // 0x4bc9c4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4bc9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4bc9c8:
    // 0x4bc9c8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x4bc9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_4bc9cc:
    // 0x4bc9cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4bc9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4bc9d0:
    // 0x4bc9d0: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x4bc9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_4bc9d4:
    // 0x4bc9d4: 0xae460050  sw          $a2, 0x50($s2)
    ctx->pc = 0x4bc9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 6));
label_4bc9d8:
    // 0x4bc9d8: 0xae510064  sw          $s1, 0x64($s2)
    ctx->pc = 0x4bc9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 17));
label_4bc9dc:
    // 0x4bc9dc: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4bc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4bc9e0:
    // 0x4bc9e0: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4bc9e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4bc9e4:
    // 0x4bc9e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bc9e8:
    // 0x4bc9e8: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x4bc9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_4bc9ec:
    // 0x4bc9ec: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x4bc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4bc9f0:
    // 0x4bc9f0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4bc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4bc9f4:
    // 0x4bc9f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4bc9f8:
    // 0x4bc9f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4bc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4bc9fc:
    // 0x4bc9fc: 0xc0575cc  jal         func_15D730
label_4bca00:
    if (ctx->pc == 0x4BCA00u) {
        ctx->pc = 0x4BCA00u;
            // 0x4bca00: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x4BCA04u;
        goto label_4bca04;
    }
    ctx->pc = 0x4BC9FCu;
    SET_GPR_U32(ctx, 31, 0x4BCA04u);
    ctx->pc = 0x4BCA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BC9FCu;
            // 0x4bca00: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCA04u; }
        if (ctx->pc != 0x4BCA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCA04u; }
        if (ctx->pc != 0x4BCA04u) { return; }
    }
    ctx->pc = 0x4BCA04u;
label_4bca04:
    // 0x4bca04: 0x3d41021  addu        $v0, $fp, $s4
    ctx->pc = 0x4bca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
label_4bca08:
    // 0x4bca08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bca08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bca0c:
    // 0x4bca0c: 0xa0430129  sb          $v1, 0x129($v0)
    ctx->pc = 0x4bca0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 297), (uint8_t)GPR_U32(ctx, 3));
label_4bca10:
    // 0x4bca10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4bca10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4bca14:
    // 0x4bca14: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x4bca14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4bca18:
    // 0x4bca18: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x4bca18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4bca1c:
    // 0x4bca1c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4bca1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4bca20:
    // 0x4bca20: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4bca20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4bca24:
    // 0x4bca24: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_4bca28:
    if (ctx->pc == 0x4BCA28u) {
        ctx->pc = 0x4BCA28u;
            // 0x4bca28: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x4BCA2Cu;
        goto label_4bca2c;
    }
    ctx->pc = 0x4BCA24u;
    {
        const bool branch_taken_0x4bca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCA24u;
            // 0x4bca28: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bca24) {
            ctx->pc = 0x4BC990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bc990;
        }
    }
    ctx->pc = 0x4BCA2Cu;
label_4bca2c:
    // 0x4bca2c: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x4bca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_4bca30:
    // 0x4bca30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bca34:
    // 0x4bca34: 0xa2e2007a  sb          $v0, 0x7A($s7)
    ctx->pc = 0x4bca34u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 122), (uint8_t)GPR_U32(ctx, 2));
label_4bca38:
    // 0x4bca38: 0xc0cbfdc  jal         func_32FF70
label_4bca3c:
    if (ctx->pc == 0x4BCA3Cu) {
        ctx->pc = 0x4BCA3Cu;
            // 0x4bca3c: 0xa2e2007b  sb          $v0, 0x7B($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 123), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4BCA40u;
        goto label_4bca40;
    }
    ctx->pc = 0x4BCA38u;
    SET_GPR_U32(ctx, 31, 0x4BCA40u);
    ctx->pc = 0x4BCA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCA38u;
            // 0x4bca3c: 0xa2e2007b  sb          $v0, 0x7B($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 123), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCA40u; }
        if (ctx->pc != 0x4BCA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCA40u; }
        if (ctx->pc != 0x4BCA40u) { return; }
    }
    ctx->pc = 0x4BCA40u;
label_4bca40:
    // 0x4bca40: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x4bca40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_4bca44:
    // 0x4bca44: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4bca44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bca48:
    // 0x4bca48: 0x26100e84  addiu       $s0, $s0, 0xE84
    ctx->pc = 0x4bca48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3716));
label_4bca4c:
    // 0x4bca4c: 0x8ea60cf4  lw          $a2, 0xCF4($s5)
    ctx->pc = 0x4bca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3316)));
label_4bca50:
    // 0x4bca50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4bca50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bca54:
    // 0x4bca54: 0x10c5001c  beq         $a2, $a1, . + 4 + (0x1C << 2)
label_4bca58:
    if (ctx->pc == 0x4BCA58u) {
        ctx->pc = 0x4BCA58u;
            // 0x4bca58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x4BCA5Cu;
        goto label_4bca5c;
    }
    ctx->pc = 0x4BCA54u;
    {
        const bool branch_taken_0x4bca54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x4BCA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCA54u;
            // 0x4bca58: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bca54) {
            ctx->pc = 0x4BCAC8u;
            goto label_4bcac8;
        }
    }
    ctx->pc = 0x4BCA5Cu;
label_4bca5c:
    // 0x4bca5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bca60:
    // 0x4bca60: 0x10c3000f  beq         $a2, $v1, . + 4 + (0xF << 2)
label_4bca64:
    if (ctx->pc == 0x4BCA64u) {
        ctx->pc = 0x4BCA68u;
        goto label_4bca68;
    }
    ctx->pc = 0x4BCA60u;
    {
        const bool branch_taken_0x4bca60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4bca60) {
            ctx->pc = 0x4BCAA0u;
            goto label_4bcaa0;
        }
    }
    ctx->pc = 0x4BCA68u;
label_4bca68:
    // 0x4bca68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_4bca6c:
    if (ctx->pc == 0x4BCA6Cu) {
        ctx->pc = 0x4BCA70u;
        goto label_4bca70;
    }
    ctx->pc = 0x4BCA68u;
    {
        const bool branch_taken_0x4bca68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bca68) {
            ctx->pc = 0x4BCA78u;
            goto label_4bca78;
        }
    }
    ctx->pc = 0x4BCA70u;
label_4bca70:
    // 0x4bca70: 0x10000027  b           . + 4 + (0x27 << 2)
label_4bca74:
    if (ctx->pc == 0x4BCA74u) {
        ctx->pc = 0x4BCA78u;
        goto label_4bca78;
    }
    ctx->pc = 0x4BCA70u;
    {
        const bool branch_taken_0x4bca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bca70) {
            ctx->pc = 0x4BCB10u;
            goto label_4bcb10;
        }
    }
    ctx->pc = 0x4BCA78u;
label_4bca78:
    // 0x4bca78: 0x16250025  bne         $s1, $a1, . + 4 + (0x25 << 2)
label_4bca7c:
    if (ctx->pc == 0x4BCA7Cu) {
        ctx->pc = 0x4BCA80u;
        goto label_4bca80;
    }
    ctx->pc = 0x4BCA78u;
    {
        const bool branch_taken_0x4bca78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x4bca78) {
            ctx->pc = 0x4BCB10u;
            goto label_4bcb10;
        }
    }
    ctx->pc = 0x4BCA80u;
label_4bca80:
    // 0x4bca80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bca84:
    // 0x4bca84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bca88:
    // 0x4bca88: 0x8c420e88  lw          $v0, 0xE88($v0)
    ctx->pc = 0x4bca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_4bca8c:
    // 0x4bca8c: 0xc146148  jal         func_518520
label_4bca90:
    if (ctx->pc == 0x4BCA90u) {
        ctx->pc = 0x4BCA90u;
            // 0x4bca90: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BCA94u;
        goto label_4bca94;
    }
    ctx->pc = 0x4BCA8Cu;
    SET_GPR_U32(ctx, 31, 0x4BCA94u);
    ctx->pc = 0x4BCA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCA8Cu;
            // 0x4bca90: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518520u;
    if (runtime->hasFunction(0x518520u)) {
        auto targetFn = runtime->lookupFunction(0x518520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCA94u; }
        if (ctx->pc != 0x4BCA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518520_0x518520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCA94u; }
        if (ctx->pc != 0x4BCA94u) { return; }
    }
    ctx->pc = 0x4BCA94u;
label_4bca94:
    // 0x4bca94: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4bca98:
    if (ctx->pc == 0x4BCA98u) {
        ctx->pc = 0x4BCA9Cu;
        goto label_4bca9c;
    }
    ctx->pc = 0x4BCA94u;
    {
        const bool branch_taken_0x4bca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bca94) {
            ctx->pc = 0x4BCB10u;
            goto label_4bcb10;
        }
    }
    ctx->pc = 0x4BCA9Cu;
label_4bca9c:
    // 0x4bca9c: 0x0  nop
    ctx->pc = 0x4bca9cu;
    // NOP
label_4bcaa0:
    // 0x4bcaa0: 0x1623001b  bne         $s1, $v1, . + 4 + (0x1B << 2)
label_4bcaa4:
    if (ctx->pc == 0x4BCAA4u) {
        ctx->pc = 0x4BCAA8u;
        goto label_4bcaa8;
    }
    ctx->pc = 0x4BCAA0u;
    {
        const bool branch_taken_0x4bcaa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bcaa0) {
            ctx->pc = 0x4BCB10u;
            goto label_4bcb10;
        }
    }
    ctx->pc = 0x4BCAA8u;
label_4bcaa8:
    // 0x4bcaa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bcaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bcaac:
    // 0x4bcaac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bcaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bcab0:
    // 0x4bcab0: 0x8c420e88  lw          $v0, 0xE88($v0)
    ctx->pc = 0x4bcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_4bcab4:
    // 0x4bcab4: 0xc146148  jal         func_518520
label_4bcab8:
    if (ctx->pc == 0x4BCAB8u) {
        ctx->pc = 0x4BCAB8u;
            // 0x4bcab8: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BCABCu;
        goto label_4bcabc;
    }
    ctx->pc = 0x4BCAB4u;
    SET_GPR_U32(ctx, 31, 0x4BCABCu);
    ctx->pc = 0x4BCAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCAB4u;
            // 0x4bcab8: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518520u;
    if (runtime->hasFunction(0x518520u)) {
        auto targetFn = runtime->lookupFunction(0x518520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCABCu; }
        if (ctx->pc != 0x4BCABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518520_0x518520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCABCu; }
        if (ctx->pc != 0x4BCABCu) { return; }
    }
    ctx->pc = 0x4BCABCu;
label_4bcabc:
    // 0x4bcabc: 0x10000014  b           . + 4 + (0x14 << 2)
label_4bcac0:
    if (ctx->pc == 0x4BCAC0u) {
        ctx->pc = 0x4BCAC4u;
        goto label_4bcac4;
    }
    ctx->pc = 0x4BCABCu;
    {
        const bool branch_taken_0x4bcabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcabc) {
            ctx->pc = 0x4BCB10u;
            goto label_4bcb10;
        }
    }
    ctx->pc = 0x4BCAC4u;
label_4bcac4:
    // 0x4bcac4: 0x0  nop
    ctx->pc = 0x4bcac4u;
    // NOP
label_4bcac8:
    // 0x4bcac8: 0x16250009  bne         $s1, $a1, . + 4 + (0x9 << 2)
label_4bcacc:
    if (ctx->pc == 0x4BCACCu) {
        ctx->pc = 0x4BCAD0u;
        goto label_4bcad0;
    }
    ctx->pc = 0x4BCAC8u;
    {
        const bool branch_taken_0x4bcac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x4bcac8) {
            ctx->pc = 0x4BCAF0u;
            goto label_4bcaf0;
        }
    }
    ctx->pc = 0x4BCAD0u;
label_4bcad0:
    // 0x4bcad0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bcad4:
    // 0x4bcad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bcad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bcad8:
    // 0x4bcad8: 0x8c420e88  lw          $v0, 0xE88($v0)
    ctx->pc = 0x4bcad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_4bcadc:
    // 0x4bcadc: 0xc146148  jal         func_518520
label_4bcae0:
    if (ctx->pc == 0x4BCAE0u) {
        ctx->pc = 0x4BCAE0u;
            // 0x4bcae0: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BCAE4u;
        goto label_4bcae4;
    }
    ctx->pc = 0x4BCADCu;
    SET_GPR_U32(ctx, 31, 0x4BCAE4u);
    ctx->pc = 0x4BCAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCADCu;
            // 0x4bcae0: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518520u;
    if (runtime->hasFunction(0x518520u)) {
        auto targetFn = runtime->lookupFunction(0x518520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCAE4u; }
        if (ctx->pc != 0x4BCAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518520_0x518520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCAE4u; }
        if (ctx->pc != 0x4BCAE4u) { return; }
    }
    ctx->pc = 0x4BCAE4u;
label_4bcae4:
    // 0x4bcae4: 0x1000000a  b           . + 4 + (0xA << 2)
label_4bcae8:
    if (ctx->pc == 0x4BCAE8u) {
        ctx->pc = 0x4BCAECu;
        goto label_4bcaec;
    }
    ctx->pc = 0x4BCAE4u;
    {
        const bool branch_taken_0x4bcae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcae4) {
            ctx->pc = 0x4BCB10u;
            goto label_4bcb10;
        }
    }
    ctx->pc = 0x4BCAECu;
label_4bcaec:
    // 0x4bcaec: 0x0  nop
    ctx->pc = 0x4bcaecu;
    // NOP
label_4bcaf0:
    // 0x4bcaf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4bcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bcaf4:
    // 0x4bcaf4: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
label_4bcaf8:
    if (ctx->pc == 0x4BCAF8u) {
        ctx->pc = 0x4BCAFCu;
        goto label_4bcafc;
    }
    ctx->pc = 0x4BCAF4u;
    {
        const bool branch_taken_0x4bcaf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x4bcaf4) {
            ctx->pc = 0x4BCB10u;
            goto label_4bcb10;
        }
    }
    ctx->pc = 0x4BCAFCu;
label_4bcafc:
    // 0x4bcafc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bcafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bcb00:
    // 0x4bcb00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bcb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bcb04:
    // 0x4bcb04: 0x8c420e94  lw          $v0, 0xE94($v0)
    ctx->pc = 0x4bcb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3732)));
label_4bcb08:
    // 0x4bcb08: 0xc146148  jal         func_518520
label_4bcb0c:
    if (ctx->pc == 0x4BCB0Cu) {
        ctx->pc = 0x4BCB0Cu;
            // 0x4bcb0c: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BCB10u;
        goto label_4bcb10;
    }
    ctx->pc = 0x4BCB08u;
    SET_GPR_U32(ctx, 31, 0x4BCB10u);
    ctx->pc = 0x4BCB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCB08u;
            // 0x4bcb0c: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518520u;
    if (runtime->hasFunction(0x518520u)) {
        auto targetFn = runtime->lookupFunction(0x518520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCB10u; }
        if (ctx->pc != 0x4BCB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518520_0x518520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCB10u; }
        if (ctx->pc != 0x4BCB10u) { return; }
    }
    ctx->pc = 0x4BCB10u;
label_4bcb10:
    // 0x4bcb10: 0x8ea3077c  lw          $v1, 0x77C($s5)
    ctx->pc = 0x4bcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_4bcb14:
    // 0x4bcb14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4bcb14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4bcb18:
    // 0x4bcb18: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x4bcb18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4bcb1c:
    // 0x4bcb1c: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_4bcb20:
    if (ctx->pc == 0x4BCB20u) {
        ctx->pc = 0x4BCB20u;
            // 0x4bcb20: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4BCB24u;
        goto label_4bcb24;
    }
    ctx->pc = 0x4BCB1Cu;
    {
        const bool branch_taken_0x4bcb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BCB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCB1Cu;
            // 0x4bcb20: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcb1c) {
            ctx->pc = 0x4BCA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bca4c;
        }
    }
    ctx->pc = 0x4BCB24u;
label_4bcb24:
    // 0x4bcb24: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4bcb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4bcb28:
    // 0x4bcb28: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4bcb28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4bcb2c:
    // 0x4bcb2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4bcb2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4bcb30:
    // 0x4bcb30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bcb30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bcb34:
    // 0x4bcb34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bcb34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bcb38:
    // 0x4bcb38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bcb38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bcb3c:
    // 0x4bcb3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bcb3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bcb40:
    // 0x4bcb40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bcb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bcb44:
    // 0x4bcb44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bcb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bcb48:
    // 0x4bcb48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bcb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bcb4c:
    // 0x4bcb4c: 0x3e00008  jr          $ra
label_4bcb50:
    if (ctx->pc == 0x4BCB50u) {
        ctx->pc = 0x4BCB50u;
            // 0x4bcb50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4BCB54u;
        goto label_4bcb54;
    }
    ctx->pc = 0x4BCB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BCB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCB4Cu;
            // 0x4bcb50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BCB54u;
label_4bcb54:
    // 0x4bcb54: 0x0  nop
    ctx->pc = 0x4bcb54u;
    // NOP
label_4bcb58:
    // 0x4bcb58: 0x0  nop
    ctx->pc = 0x4bcb58u;
    // NOP
label_4bcb5c:
    // 0x4bcb5c: 0x0  nop
    ctx->pc = 0x4bcb5cu;
    // NOP
label_4bcb60:
    // 0x4bcb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bcb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bcb64:
    // 0x4bcb64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bcb68:
    // 0x4bcb68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4bcb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4bcb6c:
    // 0x4bcb6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bcb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bcb70:
    // 0x4bcb70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bcb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bcb74:
    // 0x4bcb74: 0x8c850cbc  lw          $a1, 0xCBC($a0)
    ctx->pc = 0x4bcb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
label_4bcb78:
    // 0x4bcb78: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x4bcb78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_4bcb7c:
    // 0x4bcb7c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_4bcb80:
    if (ctx->pc == 0x4BCB80u) {
        ctx->pc = 0x4BCB80u;
            // 0x4bcb80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCB84u;
        goto label_4bcb84;
    }
    ctx->pc = 0x4BCB7Cu;
    {
        const bool branch_taken_0x4bcb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCB7Cu;
            // 0x4bcb80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcb7c) {
            ctx->pc = 0x4BCBBCu;
            goto label_4bcbbc;
        }
    }
    ctx->pc = 0x4BCB84u;
label_4bcb84:
    // 0x4bcb84: 0x8e220cc0  lw          $v0, 0xCC0($s1)
    ctx->pc = 0x4bcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3264)));
label_4bcb88:
    // 0x4bcb88: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4bcb8c:
    if (ctx->pc == 0x4BCB8Cu) {
        ctx->pc = 0x4BCB8Cu;
            // 0x4bcb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCB90u;
        goto label_4bcb90;
    }
    ctx->pc = 0x4BCB88u;
    {
        const bool branch_taken_0x4bcb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bcb88) {
            ctx->pc = 0x4BCB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCB88u;
            // 0x4bcb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BCBC0u;
            goto label_4bcbc0;
        }
    }
    ctx->pc = 0x4BCB90u;
label_4bcb90:
    // 0x4bcb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bcb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bcb94:
    // 0x4bcb94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bcb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bcb98:
    // 0x4bcb98: 0xc0ab89c  jal         func_2AE270
label_4bcb9c:
    if (ctx->pc == 0x4BCB9Cu) {
        ctx->pc = 0x4BCB9Cu;
            // 0x4bcb9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCBA0u;
        goto label_4bcba0;
    }
    ctx->pc = 0x4BCB98u;
    SET_GPR_U32(ctx, 31, 0x4BCBA0u);
    ctx->pc = 0x4BCB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCB98u;
            // 0x4bcb9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCBA0u; }
        if (ctx->pc != 0x4BCBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCBA0u; }
        if (ctx->pc != 0x4BCBA0u) { return; }
    }
    ctx->pc = 0x4BCBA0u;
label_4bcba0:
    // 0x4bcba0: 0x8e250cc0  lw          $a1, 0xCC0($s1)
    ctx->pc = 0x4bcba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3264)));
label_4bcba4:
    // 0x4bcba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bcba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bcba8:
    // 0x4bcba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bcba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bcbac:
    // 0x4bcbac: 0xc0ab89c  jal         func_2AE270
label_4bcbb0:
    if (ctx->pc == 0x4BCBB0u) {
        ctx->pc = 0x4BCBB0u;
            // 0x4bcbb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCBB4u;
        goto label_4bcbb4;
    }
    ctx->pc = 0x4BCBACu;
    SET_GPR_U32(ctx, 31, 0x4BCBB4u);
    ctx->pc = 0x4BCBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCBACu;
            // 0x4bcbb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCBB4u; }
        if (ctx->pc != 0x4BCBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCBB4u; }
        if (ctx->pc != 0x4BCBB4u) { return; }
    }
    ctx->pc = 0x4BCBB4u;
label_4bcbb4:
    // 0x4bcbb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4bcbb8:
    if (ctx->pc == 0x4BCBB8u) {
        ctx->pc = 0x4BCBB8u;
            // 0x4bcbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BCBBCu;
        goto label_4bcbbc;
    }
    ctx->pc = 0x4BCBB4u;
    {
        const bool branch_taken_0x4bcbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCBB4u;
            // 0x4bcbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcbb4) {
            ctx->pc = 0x4BCBC0u;
            goto label_4bcbc0;
        }
    }
    ctx->pc = 0x4BCBBCu;
label_4bcbbc:
    // 0x4bcbbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4bcbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bcbc0:
    // 0x4bcbc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4bcbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4bcbc4:
    // 0x4bcbc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bcbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bcbc8:
    // 0x4bcbc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bcbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bcbcc:
    // 0x4bcbcc: 0x3e00008  jr          $ra
label_4bcbd0:
    if (ctx->pc == 0x4BCBD0u) {
        ctx->pc = 0x4BCBD0u;
            // 0x4bcbd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4BCBD4u;
        goto label_4bcbd4;
    }
    ctx->pc = 0x4BCBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BCBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCBCCu;
            // 0x4bcbd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BCBD4u;
label_4bcbd4:
    // 0x4bcbd4: 0x0  nop
    ctx->pc = 0x4bcbd4u;
    // NOP
label_4bcbd8:
    // 0x4bcbd8: 0x0  nop
    ctx->pc = 0x4bcbd8u;
    // NOP
label_4bcbdc:
    // 0x4bcbdc: 0x0  nop
    ctx->pc = 0x4bcbdcu;
    // NOP
label_4bcbe0:
    // 0x4bcbe0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4bcbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4bcbe4:
    // 0x4bcbe4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bcbe8:
    // 0x4bcbe8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bcbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4bcbec:
    // 0x4bcbec: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x4bcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4bcbf0:
    // 0x4bcbf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bcbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bcbf4:
    // 0x4bcbf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bcbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bcbf8:
    // 0x4bcbf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bcbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bcbfc:
    // 0x4bcbfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bcbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bcc00:
    // 0x4bcc00: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4bcc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4bcc04:
    // 0x4bcc04: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x4bcc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4bcc08:
    // 0x4bcc08: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4bcc0c:
    if (ctx->pc == 0x4BCC0Cu) {
        ctx->pc = 0x4BCC0Cu;
            // 0x4bcc0c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x4BCC10u;
        goto label_4bcc10;
    }
    ctx->pc = 0x4BCC08u;
    {
        const bool branch_taken_0x4bcc08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BCC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCC08u;
            // 0x4bcc0c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bcc08) {
            ctx->pc = 0x4BCC2Cu;
            goto label_4bcc2c;
        }
    }
    ctx->pc = 0x4BCC10u;
label_4bcc10:
    // 0x4bcc10: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4bcc10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_4bcc14:
    // 0x4bcc14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4bcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4bcc18:
    // 0x4bcc18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4bcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4bcc1c:
    // 0x4bcc1c: 0x0  nop
    ctx->pc = 0x4bcc1cu;
    // NOP
label_4bcc20:
    // 0x4bcc20: 0x0  nop
    ctx->pc = 0x4bcc20u;
    // NOP
label_4bcc24:
    // 0x4bcc24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4bcc28:
    if (ctx->pc == 0x4BCC28u) {
        ctx->pc = 0x4BCC2Cu;
        goto label_4bcc2c;
    }
    ctx->pc = 0x4BCC24u;
    {
        const bool branch_taken_0x4bcc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bcc24) {
            ctx->pc = 0x4BCC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4bcc10;
        }
    }
    ctx->pc = 0x4BCC2Cu;
label_4bcc2c:
    // 0x4bcc2c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4bcc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4bcc30:
    // 0x4bcc30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bcc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bcc34:
    // 0x4bcc34: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x4bcc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
label_4bcc38:
    // 0x4bcc38: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4bcc38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4bcc3c:
    // 0x4bcc3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4bcc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4bcc40:
    // 0x4bcc40: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x4bcc40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_4bcc44:
    // 0x4bcc44: 0x80720000  lb          $s2, 0x0($v1)
    ctx->pc = 0x4bcc44u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4bcc48:
    // 0x4bcc48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4bcc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4bcc4c:
    // 0x4bcc4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4bcc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4bcc50:
    // 0x4bcc50: 0x24c66f58  addiu       $a2, $a2, 0x6F58
    ctx->pc = 0x4bcc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28504));
label_4bcc54:
    // 0x4bcc54: 0xc043be4  jal         func_10EF90
label_4bcc58:
    if (ctx->pc == 0x4BCC58u) {
        ctx->pc = 0x4BCC58u;
            // 0x4bcc58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCC5Cu;
        goto label_4bcc5c;
    }
    ctx->pc = 0x4BCC54u;
    SET_GPR_U32(ctx, 31, 0x4BCC5Cu);
    ctx->pc = 0x4BCC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCC54u;
            // 0x4bcc58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCC5Cu; }
        if (ctx->pc != 0x4BCC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCC5Cu; }
        if (ctx->pc != 0x4BCC5Cu) { return; }
    }
    ctx->pc = 0x4BCC5Cu;
label_4bcc5c:
    // 0x4bcc5c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4bcc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4bcc60:
    // 0x4bcc60: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4bcc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4bcc64:
    // 0x4bcc64: 0x26060cbc  addiu       $a2, $s0, 0xCBC
    ctx->pc = 0x4bcc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3260));
label_4bcc68:
    // 0x4bcc68: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4bcc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4bcc6c:
    // 0x4bcc6c: 0xc0aa5d8  jal         func_2A9760
label_4bcc70:
    if (ctx->pc == 0x4BCC70u) {
        ctx->pc = 0x4BCC70u;
            // 0x4bcc70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCC74u;
        goto label_4bcc74;
    }
    ctx->pc = 0x4BCC6Cu;
    SET_GPR_U32(ctx, 31, 0x4BCC74u);
    ctx->pc = 0x4BCC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCC6Cu;
            // 0x4bcc70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCC74u; }
        if (ctx->pc != 0x4BCC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCC74u; }
        if (ctx->pc != 0x4BCC74u) { return; }
    }
    ctx->pc = 0x4BCC74u;
label_4bcc74:
    // 0x4bcc74: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4bcc74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4bcc78:
    // 0x4bcc78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4bcc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bcc7c:
    // 0x4bcc7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4bcc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4bcc80:
    // 0x4bcc80: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x4bcc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4bcc84:
    // 0x4bcc84: 0xc043be4  jal         func_10EF90
label_4bcc88:
    if (ctx->pc == 0x4BCC88u) {
        ctx->pc = 0x4BCC88u;
            // 0x4bcc88: 0x24c66f70  addiu       $a2, $a2, 0x6F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28528));
        ctx->pc = 0x4BCC8Cu;
        goto label_4bcc8c;
    }
    ctx->pc = 0x4BCC84u;
    SET_GPR_U32(ctx, 31, 0x4BCC8Cu);
    ctx->pc = 0x4BCC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCC84u;
            // 0x4bcc88: 0x24c66f70  addiu       $a2, $a2, 0x6F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCC8Cu; }
        if (ctx->pc != 0x4BCC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCC8Cu; }
        if (ctx->pc != 0x4BCC8Cu) { return; }
    }
    ctx->pc = 0x4BCC8Cu;
label_4bcc8c:
    // 0x4bcc8c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4bcc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4bcc90:
    // 0x4bcc90: 0x26060cc0  addiu       $a2, $s0, 0xCC0
    ctx->pc = 0x4bcc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
label_4bcc94:
    // 0x4bcc94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4bcc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4bcc98:
    // 0x4bcc98: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4bcc98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4bcc9c:
    // 0x4bcc9c: 0xc0aa5d8  jal         func_2A9760
label_4bcca0:
    if (ctx->pc == 0x4BCCA0u) {
        ctx->pc = 0x4BCCA0u;
            // 0x4bcca0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BCCA4u;
        goto label_4bcca4;
    }
    ctx->pc = 0x4BCC9Cu;
    SET_GPR_U32(ctx, 31, 0x4BCCA4u);
    ctx->pc = 0x4BCCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCC9Cu;
            // 0x4bcca0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCCA4u; }
        if (ctx->pc != 0x4BCCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BCCA4u; }
        if (ctx->pc != 0x4BCCA4u) { return; }
    }
    ctx->pc = 0x4BCCA4u;
label_4bcca4:
    // 0x4bcca4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bcca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4bcca8:
    // 0x4bcca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bcca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bccac:
    // 0x4bccac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bccacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bccb0:
    // 0x4bccb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bccb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bccb4:
    // 0x4bccb4: 0x3e00008  jr          $ra
label_4bccb8:
    if (ctx->pc == 0x4BCCB8u) {
        ctx->pc = 0x4BCCB8u;
            // 0x4bccb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4BCCBCu;
        goto label_4bccbc;
    }
    ctx->pc = 0x4BCCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BCCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BCCB4u;
            // 0x4bccb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BCCBCu;
label_4bccbc:
    // 0x4bccbc: 0x0  nop
    ctx->pc = 0x4bccbcu;
    // NOP
}
