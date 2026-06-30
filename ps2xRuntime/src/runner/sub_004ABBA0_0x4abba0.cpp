#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ABBA0
// Address: 0x4abba0 - 0x4ac2a0
void sub_004ABBA0_0x4abba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABBA0_0x4abba0");
#endif

    switch (ctx->pc) {
        case 0x4abba0u: goto label_4abba0;
        case 0x4abba4u: goto label_4abba4;
        case 0x4abba8u: goto label_4abba8;
        case 0x4abbacu: goto label_4abbac;
        case 0x4abbb0u: goto label_4abbb0;
        case 0x4abbb4u: goto label_4abbb4;
        case 0x4abbb8u: goto label_4abbb8;
        case 0x4abbbcu: goto label_4abbbc;
        case 0x4abbc0u: goto label_4abbc0;
        case 0x4abbc4u: goto label_4abbc4;
        case 0x4abbc8u: goto label_4abbc8;
        case 0x4abbccu: goto label_4abbcc;
        case 0x4abbd0u: goto label_4abbd0;
        case 0x4abbd4u: goto label_4abbd4;
        case 0x4abbd8u: goto label_4abbd8;
        case 0x4abbdcu: goto label_4abbdc;
        case 0x4abbe0u: goto label_4abbe0;
        case 0x4abbe4u: goto label_4abbe4;
        case 0x4abbe8u: goto label_4abbe8;
        case 0x4abbecu: goto label_4abbec;
        case 0x4abbf0u: goto label_4abbf0;
        case 0x4abbf4u: goto label_4abbf4;
        case 0x4abbf8u: goto label_4abbf8;
        case 0x4abbfcu: goto label_4abbfc;
        case 0x4abc00u: goto label_4abc00;
        case 0x4abc04u: goto label_4abc04;
        case 0x4abc08u: goto label_4abc08;
        case 0x4abc0cu: goto label_4abc0c;
        case 0x4abc10u: goto label_4abc10;
        case 0x4abc14u: goto label_4abc14;
        case 0x4abc18u: goto label_4abc18;
        case 0x4abc1cu: goto label_4abc1c;
        case 0x4abc20u: goto label_4abc20;
        case 0x4abc24u: goto label_4abc24;
        case 0x4abc28u: goto label_4abc28;
        case 0x4abc2cu: goto label_4abc2c;
        case 0x4abc30u: goto label_4abc30;
        case 0x4abc34u: goto label_4abc34;
        case 0x4abc38u: goto label_4abc38;
        case 0x4abc3cu: goto label_4abc3c;
        case 0x4abc40u: goto label_4abc40;
        case 0x4abc44u: goto label_4abc44;
        case 0x4abc48u: goto label_4abc48;
        case 0x4abc4cu: goto label_4abc4c;
        case 0x4abc50u: goto label_4abc50;
        case 0x4abc54u: goto label_4abc54;
        case 0x4abc58u: goto label_4abc58;
        case 0x4abc5cu: goto label_4abc5c;
        case 0x4abc60u: goto label_4abc60;
        case 0x4abc64u: goto label_4abc64;
        case 0x4abc68u: goto label_4abc68;
        case 0x4abc6cu: goto label_4abc6c;
        case 0x4abc70u: goto label_4abc70;
        case 0x4abc74u: goto label_4abc74;
        case 0x4abc78u: goto label_4abc78;
        case 0x4abc7cu: goto label_4abc7c;
        case 0x4abc80u: goto label_4abc80;
        case 0x4abc84u: goto label_4abc84;
        case 0x4abc88u: goto label_4abc88;
        case 0x4abc8cu: goto label_4abc8c;
        case 0x4abc90u: goto label_4abc90;
        case 0x4abc94u: goto label_4abc94;
        case 0x4abc98u: goto label_4abc98;
        case 0x4abc9cu: goto label_4abc9c;
        case 0x4abca0u: goto label_4abca0;
        case 0x4abca4u: goto label_4abca4;
        case 0x4abca8u: goto label_4abca8;
        case 0x4abcacu: goto label_4abcac;
        case 0x4abcb0u: goto label_4abcb0;
        case 0x4abcb4u: goto label_4abcb4;
        case 0x4abcb8u: goto label_4abcb8;
        case 0x4abcbcu: goto label_4abcbc;
        case 0x4abcc0u: goto label_4abcc0;
        case 0x4abcc4u: goto label_4abcc4;
        case 0x4abcc8u: goto label_4abcc8;
        case 0x4abcccu: goto label_4abccc;
        case 0x4abcd0u: goto label_4abcd0;
        case 0x4abcd4u: goto label_4abcd4;
        case 0x4abcd8u: goto label_4abcd8;
        case 0x4abcdcu: goto label_4abcdc;
        case 0x4abce0u: goto label_4abce0;
        case 0x4abce4u: goto label_4abce4;
        case 0x4abce8u: goto label_4abce8;
        case 0x4abcecu: goto label_4abcec;
        case 0x4abcf0u: goto label_4abcf0;
        case 0x4abcf4u: goto label_4abcf4;
        case 0x4abcf8u: goto label_4abcf8;
        case 0x4abcfcu: goto label_4abcfc;
        case 0x4abd00u: goto label_4abd00;
        case 0x4abd04u: goto label_4abd04;
        case 0x4abd08u: goto label_4abd08;
        case 0x4abd0cu: goto label_4abd0c;
        case 0x4abd10u: goto label_4abd10;
        case 0x4abd14u: goto label_4abd14;
        case 0x4abd18u: goto label_4abd18;
        case 0x4abd1cu: goto label_4abd1c;
        case 0x4abd20u: goto label_4abd20;
        case 0x4abd24u: goto label_4abd24;
        case 0x4abd28u: goto label_4abd28;
        case 0x4abd2cu: goto label_4abd2c;
        case 0x4abd30u: goto label_4abd30;
        case 0x4abd34u: goto label_4abd34;
        case 0x4abd38u: goto label_4abd38;
        case 0x4abd3cu: goto label_4abd3c;
        case 0x4abd40u: goto label_4abd40;
        case 0x4abd44u: goto label_4abd44;
        case 0x4abd48u: goto label_4abd48;
        case 0x4abd4cu: goto label_4abd4c;
        case 0x4abd50u: goto label_4abd50;
        case 0x4abd54u: goto label_4abd54;
        case 0x4abd58u: goto label_4abd58;
        case 0x4abd5cu: goto label_4abd5c;
        case 0x4abd60u: goto label_4abd60;
        case 0x4abd64u: goto label_4abd64;
        case 0x4abd68u: goto label_4abd68;
        case 0x4abd6cu: goto label_4abd6c;
        case 0x4abd70u: goto label_4abd70;
        case 0x4abd74u: goto label_4abd74;
        case 0x4abd78u: goto label_4abd78;
        case 0x4abd7cu: goto label_4abd7c;
        case 0x4abd80u: goto label_4abd80;
        case 0x4abd84u: goto label_4abd84;
        case 0x4abd88u: goto label_4abd88;
        case 0x4abd8cu: goto label_4abd8c;
        case 0x4abd90u: goto label_4abd90;
        case 0x4abd94u: goto label_4abd94;
        case 0x4abd98u: goto label_4abd98;
        case 0x4abd9cu: goto label_4abd9c;
        case 0x4abda0u: goto label_4abda0;
        case 0x4abda4u: goto label_4abda4;
        case 0x4abda8u: goto label_4abda8;
        case 0x4abdacu: goto label_4abdac;
        case 0x4abdb0u: goto label_4abdb0;
        case 0x4abdb4u: goto label_4abdb4;
        case 0x4abdb8u: goto label_4abdb8;
        case 0x4abdbcu: goto label_4abdbc;
        case 0x4abdc0u: goto label_4abdc0;
        case 0x4abdc4u: goto label_4abdc4;
        case 0x4abdc8u: goto label_4abdc8;
        case 0x4abdccu: goto label_4abdcc;
        case 0x4abdd0u: goto label_4abdd0;
        case 0x4abdd4u: goto label_4abdd4;
        case 0x4abdd8u: goto label_4abdd8;
        case 0x4abddcu: goto label_4abddc;
        case 0x4abde0u: goto label_4abde0;
        case 0x4abde4u: goto label_4abde4;
        case 0x4abde8u: goto label_4abde8;
        case 0x4abdecu: goto label_4abdec;
        case 0x4abdf0u: goto label_4abdf0;
        case 0x4abdf4u: goto label_4abdf4;
        case 0x4abdf8u: goto label_4abdf8;
        case 0x4abdfcu: goto label_4abdfc;
        case 0x4abe00u: goto label_4abe00;
        case 0x4abe04u: goto label_4abe04;
        case 0x4abe08u: goto label_4abe08;
        case 0x4abe0cu: goto label_4abe0c;
        case 0x4abe10u: goto label_4abe10;
        case 0x4abe14u: goto label_4abe14;
        case 0x4abe18u: goto label_4abe18;
        case 0x4abe1cu: goto label_4abe1c;
        case 0x4abe20u: goto label_4abe20;
        case 0x4abe24u: goto label_4abe24;
        case 0x4abe28u: goto label_4abe28;
        case 0x4abe2cu: goto label_4abe2c;
        case 0x4abe30u: goto label_4abe30;
        case 0x4abe34u: goto label_4abe34;
        case 0x4abe38u: goto label_4abe38;
        case 0x4abe3cu: goto label_4abe3c;
        case 0x4abe40u: goto label_4abe40;
        case 0x4abe44u: goto label_4abe44;
        case 0x4abe48u: goto label_4abe48;
        case 0x4abe4cu: goto label_4abe4c;
        case 0x4abe50u: goto label_4abe50;
        case 0x4abe54u: goto label_4abe54;
        case 0x4abe58u: goto label_4abe58;
        case 0x4abe5cu: goto label_4abe5c;
        case 0x4abe60u: goto label_4abe60;
        case 0x4abe64u: goto label_4abe64;
        case 0x4abe68u: goto label_4abe68;
        case 0x4abe6cu: goto label_4abe6c;
        case 0x4abe70u: goto label_4abe70;
        case 0x4abe74u: goto label_4abe74;
        case 0x4abe78u: goto label_4abe78;
        case 0x4abe7cu: goto label_4abe7c;
        case 0x4abe80u: goto label_4abe80;
        case 0x4abe84u: goto label_4abe84;
        case 0x4abe88u: goto label_4abe88;
        case 0x4abe8cu: goto label_4abe8c;
        case 0x4abe90u: goto label_4abe90;
        case 0x4abe94u: goto label_4abe94;
        case 0x4abe98u: goto label_4abe98;
        case 0x4abe9cu: goto label_4abe9c;
        case 0x4abea0u: goto label_4abea0;
        case 0x4abea4u: goto label_4abea4;
        case 0x4abea8u: goto label_4abea8;
        case 0x4abeacu: goto label_4abeac;
        case 0x4abeb0u: goto label_4abeb0;
        case 0x4abeb4u: goto label_4abeb4;
        case 0x4abeb8u: goto label_4abeb8;
        case 0x4abebcu: goto label_4abebc;
        case 0x4abec0u: goto label_4abec0;
        case 0x4abec4u: goto label_4abec4;
        case 0x4abec8u: goto label_4abec8;
        case 0x4abeccu: goto label_4abecc;
        case 0x4abed0u: goto label_4abed0;
        case 0x4abed4u: goto label_4abed4;
        case 0x4abed8u: goto label_4abed8;
        case 0x4abedcu: goto label_4abedc;
        case 0x4abee0u: goto label_4abee0;
        case 0x4abee4u: goto label_4abee4;
        case 0x4abee8u: goto label_4abee8;
        case 0x4abeecu: goto label_4abeec;
        case 0x4abef0u: goto label_4abef0;
        case 0x4abef4u: goto label_4abef4;
        case 0x4abef8u: goto label_4abef8;
        case 0x4abefcu: goto label_4abefc;
        case 0x4abf00u: goto label_4abf00;
        case 0x4abf04u: goto label_4abf04;
        case 0x4abf08u: goto label_4abf08;
        case 0x4abf0cu: goto label_4abf0c;
        case 0x4abf10u: goto label_4abf10;
        case 0x4abf14u: goto label_4abf14;
        case 0x4abf18u: goto label_4abf18;
        case 0x4abf1cu: goto label_4abf1c;
        case 0x4abf20u: goto label_4abf20;
        case 0x4abf24u: goto label_4abf24;
        case 0x4abf28u: goto label_4abf28;
        case 0x4abf2cu: goto label_4abf2c;
        case 0x4abf30u: goto label_4abf30;
        case 0x4abf34u: goto label_4abf34;
        case 0x4abf38u: goto label_4abf38;
        case 0x4abf3cu: goto label_4abf3c;
        case 0x4abf40u: goto label_4abf40;
        case 0x4abf44u: goto label_4abf44;
        case 0x4abf48u: goto label_4abf48;
        case 0x4abf4cu: goto label_4abf4c;
        case 0x4abf50u: goto label_4abf50;
        case 0x4abf54u: goto label_4abf54;
        case 0x4abf58u: goto label_4abf58;
        case 0x4abf5cu: goto label_4abf5c;
        case 0x4abf60u: goto label_4abf60;
        case 0x4abf64u: goto label_4abf64;
        case 0x4abf68u: goto label_4abf68;
        case 0x4abf6cu: goto label_4abf6c;
        case 0x4abf70u: goto label_4abf70;
        case 0x4abf74u: goto label_4abf74;
        case 0x4abf78u: goto label_4abf78;
        case 0x4abf7cu: goto label_4abf7c;
        case 0x4abf80u: goto label_4abf80;
        case 0x4abf84u: goto label_4abf84;
        case 0x4abf88u: goto label_4abf88;
        case 0x4abf8cu: goto label_4abf8c;
        case 0x4abf90u: goto label_4abf90;
        case 0x4abf94u: goto label_4abf94;
        case 0x4abf98u: goto label_4abf98;
        case 0x4abf9cu: goto label_4abf9c;
        case 0x4abfa0u: goto label_4abfa0;
        case 0x4abfa4u: goto label_4abfa4;
        case 0x4abfa8u: goto label_4abfa8;
        case 0x4abfacu: goto label_4abfac;
        case 0x4abfb0u: goto label_4abfb0;
        case 0x4abfb4u: goto label_4abfb4;
        case 0x4abfb8u: goto label_4abfb8;
        case 0x4abfbcu: goto label_4abfbc;
        case 0x4abfc0u: goto label_4abfc0;
        case 0x4abfc4u: goto label_4abfc4;
        case 0x4abfc8u: goto label_4abfc8;
        case 0x4abfccu: goto label_4abfcc;
        case 0x4abfd0u: goto label_4abfd0;
        case 0x4abfd4u: goto label_4abfd4;
        case 0x4abfd8u: goto label_4abfd8;
        case 0x4abfdcu: goto label_4abfdc;
        case 0x4abfe0u: goto label_4abfe0;
        case 0x4abfe4u: goto label_4abfe4;
        case 0x4abfe8u: goto label_4abfe8;
        case 0x4abfecu: goto label_4abfec;
        case 0x4abff0u: goto label_4abff0;
        case 0x4abff4u: goto label_4abff4;
        case 0x4abff8u: goto label_4abff8;
        case 0x4abffcu: goto label_4abffc;
        case 0x4ac000u: goto label_4ac000;
        case 0x4ac004u: goto label_4ac004;
        case 0x4ac008u: goto label_4ac008;
        case 0x4ac00cu: goto label_4ac00c;
        case 0x4ac010u: goto label_4ac010;
        case 0x4ac014u: goto label_4ac014;
        case 0x4ac018u: goto label_4ac018;
        case 0x4ac01cu: goto label_4ac01c;
        case 0x4ac020u: goto label_4ac020;
        case 0x4ac024u: goto label_4ac024;
        case 0x4ac028u: goto label_4ac028;
        case 0x4ac02cu: goto label_4ac02c;
        case 0x4ac030u: goto label_4ac030;
        case 0x4ac034u: goto label_4ac034;
        case 0x4ac038u: goto label_4ac038;
        case 0x4ac03cu: goto label_4ac03c;
        case 0x4ac040u: goto label_4ac040;
        case 0x4ac044u: goto label_4ac044;
        case 0x4ac048u: goto label_4ac048;
        case 0x4ac04cu: goto label_4ac04c;
        case 0x4ac050u: goto label_4ac050;
        case 0x4ac054u: goto label_4ac054;
        case 0x4ac058u: goto label_4ac058;
        case 0x4ac05cu: goto label_4ac05c;
        case 0x4ac060u: goto label_4ac060;
        case 0x4ac064u: goto label_4ac064;
        case 0x4ac068u: goto label_4ac068;
        case 0x4ac06cu: goto label_4ac06c;
        case 0x4ac070u: goto label_4ac070;
        case 0x4ac074u: goto label_4ac074;
        case 0x4ac078u: goto label_4ac078;
        case 0x4ac07cu: goto label_4ac07c;
        case 0x4ac080u: goto label_4ac080;
        case 0x4ac084u: goto label_4ac084;
        case 0x4ac088u: goto label_4ac088;
        case 0x4ac08cu: goto label_4ac08c;
        case 0x4ac090u: goto label_4ac090;
        case 0x4ac094u: goto label_4ac094;
        case 0x4ac098u: goto label_4ac098;
        case 0x4ac09cu: goto label_4ac09c;
        case 0x4ac0a0u: goto label_4ac0a0;
        case 0x4ac0a4u: goto label_4ac0a4;
        case 0x4ac0a8u: goto label_4ac0a8;
        case 0x4ac0acu: goto label_4ac0ac;
        case 0x4ac0b0u: goto label_4ac0b0;
        case 0x4ac0b4u: goto label_4ac0b4;
        case 0x4ac0b8u: goto label_4ac0b8;
        case 0x4ac0bcu: goto label_4ac0bc;
        case 0x4ac0c0u: goto label_4ac0c0;
        case 0x4ac0c4u: goto label_4ac0c4;
        case 0x4ac0c8u: goto label_4ac0c8;
        case 0x4ac0ccu: goto label_4ac0cc;
        case 0x4ac0d0u: goto label_4ac0d0;
        case 0x4ac0d4u: goto label_4ac0d4;
        case 0x4ac0d8u: goto label_4ac0d8;
        case 0x4ac0dcu: goto label_4ac0dc;
        case 0x4ac0e0u: goto label_4ac0e0;
        case 0x4ac0e4u: goto label_4ac0e4;
        case 0x4ac0e8u: goto label_4ac0e8;
        case 0x4ac0ecu: goto label_4ac0ec;
        case 0x4ac0f0u: goto label_4ac0f0;
        case 0x4ac0f4u: goto label_4ac0f4;
        case 0x4ac0f8u: goto label_4ac0f8;
        case 0x4ac0fcu: goto label_4ac0fc;
        case 0x4ac100u: goto label_4ac100;
        case 0x4ac104u: goto label_4ac104;
        case 0x4ac108u: goto label_4ac108;
        case 0x4ac10cu: goto label_4ac10c;
        case 0x4ac110u: goto label_4ac110;
        case 0x4ac114u: goto label_4ac114;
        case 0x4ac118u: goto label_4ac118;
        case 0x4ac11cu: goto label_4ac11c;
        case 0x4ac120u: goto label_4ac120;
        case 0x4ac124u: goto label_4ac124;
        case 0x4ac128u: goto label_4ac128;
        case 0x4ac12cu: goto label_4ac12c;
        case 0x4ac130u: goto label_4ac130;
        case 0x4ac134u: goto label_4ac134;
        case 0x4ac138u: goto label_4ac138;
        case 0x4ac13cu: goto label_4ac13c;
        case 0x4ac140u: goto label_4ac140;
        case 0x4ac144u: goto label_4ac144;
        case 0x4ac148u: goto label_4ac148;
        case 0x4ac14cu: goto label_4ac14c;
        case 0x4ac150u: goto label_4ac150;
        case 0x4ac154u: goto label_4ac154;
        case 0x4ac158u: goto label_4ac158;
        case 0x4ac15cu: goto label_4ac15c;
        case 0x4ac160u: goto label_4ac160;
        case 0x4ac164u: goto label_4ac164;
        case 0x4ac168u: goto label_4ac168;
        case 0x4ac16cu: goto label_4ac16c;
        case 0x4ac170u: goto label_4ac170;
        case 0x4ac174u: goto label_4ac174;
        case 0x4ac178u: goto label_4ac178;
        case 0x4ac17cu: goto label_4ac17c;
        case 0x4ac180u: goto label_4ac180;
        case 0x4ac184u: goto label_4ac184;
        case 0x4ac188u: goto label_4ac188;
        case 0x4ac18cu: goto label_4ac18c;
        case 0x4ac190u: goto label_4ac190;
        case 0x4ac194u: goto label_4ac194;
        case 0x4ac198u: goto label_4ac198;
        case 0x4ac19cu: goto label_4ac19c;
        case 0x4ac1a0u: goto label_4ac1a0;
        case 0x4ac1a4u: goto label_4ac1a4;
        case 0x4ac1a8u: goto label_4ac1a8;
        case 0x4ac1acu: goto label_4ac1ac;
        case 0x4ac1b0u: goto label_4ac1b0;
        case 0x4ac1b4u: goto label_4ac1b4;
        case 0x4ac1b8u: goto label_4ac1b8;
        case 0x4ac1bcu: goto label_4ac1bc;
        case 0x4ac1c0u: goto label_4ac1c0;
        case 0x4ac1c4u: goto label_4ac1c4;
        case 0x4ac1c8u: goto label_4ac1c8;
        case 0x4ac1ccu: goto label_4ac1cc;
        case 0x4ac1d0u: goto label_4ac1d0;
        case 0x4ac1d4u: goto label_4ac1d4;
        case 0x4ac1d8u: goto label_4ac1d8;
        case 0x4ac1dcu: goto label_4ac1dc;
        case 0x4ac1e0u: goto label_4ac1e0;
        case 0x4ac1e4u: goto label_4ac1e4;
        case 0x4ac1e8u: goto label_4ac1e8;
        case 0x4ac1ecu: goto label_4ac1ec;
        case 0x4ac1f0u: goto label_4ac1f0;
        case 0x4ac1f4u: goto label_4ac1f4;
        case 0x4ac1f8u: goto label_4ac1f8;
        case 0x4ac1fcu: goto label_4ac1fc;
        case 0x4ac200u: goto label_4ac200;
        case 0x4ac204u: goto label_4ac204;
        case 0x4ac208u: goto label_4ac208;
        case 0x4ac20cu: goto label_4ac20c;
        case 0x4ac210u: goto label_4ac210;
        case 0x4ac214u: goto label_4ac214;
        case 0x4ac218u: goto label_4ac218;
        case 0x4ac21cu: goto label_4ac21c;
        case 0x4ac220u: goto label_4ac220;
        case 0x4ac224u: goto label_4ac224;
        case 0x4ac228u: goto label_4ac228;
        case 0x4ac22cu: goto label_4ac22c;
        case 0x4ac230u: goto label_4ac230;
        case 0x4ac234u: goto label_4ac234;
        case 0x4ac238u: goto label_4ac238;
        case 0x4ac23cu: goto label_4ac23c;
        case 0x4ac240u: goto label_4ac240;
        case 0x4ac244u: goto label_4ac244;
        case 0x4ac248u: goto label_4ac248;
        case 0x4ac24cu: goto label_4ac24c;
        case 0x4ac250u: goto label_4ac250;
        case 0x4ac254u: goto label_4ac254;
        case 0x4ac258u: goto label_4ac258;
        case 0x4ac25cu: goto label_4ac25c;
        case 0x4ac260u: goto label_4ac260;
        case 0x4ac264u: goto label_4ac264;
        case 0x4ac268u: goto label_4ac268;
        case 0x4ac26cu: goto label_4ac26c;
        case 0x4ac270u: goto label_4ac270;
        case 0x4ac274u: goto label_4ac274;
        case 0x4ac278u: goto label_4ac278;
        case 0x4ac27cu: goto label_4ac27c;
        case 0x4ac280u: goto label_4ac280;
        case 0x4ac284u: goto label_4ac284;
        case 0x4ac288u: goto label_4ac288;
        case 0x4ac28cu: goto label_4ac28c;
        case 0x4ac290u: goto label_4ac290;
        case 0x4ac294u: goto label_4ac294;
        case 0x4ac298u: goto label_4ac298;
        case 0x4ac29cu: goto label_4ac29c;
        default: break;
    }

    ctx->pc = 0x4abba0u;

label_4abba0:
    // 0x4abba0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4abba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4abba4:
    // 0x4abba4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4abba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4abba8:
    // 0x4abba8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4abba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4abbac:
    // 0x4abbac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4abbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4abbb0:
    // 0x4abbb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4abbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4abbb4:
    // 0x4abbb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4abbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4abbb8:
    // 0x4abbb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4abbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4abbbc:
    // 0x4abbbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4abbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4abbc0:
    // 0x4abbc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4abbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4abbc4:
    // 0x4abbc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4abbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4abbc8:
    // 0x4abbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4abbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4abbcc:
    // 0x4abbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4abbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4abbd0:
    // 0x4abbd0: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x4abbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4abbd4:
    // 0x4abbd4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4abbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4abbd8:
    // 0x4abbd8: 0x8caa0780  lw          $t2, 0x780($a1)
    ctx->pc = 0x4abbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1920)));
label_4abbdc:
    // 0x4abbdc: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x4abbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_4abbe0:
    // 0x4abbe0: 0x8c660098  lw          $a2, 0x98($v1)
    ctx->pc = 0x4abbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_4abbe4:
    // 0x4abbe4: 0x8c6500a0  lw          $a1, 0xA0($v1)
    ctx->pc = 0x4abbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_4abbe8:
    // 0x4abbe8: 0x8c740078  lw          $s4, 0x78($v1)
    ctx->pc = 0x4abbe8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_4abbec:
    // 0x4abbec: 0x8c670094  lw          $a3, 0x94($v1)
    ctx->pc = 0x4abbecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_4abbf0:
    // 0x4abbf0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4abbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4abbf4:
    // 0x4abbf4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x4abbf4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_4abbf8:
    // 0x4abbf8: 0xf44823  subu        $t1, $a3, $s4
    ctx->pc = 0x4abbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_4abbfc:
    // 0x4abbfc: 0x11440020  beq         $t2, $a0, . + 4 + (0x20 << 2)
label_4abc00:
    if (ctx->pc == 0x4ABC00u) {
        ctx->pc = 0x4ABC00u;
            // 0x4abc00: 0xc5a821  addu        $s5, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->pc = 0x4ABC04u;
        goto label_4abc04;
    }
    ctx->pc = 0x4ABBFCu;
    {
        const bool branch_taken_0x4abbfc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        ctx->pc = 0x4ABC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABBFCu;
            // 0x4abc00: 0xc5a821  addu        $s5, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abbfc) {
            ctx->pc = 0x4ABC80u;
            goto label_4abc80;
        }
    }
    ctx->pc = 0x4ABC04u;
label_4abc04:
    // 0x4abc04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4abc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4abc08:
    // 0x4abc08: 0x5144001e  beql        $t2, $a0, . + 4 + (0x1E << 2)
label_4abc0c:
    if (ctx->pc == 0x4ABC0Cu) {
        ctx->pc = 0x4ABC0Cu;
            // 0x4abc0c: 0x8c67008c  lw          $a3, 0x8C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
        ctx->pc = 0x4ABC10u;
        goto label_4abc10;
    }
    ctx->pc = 0x4ABC08u;
    {
        const bool branch_taken_0x4abc08 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x4abc08) {
            ctx->pc = 0x4ABC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABC08u;
            // 0x4abc0c: 0x8c67008c  lw          $a3, 0x8C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ABC84u;
            goto label_4abc84;
        }
    }
    ctx->pc = 0x4ABC10u;
label_4abc10:
    // 0x4abc10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4abc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4abc14:
    // 0x4abc14: 0x5144000e  beql        $t2, $a0, . + 4 + (0xE << 2)
label_4abc18:
    if (ctx->pc == 0x4ABC18u) {
        ctx->pc = 0x4ABC18u;
            // 0x4abc18: 0x90680090  lbu         $t0, 0x90($v1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->pc = 0x4ABC1Cu;
        goto label_4abc1c;
    }
    ctx->pc = 0x4ABC14u;
    {
        const bool branch_taken_0x4abc14 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x4abc14) {
            ctx->pc = 0x4ABC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABC14u;
            // 0x4abc18: 0x90680090  lbu         $t0, 0x90($v1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ABC50u;
            goto label_4abc50;
        }
    }
    ctx->pc = 0x4ABC1Cu;
label_4abc1c:
    // 0x4abc1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4abc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4abc20:
    // 0x4abc20: 0x51440003  beql        $t2, $a0, . + 4 + (0x3 << 2)
label_4abc24:
    if (ctx->pc == 0x4ABC24u) {
        ctx->pc = 0x4ABC24u;
            // 0x4abc24: 0x8c730084  lw          $s3, 0x84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
        ctx->pc = 0x4ABC28u;
        goto label_4abc28;
    }
    ctx->pc = 0x4ABC20u;
    {
        const bool branch_taken_0x4abc20 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x4abc20) {
            ctx->pc = 0x4ABC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABC20u;
            // 0x4abc24: 0x8c730084  lw          $s3, 0x84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ABC30u;
            goto label_4abc30;
        }
    }
    ctx->pc = 0x4ABC28u;
label_4abc28:
    // 0x4abc28: 0x10000022  b           . + 4 + (0x22 << 2)
label_4abc2c:
    if (ctx->pc == 0x4ABC2Cu) {
        ctx->pc = 0x4ABC30u;
        goto label_4abc30;
    }
    ctx->pc = 0x4ABC28u;
    {
        const bool branch_taken_0x4abc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abc28) {
            ctx->pc = 0x4ABCB4u;
            goto label_4abcb4;
        }
    }
    ctx->pc = 0x4ABC30u;
label_4abc30:
    // 0x4abc30: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4abc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4abc34:
    // 0x4abc34: 0x24a55330  addiu       $a1, $a1, 0x5330
    ctx->pc = 0x4abc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21296));
label_4abc38:
    // 0x4abc38: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x4abc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_4abc3c:
    // 0x4abc3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4abc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abc40:
    // 0x4abc40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4abc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abc44:
    // 0x4abc44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4abc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abc48:
    // 0x4abc48: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4abc4c:
    if (ctx->pc == 0x4ABC4Cu) {
        ctx->pc = 0x4ABC4Cu;
            // 0x4abc4c: 0xac85a988  sw          $a1, -0x5678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294945160), GPR_U32(ctx, 5));
        ctx->pc = 0x4ABC50u;
        goto label_4abc50;
    }
    ctx->pc = 0x4ABC48u;
    {
        const bool branch_taken_0x4abc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABC48u;
            // 0x4abc4c: 0xac85a988  sw          $a1, -0x5678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294945160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc48) {
            ctx->pc = 0x4ABCBCu;
            goto label_4abcbc;
        }
    }
    ctx->pc = 0x4ABC50u;
label_4abc50:
    // 0x4abc50: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4abc50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4abc54:
    // 0x4abc54: 0x8c66008c  lw          $a2, 0x8C($v1)
    ctx->pc = 0x4abc54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4abc58:
    // 0x4abc58: 0x24a55370  addiu       $a1, $a1, 0x5370
    ctx->pc = 0x4abc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21360));
label_4abc5c:
    // 0x4abc5c: 0x8c670084  lw          $a3, 0x84($v1)
    ctx->pc = 0x4abc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4abc60:
    // 0x4abc60: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x4abc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_4abc64:
    // 0x4abc64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4abc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abc68:
    // 0x4abc68: 0xc89823  subu        $s3, $a2, $t0
    ctx->pc = 0x4abc68u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_4abc6c:
    // 0x4abc6c: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x4abc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_4abc70:
    // 0x4abc70: 0xac85a988  sw          $a1, -0x5678($a0)
    ctx->pc = 0x4abc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294945160), GPR_U32(ctx, 5));
label_4abc74:
    // 0x4abc74: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x4abc74u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_4abc78:
    // 0x4abc78: 0x10000010  b           . + 4 + (0x10 << 2)
label_4abc7c:
    if (ctx->pc == 0x4ABC7Cu) {
        ctx->pc = 0x4ABC7Cu;
            // 0x4abc7c: 0xf38823  subu        $s1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->pc = 0x4ABC80u;
        goto label_4abc80;
    }
    ctx->pc = 0x4ABC78u;
    {
        const bool branch_taken_0x4abc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABC78u;
            // 0x4abc7c: 0xf38823  subu        $s1, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abc78) {
            ctx->pc = 0x4ABCBCu;
            goto label_4abcbc;
        }
    }
    ctx->pc = 0x4ABC80u;
label_4abc80:
    // 0x4abc80: 0x8c67008c  lw          $a3, 0x8C($v1)
    ctx->pc = 0x4abc80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4abc84:
    // 0x4abc84: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4abc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4abc88:
    // 0x4abc88: 0x8c680080  lw          $t0, 0x80($v1)
    ctx->pc = 0x4abc88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_4abc8c:
    // 0x4abc8c: 0x24a553b0  addiu       $a1, $a1, 0x53B0
    ctx->pc = 0x4abc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21424));
label_4abc90:
    // 0x4abc90: 0x8c730084  lw          $s3, 0x84($v1)
    ctx->pc = 0x4abc90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4abc94:
    // 0x4abc94: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x4abc94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_4abc98:
    // 0x4abc98: 0x90660090  lbu         $a2, 0x90($v1)
    ctx->pc = 0x4abc98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
label_4abc9c:
    // 0x4abc9c: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x4abc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_4abca0:
    // 0x4abca0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4abca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abca4:
    // 0x4abca4: 0x1149023  subu        $s2, $t0, $s4
    ctx->pc = 0x4abca4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
label_4abca8:
    // 0x4abca8: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x4abca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4abcac:
    // 0x4abcac: 0x10000003  b           . + 4 + (0x3 << 2)
label_4abcb0:
    if (ctx->pc == 0x4ABCB0u) {
        ctx->pc = 0x4ABCB0u;
            // 0x4abcb0: 0xac85a988  sw          $a1, -0x5678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294945160), GPR_U32(ctx, 5));
        ctx->pc = 0x4ABCB4u;
        goto label_4abcb4;
    }
    ctx->pc = 0x4ABCACu;
    {
        const bool branch_taken_0x4abcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABCACu;
            // 0x4abcb0: 0xac85a988  sw          $a1, -0x5678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294945160), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abcac) {
            ctx->pc = 0x4ABCBCu;
            goto label_4abcbc;
        }
    }
    ctx->pc = 0x4ABCB4u;
label_4abcb4:
    // 0x4abcb4: 0x10000091  b           . + 4 + (0x91 << 2)
label_4abcb8:
    if (ctx->pc == 0x4ABCB8u) {
        ctx->pc = 0x4ABCB8u;
            // 0x4abcb8: 0x7bbe0080  lq          $fp, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4ABCBCu;
        goto label_4abcbc;
    }
    ctx->pc = 0x4ABCB4u;
    {
        const bool branch_taken_0x4abcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABCB4u;
            // 0x4abcb8: 0x7bbe0080  lq          $fp, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abcb4) {
            ctx->pc = 0x4ABEFCu;
            goto label_4abefc;
        }
    }
    ctx->pc = 0x4ABCBCu;
label_4abcbc:
    // 0x4abcbc: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x4abcbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
label_4abcc0:
    // 0x4abcc0: 0x3c0b00be  lui         $t3, 0xBE
    ctx->pc = 0x4abcc0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)190 << 16));
label_4abcc4:
    // 0x4abcc4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x4abcc4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_4abcc8:
    // 0x4abcc8: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x4abcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
label_4abccc:
    // 0x4abccc: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x4abcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4abcd0:
    // 0x4abcd0: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x4abcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_4abcd4:
    // 0x4abcd4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4abcd4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4abcd8:
    // 0x4abcd8: 0xd53023  subu        $a2, $a2, $s5
    ctx->pc = 0x4abcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4abcdc:
    // 0x4abcdc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4abcdcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abce0:
    // 0x4abce0: 0x256ba850  addiu       $t3, $t3, -0x57B0
    ctx->pc = 0x4abce0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294944848));
label_4abce4:
    // 0x4abce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4abce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4abce8:
    // 0x4abce8: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x4abce8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4abcec:
    // 0x4abcec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4abcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4abcf0:
    // 0x4abcf0: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x4abcf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4abcf4:
    // 0x4abcf4: 0xe480a980  swc1        $f0, -0x5680($a0)
    ctx->pc = 0x4abcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294945152), bits); }
label_4abcf8:
    // 0x4abcf8: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x4abcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_4abcfc:
    // 0x4abcfc: 0x2a62021  addu        $a0, $s5, $a2
    ctx->pc = 0x4abcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_4abd00:
    // 0x4abd00: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4abd00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4abd04:
    // 0x4abd04: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x4abd04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4abd08:
    // 0x4abd08: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x4abd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_4abd0c:
    // 0x4abd0c: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x4abd0cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4abd10:
    // 0x4abd10: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x4abd10u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4abd14:
    // 0x4abd14: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x4abd14u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4abd18:
    // 0x4abd18: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x4abd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4abd1c:
    // 0x4abd1c: 0x260c82d  daddu       $t9, $s3, $zero
    ctx->pc = 0x4abd1cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4abd20:
    // 0x4abd20: 0x115e000f  beq         $t2, $fp, . + 4 + (0xF << 2)
label_4abd24:
    if (ctx->pc == 0x4ABD24u) {
        ctx->pc = 0x4ABD24u;
            // 0x4abd24: 0xa0c02d  daddu       $t8, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD28u;
        goto label_4abd28;
    }
    ctx->pc = 0x4ABD20u;
    {
        const bool branch_taken_0x4abd20 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 30));
        ctx->pc = 0x4ABD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABD20u;
            // 0x4abd24: 0xa0c02d  daddu       $t8, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd20) {
            ctx->pc = 0x4ABD60u;
            goto label_4abd60;
        }
    }
    ctx->pc = 0x4ABD28u;
label_4abd28:
    // 0x4abd28: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x4abd28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4abd2c:
    // 0x4abd2c: 0x1156000c  beq         $t2, $s6, . + 4 + (0xC << 2)
label_4abd30:
    if (ctx->pc == 0x4ABD30u) {
        ctx->pc = 0x4ABD34u;
        goto label_4abd34;
    }
    ctx->pc = 0x4ABD2Cu;
    {
        const bool branch_taken_0x4abd2c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 22));
        if (branch_taken_0x4abd2c) {
            ctx->pc = 0x4ABD60u;
            goto label_4abd60;
        }
    }
    ctx->pc = 0x4ABD34u;
label_4abd34:
    // 0x4abd34: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x4abd34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4abd38:
    // 0x4abd38: 0x11560003  beq         $t2, $s6, . + 4 + (0x3 << 2)
label_4abd3c:
    if (ctx->pc == 0x4ABD3Cu) {
        ctx->pc = 0x4ABD40u;
        goto label_4abd40;
    }
    ctx->pc = 0x4ABD38u;
    {
        const bool branch_taken_0x4abd38 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 22));
        if (branch_taken_0x4abd38) {
            ctx->pc = 0x4ABD48u;
            goto label_4abd48;
        }
    }
    ctx->pc = 0x4ABD40u;
label_4abd40:
    // 0x4abd40: 0x10000015  b           . + 4 + (0x15 << 2)
label_4abd44:
    if (ctx->pc == 0x4ABD44u) {
        ctx->pc = 0x4ABD48u;
        goto label_4abd48;
    }
    ctx->pc = 0x4ABD40u;
    {
        const bool branch_taken_0x4abd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abd40) {
            ctx->pc = 0x4ABD98u;
            goto label_4abd98;
        }
    }
    ctx->pc = 0x4ABD48u;
label_4abd48:
    // 0x4abd48: 0x31960001  andi        $s6, $t4, 0x1
    ctx->pc = 0x4abd48u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4abd4c:
    // 0x4abd4c: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
label_4abd50:
    if (ctx->pc == 0x4ABD50u) {
        ctx->pc = 0x4ABD54u;
        goto label_4abd54;
    }
    ctx->pc = 0x4ABD4Cu;
    {
        const bool branch_taken_0x4abd4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abd4c) {
            ctx->pc = 0x4ABD98u;
            goto label_4abd98;
        }
    }
    ctx->pc = 0x4ABD54u;
label_4abd54:
    // 0x4abd54: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x4abd54u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4abd58:
    // 0x4abd58: 0x1000000f  b           . + 4 + (0xF << 2)
label_4abd5c:
    if (ctx->pc == 0x4ABD5Cu) {
        ctx->pc = 0x4ABD5Cu;
            // 0x4abd5c: 0x60c82d  daddu       $t9, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD60u;
        goto label_4abd60;
    }
    ctx->pc = 0x4ABD58u;
    {
        const bool branch_taken_0x4abd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABD58u;
            // 0x4abd5c: 0x60c82d  daddu       $t9, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd58) {
            ctx->pc = 0x4ABD98u;
            goto label_4abd98;
        }
    }
    ctx->pc = 0x4ABD60u;
label_4abd60:
    // 0x4abd60: 0x31960001  andi        $s6, $t4, 0x1
    ctx->pc = 0x4abd60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_4abd64:
    // 0x4abd64: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_4abd68:
    if (ctx->pc == 0x4ABD68u) {
        ctx->pc = 0x4ABD6Cu;
        goto label_4abd6c;
    }
    ctx->pc = 0x4ABD64u;
    {
        const bool branch_taken_0x4abd64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abd64) {
            ctx->pc = 0x4ABD80u;
            goto label_4abd80;
        }
    }
    ctx->pc = 0x4ABD6Cu;
label_4abd6c:
    // 0x4abd6c: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x4abd6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_4abd70:
    // 0x4abd70: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x4abd70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_4abd74:
    // 0x4abd74: 0x2e0682d  daddu       $t5, $s7, $zero
    ctx->pc = 0x4abd74u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4abd78:
    // 0x4abd78: 0x2e0c02d  daddu       $t8, $s7, $zero
    ctx->pc = 0x4abd78u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4abd7c:
    // 0x4abd7c: 0x0  nop
    ctx->pc = 0x4abd7cu;
    // NOP
label_4abd80:
    // 0x4abd80: 0x31960002  andi        $s6, $t4, 0x2
    ctx->pc = 0x4abd80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2);
label_4abd84:
    // 0x4abd84: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_4abd88:
    if (ctx->pc == 0x4ABD88u) {
        ctx->pc = 0x4ABD8Cu;
        goto label_4abd8c;
    }
    ctx->pc = 0x4ABD84u;
    {
        const bool branch_taken_0x4abd84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4abd84) {
            ctx->pc = 0x4ABD98u;
            goto label_4abd98;
        }
    }
    ctx->pc = 0x4ABD8Cu;
label_4abd8c:
    // 0x4abd8c: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x4abd8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_4abd90:
    // 0x4abd90: 0x331c821  addu        $t9, $t9, $s1
    ctx->pc = 0x4abd90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 17)));
label_4abd94:
    // 0x4abd94: 0x0  nop
    ctx->pc = 0x4abd94u;
    // NOP
label_4abd98:
    // 0x4abd98: 0xad6f0000  sw          $t7, 0x0($t3)
    ctx->pc = 0x4abd98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 15));
label_4abd9c:
    // 0x4abd9c: 0x44980000  mtc1        $t8, $f0
    ctx->pc = 0x4abd9cu;
    { uint32_t bits = GPR_U32(ctx, 24); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4abda0:
    // 0x4abda0: 0xad6e0004  sw          $t6, 0x4($t3)
    ctx->pc = 0x4abda0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 14));
label_4abda4:
    // 0x4abda4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x4abda4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4abda8:
    // 0x4abda8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4abda8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_4abdac:
    // 0x4abdac: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4abdacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4abdb0:
    // 0x4abdb0: 0xad6d0008  sw          $t5, 0x8($t3)
    ctx->pc = 0x4abdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 13));
label_4abdb4:
    // 0x4abdb4: 0x12dc018  mult        $t8, $t1, $t5
    ctx->pc = 0x4abdb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_4abdb8:
    // 0x4abdb8: 0x18ab02a  slt         $s6, $t4, $t2
    ctx->pc = 0x4abdb8u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_4abdbc:
    // 0x4abdbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4abdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4abdc0:
    // 0x4abdc0: 0x44990000  mtc1        $t9, $f0
    ctx->pc = 0x4abdc0u;
    { uint32_t bits = GPR_U32(ctx, 25); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4abdc4:
    // 0x4abdc4: 0x0  nop
    ctx->pc = 0x4abdc4u;
    // NOP
label_4abdc8:
    // 0x4abdc8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x4abdc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4abdcc:
    // 0x4abdcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4abdccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4abdd0:
    // 0x4abdd0: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x4abdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4abdd4:
    // 0x4abdd4: 0x4603001c  madd.s      $f0, $f0, $f3
    ctx->pc = 0x4abdd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
label_4abdd8:
    // 0x4abdd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4abdd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4abddc:
    // 0x4abddc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x4abddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_4abde0:
    // 0x4abde0: 0x0  nop
    ctx->pc = 0x4abde0u;
    // NOP
label_4abde4:
    // 0x4abde4: 0xad700014  sw          $s0, 0x14($t3)
    ctx->pc = 0x4abde4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 16));
label_4abde8:
    // 0x4abde8: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x4abde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4abdec:
    // 0x4abdec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4abdecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4abdf0:
    // 0x4abdf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4abdf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4abdf4:
    // 0x4abdf4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x4abdf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_4abdf8:
    // 0x4abdf8: 0x0  nop
    ctx->pc = 0x4abdf8u;
    // NOP
label_4abdfc:
    // 0x4abdfc: 0xad700018  sw          $s0, 0x18($t3)
    ctx->pc = 0x4abdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 16));
label_4abe00:
    // 0x4abe00: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x4abe00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
label_4abe04:
    // 0x4abe04: 0xa5780020  sh          $t8, 0x20($t3)
    ctx->pc = 0x4abe04u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 32), (uint16_t)GPR_U32(ctx, 24));
label_4abe08:
    // 0x4abe08: 0xa5780024  sh          $t8, 0x24($t3)
    ctx->pc = 0x4abe08u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 36), (uint16_t)GPR_U32(ctx, 24));
label_4abe0c:
    // 0x4abe0c: 0x81180023  lb          $t8, 0x23($t0)
    ctx->pc = 0x4abe0cu;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 35)));
label_4abe10:
    // 0x4abe10: 0x91100026  lbu         $s0, 0x26($t0)
    ctx->pc = 0x4abe10u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 38)));
label_4abe14:
    // 0x4abe14: 0x3108023  subu        $s0, $t8, $s0
    ctx->pc = 0x4abe14u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
label_4abe18:
    // 0x4abe18: 0xa5700022  sh          $s0, 0x22($t3)
    ctx->pc = 0x4abe18u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 34), (uint16_t)GPR_U32(ctx, 16));
label_4abe1c:
    // 0x4abe1c: 0x81100023  lb          $s0, 0x23($t0)
    ctx->pc = 0x4abe1cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 35)));
label_4abe20:
    // 0x4abe20: 0xa5700026  sh          $s0, 0x26($t3)
    ctx->pc = 0x4abe20u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 38), (uint16_t)GPR_U32(ctx, 16));
label_4abe24:
    // 0x4abe24: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x4abe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4abe28:
    // 0x4abe28: 0xe5600028  swc1        $f0, 0x28($t3)
    ctx->pc = 0x4abe28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 40), bits); }
label_4abe2c:
    // 0x4abe2c: 0x91100020  lbu         $s0, 0x20($t0)
    ctx->pc = 0x4abe2cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 32)));
label_4abe30:
    // 0x4abe30: 0x720d8018  mult1       $s0, $s0, $t5
    ctx->pc = 0x4abe30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4abe34:
    // 0x4abe34: 0xa570002c  sh          $s0, 0x2C($t3)
    ctx->pc = 0x4abe34u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 44), (uint16_t)GPR_U32(ctx, 16));
label_4abe38:
    // 0x4abe38: 0x91100020  lbu         $s0, 0x20($t0)
    ctx->pc = 0x4abe38u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 32)));
label_4abe3c:
    // 0x4abe3c: 0x20d8018  mult        $s0, $s0, $t5
    ctx->pc = 0x4abe3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4abe40:
    // 0x4abe40: 0xa5700030  sh          $s0, 0x30($t3)
    ctx->pc = 0x4abe40u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 48), (uint16_t)GPR_U32(ctx, 16));
label_4abe44:
    // 0x4abe44: 0x81180023  lb          $t8, 0x23($t0)
    ctx->pc = 0x4abe44u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 35)));
label_4abe48:
    // 0x4abe48: 0x91100026  lbu         $s0, 0x26($t0)
    ctx->pc = 0x4abe48u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 38)));
label_4abe4c:
    // 0x4abe4c: 0x3108023  subu        $s0, $t8, $s0
    ctx->pc = 0x4abe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
label_4abe50:
    // 0x4abe50: 0xa570002e  sh          $s0, 0x2E($t3)
    ctx->pc = 0x4abe50u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 46), (uint16_t)GPR_U32(ctx, 16));
label_4abe54:
    // 0x4abe54: 0x81100023  lb          $s0, 0x23($t0)
    ctx->pc = 0x4abe54u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 35)));
label_4abe58:
    // 0x4abe58: 0xa5700032  sh          $s0, 0x32($t3)
    ctx->pc = 0x4abe58u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 50), (uint16_t)GPR_U32(ctx, 16));
label_4abe5c:
    // 0x4abe5c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x4abe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4abe60:
    // 0x4abe60: 0xe5600034  swc1        $f0, 0x34($t3)
    ctx->pc = 0x4abe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 52), bits); }
label_4abe64:
    // 0x4abe64: 0x91100021  lbu         $s0, 0x21($t0)
    ctx->pc = 0x4abe64u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 33)));
label_4abe68:
    // 0x4abe68: 0x720d8018  mult1       $s0, $s0, $t5
    ctx->pc = 0x4abe68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4abe6c:
    // 0x4abe6c: 0xa5700038  sh          $s0, 0x38($t3)
    ctx->pc = 0x4abe6cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 56), (uint16_t)GPR_U32(ctx, 16));
label_4abe70:
    // 0x4abe70: 0x91100021  lbu         $s0, 0x21($t0)
    ctx->pc = 0x4abe70u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 33)));
label_4abe74:
    // 0x4abe74: 0x20d8018  mult        $s0, $s0, $t5
    ctx->pc = 0x4abe74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4abe78:
    // 0x4abe78: 0xa570003c  sh          $s0, 0x3C($t3)
    ctx->pc = 0x4abe78u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 60), (uint16_t)GPR_U32(ctx, 16));
label_4abe7c:
    // 0x4abe7c: 0x81180024  lb          $t8, 0x24($t0)
    ctx->pc = 0x4abe7cu;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
label_4abe80:
    // 0x4abe80: 0x91100026  lbu         $s0, 0x26($t0)
    ctx->pc = 0x4abe80u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 38)));
label_4abe84:
    // 0x4abe84: 0x3108023  subu        $s0, $t8, $s0
    ctx->pc = 0x4abe84u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 16)));
label_4abe88:
    // 0x4abe88: 0xa570003a  sh          $s0, 0x3A($t3)
    ctx->pc = 0x4abe88u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 58), (uint16_t)GPR_U32(ctx, 16));
label_4abe8c:
    // 0x4abe8c: 0x81100024  lb          $s0, 0x24($t0)
    ctx->pc = 0x4abe8cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
label_4abe90:
    // 0x4abe90: 0xa570003e  sh          $s0, 0x3E($t3)
    ctx->pc = 0x4abe90u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 62), (uint16_t)GPR_U32(ctx, 16));
label_4abe94:
    // 0x4abe94: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x4abe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4abe98:
    // 0x4abe98: 0xe5600040  swc1        $f0, 0x40($t3)
    ctx->pc = 0x4abe98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 64), bits); }
label_4abe9c:
    // 0x4abe9c: 0x91100022  lbu         $s0, 0x22($t0)
    ctx->pc = 0x4abe9cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 34)));
label_4abea0:
    // 0x4abea0: 0x720d8018  mult1       $s0, $s0, $t5
    ctx->pc = 0x4abea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4abea4:
    // 0x4abea4: 0xa5700044  sh          $s0, 0x44($t3)
    ctx->pc = 0x4abea4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 68), (uint16_t)GPR_U32(ctx, 16));
label_4abea8:
    // 0x4abea8: 0x91100022  lbu         $s0, 0x22($t0)
    ctx->pc = 0x4abea8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 34)));
label_4abeac:
    // 0x4abeac: 0x20d6818  mult        $t5, $s0, $t5
    ctx->pc = 0x4abeacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_4abeb0:
    // 0x4abeb0: 0xa56d0048  sh          $t5, 0x48($t3)
    ctx->pc = 0x4abeb0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 72), (uint16_t)GPR_U32(ctx, 13));
label_4abeb4:
    // 0x4abeb4: 0x81100024  lb          $s0, 0x24($t0)
    ctx->pc = 0x4abeb4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
label_4abeb8:
    // 0x4abeb8: 0x910d0026  lbu         $t5, 0x26($t0)
    ctx->pc = 0x4abeb8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 38)));
label_4abebc:
    // 0x4abebc: 0x20d6823  subu        $t5, $s0, $t5
    ctx->pc = 0x4abebcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
label_4abec0:
    // 0x4abec0: 0xa56d0046  sh          $t5, 0x46($t3)
    ctx->pc = 0x4abec0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 70), (uint16_t)GPR_U32(ctx, 13));
label_4abec4:
    // 0x4abec4: 0x810d0024  lb          $t5, 0x24($t0)
    ctx->pc = 0x4abec4u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
label_4abec8:
    // 0x4abec8: 0xa56d004a  sh          $t5, 0x4A($t3)
    ctx->pc = 0x4abec8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 74), (uint16_t)GPR_U32(ctx, 13));
label_4abecc:
    // 0x4abecc: 0x856d0044  lh          $t5, 0x44($t3)
    ctx->pc = 0x4abeccu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 68)));
label_4abed0:
    // 0x4abed0: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x4abed0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_4abed4:
    // 0x4abed4: 0xad6d000c  sw          $t5, 0xC($t3)
    ctx->pc = 0x4abed4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 13));
label_4abed8:
    // 0x4abed8: 0x810f0024  lb          $t7, 0x24($t0)
    ctx->pc = 0x4abed8u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 36)));
label_4abedc:
    // 0x4abedc: 0x910d0026  lbu         $t5, 0x26($t0)
    ctx->pc = 0x4abedcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 38)));
label_4abee0:
    // 0x4abee0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x4abee0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_4abee4:
    // 0x4abee4: 0xd6843  sra         $t5, $t5, 1
    ctx->pc = 0x4abee4u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 1));
label_4abee8:
    // 0x4abee8: 0x1cd6823  subu        $t5, $t6, $t5
    ctx->pc = 0x4abee8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_4abeec:
    // 0x4abeec: 0xad6d0010  sw          $t5, 0x10($t3)
    ctx->pc = 0x4abeecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 13));
label_4abef0:
    // 0x4abef0: 0x16c0ff86  bnez        $s6, . + 4 + (-0x7A << 2)
label_4abef4:
    if (ctx->pc == 0x4ABEF4u) {
        ctx->pc = 0x4ABEF4u;
            // 0x4abef4: 0x256b004c  addiu       $t3, $t3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 76));
        ctx->pc = 0x4ABEF8u;
        goto label_4abef8;
    }
    ctx->pc = 0x4ABEF0u;
    {
        const bool branch_taken_0x4abef0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABEF0u;
            // 0x4abef4: 0x256b004c  addiu       $t3, $t3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abef0) {
            ctx->pc = 0x4ABD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4abd0c;
        }
    }
    ctx->pc = 0x4ABEF8u;
label_4abef8:
    // 0x4abef8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4abef8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4abefc:
    // 0x4abefc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4abefcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4abf00:
    // 0x4abf00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4abf00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4abf04:
    // 0x4abf04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4abf04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4abf08:
    // 0x4abf08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4abf08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4abf0c:
    // 0x4abf0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4abf0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4abf10:
    // 0x4abf10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4abf10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4abf14:
    // 0x4abf14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4abf14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4abf18:
    // 0x4abf18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4abf18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4abf1c:
    // 0x4abf1c: 0x3e00008  jr          $ra
label_4abf20:
    if (ctx->pc == 0x4ABF20u) {
        ctx->pc = 0x4ABF20u;
            // 0x4abf20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4ABF24u;
        goto label_4abf24;
    }
    ctx->pc = 0x4ABF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABF1Cu;
            // 0x4abf20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ABF24u;
label_4abf24:
    // 0x4abf24: 0x0  nop
    ctx->pc = 0x4abf24u;
    // NOP
label_4abf28:
    // 0x4abf28: 0x0  nop
    ctx->pc = 0x4abf28u;
    // NOP
label_4abf2c:
    // 0x4abf2c: 0x0  nop
    ctx->pc = 0x4abf2cu;
    // NOP
label_4abf30:
    // 0x4abf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4abf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4abf34:
    // 0x4abf34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4abf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4abf38:
    // 0x4abf38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4abf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4abf3c:
    // 0x4abf3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4abf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4abf40:
    // 0x4abf40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4abf40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4abf44:
    // 0x4abf44: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4abf48:
    if (ctx->pc == 0x4ABF48u) {
        ctx->pc = 0x4ABF48u;
            // 0x4abf48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF4Cu;
        goto label_4abf4c;
    }
    ctx->pc = 0x4ABF44u;
    {
        const bool branch_taken_0x4abf44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABF44u;
            // 0x4abf48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf44) {
            ctx->pc = 0x4ABF78u;
            goto label_4abf78;
        }
    }
    ctx->pc = 0x4ABF4Cu;
label_4abf4c:
    // 0x4abf4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4abf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4abf50:
    // 0x4abf50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4abf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abf54:
    // 0x4abf54: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x4abf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
label_4abf58:
    // 0x4abf58: 0xc0e9fc8  jal         func_3A7F20
label_4abf5c:
    if (ctx->pc == 0x4ABF5Cu) {
        ctx->pc = 0x4ABF5Cu;
            // 0x4abf5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4ABF60u;
        goto label_4abf60;
    }
    ctx->pc = 0x4ABF58u;
    SET_GPR_U32(ctx, 31, 0x4ABF60u);
    ctx->pc = 0x4ABF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABF58u;
            // 0x4abf5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F20u;
    if (runtime->hasFunction(0x3A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABF60u; }
        if (ctx->pc != 0x4ABF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F20_0x3a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABF60u; }
        if (ctx->pc != 0x4ABF60u) { return; }
    }
    ctx->pc = 0x4ABF60u;
label_4abf60:
    // 0x4abf60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4abf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4abf64:
    // 0x4abf64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4abf64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4abf68:
    // 0x4abf68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4abf6c:
    if (ctx->pc == 0x4ABF6Cu) {
        ctx->pc = 0x4ABF6Cu;
            // 0x4abf6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF70u;
        goto label_4abf70;
    }
    ctx->pc = 0x4ABF68u;
    {
        const bool branch_taken_0x4abf68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4abf68) {
            ctx->pc = 0x4ABF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABF68u;
            // 0x4abf6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ABF7Cu;
            goto label_4abf7c;
        }
    }
    ctx->pc = 0x4ABF70u;
label_4abf70:
    // 0x4abf70: 0xc0400a8  jal         func_1002A0
label_4abf74:
    if (ctx->pc == 0x4ABF74u) {
        ctx->pc = 0x4ABF74u;
            // 0x4abf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF78u;
        goto label_4abf78;
    }
    ctx->pc = 0x4ABF70u;
    SET_GPR_U32(ctx, 31, 0x4ABF78u);
    ctx->pc = 0x4ABF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABF70u;
            // 0x4abf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABF78u; }
        if (ctx->pc != 0x4ABF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ABF78u; }
        if (ctx->pc != 0x4ABF78u) { return; }
    }
    ctx->pc = 0x4ABF78u;
label_4abf78:
    // 0x4abf78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4abf78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4abf7c:
    // 0x4abf7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4abf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4abf80:
    // 0x4abf80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4abf80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4abf84:
    // 0x4abf84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4abf84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4abf88:
    // 0x4abf88: 0x3e00008  jr          $ra
label_4abf8c:
    if (ctx->pc == 0x4ABF8Cu) {
        ctx->pc = 0x4ABF8Cu;
            // 0x4abf8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4ABF90u;
        goto label_4abf90;
    }
    ctx->pc = 0x4ABF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABF88u;
            // 0x4abf8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ABF90u;
label_4abf90:
    // 0x4abf90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4abf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4abf94:
    // 0x4abf94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4abf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4abf98:
    // 0x4abf98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4abf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4abf9c:
    // 0x4abf9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4abf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4abfa0:
    // 0x4abfa0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4abfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4abfa4:
    // 0x4abfa4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4abfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4abfa8:
    // 0x4abfa8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4abfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4abfac:
    // 0x4abfac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4abfacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4abfb0:
    // 0x4abfb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4abfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4abfb4:
    // 0x4abfb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4abfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4abfb8:
    // 0x4abfb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4abfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4abfbc:
    // 0x4abfbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4abfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4abfc0:
    // 0x4abfc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4abfc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4abfc4:
    // 0x4abfc4: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x4abfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4abfc8:
    // 0x4abfc8: 0x90830ce4  lbu         $v1, 0xCE4($a0)
    ctx->pc = 0x4abfc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3300)));
label_4abfcc:
    // 0x4abfcc: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x4abfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
label_4abfd0:
    // 0x4abfd0: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x4abfd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4abfd4:
    // 0x4abfd4: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
label_4abfd8:
    if (ctx->pc == 0x4ABFD8u) {
        ctx->pc = 0x4ABFD8u;
            // 0x4abfd8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ABFDCu;
        goto label_4abfdc;
    }
    ctx->pc = 0x4ABFD4u;
    {
        const bool branch_taken_0x4abfd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABFD4u;
            // 0x4abfd8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abfd4) {
            ctx->pc = 0x4AC188u;
            goto label_4ac188;
        }
    }
    ctx->pc = 0x4ABFDCu;
label_4abfdc:
    // 0x4abfdc: 0xc4810d40  lwc1        $f1, 0xD40($a0)
    ctx->pc = 0x4abfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4abfe0:
    // 0x4abfe0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4abfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4abfe4:
    // 0x4abfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4abfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4abfe8:
    // 0x4abfe8: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x4abfe8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
label_4abfec:
    // 0x4abfec: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x4abfecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
label_4abff0:
    // 0x4abff0: 0x8c920cc8  lw          $s2, 0xCC8($a0)
    ctx->pc = 0x4abff0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3272)));
label_4abff4:
    // 0x4abff4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4abff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4abff8:
    // 0x4abff8: 0x26945460  addiu       $s4, $s4, 0x5460
    ctx->pc = 0x4abff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 21600));
label_4abffc:
    // 0x4abffc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4ac000:
    if (ctx->pc == 0x4AC000u) {
        ctx->pc = 0x4AC000u;
            // 0x4ac000: 0x26d65438  addiu       $s6, $s6, 0x5438 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 21560));
        ctx->pc = 0x4AC004u;
        goto label_4ac004;
    }
    ctx->pc = 0x4ABFFCu;
    {
        const bool branch_taken_0x4abffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4AC000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ABFFCu;
            // 0x4ac000: 0x26d65438  addiu       $s6, $s6, 0x5438 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 21560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abffc) {
            ctx->pc = 0x4AC014u;
            goto label_4ac014;
        }
    }
    ctx->pc = 0x4AC004u;
label_4ac004:
    // 0x4ac004: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ac004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ac008:
    // 0x4ac008: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x4ac008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_4ac00c:
    // 0x4ac00c: 0x10000008  b           . + 4 + (0x8 << 2)
label_4ac010:
    if (ctx->pc == 0x4AC010u) {
        ctx->pc = 0x4AC010u;
            // 0x4ac010: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4AC014u;
        goto label_4ac014;
    }
    ctx->pc = 0x4AC00Cu;
    {
        const bool branch_taken_0x4ac00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC00Cu;
            // 0x4ac010: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac00c) {
            ctx->pc = 0x4AC030u;
            goto label_4ac030;
        }
    }
    ctx->pc = 0x4AC014u;
label_4ac014:
    // 0x4ac014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ac014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ac018:
    // 0x4ac018: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4ac018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4ac01c:
    // 0x4ac01c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ac01cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ac020:
    // 0x4ac020: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x4ac020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_4ac024:
    // 0x4ac024: 0x0  nop
    ctx->pc = 0x4ac024u;
    // NOP
label_4ac028:
    // 0x4ac028: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4ac028u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4ac02c:
    // 0x4ac02c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x4ac02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_4ac030:
    // 0x4ac030: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ac030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4ac034:
    // 0x4ac034: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x4ac034u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ac038:
    // 0x4ac038: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ac038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ac03c:
    // 0x4ac03c: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x4ac03cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4ac040:
    // 0x4ac040: 0xc0db60c  jal         func_36D830
label_4ac044:
    if (ctx->pc == 0x4AC044u) {
        ctx->pc = 0x4AC044u;
            // 0x4ac044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC048u;
        goto label_4ac048;
    }
    ctx->pc = 0x4AC040u;
    SET_GPR_U32(ctx, 31, 0x4AC048u);
    ctx->pc = 0x4AC044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC040u;
            // 0x4ac044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D830u;
    if (runtime->hasFunction(0x36D830u)) {
        auto targetFn = runtime->lookupFunction(0x36D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC048u; }
        if (ctx->pc != 0x4AC048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D830_0x36d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC048u; }
        if (ctx->pc != 0x4AC048u) { return; }
    }
    ctx->pc = 0x4AC048u;
label_4ac048:
    // 0x4ac048: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
label_4ac04c:
    if (ctx->pc == 0x4AC04Cu) {
        ctx->pc = 0x4AC04Cu;
            // 0x4ac04c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4AC050u;
        goto label_4ac050;
    }
    ctx->pc = 0x4AC048u;
    {
        const bool branch_taken_0x4ac048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac048) {
            ctx->pc = 0x4AC04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC048u;
            // 0x4ac04c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC18Cu;
            goto label_4ac18c;
        }
    }
    ctx->pc = 0x4AC050u;
label_4ac050:
    // 0x4ac050: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ac050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ac054:
    // 0x4ac054: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x4ac054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_4ac058:
    // 0x4ac058: 0xc0506ac  jal         func_141AB0
label_4ac05c:
    if (ctx->pc == 0x4AC05Cu) {
        ctx->pc = 0x4AC05Cu;
            // 0x4ac05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC060u;
        goto label_4ac060;
    }
    ctx->pc = 0x4AC058u;
    SET_GPR_U32(ctx, 31, 0x4AC060u);
    ctx->pc = 0x4AC05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC058u;
            // 0x4ac05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC060u; }
        if (ctx->pc != 0x4AC060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC060u; }
        if (ctx->pc != 0x4AC060u) { return; }
    }
    ctx->pc = 0x4AC060u;
label_4ac060:
    // 0x4ac060: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ac060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac064:
    // 0x4ac064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac068:
    // 0x4ac068: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4ac068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4ac06c:
    // 0x4ac06c: 0x320f809  jalr        $t9
label_4ac070:
    if (ctx->pc == 0x4AC070u) {
        ctx->pc = 0x4AC070u;
            // 0x4ac070: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4AC074u;
        goto label_4ac074;
    }
    ctx->pc = 0x4AC06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC074u);
        ctx->pc = 0x4AC070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC06Cu;
            // 0x4ac070: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC074u; }
            if (ctx->pc != 0x4AC074u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC074u;
label_4ac074:
    // 0x4ac074: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4ac074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac078:
    // 0x4ac078: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ac078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ac07c:
    // 0x4ac07c: 0x320f809  jalr        $t9
label_4ac080:
    if (ctx->pc == 0x4AC080u) {
        ctx->pc = 0x4AC080u;
            // 0x4ac080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC084u;
        goto label_4ac084;
    }
    ctx->pc = 0x4AC07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC084u);
        ctx->pc = 0x4AC080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC07Cu;
            // 0x4ac080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC084u; }
            if (ctx->pc != 0x4AC084u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC084u;
label_4ac084:
    // 0x4ac084: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4ac084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ac088:
    // 0x4ac088: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4ac088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ac08c:
    // 0x4ac08c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4ac08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac090:
    // 0x4ac090: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ac090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ac094:
    // 0x4ac094: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x4ac094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_4ac098:
    // 0x4ac098: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ac098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ac09c:
    // 0x4ac09c: 0x320f809  jalr        $t9
label_4ac0a0:
    if (ctx->pc == 0x4AC0A0u) {
        ctx->pc = 0x4AC0A0u;
            // 0x4ac0a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4AC0A4u;
        goto label_4ac0a4;
    }
    ctx->pc = 0x4AC09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC0A4u);
        ctx->pc = 0x4AC0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC09Cu;
            // 0x4ac0a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC0A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC0A4u; }
            if (ctx->pc != 0x4AC0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC0A4u;
label_4ac0a4:
    // 0x4ac0a4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x4ac0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ac0a8:
    // 0x4ac0a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ac0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ac0ac:
    // 0x4ac0ac: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x4ac0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4ac0b0:
    // 0x4ac0b0: 0x87a300aa  lh          $v1, 0xAA($sp)
    ctx->pc = 0x4ac0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
label_4ac0b4:
    // 0x4ac0b4: 0x87a200a8  lh          $v0, 0xA8($sp)
    ctx->pc = 0x4ac0b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
label_4ac0b8:
    // 0x4ac0b8: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x4ac0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ac0bc:
    // 0x4ac0bc: 0x46022902  mul.s       $f4, $f5, $f2
    ctx->pc = 0x4ac0bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4ac0c0:
    // 0x4ac0c0: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x4ac0c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4ac0c4:
    // 0x4ac0c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ac0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ac0c8:
    // 0x4ac0c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ac0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ac0cc:
    // 0x4ac0cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ac0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ac0d0:
    // 0x4ac0d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ac0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac0d4:
    // 0x4ac0d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ac0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ac0d8:
    // 0x4ac0d8: 0x0  nop
    ctx->pc = 0x4ac0d8u;
    // NOP
label_4ac0dc:
    // 0x4ac0dc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4ac0dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4ac0e0:
    // 0x4ac0e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ac0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ac0e4:
    // 0x4ac0e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ac0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ac0e8:
    // 0x4ac0e8: 0x0  nop
    ctx->pc = 0x4ac0e8u;
    // NOP
label_4ac0ec:
    // 0x4ac0ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ac0ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ac0f0:
    // 0x4ac0f0: 0x86c30002  lh          $v1, 0x2($s6)
    ctx->pc = 0x4ac0f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_4ac0f4:
    // 0x4ac0f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4ac0f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ac0f8:
    // 0x4ac0f8: 0x0  nop
    ctx->pc = 0x4ac0f8u;
    // NOP
label_4ac0fc:
    // 0x4ac0fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ac0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ac100:
    // 0x4ac100: 0x46032d02  mul.s       $f20, $f5, $f3
    ctx->pc = 0x4ac100u;
    ctx->f[20] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_4ac104:
    // 0x4ac104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ac104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ac108:
    // 0x4ac108: 0x0  nop
    ctx->pc = 0x4ac108u;
    // NOP
label_4ac10c:
    // 0x4ac10c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ac10cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ac110:
    // 0x4ac110: 0x46041301  sub.s       $f12, $f2, $f4
    ctx->pc = 0x4ac110u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_4ac114:
    // 0x4ac114: 0x46041380  add.s       $f14, $f2, $f4
    ctx->pc = 0x4ac114u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_4ac118:
    // 0x4ac118: 0x46140b41  sub.s       $f13, $f1, $f20
    ctx->pc = 0x4ac118u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_4ac11c:
    // 0x4ac11c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ac11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ac120:
    // 0x4ac120: 0xc0bc284  jal         func_2F0A10
label_4ac124:
    if (ctx->pc == 0x4AC124u) {
        ctx->pc = 0x4AC124u;
            // 0x4ac124: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->pc = 0x4AC128u;
        goto label_4ac128;
    }
    ctx->pc = 0x4AC120u;
    SET_GPR_U32(ctx, 31, 0x4AC128u);
    ctx->pc = 0x4AC124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC120u;
            // 0x4ac124: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC128u; }
        if (ctx->pc != 0x4AC128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC128u; }
        if (ctx->pc != 0x4AC128u) { return; }
    }
    ctx->pc = 0x4AC128u;
label_4ac128:
    // 0x4ac128: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ac128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ac12c:
    // 0x4ac12c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4ac12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4ac130:
    // 0x4ac130: 0x320f809  jalr        $t9
label_4ac134:
    if (ctx->pc == 0x4AC134u) {
        ctx->pc = 0x4AC134u;
            // 0x4ac134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC138u;
        goto label_4ac138;
    }
    ctx->pc = 0x4AC130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4AC138u);
        ctx->pc = 0x4AC134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC130u;
            // 0x4ac134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4AC138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4AC138u; }
            if (ctx->pc != 0x4AC138u) { return; }
        }
        }
    }
    ctx->pc = 0x4AC138u;
label_4ac138:
    // 0x4ac138: 0x87a500a8  lh          $a1, 0xA8($sp)
    ctx->pc = 0x4ac138u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
label_4ac13c:
    // 0x4ac13c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x4ac13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_4ac140:
    // 0x4ac140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ac140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ac144:
    // 0x4ac144: 0x87a700aa  lh          $a3, 0xAA($sp)
    ctx->pc = 0x4ac144u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
label_4ac148:
    // 0x4ac148: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4ac148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4ac14c:
    // 0x4ac14c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ac14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ac150:
    // 0x4ac150: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x4ac150u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ac154:
    // 0x4ac154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ac158:
    // 0x4ac158: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4ac158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ac15c:
    // 0x4ac15c: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x4ac15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_4ac160:
    // 0x4ac160: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4ac160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ac164:
    // 0x4ac164: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4ac164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4ac168:
    // 0x4ac168: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x4ac168u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ac16c:
    // 0x4ac16c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4ac16cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ac170:
    // 0x4ac170: 0x0  nop
    ctx->pc = 0x4ac170u;
    // NOP
label_4ac174:
    // 0x4ac174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ac174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ac178:
    // 0x4ac178: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4ac178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4ac17c:
    // 0x4ac17c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4ac17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4ac180:
    // 0x4ac180: 0xc156f50  jal         func_55BD40
label_4ac184:
    if (ctx->pc == 0x4AC184u) {
        ctx->pc = 0x4AC184u;
            // 0x4ac184: 0x46140341  sub.s       $f13, $f0, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x4AC188u;
        goto label_4ac188;
    }
    ctx->pc = 0x4AC180u;
    SET_GPR_U32(ctx, 31, 0x4AC188u);
    ctx->pc = 0x4AC184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC180u;
            // 0x4ac184: 0x46140341  sub.s       $f13, $f0, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BD40u;
    if (runtime->hasFunction(0x55BD40u)) {
        auto targetFn = runtime->lookupFunction(0x55BD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC188u; }
        if (ctx->pc != 0x4AC188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BD40_0x55bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC188u; }
        if (ctx->pc != 0x4AC188u) { return; }
    }
    ctx->pc = 0x4AC188u;
label_4ac188:
    // 0x4ac188: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4ac188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ac18c:
    // 0x4ac18c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ac18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ac190:
    // 0x4ac190: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ac190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ac194:
    // 0x4ac194: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ac194u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ac198:
    // 0x4ac198: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ac198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ac19c:
    // 0x4ac19c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ac19cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ac1a0:
    // 0x4ac1a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ac1a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ac1a4:
    // 0x4ac1a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ac1a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ac1a8:
    // 0x4ac1a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ac1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac1ac:
    // 0x4ac1ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac1b0:
    // 0x4ac1b0: 0x3e00008  jr          $ra
label_4ac1b4:
    if (ctx->pc == 0x4AC1B4u) {
        ctx->pc = 0x4AC1B4u;
            // 0x4ac1b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4AC1B8u;
        goto label_4ac1b8;
    }
    ctx->pc = 0x4AC1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC1B0u;
            // 0x4ac1b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AC1B8u;
label_4ac1b8:
    // 0x4ac1b8: 0x0  nop
    ctx->pc = 0x4ac1b8u;
    // NOP
label_4ac1bc:
    // 0x4ac1bc: 0x0  nop
    ctx->pc = 0x4ac1bcu;
    // NOP
label_4ac1c0:
    // 0x4ac1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ac1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ac1c4:
    // 0x4ac1c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ac1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ac1c8:
    // 0x4ac1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ac1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ac1cc:
    // 0x4ac1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ac1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ac1d0:
    // 0x4ac1d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ac1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ac1d4:
    // 0x4ac1d4: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_4ac1d8:
    if (ctx->pc == 0x4AC1D8u) {
        ctx->pc = 0x4AC1D8u;
            // 0x4ac1d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1DCu;
        goto label_4ac1dc;
    }
    ctx->pc = 0x4AC1D4u;
    {
        const bool branch_taken_0x4ac1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC1D4u;
            // 0x4ac1d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac1d4) {
            ctx->pc = 0x4AC288u;
            goto label_4ac288;
        }
    }
    ctx->pc = 0x4AC1DCu;
label_4ac1dc:
    // 0x4ac1dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ac1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ac1e0:
    // 0x4ac1e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ac1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ac1e4:
    // 0x4ac1e4: 0x24630430  addiu       $v1, $v1, 0x430
    ctx->pc = 0x4ac1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1072));
label_4ac1e8:
    // 0x4ac1e8: 0x24420468  addiu       $v0, $v0, 0x468
    ctx->pc = 0x4ac1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
label_4ac1ec:
    // 0x4ac1ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac1f0:
    // 0x4ac1f0: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x4ac1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_4ac1f4:
    // 0x4ac1f4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_4ac1f8:
    if (ctx->pc == 0x4AC1F8u) {
        ctx->pc = 0x4AC1F8u;
            // 0x4ac1f8: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4AC1FCu;
        goto label_4ac1fc;
    }
    ctx->pc = 0x4AC1F4u;
    {
        const bool branch_taken_0x4ac1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC1F4u;
            // 0x4ac1f8: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac1f4) {
            ctx->pc = 0x4AC244u;
            goto label_4ac244;
        }
    }
    ctx->pc = 0x4AC1FCu;
label_4ac1fc:
    // 0x4ac1fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ac1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ac200:
    // 0x4ac200: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x4ac200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_4ac204:
    // 0x4ac204: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_4ac208:
    if (ctx->pc == 0x4AC208u) {
        ctx->pc = 0x4AC208u;
            // 0x4ac208: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->pc = 0x4AC20Cu;
        goto label_4ac20c;
    }
    ctx->pc = 0x4AC204u;
    {
        const bool branch_taken_0x4ac204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC204u;
            // 0x4ac208: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac204) {
            ctx->pc = 0x4AC244u;
            goto label_4ac244;
        }
    }
    ctx->pc = 0x4AC20Cu;
label_4ac20c:
    // 0x4ac20c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac210:
    // 0x4ac210: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4ac210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4ac214:
    // 0x4ac214: 0xc0d37dc  jal         func_34DF70
label_4ac218:
    if (ctx->pc == 0x4AC218u) {
        ctx->pc = 0x4AC218u;
            // 0x4ac218: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->pc = 0x4AC21Cu;
        goto label_4ac21c;
    }
    ctx->pc = 0x4AC214u;
    SET_GPR_U32(ctx, 31, 0x4AC21Cu);
    ctx->pc = 0x4AC218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC214u;
            // 0x4ac218: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC21Cu; }
        if (ctx->pc != 0x4AC21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC21Cu; }
        if (ctx->pc != 0x4AC21Cu) { return; }
    }
    ctx->pc = 0x4AC21Cu;
label_4ac21c:
    // 0x4ac21c: 0x26230098  addiu       $v1, $s1, 0x98
    ctx->pc = 0x4ac21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_4ac220:
    // 0x4ac220: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4ac224:
    if (ctx->pc == 0x4AC224u) {
        ctx->pc = 0x4AC228u;
        goto label_4ac228;
    }
    ctx->pc = 0x4AC220u;
    {
        const bool branch_taken_0x4ac220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac220) {
            ctx->pc = 0x4AC244u;
            goto label_4ac244;
        }
    }
    ctx->pc = 0x4AC228u;
label_4ac228:
    // 0x4ac228: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac22c:
    // 0x4ac22c: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4ac22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4ac230:
    // 0x4ac230: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4ac234:
    if (ctx->pc == 0x4AC234u) {
        ctx->pc = 0x4AC234u;
            // 0x4ac234: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->pc = 0x4AC238u;
        goto label_4ac238;
    }
    ctx->pc = 0x4AC230u;
    {
        const bool branch_taken_0x4ac230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC230u;
            // 0x4ac234: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac230) {
            ctx->pc = 0x4AC244u;
            goto label_4ac244;
        }
    }
    ctx->pc = 0x4AC238u;
label_4ac238:
    // 0x4ac238: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ac238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ac23c:
    // 0x4ac23c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4ac23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4ac240:
    // 0x4ac240: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x4ac240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
label_4ac244:
    // 0x4ac244: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_4ac248:
    if (ctx->pc == 0x4AC248u) {
        ctx->pc = 0x4AC248u;
            // 0x4ac248: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4AC24Cu;
        goto label_4ac24c;
    }
    ctx->pc = 0x4AC244u;
    {
        const bool branch_taken_0x4ac244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac244) {
            ctx->pc = 0x4AC248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC244u;
            // 0x4ac248: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC274u;
            goto label_4ac274;
        }
    }
    ctx->pc = 0x4AC24Cu;
label_4ac24c:
    // 0x4ac24c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ac24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ac250:
    // 0x4ac250: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ac250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ac254:
    // 0x4ac254: 0x246304e0  addiu       $v1, $v1, 0x4E0
    ctx->pc = 0x4ac254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1248));
label_4ac258:
    // 0x4ac258: 0x24420518  addiu       $v0, $v0, 0x518
    ctx->pc = 0x4ac258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
label_4ac25c:
    // 0x4ac25c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ac25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ac260:
    // 0x4ac260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac264:
    // 0x4ac264: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4ac264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4ac268:
    // 0x4ac268: 0xc12b0a8  jal         func_4AC2A0
label_4ac26c:
    if (ctx->pc == 0x4AC26Cu) {
        ctx->pc = 0x4AC26Cu;
            // 0x4ac26c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC270u;
        goto label_4ac270;
    }
    ctx->pc = 0x4AC268u;
    SET_GPR_U32(ctx, 31, 0x4AC270u);
    ctx->pc = 0x4AC26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC268u;
            // 0x4ac26c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AC2A0u;
    if (runtime->hasFunction(0x4AC2A0u)) {
        auto targetFn = runtime->lookupFunction(0x4AC2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC270u; }
        if (ctx->pc != 0x4AC270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AC2A0_0x4ac2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC270u; }
        if (ctx->pc != 0x4AC270u) { return; }
    }
    ctx->pc = 0x4AC270u;
label_4ac270:
    // 0x4ac270: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ac270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ac274:
    // 0x4ac274: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ac274u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ac278:
    // 0x4ac278: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ac27c:
    if (ctx->pc == 0x4AC27Cu) {
        ctx->pc = 0x4AC27Cu;
            // 0x4ac27c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC280u;
        goto label_4ac280;
    }
    ctx->pc = 0x4AC278u;
    {
        const bool branch_taken_0x4ac278 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ac278) {
            ctx->pc = 0x4AC27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC278u;
            // 0x4ac27c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AC28Cu;
            goto label_4ac28c;
        }
    }
    ctx->pc = 0x4AC280u;
label_4ac280:
    // 0x4ac280: 0xc0400a8  jal         func_1002A0
label_4ac284:
    if (ctx->pc == 0x4AC284u) {
        ctx->pc = 0x4AC284u;
            // 0x4ac284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4AC288u;
        goto label_4ac288;
    }
    ctx->pc = 0x4AC280u;
    SET_GPR_U32(ctx, 31, 0x4AC288u);
    ctx->pc = 0x4AC284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC280u;
            // 0x4ac284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC288u; }
        if (ctx->pc != 0x4AC288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AC288u; }
        if (ctx->pc != 0x4AC288u) { return; }
    }
    ctx->pc = 0x4AC288u;
label_4ac288:
    // 0x4ac288: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ac288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ac28c:
    // 0x4ac28c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ac28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ac290:
    // 0x4ac290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ac290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ac294:
    // 0x4ac294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ac294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ac298:
    // 0x4ac298: 0x3e00008  jr          $ra
label_4ac29c:
    if (ctx->pc == 0x4AC29Cu) {
        ctx->pc = 0x4AC29Cu;
            // 0x4ac29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4AC2A0u;
        goto label_fallthrough_0x4ac298;
    }
    ctx->pc = 0x4AC298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AC298u;
            // 0x4ac29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ac298:
    ctx->pc = 0x4AC2A0u;
}
