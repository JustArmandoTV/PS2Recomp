#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FCA70
// Address: 0x2fca70 - 0x2fe400
void sub_002FCA70_0x2fca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCA70_0x2fca70");
#endif

    switch (ctx->pc) {
        case 0x2fca70u: goto label_2fca70;
        case 0x2fca74u: goto label_2fca74;
        case 0x2fca78u: goto label_2fca78;
        case 0x2fca7cu: goto label_2fca7c;
        case 0x2fca80u: goto label_2fca80;
        case 0x2fca84u: goto label_2fca84;
        case 0x2fca88u: goto label_2fca88;
        case 0x2fca8cu: goto label_2fca8c;
        case 0x2fca90u: goto label_2fca90;
        case 0x2fca94u: goto label_2fca94;
        case 0x2fca98u: goto label_2fca98;
        case 0x2fca9cu: goto label_2fca9c;
        case 0x2fcaa0u: goto label_2fcaa0;
        case 0x2fcaa4u: goto label_2fcaa4;
        case 0x2fcaa8u: goto label_2fcaa8;
        case 0x2fcaacu: goto label_2fcaac;
        case 0x2fcab0u: goto label_2fcab0;
        case 0x2fcab4u: goto label_2fcab4;
        case 0x2fcab8u: goto label_2fcab8;
        case 0x2fcabcu: goto label_2fcabc;
        case 0x2fcac0u: goto label_2fcac0;
        case 0x2fcac4u: goto label_2fcac4;
        case 0x2fcac8u: goto label_2fcac8;
        case 0x2fcaccu: goto label_2fcacc;
        case 0x2fcad0u: goto label_2fcad0;
        case 0x2fcad4u: goto label_2fcad4;
        case 0x2fcad8u: goto label_2fcad8;
        case 0x2fcadcu: goto label_2fcadc;
        case 0x2fcae0u: goto label_2fcae0;
        case 0x2fcae4u: goto label_2fcae4;
        case 0x2fcae8u: goto label_2fcae8;
        case 0x2fcaecu: goto label_2fcaec;
        case 0x2fcaf0u: goto label_2fcaf0;
        case 0x2fcaf4u: goto label_2fcaf4;
        case 0x2fcaf8u: goto label_2fcaf8;
        case 0x2fcafcu: goto label_2fcafc;
        case 0x2fcb00u: goto label_2fcb00;
        case 0x2fcb04u: goto label_2fcb04;
        case 0x2fcb08u: goto label_2fcb08;
        case 0x2fcb0cu: goto label_2fcb0c;
        case 0x2fcb10u: goto label_2fcb10;
        case 0x2fcb14u: goto label_2fcb14;
        case 0x2fcb18u: goto label_2fcb18;
        case 0x2fcb1cu: goto label_2fcb1c;
        case 0x2fcb20u: goto label_2fcb20;
        case 0x2fcb24u: goto label_2fcb24;
        case 0x2fcb28u: goto label_2fcb28;
        case 0x2fcb2cu: goto label_2fcb2c;
        case 0x2fcb30u: goto label_2fcb30;
        case 0x2fcb34u: goto label_2fcb34;
        case 0x2fcb38u: goto label_2fcb38;
        case 0x2fcb3cu: goto label_2fcb3c;
        case 0x2fcb40u: goto label_2fcb40;
        case 0x2fcb44u: goto label_2fcb44;
        case 0x2fcb48u: goto label_2fcb48;
        case 0x2fcb4cu: goto label_2fcb4c;
        case 0x2fcb50u: goto label_2fcb50;
        case 0x2fcb54u: goto label_2fcb54;
        case 0x2fcb58u: goto label_2fcb58;
        case 0x2fcb5cu: goto label_2fcb5c;
        case 0x2fcb60u: goto label_2fcb60;
        case 0x2fcb64u: goto label_2fcb64;
        case 0x2fcb68u: goto label_2fcb68;
        case 0x2fcb6cu: goto label_2fcb6c;
        case 0x2fcb70u: goto label_2fcb70;
        case 0x2fcb74u: goto label_2fcb74;
        case 0x2fcb78u: goto label_2fcb78;
        case 0x2fcb7cu: goto label_2fcb7c;
        case 0x2fcb80u: goto label_2fcb80;
        case 0x2fcb84u: goto label_2fcb84;
        case 0x2fcb88u: goto label_2fcb88;
        case 0x2fcb8cu: goto label_2fcb8c;
        case 0x2fcb90u: goto label_2fcb90;
        case 0x2fcb94u: goto label_2fcb94;
        case 0x2fcb98u: goto label_2fcb98;
        case 0x2fcb9cu: goto label_2fcb9c;
        case 0x2fcba0u: goto label_2fcba0;
        case 0x2fcba4u: goto label_2fcba4;
        case 0x2fcba8u: goto label_2fcba8;
        case 0x2fcbacu: goto label_2fcbac;
        case 0x2fcbb0u: goto label_2fcbb0;
        case 0x2fcbb4u: goto label_2fcbb4;
        case 0x2fcbb8u: goto label_2fcbb8;
        case 0x2fcbbcu: goto label_2fcbbc;
        case 0x2fcbc0u: goto label_2fcbc0;
        case 0x2fcbc4u: goto label_2fcbc4;
        case 0x2fcbc8u: goto label_2fcbc8;
        case 0x2fcbccu: goto label_2fcbcc;
        case 0x2fcbd0u: goto label_2fcbd0;
        case 0x2fcbd4u: goto label_2fcbd4;
        case 0x2fcbd8u: goto label_2fcbd8;
        case 0x2fcbdcu: goto label_2fcbdc;
        case 0x2fcbe0u: goto label_2fcbe0;
        case 0x2fcbe4u: goto label_2fcbe4;
        case 0x2fcbe8u: goto label_2fcbe8;
        case 0x2fcbecu: goto label_2fcbec;
        case 0x2fcbf0u: goto label_2fcbf0;
        case 0x2fcbf4u: goto label_2fcbf4;
        case 0x2fcbf8u: goto label_2fcbf8;
        case 0x2fcbfcu: goto label_2fcbfc;
        case 0x2fcc00u: goto label_2fcc00;
        case 0x2fcc04u: goto label_2fcc04;
        case 0x2fcc08u: goto label_2fcc08;
        case 0x2fcc0cu: goto label_2fcc0c;
        case 0x2fcc10u: goto label_2fcc10;
        case 0x2fcc14u: goto label_2fcc14;
        case 0x2fcc18u: goto label_2fcc18;
        case 0x2fcc1cu: goto label_2fcc1c;
        case 0x2fcc20u: goto label_2fcc20;
        case 0x2fcc24u: goto label_2fcc24;
        case 0x2fcc28u: goto label_2fcc28;
        case 0x2fcc2cu: goto label_2fcc2c;
        case 0x2fcc30u: goto label_2fcc30;
        case 0x2fcc34u: goto label_2fcc34;
        case 0x2fcc38u: goto label_2fcc38;
        case 0x2fcc3cu: goto label_2fcc3c;
        case 0x2fcc40u: goto label_2fcc40;
        case 0x2fcc44u: goto label_2fcc44;
        case 0x2fcc48u: goto label_2fcc48;
        case 0x2fcc4cu: goto label_2fcc4c;
        case 0x2fcc50u: goto label_2fcc50;
        case 0x2fcc54u: goto label_2fcc54;
        case 0x2fcc58u: goto label_2fcc58;
        case 0x2fcc5cu: goto label_2fcc5c;
        case 0x2fcc60u: goto label_2fcc60;
        case 0x2fcc64u: goto label_2fcc64;
        case 0x2fcc68u: goto label_2fcc68;
        case 0x2fcc6cu: goto label_2fcc6c;
        case 0x2fcc70u: goto label_2fcc70;
        case 0x2fcc74u: goto label_2fcc74;
        case 0x2fcc78u: goto label_2fcc78;
        case 0x2fcc7cu: goto label_2fcc7c;
        case 0x2fcc80u: goto label_2fcc80;
        case 0x2fcc84u: goto label_2fcc84;
        case 0x2fcc88u: goto label_2fcc88;
        case 0x2fcc8cu: goto label_2fcc8c;
        case 0x2fcc90u: goto label_2fcc90;
        case 0x2fcc94u: goto label_2fcc94;
        case 0x2fcc98u: goto label_2fcc98;
        case 0x2fcc9cu: goto label_2fcc9c;
        case 0x2fcca0u: goto label_2fcca0;
        case 0x2fcca4u: goto label_2fcca4;
        case 0x2fcca8u: goto label_2fcca8;
        case 0x2fccacu: goto label_2fccac;
        case 0x2fccb0u: goto label_2fccb0;
        case 0x2fccb4u: goto label_2fccb4;
        case 0x2fccb8u: goto label_2fccb8;
        case 0x2fccbcu: goto label_2fccbc;
        case 0x2fccc0u: goto label_2fccc0;
        case 0x2fccc4u: goto label_2fccc4;
        case 0x2fccc8u: goto label_2fccc8;
        case 0x2fccccu: goto label_2fcccc;
        case 0x2fccd0u: goto label_2fccd0;
        case 0x2fccd4u: goto label_2fccd4;
        case 0x2fccd8u: goto label_2fccd8;
        case 0x2fccdcu: goto label_2fccdc;
        case 0x2fcce0u: goto label_2fcce0;
        case 0x2fcce4u: goto label_2fcce4;
        case 0x2fcce8u: goto label_2fcce8;
        case 0x2fccecu: goto label_2fccec;
        case 0x2fccf0u: goto label_2fccf0;
        case 0x2fccf4u: goto label_2fccf4;
        case 0x2fccf8u: goto label_2fccf8;
        case 0x2fccfcu: goto label_2fccfc;
        case 0x2fcd00u: goto label_2fcd00;
        case 0x2fcd04u: goto label_2fcd04;
        case 0x2fcd08u: goto label_2fcd08;
        case 0x2fcd0cu: goto label_2fcd0c;
        case 0x2fcd10u: goto label_2fcd10;
        case 0x2fcd14u: goto label_2fcd14;
        case 0x2fcd18u: goto label_2fcd18;
        case 0x2fcd1cu: goto label_2fcd1c;
        case 0x2fcd20u: goto label_2fcd20;
        case 0x2fcd24u: goto label_2fcd24;
        case 0x2fcd28u: goto label_2fcd28;
        case 0x2fcd2cu: goto label_2fcd2c;
        case 0x2fcd30u: goto label_2fcd30;
        case 0x2fcd34u: goto label_2fcd34;
        case 0x2fcd38u: goto label_2fcd38;
        case 0x2fcd3cu: goto label_2fcd3c;
        case 0x2fcd40u: goto label_2fcd40;
        case 0x2fcd44u: goto label_2fcd44;
        case 0x2fcd48u: goto label_2fcd48;
        case 0x2fcd4cu: goto label_2fcd4c;
        case 0x2fcd50u: goto label_2fcd50;
        case 0x2fcd54u: goto label_2fcd54;
        case 0x2fcd58u: goto label_2fcd58;
        case 0x2fcd5cu: goto label_2fcd5c;
        case 0x2fcd60u: goto label_2fcd60;
        case 0x2fcd64u: goto label_2fcd64;
        case 0x2fcd68u: goto label_2fcd68;
        case 0x2fcd6cu: goto label_2fcd6c;
        case 0x2fcd70u: goto label_2fcd70;
        case 0x2fcd74u: goto label_2fcd74;
        case 0x2fcd78u: goto label_2fcd78;
        case 0x2fcd7cu: goto label_2fcd7c;
        case 0x2fcd80u: goto label_2fcd80;
        case 0x2fcd84u: goto label_2fcd84;
        case 0x2fcd88u: goto label_2fcd88;
        case 0x2fcd8cu: goto label_2fcd8c;
        case 0x2fcd90u: goto label_2fcd90;
        case 0x2fcd94u: goto label_2fcd94;
        case 0x2fcd98u: goto label_2fcd98;
        case 0x2fcd9cu: goto label_2fcd9c;
        case 0x2fcda0u: goto label_2fcda0;
        case 0x2fcda4u: goto label_2fcda4;
        case 0x2fcda8u: goto label_2fcda8;
        case 0x2fcdacu: goto label_2fcdac;
        case 0x2fcdb0u: goto label_2fcdb0;
        case 0x2fcdb4u: goto label_2fcdb4;
        case 0x2fcdb8u: goto label_2fcdb8;
        case 0x2fcdbcu: goto label_2fcdbc;
        case 0x2fcdc0u: goto label_2fcdc0;
        case 0x2fcdc4u: goto label_2fcdc4;
        case 0x2fcdc8u: goto label_2fcdc8;
        case 0x2fcdccu: goto label_2fcdcc;
        case 0x2fcdd0u: goto label_2fcdd0;
        case 0x2fcdd4u: goto label_2fcdd4;
        case 0x2fcdd8u: goto label_2fcdd8;
        case 0x2fcddcu: goto label_2fcddc;
        case 0x2fcde0u: goto label_2fcde0;
        case 0x2fcde4u: goto label_2fcde4;
        case 0x2fcde8u: goto label_2fcde8;
        case 0x2fcdecu: goto label_2fcdec;
        case 0x2fcdf0u: goto label_2fcdf0;
        case 0x2fcdf4u: goto label_2fcdf4;
        case 0x2fcdf8u: goto label_2fcdf8;
        case 0x2fcdfcu: goto label_2fcdfc;
        case 0x2fce00u: goto label_2fce00;
        case 0x2fce04u: goto label_2fce04;
        case 0x2fce08u: goto label_2fce08;
        case 0x2fce0cu: goto label_2fce0c;
        case 0x2fce10u: goto label_2fce10;
        case 0x2fce14u: goto label_2fce14;
        case 0x2fce18u: goto label_2fce18;
        case 0x2fce1cu: goto label_2fce1c;
        case 0x2fce20u: goto label_2fce20;
        case 0x2fce24u: goto label_2fce24;
        case 0x2fce28u: goto label_2fce28;
        case 0x2fce2cu: goto label_2fce2c;
        case 0x2fce30u: goto label_2fce30;
        case 0x2fce34u: goto label_2fce34;
        case 0x2fce38u: goto label_2fce38;
        case 0x2fce3cu: goto label_2fce3c;
        case 0x2fce40u: goto label_2fce40;
        case 0x2fce44u: goto label_2fce44;
        case 0x2fce48u: goto label_2fce48;
        case 0x2fce4cu: goto label_2fce4c;
        case 0x2fce50u: goto label_2fce50;
        case 0x2fce54u: goto label_2fce54;
        case 0x2fce58u: goto label_2fce58;
        case 0x2fce5cu: goto label_2fce5c;
        case 0x2fce60u: goto label_2fce60;
        case 0x2fce64u: goto label_2fce64;
        case 0x2fce68u: goto label_2fce68;
        case 0x2fce6cu: goto label_2fce6c;
        case 0x2fce70u: goto label_2fce70;
        case 0x2fce74u: goto label_2fce74;
        case 0x2fce78u: goto label_2fce78;
        case 0x2fce7cu: goto label_2fce7c;
        case 0x2fce80u: goto label_2fce80;
        case 0x2fce84u: goto label_2fce84;
        case 0x2fce88u: goto label_2fce88;
        case 0x2fce8cu: goto label_2fce8c;
        case 0x2fce90u: goto label_2fce90;
        case 0x2fce94u: goto label_2fce94;
        case 0x2fce98u: goto label_2fce98;
        case 0x2fce9cu: goto label_2fce9c;
        case 0x2fcea0u: goto label_2fcea0;
        case 0x2fcea4u: goto label_2fcea4;
        case 0x2fcea8u: goto label_2fcea8;
        case 0x2fceacu: goto label_2fceac;
        case 0x2fceb0u: goto label_2fceb0;
        case 0x2fceb4u: goto label_2fceb4;
        case 0x2fceb8u: goto label_2fceb8;
        case 0x2fcebcu: goto label_2fcebc;
        case 0x2fcec0u: goto label_2fcec0;
        case 0x2fcec4u: goto label_2fcec4;
        case 0x2fcec8u: goto label_2fcec8;
        case 0x2fceccu: goto label_2fcecc;
        case 0x2fced0u: goto label_2fced0;
        case 0x2fced4u: goto label_2fced4;
        case 0x2fced8u: goto label_2fced8;
        case 0x2fcedcu: goto label_2fcedc;
        case 0x2fcee0u: goto label_2fcee0;
        case 0x2fcee4u: goto label_2fcee4;
        case 0x2fcee8u: goto label_2fcee8;
        case 0x2fceecu: goto label_2fceec;
        case 0x2fcef0u: goto label_2fcef0;
        case 0x2fcef4u: goto label_2fcef4;
        case 0x2fcef8u: goto label_2fcef8;
        case 0x2fcefcu: goto label_2fcefc;
        case 0x2fcf00u: goto label_2fcf00;
        case 0x2fcf04u: goto label_2fcf04;
        case 0x2fcf08u: goto label_2fcf08;
        case 0x2fcf0cu: goto label_2fcf0c;
        case 0x2fcf10u: goto label_2fcf10;
        case 0x2fcf14u: goto label_2fcf14;
        case 0x2fcf18u: goto label_2fcf18;
        case 0x2fcf1cu: goto label_2fcf1c;
        case 0x2fcf20u: goto label_2fcf20;
        case 0x2fcf24u: goto label_2fcf24;
        case 0x2fcf28u: goto label_2fcf28;
        case 0x2fcf2cu: goto label_2fcf2c;
        case 0x2fcf30u: goto label_2fcf30;
        case 0x2fcf34u: goto label_2fcf34;
        case 0x2fcf38u: goto label_2fcf38;
        case 0x2fcf3cu: goto label_2fcf3c;
        case 0x2fcf40u: goto label_2fcf40;
        case 0x2fcf44u: goto label_2fcf44;
        case 0x2fcf48u: goto label_2fcf48;
        case 0x2fcf4cu: goto label_2fcf4c;
        case 0x2fcf50u: goto label_2fcf50;
        case 0x2fcf54u: goto label_2fcf54;
        case 0x2fcf58u: goto label_2fcf58;
        case 0x2fcf5cu: goto label_2fcf5c;
        case 0x2fcf60u: goto label_2fcf60;
        case 0x2fcf64u: goto label_2fcf64;
        case 0x2fcf68u: goto label_2fcf68;
        case 0x2fcf6cu: goto label_2fcf6c;
        case 0x2fcf70u: goto label_2fcf70;
        case 0x2fcf74u: goto label_2fcf74;
        case 0x2fcf78u: goto label_2fcf78;
        case 0x2fcf7cu: goto label_2fcf7c;
        case 0x2fcf80u: goto label_2fcf80;
        case 0x2fcf84u: goto label_2fcf84;
        case 0x2fcf88u: goto label_2fcf88;
        case 0x2fcf8cu: goto label_2fcf8c;
        case 0x2fcf90u: goto label_2fcf90;
        case 0x2fcf94u: goto label_2fcf94;
        case 0x2fcf98u: goto label_2fcf98;
        case 0x2fcf9cu: goto label_2fcf9c;
        case 0x2fcfa0u: goto label_2fcfa0;
        case 0x2fcfa4u: goto label_2fcfa4;
        case 0x2fcfa8u: goto label_2fcfa8;
        case 0x2fcfacu: goto label_2fcfac;
        case 0x2fcfb0u: goto label_2fcfb0;
        case 0x2fcfb4u: goto label_2fcfb4;
        case 0x2fcfb8u: goto label_2fcfb8;
        case 0x2fcfbcu: goto label_2fcfbc;
        case 0x2fcfc0u: goto label_2fcfc0;
        case 0x2fcfc4u: goto label_2fcfc4;
        case 0x2fcfc8u: goto label_2fcfc8;
        case 0x2fcfccu: goto label_2fcfcc;
        case 0x2fcfd0u: goto label_2fcfd0;
        case 0x2fcfd4u: goto label_2fcfd4;
        case 0x2fcfd8u: goto label_2fcfd8;
        case 0x2fcfdcu: goto label_2fcfdc;
        case 0x2fcfe0u: goto label_2fcfe0;
        case 0x2fcfe4u: goto label_2fcfe4;
        case 0x2fcfe8u: goto label_2fcfe8;
        case 0x2fcfecu: goto label_2fcfec;
        case 0x2fcff0u: goto label_2fcff0;
        case 0x2fcff4u: goto label_2fcff4;
        case 0x2fcff8u: goto label_2fcff8;
        case 0x2fcffcu: goto label_2fcffc;
        case 0x2fd000u: goto label_2fd000;
        case 0x2fd004u: goto label_2fd004;
        case 0x2fd008u: goto label_2fd008;
        case 0x2fd00cu: goto label_2fd00c;
        case 0x2fd010u: goto label_2fd010;
        case 0x2fd014u: goto label_2fd014;
        case 0x2fd018u: goto label_2fd018;
        case 0x2fd01cu: goto label_2fd01c;
        case 0x2fd020u: goto label_2fd020;
        case 0x2fd024u: goto label_2fd024;
        case 0x2fd028u: goto label_2fd028;
        case 0x2fd02cu: goto label_2fd02c;
        case 0x2fd030u: goto label_2fd030;
        case 0x2fd034u: goto label_2fd034;
        case 0x2fd038u: goto label_2fd038;
        case 0x2fd03cu: goto label_2fd03c;
        case 0x2fd040u: goto label_2fd040;
        case 0x2fd044u: goto label_2fd044;
        case 0x2fd048u: goto label_2fd048;
        case 0x2fd04cu: goto label_2fd04c;
        case 0x2fd050u: goto label_2fd050;
        case 0x2fd054u: goto label_2fd054;
        case 0x2fd058u: goto label_2fd058;
        case 0x2fd05cu: goto label_2fd05c;
        case 0x2fd060u: goto label_2fd060;
        case 0x2fd064u: goto label_2fd064;
        case 0x2fd068u: goto label_2fd068;
        case 0x2fd06cu: goto label_2fd06c;
        case 0x2fd070u: goto label_2fd070;
        case 0x2fd074u: goto label_2fd074;
        case 0x2fd078u: goto label_2fd078;
        case 0x2fd07cu: goto label_2fd07c;
        case 0x2fd080u: goto label_2fd080;
        case 0x2fd084u: goto label_2fd084;
        case 0x2fd088u: goto label_2fd088;
        case 0x2fd08cu: goto label_2fd08c;
        case 0x2fd090u: goto label_2fd090;
        case 0x2fd094u: goto label_2fd094;
        case 0x2fd098u: goto label_2fd098;
        case 0x2fd09cu: goto label_2fd09c;
        case 0x2fd0a0u: goto label_2fd0a0;
        case 0x2fd0a4u: goto label_2fd0a4;
        case 0x2fd0a8u: goto label_2fd0a8;
        case 0x2fd0acu: goto label_2fd0ac;
        case 0x2fd0b0u: goto label_2fd0b0;
        case 0x2fd0b4u: goto label_2fd0b4;
        case 0x2fd0b8u: goto label_2fd0b8;
        case 0x2fd0bcu: goto label_2fd0bc;
        case 0x2fd0c0u: goto label_2fd0c0;
        case 0x2fd0c4u: goto label_2fd0c4;
        case 0x2fd0c8u: goto label_2fd0c8;
        case 0x2fd0ccu: goto label_2fd0cc;
        case 0x2fd0d0u: goto label_2fd0d0;
        case 0x2fd0d4u: goto label_2fd0d4;
        case 0x2fd0d8u: goto label_2fd0d8;
        case 0x2fd0dcu: goto label_2fd0dc;
        case 0x2fd0e0u: goto label_2fd0e0;
        case 0x2fd0e4u: goto label_2fd0e4;
        case 0x2fd0e8u: goto label_2fd0e8;
        case 0x2fd0ecu: goto label_2fd0ec;
        case 0x2fd0f0u: goto label_2fd0f0;
        case 0x2fd0f4u: goto label_2fd0f4;
        case 0x2fd0f8u: goto label_2fd0f8;
        case 0x2fd0fcu: goto label_2fd0fc;
        case 0x2fd100u: goto label_2fd100;
        case 0x2fd104u: goto label_2fd104;
        case 0x2fd108u: goto label_2fd108;
        case 0x2fd10cu: goto label_2fd10c;
        case 0x2fd110u: goto label_2fd110;
        case 0x2fd114u: goto label_2fd114;
        case 0x2fd118u: goto label_2fd118;
        case 0x2fd11cu: goto label_2fd11c;
        case 0x2fd120u: goto label_2fd120;
        case 0x2fd124u: goto label_2fd124;
        case 0x2fd128u: goto label_2fd128;
        case 0x2fd12cu: goto label_2fd12c;
        case 0x2fd130u: goto label_2fd130;
        case 0x2fd134u: goto label_2fd134;
        case 0x2fd138u: goto label_2fd138;
        case 0x2fd13cu: goto label_2fd13c;
        case 0x2fd140u: goto label_2fd140;
        case 0x2fd144u: goto label_2fd144;
        case 0x2fd148u: goto label_2fd148;
        case 0x2fd14cu: goto label_2fd14c;
        case 0x2fd150u: goto label_2fd150;
        case 0x2fd154u: goto label_2fd154;
        case 0x2fd158u: goto label_2fd158;
        case 0x2fd15cu: goto label_2fd15c;
        case 0x2fd160u: goto label_2fd160;
        case 0x2fd164u: goto label_2fd164;
        case 0x2fd168u: goto label_2fd168;
        case 0x2fd16cu: goto label_2fd16c;
        case 0x2fd170u: goto label_2fd170;
        case 0x2fd174u: goto label_2fd174;
        case 0x2fd178u: goto label_2fd178;
        case 0x2fd17cu: goto label_2fd17c;
        case 0x2fd180u: goto label_2fd180;
        case 0x2fd184u: goto label_2fd184;
        case 0x2fd188u: goto label_2fd188;
        case 0x2fd18cu: goto label_2fd18c;
        case 0x2fd190u: goto label_2fd190;
        case 0x2fd194u: goto label_2fd194;
        case 0x2fd198u: goto label_2fd198;
        case 0x2fd19cu: goto label_2fd19c;
        case 0x2fd1a0u: goto label_2fd1a0;
        case 0x2fd1a4u: goto label_2fd1a4;
        case 0x2fd1a8u: goto label_2fd1a8;
        case 0x2fd1acu: goto label_2fd1ac;
        case 0x2fd1b0u: goto label_2fd1b0;
        case 0x2fd1b4u: goto label_2fd1b4;
        case 0x2fd1b8u: goto label_2fd1b8;
        case 0x2fd1bcu: goto label_2fd1bc;
        case 0x2fd1c0u: goto label_2fd1c0;
        case 0x2fd1c4u: goto label_2fd1c4;
        case 0x2fd1c8u: goto label_2fd1c8;
        case 0x2fd1ccu: goto label_2fd1cc;
        case 0x2fd1d0u: goto label_2fd1d0;
        case 0x2fd1d4u: goto label_2fd1d4;
        case 0x2fd1d8u: goto label_2fd1d8;
        case 0x2fd1dcu: goto label_2fd1dc;
        case 0x2fd1e0u: goto label_2fd1e0;
        case 0x2fd1e4u: goto label_2fd1e4;
        case 0x2fd1e8u: goto label_2fd1e8;
        case 0x2fd1ecu: goto label_2fd1ec;
        case 0x2fd1f0u: goto label_2fd1f0;
        case 0x2fd1f4u: goto label_2fd1f4;
        case 0x2fd1f8u: goto label_2fd1f8;
        case 0x2fd1fcu: goto label_2fd1fc;
        case 0x2fd200u: goto label_2fd200;
        case 0x2fd204u: goto label_2fd204;
        case 0x2fd208u: goto label_2fd208;
        case 0x2fd20cu: goto label_2fd20c;
        case 0x2fd210u: goto label_2fd210;
        case 0x2fd214u: goto label_2fd214;
        case 0x2fd218u: goto label_2fd218;
        case 0x2fd21cu: goto label_2fd21c;
        case 0x2fd220u: goto label_2fd220;
        case 0x2fd224u: goto label_2fd224;
        case 0x2fd228u: goto label_2fd228;
        case 0x2fd22cu: goto label_2fd22c;
        case 0x2fd230u: goto label_2fd230;
        case 0x2fd234u: goto label_2fd234;
        case 0x2fd238u: goto label_2fd238;
        case 0x2fd23cu: goto label_2fd23c;
        case 0x2fd240u: goto label_2fd240;
        case 0x2fd244u: goto label_2fd244;
        case 0x2fd248u: goto label_2fd248;
        case 0x2fd24cu: goto label_2fd24c;
        case 0x2fd250u: goto label_2fd250;
        case 0x2fd254u: goto label_2fd254;
        case 0x2fd258u: goto label_2fd258;
        case 0x2fd25cu: goto label_2fd25c;
        case 0x2fd260u: goto label_2fd260;
        case 0x2fd264u: goto label_2fd264;
        case 0x2fd268u: goto label_2fd268;
        case 0x2fd26cu: goto label_2fd26c;
        case 0x2fd270u: goto label_2fd270;
        case 0x2fd274u: goto label_2fd274;
        case 0x2fd278u: goto label_2fd278;
        case 0x2fd27cu: goto label_2fd27c;
        case 0x2fd280u: goto label_2fd280;
        case 0x2fd284u: goto label_2fd284;
        case 0x2fd288u: goto label_2fd288;
        case 0x2fd28cu: goto label_2fd28c;
        case 0x2fd290u: goto label_2fd290;
        case 0x2fd294u: goto label_2fd294;
        case 0x2fd298u: goto label_2fd298;
        case 0x2fd29cu: goto label_2fd29c;
        case 0x2fd2a0u: goto label_2fd2a0;
        case 0x2fd2a4u: goto label_2fd2a4;
        case 0x2fd2a8u: goto label_2fd2a8;
        case 0x2fd2acu: goto label_2fd2ac;
        case 0x2fd2b0u: goto label_2fd2b0;
        case 0x2fd2b4u: goto label_2fd2b4;
        case 0x2fd2b8u: goto label_2fd2b8;
        case 0x2fd2bcu: goto label_2fd2bc;
        case 0x2fd2c0u: goto label_2fd2c0;
        case 0x2fd2c4u: goto label_2fd2c4;
        case 0x2fd2c8u: goto label_2fd2c8;
        case 0x2fd2ccu: goto label_2fd2cc;
        case 0x2fd2d0u: goto label_2fd2d0;
        case 0x2fd2d4u: goto label_2fd2d4;
        case 0x2fd2d8u: goto label_2fd2d8;
        case 0x2fd2dcu: goto label_2fd2dc;
        case 0x2fd2e0u: goto label_2fd2e0;
        case 0x2fd2e4u: goto label_2fd2e4;
        case 0x2fd2e8u: goto label_2fd2e8;
        case 0x2fd2ecu: goto label_2fd2ec;
        case 0x2fd2f0u: goto label_2fd2f0;
        case 0x2fd2f4u: goto label_2fd2f4;
        case 0x2fd2f8u: goto label_2fd2f8;
        case 0x2fd2fcu: goto label_2fd2fc;
        case 0x2fd300u: goto label_2fd300;
        case 0x2fd304u: goto label_2fd304;
        case 0x2fd308u: goto label_2fd308;
        case 0x2fd30cu: goto label_2fd30c;
        case 0x2fd310u: goto label_2fd310;
        case 0x2fd314u: goto label_2fd314;
        case 0x2fd318u: goto label_2fd318;
        case 0x2fd31cu: goto label_2fd31c;
        case 0x2fd320u: goto label_2fd320;
        case 0x2fd324u: goto label_2fd324;
        case 0x2fd328u: goto label_2fd328;
        case 0x2fd32cu: goto label_2fd32c;
        case 0x2fd330u: goto label_2fd330;
        case 0x2fd334u: goto label_2fd334;
        case 0x2fd338u: goto label_2fd338;
        case 0x2fd33cu: goto label_2fd33c;
        case 0x2fd340u: goto label_2fd340;
        case 0x2fd344u: goto label_2fd344;
        case 0x2fd348u: goto label_2fd348;
        case 0x2fd34cu: goto label_2fd34c;
        case 0x2fd350u: goto label_2fd350;
        case 0x2fd354u: goto label_2fd354;
        case 0x2fd358u: goto label_2fd358;
        case 0x2fd35cu: goto label_2fd35c;
        case 0x2fd360u: goto label_2fd360;
        case 0x2fd364u: goto label_2fd364;
        case 0x2fd368u: goto label_2fd368;
        case 0x2fd36cu: goto label_2fd36c;
        case 0x2fd370u: goto label_2fd370;
        case 0x2fd374u: goto label_2fd374;
        case 0x2fd378u: goto label_2fd378;
        case 0x2fd37cu: goto label_2fd37c;
        case 0x2fd380u: goto label_2fd380;
        case 0x2fd384u: goto label_2fd384;
        case 0x2fd388u: goto label_2fd388;
        case 0x2fd38cu: goto label_2fd38c;
        case 0x2fd390u: goto label_2fd390;
        case 0x2fd394u: goto label_2fd394;
        case 0x2fd398u: goto label_2fd398;
        case 0x2fd39cu: goto label_2fd39c;
        case 0x2fd3a0u: goto label_2fd3a0;
        case 0x2fd3a4u: goto label_2fd3a4;
        case 0x2fd3a8u: goto label_2fd3a8;
        case 0x2fd3acu: goto label_2fd3ac;
        case 0x2fd3b0u: goto label_2fd3b0;
        case 0x2fd3b4u: goto label_2fd3b4;
        case 0x2fd3b8u: goto label_2fd3b8;
        case 0x2fd3bcu: goto label_2fd3bc;
        case 0x2fd3c0u: goto label_2fd3c0;
        case 0x2fd3c4u: goto label_2fd3c4;
        case 0x2fd3c8u: goto label_2fd3c8;
        case 0x2fd3ccu: goto label_2fd3cc;
        case 0x2fd3d0u: goto label_2fd3d0;
        case 0x2fd3d4u: goto label_2fd3d4;
        case 0x2fd3d8u: goto label_2fd3d8;
        case 0x2fd3dcu: goto label_2fd3dc;
        case 0x2fd3e0u: goto label_2fd3e0;
        case 0x2fd3e4u: goto label_2fd3e4;
        case 0x2fd3e8u: goto label_2fd3e8;
        case 0x2fd3ecu: goto label_2fd3ec;
        case 0x2fd3f0u: goto label_2fd3f0;
        case 0x2fd3f4u: goto label_2fd3f4;
        case 0x2fd3f8u: goto label_2fd3f8;
        case 0x2fd3fcu: goto label_2fd3fc;
        case 0x2fd400u: goto label_2fd400;
        case 0x2fd404u: goto label_2fd404;
        case 0x2fd408u: goto label_2fd408;
        case 0x2fd40cu: goto label_2fd40c;
        case 0x2fd410u: goto label_2fd410;
        case 0x2fd414u: goto label_2fd414;
        case 0x2fd418u: goto label_2fd418;
        case 0x2fd41cu: goto label_2fd41c;
        case 0x2fd420u: goto label_2fd420;
        case 0x2fd424u: goto label_2fd424;
        case 0x2fd428u: goto label_2fd428;
        case 0x2fd42cu: goto label_2fd42c;
        case 0x2fd430u: goto label_2fd430;
        case 0x2fd434u: goto label_2fd434;
        case 0x2fd438u: goto label_2fd438;
        case 0x2fd43cu: goto label_2fd43c;
        case 0x2fd440u: goto label_2fd440;
        case 0x2fd444u: goto label_2fd444;
        case 0x2fd448u: goto label_2fd448;
        case 0x2fd44cu: goto label_2fd44c;
        case 0x2fd450u: goto label_2fd450;
        case 0x2fd454u: goto label_2fd454;
        case 0x2fd458u: goto label_2fd458;
        case 0x2fd45cu: goto label_2fd45c;
        case 0x2fd460u: goto label_2fd460;
        case 0x2fd464u: goto label_2fd464;
        case 0x2fd468u: goto label_2fd468;
        case 0x2fd46cu: goto label_2fd46c;
        case 0x2fd470u: goto label_2fd470;
        case 0x2fd474u: goto label_2fd474;
        case 0x2fd478u: goto label_2fd478;
        case 0x2fd47cu: goto label_2fd47c;
        case 0x2fd480u: goto label_2fd480;
        case 0x2fd484u: goto label_2fd484;
        case 0x2fd488u: goto label_2fd488;
        case 0x2fd48cu: goto label_2fd48c;
        case 0x2fd490u: goto label_2fd490;
        case 0x2fd494u: goto label_2fd494;
        case 0x2fd498u: goto label_2fd498;
        case 0x2fd49cu: goto label_2fd49c;
        case 0x2fd4a0u: goto label_2fd4a0;
        case 0x2fd4a4u: goto label_2fd4a4;
        case 0x2fd4a8u: goto label_2fd4a8;
        case 0x2fd4acu: goto label_2fd4ac;
        case 0x2fd4b0u: goto label_2fd4b0;
        case 0x2fd4b4u: goto label_2fd4b4;
        case 0x2fd4b8u: goto label_2fd4b8;
        case 0x2fd4bcu: goto label_2fd4bc;
        case 0x2fd4c0u: goto label_2fd4c0;
        case 0x2fd4c4u: goto label_2fd4c4;
        case 0x2fd4c8u: goto label_2fd4c8;
        case 0x2fd4ccu: goto label_2fd4cc;
        case 0x2fd4d0u: goto label_2fd4d0;
        case 0x2fd4d4u: goto label_2fd4d4;
        case 0x2fd4d8u: goto label_2fd4d8;
        case 0x2fd4dcu: goto label_2fd4dc;
        case 0x2fd4e0u: goto label_2fd4e0;
        case 0x2fd4e4u: goto label_2fd4e4;
        case 0x2fd4e8u: goto label_2fd4e8;
        case 0x2fd4ecu: goto label_2fd4ec;
        case 0x2fd4f0u: goto label_2fd4f0;
        case 0x2fd4f4u: goto label_2fd4f4;
        case 0x2fd4f8u: goto label_2fd4f8;
        case 0x2fd4fcu: goto label_2fd4fc;
        case 0x2fd500u: goto label_2fd500;
        case 0x2fd504u: goto label_2fd504;
        case 0x2fd508u: goto label_2fd508;
        case 0x2fd50cu: goto label_2fd50c;
        case 0x2fd510u: goto label_2fd510;
        case 0x2fd514u: goto label_2fd514;
        case 0x2fd518u: goto label_2fd518;
        case 0x2fd51cu: goto label_2fd51c;
        case 0x2fd520u: goto label_2fd520;
        case 0x2fd524u: goto label_2fd524;
        case 0x2fd528u: goto label_2fd528;
        case 0x2fd52cu: goto label_2fd52c;
        case 0x2fd530u: goto label_2fd530;
        case 0x2fd534u: goto label_2fd534;
        case 0x2fd538u: goto label_2fd538;
        case 0x2fd53cu: goto label_2fd53c;
        case 0x2fd540u: goto label_2fd540;
        case 0x2fd544u: goto label_2fd544;
        case 0x2fd548u: goto label_2fd548;
        case 0x2fd54cu: goto label_2fd54c;
        case 0x2fd550u: goto label_2fd550;
        case 0x2fd554u: goto label_2fd554;
        case 0x2fd558u: goto label_2fd558;
        case 0x2fd55cu: goto label_2fd55c;
        case 0x2fd560u: goto label_2fd560;
        case 0x2fd564u: goto label_2fd564;
        case 0x2fd568u: goto label_2fd568;
        case 0x2fd56cu: goto label_2fd56c;
        case 0x2fd570u: goto label_2fd570;
        case 0x2fd574u: goto label_2fd574;
        case 0x2fd578u: goto label_2fd578;
        case 0x2fd57cu: goto label_2fd57c;
        case 0x2fd580u: goto label_2fd580;
        case 0x2fd584u: goto label_2fd584;
        case 0x2fd588u: goto label_2fd588;
        case 0x2fd58cu: goto label_2fd58c;
        case 0x2fd590u: goto label_2fd590;
        case 0x2fd594u: goto label_2fd594;
        case 0x2fd598u: goto label_2fd598;
        case 0x2fd59cu: goto label_2fd59c;
        case 0x2fd5a0u: goto label_2fd5a0;
        case 0x2fd5a4u: goto label_2fd5a4;
        case 0x2fd5a8u: goto label_2fd5a8;
        case 0x2fd5acu: goto label_2fd5ac;
        case 0x2fd5b0u: goto label_2fd5b0;
        case 0x2fd5b4u: goto label_2fd5b4;
        case 0x2fd5b8u: goto label_2fd5b8;
        case 0x2fd5bcu: goto label_2fd5bc;
        case 0x2fd5c0u: goto label_2fd5c0;
        case 0x2fd5c4u: goto label_2fd5c4;
        case 0x2fd5c8u: goto label_2fd5c8;
        case 0x2fd5ccu: goto label_2fd5cc;
        case 0x2fd5d0u: goto label_2fd5d0;
        case 0x2fd5d4u: goto label_2fd5d4;
        case 0x2fd5d8u: goto label_2fd5d8;
        case 0x2fd5dcu: goto label_2fd5dc;
        case 0x2fd5e0u: goto label_2fd5e0;
        case 0x2fd5e4u: goto label_2fd5e4;
        case 0x2fd5e8u: goto label_2fd5e8;
        case 0x2fd5ecu: goto label_2fd5ec;
        case 0x2fd5f0u: goto label_2fd5f0;
        case 0x2fd5f4u: goto label_2fd5f4;
        case 0x2fd5f8u: goto label_2fd5f8;
        case 0x2fd5fcu: goto label_2fd5fc;
        case 0x2fd600u: goto label_2fd600;
        case 0x2fd604u: goto label_2fd604;
        case 0x2fd608u: goto label_2fd608;
        case 0x2fd60cu: goto label_2fd60c;
        case 0x2fd610u: goto label_2fd610;
        case 0x2fd614u: goto label_2fd614;
        case 0x2fd618u: goto label_2fd618;
        case 0x2fd61cu: goto label_2fd61c;
        case 0x2fd620u: goto label_2fd620;
        case 0x2fd624u: goto label_2fd624;
        case 0x2fd628u: goto label_2fd628;
        case 0x2fd62cu: goto label_2fd62c;
        case 0x2fd630u: goto label_2fd630;
        case 0x2fd634u: goto label_2fd634;
        case 0x2fd638u: goto label_2fd638;
        case 0x2fd63cu: goto label_2fd63c;
        case 0x2fd640u: goto label_2fd640;
        case 0x2fd644u: goto label_2fd644;
        case 0x2fd648u: goto label_2fd648;
        case 0x2fd64cu: goto label_2fd64c;
        case 0x2fd650u: goto label_2fd650;
        case 0x2fd654u: goto label_2fd654;
        case 0x2fd658u: goto label_2fd658;
        case 0x2fd65cu: goto label_2fd65c;
        case 0x2fd660u: goto label_2fd660;
        case 0x2fd664u: goto label_2fd664;
        case 0x2fd668u: goto label_2fd668;
        case 0x2fd66cu: goto label_2fd66c;
        case 0x2fd670u: goto label_2fd670;
        case 0x2fd674u: goto label_2fd674;
        case 0x2fd678u: goto label_2fd678;
        case 0x2fd67cu: goto label_2fd67c;
        case 0x2fd680u: goto label_2fd680;
        case 0x2fd684u: goto label_2fd684;
        case 0x2fd688u: goto label_2fd688;
        case 0x2fd68cu: goto label_2fd68c;
        case 0x2fd690u: goto label_2fd690;
        case 0x2fd694u: goto label_2fd694;
        case 0x2fd698u: goto label_2fd698;
        case 0x2fd69cu: goto label_2fd69c;
        case 0x2fd6a0u: goto label_2fd6a0;
        case 0x2fd6a4u: goto label_2fd6a4;
        case 0x2fd6a8u: goto label_2fd6a8;
        case 0x2fd6acu: goto label_2fd6ac;
        case 0x2fd6b0u: goto label_2fd6b0;
        case 0x2fd6b4u: goto label_2fd6b4;
        case 0x2fd6b8u: goto label_2fd6b8;
        case 0x2fd6bcu: goto label_2fd6bc;
        case 0x2fd6c0u: goto label_2fd6c0;
        case 0x2fd6c4u: goto label_2fd6c4;
        case 0x2fd6c8u: goto label_2fd6c8;
        case 0x2fd6ccu: goto label_2fd6cc;
        case 0x2fd6d0u: goto label_2fd6d0;
        case 0x2fd6d4u: goto label_2fd6d4;
        case 0x2fd6d8u: goto label_2fd6d8;
        case 0x2fd6dcu: goto label_2fd6dc;
        case 0x2fd6e0u: goto label_2fd6e0;
        case 0x2fd6e4u: goto label_2fd6e4;
        case 0x2fd6e8u: goto label_2fd6e8;
        case 0x2fd6ecu: goto label_2fd6ec;
        case 0x2fd6f0u: goto label_2fd6f0;
        case 0x2fd6f4u: goto label_2fd6f4;
        case 0x2fd6f8u: goto label_2fd6f8;
        case 0x2fd6fcu: goto label_2fd6fc;
        case 0x2fd700u: goto label_2fd700;
        case 0x2fd704u: goto label_2fd704;
        case 0x2fd708u: goto label_2fd708;
        case 0x2fd70cu: goto label_2fd70c;
        case 0x2fd710u: goto label_2fd710;
        case 0x2fd714u: goto label_2fd714;
        case 0x2fd718u: goto label_2fd718;
        case 0x2fd71cu: goto label_2fd71c;
        case 0x2fd720u: goto label_2fd720;
        case 0x2fd724u: goto label_2fd724;
        case 0x2fd728u: goto label_2fd728;
        case 0x2fd72cu: goto label_2fd72c;
        case 0x2fd730u: goto label_2fd730;
        case 0x2fd734u: goto label_2fd734;
        case 0x2fd738u: goto label_2fd738;
        case 0x2fd73cu: goto label_2fd73c;
        case 0x2fd740u: goto label_2fd740;
        case 0x2fd744u: goto label_2fd744;
        case 0x2fd748u: goto label_2fd748;
        case 0x2fd74cu: goto label_2fd74c;
        case 0x2fd750u: goto label_2fd750;
        case 0x2fd754u: goto label_2fd754;
        case 0x2fd758u: goto label_2fd758;
        case 0x2fd75cu: goto label_2fd75c;
        case 0x2fd760u: goto label_2fd760;
        case 0x2fd764u: goto label_2fd764;
        case 0x2fd768u: goto label_2fd768;
        case 0x2fd76cu: goto label_2fd76c;
        case 0x2fd770u: goto label_2fd770;
        case 0x2fd774u: goto label_2fd774;
        case 0x2fd778u: goto label_2fd778;
        case 0x2fd77cu: goto label_2fd77c;
        case 0x2fd780u: goto label_2fd780;
        case 0x2fd784u: goto label_2fd784;
        case 0x2fd788u: goto label_2fd788;
        case 0x2fd78cu: goto label_2fd78c;
        case 0x2fd790u: goto label_2fd790;
        case 0x2fd794u: goto label_2fd794;
        case 0x2fd798u: goto label_2fd798;
        case 0x2fd79cu: goto label_2fd79c;
        case 0x2fd7a0u: goto label_2fd7a0;
        case 0x2fd7a4u: goto label_2fd7a4;
        case 0x2fd7a8u: goto label_2fd7a8;
        case 0x2fd7acu: goto label_2fd7ac;
        case 0x2fd7b0u: goto label_2fd7b0;
        case 0x2fd7b4u: goto label_2fd7b4;
        case 0x2fd7b8u: goto label_2fd7b8;
        case 0x2fd7bcu: goto label_2fd7bc;
        case 0x2fd7c0u: goto label_2fd7c0;
        case 0x2fd7c4u: goto label_2fd7c4;
        case 0x2fd7c8u: goto label_2fd7c8;
        case 0x2fd7ccu: goto label_2fd7cc;
        case 0x2fd7d0u: goto label_2fd7d0;
        case 0x2fd7d4u: goto label_2fd7d4;
        case 0x2fd7d8u: goto label_2fd7d8;
        case 0x2fd7dcu: goto label_2fd7dc;
        case 0x2fd7e0u: goto label_2fd7e0;
        case 0x2fd7e4u: goto label_2fd7e4;
        case 0x2fd7e8u: goto label_2fd7e8;
        case 0x2fd7ecu: goto label_2fd7ec;
        case 0x2fd7f0u: goto label_2fd7f0;
        case 0x2fd7f4u: goto label_2fd7f4;
        case 0x2fd7f8u: goto label_2fd7f8;
        case 0x2fd7fcu: goto label_2fd7fc;
        case 0x2fd800u: goto label_2fd800;
        case 0x2fd804u: goto label_2fd804;
        case 0x2fd808u: goto label_2fd808;
        case 0x2fd80cu: goto label_2fd80c;
        case 0x2fd810u: goto label_2fd810;
        case 0x2fd814u: goto label_2fd814;
        case 0x2fd818u: goto label_2fd818;
        case 0x2fd81cu: goto label_2fd81c;
        case 0x2fd820u: goto label_2fd820;
        case 0x2fd824u: goto label_2fd824;
        case 0x2fd828u: goto label_2fd828;
        case 0x2fd82cu: goto label_2fd82c;
        case 0x2fd830u: goto label_2fd830;
        case 0x2fd834u: goto label_2fd834;
        case 0x2fd838u: goto label_2fd838;
        case 0x2fd83cu: goto label_2fd83c;
        case 0x2fd840u: goto label_2fd840;
        case 0x2fd844u: goto label_2fd844;
        case 0x2fd848u: goto label_2fd848;
        case 0x2fd84cu: goto label_2fd84c;
        case 0x2fd850u: goto label_2fd850;
        case 0x2fd854u: goto label_2fd854;
        case 0x2fd858u: goto label_2fd858;
        case 0x2fd85cu: goto label_2fd85c;
        case 0x2fd860u: goto label_2fd860;
        case 0x2fd864u: goto label_2fd864;
        case 0x2fd868u: goto label_2fd868;
        case 0x2fd86cu: goto label_2fd86c;
        case 0x2fd870u: goto label_2fd870;
        case 0x2fd874u: goto label_2fd874;
        case 0x2fd878u: goto label_2fd878;
        case 0x2fd87cu: goto label_2fd87c;
        case 0x2fd880u: goto label_2fd880;
        case 0x2fd884u: goto label_2fd884;
        case 0x2fd888u: goto label_2fd888;
        case 0x2fd88cu: goto label_2fd88c;
        case 0x2fd890u: goto label_2fd890;
        case 0x2fd894u: goto label_2fd894;
        case 0x2fd898u: goto label_2fd898;
        case 0x2fd89cu: goto label_2fd89c;
        case 0x2fd8a0u: goto label_2fd8a0;
        case 0x2fd8a4u: goto label_2fd8a4;
        case 0x2fd8a8u: goto label_2fd8a8;
        case 0x2fd8acu: goto label_2fd8ac;
        case 0x2fd8b0u: goto label_2fd8b0;
        case 0x2fd8b4u: goto label_2fd8b4;
        case 0x2fd8b8u: goto label_2fd8b8;
        case 0x2fd8bcu: goto label_2fd8bc;
        case 0x2fd8c0u: goto label_2fd8c0;
        case 0x2fd8c4u: goto label_2fd8c4;
        case 0x2fd8c8u: goto label_2fd8c8;
        case 0x2fd8ccu: goto label_2fd8cc;
        case 0x2fd8d0u: goto label_2fd8d0;
        case 0x2fd8d4u: goto label_2fd8d4;
        case 0x2fd8d8u: goto label_2fd8d8;
        case 0x2fd8dcu: goto label_2fd8dc;
        case 0x2fd8e0u: goto label_2fd8e0;
        case 0x2fd8e4u: goto label_2fd8e4;
        case 0x2fd8e8u: goto label_2fd8e8;
        case 0x2fd8ecu: goto label_2fd8ec;
        case 0x2fd8f0u: goto label_2fd8f0;
        case 0x2fd8f4u: goto label_2fd8f4;
        case 0x2fd8f8u: goto label_2fd8f8;
        case 0x2fd8fcu: goto label_2fd8fc;
        case 0x2fd900u: goto label_2fd900;
        case 0x2fd904u: goto label_2fd904;
        case 0x2fd908u: goto label_2fd908;
        case 0x2fd90cu: goto label_2fd90c;
        case 0x2fd910u: goto label_2fd910;
        case 0x2fd914u: goto label_2fd914;
        case 0x2fd918u: goto label_2fd918;
        case 0x2fd91cu: goto label_2fd91c;
        case 0x2fd920u: goto label_2fd920;
        case 0x2fd924u: goto label_2fd924;
        case 0x2fd928u: goto label_2fd928;
        case 0x2fd92cu: goto label_2fd92c;
        case 0x2fd930u: goto label_2fd930;
        case 0x2fd934u: goto label_2fd934;
        case 0x2fd938u: goto label_2fd938;
        case 0x2fd93cu: goto label_2fd93c;
        case 0x2fd940u: goto label_2fd940;
        case 0x2fd944u: goto label_2fd944;
        case 0x2fd948u: goto label_2fd948;
        case 0x2fd94cu: goto label_2fd94c;
        case 0x2fd950u: goto label_2fd950;
        case 0x2fd954u: goto label_2fd954;
        case 0x2fd958u: goto label_2fd958;
        case 0x2fd95cu: goto label_2fd95c;
        case 0x2fd960u: goto label_2fd960;
        case 0x2fd964u: goto label_2fd964;
        case 0x2fd968u: goto label_2fd968;
        case 0x2fd96cu: goto label_2fd96c;
        case 0x2fd970u: goto label_2fd970;
        case 0x2fd974u: goto label_2fd974;
        case 0x2fd978u: goto label_2fd978;
        case 0x2fd97cu: goto label_2fd97c;
        case 0x2fd980u: goto label_2fd980;
        case 0x2fd984u: goto label_2fd984;
        case 0x2fd988u: goto label_2fd988;
        case 0x2fd98cu: goto label_2fd98c;
        case 0x2fd990u: goto label_2fd990;
        case 0x2fd994u: goto label_2fd994;
        case 0x2fd998u: goto label_2fd998;
        case 0x2fd99cu: goto label_2fd99c;
        case 0x2fd9a0u: goto label_2fd9a0;
        case 0x2fd9a4u: goto label_2fd9a4;
        case 0x2fd9a8u: goto label_2fd9a8;
        case 0x2fd9acu: goto label_2fd9ac;
        case 0x2fd9b0u: goto label_2fd9b0;
        case 0x2fd9b4u: goto label_2fd9b4;
        case 0x2fd9b8u: goto label_2fd9b8;
        case 0x2fd9bcu: goto label_2fd9bc;
        case 0x2fd9c0u: goto label_2fd9c0;
        case 0x2fd9c4u: goto label_2fd9c4;
        case 0x2fd9c8u: goto label_2fd9c8;
        case 0x2fd9ccu: goto label_2fd9cc;
        case 0x2fd9d0u: goto label_2fd9d0;
        case 0x2fd9d4u: goto label_2fd9d4;
        case 0x2fd9d8u: goto label_2fd9d8;
        case 0x2fd9dcu: goto label_2fd9dc;
        case 0x2fd9e0u: goto label_2fd9e0;
        case 0x2fd9e4u: goto label_2fd9e4;
        case 0x2fd9e8u: goto label_2fd9e8;
        case 0x2fd9ecu: goto label_2fd9ec;
        case 0x2fd9f0u: goto label_2fd9f0;
        case 0x2fd9f4u: goto label_2fd9f4;
        case 0x2fd9f8u: goto label_2fd9f8;
        case 0x2fd9fcu: goto label_2fd9fc;
        case 0x2fda00u: goto label_2fda00;
        case 0x2fda04u: goto label_2fda04;
        case 0x2fda08u: goto label_2fda08;
        case 0x2fda0cu: goto label_2fda0c;
        case 0x2fda10u: goto label_2fda10;
        case 0x2fda14u: goto label_2fda14;
        case 0x2fda18u: goto label_2fda18;
        case 0x2fda1cu: goto label_2fda1c;
        case 0x2fda20u: goto label_2fda20;
        case 0x2fda24u: goto label_2fda24;
        case 0x2fda28u: goto label_2fda28;
        case 0x2fda2cu: goto label_2fda2c;
        case 0x2fda30u: goto label_2fda30;
        case 0x2fda34u: goto label_2fda34;
        case 0x2fda38u: goto label_2fda38;
        case 0x2fda3cu: goto label_2fda3c;
        case 0x2fda40u: goto label_2fda40;
        case 0x2fda44u: goto label_2fda44;
        case 0x2fda48u: goto label_2fda48;
        case 0x2fda4cu: goto label_2fda4c;
        case 0x2fda50u: goto label_2fda50;
        case 0x2fda54u: goto label_2fda54;
        case 0x2fda58u: goto label_2fda58;
        case 0x2fda5cu: goto label_2fda5c;
        case 0x2fda60u: goto label_2fda60;
        case 0x2fda64u: goto label_2fda64;
        case 0x2fda68u: goto label_2fda68;
        case 0x2fda6cu: goto label_2fda6c;
        case 0x2fda70u: goto label_2fda70;
        case 0x2fda74u: goto label_2fda74;
        case 0x2fda78u: goto label_2fda78;
        case 0x2fda7cu: goto label_2fda7c;
        case 0x2fda80u: goto label_2fda80;
        case 0x2fda84u: goto label_2fda84;
        case 0x2fda88u: goto label_2fda88;
        case 0x2fda8cu: goto label_2fda8c;
        case 0x2fda90u: goto label_2fda90;
        case 0x2fda94u: goto label_2fda94;
        case 0x2fda98u: goto label_2fda98;
        case 0x2fda9cu: goto label_2fda9c;
        case 0x2fdaa0u: goto label_2fdaa0;
        case 0x2fdaa4u: goto label_2fdaa4;
        case 0x2fdaa8u: goto label_2fdaa8;
        case 0x2fdaacu: goto label_2fdaac;
        case 0x2fdab0u: goto label_2fdab0;
        case 0x2fdab4u: goto label_2fdab4;
        case 0x2fdab8u: goto label_2fdab8;
        case 0x2fdabcu: goto label_2fdabc;
        case 0x2fdac0u: goto label_2fdac0;
        case 0x2fdac4u: goto label_2fdac4;
        case 0x2fdac8u: goto label_2fdac8;
        case 0x2fdaccu: goto label_2fdacc;
        case 0x2fdad0u: goto label_2fdad0;
        case 0x2fdad4u: goto label_2fdad4;
        case 0x2fdad8u: goto label_2fdad8;
        case 0x2fdadcu: goto label_2fdadc;
        case 0x2fdae0u: goto label_2fdae0;
        case 0x2fdae4u: goto label_2fdae4;
        case 0x2fdae8u: goto label_2fdae8;
        case 0x2fdaecu: goto label_2fdaec;
        case 0x2fdaf0u: goto label_2fdaf0;
        case 0x2fdaf4u: goto label_2fdaf4;
        case 0x2fdaf8u: goto label_2fdaf8;
        case 0x2fdafcu: goto label_2fdafc;
        case 0x2fdb00u: goto label_2fdb00;
        case 0x2fdb04u: goto label_2fdb04;
        case 0x2fdb08u: goto label_2fdb08;
        case 0x2fdb0cu: goto label_2fdb0c;
        case 0x2fdb10u: goto label_2fdb10;
        case 0x2fdb14u: goto label_2fdb14;
        case 0x2fdb18u: goto label_2fdb18;
        case 0x2fdb1cu: goto label_2fdb1c;
        case 0x2fdb20u: goto label_2fdb20;
        case 0x2fdb24u: goto label_2fdb24;
        case 0x2fdb28u: goto label_2fdb28;
        case 0x2fdb2cu: goto label_2fdb2c;
        case 0x2fdb30u: goto label_2fdb30;
        case 0x2fdb34u: goto label_2fdb34;
        case 0x2fdb38u: goto label_2fdb38;
        case 0x2fdb3cu: goto label_2fdb3c;
        case 0x2fdb40u: goto label_2fdb40;
        case 0x2fdb44u: goto label_2fdb44;
        case 0x2fdb48u: goto label_2fdb48;
        case 0x2fdb4cu: goto label_2fdb4c;
        case 0x2fdb50u: goto label_2fdb50;
        case 0x2fdb54u: goto label_2fdb54;
        case 0x2fdb58u: goto label_2fdb58;
        case 0x2fdb5cu: goto label_2fdb5c;
        case 0x2fdb60u: goto label_2fdb60;
        case 0x2fdb64u: goto label_2fdb64;
        case 0x2fdb68u: goto label_2fdb68;
        case 0x2fdb6cu: goto label_2fdb6c;
        case 0x2fdb70u: goto label_2fdb70;
        case 0x2fdb74u: goto label_2fdb74;
        case 0x2fdb78u: goto label_2fdb78;
        case 0x2fdb7cu: goto label_2fdb7c;
        case 0x2fdb80u: goto label_2fdb80;
        case 0x2fdb84u: goto label_2fdb84;
        case 0x2fdb88u: goto label_2fdb88;
        case 0x2fdb8cu: goto label_2fdb8c;
        case 0x2fdb90u: goto label_2fdb90;
        case 0x2fdb94u: goto label_2fdb94;
        case 0x2fdb98u: goto label_2fdb98;
        case 0x2fdb9cu: goto label_2fdb9c;
        case 0x2fdba0u: goto label_2fdba0;
        case 0x2fdba4u: goto label_2fdba4;
        case 0x2fdba8u: goto label_2fdba8;
        case 0x2fdbacu: goto label_2fdbac;
        case 0x2fdbb0u: goto label_2fdbb0;
        case 0x2fdbb4u: goto label_2fdbb4;
        case 0x2fdbb8u: goto label_2fdbb8;
        case 0x2fdbbcu: goto label_2fdbbc;
        case 0x2fdbc0u: goto label_2fdbc0;
        case 0x2fdbc4u: goto label_2fdbc4;
        case 0x2fdbc8u: goto label_2fdbc8;
        case 0x2fdbccu: goto label_2fdbcc;
        case 0x2fdbd0u: goto label_2fdbd0;
        case 0x2fdbd4u: goto label_2fdbd4;
        case 0x2fdbd8u: goto label_2fdbd8;
        case 0x2fdbdcu: goto label_2fdbdc;
        case 0x2fdbe0u: goto label_2fdbe0;
        case 0x2fdbe4u: goto label_2fdbe4;
        case 0x2fdbe8u: goto label_2fdbe8;
        case 0x2fdbecu: goto label_2fdbec;
        case 0x2fdbf0u: goto label_2fdbf0;
        case 0x2fdbf4u: goto label_2fdbf4;
        case 0x2fdbf8u: goto label_2fdbf8;
        case 0x2fdbfcu: goto label_2fdbfc;
        case 0x2fdc00u: goto label_2fdc00;
        case 0x2fdc04u: goto label_2fdc04;
        case 0x2fdc08u: goto label_2fdc08;
        case 0x2fdc0cu: goto label_2fdc0c;
        case 0x2fdc10u: goto label_2fdc10;
        case 0x2fdc14u: goto label_2fdc14;
        case 0x2fdc18u: goto label_2fdc18;
        case 0x2fdc1cu: goto label_2fdc1c;
        case 0x2fdc20u: goto label_2fdc20;
        case 0x2fdc24u: goto label_2fdc24;
        case 0x2fdc28u: goto label_2fdc28;
        case 0x2fdc2cu: goto label_2fdc2c;
        case 0x2fdc30u: goto label_2fdc30;
        case 0x2fdc34u: goto label_2fdc34;
        case 0x2fdc38u: goto label_2fdc38;
        case 0x2fdc3cu: goto label_2fdc3c;
        case 0x2fdc40u: goto label_2fdc40;
        case 0x2fdc44u: goto label_2fdc44;
        case 0x2fdc48u: goto label_2fdc48;
        case 0x2fdc4cu: goto label_2fdc4c;
        case 0x2fdc50u: goto label_2fdc50;
        case 0x2fdc54u: goto label_2fdc54;
        case 0x2fdc58u: goto label_2fdc58;
        case 0x2fdc5cu: goto label_2fdc5c;
        case 0x2fdc60u: goto label_2fdc60;
        case 0x2fdc64u: goto label_2fdc64;
        case 0x2fdc68u: goto label_2fdc68;
        case 0x2fdc6cu: goto label_2fdc6c;
        case 0x2fdc70u: goto label_2fdc70;
        case 0x2fdc74u: goto label_2fdc74;
        case 0x2fdc78u: goto label_2fdc78;
        case 0x2fdc7cu: goto label_2fdc7c;
        case 0x2fdc80u: goto label_2fdc80;
        case 0x2fdc84u: goto label_2fdc84;
        case 0x2fdc88u: goto label_2fdc88;
        case 0x2fdc8cu: goto label_2fdc8c;
        case 0x2fdc90u: goto label_2fdc90;
        case 0x2fdc94u: goto label_2fdc94;
        case 0x2fdc98u: goto label_2fdc98;
        case 0x2fdc9cu: goto label_2fdc9c;
        case 0x2fdca0u: goto label_2fdca0;
        case 0x2fdca4u: goto label_2fdca4;
        case 0x2fdca8u: goto label_2fdca8;
        case 0x2fdcacu: goto label_2fdcac;
        case 0x2fdcb0u: goto label_2fdcb0;
        case 0x2fdcb4u: goto label_2fdcb4;
        case 0x2fdcb8u: goto label_2fdcb8;
        case 0x2fdcbcu: goto label_2fdcbc;
        case 0x2fdcc0u: goto label_2fdcc0;
        case 0x2fdcc4u: goto label_2fdcc4;
        case 0x2fdcc8u: goto label_2fdcc8;
        case 0x2fdcccu: goto label_2fdccc;
        case 0x2fdcd0u: goto label_2fdcd0;
        case 0x2fdcd4u: goto label_2fdcd4;
        case 0x2fdcd8u: goto label_2fdcd8;
        case 0x2fdcdcu: goto label_2fdcdc;
        case 0x2fdce0u: goto label_2fdce0;
        case 0x2fdce4u: goto label_2fdce4;
        case 0x2fdce8u: goto label_2fdce8;
        case 0x2fdcecu: goto label_2fdcec;
        case 0x2fdcf0u: goto label_2fdcf0;
        case 0x2fdcf4u: goto label_2fdcf4;
        case 0x2fdcf8u: goto label_2fdcf8;
        case 0x2fdcfcu: goto label_2fdcfc;
        case 0x2fdd00u: goto label_2fdd00;
        case 0x2fdd04u: goto label_2fdd04;
        case 0x2fdd08u: goto label_2fdd08;
        case 0x2fdd0cu: goto label_2fdd0c;
        case 0x2fdd10u: goto label_2fdd10;
        case 0x2fdd14u: goto label_2fdd14;
        case 0x2fdd18u: goto label_2fdd18;
        case 0x2fdd1cu: goto label_2fdd1c;
        case 0x2fdd20u: goto label_2fdd20;
        case 0x2fdd24u: goto label_2fdd24;
        case 0x2fdd28u: goto label_2fdd28;
        case 0x2fdd2cu: goto label_2fdd2c;
        case 0x2fdd30u: goto label_2fdd30;
        case 0x2fdd34u: goto label_2fdd34;
        case 0x2fdd38u: goto label_2fdd38;
        case 0x2fdd3cu: goto label_2fdd3c;
        case 0x2fdd40u: goto label_2fdd40;
        case 0x2fdd44u: goto label_2fdd44;
        case 0x2fdd48u: goto label_2fdd48;
        case 0x2fdd4cu: goto label_2fdd4c;
        case 0x2fdd50u: goto label_2fdd50;
        case 0x2fdd54u: goto label_2fdd54;
        case 0x2fdd58u: goto label_2fdd58;
        case 0x2fdd5cu: goto label_2fdd5c;
        case 0x2fdd60u: goto label_2fdd60;
        case 0x2fdd64u: goto label_2fdd64;
        case 0x2fdd68u: goto label_2fdd68;
        case 0x2fdd6cu: goto label_2fdd6c;
        case 0x2fdd70u: goto label_2fdd70;
        case 0x2fdd74u: goto label_2fdd74;
        case 0x2fdd78u: goto label_2fdd78;
        case 0x2fdd7cu: goto label_2fdd7c;
        case 0x2fdd80u: goto label_2fdd80;
        case 0x2fdd84u: goto label_2fdd84;
        case 0x2fdd88u: goto label_2fdd88;
        case 0x2fdd8cu: goto label_2fdd8c;
        case 0x2fdd90u: goto label_2fdd90;
        case 0x2fdd94u: goto label_2fdd94;
        case 0x2fdd98u: goto label_2fdd98;
        case 0x2fdd9cu: goto label_2fdd9c;
        case 0x2fdda0u: goto label_2fdda0;
        case 0x2fdda4u: goto label_2fdda4;
        case 0x2fdda8u: goto label_2fdda8;
        case 0x2fddacu: goto label_2fddac;
        case 0x2fddb0u: goto label_2fddb0;
        case 0x2fddb4u: goto label_2fddb4;
        case 0x2fddb8u: goto label_2fddb8;
        case 0x2fddbcu: goto label_2fddbc;
        case 0x2fddc0u: goto label_2fddc0;
        case 0x2fddc4u: goto label_2fddc4;
        case 0x2fddc8u: goto label_2fddc8;
        case 0x2fddccu: goto label_2fddcc;
        case 0x2fddd0u: goto label_2fddd0;
        case 0x2fddd4u: goto label_2fddd4;
        case 0x2fddd8u: goto label_2fddd8;
        case 0x2fdddcu: goto label_2fdddc;
        case 0x2fdde0u: goto label_2fdde0;
        case 0x2fdde4u: goto label_2fdde4;
        case 0x2fdde8u: goto label_2fdde8;
        case 0x2fddecu: goto label_2fddec;
        case 0x2fddf0u: goto label_2fddf0;
        case 0x2fddf4u: goto label_2fddf4;
        case 0x2fddf8u: goto label_2fddf8;
        case 0x2fddfcu: goto label_2fddfc;
        case 0x2fde00u: goto label_2fde00;
        case 0x2fde04u: goto label_2fde04;
        case 0x2fde08u: goto label_2fde08;
        case 0x2fde0cu: goto label_2fde0c;
        case 0x2fde10u: goto label_2fde10;
        case 0x2fde14u: goto label_2fde14;
        case 0x2fde18u: goto label_2fde18;
        case 0x2fde1cu: goto label_2fde1c;
        case 0x2fde20u: goto label_2fde20;
        case 0x2fde24u: goto label_2fde24;
        case 0x2fde28u: goto label_2fde28;
        case 0x2fde2cu: goto label_2fde2c;
        case 0x2fde30u: goto label_2fde30;
        case 0x2fde34u: goto label_2fde34;
        case 0x2fde38u: goto label_2fde38;
        case 0x2fde3cu: goto label_2fde3c;
        case 0x2fde40u: goto label_2fde40;
        case 0x2fde44u: goto label_2fde44;
        case 0x2fde48u: goto label_2fde48;
        case 0x2fde4cu: goto label_2fde4c;
        case 0x2fde50u: goto label_2fde50;
        case 0x2fde54u: goto label_2fde54;
        case 0x2fde58u: goto label_2fde58;
        case 0x2fde5cu: goto label_2fde5c;
        case 0x2fde60u: goto label_2fde60;
        case 0x2fde64u: goto label_2fde64;
        case 0x2fde68u: goto label_2fde68;
        case 0x2fde6cu: goto label_2fde6c;
        case 0x2fde70u: goto label_2fde70;
        case 0x2fde74u: goto label_2fde74;
        case 0x2fde78u: goto label_2fde78;
        case 0x2fde7cu: goto label_2fde7c;
        case 0x2fde80u: goto label_2fde80;
        case 0x2fde84u: goto label_2fde84;
        case 0x2fde88u: goto label_2fde88;
        case 0x2fde8cu: goto label_2fde8c;
        case 0x2fde90u: goto label_2fde90;
        case 0x2fde94u: goto label_2fde94;
        case 0x2fde98u: goto label_2fde98;
        case 0x2fde9cu: goto label_2fde9c;
        case 0x2fdea0u: goto label_2fdea0;
        case 0x2fdea4u: goto label_2fdea4;
        case 0x2fdea8u: goto label_2fdea8;
        case 0x2fdeacu: goto label_2fdeac;
        case 0x2fdeb0u: goto label_2fdeb0;
        case 0x2fdeb4u: goto label_2fdeb4;
        case 0x2fdeb8u: goto label_2fdeb8;
        case 0x2fdebcu: goto label_2fdebc;
        case 0x2fdec0u: goto label_2fdec0;
        case 0x2fdec4u: goto label_2fdec4;
        case 0x2fdec8u: goto label_2fdec8;
        case 0x2fdeccu: goto label_2fdecc;
        case 0x2fded0u: goto label_2fded0;
        case 0x2fded4u: goto label_2fded4;
        case 0x2fded8u: goto label_2fded8;
        case 0x2fdedcu: goto label_2fdedc;
        case 0x2fdee0u: goto label_2fdee0;
        case 0x2fdee4u: goto label_2fdee4;
        case 0x2fdee8u: goto label_2fdee8;
        case 0x2fdeecu: goto label_2fdeec;
        case 0x2fdef0u: goto label_2fdef0;
        case 0x2fdef4u: goto label_2fdef4;
        case 0x2fdef8u: goto label_2fdef8;
        case 0x2fdefcu: goto label_2fdefc;
        case 0x2fdf00u: goto label_2fdf00;
        case 0x2fdf04u: goto label_2fdf04;
        case 0x2fdf08u: goto label_2fdf08;
        case 0x2fdf0cu: goto label_2fdf0c;
        case 0x2fdf10u: goto label_2fdf10;
        case 0x2fdf14u: goto label_2fdf14;
        case 0x2fdf18u: goto label_2fdf18;
        case 0x2fdf1cu: goto label_2fdf1c;
        case 0x2fdf20u: goto label_2fdf20;
        case 0x2fdf24u: goto label_2fdf24;
        case 0x2fdf28u: goto label_2fdf28;
        case 0x2fdf2cu: goto label_2fdf2c;
        case 0x2fdf30u: goto label_2fdf30;
        case 0x2fdf34u: goto label_2fdf34;
        case 0x2fdf38u: goto label_2fdf38;
        case 0x2fdf3cu: goto label_2fdf3c;
        case 0x2fdf40u: goto label_2fdf40;
        case 0x2fdf44u: goto label_2fdf44;
        case 0x2fdf48u: goto label_2fdf48;
        case 0x2fdf4cu: goto label_2fdf4c;
        case 0x2fdf50u: goto label_2fdf50;
        case 0x2fdf54u: goto label_2fdf54;
        case 0x2fdf58u: goto label_2fdf58;
        case 0x2fdf5cu: goto label_2fdf5c;
        case 0x2fdf60u: goto label_2fdf60;
        case 0x2fdf64u: goto label_2fdf64;
        case 0x2fdf68u: goto label_2fdf68;
        case 0x2fdf6cu: goto label_2fdf6c;
        case 0x2fdf70u: goto label_2fdf70;
        case 0x2fdf74u: goto label_2fdf74;
        case 0x2fdf78u: goto label_2fdf78;
        case 0x2fdf7cu: goto label_2fdf7c;
        case 0x2fdf80u: goto label_2fdf80;
        case 0x2fdf84u: goto label_2fdf84;
        case 0x2fdf88u: goto label_2fdf88;
        case 0x2fdf8cu: goto label_2fdf8c;
        case 0x2fdf90u: goto label_2fdf90;
        case 0x2fdf94u: goto label_2fdf94;
        case 0x2fdf98u: goto label_2fdf98;
        case 0x2fdf9cu: goto label_2fdf9c;
        case 0x2fdfa0u: goto label_2fdfa0;
        case 0x2fdfa4u: goto label_2fdfa4;
        case 0x2fdfa8u: goto label_2fdfa8;
        case 0x2fdfacu: goto label_2fdfac;
        case 0x2fdfb0u: goto label_2fdfb0;
        case 0x2fdfb4u: goto label_2fdfb4;
        case 0x2fdfb8u: goto label_2fdfb8;
        case 0x2fdfbcu: goto label_2fdfbc;
        case 0x2fdfc0u: goto label_2fdfc0;
        case 0x2fdfc4u: goto label_2fdfc4;
        case 0x2fdfc8u: goto label_2fdfc8;
        case 0x2fdfccu: goto label_2fdfcc;
        case 0x2fdfd0u: goto label_2fdfd0;
        case 0x2fdfd4u: goto label_2fdfd4;
        case 0x2fdfd8u: goto label_2fdfd8;
        case 0x2fdfdcu: goto label_2fdfdc;
        case 0x2fdfe0u: goto label_2fdfe0;
        case 0x2fdfe4u: goto label_2fdfe4;
        case 0x2fdfe8u: goto label_2fdfe8;
        case 0x2fdfecu: goto label_2fdfec;
        case 0x2fdff0u: goto label_2fdff0;
        case 0x2fdff4u: goto label_2fdff4;
        case 0x2fdff8u: goto label_2fdff8;
        case 0x2fdffcu: goto label_2fdffc;
        case 0x2fe000u: goto label_2fe000;
        case 0x2fe004u: goto label_2fe004;
        case 0x2fe008u: goto label_2fe008;
        case 0x2fe00cu: goto label_2fe00c;
        case 0x2fe010u: goto label_2fe010;
        case 0x2fe014u: goto label_2fe014;
        case 0x2fe018u: goto label_2fe018;
        case 0x2fe01cu: goto label_2fe01c;
        case 0x2fe020u: goto label_2fe020;
        case 0x2fe024u: goto label_2fe024;
        case 0x2fe028u: goto label_2fe028;
        case 0x2fe02cu: goto label_2fe02c;
        case 0x2fe030u: goto label_2fe030;
        case 0x2fe034u: goto label_2fe034;
        case 0x2fe038u: goto label_2fe038;
        case 0x2fe03cu: goto label_2fe03c;
        case 0x2fe040u: goto label_2fe040;
        case 0x2fe044u: goto label_2fe044;
        case 0x2fe048u: goto label_2fe048;
        case 0x2fe04cu: goto label_2fe04c;
        case 0x2fe050u: goto label_2fe050;
        case 0x2fe054u: goto label_2fe054;
        case 0x2fe058u: goto label_2fe058;
        case 0x2fe05cu: goto label_2fe05c;
        case 0x2fe060u: goto label_2fe060;
        case 0x2fe064u: goto label_2fe064;
        case 0x2fe068u: goto label_2fe068;
        case 0x2fe06cu: goto label_2fe06c;
        case 0x2fe070u: goto label_2fe070;
        case 0x2fe074u: goto label_2fe074;
        case 0x2fe078u: goto label_2fe078;
        case 0x2fe07cu: goto label_2fe07c;
        case 0x2fe080u: goto label_2fe080;
        case 0x2fe084u: goto label_2fe084;
        case 0x2fe088u: goto label_2fe088;
        case 0x2fe08cu: goto label_2fe08c;
        case 0x2fe090u: goto label_2fe090;
        case 0x2fe094u: goto label_2fe094;
        case 0x2fe098u: goto label_2fe098;
        case 0x2fe09cu: goto label_2fe09c;
        case 0x2fe0a0u: goto label_2fe0a0;
        case 0x2fe0a4u: goto label_2fe0a4;
        case 0x2fe0a8u: goto label_2fe0a8;
        case 0x2fe0acu: goto label_2fe0ac;
        case 0x2fe0b0u: goto label_2fe0b0;
        case 0x2fe0b4u: goto label_2fe0b4;
        case 0x2fe0b8u: goto label_2fe0b8;
        case 0x2fe0bcu: goto label_2fe0bc;
        case 0x2fe0c0u: goto label_2fe0c0;
        case 0x2fe0c4u: goto label_2fe0c4;
        case 0x2fe0c8u: goto label_2fe0c8;
        case 0x2fe0ccu: goto label_2fe0cc;
        case 0x2fe0d0u: goto label_2fe0d0;
        case 0x2fe0d4u: goto label_2fe0d4;
        case 0x2fe0d8u: goto label_2fe0d8;
        case 0x2fe0dcu: goto label_2fe0dc;
        case 0x2fe0e0u: goto label_2fe0e0;
        case 0x2fe0e4u: goto label_2fe0e4;
        case 0x2fe0e8u: goto label_2fe0e8;
        case 0x2fe0ecu: goto label_2fe0ec;
        case 0x2fe0f0u: goto label_2fe0f0;
        case 0x2fe0f4u: goto label_2fe0f4;
        case 0x2fe0f8u: goto label_2fe0f8;
        case 0x2fe0fcu: goto label_2fe0fc;
        case 0x2fe100u: goto label_2fe100;
        case 0x2fe104u: goto label_2fe104;
        case 0x2fe108u: goto label_2fe108;
        case 0x2fe10cu: goto label_2fe10c;
        case 0x2fe110u: goto label_2fe110;
        case 0x2fe114u: goto label_2fe114;
        case 0x2fe118u: goto label_2fe118;
        case 0x2fe11cu: goto label_2fe11c;
        case 0x2fe120u: goto label_2fe120;
        case 0x2fe124u: goto label_2fe124;
        case 0x2fe128u: goto label_2fe128;
        case 0x2fe12cu: goto label_2fe12c;
        case 0x2fe130u: goto label_2fe130;
        case 0x2fe134u: goto label_2fe134;
        case 0x2fe138u: goto label_2fe138;
        case 0x2fe13cu: goto label_2fe13c;
        case 0x2fe140u: goto label_2fe140;
        case 0x2fe144u: goto label_2fe144;
        case 0x2fe148u: goto label_2fe148;
        case 0x2fe14cu: goto label_2fe14c;
        case 0x2fe150u: goto label_2fe150;
        case 0x2fe154u: goto label_2fe154;
        case 0x2fe158u: goto label_2fe158;
        case 0x2fe15cu: goto label_2fe15c;
        case 0x2fe160u: goto label_2fe160;
        case 0x2fe164u: goto label_2fe164;
        case 0x2fe168u: goto label_2fe168;
        case 0x2fe16cu: goto label_2fe16c;
        case 0x2fe170u: goto label_2fe170;
        case 0x2fe174u: goto label_2fe174;
        case 0x2fe178u: goto label_2fe178;
        case 0x2fe17cu: goto label_2fe17c;
        case 0x2fe180u: goto label_2fe180;
        case 0x2fe184u: goto label_2fe184;
        case 0x2fe188u: goto label_2fe188;
        case 0x2fe18cu: goto label_2fe18c;
        case 0x2fe190u: goto label_2fe190;
        case 0x2fe194u: goto label_2fe194;
        case 0x2fe198u: goto label_2fe198;
        case 0x2fe19cu: goto label_2fe19c;
        case 0x2fe1a0u: goto label_2fe1a0;
        case 0x2fe1a4u: goto label_2fe1a4;
        case 0x2fe1a8u: goto label_2fe1a8;
        case 0x2fe1acu: goto label_2fe1ac;
        case 0x2fe1b0u: goto label_2fe1b0;
        case 0x2fe1b4u: goto label_2fe1b4;
        case 0x2fe1b8u: goto label_2fe1b8;
        case 0x2fe1bcu: goto label_2fe1bc;
        case 0x2fe1c0u: goto label_2fe1c0;
        case 0x2fe1c4u: goto label_2fe1c4;
        case 0x2fe1c8u: goto label_2fe1c8;
        case 0x2fe1ccu: goto label_2fe1cc;
        case 0x2fe1d0u: goto label_2fe1d0;
        case 0x2fe1d4u: goto label_2fe1d4;
        case 0x2fe1d8u: goto label_2fe1d8;
        case 0x2fe1dcu: goto label_2fe1dc;
        case 0x2fe1e0u: goto label_2fe1e0;
        case 0x2fe1e4u: goto label_2fe1e4;
        case 0x2fe1e8u: goto label_2fe1e8;
        case 0x2fe1ecu: goto label_2fe1ec;
        case 0x2fe1f0u: goto label_2fe1f0;
        case 0x2fe1f4u: goto label_2fe1f4;
        case 0x2fe1f8u: goto label_2fe1f8;
        case 0x2fe1fcu: goto label_2fe1fc;
        case 0x2fe200u: goto label_2fe200;
        case 0x2fe204u: goto label_2fe204;
        case 0x2fe208u: goto label_2fe208;
        case 0x2fe20cu: goto label_2fe20c;
        case 0x2fe210u: goto label_2fe210;
        case 0x2fe214u: goto label_2fe214;
        case 0x2fe218u: goto label_2fe218;
        case 0x2fe21cu: goto label_2fe21c;
        case 0x2fe220u: goto label_2fe220;
        case 0x2fe224u: goto label_2fe224;
        case 0x2fe228u: goto label_2fe228;
        case 0x2fe22cu: goto label_2fe22c;
        case 0x2fe230u: goto label_2fe230;
        case 0x2fe234u: goto label_2fe234;
        case 0x2fe238u: goto label_2fe238;
        case 0x2fe23cu: goto label_2fe23c;
        case 0x2fe240u: goto label_2fe240;
        case 0x2fe244u: goto label_2fe244;
        case 0x2fe248u: goto label_2fe248;
        case 0x2fe24cu: goto label_2fe24c;
        case 0x2fe250u: goto label_2fe250;
        case 0x2fe254u: goto label_2fe254;
        case 0x2fe258u: goto label_2fe258;
        case 0x2fe25cu: goto label_2fe25c;
        case 0x2fe260u: goto label_2fe260;
        case 0x2fe264u: goto label_2fe264;
        case 0x2fe268u: goto label_2fe268;
        case 0x2fe26cu: goto label_2fe26c;
        case 0x2fe270u: goto label_2fe270;
        case 0x2fe274u: goto label_2fe274;
        case 0x2fe278u: goto label_2fe278;
        case 0x2fe27cu: goto label_2fe27c;
        case 0x2fe280u: goto label_2fe280;
        case 0x2fe284u: goto label_2fe284;
        case 0x2fe288u: goto label_2fe288;
        case 0x2fe28cu: goto label_2fe28c;
        case 0x2fe290u: goto label_2fe290;
        case 0x2fe294u: goto label_2fe294;
        case 0x2fe298u: goto label_2fe298;
        case 0x2fe29cu: goto label_2fe29c;
        case 0x2fe2a0u: goto label_2fe2a0;
        case 0x2fe2a4u: goto label_2fe2a4;
        case 0x2fe2a8u: goto label_2fe2a8;
        case 0x2fe2acu: goto label_2fe2ac;
        case 0x2fe2b0u: goto label_2fe2b0;
        case 0x2fe2b4u: goto label_2fe2b4;
        case 0x2fe2b8u: goto label_2fe2b8;
        case 0x2fe2bcu: goto label_2fe2bc;
        case 0x2fe2c0u: goto label_2fe2c0;
        case 0x2fe2c4u: goto label_2fe2c4;
        case 0x2fe2c8u: goto label_2fe2c8;
        case 0x2fe2ccu: goto label_2fe2cc;
        case 0x2fe2d0u: goto label_2fe2d0;
        case 0x2fe2d4u: goto label_2fe2d4;
        case 0x2fe2d8u: goto label_2fe2d8;
        case 0x2fe2dcu: goto label_2fe2dc;
        case 0x2fe2e0u: goto label_2fe2e0;
        case 0x2fe2e4u: goto label_2fe2e4;
        case 0x2fe2e8u: goto label_2fe2e8;
        case 0x2fe2ecu: goto label_2fe2ec;
        case 0x2fe2f0u: goto label_2fe2f0;
        case 0x2fe2f4u: goto label_2fe2f4;
        case 0x2fe2f8u: goto label_2fe2f8;
        case 0x2fe2fcu: goto label_2fe2fc;
        case 0x2fe300u: goto label_2fe300;
        case 0x2fe304u: goto label_2fe304;
        case 0x2fe308u: goto label_2fe308;
        case 0x2fe30cu: goto label_2fe30c;
        case 0x2fe310u: goto label_2fe310;
        case 0x2fe314u: goto label_2fe314;
        case 0x2fe318u: goto label_2fe318;
        case 0x2fe31cu: goto label_2fe31c;
        case 0x2fe320u: goto label_2fe320;
        case 0x2fe324u: goto label_2fe324;
        case 0x2fe328u: goto label_2fe328;
        case 0x2fe32cu: goto label_2fe32c;
        case 0x2fe330u: goto label_2fe330;
        case 0x2fe334u: goto label_2fe334;
        case 0x2fe338u: goto label_2fe338;
        case 0x2fe33cu: goto label_2fe33c;
        case 0x2fe340u: goto label_2fe340;
        case 0x2fe344u: goto label_2fe344;
        case 0x2fe348u: goto label_2fe348;
        case 0x2fe34cu: goto label_2fe34c;
        case 0x2fe350u: goto label_2fe350;
        case 0x2fe354u: goto label_2fe354;
        case 0x2fe358u: goto label_2fe358;
        case 0x2fe35cu: goto label_2fe35c;
        case 0x2fe360u: goto label_2fe360;
        case 0x2fe364u: goto label_2fe364;
        case 0x2fe368u: goto label_2fe368;
        case 0x2fe36cu: goto label_2fe36c;
        case 0x2fe370u: goto label_2fe370;
        case 0x2fe374u: goto label_2fe374;
        case 0x2fe378u: goto label_2fe378;
        case 0x2fe37cu: goto label_2fe37c;
        case 0x2fe380u: goto label_2fe380;
        case 0x2fe384u: goto label_2fe384;
        case 0x2fe388u: goto label_2fe388;
        case 0x2fe38cu: goto label_2fe38c;
        case 0x2fe390u: goto label_2fe390;
        case 0x2fe394u: goto label_2fe394;
        case 0x2fe398u: goto label_2fe398;
        case 0x2fe39cu: goto label_2fe39c;
        case 0x2fe3a0u: goto label_2fe3a0;
        case 0x2fe3a4u: goto label_2fe3a4;
        case 0x2fe3a8u: goto label_2fe3a8;
        case 0x2fe3acu: goto label_2fe3ac;
        case 0x2fe3b0u: goto label_2fe3b0;
        case 0x2fe3b4u: goto label_2fe3b4;
        case 0x2fe3b8u: goto label_2fe3b8;
        case 0x2fe3bcu: goto label_2fe3bc;
        case 0x2fe3c0u: goto label_2fe3c0;
        case 0x2fe3c4u: goto label_2fe3c4;
        case 0x2fe3c8u: goto label_2fe3c8;
        case 0x2fe3ccu: goto label_2fe3cc;
        case 0x2fe3d0u: goto label_2fe3d0;
        case 0x2fe3d4u: goto label_2fe3d4;
        case 0x2fe3d8u: goto label_2fe3d8;
        case 0x2fe3dcu: goto label_2fe3dc;
        case 0x2fe3e0u: goto label_2fe3e0;
        case 0x2fe3e4u: goto label_2fe3e4;
        case 0x2fe3e8u: goto label_2fe3e8;
        case 0x2fe3ecu: goto label_2fe3ec;
        case 0x2fe3f0u: goto label_2fe3f0;
        case 0x2fe3f4u: goto label_2fe3f4;
        case 0x2fe3f8u: goto label_2fe3f8;
        case 0x2fe3fcu: goto label_2fe3fc;
        default: break;
    }

    ctx->pc = 0x2fca70u;

label_2fca70:
    // 0x2fca70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fca74:
    // 0x2fca74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fca74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fca78:
    // 0x2fca78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fca7c:
    // 0x2fca7c: 0x244232d8  addiu       $v0, $v0, 0x32D8
    ctx->pc = 0x2fca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13016));
label_2fca80:
    // 0x2fca80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fca84:
    // 0x2fca84: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2fca84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_2fca88:
    // 0x2fca88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fca8c:
    // 0x2fca8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fca8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fca90:
    // 0x2fca90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fca90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2fca94:
    // 0x2fca94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2fca94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fca98:
    // 0x2fca98: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2fca98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2fca9c:
    // 0x2fca9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2fca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2fcaa0:
    // 0x2fcaa0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fcaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_2fcaa4:
    // 0x2fcaa4: 0xac900054  sw          $s0, 0x54($a0)
    ctx->pc = 0x2fcaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 16));
label_2fcaa8:
    // 0x2fcaa8: 0xac870058  sw          $a3, 0x58($a0)
    ctx->pc = 0x2fcaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 7));
label_2fcaac:
    // 0x2fcaac: 0xac8500c8  sw          $a1, 0xC8($a0)
    ctx->pc = 0x2fcaacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 5));
label_2fcab0:
    // 0x2fcab0: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x2fcab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
label_2fcab4:
    // 0x2fcab4: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x2fcab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_2fcab8:
    // 0x2fcab8: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x2fcab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
label_2fcabc:
    // 0x2fcabc: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x2fcabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_2fcac0:
    // 0x2fcac0: 0xc07463c  jal         func_1D18F0
label_2fcac4:
    if (ctx->pc == 0x2FCAC4u) {
        ctx->pc = 0x2FCAC4u;
            // 0x2fcac4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2FCAC8u;
        goto label_2fcac8;
    }
    ctx->pc = 0x2FCAC0u;
    SET_GPR_U32(ctx, 31, 0x2FCAC8u);
    ctx->pc = 0x2FCAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAC0u;
            // 0x2fcac4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (runtime->hasFunction(0x1D18F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D18F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCAC8u; }
        if (ctx->pc != 0x2FCAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D18F0_0x1d18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCAC8u; }
        if (ctx->pc != 0x2FCAC8u) { return; }
    }
    ctx->pc = 0x2FCAC8u;
label_2fcac8:
    // 0x2fcac8: 0xa22200d9  sb          $v0, 0xD9($s1)
    ctx->pc = 0x2fcac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 217), (uint8_t)GPR_U32(ctx, 2));
label_2fcacc:
    // 0x2fcacc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2fcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2fcad0:
    // 0x2fcad0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x2fcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_2fcad4:
    // 0x2fcad4: 0xc07463c  jal         func_1D18F0
label_2fcad8:
    if (ctx->pc == 0x2FCAD8u) {
        ctx->pc = 0x2FCAD8u;
            // 0x2fcad8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2FCADCu;
        goto label_2fcadc;
    }
    ctx->pc = 0x2FCAD4u;
    SET_GPR_U32(ctx, 31, 0x2FCADCu);
    ctx->pc = 0x2FCAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAD4u;
            // 0x2fcad8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (runtime->hasFunction(0x1D18F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D18F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCADCu; }
        if (ctx->pc != 0x2FCADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D18F0_0x1d18f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCADCu; }
        if (ctx->pc != 0x2FCADCu) { return; }
    }
    ctx->pc = 0x2FCADCu;
label_2fcadc:
    // 0x2fcadc: 0xa22200da  sb          $v0, 0xDA($s1)
    ctx->pc = 0x2fcadcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 218), (uint8_t)GPR_U32(ctx, 2));
label_2fcae0:
    // 0x2fcae0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x2fcae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2fcae4:
    // 0x2fcae4: 0xa22000db  sb          $zero, 0xDB($s1)
    ctx->pc = 0x2fcae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 219), (uint8_t)GPR_U32(ctx, 0));
label_2fcae8:
    // 0x2fcae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fcaec:
    // 0x2fcaec: 0xa22000dc  sb          $zero, 0xDC($s1)
    ctx->pc = 0x2fcaecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 220), (uint8_t)GPR_U32(ctx, 0));
label_2fcaf0:
    // 0x2fcaf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fcaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcaf4:
    // 0x2fcaf4: 0xa22200dd  sb          $v0, 0xDD($s1)
    ctx->pc = 0x2fcaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 221), (uint8_t)GPR_U32(ctx, 2));
label_2fcaf8:
    // 0x2fcaf8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2fcaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2fcafc:
    // 0x2fcafc: 0xa22000de  sb          $zero, 0xDE($s1)
    ctx->pc = 0x2fcafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 222), (uint8_t)GPR_U32(ctx, 0));
label_2fcb00:
    // 0x2fcb00: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x2fcb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_2fcb04:
    // 0x2fcb04: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2fcb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_2fcb08:
    // 0x2fcb08: 0xc04a576  jal         func_1295D8
label_2fcb0c:
    if (ctx->pc == 0x2FCB0Cu) {
        ctx->pc = 0x2FCB0Cu;
            // 0x2fcb0c: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x2FCB10u;
        goto label_2fcb10;
    }
    ctx->pc = 0x2FCB08u;
    SET_GPR_U32(ctx, 31, 0x2FCB10u);
    ctx->pc = 0x2FCB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB08u;
            // 0x2fcb0c: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB10u; }
        if (ctx->pc != 0x2FCB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB10u; }
        if (ctx->pc != 0x2FCB10u) { return; }
    }
    ctx->pc = 0x2FCB10u;
label_2fcb10:
    // 0x2fcb10: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x2fcb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2fcb14:
    // 0x2fcb14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fcb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcb18:
    // 0x2fcb18: 0xc04a576  jal         func_1295D8
label_2fcb1c:
    if (ctx->pc == 0x2FCB1Cu) {
        ctx->pc = 0x2FCB1Cu;
            // 0x2fcb1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FCB20u;
        goto label_2fcb20;
    }
    ctx->pc = 0x2FCB18u;
    SET_GPR_U32(ctx, 31, 0x2FCB20u);
    ctx->pc = 0x2FCB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB18u;
            // 0x2fcb1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB20u; }
        if (ctx->pc != 0x2FCB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB20u; }
        if (ctx->pc != 0x2FCB20u) { return; }
    }
    ctx->pc = 0x2FCB20u;
label_2fcb20:
    // 0x2fcb20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2fcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2fcb24:
    // 0x2fcb24: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2fcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_2fcb28:
    // 0x2fcb28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fcb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2fcb2c:
    // 0x2fcb2c: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x2fcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_2fcb30:
    // 0x2fcb30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2fcb34:
    // 0x2fcb34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fcb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcb38:
    // 0x2fcb38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fcb3c:
    // 0x2fcb3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcb40:
    // 0x2fcb40: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2fcb40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_2fcb44:
    // 0x2fcb44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fcb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2fcb48:
    // 0x2fcb48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2fcb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2fcb4c:
    // 0x2fcb4c: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x2fcb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2fcb50:
    // 0x2fcb50: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2fcb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2fcb54:
    // 0x2fcb54: 0x0  nop
    ctx->pc = 0x2fcb54u;
    // NOP
label_2fcb58:
    // 0x2fcb58: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2fcb5c:
    if (ctx->pc == 0x2FCB5Cu) {
        ctx->pc = 0x2FCB60u;
        goto label_2fcb60;
    }
    ctx->pc = 0x2FCB58u;
    {
        const bool branch_taken_0x2fcb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcb58) {
            ctx->pc = 0x2FCB44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fcb44;
        }
    }
    ctx->pc = 0x2FCB60u;
label_2fcb60:
    // 0x2fcb60: 0xc0be57c  jal         func_2F95F0
label_2fcb64:
    if (ctx->pc == 0x2FCB64u) {
        ctx->pc = 0x2FCB64u;
            // 0x2fcb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB68u;
        goto label_2fcb68;
    }
    ctx->pc = 0x2FCB60u;
    SET_GPR_U32(ctx, 31, 0x2FCB68u);
    ctx->pc = 0x2FCB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB60u;
            // 0x2fcb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F95F0u;
    if (runtime->hasFunction(0x2F95F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F95F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB68u; }
        if (ctx->pc != 0x2FCB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F95F0_0x2f95f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB68u; }
        if (ctx->pc != 0x2FCB68u) { return; }
    }
    ctx->pc = 0x2FCB68u;
label_2fcb68:
    // 0x2fcb68: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2fcb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2fcb6c:
    // 0x2fcb6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fcb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcb70:
    // 0x2fcb70: 0xc04a576  jal         func_1295D8
label_2fcb74:
    if (ctx->pc == 0x2FCB74u) {
        ctx->pc = 0x2FCB74u;
            // 0x2fcb74: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x2FCB78u;
        goto label_2fcb78;
    }
    ctx->pc = 0x2FCB70u;
    SET_GPR_U32(ctx, 31, 0x2FCB78u);
    ctx->pc = 0x2FCB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB70u;
            // 0x2fcb74: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB78u; }
        if (ctx->pc != 0x2FCB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB78u; }
        if (ctx->pc != 0x2FCB78u) { return; }
    }
    ctx->pc = 0x2FCB78u;
label_2fcb78:
    // 0x2fcb78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2fcb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2fcb7c:
    // 0x2fcb7c: 0x2624005c  addiu       $a0, $s1, 0x5C
    ctx->pc = 0x2fcb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_2fcb80:
    // 0x2fcb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fcb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcb84:
    // 0x2fcb84: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x2fcb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2fcb88:
    // 0x2fcb88: 0xc04a576  jal         func_1295D8
label_2fcb8c:
    if (ctx->pc == 0x2FCB8Cu) {
        ctx->pc = 0x2FCB8Cu;
            // 0x2fcb8c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCB90u;
        goto label_2fcb90;
    }
    ctx->pc = 0x2FCB88u;
    SET_GPR_U32(ctx, 31, 0x2FCB90u);
    ctx->pc = 0x2FCB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCB88u;
            // 0x2fcb8c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB90u; }
        if (ctx->pc != 0x2FCB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCB90u; }
        if (ctx->pc != 0x2FCB90u) { return; }
    }
    ctx->pc = 0x2FCB90u;
label_2fcb90:
    // 0x2fcb90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fcb94:
    // 0x2fcb94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2fcb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2fcb98:
    // 0x2fcb98: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x2fcb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_2fcb9c:
    // 0x2fcb9c: 0x262400de  addiu       $a0, $s1, 0xDE
    ctx->pc = 0x2fcb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 222));
label_2fcba0:
    // 0x2fcba0: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2fcba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_2fcba4:
    // 0x2fcba4: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x2fcba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_2fcba8:
    // 0x2fcba8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2fcba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2fcbac:
    // 0x2fcbac: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2fcbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2fcbb0:
    // 0x2fcbb0: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2fcbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_2fcbb4:
    // 0x2fcbb4: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x2fcbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_2fcbb8:
    // 0x2fcbb8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2fcbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2fcbbc:
    // 0x2fcbbc: 0x2446002c  addiu       $a2, $v0, 0x2C
    ctx->pc = 0x2fcbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_2fcbc0:
    // 0x2fcbc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2fcbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fcbc4:
    // 0x2fcbc4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2fcbc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2fcbc8:
    // 0x2fcbc8: 0x38420032  xori        $v0, $v0, 0x32
    ctx->pc = 0x2fcbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)50);
label_2fcbcc:
    // 0x2fcbcc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2fcbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2fcbd0:
    // 0x2fcbd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2fcbd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fcbd4:
    // 0x2fcbd4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2fcbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2fcbd8:
    // 0x2fcbd8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2fcbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2fcbdc:
    // 0x2fcbdc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2fcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fcbe0:
    // 0x2fcbe0: 0x401027  not         $v0, $v0
    ctx->pc = 0x2fcbe0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_2fcbe4:
    // 0x2fcbe4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fcbe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fcbe8:
    // 0x2fcbe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fcbec:
    if (ctx->pc == 0x2FCBECu) {
        ctx->pc = 0x2FCBF0u;
        goto label_2fcbf0;
    }
    ctx->pc = 0x2FCBE8u;
    {
        const bool branch_taken_0x2fcbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcbe8) {
            ctx->pc = 0x2FCBF8u;
            goto label_2fcbf8;
        }
    }
    ctx->pc = 0x2FCBF0u;
label_2fcbf0:
    // 0x2fcbf0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2fcbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2fcbf4:
    // 0x2fcbf4: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2fcbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2fcbf8:
    // 0x2fcbf8: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_2fcbfc:
    if (ctx->pc == 0x2FCBFCu) {
        ctx->pc = 0x2FCBFCu;
            // 0x2fcbfc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x2FCC00u;
        goto label_2fcc00;
    }
    ctx->pc = 0x2FCBF8u;
    {
        const bool branch_taken_0x2fcbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcbf8) {
            ctx->pc = 0x2FCBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCBF8u;
            // 0x2fcbfc: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fcbc4;
        }
    }
    ctx->pc = 0x2FCC00u;
label_2fcc00:
    // 0x2fcc00: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2fcc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2fcc04:
    // 0x2fcc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fcc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc08:
    // 0x2fcc08: 0xc04a576  jal         func_1295D8
label_2fcc0c:
    if (ctx->pc == 0x2FCC0Cu) {
        ctx->pc = 0x2FCC0Cu;
            // 0x2fcc0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FCC10u;
        goto label_2fcc10;
    }
    ctx->pc = 0x2FCC08u;
    SET_GPR_U32(ctx, 31, 0x2FCC10u);
    ctx->pc = 0x2FCC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC08u;
            // 0x2fcc0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC10u; }
        if (ctx->pc != 0x2FCC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC10u; }
        if (ctx->pc != 0x2FCC10u) { return; }
    }
    ctx->pc = 0x2FCC10u;
label_2fcc10:
    // 0x2fcc10: 0xc0be4c0  jal         func_2F9300
label_2fcc14:
    if (ctx->pc == 0x2FCC14u) {
        ctx->pc = 0x2FCC14u;
            // 0x2fcc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC18u;
        goto label_2fcc18;
    }
    ctx->pc = 0x2FCC10u;
    SET_GPR_U32(ctx, 31, 0x2FCC18u);
    ctx->pc = 0x2FCC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC10u;
            // 0x2fcc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9300u;
    if (runtime->hasFunction(0x2F9300u)) {
        auto targetFn = runtime->lookupFunction(0x2F9300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC18u; }
        if (ctx->pc != 0x2FCC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9300_0x2f9300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCC18u; }
        if (ctx->pc != 0x2FCC18u) { return; }
    }
    ctx->pc = 0x2FCC18u;
label_2fcc18:
    // 0x2fcc18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fcc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcc1c:
    // 0x2fcc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fcc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fcc20:
    // 0x2fcc20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fcc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fcc24:
    // 0x2fcc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fcc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcc28:
    // 0x2fcc28: 0x3e00008  jr          $ra
label_2fcc2c:
    if (ctx->pc == 0x2FCC2Cu) {
        ctx->pc = 0x2FCC2Cu;
            // 0x2fcc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FCC30u;
        goto label_2fcc30;
    }
    ctx->pc = 0x2FCC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC28u;
            // 0x2fcc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC30u;
label_2fcc30:
    // 0x2fcc30: 0x3e00008  jr          $ra
label_2fcc34:
    if (ctx->pc == 0x2FCC34u) {
        ctx->pc = 0x2FCC34u;
            // 0x2fcc34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FCC38u;
        goto label_2fcc38;
    }
    ctx->pc = 0x2FCC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC30u;
            // 0x2fcc34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC38u;
label_2fcc38:
    // 0x2fcc38: 0x0  nop
    ctx->pc = 0x2fcc38u;
    // NOP
label_2fcc3c:
    // 0x2fcc3c: 0x0  nop
    ctx->pc = 0x2fcc3cu;
    // NOP
label_2fcc40:
    // 0x2fcc40: 0x3e00008  jr          $ra
label_2fcc44:
    if (ctx->pc == 0x2FCC44u) {
        ctx->pc = 0x2FCC44u;
            // 0x2fcc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC48u;
        goto label_2fcc48;
    }
    ctx->pc = 0x2FCC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC40u;
            // 0x2fcc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC48u;
label_2fcc48:
    // 0x2fcc48: 0x0  nop
    ctx->pc = 0x2fcc48u;
    // NOP
label_2fcc4c:
    // 0x2fcc4c: 0x0  nop
    ctx->pc = 0x2fcc4cu;
    // NOP
label_2fcc50:
    // 0x2fcc50: 0x3e00008  jr          $ra
label_2fcc54:
    if (ctx->pc == 0x2FCC54u) {
        ctx->pc = 0x2FCC54u;
            // 0x2fcc54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC58u;
        goto label_2fcc58;
    }
    ctx->pc = 0x2FCC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC50u;
            // 0x2fcc54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC58u;
label_2fcc58:
    // 0x2fcc58: 0x0  nop
    ctx->pc = 0x2fcc58u;
    // NOP
label_2fcc5c:
    // 0x2fcc5c: 0x0  nop
    ctx->pc = 0x2fcc5cu;
    // NOP
label_2fcc60:
    // 0x2fcc60: 0x3e00008  jr          $ra
label_2fcc64:
    if (ctx->pc == 0x2FCC64u) {
        ctx->pc = 0x2FCC64u;
            // 0x2fcc64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC68u;
        goto label_2fcc68;
    }
    ctx->pc = 0x2FCC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC60u;
            // 0x2fcc64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC68u;
label_2fcc68:
    // 0x2fcc68: 0x0  nop
    ctx->pc = 0x2fcc68u;
    // NOP
label_2fcc6c:
    // 0x2fcc6c: 0x0  nop
    ctx->pc = 0x2fcc6cu;
    // NOP
label_2fcc70:
    // 0x2fcc70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2fcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fcc74:
    // 0x2fcc74: 0x906300de  lbu         $v1, 0xDE($v1)
    ctx->pc = 0x2fcc74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 222)));
label_2fcc78:
    // 0x2fcc78: 0x3e00008  jr          $ra
label_2fcc7c:
    if (ctx->pc == 0x2FCC7Cu) {
        ctx->pc = 0x2FCC7Cu;
            // 0x2fcc7c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2FCC80u;
        goto label_2fcc80;
    }
    ctx->pc = 0x2FCC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC78u;
            // 0x2fcc7c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC80u;
label_2fcc80:
    // 0x2fcc80: 0x3e00008  jr          $ra
label_2fcc84:
    if (ctx->pc == 0x2FCC84u) {
        ctx->pc = 0x2FCC84u;
            // 0x2fcc84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2FCC88u;
        goto label_2fcc88;
    }
    ctx->pc = 0x2FCC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC80u;
            // 0x2fcc84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC88u;
label_2fcc88:
    // 0x2fcc88: 0x0  nop
    ctx->pc = 0x2fcc88u;
    // NOP
label_2fcc8c:
    // 0x2fcc8c: 0x0  nop
    ctx->pc = 0x2fcc8cu;
    // NOP
label_2fcc90:
    // 0x2fcc90: 0x3e00008  jr          $ra
label_2fcc94:
    if (ctx->pc == 0x2FCC94u) {
        ctx->pc = 0x2FCC94u;
            // 0x2fcc94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FCC98u;
        goto label_2fcc98;
    }
    ctx->pc = 0x2FCC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCC90u;
            // 0x2fcc94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCC98u;
label_2fcc98:
    // 0x2fcc98: 0x0  nop
    ctx->pc = 0x2fcc98u;
    // NOP
label_2fcc9c:
    // 0x2fcc9c: 0x0  nop
    ctx->pc = 0x2fcc9cu;
    // NOP
label_2fcca0:
    // 0x2fcca0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fcca4:
    // 0x2fcca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fcca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fcca8:
    // 0x2fcca8: 0x3e00008  jr          $ra
label_2fccac:
    if (ctx->pc == 0x2FCCACu) {
        ctx->pc = 0x2FCCB0u;
        goto label_2fccb0;
    }
    ctx->pc = 0x2FCCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCCB0u;
label_2fccb0:
    // 0x2fccb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fccb4:
    // 0x2fccb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fccb8:
    // 0x2fccb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fccbc:
    // 0x2fccbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fccc0:
    // 0x2fccc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fccc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fccc4:
    // 0x2fccc4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fccc8:
    if (ctx->pc == 0x2FCCC8u) {
        ctx->pc = 0x2FCCC8u;
            // 0x2fccc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCCCu;
        goto label_2fcccc;
    }
    ctx->pc = 0x2FCCC4u;
    {
        const bool branch_taken_0x2fccc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCC4u;
            // 0x2fccc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccc4) {
            ctx->pc = 0x2FCD30u;
            goto label_2fcd30;
        }
    }
    ctx->pc = 0x2FCCCCu;
label_2fcccc:
    // 0x2fcccc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fccccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fccd0:
    // 0x2fccd0: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x2fccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
label_2fccd4:
    // 0x2fccd4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fccd8:
    if (ctx->pc == 0x2FCCD8u) {
        ctx->pc = 0x2FCCD8u;
            // 0x2fccd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCCDCu;
        goto label_2fccdc;
    }
    ctx->pc = 0x2FCCD4u;
    {
        const bool branch_taken_0x2fccd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCD4u;
            // 0x2fccd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccd4) {
            ctx->pc = 0x2FCD18u;
            goto label_2fcd18;
        }
    }
    ctx->pc = 0x2FCCDCu;
label_2fccdc:
    // 0x2fccdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fcce0:
    // 0x2fcce0: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x2fcce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
label_2fcce4:
    // 0x2fcce4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fcce8:
    if (ctx->pc == 0x2FCCE8u) {
        ctx->pc = 0x2FCCE8u;
            // 0x2fcce8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCCECu;
        goto label_2fccec;
    }
    ctx->pc = 0x2FCCE4u;
    {
        const bool branch_taken_0x2fcce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCE4u;
            // 0x2fcce8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcce4) {
            ctx->pc = 0x2FCD18u;
            goto label_2fcd18;
        }
    }
    ctx->pc = 0x2FCCECu;
label_2fccec:
    // 0x2fccec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fccecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fccf0:
    // 0x2fccf0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fccf4:
    // 0x2fccf4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fccf8:
    if (ctx->pc == 0x2FCCF8u) {
        ctx->pc = 0x2FCCF8u;
            // 0x2fccf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCCFCu;
        goto label_2fccfc;
    }
    ctx->pc = 0x2FCCF4u;
    {
        const bool branch_taken_0x2fccf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCF4u;
            // 0x2fccf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fccf4) {
            ctx->pc = 0x2FCD18u;
            goto label_2fcd18;
        }
    }
    ctx->pc = 0x2FCCFCu;
label_2fccfc:
    // 0x2fccfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fcd00:
    // 0x2fcd00: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fcd04:
    // 0x2fcd04: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fcd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fcd08:
    // 0x2fcd08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fcd0c:
    if (ctx->pc == 0x2FCD0Cu) {
        ctx->pc = 0x2FCD0Cu;
            // 0x2fcd0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FCD10u;
        goto label_2fcd10;
    }
    ctx->pc = 0x2FCD08u;
    {
        const bool branch_taken_0x2fcd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD08u;
            // 0x2fcd0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcd08) {
            ctx->pc = 0x2FCD18u;
            goto label_2fcd18;
        }
    }
    ctx->pc = 0x2FCD10u;
label_2fcd10:
    // 0x2fcd10: 0xc07507c  jal         func_1D41F0
label_2fcd14:
    if (ctx->pc == 0x2FCD14u) {
        ctx->pc = 0x2FCD14u;
            // 0x2fcd14: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FCD18u;
        goto label_2fcd18;
    }
    ctx->pc = 0x2FCD10u;
    SET_GPR_U32(ctx, 31, 0x2FCD18u);
    ctx->pc = 0x2FCD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD10u;
            // 0x2fcd14: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD18u; }
        if (ctx->pc != 0x2FCD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD18u; }
        if (ctx->pc != 0x2FCD18u) { return; }
    }
    ctx->pc = 0x2FCD18u;
label_2fcd18:
    // 0x2fcd18: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fcd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fcd1c:
    // 0x2fcd1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fcd1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fcd20:
    // 0x2fcd20: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fcd24:
    if (ctx->pc == 0x2FCD24u) {
        ctx->pc = 0x2FCD24u;
            // 0x2fcd24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD28u;
        goto label_2fcd28;
    }
    ctx->pc = 0x2FCD20u;
    {
        const bool branch_taken_0x2fcd20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fcd20) {
            ctx->pc = 0x2FCD24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD20u;
            // 0x2fcd24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCD34u;
            goto label_2fcd34;
        }
    }
    ctx->pc = 0x2FCD28u;
label_2fcd28:
    // 0x2fcd28: 0xc0400a8  jal         func_1002A0
label_2fcd2c:
    if (ctx->pc == 0x2FCD2Cu) {
        ctx->pc = 0x2FCD2Cu;
            // 0x2fcd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD30u;
        goto label_2fcd30;
    }
    ctx->pc = 0x2FCD28u;
    SET_GPR_U32(ctx, 31, 0x2FCD30u);
    ctx->pc = 0x2FCD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD28u;
            // 0x2fcd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD30u; }
        if (ctx->pc != 0x2FCD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD30u; }
        if (ctx->pc != 0x2FCD30u) { return; }
    }
    ctx->pc = 0x2FCD30u;
label_2fcd30:
    // 0x2fcd30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fcd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcd34:
    // 0x2fcd34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fcd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fcd38:
    // 0x2fcd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fcd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fcd3c:
    // 0x2fcd3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fcd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcd40:
    // 0x2fcd40: 0x3e00008  jr          $ra
label_2fcd44:
    if (ctx->pc == 0x2FCD44u) {
        ctx->pc = 0x2FCD44u;
            // 0x2fcd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FCD48u;
        goto label_2fcd48;
    }
    ctx->pc = 0x2FCD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD40u;
            // 0x2fcd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD48u;
label_2fcd48:
    // 0x2fcd48: 0x0  nop
    ctx->pc = 0x2fcd48u;
    // NOP
label_2fcd4c:
    // 0x2fcd4c: 0x0  nop
    ctx->pc = 0x2fcd4cu;
    // NOP
label_2fcd50:
    // 0x2fcd50: 0x3e00008  jr          $ra
label_2fcd54:
    if (ctx->pc == 0x2FCD54u) {
        ctx->pc = 0x2FCD54u;
            // 0x2fcd54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FCD58u;
        goto label_2fcd58;
    }
    ctx->pc = 0x2FCD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD50u;
            // 0x2fcd54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD58u;
label_2fcd58:
    // 0x2fcd58: 0x0  nop
    ctx->pc = 0x2fcd58u;
    // NOP
label_2fcd5c:
    // 0x2fcd5c: 0x0  nop
    ctx->pc = 0x2fcd5cu;
    // NOP
label_2fcd60:
    // 0x2fcd60: 0x3e00008  jr          $ra
label_2fcd64:
    if (ctx->pc == 0x2FCD64u) {
        ctx->pc = 0x2FCD64u;
            // 0x2fcd64: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2FCD68u;
        goto label_2fcd68;
    }
    ctx->pc = 0x2FCD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD60u;
            // 0x2fcd64: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD68u;
label_2fcd68:
    // 0x2fcd68: 0x0  nop
    ctx->pc = 0x2fcd68u;
    // NOP
label_2fcd6c:
    // 0x2fcd6c: 0x0  nop
    ctx->pc = 0x2fcd6cu;
    // NOP
label_2fcd70:
    // 0x2fcd70: 0x3e00008  jr          $ra
label_2fcd74:
    if (ctx->pc == 0x2FCD74u) {
        ctx->pc = 0x2FCD74u;
            // 0x2fcd74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD78u;
        goto label_2fcd78;
    }
    ctx->pc = 0x2FCD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD70u;
            // 0x2fcd74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD78u;
label_2fcd78:
    // 0x2fcd78: 0x0  nop
    ctx->pc = 0x2fcd78u;
    // NOP
label_2fcd7c:
    // 0x2fcd7c: 0x0  nop
    ctx->pc = 0x2fcd7cu;
    // NOP
label_2fcd80:
    // 0x2fcd80: 0x3e00008  jr          $ra
label_2fcd84:
    if (ctx->pc == 0x2FCD84u) {
        ctx->pc = 0x2FCD84u;
            // 0x2fcd84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2FCD88u;
        goto label_2fcd88;
    }
    ctx->pc = 0x2FCD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD80u;
            // 0x2fcd84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD88u;
label_2fcd88:
    // 0x2fcd88: 0x0  nop
    ctx->pc = 0x2fcd88u;
    // NOP
label_2fcd8c:
    // 0x2fcd8c: 0x0  nop
    ctx->pc = 0x2fcd8cu;
    // NOP
label_2fcd90:
    // 0x2fcd90: 0x3e00008  jr          $ra
label_2fcd94:
    if (ctx->pc == 0x2FCD94u) {
        ctx->pc = 0x2FCD94u;
            // 0x2fcd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCD98u;
        goto label_2fcd98;
    }
    ctx->pc = 0x2FCD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD90u;
            // 0x2fcd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD98u;
label_2fcd98:
    // 0x2fcd98: 0x0  nop
    ctx->pc = 0x2fcd98u;
    // NOP
label_2fcd9c:
    // 0x2fcd9c: 0x0  nop
    ctx->pc = 0x2fcd9cu;
    // NOP
label_2fcda0:
    // 0x2fcda0: 0x3e00008  jr          $ra
label_2fcda4:
    if (ctx->pc == 0x2FCDA4u) {
        ctx->pc = 0x2FCDA8u;
        goto label_2fcda8;
    }
    ctx->pc = 0x2FCDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCDA8u;
label_2fcda8:
    // 0x2fcda8: 0x0  nop
    ctx->pc = 0x2fcda8u;
    // NOP
label_2fcdac:
    // 0x2fcdac: 0x0  nop
    ctx->pc = 0x2fcdacu;
    // NOP
label_2fcdb0:
    // 0x2fcdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fcdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fcdb4:
    // 0x2fcdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fcdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fcdb8:
    // 0x2fcdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fcdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fcdbc:
    // 0x2fcdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fcdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fcdc0:
    // 0x2fcdc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fcdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fcdc4:
    // 0x2fcdc4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_2fcdc8:
    if (ctx->pc == 0x2FCDC8u) {
        ctx->pc = 0x2FCDC8u;
            // 0x2fcdc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDCCu;
        goto label_2fcdcc;
    }
    ctx->pc = 0x2FCDC4u;
    {
        const bool branch_taken_0x2fcdc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDC4u;
            // 0x2fcdc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdc4) {
            ctx->pc = 0x2FCE40u;
            goto label_2fce40;
        }
    }
    ctx->pc = 0x2FCDCCu;
label_2fcdcc:
    // 0x2fcdcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fcdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fcdd0:
    // 0x2fcdd0: 0x244233f0  addiu       $v0, $v0, 0x33F0
    ctx->pc = 0x2fcdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13296));
label_2fcdd4:
    // 0x2fcdd4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2fcdd8:
    if (ctx->pc == 0x2FCDD8u) {
        ctx->pc = 0x2FCDD8u;
            // 0x2fcdd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCDDCu;
        goto label_2fcddc;
    }
    ctx->pc = 0x2FCDD4u;
    {
        const bool branch_taken_0x2fcdd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDD4u;
            // 0x2fcdd8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdd4) {
            ctx->pc = 0x2FCE28u;
            goto label_2fce28;
        }
    }
    ctx->pc = 0x2FCDDCu;
label_2fcddc:
    // 0x2fcddc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fcddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fcde0:
    // 0x2fcde0: 0x2442b2d0  addiu       $v0, $v0, -0x4D30
    ctx->pc = 0x2fcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947536));
label_2fcde4:
    // 0x2fcde4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fcde8:
    if (ctx->pc == 0x2FCDE8u) {
        ctx->pc = 0x2FCDE8u;
            // 0x2fcde8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCDECu;
        goto label_2fcdec;
    }
    ctx->pc = 0x2FCDE4u;
    {
        const bool branch_taken_0x2fcde4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDE4u;
            // 0x2fcde8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcde4) {
            ctx->pc = 0x2FCE28u;
            goto label_2fce28;
        }
    }
    ctx->pc = 0x2FCDECu;
label_2fcdec:
    // 0x2fcdec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fcdf0:
    // 0x2fcdf0: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x2fcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_2fcdf4:
    // 0x2fcdf4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fcdf8:
    if (ctx->pc == 0x2FCDF8u) {
        ctx->pc = 0x2FCDF8u;
            // 0x2fcdf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCDFCu;
        goto label_2fcdfc;
    }
    ctx->pc = 0x2FCDF4u;
    {
        const bool branch_taken_0x2fcdf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDF4u;
            // 0x2fcdf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdf4) {
            ctx->pc = 0x2FCE28u;
            goto label_2fce28;
        }
    }
    ctx->pc = 0x2FCDFCu;
label_2fcdfc:
    // 0x2fcdfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fce00:
    // 0x2fce00: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fce04:
    // 0x2fce04: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fce08:
    if (ctx->pc == 0x2FCE08u) {
        ctx->pc = 0x2FCE08u;
            // 0x2fce08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCE0Cu;
        goto label_2fce0c;
    }
    ctx->pc = 0x2FCE04u;
    {
        const bool branch_taken_0x2fce04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE04u;
            // 0x2fce08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce04) {
            ctx->pc = 0x2FCE28u;
            goto label_2fce28;
        }
    }
    ctx->pc = 0x2FCE0Cu;
label_2fce0c:
    // 0x2fce0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fce10:
    // 0x2fce10: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fce14:
    // 0x2fce14: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fce18:
    // 0x2fce18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fce1c:
    if (ctx->pc == 0x2FCE1Cu) {
        ctx->pc = 0x2FCE1Cu;
            // 0x2fce1c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FCE20u;
        goto label_2fce20;
    }
    ctx->pc = 0x2FCE18u;
    {
        const bool branch_taken_0x2fce18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE18u;
            // 0x2fce1c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce18) {
            ctx->pc = 0x2FCE28u;
            goto label_2fce28;
        }
    }
    ctx->pc = 0x2FCE20u;
label_2fce20:
    // 0x2fce20: 0xc07507c  jal         func_1D41F0
label_2fce24:
    if (ctx->pc == 0x2FCE24u) {
        ctx->pc = 0x2FCE24u;
            // 0x2fce24: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FCE28u;
        goto label_2fce28;
    }
    ctx->pc = 0x2FCE20u;
    SET_GPR_U32(ctx, 31, 0x2FCE28u);
    ctx->pc = 0x2FCE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE20u;
            // 0x2fce24: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE28u; }
        if (ctx->pc != 0x2FCE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE28u; }
        if (ctx->pc != 0x2FCE28u) { return; }
    }
    ctx->pc = 0x2FCE28u;
label_2fce28:
    // 0x2fce28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fce2c:
    // 0x2fce2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fce2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fce30:
    // 0x2fce30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fce34:
    if (ctx->pc == 0x2FCE34u) {
        ctx->pc = 0x2FCE34u;
            // 0x2fce34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE38u;
        goto label_2fce38;
    }
    ctx->pc = 0x2FCE30u;
    {
        const bool branch_taken_0x2fce30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fce30) {
            ctx->pc = 0x2FCE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE30u;
            // 0x2fce34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCE44u;
            goto label_2fce44;
        }
    }
    ctx->pc = 0x2FCE38u;
label_2fce38:
    // 0x2fce38: 0xc0400a8  jal         func_1002A0
label_2fce3c:
    if (ctx->pc == 0x2FCE3Cu) {
        ctx->pc = 0x2FCE3Cu;
            // 0x2fce3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE40u;
        goto label_2fce40;
    }
    ctx->pc = 0x2FCE38u;
    SET_GPR_U32(ctx, 31, 0x2FCE40u);
    ctx->pc = 0x2FCE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE38u;
            // 0x2fce3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE40u; }
        if (ctx->pc != 0x2FCE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCE40u; }
        if (ctx->pc != 0x2FCE40u) { return; }
    }
    ctx->pc = 0x2FCE40u;
label_2fce40:
    // 0x2fce40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fce40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fce44:
    // 0x2fce44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fce48:
    // 0x2fce48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fce48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fce4c:
    // 0x2fce4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fce4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fce50:
    // 0x2fce50: 0x3e00008  jr          $ra
label_2fce54:
    if (ctx->pc == 0x2FCE54u) {
        ctx->pc = 0x2FCE54u;
            // 0x2fce54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FCE58u;
        goto label_2fce58;
    }
    ctx->pc = 0x2FCE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE50u;
            // 0x2fce54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCE58u;
label_2fce58:
    // 0x2fce58: 0x0  nop
    ctx->pc = 0x2fce58u;
    // NOP
label_2fce5c:
    // 0x2fce5c: 0x0  nop
    ctx->pc = 0x2fce5cu;
    // NOP
label_2fce60:
    // 0x2fce60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fce64:
    // 0x2fce64: 0x3e00008  jr          $ra
label_2fce68:
    if (ctx->pc == 0x2FCE68u) {
        ctx->pc = 0x2FCE68u;
            // 0x2fce68: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2FCE6Cu;
        goto label_2fce6c;
    }
    ctx->pc = 0x2FCE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE64u;
            // 0x2fce68: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCE6Cu;
label_2fce6c:
    // 0x2fce6c: 0x0  nop
    ctx->pc = 0x2fce6cu;
    // NOP
label_2fce70:
    // 0x2fce70: 0x3e00008  jr          $ra
label_2fce74:
    if (ctx->pc == 0x2FCE74u) {
        ctx->pc = 0x2FCE74u;
            // 0x2fce74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE78u;
        goto label_2fce78;
    }
    ctx->pc = 0x2FCE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE70u;
            // 0x2fce74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCE78u;
label_2fce78:
    // 0x2fce78: 0x0  nop
    ctx->pc = 0x2fce78u;
    // NOP
label_2fce7c:
    // 0x2fce7c: 0x0  nop
    ctx->pc = 0x2fce7cu;
    // NOP
label_2fce80:
    // 0x2fce80: 0x3e00008  jr          $ra
label_2fce84:
    if (ctx->pc == 0x2FCE84u) {
        ctx->pc = 0x2FCE84u;
            // 0x2fce84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2FCE88u;
        goto label_2fce88;
    }
    ctx->pc = 0x2FCE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE80u;
            // 0x2fce84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCE88u;
label_2fce88:
    // 0x2fce88: 0x0  nop
    ctx->pc = 0x2fce88u;
    // NOP
label_2fce8c:
    // 0x2fce8c: 0x0  nop
    ctx->pc = 0x2fce8cu;
    // NOP
label_2fce90:
    // 0x2fce90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fce94:
    // 0x2fce94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fce98:
    // 0x2fce98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fce9c:
    // 0x2fce9c: 0x8c900080  lw          $s0, 0x80($a0)
    ctx->pc = 0x2fce9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2fcea0:
    // 0x2fcea0: 0xc04cce8  jal         func_1333A0
label_2fcea4:
    if (ctx->pc == 0x2FCEA4u) {
        ctx->pc = 0x2FCEA4u;
            // 0x2fcea4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x2FCEA8u;
        goto label_2fcea8;
    }
    ctx->pc = 0x2FCEA0u;
    SET_GPR_U32(ctx, 31, 0x2FCEA8u);
    ctx->pc = 0x2FCEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEA0u;
            // 0x2fcea4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEA8u; }
        if (ctx->pc != 0x2FCEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCEA8u; }
        if (ctx->pc != 0x2FCEA8u) { return; }
    }
    ctx->pc = 0x2FCEA8u;
label_2fcea8:
    // 0x2fcea8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2fcea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2fceac:
    // 0x2fceac: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2fceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2fceb0:
    // 0x2fceb0: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x2fceb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_2fceb4:
    // 0x2fceb4: 0xa60300a8  sh          $v1, 0xA8($s0)
    ctx->pc = 0x2fceb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 3));
label_2fceb8:
    // 0x2fceb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fcebc:
    // 0x2fcebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fcebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcec0:
    // 0x2fcec0: 0x3e00008  jr          $ra
label_2fcec4:
    if (ctx->pc == 0x2FCEC4u) {
        ctx->pc = 0x2FCEC4u;
            // 0x2fcec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FCEC8u;
        goto label_2fcec8;
    }
    ctx->pc = 0x2FCEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEC0u;
            // 0x2fcec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCEC8u;
label_2fcec8:
    // 0x2fcec8: 0x0  nop
    ctx->pc = 0x2fcec8u;
    // NOP
label_2fcecc:
    // 0x2fcecc: 0x0  nop
    ctx->pc = 0x2fceccu;
    // NOP
label_2fced0:
    // 0x2fced0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fced4:
    // 0x2fced4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fced8:
    // 0x2fced8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fced8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fcedc:
    // 0x2fcedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fcedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fcee0:
    // 0x2fcee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fcee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fcee4:
    // 0x2fcee4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fcee8:
    if (ctx->pc == 0x2FCEE8u) {
        ctx->pc = 0x2FCEE8u;
            // 0x2fcee8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEECu;
        goto label_2fceec;
    }
    ctx->pc = 0x2FCEE4u;
    {
        const bool branch_taken_0x2fcee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEE4u;
            // 0x2fcee8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcee4) {
            ctx->pc = 0x2FCF50u;
            goto label_2fcf50;
        }
    }
    ctx->pc = 0x2FCEECu;
label_2fceec:
    // 0x2fceec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fcef0:
    // 0x2fcef0: 0x24423470  addiu       $v0, $v0, 0x3470
    ctx->pc = 0x2fcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13424));
label_2fcef4:
    // 0x2fcef4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fcef8:
    if (ctx->pc == 0x2FCEF8u) {
        ctx->pc = 0x2FCEF8u;
            // 0x2fcef8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCEFCu;
        goto label_2fcefc;
    }
    ctx->pc = 0x2FCEF4u;
    {
        const bool branch_taken_0x2fcef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEF4u;
            // 0x2fcef8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcef4) {
            ctx->pc = 0x2FCF38u;
            goto label_2fcf38;
        }
    }
    ctx->pc = 0x2FCEFCu;
label_2fcefc:
    // 0x2fcefc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fcf00:
    // 0x2fcf00: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x2fcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
label_2fcf04:
    // 0x2fcf04: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fcf08:
    if (ctx->pc == 0x2FCF08u) {
        ctx->pc = 0x2FCF08u;
            // 0x2fcf08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCF0Cu;
        goto label_2fcf0c;
    }
    ctx->pc = 0x2FCF04u;
    {
        const bool branch_taken_0x2fcf04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF04u;
            // 0x2fcf08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf04) {
            ctx->pc = 0x2FCF38u;
            goto label_2fcf38;
        }
    }
    ctx->pc = 0x2FCF0Cu;
label_2fcf0c:
    // 0x2fcf0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fcf10:
    // 0x2fcf10: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fcf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fcf14:
    // 0x2fcf14: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fcf18:
    if (ctx->pc == 0x2FCF18u) {
        ctx->pc = 0x2FCF18u;
            // 0x2fcf18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCF1Cu;
        goto label_2fcf1c;
    }
    ctx->pc = 0x2FCF14u;
    {
        const bool branch_taken_0x2fcf14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF14u;
            // 0x2fcf18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf14) {
            ctx->pc = 0x2FCF38u;
            goto label_2fcf38;
        }
    }
    ctx->pc = 0x2FCF1Cu;
label_2fcf1c:
    // 0x2fcf1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fcf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fcf20:
    // 0x2fcf20: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fcf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fcf24:
    // 0x2fcf24: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fcf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fcf28:
    // 0x2fcf28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fcf2c:
    if (ctx->pc == 0x2FCF2Cu) {
        ctx->pc = 0x2FCF2Cu;
            // 0x2fcf2c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FCF30u;
        goto label_2fcf30;
    }
    ctx->pc = 0x2FCF28u;
    {
        const bool branch_taken_0x2fcf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF28u;
            // 0x2fcf2c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf28) {
            ctx->pc = 0x2FCF38u;
            goto label_2fcf38;
        }
    }
    ctx->pc = 0x2FCF30u;
label_2fcf30:
    // 0x2fcf30: 0xc07507c  jal         func_1D41F0
label_2fcf34:
    if (ctx->pc == 0x2FCF34u) {
        ctx->pc = 0x2FCF34u;
            // 0x2fcf34: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FCF38u;
        goto label_2fcf38;
    }
    ctx->pc = 0x2FCF30u;
    SET_GPR_U32(ctx, 31, 0x2FCF38u);
    ctx->pc = 0x2FCF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF30u;
            // 0x2fcf34: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF38u; }
        if (ctx->pc != 0x2FCF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF38u; }
        if (ctx->pc != 0x2FCF38u) { return; }
    }
    ctx->pc = 0x2FCF38u;
label_2fcf38:
    // 0x2fcf38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fcf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fcf3c:
    // 0x2fcf3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fcf3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fcf40:
    // 0x2fcf40: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fcf44:
    if (ctx->pc == 0x2FCF44u) {
        ctx->pc = 0x2FCF44u;
            // 0x2fcf44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF48u;
        goto label_2fcf48;
    }
    ctx->pc = 0x2FCF40u;
    {
        const bool branch_taken_0x2fcf40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fcf40) {
            ctx->pc = 0x2FCF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF40u;
            // 0x2fcf44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCF54u;
            goto label_2fcf54;
        }
    }
    ctx->pc = 0x2FCF48u;
label_2fcf48:
    // 0x2fcf48: 0xc0400a8  jal         func_1002A0
label_2fcf4c:
    if (ctx->pc == 0x2FCF4Cu) {
        ctx->pc = 0x2FCF4Cu;
            // 0x2fcf4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF50u;
        goto label_2fcf50;
    }
    ctx->pc = 0x2FCF48u;
    SET_GPR_U32(ctx, 31, 0x2FCF50u);
    ctx->pc = 0x2FCF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF48u;
            // 0x2fcf4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF50u; }
        if (ctx->pc != 0x2FCF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF50u; }
        if (ctx->pc != 0x2FCF50u) { return; }
    }
    ctx->pc = 0x2FCF50u;
label_2fcf50:
    // 0x2fcf50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fcf50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcf54:
    // 0x2fcf54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fcf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fcf58:
    // 0x2fcf58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fcf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fcf5c:
    // 0x2fcf5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fcf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcf60:
    // 0x2fcf60: 0x3e00008  jr          $ra
label_2fcf64:
    if (ctx->pc == 0x2FCF64u) {
        ctx->pc = 0x2FCF64u;
            // 0x2fcf64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FCF68u;
        goto label_2fcf68;
    }
    ctx->pc = 0x2FCF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF60u;
            // 0x2fcf64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCF68u;
label_2fcf68:
    // 0x2fcf68: 0x0  nop
    ctx->pc = 0x2fcf68u;
    // NOP
label_2fcf6c:
    // 0x2fcf6c: 0x0  nop
    ctx->pc = 0x2fcf6cu;
    // NOP
label_2fcf70:
    // 0x2fcf70: 0x3e00008  jr          $ra
label_2fcf74:
    if (ctx->pc == 0x2FCF74u) {
        ctx->pc = 0x2FCF74u;
            // 0x2fcf74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FCF78u;
        goto label_2fcf78;
    }
    ctx->pc = 0x2FCF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF70u;
            // 0x2fcf74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCF78u;
label_2fcf78:
    // 0x2fcf78: 0x0  nop
    ctx->pc = 0x2fcf78u;
    // NOP
label_2fcf7c:
    // 0x2fcf7c: 0x0  nop
    ctx->pc = 0x2fcf7cu;
    // NOP
label_2fcf80:
    // 0x2fcf80: 0x3e00008  jr          $ra
label_2fcf84:
    if (ctx->pc == 0x2FCF84u) {
        ctx->pc = 0x2FCF84u;
            // 0x2fcf84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FCF88u;
        goto label_2fcf88;
    }
    ctx->pc = 0x2FCF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF80u;
            // 0x2fcf84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCF88u;
label_2fcf88:
    // 0x2fcf88: 0x0  nop
    ctx->pc = 0x2fcf88u;
    // NOP
label_2fcf8c:
    // 0x2fcf8c: 0x0  nop
    ctx->pc = 0x2fcf8cu;
    // NOP
label_2fcf90:
    // 0x2fcf90: 0x3e00008  jr          $ra
label_2fcf94:
    if (ctx->pc == 0x2FCF94u) {
        ctx->pc = 0x2FCF94u;
            // 0x2fcf94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF98u;
        goto label_2fcf98;
    }
    ctx->pc = 0x2FCF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF90u;
            // 0x2fcf94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCF98u;
label_2fcf98:
    // 0x2fcf98: 0x0  nop
    ctx->pc = 0x2fcf98u;
    // NOP
label_2fcf9c:
    // 0x2fcf9c: 0x0  nop
    ctx->pc = 0x2fcf9cu;
    // NOP
label_2fcfa0:
    // 0x2fcfa0: 0x3e00008  jr          $ra
label_2fcfa4:
    if (ctx->pc == 0x2FCFA4u) {
        ctx->pc = 0x2FCFA4u;
            // 0x2fcfa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FCFA8u;
        goto label_2fcfa8;
    }
    ctx->pc = 0x2FCFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFA0u;
            // 0x2fcfa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCFA8u;
label_2fcfa8:
    // 0x2fcfa8: 0x0  nop
    ctx->pc = 0x2fcfa8u;
    // NOP
label_2fcfac:
    // 0x2fcfac: 0x0  nop
    ctx->pc = 0x2fcfacu;
    // NOP
label_2fcfb0:
    // 0x2fcfb0: 0x3e00008  jr          $ra
label_2fcfb4:
    if (ctx->pc == 0x2FCFB4u) {
        ctx->pc = 0x2FCFB4u;
            // 0x2fcfb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFB8u;
        goto label_2fcfb8;
    }
    ctx->pc = 0x2FCFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFB0u;
            // 0x2fcfb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCFB8u;
label_2fcfb8:
    // 0x2fcfb8: 0x0  nop
    ctx->pc = 0x2fcfb8u;
    // NOP
label_2fcfbc:
    // 0x2fcfbc: 0x0  nop
    ctx->pc = 0x2fcfbcu;
    // NOP
label_2fcfc0:
    // 0x2fcfc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fcfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fcfc4:
    // 0x2fcfc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fcfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fcfc8:
    // 0x2fcfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fcfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fcfcc:
    // 0x2fcfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fcfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fcfd0:
    // 0x2fcfd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fcfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fcfd4:
    // 0x2fcfd4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fcfd8:
    if (ctx->pc == 0x2FCFD8u) {
        ctx->pc = 0x2FCFD8u;
            // 0x2fcfd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFDCu;
        goto label_2fcfdc;
    }
    ctx->pc = 0x2FCFD4u;
    {
        const bool branch_taken_0x2fcfd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFD4u;
            // 0x2fcfd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfd4) {
            ctx->pc = 0x2FD040u;
            goto label_2fd040;
        }
    }
    ctx->pc = 0x2FCFDCu;
label_2fcfdc:
    // 0x2fcfdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fcfe0:
    // 0x2fcfe0: 0x244234f0  addiu       $v0, $v0, 0x34F0
    ctx->pc = 0x2fcfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
label_2fcfe4:
    // 0x2fcfe4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fcfe8:
    if (ctx->pc == 0x2FCFE8u) {
        ctx->pc = 0x2FCFE8u;
            // 0x2fcfe8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCFECu;
        goto label_2fcfec;
    }
    ctx->pc = 0x2FCFE4u;
    {
        const bool branch_taken_0x2fcfe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFE4u;
            // 0x2fcfe8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfe4) {
            ctx->pc = 0x2FD028u;
            goto label_2fd028;
        }
    }
    ctx->pc = 0x2FCFECu;
label_2fcfec:
    // 0x2fcfec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fcff0:
    // 0x2fcff0: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fcff4:
    // 0x2fcff4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fcff8:
    if (ctx->pc == 0x2FCFF8u) {
        ctx->pc = 0x2FCFF8u;
            // 0x2fcff8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FCFFCu;
        goto label_2fcffc;
    }
    ctx->pc = 0x2FCFF4u;
    {
        const bool branch_taken_0x2fcff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFF4u;
            // 0x2fcff8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcff4) {
            ctx->pc = 0x2FD028u;
            goto label_2fd028;
        }
    }
    ctx->pc = 0x2FCFFCu;
label_2fcffc:
    // 0x2fcffc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd000:
    // 0x2fd000: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd004:
    // 0x2fd004: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd008:
    if (ctx->pc == 0x2FD008u) {
        ctx->pc = 0x2FD008u;
            // 0x2fd008: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD00Cu;
        goto label_2fd00c;
    }
    ctx->pc = 0x2FD004u;
    {
        const bool branch_taken_0x2fd004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD004u;
            // 0x2fd008: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd004) {
            ctx->pc = 0x2FD028u;
            goto label_2fd028;
        }
    }
    ctx->pc = 0x2FD00Cu;
label_2fd00c:
    // 0x2fd00c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd010:
    // 0x2fd010: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd014:
    // 0x2fd014: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd018:
    // 0x2fd018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd01c:
    if (ctx->pc == 0x2FD01Cu) {
        ctx->pc = 0x2FD01Cu;
            // 0x2fd01c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD020u;
        goto label_2fd020;
    }
    ctx->pc = 0x2FD018u;
    {
        const bool branch_taken_0x2fd018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD018u;
            // 0x2fd01c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd018) {
            ctx->pc = 0x2FD028u;
            goto label_2fd028;
        }
    }
    ctx->pc = 0x2FD020u;
label_2fd020:
    // 0x2fd020: 0xc07507c  jal         func_1D41F0
label_2fd024:
    if (ctx->pc == 0x2FD024u) {
        ctx->pc = 0x2FD024u;
            // 0x2fd024: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD028u;
        goto label_2fd028;
    }
    ctx->pc = 0x2FD020u;
    SET_GPR_U32(ctx, 31, 0x2FD028u);
    ctx->pc = 0x2FD024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD020u;
            // 0x2fd024: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD028u; }
        if (ctx->pc != 0x2FD028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD028u; }
        if (ctx->pc != 0x2FD028u) { return; }
    }
    ctx->pc = 0x2FD028u;
label_2fd028:
    // 0x2fd028: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd02c:
    // 0x2fd02c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd02cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd030:
    // 0x2fd030: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd034:
    if (ctx->pc == 0x2FD034u) {
        ctx->pc = 0x2FD034u;
            // 0x2fd034: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD038u;
        goto label_2fd038;
    }
    ctx->pc = 0x2FD030u;
    {
        const bool branch_taken_0x2fd030 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd030) {
            ctx->pc = 0x2FD034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD030u;
            // 0x2fd034: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD044u;
            goto label_2fd044;
        }
    }
    ctx->pc = 0x2FD038u;
label_2fd038:
    // 0x2fd038: 0xc0400a8  jal         func_1002A0
label_2fd03c:
    if (ctx->pc == 0x2FD03Cu) {
        ctx->pc = 0x2FD03Cu;
            // 0x2fd03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD040u;
        goto label_2fd040;
    }
    ctx->pc = 0x2FD038u;
    SET_GPR_U32(ctx, 31, 0x2FD040u);
    ctx->pc = 0x2FD03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD038u;
            // 0x2fd03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD040u; }
        if (ctx->pc != 0x2FD040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD040u; }
        if (ctx->pc != 0x2FD040u) { return; }
    }
    ctx->pc = 0x2FD040u;
label_2fd040:
    // 0x2fd040: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd044:
    // 0x2fd044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd048:
    // 0x2fd048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd04c:
    // 0x2fd04c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd04cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd050:
    // 0x2fd050: 0x3e00008  jr          $ra
label_2fd054:
    if (ctx->pc == 0x2FD054u) {
        ctx->pc = 0x2FD054u;
            // 0x2fd054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD058u;
        goto label_2fd058;
    }
    ctx->pc = 0x2FD050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD050u;
            // 0x2fd054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD058u;
label_2fd058:
    // 0x2fd058: 0x0  nop
    ctx->pc = 0x2fd058u;
    // NOP
label_2fd05c:
    // 0x2fd05c: 0x0  nop
    ctx->pc = 0x2fd05cu;
    // NOP
label_2fd060:
    // 0x2fd060: 0x3e00008  jr          $ra
label_2fd064:
    if (ctx->pc == 0x2FD064u) {
        ctx->pc = 0x2FD068u;
        goto label_2fd068;
    }
    ctx->pc = 0x2FD060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD068u;
label_2fd068:
    // 0x2fd068: 0x0  nop
    ctx->pc = 0x2fd068u;
    // NOP
label_2fd06c:
    // 0x2fd06c: 0x0  nop
    ctx->pc = 0x2fd06cu;
    // NOP
label_2fd070:
    // 0x2fd070: 0x3e00008  jr          $ra
label_2fd074:
    if (ctx->pc == 0x2FD074u) {
        ctx->pc = 0x2FD074u;
            // 0x2fd074: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x2FD078u;
        goto label_2fd078;
    }
    ctx->pc = 0x2FD070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD070u;
            // 0x2fd074: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD078u;
label_2fd078:
    // 0x2fd078: 0x0  nop
    ctx->pc = 0x2fd078u;
    // NOP
label_2fd07c:
    // 0x2fd07c: 0x0  nop
    ctx->pc = 0x2fd07cu;
    // NOP
label_2fd080:
    // 0x2fd080: 0x3e00008  jr          $ra
label_2fd084:
    if (ctx->pc == 0x2FD084u) {
        ctx->pc = 0x2FD084u;
            // 0x2fd084: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2FD088u;
        goto label_2fd088;
    }
    ctx->pc = 0x2FD080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD080u;
            // 0x2fd084: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD088u;
label_2fd088:
    // 0x2fd088: 0x0  nop
    ctx->pc = 0x2fd088u;
    // NOP
label_2fd08c:
    // 0x2fd08c: 0x0  nop
    ctx->pc = 0x2fd08cu;
    // NOP
label_2fd090:
    // 0x2fd090: 0x3e00008  jr          $ra
label_2fd094:
    if (ctx->pc == 0x2FD094u) {
        ctx->pc = 0x2FD094u;
            // 0x2fd094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD098u;
        goto label_2fd098;
    }
    ctx->pc = 0x2FD090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD090u;
            // 0x2fd094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD098u;
label_2fd098:
    // 0x2fd098: 0x0  nop
    ctx->pc = 0x2fd098u;
    // NOP
label_2fd09c:
    // 0x2fd09c: 0x0  nop
    ctx->pc = 0x2fd09cu;
    // NOP
label_2fd0a0:
    // 0x2fd0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd0a4:
    // 0x2fd0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd0a8:
    // 0x2fd0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd0ac:
    // 0x2fd0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd0b0:
    // 0x2fd0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd0b4:
    // 0x2fd0b4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd0b8:
    if (ctx->pc == 0x2FD0B8u) {
        ctx->pc = 0x2FD0B8u;
            // 0x2fd0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0BCu;
        goto label_2fd0bc;
    }
    ctx->pc = 0x2FD0B4u;
    {
        const bool branch_taken_0x2fd0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0B4u;
            // 0x2fd0b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0b4) {
            ctx->pc = 0x2FD120u;
            goto label_2fd120;
        }
    }
    ctx->pc = 0x2FD0BCu;
label_2fd0bc:
    // 0x2fd0bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd0c0:
    // 0x2fd0c0: 0x24423540  addiu       $v0, $v0, 0x3540
    ctx->pc = 0x2fd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
label_2fd0c4:
    // 0x2fd0c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd0c8:
    if (ctx->pc == 0x2FD0C8u) {
        ctx->pc = 0x2FD0C8u;
            // 0x2fd0c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD0CCu;
        goto label_2fd0cc;
    }
    ctx->pc = 0x2FD0C4u;
    {
        const bool branch_taken_0x2fd0c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0C4u;
            // 0x2fd0c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0c4) {
            ctx->pc = 0x2FD108u;
            goto label_2fd108;
        }
    }
    ctx->pc = 0x2FD0CCu;
label_2fd0cc:
    // 0x2fd0cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd0d0:
    // 0x2fd0d0: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd0d4:
    // 0x2fd0d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd0d8:
    if (ctx->pc == 0x2FD0D8u) {
        ctx->pc = 0x2FD0D8u;
            // 0x2fd0d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD0DCu;
        goto label_2fd0dc;
    }
    ctx->pc = 0x2FD0D4u;
    {
        const bool branch_taken_0x2fd0d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0D4u;
            // 0x2fd0d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0d4) {
            ctx->pc = 0x2FD108u;
            goto label_2fd108;
        }
    }
    ctx->pc = 0x2FD0DCu;
label_2fd0dc:
    // 0x2fd0dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd0e0:
    // 0x2fd0e0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd0e4:
    // 0x2fd0e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd0e8:
    if (ctx->pc == 0x2FD0E8u) {
        ctx->pc = 0x2FD0E8u;
            // 0x2fd0e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD0ECu;
        goto label_2fd0ec;
    }
    ctx->pc = 0x2FD0E4u;
    {
        const bool branch_taken_0x2fd0e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0E4u;
            // 0x2fd0e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0e4) {
            ctx->pc = 0x2FD108u;
            goto label_2fd108;
        }
    }
    ctx->pc = 0x2FD0ECu;
label_2fd0ec:
    // 0x2fd0ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd0f0:
    // 0x2fd0f0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd0f4:
    // 0x2fd0f4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd0f8:
    // 0x2fd0f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd0fc:
    if (ctx->pc == 0x2FD0FCu) {
        ctx->pc = 0x2FD0FCu;
            // 0x2fd0fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD100u;
        goto label_2fd100;
    }
    ctx->pc = 0x2FD0F8u;
    {
        const bool branch_taken_0x2fd0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD0F8u;
            // 0x2fd0fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0f8) {
            ctx->pc = 0x2FD108u;
            goto label_2fd108;
        }
    }
    ctx->pc = 0x2FD100u;
label_2fd100:
    // 0x2fd100: 0xc07507c  jal         func_1D41F0
label_2fd104:
    if (ctx->pc == 0x2FD104u) {
        ctx->pc = 0x2FD104u;
            // 0x2fd104: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD108u;
        goto label_2fd108;
    }
    ctx->pc = 0x2FD100u;
    SET_GPR_U32(ctx, 31, 0x2FD108u);
    ctx->pc = 0x2FD104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD100u;
            // 0x2fd104: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD108u; }
        if (ctx->pc != 0x2FD108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD108u; }
        if (ctx->pc != 0x2FD108u) { return; }
    }
    ctx->pc = 0x2FD108u;
label_2fd108:
    // 0x2fd108: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd10c:
    // 0x2fd10c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd10cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd110:
    // 0x2fd110: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd114:
    if (ctx->pc == 0x2FD114u) {
        ctx->pc = 0x2FD114u;
            // 0x2fd114: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD118u;
        goto label_2fd118;
    }
    ctx->pc = 0x2FD110u;
    {
        const bool branch_taken_0x2fd110 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd110) {
            ctx->pc = 0x2FD114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD110u;
            // 0x2fd114: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD124u;
            goto label_2fd124;
        }
    }
    ctx->pc = 0x2FD118u;
label_2fd118:
    // 0x2fd118: 0xc0400a8  jal         func_1002A0
label_2fd11c:
    if (ctx->pc == 0x2FD11Cu) {
        ctx->pc = 0x2FD11Cu;
            // 0x2fd11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD120u;
        goto label_2fd120;
    }
    ctx->pc = 0x2FD118u;
    SET_GPR_U32(ctx, 31, 0x2FD120u);
    ctx->pc = 0x2FD11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD118u;
            // 0x2fd11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD120u; }
        if (ctx->pc != 0x2FD120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD120u; }
        if (ctx->pc != 0x2FD120u) { return; }
    }
    ctx->pc = 0x2FD120u;
label_2fd120:
    // 0x2fd120: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd124:
    // 0x2fd124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd128:
    // 0x2fd128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd12c:
    // 0x2fd12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd130:
    // 0x2fd130: 0x3e00008  jr          $ra
label_2fd134:
    if (ctx->pc == 0x2FD134u) {
        ctx->pc = 0x2FD134u;
            // 0x2fd134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD138u;
        goto label_2fd138;
    }
    ctx->pc = 0x2FD130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD130u;
            // 0x2fd134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD138u;
label_2fd138:
    // 0x2fd138: 0x0  nop
    ctx->pc = 0x2fd138u;
    // NOP
label_2fd13c:
    // 0x2fd13c: 0x0  nop
    ctx->pc = 0x2fd13cu;
    // NOP
label_2fd140:
    // 0x2fd140: 0x3e00008  jr          $ra
label_2fd144:
    if (ctx->pc == 0x2FD144u) {
        ctx->pc = 0x2FD148u;
        goto label_2fd148;
    }
    ctx->pc = 0x2FD140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD148u;
label_2fd148:
    // 0x2fd148: 0x0  nop
    ctx->pc = 0x2fd148u;
    // NOP
label_2fd14c:
    // 0x2fd14c: 0x0  nop
    ctx->pc = 0x2fd14cu;
    // NOP
label_2fd150:
    // 0x2fd150: 0x3e00008  jr          $ra
label_2fd154:
    if (ctx->pc == 0x2FD154u) {
        ctx->pc = 0x2FD154u;
            // 0x2fd154: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2FD158u;
        goto label_2fd158;
    }
    ctx->pc = 0x2FD150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD150u;
            // 0x2fd154: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD158u;
label_2fd158:
    // 0x2fd158: 0x0  nop
    ctx->pc = 0x2fd158u;
    // NOP
label_2fd15c:
    // 0x2fd15c: 0x0  nop
    ctx->pc = 0x2fd15cu;
    // NOP
label_2fd160:
    // 0x2fd160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd164:
    // 0x2fd164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd168:
    // 0x2fd168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd16c:
    // 0x2fd16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd170:
    // 0x2fd170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd174:
    // 0x2fd174: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd178:
    if (ctx->pc == 0x2FD178u) {
        ctx->pc = 0x2FD178u;
            // 0x2fd178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD17Cu;
        goto label_2fd17c;
    }
    ctx->pc = 0x2FD174u;
    {
        const bool branch_taken_0x2fd174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD174u;
            // 0x2fd178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd174) {
            ctx->pc = 0x2FD1E0u;
            goto label_2fd1e0;
        }
    }
    ctx->pc = 0x2FD17Cu;
label_2fd17c:
    // 0x2fd17c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd180:
    // 0x2fd180: 0x24423590  addiu       $v0, $v0, 0x3590
    ctx->pc = 0x2fd180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
label_2fd184:
    // 0x2fd184: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd188:
    if (ctx->pc == 0x2FD188u) {
        ctx->pc = 0x2FD188u;
            // 0x2fd188: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD18Cu;
        goto label_2fd18c;
    }
    ctx->pc = 0x2FD184u;
    {
        const bool branch_taken_0x2fd184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD184u;
            // 0x2fd188: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd184) {
            ctx->pc = 0x2FD1C8u;
            goto label_2fd1c8;
        }
    }
    ctx->pc = 0x2FD18Cu;
label_2fd18c:
    // 0x2fd18c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd190:
    // 0x2fd190: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd194:
    // 0x2fd194: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd198:
    if (ctx->pc == 0x2FD198u) {
        ctx->pc = 0x2FD198u;
            // 0x2fd198: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD19Cu;
        goto label_2fd19c;
    }
    ctx->pc = 0x2FD194u;
    {
        const bool branch_taken_0x2fd194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD194u;
            // 0x2fd198: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd194) {
            ctx->pc = 0x2FD1C8u;
            goto label_2fd1c8;
        }
    }
    ctx->pc = 0x2FD19Cu;
label_2fd19c:
    // 0x2fd19c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd1a0:
    // 0x2fd1a0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd1a4:
    // 0x2fd1a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd1a8:
    if (ctx->pc == 0x2FD1A8u) {
        ctx->pc = 0x2FD1A8u;
            // 0x2fd1a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD1ACu;
        goto label_2fd1ac;
    }
    ctx->pc = 0x2FD1A4u;
    {
        const bool branch_taken_0x2fd1a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1A4u;
            // 0x2fd1a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1a4) {
            ctx->pc = 0x2FD1C8u;
            goto label_2fd1c8;
        }
    }
    ctx->pc = 0x2FD1ACu;
label_2fd1ac:
    // 0x2fd1ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd1b0:
    // 0x2fd1b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd1b4:
    // 0x2fd1b4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd1b8:
    // 0x2fd1b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd1bc:
    if (ctx->pc == 0x2FD1BCu) {
        ctx->pc = 0x2FD1BCu;
            // 0x2fd1bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD1C0u;
        goto label_2fd1c0;
    }
    ctx->pc = 0x2FD1B8u;
    {
        const bool branch_taken_0x2fd1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1B8u;
            // 0x2fd1bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1b8) {
            ctx->pc = 0x2FD1C8u;
            goto label_2fd1c8;
        }
    }
    ctx->pc = 0x2FD1C0u;
label_2fd1c0:
    // 0x2fd1c0: 0xc07507c  jal         func_1D41F0
label_2fd1c4:
    if (ctx->pc == 0x2FD1C4u) {
        ctx->pc = 0x2FD1C4u;
            // 0x2fd1c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD1C8u;
        goto label_2fd1c8;
    }
    ctx->pc = 0x2FD1C0u;
    SET_GPR_U32(ctx, 31, 0x2FD1C8u);
    ctx->pc = 0x2FD1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1C0u;
            // 0x2fd1c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1C8u; }
        if (ctx->pc != 0x2FD1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1C8u; }
        if (ctx->pc != 0x2FD1C8u) { return; }
    }
    ctx->pc = 0x2FD1C8u;
label_2fd1c8:
    // 0x2fd1c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd1cc:
    // 0x2fd1cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd1ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd1d0:
    // 0x2fd1d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd1d4:
    if (ctx->pc == 0x2FD1D4u) {
        ctx->pc = 0x2FD1D4u;
            // 0x2fd1d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1D8u;
        goto label_2fd1d8;
    }
    ctx->pc = 0x2FD1D0u;
    {
        const bool branch_taken_0x2fd1d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd1d0) {
            ctx->pc = 0x2FD1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1D0u;
            // 0x2fd1d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD1E4u;
            goto label_2fd1e4;
        }
    }
    ctx->pc = 0x2FD1D8u;
label_2fd1d8:
    // 0x2fd1d8: 0xc0400a8  jal         func_1002A0
label_2fd1dc:
    if (ctx->pc == 0x2FD1DCu) {
        ctx->pc = 0x2FD1DCu;
            // 0x2fd1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1E0u;
        goto label_2fd1e0;
    }
    ctx->pc = 0x2FD1D8u;
    SET_GPR_U32(ctx, 31, 0x2FD1E0u);
    ctx->pc = 0x2FD1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1D8u;
            // 0x2fd1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1E0u; }
        if (ctx->pc != 0x2FD1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1E0u; }
        if (ctx->pc != 0x2FD1E0u) { return; }
    }
    ctx->pc = 0x2FD1E0u;
label_2fd1e0:
    // 0x2fd1e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd1e4:
    // 0x2fd1e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd1e8:
    // 0x2fd1e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd1ec:
    // 0x2fd1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd1f0:
    // 0x2fd1f0: 0x3e00008  jr          $ra
label_2fd1f4:
    if (ctx->pc == 0x2FD1F4u) {
        ctx->pc = 0x2FD1F4u;
            // 0x2fd1f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD1F8u;
        goto label_2fd1f8;
    }
    ctx->pc = 0x2FD1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1F0u;
            // 0x2fd1f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD1F8u;
label_2fd1f8:
    // 0x2fd1f8: 0x0  nop
    ctx->pc = 0x2fd1f8u;
    // NOP
label_2fd1fc:
    // 0x2fd1fc: 0x0  nop
    ctx->pc = 0x2fd1fcu;
    // NOP
label_2fd200:
    // 0x2fd200: 0x3e00008  jr          $ra
label_2fd204:
    if (ctx->pc == 0x2FD204u) {
        ctx->pc = 0x2FD208u;
        goto label_2fd208;
    }
    ctx->pc = 0x2FD200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD208u;
label_2fd208:
    // 0x2fd208: 0x0  nop
    ctx->pc = 0x2fd208u;
    // NOP
label_2fd20c:
    // 0x2fd20c: 0x0  nop
    ctx->pc = 0x2fd20cu;
    // NOP
label_2fd210:
    // 0x2fd210: 0x3e00008  jr          $ra
label_2fd214:
    if (ctx->pc == 0x2FD214u) {
        ctx->pc = 0x2FD214u;
            // 0x2fd214: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2FD218u;
        goto label_2fd218;
    }
    ctx->pc = 0x2FD210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD210u;
            // 0x2fd214: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD218u;
label_2fd218:
    // 0x2fd218: 0x0  nop
    ctx->pc = 0x2fd218u;
    // NOP
label_2fd21c:
    // 0x2fd21c: 0x0  nop
    ctx->pc = 0x2fd21cu;
    // NOP
label_2fd220:
    // 0x2fd220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd224:
    // 0x2fd224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd228:
    // 0x2fd228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd22c:
    // 0x2fd22c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd230:
    // 0x2fd230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd234:
    // 0x2fd234: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd238:
    if (ctx->pc == 0x2FD238u) {
        ctx->pc = 0x2FD238u;
            // 0x2fd238: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD23Cu;
        goto label_2fd23c;
    }
    ctx->pc = 0x2FD234u;
    {
        const bool branch_taken_0x2fd234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD234u;
            // 0x2fd238: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd234) {
            ctx->pc = 0x2FD2A0u;
            goto label_2fd2a0;
        }
    }
    ctx->pc = 0x2FD23Cu;
label_2fd23c:
    // 0x2fd23c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd240:
    // 0x2fd240: 0x244235e0  addiu       $v0, $v0, 0x35E0
    ctx->pc = 0x2fd240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
label_2fd244:
    // 0x2fd244: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd248:
    if (ctx->pc == 0x2FD248u) {
        ctx->pc = 0x2FD248u;
            // 0x2fd248: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD24Cu;
        goto label_2fd24c;
    }
    ctx->pc = 0x2FD244u;
    {
        const bool branch_taken_0x2fd244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD244u;
            // 0x2fd248: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd244) {
            ctx->pc = 0x2FD288u;
            goto label_2fd288;
        }
    }
    ctx->pc = 0x2FD24Cu;
label_2fd24c:
    // 0x2fd24c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd250:
    // 0x2fd250: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd254:
    // 0x2fd254: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd258:
    if (ctx->pc == 0x2FD258u) {
        ctx->pc = 0x2FD258u;
            // 0x2fd258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD25Cu;
        goto label_2fd25c;
    }
    ctx->pc = 0x2FD254u;
    {
        const bool branch_taken_0x2fd254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD254u;
            // 0x2fd258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd254) {
            ctx->pc = 0x2FD288u;
            goto label_2fd288;
        }
    }
    ctx->pc = 0x2FD25Cu;
label_2fd25c:
    // 0x2fd25c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd260:
    // 0x2fd260: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd264:
    // 0x2fd264: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd268:
    if (ctx->pc == 0x2FD268u) {
        ctx->pc = 0x2FD268u;
            // 0x2fd268: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD26Cu;
        goto label_2fd26c;
    }
    ctx->pc = 0x2FD264u;
    {
        const bool branch_taken_0x2fd264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD264u;
            // 0x2fd268: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd264) {
            ctx->pc = 0x2FD288u;
            goto label_2fd288;
        }
    }
    ctx->pc = 0x2FD26Cu;
label_2fd26c:
    // 0x2fd26c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd270:
    // 0x2fd270: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd274:
    // 0x2fd274: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd278:
    // 0x2fd278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd27c:
    if (ctx->pc == 0x2FD27Cu) {
        ctx->pc = 0x2FD27Cu;
            // 0x2fd27c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD280u;
        goto label_2fd280;
    }
    ctx->pc = 0x2FD278u;
    {
        const bool branch_taken_0x2fd278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD278u;
            // 0x2fd27c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd278) {
            ctx->pc = 0x2FD288u;
            goto label_2fd288;
        }
    }
    ctx->pc = 0x2FD280u;
label_2fd280:
    // 0x2fd280: 0xc07507c  jal         func_1D41F0
label_2fd284:
    if (ctx->pc == 0x2FD284u) {
        ctx->pc = 0x2FD284u;
            // 0x2fd284: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD288u;
        goto label_2fd288;
    }
    ctx->pc = 0x2FD280u;
    SET_GPR_U32(ctx, 31, 0x2FD288u);
    ctx->pc = 0x2FD284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD280u;
            // 0x2fd284: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD288u; }
        if (ctx->pc != 0x2FD288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD288u; }
        if (ctx->pc != 0x2FD288u) { return; }
    }
    ctx->pc = 0x2FD288u;
label_2fd288:
    // 0x2fd288: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd28c:
    // 0x2fd28c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd28cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd290:
    // 0x2fd290: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd294:
    if (ctx->pc == 0x2FD294u) {
        ctx->pc = 0x2FD294u;
            // 0x2fd294: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD298u;
        goto label_2fd298;
    }
    ctx->pc = 0x2FD290u;
    {
        const bool branch_taken_0x2fd290 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd290) {
            ctx->pc = 0x2FD294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD290u;
            // 0x2fd294: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD2A4u;
            goto label_2fd2a4;
        }
    }
    ctx->pc = 0x2FD298u;
label_2fd298:
    // 0x2fd298: 0xc0400a8  jal         func_1002A0
label_2fd29c:
    if (ctx->pc == 0x2FD29Cu) {
        ctx->pc = 0x2FD29Cu;
            // 0x2fd29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2A0u;
        goto label_2fd2a0;
    }
    ctx->pc = 0x2FD298u;
    SET_GPR_U32(ctx, 31, 0x2FD2A0u);
    ctx->pc = 0x2FD29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD298u;
            // 0x2fd29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD2A0u; }
        if (ctx->pc != 0x2FD2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD2A0u; }
        if (ctx->pc != 0x2FD2A0u) { return; }
    }
    ctx->pc = 0x2FD2A0u;
label_2fd2a0:
    // 0x2fd2a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd2a4:
    // 0x2fd2a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd2a8:
    // 0x2fd2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd2ac:
    // 0x2fd2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd2b0:
    // 0x2fd2b0: 0x3e00008  jr          $ra
label_2fd2b4:
    if (ctx->pc == 0x2FD2B4u) {
        ctx->pc = 0x2FD2B4u;
            // 0x2fd2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD2B8u;
        goto label_2fd2b8;
    }
    ctx->pc = 0x2FD2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD2B0u;
            // 0x2fd2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD2B8u;
label_2fd2b8:
    // 0x2fd2b8: 0x0  nop
    ctx->pc = 0x2fd2b8u;
    // NOP
label_2fd2bc:
    // 0x2fd2bc: 0x0  nop
    ctx->pc = 0x2fd2bcu;
    // NOP
label_2fd2c0:
    // 0x2fd2c0: 0x3e00008  jr          $ra
label_2fd2c4:
    if (ctx->pc == 0x2FD2C4u) {
        ctx->pc = 0x2FD2C8u;
        goto label_2fd2c8;
    }
    ctx->pc = 0x2FD2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD2C8u;
label_2fd2c8:
    // 0x2fd2c8: 0x0  nop
    ctx->pc = 0x2fd2c8u;
    // NOP
label_2fd2cc:
    // 0x2fd2cc: 0x0  nop
    ctx->pc = 0x2fd2ccu;
    // NOP
label_2fd2d0:
    // 0x2fd2d0: 0x3e00008  jr          $ra
label_2fd2d4:
    if (ctx->pc == 0x2FD2D4u) {
        ctx->pc = 0x2FD2D4u;
            // 0x2fd2d4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x2FD2D8u;
        goto label_2fd2d8;
    }
    ctx->pc = 0x2FD2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD2D0u;
            // 0x2fd2d4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD2D8u;
label_2fd2d8:
    // 0x2fd2d8: 0x0  nop
    ctx->pc = 0x2fd2d8u;
    // NOP
label_2fd2dc:
    // 0x2fd2dc: 0x0  nop
    ctx->pc = 0x2fd2dcu;
    // NOP
label_2fd2e0:
    // 0x2fd2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd2e4:
    // 0x2fd2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd2e8:
    // 0x2fd2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd2ec:
    // 0x2fd2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd2f0:
    // 0x2fd2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd2f4:
    // 0x2fd2f4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd2f8:
    if (ctx->pc == 0x2FD2F8u) {
        ctx->pc = 0x2FD2F8u;
            // 0x2fd2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2FCu;
        goto label_2fd2fc;
    }
    ctx->pc = 0x2FD2F4u;
    {
        const bool branch_taken_0x2fd2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD2F4u;
            // 0x2fd2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2f4) {
            ctx->pc = 0x2FD360u;
            goto label_2fd360;
        }
    }
    ctx->pc = 0x2FD2FCu;
label_2fd2fc:
    // 0x2fd2fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd300:
    // 0x2fd300: 0x24423630  addiu       $v0, $v0, 0x3630
    ctx->pc = 0x2fd300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
label_2fd304:
    // 0x2fd304: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd308:
    if (ctx->pc == 0x2FD308u) {
        ctx->pc = 0x2FD308u;
            // 0x2fd308: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD30Cu;
        goto label_2fd30c;
    }
    ctx->pc = 0x2FD304u;
    {
        const bool branch_taken_0x2fd304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD304u;
            // 0x2fd308: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd304) {
            ctx->pc = 0x2FD348u;
            goto label_2fd348;
        }
    }
    ctx->pc = 0x2FD30Cu;
label_2fd30c:
    // 0x2fd30c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd310:
    // 0x2fd310: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd314:
    // 0x2fd314: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd318:
    if (ctx->pc == 0x2FD318u) {
        ctx->pc = 0x2FD318u;
            // 0x2fd318: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD31Cu;
        goto label_2fd31c;
    }
    ctx->pc = 0x2FD314u;
    {
        const bool branch_taken_0x2fd314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD314u;
            // 0x2fd318: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd314) {
            ctx->pc = 0x2FD348u;
            goto label_2fd348;
        }
    }
    ctx->pc = 0x2FD31Cu;
label_2fd31c:
    // 0x2fd31c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd320:
    // 0x2fd320: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd324:
    // 0x2fd324: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd328:
    if (ctx->pc == 0x2FD328u) {
        ctx->pc = 0x2FD328u;
            // 0x2fd328: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD32Cu;
        goto label_2fd32c;
    }
    ctx->pc = 0x2FD324u;
    {
        const bool branch_taken_0x2fd324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD324u;
            // 0x2fd328: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd324) {
            ctx->pc = 0x2FD348u;
            goto label_2fd348;
        }
    }
    ctx->pc = 0x2FD32Cu;
label_2fd32c:
    // 0x2fd32c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd330:
    // 0x2fd330: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd334:
    // 0x2fd334: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd338:
    // 0x2fd338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd33c:
    if (ctx->pc == 0x2FD33Cu) {
        ctx->pc = 0x2FD33Cu;
            // 0x2fd33c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD340u;
        goto label_2fd340;
    }
    ctx->pc = 0x2FD338u;
    {
        const bool branch_taken_0x2fd338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD338u;
            // 0x2fd33c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd338) {
            ctx->pc = 0x2FD348u;
            goto label_2fd348;
        }
    }
    ctx->pc = 0x2FD340u;
label_2fd340:
    // 0x2fd340: 0xc07507c  jal         func_1D41F0
label_2fd344:
    if (ctx->pc == 0x2FD344u) {
        ctx->pc = 0x2FD344u;
            // 0x2fd344: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD348u;
        goto label_2fd348;
    }
    ctx->pc = 0x2FD340u;
    SET_GPR_U32(ctx, 31, 0x2FD348u);
    ctx->pc = 0x2FD344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD340u;
            // 0x2fd344: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD348u; }
        if (ctx->pc != 0x2FD348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD348u; }
        if (ctx->pc != 0x2FD348u) { return; }
    }
    ctx->pc = 0x2FD348u;
label_2fd348:
    // 0x2fd348: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd34c:
    // 0x2fd34c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd34cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd350:
    // 0x2fd350: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd354:
    if (ctx->pc == 0x2FD354u) {
        ctx->pc = 0x2FD354u;
            // 0x2fd354: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD358u;
        goto label_2fd358;
    }
    ctx->pc = 0x2FD350u;
    {
        const bool branch_taken_0x2fd350 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd350) {
            ctx->pc = 0x2FD354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD350u;
            // 0x2fd354: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD364u;
            goto label_2fd364;
        }
    }
    ctx->pc = 0x2FD358u;
label_2fd358:
    // 0x2fd358: 0xc0400a8  jal         func_1002A0
label_2fd35c:
    if (ctx->pc == 0x2FD35Cu) {
        ctx->pc = 0x2FD35Cu;
            // 0x2fd35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD360u;
        goto label_2fd360;
    }
    ctx->pc = 0x2FD358u;
    SET_GPR_U32(ctx, 31, 0x2FD360u);
    ctx->pc = 0x2FD35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD358u;
            // 0x2fd35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD360u; }
        if (ctx->pc != 0x2FD360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD360u; }
        if (ctx->pc != 0x2FD360u) { return; }
    }
    ctx->pc = 0x2FD360u;
label_2fd360:
    // 0x2fd360: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd364:
    // 0x2fd364: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd368:
    // 0x2fd368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd36c:
    // 0x2fd36c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd370:
    // 0x2fd370: 0x3e00008  jr          $ra
label_2fd374:
    if (ctx->pc == 0x2FD374u) {
        ctx->pc = 0x2FD374u;
            // 0x2fd374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD378u;
        goto label_2fd378;
    }
    ctx->pc = 0x2FD370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD370u;
            // 0x2fd374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD378u;
label_2fd378:
    // 0x2fd378: 0x0  nop
    ctx->pc = 0x2fd378u;
    // NOP
label_2fd37c:
    // 0x2fd37c: 0x0  nop
    ctx->pc = 0x2fd37cu;
    // NOP
label_2fd380:
    // 0x2fd380: 0x3e00008  jr          $ra
label_2fd384:
    if (ctx->pc == 0x2FD384u) {
        ctx->pc = 0x2FD388u;
        goto label_2fd388;
    }
    ctx->pc = 0x2FD380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD388u;
label_2fd388:
    // 0x2fd388: 0x0  nop
    ctx->pc = 0x2fd388u;
    // NOP
label_2fd38c:
    // 0x2fd38c: 0x0  nop
    ctx->pc = 0x2fd38cu;
    // NOP
label_2fd390:
    // 0x2fd390: 0x3e00008  jr          $ra
label_2fd394:
    if (ctx->pc == 0x2FD394u) {
        ctx->pc = 0x2FD394u;
            // 0x2fd394: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2FD398u;
        goto label_2fd398;
    }
    ctx->pc = 0x2FD390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD390u;
            // 0x2fd394: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD398u;
label_2fd398:
    // 0x2fd398: 0x0  nop
    ctx->pc = 0x2fd398u;
    // NOP
label_2fd39c:
    // 0x2fd39c: 0x0  nop
    ctx->pc = 0x2fd39cu;
    // NOP
label_2fd3a0:
    // 0x2fd3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd3a4:
    // 0x2fd3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd3a8:
    // 0x2fd3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd3ac:
    // 0x2fd3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd3b0:
    // 0x2fd3b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd3b4:
    // 0x2fd3b4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd3b8:
    if (ctx->pc == 0x2FD3B8u) {
        ctx->pc = 0x2FD3B8u;
            // 0x2fd3b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3BCu;
        goto label_2fd3bc;
    }
    ctx->pc = 0x2FD3B4u;
    {
        const bool branch_taken_0x2fd3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3B4u;
            // 0x2fd3b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3b4) {
            ctx->pc = 0x2FD420u;
            goto label_2fd420;
        }
    }
    ctx->pc = 0x2FD3BCu;
label_2fd3bc:
    // 0x2fd3bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd3c0:
    // 0x2fd3c0: 0x24423680  addiu       $v0, $v0, 0x3680
    ctx->pc = 0x2fd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13952));
label_2fd3c4:
    // 0x2fd3c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd3c8:
    if (ctx->pc == 0x2FD3C8u) {
        ctx->pc = 0x2FD3C8u;
            // 0x2fd3c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD3CCu;
        goto label_2fd3cc;
    }
    ctx->pc = 0x2FD3C4u;
    {
        const bool branch_taken_0x2fd3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3C4u;
            // 0x2fd3c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3c4) {
            ctx->pc = 0x2FD408u;
            goto label_2fd408;
        }
    }
    ctx->pc = 0x2FD3CCu;
label_2fd3cc:
    // 0x2fd3cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd3d0:
    // 0x2fd3d0: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd3d4:
    // 0x2fd3d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd3d8:
    if (ctx->pc == 0x2FD3D8u) {
        ctx->pc = 0x2FD3D8u;
            // 0x2fd3d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD3DCu;
        goto label_2fd3dc;
    }
    ctx->pc = 0x2FD3D4u;
    {
        const bool branch_taken_0x2fd3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3D4u;
            // 0x2fd3d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3d4) {
            ctx->pc = 0x2FD408u;
            goto label_2fd408;
        }
    }
    ctx->pc = 0x2FD3DCu;
label_2fd3dc:
    // 0x2fd3dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd3e0:
    // 0x2fd3e0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd3e4:
    // 0x2fd3e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd3e8:
    if (ctx->pc == 0x2FD3E8u) {
        ctx->pc = 0x2FD3E8u;
            // 0x2fd3e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD3ECu;
        goto label_2fd3ec;
    }
    ctx->pc = 0x2FD3E4u;
    {
        const bool branch_taken_0x2fd3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3E4u;
            // 0x2fd3e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3e4) {
            ctx->pc = 0x2FD408u;
            goto label_2fd408;
        }
    }
    ctx->pc = 0x2FD3ECu;
label_2fd3ec:
    // 0x2fd3ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd3f0:
    // 0x2fd3f0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd3f4:
    // 0x2fd3f4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd3f8:
    // 0x2fd3f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd3fc:
    if (ctx->pc == 0x2FD3FCu) {
        ctx->pc = 0x2FD3FCu;
            // 0x2fd3fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD400u;
        goto label_2fd400;
    }
    ctx->pc = 0x2FD3F8u;
    {
        const bool branch_taken_0x2fd3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3F8u;
            // 0x2fd3fc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3f8) {
            ctx->pc = 0x2FD408u;
            goto label_2fd408;
        }
    }
    ctx->pc = 0x2FD400u;
label_2fd400:
    // 0x2fd400: 0xc07507c  jal         func_1D41F0
label_2fd404:
    if (ctx->pc == 0x2FD404u) {
        ctx->pc = 0x2FD404u;
            // 0x2fd404: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD408u;
        goto label_2fd408;
    }
    ctx->pc = 0x2FD400u;
    SET_GPR_U32(ctx, 31, 0x2FD408u);
    ctx->pc = 0x2FD404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD400u;
            // 0x2fd404: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD408u; }
        if (ctx->pc != 0x2FD408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD408u; }
        if (ctx->pc != 0x2FD408u) { return; }
    }
    ctx->pc = 0x2FD408u;
label_2fd408:
    // 0x2fd408: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd40c:
    // 0x2fd40c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd40cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd410:
    // 0x2fd410: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd414:
    if (ctx->pc == 0x2FD414u) {
        ctx->pc = 0x2FD414u;
            // 0x2fd414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD418u;
        goto label_2fd418;
    }
    ctx->pc = 0x2FD410u;
    {
        const bool branch_taken_0x2fd410 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd410) {
            ctx->pc = 0x2FD414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD410u;
            // 0x2fd414: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD424u;
            goto label_2fd424;
        }
    }
    ctx->pc = 0x2FD418u;
label_2fd418:
    // 0x2fd418: 0xc0400a8  jal         func_1002A0
label_2fd41c:
    if (ctx->pc == 0x2FD41Cu) {
        ctx->pc = 0x2FD41Cu;
            // 0x2fd41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD420u;
        goto label_2fd420;
    }
    ctx->pc = 0x2FD418u;
    SET_GPR_U32(ctx, 31, 0x2FD420u);
    ctx->pc = 0x2FD41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD418u;
            // 0x2fd41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD420u; }
        if (ctx->pc != 0x2FD420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD420u; }
        if (ctx->pc != 0x2FD420u) { return; }
    }
    ctx->pc = 0x2FD420u;
label_2fd420:
    // 0x2fd420: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd424:
    // 0x2fd424: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd428:
    // 0x2fd428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd42c:
    // 0x2fd42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd430:
    // 0x2fd430: 0x3e00008  jr          $ra
label_2fd434:
    if (ctx->pc == 0x2FD434u) {
        ctx->pc = 0x2FD434u;
            // 0x2fd434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD438u;
        goto label_2fd438;
    }
    ctx->pc = 0x2FD430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD430u;
            // 0x2fd434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD438u;
label_2fd438:
    // 0x2fd438: 0x0  nop
    ctx->pc = 0x2fd438u;
    // NOP
label_2fd43c:
    // 0x2fd43c: 0x0  nop
    ctx->pc = 0x2fd43cu;
    // NOP
label_2fd440:
    // 0x2fd440: 0x3e00008  jr          $ra
label_2fd444:
    if (ctx->pc == 0x2FD444u) {
        ctx->pc = 0x2FD448u;
        goto label_2fd448;
    }
    ctx->pc = 0x2FD440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD448u;
label_2fd448:
    // 0x2fd448: 0x0  nop
    ctx->pc = 0x2fd448u;
    // NOP
label_2fd44c:
    // 0x2fd44c: 0x0  nop
    ctx->pc = 0x2fd44cu;
    // NOP
label_2fd450:
    // 0x2fd450: 0x3e00008  jr          $ra
label_2fd454:
    if (ctx->pc == 0x2FD454u) {
        ctx->pc = 0x2FD454u;
            // 0x2fd454: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2FD458u;
        goto label_2fd458;
    }
    ctx->pc = 0x2FD450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD450u;
            // 0x2fd454: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD458u;
label_2fd458:
    // 0x2fd458: 0x0  nop
    ctx->pc = 0x2fd458u;
    // NOP
label_2fd45c:
    // 0x2fd45c: 0x0  nop
    ctx->pc = 0x2fd45cu;
    // NOP
label_2fd460:
    // 0x2fd460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd464:
    // 0x2fd464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd468:
    // 0x2fd468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd46c:
    // 0x2fd46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd470:
    // 0x2fd470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd474:
    // 0x2fd474: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd478:
    if (ctx->pc == 0x2FD478u) {
        ctx->pc = 0x2FD478u;
            // 0x2fd478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD47Cu;
        goto label_2fd47c;
    }
    ctx->pc = 0x2FD474u;
    {
        const bool branch_taken_0x2fd474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD474u;
            // 0x2fd478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd474) {
            ctx->pc = 0x2FD4E0u;
            goto label_2fd4e0;
        }
    }
    ctx->pc = 0x2FD47Cu;
label_2fd47c:
    // 0x2fd47c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd480:
    // 0x2fd480: 0x244236d0  addiu       $v0, $v0, 0x36D0
    ctx->pc = 0x2fd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14032));
label_2fd484:
    // 0x2fd484: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd488:
    if (ctx->pc == 0x2FD488u) {
        ctx->pc = 0x2FD488u;
            // 0x2fd488: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD48Cu;
        goto label_2fd48c;
    }
    ctx->pc = 0x2FD484u;
    {
        const bool branch_taken_0x2fd484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD484u;
            // 0x2fd488: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd484) {
            ctx->pc = 0x2FD4C8u;
            goto label_2fd4c8;
        }
    }
    ctx->pc = 0x2FD48Cu;
label_2fd48c:
    // 0x2fd48c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd490:
    // 0x2fd490: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd494:
    // 0x2fd494: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd498:
    if (ctx->pc == 0x2FD498u) {
        ctx->pc = 0x2FD498u;
            // 0x2fd498: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD49Cu;
        goto label_2fd49c;
    }
    ctx->pc = 0x2FD494u;
    {
        const bool branch_taken_0x2fd494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD494u;
            // 0x2fd498: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd494) {
            ctx->pc = 0x2FD4C8u;
            goto label_2fd4c8;
        }
    }
    ctx->pc = 0x2FD49Cu;
label_2fd49c:
    // 0x2fd49c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd4a0:
    // 0x2fd4a0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd4a4:
    // 0x2fd4a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd4a8:
    if (ctx->pc == 0x2FD4A8u) {
        ctx->pc = 0x2FD4A8u;
            // 0x2fd4a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD4ACu;
        goto label_2fd4ac;
    }
    ctx->pc = 0x2FD4A4u;
    {
        const bool branch_taken_0x2fd4a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4A4u;
            // 0x2fd4a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4a4) {
            ctx->pc = 0x2FD4C8u;
            goto label_2fd4c8;
        }
    }
    ctx->pc = 0x2FD4ACu;
label_2fd4ac:
    // 0x2fd4ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd4b0:
    // 0x2fd4b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd4b4:
    // 0x2fd4b4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd4b8:
    // 0x2fd4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd4bc:
    if (ctx->pc == 0x2FD4BCu) {
        ctx->pc = 0x2FD4BCu;
            // 0x2fd4bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD4C0u;
        goto label_2fd4c0;
    }
    ctx->pc = 0x2FD4B8u;
    {
        const bool branch_taken_0x2fd4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4B8u;
            // 0x2fd4bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4b8) {
            ctx->pc = 0x2FD4C8u;
            goto label_2fd4c8;
        }
    }
    ctx->pc = 0x2FD4C0u;
label_2fd4c0:
    // 0x2fd4c0: 0xc07507c  jal         func_1D41F0
label_2fd4c4:
    if (ctx->pc == 0x2FD4C4u) {
        ctx->pc = 0x2FD4C4u;
            // 0x2fd4c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD4C8u;
        goto label_2fd4c8;
    }
    ctx->pc = 0x2FD4C0u;
    SET_GPR_U32(ctx, 31, 0x2FD4C8u);
    ctx->pc = 0x2FD4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4C0u;
            // 0x2fd4c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4C8u; }
        if (ctx->pc != 0x2FD4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4C8u; }
        if (ctx->pc != 0x2FD4C8u) { return; }
    }
    ctx->pc = 0x2FD4C8u;
label_2fd4c8:
    // 0x2fd4c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd4cc:
    // 0x2fd4cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd4ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd4d0:
    // 0x2fd4d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd4d4:
    if (ctx->pc == 0x2FD4D4u) {
        ctx->pc = 0x2FD4D4u;
            // 0x2fd4d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4D8u;
        goto label_2fd4d8;
    }
    ctx->pc = 0x2FD4D0u;
    {
        const bool branch_taken_0x2fd4d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd4d0) {
            ctx->pc = 0x2FD4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4D0u;
            // 0x2fd4d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD4E4u;
            goto label_2fd4e4;
        }
    }
    ctx->pc = 0x2FD4D8u;
label_2fd4d8:
    // 0x2fd4d8: 0xc0400a8  jal         func_1002A0
label_2fd4dc:
    if (ctx->pc == 0x2FD4DCu) {
        ctx->pc = 0x2FD4DCu;
            // 0x2fd4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4E0u;
        goto label_2fd4e0;
    }
    ctx->pc = 0x2FD4D8u;
    SET_GPR_U32(ctx, 31, 0x2FD4E0u);
    ctx->pc = 0x2FD4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4D8u;
            // 0x2fd4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4E0u; }
        if (ctx->pc != 0x2FD4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4E0u; }
        if (ctx->pc != 0x2FD4E0u) { return; }
    }
    ctx->pc = 0x2FD4E0u;
label_2fd4e0:
    // 0x2fd4e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd4e4:
    // 0x2fd4e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd4e8:
    // 0x2fd4e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd4ec:
    // 0x2fd4ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd4f0:
    // 0x2fd4f0: 0x3e00008  jr          $ra
label_2fd4f4:
    if (ctx->pc == 0x2FD4F4u) {
        ctx->pc = 0x2FD4F4u;
            // 0x2fd4f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD4F8u;
        goto label_2fd4f8;
    }
    ctx->pc = 0x2FD4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4F0u;
            // 0x2fd4f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD4F8u;
label_2fd4f8:
    // 0x2fd4f8: 0x0  nop
    ctx->pc = 0x2fd4f8u;
    // NOP
label_2fd4fc:
    // 0x2fd4fc: 0x0  nop
    ctx->pc = 0x2fd4fcu;
    // NOP
label_2fd500:
    // 0x2fd500: 0x3e00008  jr          $ra
label_2fd504:
    if (ctx->pc == 0x2FD504u) {
        ctx->pc = 0x2FD508u;
        goto label_2fd508;
    }
    ctx->pc = 0x2FD500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD508u;
label_2fd508:
    // 0x2fd508: 0x0  nop
    ctx->pc = 0x2fd508u;
    // NOP
label_2fd50c:
    // 0x2fd50c: 0x0  nop
    ctx->pc = 0x2fd50cu;
    // NOP
label_2fd510:
    // 0x2fd510: 0x3e00008  jr          $ra
label_2fd514:
    if (ctx->pc == 0x2FD514u) {
        ctx->pc = 0x2FD514u;
            // 0x2fd514: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2FD518u;
        goto label_2fd518;
    }
    ctx->pc = 0x2FD510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD510u;
            // 0x2fd514: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD518u;
label_2fd518:
    // 0x2fd518: 0x0  nop
    ctx->pc = 0x2fd518u;
    // NOP
label_2fd51c:
    // 0x2fd51c: 0x0  nop
    ctx->pc = 0x2fd51cu;
    // NOP
label_2fd520:
    // 0x2fd520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd524:
    // 0x2fd524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd528:
    // 0x2fd528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd52c:
    // 0x2fd52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd530:
    // 0x2fd530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd534:
    // 0x2fd534: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd538:
    if (ctx->pc == 0x2FD538u) {
        ctx->pc = 0x2FD538u;
            // 0x2fd538: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD53Cu;
        goto label_2fd53c;
    }
    ctx->pc = 0x2FD534u;
    {
        const bool branch_taken_0x2fd534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD534u;
            // 0x2fd538: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd534) {
            ctx->pc = 0x2FD5A0u;
            goto label_2fd5a0;
        }
    }
    ctx->pc = 0x2FD53Cu;
label_2fd53c:
    // 0x2fd53c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd540:
    // 0x2fd540: 0x24423720  addiu       $v0, $v0, 0x3720
    ctx->pc = 0x2fd540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
label_2fd544:
    // 0x2fd544: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd548:
    if (ctx->pc == 0x2FD548u) {
        ctx->pc = 0x2FD548u;
            // 0x2fd548: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD54Cu;
        goto label_2fd54c;
    }
    ctx->pc = 0x2FD544u;
    {
        const bool branch_taken_0x2fd544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD544u;
            // 0x2fd548: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd544) {
            ctx->pc = 0x2FD588u;
            goto label_2fd588;
        }
    }
    ctx->pc = 0x2FD54Cu;
label_2fd54c:
    // 0x2fd54c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd550:
    // 0x2fd550: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd554:
    // 0x2fd554: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd558:
    if (ctx->pc == 0x2FD558u) {
        ctx->pc = 0x2FD558u;
            // 0x2fd558: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD55Cu;
        goto label_2fd55c;
    }
    ctx->pc = 0x2FD554u;
    {
        const bool branch_taken_0x2fd554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD554u;
            // 0x2fd558: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd554) {
            ctx->pc = 0x2FD588u;
            goto label_2fd588;
        }
    }
    ctx->pc = 0x2FD55Cu;
label_2fd55c:
    // 0x2fd55c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd560:
    // 0x2fd560: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd564:
    // 0x2fd564: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd568:
    if (ctx->pc == 0x2FD568u) {
        ctx->pc = 0x2FD568u;
            // 0x2fd568: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD56Cu;
        goto label_2fd56c;
    }
    ctx->pc = 0x2FD564u;
    {
        const bool branch_taken_0x2fd564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD564u;
            // 0x2fd568: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd564) {
            ctx->pc = 0x2FD588u;
            goto label_2fd588;
        }
    }
    ctx->pc = 0x2FD56Cu;
label_2fd56c:
    // 0x2fd56c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd570:
    // 0x2fd570: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd574:
    // 0x2fd574: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd578:
    // 0x2fd578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd57c:
    if (ctx->pc == 0x2FD57Cu) {
        ctx->pc = 0x2FD57Cu;
            // 0x2fd57c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD580u;
        goto label_2fd580;
    }
    ctx->pc = 0x2FD578u;
    {
        const bool branch_taken_0x2fd578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD578u;
            // 0x2fd57c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd578) {
            ctx->pc = 0x2FD588u;
            goto label_2fd588;
        }
    }
    ctx->pc = 0x2FD580u;
label_2fd580:
    // 0x2fd580: 0xc07507c  jal         func_1D41F0
label_2fd584:
    if (ctx->pc == 0x2FD584u) {
        ctx->pc = 0x2FD584u;
            // 0x2fd584: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD588u;
        goto label_2fd588;
    }
    ctx->pc = 0x2FD580u;
    SET_GPR_U32(ctx, 31, 0x2FD588u);
    ctx->pc = 0x2FD584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD580u;
            // 0x2fd584: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD588u; }
        if (ctx->pc != 0x2FD588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD588u; }
        if (ctx->pc != 0x2FD588u) { return; }
    }
    ctx->pc = 0x2FD588u;
label_2fd588:
    // 0x2fd588: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd58c:
    // 0x2fd58c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd590:
    // 0x2fd590: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd594:
    if (ctx->pc == 0x2FD594u) {
        ctx->pc = 0x2FD594u;
            // 0x2fd594: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD598u;
        goto label_2fd598;
    }
    ctx->pc = 0x2FD590u;
    {
        const bool branch_taken_0x2fd590 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd590) {
            ctx->pc = 0x2FD594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD590u;
            // 0x2fd594: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD5A4u;
            goto label_2fd5a4;
        }
    }
    ctx->pc = 0x2FD598u;
label_2fd598:
    // 0x2fd598: 0xc0400a8  jal         func_1002A0
label_2fd59c:
    if (ctx->pc == 0x2FD59Cu) {
        ctx->pc = 0x2FD59Cu;
            // 0x2fd59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5A0u;
        goto label_2fd5a0;
    }
    ctx->pc = 0x2FD598u;
    SET_GPR_U32(ctx, 31, 0x2FD5A0u);
    ctx->pc = 0x2FD59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD598u;
            // 0x2fd59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5A0u; }
        if (ctx->pc != 0x2FD5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5A0u; }
        if (ctx->pc != 0x2FD5A0u) { return; }
    }
    ctx->pc = 0x2FD5A0u;
label_2fd5a0:
    // 0x2fd5a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd5a4:
    // 0x2fd5a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd5a8:
    // 0x2fd5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd5ac:
    // 0x2fd5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd5b0:
    // 0x2fd5b0: 0x3e00008  jr          $ra
label_2fd5b4:
    if (ctx->pc == 0x2FD5B4u) {
        ctx->pc = 0x2FD5B4u;
            // 0x2fd5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD5B8u;
        goto label_2fd5b8;
    }
    ctx->pc = 0x2FD5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5B0u;
            // 0x2fd5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD5B8u;
label_2fd5b8:
    // 0x2fd5b8: 0x0  nop
    ctx->pc = 0x2fd5b8u;
    // NOP
label_2fd5bc:
    // 0x2fd5bc: 0x0  nop
    ctx->pc = 0x2fd5bcu;
    // NOP
label_2fd5c0:
    // 0x2fd5c0: 0x3e00008  jr          $ra
label_2fd5c4:
    if (ctx->pc == 0x2FD5C4u) {
        ctx->pc = 0x2FD5C8u;
        goto label_2fd5c8;
    }
    ctx->pc = 0x2FD5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD5C8u;
label_2fd5c8:
    // 0x2fd5c8: 0x0  nop
    ctx->pc = 0x2fd5c8u;
    // NOP
label_2fd5cc:
    // 0x2fd5cc: 0x0  nop
    ctx->pc = 0x2fd5ccu;
    // NOP
label_2fd5d0:
    // 0x2fd5d0: 0x3e00008  jr          $ra
label_2fd5d4:
    if (ctx->pc == 0x2FD5D4u) {
        ctx->pc = 0x2FD5D4u;
            // 0x2fd5d4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2FD5D8u;
        goto label_2fd5d8;
    }
    ctx->pc = 0x2FD5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5D0u;
            // 0x2fd5d4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD5D8u;
label_2fd5d8:
    // 0x2fd5d8: 0x0  nop
    ctx->pc = 0x2fd5d8u;
    // NOP
label_2fd5dc:
    // 0x2fd5dc: 0x0  nop
    ctx->pc = 0x2fd5dcu;
    // NOP
label_2fd5e0:
    // 0x2fd5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd5e4:
    // 0x2fd5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd5e8:
    // 0x2fd5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd5ec:
    // 0x2fd5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd5f0:
    // 0x2fd5f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd5f4:
    // 0x2fd5f4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_2fd5f8:
    if (ctx->pc == 0x2FD5F8u) {
        ctx->pc = 0x2FD5F8u;
            // 0x2fd5f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5FCu;
        goto label_2fd5fc;
    }
    ctx->pc = 0x2FD5F4u;
    {
        const bool branch_taken_0x2fd5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5F4u;
            // 0x2fd5f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5f4) {
            ctx->pc = 0x2FD684u;
            goto label_2fd684;
        }
    }
    ctx->pc = 0x2FD5FCu;
label_2fd5fc:
    // 0x2fd5fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd600:
    // 0x2fd600: 0x24423770  addiu       $v0, $v0, 0x3770
    ctx->pc = 0x2fd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14192));
label_2fd604:
    // 0x2fd604: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fd604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2fd608:
    // 0x2fd608: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2fd608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2fd60c:
    // 0x2fd60c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2fd610:
    if (ctx->pc == 0x2FD610u) {
        ctx->pc = 0x2FD614u;
        goto label_2fd614;
    }
    ctx->pc = 0x2FD60Cu;
    {
        const bool branch_taken_0x2fd60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd60c) {
            ctx->pc = 0x2FD628u;
            goto label_2fd628;
        }
    }
    ctx->pc = 0x2FD614u;
label_2fd614:
    // 0x2fd614: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd618:
    // 0x2fd618: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2fd618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2fd61c:
    // 0x2fd61c: 0x320f809  jalr        $t9
label_2fd620:
    if (ctx->pc == 0x2FD620u) {
        ctx->pc = 0x2FD620u;
            // 0x2fd620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FD624u;
        goto label_2fd624;
    }
    ctx->pc = 0x2FD61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD624u);
        ctx->pc = 0x2FD620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD61Cu;
            // 0x2fd620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD624u; }
            if (ctx->pc != 0x2FD624u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD624u;
label_2fd624:
    // 0x2fd624: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2fd624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_2fd628:
    // 0x2fd628: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_2fd62c:
    if (ctx->pc == 0x2FD62Cu) {
        ctx->pc = 0x2FD62Cu;
            // 0x2fd62c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2FD630u;
        goto label_2fd630;
    }
    ctx->pc = 0x2FD628u;
    {
        const bool branch_taken_0x2fd628 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd628) {
            ctx->pc = 0x2FD62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD628u;
            // 0x2fd62c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD670u;
            goto label_2fd670;
        }
    }
    ctx->pc = 0x2FD630u;
label_2fd630:
    // 0x2fd630: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd634:
    // 0x2fd634: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd638:
    // 0x2fd638: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd63c:
    if (ctx->pc == 0x2FD63Cu) {
        ctx->pc = 0x2FD63Cu;
            // 0x2fd63c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD640u;
        goto label_2fd640;
    }
    ctx->pc = 0x2FD638u;
    {
        const bool branch_taken_0x2fd638 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD638u;
            // 0x2fd63c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd638) {
            ctx->pc = 0x2FD66Cu;
            goto label_2fd66c;
        }
    }
    ctx->pc = 0x2FD640u;
label_2fd640:
    // 0x2fd640: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd644:
    // 0x2fd644: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd648:
    // 0x2fd648: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd64c:
    if (ctx->pc == 0x2FD64Cu) {
        ctx->pc = 0x2FD64Cu;
            // 0x2fd64c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD650u;
        goto label_2fd650;
    }
    ctx->pc = 0x2FD648u;
    {
        const bool branch_taken_0x2fd648 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD648u;
            // 0x2fd64c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd648) {
            ctx->pc = 0x2FD66Cu;
            goto label_2fd66c;
        }
    }
    ctx->pc = 0x2FD650u;
label_2fd650:
    // 0x2fd650: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd654:
    // 0x2fd654: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd658:
    // 0x2fd658: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd65c:
    // 0x2fd65c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd660:
    if (ctx->pc == 0x2FD660u) {
        ctx->pc = 0x2FD660u;
            // 0x2fd660: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD664u;
        goto label_2fd664;
    }
    ctx->pc = 0x2FD65Cu;
    {
        const bool branch_taken_0x2fd65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD65Cu;
            // 0x2fd660: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd65c) {
            ctx->pc = 0x2FD66Cu;
            goto label_2fd66c;
        }
    }
    ctx->pc = 0x2FD664u;
label_2fd664:
    // 0x2fd664: 0xc07507c  jal         func_1D41F0
label_2fd668:
    if (ctx->pc == 0x2FD668u) {
        ctx->pc = 0x2FD668u;
            // 0x2fd668: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD66Cu;
        goto label_2fd66c;
    }
    ctx->pc = 0x2FD664u;
    SET_GPR_U32(ctx, 31, 0x2FD66Cu);
    ctx->pc = 0x2FD668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD664u;
            // 0x2fd668: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD66Cu; }
        if (ctx->pc != 0x2FD66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD66Cu; }
        if (ctx->pc != 0x2FD66Cu) { return; }
    }
    ctx->pc = 0x2FD66Cu;
label_2fd66c:
    // 0x2fd66c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd670:
    // 0x2fd670: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd674:
    // 0x2fd674: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd678:
    if (ctx->pc == 0x2FD678u) {
        ctx->pc = 0x2FD678u;
            // 0x2fd678: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD67Cu;
        goto label_2fd67c;
    }
    ctx->pc = 0x2FD674u;
    {
        const bool branch_taken_0x2fd674 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd674) {
            ctx->pc = 0x2FD678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD674u;
            // 0x2fd678: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD688u;
            goto label_2fd688;
        }
    }
    ctx->pc = 0x2FD67Cu;
label_2fd67c:
    // 0x2fd67c: 0xc0400a8  jal         func_1002A0
label_2fd680:
    if (ctx->pc == 0x2FD680u) {
        ctx->pc = 0x2FD680u;
            // 0x2fd680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD684u;
        goto label_2fd684;
    }
    ctx->pc = 0x2FD67Cu;
    SET_GPR_U32(ctx, 31, 0x2FD684u);
    ctx->pc = 0x2FD680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD67Cu;
            // 0x2fd680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD684u; }
        if (ctx->pc != 0x2FD684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD684u; }
        if (ctx->pc != 0x2FD684u) { return; }
    }
    ctx->pc = 0x2FD684u;
label_2fd684:
    // 0x2fd684: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd688:
    // 0x2fd688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd68c:
    // 0x2fd68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd690:
    // 0x2fd690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd694:
    // 0x2fd694: 0x3e00008  jr          $ra
label_2fd698:
    if (ctx->pc == 0x2FD698u) {
        ctx->pc = 0x2FD698u;
            // 0x2fd698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD69Cu;
        goto label_2fd69c;
    }
    ctx->pc = 0x2FD694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD694u;
            // 0x2fd698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD69Cu;
label_2fd69c:
    // 0x2fd69c: 0x0  nop
    ctx->pc = 0x2fd69cu;
    // NOP
label_2fd6a0:
    // 0x2fd6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fd6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fd6a4:
    // 0x2fd6a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fd6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fd6a8:
    // 0x2fd6a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd6ac:
    // 0x2fd6ac: 0xc101574  jal         func_4055D0
label_2fd6b0:
    if (ctx->pc == 0x2FD6B0u) {
        ctx->pc = 0x2FD6B0u;
            // 0x2fd6b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6B4u;
        goto label_2fd6b4;
    }
    ctx->pc = 0x2FD6ACu;
    SET_GPR_U32(ctx, 31, 0x2FD6B4u);
    ctx->pc = 0x2FD6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6ACu;
            // 0x2fd6b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4055D0u;
    if (runtime->hasFunction(0x4055D0u)) {
        auto targetFn = runtime->lookupFunction(0x4055D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6B4u; }
        if (ctx->pc != 0x2FD6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004055D0_0x4055d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6B4u; }
        if (ctx->pc != 0x2FD6B4u) { return; }
    }
    ctx->pc = 0x2FD6B4u;
label_2fd6b4:
    // 0x2fd6b4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2fd6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2fd6b8:
    // 0x2fd6b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fd6bc:
    if (ctx->pc == 0x2FD6BCu) {
        ctx->pc = 0x2FD6BCu;
            // 0x2fd6bc: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x2FD6C0u;
        goto label_2fd6c0;
    }
    ctx->pc = 0x2FD6B8u;
    {
        const bool branch_taken_0x2fd6b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd6b8) {
            ctx->pc = 0x2FD6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6B8u;
            // 0x2fd6bc: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD6D4u;
            goto label_2fd6d4;
        }
    }
    ctx->pc = 0x2FD6C0u;
label_2fd6c0:
    // 0x2fd6c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd6c4:
    // 0x2fd6c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2fd6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2fd6c8:
    // 0x2fd6c8: 0x320f809  jalr        $t9
label_2fd6cc:
    if (ctx->pc == 0x2FD6CCu) {
        ctx->pc = 0x2FD6CCu;
            // 0x2fd6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6D0u;
        goto label_2fd6d0;
    }
    ctx->pc = 0x2FD6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD6D0u);
        ctx->pc = 0x2FD6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6C8u;
            // 0x2fd6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD6D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6D0u; }
            if (ctx->pc != 0x2FD6D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD6D0u;
label_2fd6d0:
    // 0x2fd6d0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2fd6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2fd6d4:
    // 0x2fd6d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fd6d8:
    // 0x2fd6d8: 0x92040050  lbu         $a0, 0x50($s0)
    ctx->pc = 0x2fd6d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2fd6dc:
    // 0x2fd6dc: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
label_2fd6e0:
    if (ctx->pc == 0x2FD6E0u) {
        ctx->pc = 0x2FD6E0u;
            // 0x2fd6e0: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2FD6E4u;
        goto label_2fd6e4;
    }
    ctx->pc = 0x2FD6DCu;
    {
        const bool branch_taken_0x2fd6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fd6dc) {
            ctx->pc = 0x2FD6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6DCu;
            // 0x2fd6e0: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD740u;
            goto label_2fd740;
        }
    }
    ctx->pc = 0x2FD6E4u;
label_2fd6e4:
    // 0x2fd6e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fd6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd6e8:
    // 0x2fd6e8: 0x5086000a  beql        $a0, $a2, . + 4 + (0xA << 2)
label_2fd6ec:
    if (ctx->pc == 0x2FD6ECu) {
        ctx->pc = 0x2FD6ECu;
            // 0x2fd6ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2FD6F0u;
        goto label_2fd6f0;
    }
    ctx->pc = 0x2FD6E8u;
    {
        const bool branch_taken_0x2fd6e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x2fd6e8) {
            ctx->pc = 0x2FD6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6E8u;
            // 0x2fd6ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD714u;
            goto label_2fd714;
        }
    }
    ctx->pc = 0x2FD6F0u;
label_2fd6f0:
    // 0x2fd6f0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_2fd6f4:
    if (ctx->pc == 0x2FD6F4u) {
        ctx->pc = 0x2FD6F4u;
            // 0x2fd6f4: 0x862804  sllv        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->pc = 0x2FD6F8u;
        goto label_2fd6f8;
    }
    ctx->pc = 0x2FD6F0u;
    {
        const bool branch_taken_0x2fd6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd6f0) {
            ctx->pc = 0x2FD6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6F0u;
            // 0x2fd6f4: 0x862804  sllv        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD700u;
            goto label_2fd700;
        }
    }
    ctx->pc = 0x2FD6F8u;
label_2fd6f8:
    // 0x2fd6f8: 0x10000022  b           . + 4 + (0x22 << 2)
label_2fd6fc:
    if (ctx->pc == 0x2FD6FCu) {
        ctx->pc = 0x2FD6FCu;
            // 0x2fd6fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2FD700u;
        goto label_2fd700;
    }
    ctx->pc = 0x2FD6F8u;
    {
        const bool branch_taken_0x2fd6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6F8u;
            // 0x2fd6fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6f8) {
            ctx->pc = 0x2FD784u;
            goto label_2fd784;
        }
    }
    ctx->pc = 0x2FD700u;
label_2fd700:
    // 0x2fd700: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2fd700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fd704:
    // 0x2fd704: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x2fd704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_2fd708:
    // 0x2fd708: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2fd708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2fd70c:
    // 0x2fd70c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2fd710:
    if (ctx->pc == 0x2FD710u) {
        ctx->pc = 0x2FD710u;
            // 0x2fd710: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD714u;
        goto label_2fd714;
    }
    ctx->pc = 0x2FD70Cu;
    {
        const bool branch_taken_0x2fd70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD70Cu;
            // 0x2fd710: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd70c) {
            ctx->pc = 0x2FD780u;
            goto label_2fd780;
        }
    }
    ctx->pc = 0x2FD714u;
label_2fd714:
    // 0x2fd714: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2fd714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2fd718:
    // 0x2fd718: 0x8ca400e0  lw          $a0, 0xE0($a1)
    ctx->pc = 0x2fd718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
label_2fd71c:
    // 0x2fd71c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fd71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2fd720:
    // 0x2fd720: 0xaca300e0  sw          $v1, 0xE0($a1)
    ctx->pc = 0x2fd720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 3));
label_2fd724:
    // 0x2fd724: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x2fd724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2fd728:
    // 0x2fd728: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2fd728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fd72c:
    // 0x2fd72c: 0x662804  sllv        $a1, $a2, $v1
    ctx->pc = 0x2fd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_2fd730:
    // 0x2fd730: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x2fd730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_2fd734:
    // 0x2fd734: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2fd734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2fd738:
    // 0x2fd738: 0x10000011  b           . + 4 + (0x11 << 2)
label_2fd73c:
    if (ctx->pc == 0x2FD73Cu) {
        ctx->pc = 0x2FD73Cu;
            // 0x2fd73c: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD740u;
        goto label_2fd740;
    }
    ctx->pc = 0x2FD738u;
    {
        const bool branch_taken_0x2fd738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD738u;
            // 0x2fd73c: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd738) {
            ctx->pc = 0x2FD780u;
            goto label_2fd780;
        }
    }
    ctx->pc = 0x2FD740u;
label_2fd740:
    // 0x2fd740: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2fd740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2fd744:
    // 0x2fd744: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2fd744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2fd748:
    // 0x2fd748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd74c:
    // 0x2fd74c: 0x8ce600e0  lw          $a2, 0xE0($a3)
    ctx->pc = 0x2fd74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
label_2fd750:
    // 0x2fd750: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2fd750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_2fd754:
    // 0x2fd754: 0xace500e0  sw          $a1, 0xE0($a3)
    ctx->pc = 0x2fd754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 5));
label_2fd758:
    // 0x2fd758: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2fd758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fd75c:
    // 0x2fd75c: 0x8cc500e0  lw          $a1, 0xE0($a2)
    ctx->pc = 0x2fd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
label_2fd760:
    // 0x2fd760: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2fd760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_2fd764:
    // 0x2fd764: 0xacc400e0  sw          $a0, 0xE0($a2)
    ctx->pc = 0x2fd764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 4));
label_2fd768:
    // 0x2fd768: 0x92050050  lbu         $a1, 0x50($s0)
    ctx->pc = 0x2fd768u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2fd76c:
    // 0x2fd76c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2fd76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fd770:
    // 0x2fd770: 0xa32804  sllv        $a1, $v1, $a1
    ctx->pc = 0x2fd770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_2fd774:
    // 0x2fd774: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x2fd774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_2fd778:
    // 0x2fd778: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2fd778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2fd77c:
    // 0x2fd77c: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x2fd77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
label_2fd780:
    // 0x2fd780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fd780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd784:
    // 0x2fd784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd788:
    // 0x2fd788: 0x3e00008  jr          $ra
label_2fd78c:
    if (ctx->pc == 0x2FD78Cu) {
        ctx->pc = 0x2FD78Cu;
            // 0x2fd78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FD790u;
        goto label_2fd790;
    }
    ctx->pc = 0x2FD788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD788u;
            // 0x2fd78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD790u;
label_2fd790:
    // 0x2fd790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fd790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fd794:
    // 0x2fd794: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x2fd794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_2fd798:
    // 0x2fd798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fd798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fd79c:
    // 0x2fd79c: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x2fd79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_2fd7a0:
    // 0x2fd7a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fd7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2fd7a4:
    // 0x2fd7a4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2fd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_2fd7a8:
    // 0x2fd7a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fd7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2fd7ac:
    // 0x2fd7ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fd7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fd7b0:
    // 0x2fd7b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fd7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2fd7b4:
    // 0x2fd7b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fd7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fd7b8:
    // 0x2fd7b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2fd7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2fd7bc:
    // 0x2fd7bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fd7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7c0:
    // 0x2fd7c0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2fd7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fd7c4:
    // 0x2fd7c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fd7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd7c8:
    // 0x2fd7c8: 0x8cd000c8  lw          $s0, 0xC8($a2)
    ctx->pc = 0x2fd7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
label_2fd7cc:
    // 0x2fd7cc: 0x90840050  lbu         $a0, 0x50($a0)
    ctx->pc = 0x2fd7ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
label_2fd7d0:
    // 0x2fd7d0: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x2fd7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
label_2fd7d4:
    // 0x2fd7d4: 0xc6020de4  lwc1        $f2, 0xDE4($s0)
    ctx->pc = 0x2fd7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fd7d8:
    // 0x2fd7d8: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x2fd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_2fd7dc:
    // 0x2fd7dc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2fd7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2fd7e0:
    // 0x2fd7e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2fd7e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2fd7e4:
    // 0x2fd7e4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2fd7e4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fd7e8:
    // 0x2fd7e8: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x2fd7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_2fd7ec:
    // 0x2fd7ec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2fd7ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2fd7f0:
    // 0x2fd7f0: 0x0  nop
    ctx->pc = 0x2fd7f0u;
    // NOP
label_2fd7f4:
    // 0x2fd7f4: 0x0  nop
    ctx->pc = 0x2fd7f4u;
    // NOP
label_2fd7f8:
    // 0x2fd7f8: 0xc0754b4  jal         func_1D52D0
label_2fd7fc:
    if (ctx->pc == 0x2FD7FCu) {
        ctx->pc = 0x2FD800u;
        goto label_2fd800;
    }
    ctx->pc = 0x2FD7F8u;
    SET_GPR_U32(ctx, 31, 0x2FD800u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD800u; }
        if (ctx->pc != 0x2FD800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD800u; }
        if (ctx->pc != 0x2FD800u) { return; }
    }
    ctx->pc = 0x2FD800u;
label_2fd800:
    // 0x2fd800: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x2fd800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_2fd804:
    // 0x2fd804: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2fd804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2fd808:
    // 0x2fd808: 0x3464f000  ori         $a0, $v1, 0xF000
    ctx->pc = 0x2fd808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_2fd80c:
    // 0x2fd80c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2fd80cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fd810:
    // 0x2fd810: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2fd810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_2fd814:
    // 0x2fd814: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2fd814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fd818:
    // 0x2fd818: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x2fd818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_2fd81c:
    // 0x2fd81c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fd820:
    // 0x2fd820: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2fd820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2fd824:
    // 0x2fd824: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2fd824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2fd828:
    // 0x2fd828: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2fd828u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_2fd82c:
    // 0x2fd82c: 0x0  nop
    ctx->pc = 0x2fd82cu;
    // NOP
label_2fd830:
    // 0x2fd830: 0x0  nop
    ctx->pc = 0x2fd830u;
    // NOP
label_2fd834:
    // 0x2fd834: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_2fd838:
    if (ctx->pc == 0x2FD838u) {
        ctx->pc = 0x2FD83Cu;
        goto label_2fd83c;
    }
    ctx->pc = 0x2FD834u;
    {
        const bool branch_taken_0x2fd834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fd834) {
            ctx->pc = 0x2FD840u;
            goto label_2fd840;
        }
    }
    ctx->pc = 0x2FD83Cu;
label_2fd83c:
    // 0x2fd83c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fd83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd840:
    // 0x2fd840: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2fd840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2fd844:
    // 0x2fd844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd848:
    // 0x2fd848: 0x5483002d  bnel        $a0, $v1, . + 4 + (0x2D << 2)
label_2fd84c:
    if (ctx->pc == 0x2FD84Cu) {
        ctx->pc = 0x2FD84Cu;
            // 0x2fd84c: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x2FD850u;
        goto label_2fd850;
    }
    ctx->pc = 0x2FD848u;
    {
        const bool branch_taken_0x2fd848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fd848) {
            ctx->pc = 0x2FD84Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD848u;
            // 0x2fd84c: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD900u;
            goto label_2fd900;
        }
    }
    ctx->pc = 0x2FD850u;
label_2fd850:
    // 0x2fd850: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x2fd850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_2fd854:
    // 0x2fd854: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2fd854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2fd858:
    // 0x2fd858: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2fd858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fd85c:
    // 0x2fd85c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2fd860:
    if (ctx->pc == 0x2FD860u) {
        ctx->pc = 0x2FD864u;
        goto label_2fd864;
    }
    ctx->pc = 0x2FD85Cu;
    {
        const bool branch_taken_0x2fd85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd85c) {
            ctx->pc = 0x2FD870u;
            goto label_2fd870;
        }
    }
    ctx->pc = 0x2FD864u;
label_2fd864:
    // 0x2fd864: 0x8ca300d0  lw          $v1, 0xD0($a1)
    ctx->pc = 0x2fd864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
label_2fd868:
    // 0x2fd868: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2fd868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_2fd86c:
    // 0x2fd86c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2fd86cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fd870:
    // 0x2fd870: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2fd874:
    if (ctx->pc == 0x2FD874u) {
        ctx->pc = 0x2FD878u;
        goto label_2fd878;
    }
    ctx->pc = 0x2FD870u;
    {
        const bool branch_taken_0x2fd870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd870) {
            ctx->pc = 0x2FD8FCu;
            goto label_2fd8fc;
        }
    }
    ctx->pc = 0x2FD878u;
label_2fd878:
    // 0x2fd878: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fd878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2fd87c:
    // 0x2fd87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fd87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fd880:
    // 0x2fd880: 0x0  nop
    ctx->pc = 0x2fd880u;
    // NOP
label_2fd884:
    // 0x2fd884: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2fd884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fd888:
    // 0x2fd888: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
label_2fd88c:
    if (ctx->pc == 0x2FD88Cu) {
        ctx->pc = 0x2FD88Cu;
            // 0x2fd88c: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x2FD890u;
        goto label_2fd890;
    }
    ctx->pc = 0x2FD888u;
    {
        const bool branch_taken_0x2fd888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd888) {
            ctx->pc = 0x2FD88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD888u;
            // 0x2fd88c: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD8DCu;
            goto label_2fd8dc;
        }
    }
    ctx->pc = 0x2FD890u;
label_2fd890:
    // 0x2fd890: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2fd890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fd894:
    // 0x2fd894: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_2fd898:
    if (ctx->pc == 0x2FD898u) {
        ctx->pc = 0x2FD89Cu;
        goto label_2fd89c;
    }
    ctx->pc = 0x2FD894u;
    {
        const bool branch_taken_0x2fd894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd894) {
            ctx->pc = 0x2FD8D8u;
            goto label_2fd8d8;
        }
    }
    ctx->pc = 0x2FD89Cu;
label_2fd89c:
    // 0x2fd89c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2fd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2fd8a0:
    // 0x2fd8a0: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_2fd8a4:
    if (ctx->pc == 0x2FD8A4u) {
        ctx->pc = 0x2FD8A4u;
            // 0x2fd8a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2FD8A8u;
        goto label_2fd8a8;
    }
    ctx->pc = 0x2FD8A0u;
    {
        const bool branch_taken_0x2fd8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd8a0) {
            ctx->pc = 0x2FD8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8A0u;
            // 0x2fd8a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD920u;
            goto label_2fd920;
        }
    }
    ctx->pc = 0x2FD8A8u;
label_2fd8a8:
    // 0x2fd8a8: 0x92430050  lbu         $v1, 0x50($s2)
    ctx->pc = 0x2fd8a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
label_2fd8ac:
    // 0x2fd8ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2fd8b0:
    // 0x2fd8b0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2fd8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_2fd8b4:
    // 0x2fd8b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2fd8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2fd8b8:
    // 0x2fd8b8: 0x26060fc0  addiu       $a2, $s0, 0xFC0
    ctx->pc = 0x2fd8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4032));
label_2fd8bc:
    // 0x2fd8bc: 0x26070ee0  addiu       $a3, $s0, 0xEE0
    ctx->pc = 0x2fd8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3808));
label_2fd8c0:
    // 0x2fd8c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2fd8c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd8c4:
    // 0x2fd8c4: 0x2465001d  addiu       $a1, $v1, 0x1D
    ctx->pc = 0x2fd8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 29));
label_2fd8c8:
    // 0x2fd8c8: 0xc0bb0e8  jal         func_2EC3A0
label_2fd8cc:
    if (ctx->pc == 0x2FD8CCu) {
        ctx->pc = 0x2FD8CCu;
            // 0x2fd8cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FD8D0u;
        goto label_2fd8d0;
    }
    ctx->pc = 0x2FD8C8u;
    SET_GPR_U32(ctx, 31, 0x2FD8D0u);
    ctx->pc = 0x2FD8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8C8u;
            // 0x2fd8cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8D0u; }
        if (ctx->pc != 0x2FD8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8D0u; }
        if (ctx->pc != 0x2FD8D0u) { return; }
    }
    ctx->pc = 0x2FD8D0u;
label_2fd8d0:
    // 0x2fd8d0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2fd8d4:
    if (ctx->pc == 0x2FD8D4u) {
        ctx->pc = 0x2FD8D4u;
            // 0x2fd8d4: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD8D8u;
        goto label_2fd8d8;
    }
    ctx->pc = 0x2FD8D0u;
    {
        const bool branch_taken_0x2fd8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8D0u;
            // 0x2fd8d4: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8d0) {
            ctx->pc = 0x2FD91Cu;
            goto label_2fd91c;
        }
    }
    ctx->pc = 0x2FD8D8u;
label_2fd8d8:
    // 0x2fd8d8: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2fd8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2fd8dc:
    // 0x2fd8dc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2fd8e0:
    if (ctx->pc == 0x2FD8E0u) {
        ctx->pc = 0x2FD8E4u;
        goto label_2fd8e4;
    }
    ctx->pc = 0x2FD8DCu;
    {
        const bool branch_taken_0x2fd8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd8dc) {
            ctx->pc = 0x2FD91Cu;
            goto label_2fd91c;
        }
    }
    ctx->pc = 0x2FD8E4u;
label_2fd8e4:
    // 0x2fd8e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd8e8:
    // 0x2fd8e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2fd8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2fd8ec:
    // 0x2fd8ec: 0x320f809  jalr        $t9
label_2fd8f0:
    if (ctx->pc == 0x2FD8F0u) {
        ctx->pc = 0x2FD8F0u;
            // 0x2fd8f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8F4u;
        goto label_2fd8f4;
    }
    ctx->pc = 0x2FD8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD8F4u);
        ctx->pc = 0x2FD8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8ECu;
            // 0x2fd8f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD8F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8F4u; }
            if (ctx->pc != 0x2FD8F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD8F4u;
label_2fd8f4:
    // 0x2fd8f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fd8f8:
    if (ctx->pc == 0x2FD8F8u) {
        ctx->pc = 0x2FD8F8u;
            // 0x2fd8f8: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x2FD8FCu;
        goto label_2fd8fc;
    }
    ctx->pc = 0x2FD8F4u;
    {
        const bool branch_taken_0x2fd8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8F4u;
            // 0x2fd8f8: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8f4) {
            ctx->pc = 0x2FD91Cu;
            goto label_2fd91c;
        }
    }
    ctx->pc = 0x2FD8FCu;
label_2fd8fc:
    // 0x2fd8fc: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2fd8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2fd900:
    // 0x2fd900: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2fd904:
    if (ctx->pc == 0x2FD904u) {
        ctx->pc = 0x2FD908u;
        goto label_2fd908;
    }
    ctx->pc = 0x2FD900u;
    {
        const bool branch_taken_0x2fd900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd900) {
            ctx->pc = 0x2FD91Cu;
            goto label_2fd91c;
        }
    }
    ctx->pc = 0x2FD908u;
label_2fd908:
    // 0x2fd908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd90c:
    // 0x2fd90c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2fd90cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2fd910:
    // 0x2fd910: 0x320f809  jalr        $t9
label_2fd914:
    if (ctx->pc == 0x2FD914u) {
        ctx->pc = 0x2FD914u;
            // 0x2fd914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD918u;
        goto label_2fd918;
    }
    ctx->pc = 0x2FD910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD918u);
        ctx->pc = 0x2FD914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD910u;
            // 0x2fd914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD918u; }
            if (ctx->pc != 0x2FD918u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD918u;
label_2fd918:
    // 0x2fd918: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x2fd918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_2fd91c:
    // 0x2fd91c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fd91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fd920:
    // 0x2fd920: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2fd920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fd924:
    // 0x2fd924: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fd924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fd928:
    // 0x2fd928: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fd928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd92c:
    // 0x2fd92c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fd92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd930:
    // 0x2fd930: 0x3e00008  jr          $ra
label_2fd934:
    if (ctx->pc == 0x2FD934u) {
        ctx->pc = 0x2FD934u;
            // 0x2fd934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FD938u;
        goto label_2fd938;
    }
    ctx->pc = 0x2FD930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD930u;
            // 0x2fd934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD938u;
label_2fd938:
    // 0x2fd938: 0x0  nop
    ctx->pc = 0x2fd938u;
    // NOP
label_2fd93c:
    // 0x2fd93c: 0x0  nop
    ctx->pc = 0x2fd93cu;
    // NOP
label_2fd940:
    // 0x2fd940: 0x3e00008  jr          $ra
label_2fd944:
    if (ctx->pc == 0x2FD944u) {
        ctx->pc = 0x2FD944u;
            // 0x2fd944: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2FD948u;
        goto label_2fd948;
    }
    ctx->pc = 0x2FD940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD940u;
            // 0x2fd944: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD948u;
label_2fd948:
    // 0x2fd948: 0x0  nop
    ctx->pc = 0x2fd948u;
    // NOP
label_2fd94c:
    // 0x2fd94c: 0x0  nop
    ctx->pc = 0x2fd94cu;
    // NOP
label_2fd950:
    // 0x2fd950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd954:
    // 0x2fd954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fd954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fd958:
    // 0x2fd958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd95c:
    // 0x2fd95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd960:
    // 0x2fd960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd964:
    // 0x2fd964: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fd968:
    if (ctx->pc == 0x2FD968u) {
        ctx->pc = 0x2FD968u;
            // 0x2fd968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD96Cu;
        goto label_2fd96c;
    }
    ctx->pc = 0x2FD964u;
    {
        const bool branch_taken_0x2fd964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD964u;
            // 0x2fd968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd964) {
            ctx->pc = 0x2FD9D0u;
            goto label_2fd9d0;
        }
    }
    ctx->pc = 0x2FD96Cu;
label_2fd96c:
    // 0x2fd96c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fd970:
    // 0x2fd970: 0x244237c0  addiu       $v0, $v0, 0x37C0
    ctx->pc = 0x2fd970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14272));
label_2fd974:
    // 0x2fd974: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fd978:
    if (ctx->pc == 0x2FD978u) {
        ctx->pc = 0x2FD978u;
            // 0x2fd978: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD97Cu;
        goto label_2fd97c;
    }
    ctx->pc = 0x2FD974u;
    {
        const bool branch_taken_0x2fd974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD974u;
            // 0x2fd978: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd974) {
            ctx->pc = 0x2FD9B8u;
            goto label_2fd9b8;
        }
    }
    ctx->pc = 0x2FD97Cu;
label_2fd97c:
    // 0x2fd97c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd980:
    // 0x2fd980: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fd980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fd984:
    // 0x2fd984: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fd988:
    if (ctx->pc == 0x2FD988u) {
        ctx->pc = 0x2FD988u;
            // 0x2fd988: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD98Cu;
        goto label_2fd98c;
    }
    ctx->pc = 0x2FD984u;
    {
        const bool branch_taken_0x2fd984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD984u;
            // 0x2fd988: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd984) {
            ctx->pc = 0x2FD9B8u;
            goto label_2fd9b8;
        }
    }
    ctx->pc = 0x2FD98Cu;
label_2fd98c:
    // 0x2fd98c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fd990:
    // 0x2fd990: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fd990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fd994:
    // 0x2fd994: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fd998:
    if (ctx->pc == 0x2FD998u) {
        ctx->pc = 0x2FD998u;
            // 0x2fd998: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD99Cu;
        goto label_2fd99c;
    }
    ctx->pc = 0x2FD994u;
    {
        const bool branch_taken_0x2fd994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD994u;
            // 0x2fd998: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd994) {
            ctx->pc = 0x2FD9B8u;
            goto label_2fd9b8;
        }
    }
    ctx->pc = 0x2FD99Cu;
label_2fd99c:
    // 0x2fd99c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fd99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fd9a0:
    // 0x2fd9a0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fd9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fd9a4:
    // 0x2fd9a4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fd9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fd9a8:
    // 0x2fd9a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd9ac:
    if (ctx->pc == 0x2FD9ACu) {
        ctx->pc = 0x2FD9ACu;
            // 0x2fd9ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD9B0u;
        goto label_2fd9b0;
    }
    ctx->pc = 0x2FD9A8u;
    {
        const bool branch_taken_0x2fd9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9A8u;
            // 0x2fd9ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd9a8) {
            ctx->pc = 0x2FD9B8u;
            goto label_2fd9b8;
        }
    }
    ctx->pc = 0x2FD9B0u;
label_2fd9b0:
    // 0x2fd9b0: 0xc07507c  jal         func_1D41F0
label_2fd9b4:
    if (ctx->pc == 0x2FD9B4u) {
        ctx->pc = 0x2FD9B4u;
            // 0x2fd9b4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FD9B8u;
        goto label_2fd9b8;
    }
    ctx->pc = 0x2FD9B0u;
    SET_GPR_U32(ctx, 31, 0x2FD9B8u);
    ctx->pc = 0x2FD9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9B0u;
            // 0x2fd9b4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD9B8u; }
        if (ctx->pc != 0x2FD9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD9B8u; }
        if (ctx->pc != 0x2FD9B8u) { return; }
    }
    ctx->pc = 0x2FD9B8u;
label_2fd9b8:
    // 0x2fd9b8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fd9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fd9bc:
    // 0x2fd9bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fd9bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fd9c0:
    // 0x2fd9c0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fd9c4:
    if (ctx->pc == 0x2FD9C4u) {
        ctx->pc = 0x2FD9C4u;
            // 0x2fd9c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9C8u;
        goto label_2fd9c8;
    }
    ctx->pc = 0x2FD9C0u;
    {
        const bool branch_taken_0x2fd9c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fd9c0) {
            ctx->pc = 0x2FD9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9C0u;
            // 0x2fd9c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD9D4u;
            goto label_2fd9d4;
        }
    }
    ctx->pc = 0x2FD9C8u;
label_2fd9c8:
    // 0x2fd9c8: 0xc0400a8  jal         func_1002A0
label_2fd9cc:
    if (ctx->pc == 0x2FD9CCu) {
        ctx->pc = 0x2FD9CCu;
            // 0x2fd9cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9D0u;
        goto label_2fd9d0;
    }
    ctx->pc = 0x2FD9C8u;
    SET_GPR_U32(ctx, 31, 0x2FD9D0u);
    ctx->pc = 0x2FD9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9C8u;
            // 0x2fd9cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD9D0u; }
        if (ctx->pc != 0x2FD9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD9D0u; }
        if (ctx->pc != 0x2FD9D0u) { return; }
    }
    ctx->pc = 0x2FD9D0u;
label_2fd9d0:
    // 0x2fd9d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fd9d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd9d4:
    // 0x2fd9d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd9d8:
    // 0x2fd9d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fd9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd9dc:
    // 0x2fd9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd9e0:
    // 0x2fd9e0: 0x3e00008  jr          $ra
label_2fd9e4:
    if (ctx->pc == 0x2FD9E4u) {
        ctx->pc = 0x2FD9E4u;
            // 0x2fd9e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FD9E8u;
        goto label_2fd9e8;
    }
    ctx->pc = 0x2FD9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9E0u;
            // 0x2fd9e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD9E8u;
label_2fd9e8:
    // 0x2fd9e8: 0x0  nop
    ctx->pc = 0x2fd9e8u;
    // NOP
label_2fd9ec:
    // 0x2fd9ec: 0x0  nop
    ctx->pc = 0x2fd9ecu;
    // NOP
label_2fd9f0:
    // 0x2fd9f0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2fd9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fd9f4:
    // 0x2fd9f4: 0x8ce500e0  lw          $a1, 0xE0($a3)
    ctx->pc = 0x2fd9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
label_2fd9f8:
    // 0x2fd9f8: 0x30a32000  andi        $v1, $a1, 0x2000
    ctx->pc = 0x2fd9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
label_2fd9fc:
    // 0x2fd9fc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_2fda00:
    if (ctx->pc == 0x2FDA00u) {
        ctx->pc = 0x2FDA00u;
            // 0x2fda00: 0x30a34000  andi        $v1, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->pc = 0x2FDA04u;
        goto label_2fda04;
    }
    ctx->pc = 0x2FD9FCu;
    {
        const bool branch_taken_0x2fd9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd9fc) {
            ctx->pc = 0x2FDA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9FCu;
            // 0x2fda00: 0x30a34000  andi        $v1, $a1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDA28u;
            goto label_2fda28;
        }
    }
    ctx->pc = 0x2FDA04u;
label_2fda04:
    // 0x2fda04: 0x8ce500e0  lw          $a1, 0xE0($a3)
    ctx->pc = 0x2fda04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
label_2fda08:
    // 0x2fda08: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2fda08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_2fda0c:
    // 0x2fda0c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fda0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2fda10:
    // 0x2fda10: 0xace300e0  sw          $v1, 0xE0($a3)
    ctx->pc = 0x2fda10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 3));
label_2fda14:
    // 0x2fda14: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2fda14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fda18:
    // 0x2fda18: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x2fda18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_2fda1c:
    // 0x2fda1c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2fda1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2fda20:
    // 0x2fda20: 0x10000013  b           . + 4 + (0x13 << 2)
label_2fda24:
    if (ctx->pc == 0x2FDA24u) {
        ctx->pc = 0x2FDA24u;
            // 0x2fda24: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDA28u;
        goto label_2fda28;
    }
    ctx->pc = 0x2FDA20u;
    {
        const bool branch_taken_0x2fda20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA20u;
            // 0x2fda24: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda20) {
            ctx->pc = 0x2FDA70u;
            goto label_2fda70;
        }
    }
    ctx->pc = 0x2FDA28u;
label_2fda28:
    // 0x2fda28: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_2fda2c:
    if (ctx->pc == 0x2FDA2Cu) {
        ctx->pc = 0x2FDA2Cu;
            // 0x2fda2c: 0x8ce300e0  lw          $v1, 0xE0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
        ctx->pc = 0x2FDA30u;
        goto label_2fda30;
    }
    ctx->pc = 0x2FDA28u;
    {
        const bool branch_taken_0x2fda28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fda28) {
            ctx->pc = 0x2FDA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA28u;
            // 0x2fda2c: 0x8ce300e0  lw          $v1, 0xE0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDA68u;
            goto label_2fda68;
        }
    }
    ctx->pc = 0x2FDA30u;
label_2fda30:
    // 0x2fda30: 0x8ce600e0  lw          $a2, 0xE0($a3)
    ctx->pc = 0x2fda30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
label_2fda34:
    // 0x2fda34: 0x2405dfff  addiu       $a1, $zero, -0x2001
    ctx->pc = 0x2fda34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_2fda38:
    // 0x2fda38: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2fda38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_2fda3c:
    // 0x2fda3c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2fda3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_2fda40:
    // 0x2fda40: 0xace500e0  sw          $a1, 0xE0($a3)
    ctx->pc = 0x2fda40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 5));
label_2fda44:
    // 0x2fda44: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2fda44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fda48:
    // 0x2fda48: 0x8cc500e0  lw          $a1, 0xE0($a2)
    ctx->pc = 0x2fda48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
label_2fda4c:
    // 0x2fda4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fda4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2fda50:
    // 0x2fda50: 0xacc300e0  sw          $v1, 0xE0($a2)
    ctx->pc = 0x2fda50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 3));
label_2fda54:
    // 0x2fda54: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2fda54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fda58:
    // 0x2fda58: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x2fda58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_2fda5c:
    // 0x2fda5c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2fda5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_2fda60:
    // 0x2fda60: 0x10000003  b           . + 4 + (0x3 << 2)
label_2fda64:
    if (ctx->pc == 0x2FDA64u) {
        ctx->pc = 0x2FDA64u;
            // 0x2fda64: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDA68u;
        goto label_2fda68;
    }
    ctx->pc = 0x2FDA60u;
    {
        const bool branch_taken_0x2fda60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA60u;
            // 0x2fda64: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda60) {
            ctx->pc = 0x2FDA70u;
            goto label_2fda70;
        }
    }
    ctx->pc = 0x2FDA68u;
label_2fda68:
    // 0x2fda68: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x2fda68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_2fda6c:
    // 0x2fda6c: 0xace300e0  sw          $v1, 0xE0($a3)
    ctx->pc = 0x2fda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 3));
label_2fda70:
    // 0x2fda70: 0x3e00008  jr          $ra
label_2fda74:
    if (ctx->pc == 0x2FDA74u) {
        ctx->pc = 0x2FDA78u;
        goto label_2fda78;
    }
    ctx->pc = 0x2FDA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDA78u;
label_2fda78:
    // 0x2fda78: 0x0  nop
    ctx->pc = 0x2fda78u;
    // NOP
label_2fda7c:
    // 0x2fda7c: 0x0  nop
    ctx->pc = 0x2fda7cu;
    // NOP
label_2fda80:
    // 0x2fda80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fda84:
    // 0x2fda84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fda84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fda88:
    // 0x2fda88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fda88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fda8c:
    // 0x2fda8c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2fda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fda90:
    // 0x2fda90: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x2fda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_2fda94:
    // 0x2fda94: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2fda94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2fda98:
    // 0x2fda98: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2fda98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fda9c:
    // 0x2fda9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2fdaa0:
    if (ctx->pc == 0x2FDAA0u) {
        ctx->pc = 0x2FDAA0u;
            // 0x2fdaa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDAA4u;
        goto label_2fdaa4;
    }
    ctx->pc = 0x2FDA9Cu;
    {
        const bool branch_taken_0x2fda9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA9Cu;
            // 0x2fdaa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda9c) {
            ctx->pc = 0x2FDAB0u;
            goto label_2fdab0;
        }
    }
    ctx->pc = 0x2FDAA4u;
label_2fdaa4:
    // 0x2fdaa4: 0x8ca300d0  lw          $v1, 0xD0($a1)
    ctx->pc = 0x2fdaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
label_2fdaa8:
    // 0x2fdaa8: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2fdaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_2fdaac:
    // 0x2fdaac: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2fdaacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fdab0:
    // 0x2fdab0: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
label_2fdab4:
    if (ctx->pc == 0x2FDAB4u) {
        ctx->pc = 0x2FDAB4u;
            // 0x2fdab4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2FDAB8u;
        goto label_2fdab8;
    }
    ctx->pc = 0x2FDAB0u;
    {
        const bool branch_taken_0x2fdab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdab0) {
            ctx->pc = 0x2FDAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAB0u;
            // 0x2fdab4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDB58u;
            goto label_2fdb58;
        }
    }
    ctx->pc = 0x2FDAB8u;
label_2fdab8:
    // 0x2fdab8: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x2fdab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_2fdabc:
    // 0x2fdabc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fdac0:
    // 0x2fdac0: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x2fdac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2fdac4:
    // 0x2fdac4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_2fdac8:
    if (ctx->pc == 0x2FDAC8u) {
        ctx->pc = 0x2FDAC8u;
            // 0x2fdac8: 0x8ca400e0  lw          $a0, 0xE0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
        ctx->pc = 0x2FDACCu;
        goto label_2fdacc;
    }
    ctx->pc = 0x2FDAC4u;
    {
        const bool branch_taken_0x2fdac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fdac4) {
            ctx->pc = 0x2FDAC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAC4u;
            // 0x2fdac8: 0x8ca400e0  lw          $a0, 0xE0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDAECu;
            goto label_2fdaec;
        }
    }
    ctx->pc = 0x2FDACCu;
label_2fdacc:
    // 0x2fdacc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_2fdad0:
    if (ctx->pc == 0x2FDAD0u) {
        ctx->pc = 0x2FDAD0u;
            // 0x2fdad0: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->pc = 0x2FDAD4u;
        goto label_2fdad4;
    }
    ctx->pc = 0x2FDACCu;
    {
        const bool branch_taken_0x2fdacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdacc) {
            ctx->pc = 0x2FDAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDACCu;
            // 0x2fdad0: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDADCu;
            goto label_2fdadc;
        }
    }
    ctx->pc = 0x2FDAD4u;
label_2fdad4:
    // 0x2fdad4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2fdad8:
    if (ctx->pc == 0x2FDAD8u) {
        ctx->pc = 0x2FDADCu;
        goto label_2fdadc;
    }
    ctx->pc = 0x2FDAD4u;
    {
        const bool branch_taken_0x2fdad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdad4) {
            ctx->pc = 0x2FDB54u;
            goto label_2fdb54;
        }
    }
    ctx->pc = 0x2FDADCu;
label_2fdadc:
    // 0x2fdadc: 0xc0761c8  jal         func_1D8720
label_2fdae0:
    if (ctx->pc == 0x2FDAE0u) {
        ctx->pc = 0x2FDAE4u;
        goto label_2fdae4;
    }
    ctx->pc = 0x2FDADCu;
    SET_GPR_U32(ctx, 31, 0x2FDAE4u);
    ctx->pc = 0x1D8720u;
    if (runtime->hasFunction(0x1D8720u)) {
        auto targetFn = runtime->lookupFunction(0x1D8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAE4u; }
        if (ctx->pc != 0x2FDAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAE4u; }
        if (ctx->pc != 0x2FDAE4u) { return; }
    }
    ctx->pc = 0x2FDAE4u;
label_2fdae4:
    // 0x2fdae4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2fdae8:
    if (ctx->pc == 0x2FDAE8u) {
        ctx->pc = 0x2FDAECu;
        goto label_2fdaec;
    }
    ctx->pc = 0x2FDAE4u;
    {
        const bool branch_taken_0x2fdae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdae4) {
            ctx->pc = 0x2FDB54u;
            goto label_2fdb54;
        }
    }
    ctx->pc = 0x2FDAECu;
label_2fdaec:
    // 0x2fdaec: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x2fdaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_2fdaf0:
    // 0x2fdaf0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2fdaf4:
    if (ctx->pc == 0x2FDAF4u) {
        ctx->pc = 0x2FDAF4u;
            // 0x2fdaf4: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->pc = 0x2FDAF8u;
        goto label_2fdaf8;
    }
    ctx->pc = 0x2FDAF0u;
    {
        const bool branch_taken_0x2fdaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdaf0) {
            ctx->pc = 0x2FDAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAF0u;
            // 0x2fdaf4: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDB08u;
            goto label_2fdb08;
        }
    }
    ctx->pc = 0x2FDAF8u;
label_2fdaf8:
    // 0x2fdaf8: 0xc0761c8  jal         func_1D8720
label_2fdafc:
    if (ctx->pc == 0x2FDAFCu) {
        ctx->pc = 0x2FDAFCu;
            // 0x2fdafc: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->pc = 0x2FDB00u;
        goto label_2fdb00;
    }
    ctx->pc = 0x2FDAF8u;
    SET_GPR_U32(ctx, 31, 0x2FDB00u);
    ctx->pc = 0x2FDAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAF8u;
            // 0x2fdafc: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8720u;
    if (runtime->hasFunction(0x1D8720u)) {
        auto targetFn = runtime->lookupFunction(0x1D8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB00u; }
        if (ctx->pc != 0x2FDB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB00u; }
        if (ctx->pc != 0x2FDB00u) { return; }
    }
    ctx->pc = 0x2FDB00u;
label_2fdb00:
    // 0x2fdb00: 0x10000014  b           . + 4 + (0x14 << 2)
label_2fdb04:
    if (ctx->pc == 0x2FDB04u) {
        ctx->pc = 0x2FDB08u;
        goto label_2fdb08;
    }
    ctx->pc = 0x2FDB00u;
    {
        const bool branch_taken_0x2fdb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdb00) {
            ctx->pc = 0x2FDB54u;
            goto label_2fdb54;
        }
    }
    ctx->pc = 0x2FDB08u;
label_2fdb08:
    // 0x2fdb08: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_2fdb0c:
    if (ctx->pc == 0x2FDB0Cu) {
        ctx->pc = 0x2FDB0Cu;
            // 0x2fdb0c: 0x30838000  andi        $v1, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->pc = 0x2FDB10u;
        goto label_2fdb10;
    }
    ctx->pc = 0x2FDB08u;
    {
        const bool branch_taken_0x2fdb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdb08) {
            ctx->pc = 0x2FDB0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB08u;
            // 0x2fdb0c: 0x30838000  andi        $v1, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDB2Cu;
            goto label_2fdb2c;
        }
    }
    ctx->pc = 0x2FDB10u;
label_2fdb10:
    // 0x2fdb10: 0xc0761c8  jal         func_1D8720
label_2fdb14:
    if (ctx->pc == 0x2FDB14u) {
        ctx->pc = 0x2FDB14u;
            // 0x2fdb14: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->pc = 0x2FDB18u;
        goto label_2fdb18;
    }
    ctx->pc = 0x2FDB10u;
    SET_GPR_U32(ctx, 31, 0x2FDB18u);
    ctx->pc = 0x2FDB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB10u;
            // 0x2fdb14: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8720u;
    if (runtime->hasFunction(0x1D8720u)) {
        auto targetFn = runtime->lookupFunction(0x1D8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB18u; }
        if (ctx->pc != 0x2FDB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB18u; }
        if (ctx->pc != 0x2FDB18u) { return; }
    }
    ctx->pc = 0x2FDB18u;
label_2fdb18:
    // 0x2fdb18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fdb1c:
    // 0x2fdb1c: 0xc0761c8  jal         func_1D8720
label_2fdb20:
    if (ctx->pc == 0x2FDB20u) {
        ctx->pc = 0x2FDB20u;
            // 0x2fdb20: 0x8c4400c8  lw          $a0, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->pc = 0x2FDB24u;
        goto label_2fdb24;
    }
    ctx->pc = 0x2FDB1Cu;
    SET_GPR_U32(ctx, 31, 0x2FDB24u);
    ctx->pc = 0x2FDB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB1Cu;
            // 0x2fdb20: 0x8c4400c8  lw          $a0, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8720u;
    if (runtime->hasFunction(0x1D8720u)) {
        auto targetFn = runtime->lookupFunction(0x1D8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB24u; }
        if (ctx->pc != 0x2FDB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB24u; }
        if (ctx->pc != 0x2FDB24u) { return; }
    }
    ctx->pc = 0x2FDB24u;
label_2fdb24:
    // 0x2fdb24: 0x1000000b  b           . + 4 + (0xB << 2)
label_2fdb28:
    if (ctx->pc == 0x2FDB28u) {
        ctx->pc = 0x2FDB2Cu;
        goto label_2fdb2c;
    }
    ctx->pc = 0x2FDB24u;
    {
        const bool branch_taken_0x2fdb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdb24) {
            ctx->pc = 0x2FDB54u;
            goto label_2fdb54;
        }
    }
    ctx->pc = 0x2FDB2Cu;
label_2fdb2c:
    // 0x2fdb2c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2fdb30:
    if (ctx->pc == 0x2FDB30u) {
        ctx->pc = 0x2FDB34u;
        goto label_2fdb34;
    }
    ctx->pc = 0x2FDB2Cu;
    {
        const bool branch_taken_0x2fdb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdb2c) {
            ctx->pc = 0x2FDB54u;
            goto label_2fdb54;
        }
    }
    ctx->pc = 0x2FDB34u;
label_2fdb34:
    // 0x2fdb34: 0xc0761c8  jal         func_1D8720
label_2fdb38:
    if (ctx->pc == 0x2FDB38u) {
        ctx->pc = 0x2FDB38u;
            // 0x2fdb38: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->pc = 0x2FDB3Cu;
        goto label_2fdb3c;
    }
    ctx->pc = 0x2FDB34u;
    SET_GPR_U32(ctx, 31, 0x2FDB3Cu);
    ctx->pc = 0x2FDB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB34u;
            // 0x2fdb38: 0x8ca400c8  lw          $a0, 0xC8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8720u;
    if (runtime->hasFunction(0x1D8720u)) {
        auto targetFn = runtime->lookupFunction(0x1D8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB3Cu; }
        if (ctx->pc != 0x2FDB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB3Cu; }
        if (ctx->pc != 0x2FDB3Cu) { return; }
    }
    ctx->pc = 0x2FDB3Cu;
label_2fdb3c:
    // 0x2fdb3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fdb40:
    // 0x2fdb40: 0xc0761c8  jal         func_1D8720
label_2fdb44:
    if (ctx->pc == 0x2FDB44u) {
        ctx->pc = 0x2FDB44u;
            // 0x2fdb44: 0x8c4400c8  lw          $a0, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->pc = 0x2FDB48u;
        goto label_2fdb48;
    }
    ctx->pc = 0x2FDB40u;
    SET_GPR_U32(ctx, 31, 0x2FDB48u);
    ctx->pc = 0x2FDB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB40u;
            // 0x2fdb44: 0x8c4400c8  lw          $a0, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8720u;
    if (runtime->hasFunction(0x1D8720u)) {
        auto targetFn = runtime->lookupFunction(0x1D8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB48u; }
        if (ctx->pc != 0x2FDB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB48u; }
        if (ctx->pc != 0x2FDB48u) { return; }
    }
    ctx->pc = 0x2FDB48u;
label_2fdb48:
    // 0x2fdb48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fdb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fdb4c:
    // 0x2fdb4c: 0xc0761c8  jal         func_1D8720
label_2fdb50:
    if (ctx->pc == 0x2FDB50u) {
        ctx->pc = 0x2FDB50u;
            // 0x2fdb50: 0x8c4400c8  lw          $a0, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->pc = 0x2FDB54u;
        goto label_2fdb54;
    }
    ctx->pc = 0x2FDB4Cu;
    SET_GPR_U32(ctx, 31, 0x2FDB54u);
    ctx->pc = 0x2FDB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB4Cu;
            // 0x2fdb50: 0x8c4400c8  lw          $a0, 0xC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8720u;
    if (runtime->hasFunction(0x1D8720u)) {
        auto targetFn = runtime->lookupFunction(0x1D8720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB54u; }
        if (ctx->pc != 0x2FDB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8720_0x1d8720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB54u; }
        if (ctx->pc != 0x2FDB54u) { return; }
    }
    ctx->pc = 0x2FDB54u;
label_2fdb54:
    // 0x2fdb54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdb58:
    // 0x2fdb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdb5c:
    // 0x2fdb5c: 0x3e00008  jr          $ra
label_2fdb60:
    if (ctx->pc == 0x2FDB60u) {
        ctx->pc = 0x2FDB60u;
            // 0x2fdb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FDB64u;
        goto label_2fdb64;
    }
    ctx->pc = 0x2FDB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB5Cu;
            // 0x2fdb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDB64u;
label_2fdb64:
    // 0x2fdb64: 0x0  nop
    ctx->pc = 0x2fdb64u;
    // NOP
label_2fdb68:
    // 0x2fdb68: 0x0  nop
    ctx->pc = 0x2fdb68u;
    // NOP
label_2fdb6c:
    // 0x2fdb6c: 0x0  nop
    ctx->pc = 0x2fdb6cu;
    // NOP
label_2fdb70:
    // 0x2fdb70: 0x3e00008  jr          $ra
label_2fdb74:
    if (ctx->pc == 0x2FDB74u) {
        ctx->pc = 0x2FDB74u;
            // 0x2fdb74: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2FDB78u;
        goto label_2fdb78;
    }
    ctx->pc = 0x2FDB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB70u;
            // 0x2fdb74: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDB78u;
label_2fdb78:
    // 0x2fdb78: 0x0  nop
    ctx->pc = 0x2fdb78u;
    // NOP
label_2fdb7c:
    // 0x2fdb7c: 0x0  nop
    ctx->pc = 0x2fdb7cu;
    // NOP
label_2fdb80:
    // 0x2fdb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fdb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fdb84:
    // 0x2fdb84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fdb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fdb88:
    // 0x2fdb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fdb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fdb8c:
    // 0x2fdb8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fdb90:
    // 0x2fdb90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fdb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb94:
    // 0x2fdb94: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fdb98:
    if (ctx->pc == 0x2FDB98u) {
        ctx->pc = 0x2FDB98u;
            // 0x2fdb98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB9Cu;
        goto label_2fdb9c;
    }
    ctx->pc = 0x2FDB94u;
    {
        const bool branch_taken_0x2fdb94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB94u;
            // 0x2fdb98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb94) {
            ctx->pc = 0x2FDC00u;
            goto label_2fdc00;
        }
    }
    ctx->pc = 0x2FDB9Cu;
label_2fdb9c:
    // 0x2fdb9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fdba0:
    // 0x2fdba0: 0x24423810  addiu       $v0, $v0, 0x3810
    ctx->pc = 0x2fdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14352));
label_2fdba4:
    // 0x2fdba4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fdba8:
    if (ctx->pc == 0x2FDBA8u) {
        ctx->pc = 0x2FDBA8u;
            // 0x2fdba8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDBACu;
        goto label_2fdbac;
    }
    ctx->pc = 0x2FDBA4u;
    {
        const bool branch_taken_0x2fdba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBA4u;
            // 0x2fdba8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdba4) {
            ctx->pc = 0x2FDBE8u;
            goto label_2fdbe8;
        }
    }
    ctx->pc = 0x2FDBACu;
label_2fdbac:
    // 0x2fdbac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdbb0:
    // 0x2fdbb0: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x2fdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
label_2fdbb4:
    // 0x2fdbb4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fdbb8:
    if (ctx->pc == 0x2FDBB8u) {
        ctx->pc = 0x2FDBB8u;
            // 0x2fdbb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDBBCu;
        goto label_2fdbbc;
    }
    ctx->pc = 0x2FDBB4u;
    {
        const bool branch_taken_0x2fdbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBB4u;
            // 0x2fdbb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbb4) {
            ctx->pc = 0x2FDBE8u;
            goto label_2fdbe8;
        }
    }
    ctx->pc = 0x2FDBBCu;
label_2fdbbc:
    // 0x2fdbbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdbc0:
    // 0x2fdbc0: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fdbc4:
    // 0x2fdbc4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fdbc8:
    if (ctx->pc == 0x2FDBC8u) {
        ctx->pc = 0x2FDBC8u;
            // 0x2fdbc8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDBCCu;
        goto label_2fdbcc;
    }
    ctx->pc = 0x2FDBC4u;
    {
        const bool branch_taken_0x2fdbc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBC4u;
            // 0x2fdbc8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbc4) {
            ctx->pc = 0x2FDBE8u;
            goto label_2fdbe8;
        }
    }
    ctx->pc = 0x2FDBCCu;
label_2fdbcc:
    // 0x2fdbcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fdbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fdbd0:
    // 0x2fdbd0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fdbd4:
    // 0x2fdbd4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fdbd8:
    // 0x2fdbd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fdbdc:
    if (ctx->pc == 0x2FDBDCu) {
        ctx->pc = 0x2FDBDCu;
            // 0x2fdbdc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDBE0u;
        goto label_2fdbe0;
    }
    ctx->pc = 0x2FDBD8u;
    {
        const bool branch_taken_0x2fdbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBD8u;
            // 0x2fdbdc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbd8) {
            ctx->pc = 0x2FDBE8u;
            goto label_2fdbe8;
        }
    }
    ctx->pc = 0x2FDBE0u;
label_2fdbe0:
    // 0x2fdbe0: 0xc07507c  jal         func_1D41F0
label_2fdbe4:
    if (ctx->pc == 0x2FDBE4u) {
        ctx->pc = 0x2FDBE4u;
            // 0x2fdbe4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FDBE8u;
        goto label_2fdbe8;
    }
    ctx->pc = 0x2FDBE0u;
    SET_GPR_U32(ctx, 31, 0x2FDBE8u);
    ctx->pc = 0x2FDBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBE0u;
            // 0x2fdbe4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDBE8u; }
        if (ctx->pc != 0x2FDBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDBE8u; }
        if (ctx->pc != 0x2FDBE8u) { return; }
    }
    ctx->pc = 0x2FDBE8u;
label_2fdbe8:
    // 0x2fdbe8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fdbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fdbec:
    // 0x2fdbec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fdbecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fdbf0:
    // 0x2fdbf0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fdbf4:
    if (ctx->pc == 0x2FDBF4u) {
        ctx->pc = 0x2FDBF4u;
            // 0x2fdbf4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBF8u;
        goto label_2fdbf8;
    }
    ctx->pc = 0x2FDBF0u;
    {
        const bool branch_taken_0x2fdbf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fdbf0) {
            ctx->pc = 0x2FDBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBF0u;
            // 0x2fdbf4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDC04u;
            goto label_2fdc04;
        }
    }
    ctx->pc = 0x2FDBF8u;
label_2fdbf8:
    // 0x2fdbf8: 0xc0400a8  jal         func_1002A0
label_2fdbfc:
    if (ctx->pc == 0x2FDBFCu) {
        ctx->pc = 0x2FDBFCu;
            // 0x2fdbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC00u;
        goto label_2fdc00;
    }
    ctx->pc = 0x2FDBF8u;
    SET_GPR_U32(ctx, 31, 0x2FDC00u);
    ctx->pc = 0x2FDBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBF8u;
            // 0x2fdbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC00u; }
        if (ctx->pc != 0x2FDC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDC00u; }
        if (ctx->pc != 0x2FDC00u) { return; }
    }
    ctx->pc = 0x2FDC00u;
label_2fdc00:
    // 0x2fdc00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fdc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdc04:
    // 0x2fdc04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fdc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fdc08:
    // 0x2fdc08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdc0c:
    // 0x2fdc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdc10:
    // 0x2fdc10: 0x3e00008  jr          $ra
label_2fdc14:
    if (ctx->pc == 0x2FDC14u) {
        ctx->pc = 0x2FDC14u;
            // 0x2fdc14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FDC18u;
        goto label_2fdc18;
    }
    ctx->pc = 0x2FDC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC10u;
            // 0x2fdc14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDC18u;
label_2fdc18:
    // 0x2fdc18: 0x0  nop
    ctx->pc = 0x2fdc18u;
    // NOP
label_2fdc1c:
    // 0x2fdc1c: 0x0  nop
    ctx->pc = 0x2fdc1cu;
    // NOP
label_2fdc20:
    // 0x2fdc20: 0x3e00008  jr          $ra
label_2fdc24:
    if (ctx->pc == 0x2FDC24u) {
        ctx->pc = 0x2FDC28u;
        goto label_2fdc28;
    }
    ctx->pc = 0x2FDC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDC28u;
label_2fdc28:
    // 0x2fdc28: 0x0  nop
    ctx->pc = 0x2fdc28u;
    // NOP
label_2fdc2c:
    // 0x2fdc2c: 0x0  nop
    ctx->pc = 0x2fdc2cu;
    // NOP
label_2fdc30:
    // 0x2fdc30: 0x3e00008  jr          $ra
label_2fdc34:
    if (ctx->pc == 0x2FDC34u) {
        ctx->pc = 0x2FDC34u;
            // 0x2fdc34: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2FDC38u;
        goto label_2fdc38;
    }
    ctx->pc = 0x2FDC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC30u;
            // 0x2fdc34: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDC38u;
label_2fdc38:
    // 0x2fdc38: 0x0  nop
    ctx->pc = 0x2fdc38u;
    // NOP
label_2fdc3c:
    // 0x2fdc3c: 0x0  nop
    ctx->pc = 0x2fdc3cu;
    // NOP
label_2fdc40:
    // 0x2fdc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fdc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fdc44:
    // 0x2fdc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fdc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fdc48:
    // 0x2fdc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fdc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fdc4c:
    // 0x2fdc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fdc50:
    // 0x2fdc50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fdc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fdc54:
    // 0x2fdc54: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fdc58:
    if (ctx->pc == 0x2FDC58u) {
        ctx->pc = 0x2FDC58u;
            // 0x2fdc58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC5Cu;
        goto label_2fdc5c;
    }
    ctx->pc = 0x2FDC54u;
    {
        const bool branch_taken_0x2fdc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC54u;
            // 0x2fdc58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc54) {
            ctx->pc = 0x2FDCC0u;
            goto label_2fdcc0;
        }
    }
    ctx->pc = 0x2FDC5Cu;
label_2fdc5c:
    // 0x2fdc5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fdc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fdc60:
    // 0x2fdc60: 0x24423860  addiu       $v0, $v0, 0x3860
    ctx->pc = 0x2fdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14432));
label_2fdc64:
    // 0x2fdc64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fdc68:
    if (ctx->pc == 0x2FDC68u) {
        ctx->pc = 0x2FDC68u;
            // 0x2fdc68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDC6Cu;
        goto label_2fdc6c;
    }
    ctx->pc = 0x2FDC64u;
    {
        const bool branch_taken_0x2fdc64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC64u;
            // 0x2fdc68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc64) {
            ctx->pc = 0x2FDCA8u;
            goto label_2fdca8;
        }
    }
    ctx->pc = 0x2FDC6Cu;
label_2fdc6c:
    // 0x2fdc6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdc70:
    // 0x2fdc70: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x2fdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_2fdc74:
    // 0x2fdc74: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fdc78:
    if (ctx->pc == 0x2FDC78u) {
        ctx->pc = 0x2FDC78u;
            // 0x2fdc78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDC7Cu;
        goto label_2fdc7c;
    }
    ctx->pc = 0x2FDC74u;
    {
        const bool branch_taken_0x2fdc74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC74u;
            // 0x2fdc78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc74) {
            ctx->pc = 0x2FDCA8u;
            goto label_2fdca8;
        }
    }
    ctx->pc = 0x2FDC7Cu;
label_2fdc7c:
    // 0x2fdc7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdc80:
    // 0x2fdc80: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fdc84:
    // 0x2fdc84: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fdc88:
    if (ctx->pc == 0x2FDC88u) {
        ctx->pc = 0x2FDC88u;
            // 0x2fdc88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDC8Cu;
        goto label_2fdc8c;
    }
    ctx->pc = 0x2FDC84u;
    {
        const bool branch_taken_0x2fdc84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC84u;
            // 0x2fdc88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc84) {
            ctx->pc = 0x2FDCA8u;
            goto label_2fdca8;
        }
    }
    ctx->pc = 0x2FDC8Cu;
label_2fdc8c:
    // 0x2fdc8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fdc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fdc90:
    // 0x2fdc90: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fdc94:
    // 0x2fdc94: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fdc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fdc98:
    // 0x2fdc98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fdc9c:
    if (ctx->pc == 0x2FDC9Cu) {
        ctx->pc = 0x2FDC9Cu;
            // 0x2fdc9c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDCA0u;
        goto label_2fdca0;
    }
    ctx->pc = 0x2FDC98u;
    {
        const bool branch_taken_0x2fdc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC98u;
            // 0x2fdc9c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc98) {
            ctx->pc = 0x2FDCA8u;
            goto label_2fdca8;
        }
    }
    ctx->pc = 0x2FDCA0u;
label_2fdca0:
    // 0x2fdca0: 0xc07507c  jal         func_1D41F0
label_2fdca4:
    if (ctx->pc == 0x2FDCA4u) {
        ctx->pc = 0x2FDCA4u;
            // 0x2fdca4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FDCA8u;
        goto label_2fdca8;
    }
    ctx->pc = 0x2FDCA0u;
    SET_GPR_U32(ctx, 31, 0x2FDCA8u);
    ctx->pc = 0x2FDCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCA0u;
            // 0x2fdca4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCA8u; }
        if (ctx->pc != 0x2FDCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCA8u; }
        if (ctx->pc != 0x2FDCA8u) { return; }
    }
    ctx->pc = 0x2FDCA8u;
label_2fdca8:
    // 0x2fdca8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fdca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fdcac:
    // 0x2fdcac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fdcacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fdcb0:
    // 0x2fdcb0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fdcb4:
    if (ctx->pc == 0x2FDCB4u) {
        ctx->pc = 0x2FDCB4u;
            // 0x2fdcb4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCB8u;
        goto label_2fdcb8;
    }
    ctx->pc = 0x2FDCB0u;
    {
        const bool branch_taken_0x2fdcb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fdcb0) {
            ctx->pc = 0x2FDCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCB0u;
            // 0x2fdcb4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDCC4u;
            goto label_2fdcc4;
        }
    }
    ctx->pc = 0x2FDCB8u;
label_2fdcb8:
    // 0x2fdcb8: 0xc0400a8  jal         func_1002A0
label_2fdcbc:
    if (ctx->pc == 0x2FDCBCu) {
        ctx->pc = 0x2FDCBCu;
            // 0x2fdcbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCC0u;
        goto label_2fdcc0;
    }
    ctx->pc = 0x2FDCB8u;
    SET_GPR_U32(ctx, 31, 0x2FDCC0u);
    ctx->pc = 0x2FDCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCB8u;
            // 0x2fdcbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCC0u; }
        if (ctx->pc != 0x2FDCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDCC0u; }
        if (ctx->pc != 0x2FDCC0u) { return; }
    }
    ctx->pc = 0x2FDCC0u;
label_2fdcc0:
    // 0x2fdcc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fdcc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdcc4:
    // 0x2fdcc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fdcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fdcc8:
    // 0x2fdcc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdcc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdccc:
    // 0x2fdccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdcccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdcd0:
    // 0x2fdcd0: 0x3e00008  jr          $ra
label_2fdcd4:
    if (ctx->pc == 0x2FDCD4u) {
        ctx->pc = 0x2FDCD4u;
            // 0x2fdcd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FDCD8u;
        goto label_2fdcd8;
    }
    ctx->pc = 0x2FDCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCD0u;
            // 0x2fdcd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDCD8u;
label_2fdcd8:
    // 0x2fdcd8: 0x0  nop
    ctx->pc = 0x2fdcd8u;
    // NOP
label_2fdcdc:
    // 0x2fdcdc: 0x0  nop
    ctx->pc = 0x2fdcdcu;
    // NOP
label_2fdce0:
    // 0x2fdce0: 0x3e00008  jr          $ra
label_2fdce4:
    if (ctx->pc == 0x2FDCE4u) {
        ctx->pc = 0x2FDCE4u;
            // 0x2fdce4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x2FDCE8u;
        goto label_2fdce8;
    }
    ctx->pc = 0x2FDCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCE0u;
            // 0x2fdce4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDCE8u;
label_2fdce8:
    // 0x2fdce8: 0x0  nop
    ctx->pc = 0x2fdce8u;
    // NOP
label_2fdcec:
    // 0x2fdcec: 0x0  nop
    ctx->pc = 0x2fdcecu;
    // NOP
label_2fdcf0:
    // 0x2fdcf0: 0x3e00008  jr          $ra
label_2fdcf4:
    if (ctx->pc == 0x2FDCF4u) {
        ctx->pc = 0x2FDCF4u;
            // 0x2fdcf4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2FDCF8u;
        goto label_2fdcf8;
    }
    ctx->pc = 0x2FDCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDCF0u;
            // 0x2fdcf4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDCF8u;
label_2fdcf8:
    // 0x2fdcf8: 0x0  nop
    ctx->pc = 0x2fdcf8u;
    // NOP
label_2fdcfc:
    // 0x2fdcfc: 0x0  nop
    ctx->pc = 0x2fdcfcu;
    // NOP
label_2fdd00:
    // 0x2fdd00: 0x3e00008  jr          $ra
label_2fdd04:
    if (ctx->pc == 0x2FDD04u) {
        ctx->pc = 0x2FDD04u;
            // 0x2fdd04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FDD08u;
        goto label_2fdd08;
    }
    ctx->pc = 0x2FDD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD00u;
            // 0x2fdd04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDD08u;
label_2fdd08:
    // 0x2fdd08: 0x0  nop
    ctx->pc = 0x2fdd08u;
    // NOP
label_2fdd0c:
    // 0x2fdd0c: 0x0  nop
    ctx->pc = 0x2fdd0cu;
    // NOP
label_2fdd10:
    // 0x2fdd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fdd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fdd14:
    // 0x2fdd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fdd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fdd18:
    // 0x2fdd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fdd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fdd1c:
    // 0x2fdd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fdd20:
    // 0x2fdd20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fdd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd24:
    // 0x2fdd24: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fdd28:
    if (ctx->pc == 0x2FDD28u) {
        ctx->pc = 0x2FDD28u;
            // 0x2fdd28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD2Cu;
        goto label_2fdd2c;
    }
    ctx->pc = 0x2FDD24u;
    {
        const bool branch_taken_0x2fdd24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD24u;
            // 0x2fdd28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd24) {
            ctx->pc = 0x2FDD90u;
            goto label_2fdd90;
        }
    }
    ctx->pc = 0x2FDD2Cu;
label_2fdd2c:
    // 0x2fdd2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fdd30:
    // 0x2fdd30: 0x244238b0  addiu       $v0, $v0, 0x38B0
    ctx->pc = 0x2fdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14512));
label_2fdd34:
    // 0x2fdd34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fdd38:
    if (ctx->pc == 0x2FDD38u) {
        ctx->pc = 0x2FDD38u;
            // 0x2fdd38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDD3Cu;
        goto label_2fdd3c;
    }
    ctx->pc = 0x2FDD34u;
    {
        const bool branch_taken_0x2fdd34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD34u;
            // 0x2fdd38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd34) {
            ctx->pc = 0x2FDD78u;
            goto label_2fdd78;
        }
    }
    ctx->pc = 0x2FDD3Cu;
label_2fdd3c:
    // 0x2fdd3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdd40:
    // 0x2fdd40: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x2fdd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_2fdd44:
    // 0x2fdd44: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fdd48:
    if (ctx->pc == 0x2FDD48u) {
        ctx->pc = 0x2FDD48u;
            // 0x2fdd48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDD4Cu;
        goto label_2fdd4c;
    }
    ctx->pc = 0x2FDD44u;
    {
        const bool branch_taken_0x2fdd44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD44u;
            // 0x2fdd48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd44) {
            ctx->pc = 0x2FDD78u;
            goto label_2fdd78;
        }
    }
    ctx->pc = 0x2FDD4Cu;
label_2fdd4c:
    // 0x2fdd4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdd50:
    // 0x2fdd50: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fdd54:
    // 0x2fdd54: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fdd58:
    if (ctx->pc == 0x2FDD58u) {
        ctx->pc = 0x2FDD58u;
            // 0x2fdd58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDD5Cu;
        goto label_2fdd5c;
    }
    ctx->pc = 0x2FDD54u;
    {
        const bool branch_taken_0x2fdd54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD54u;
            // 0x2fdd58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd54) {
            ctx->pc = 0x2FDD78u;
            goto label_2fdd78;
        }
    }
    ctx->pc = 0x2FDD5Cu;
label_2fdd5c:
    // 0x2fdd5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fdd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fdd60:
    // 0x2fdd60: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fdd64:
    // 0x2fdd64: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fdd68:
    // 0x2fdd68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fdd6c:
    if (ctx->pc == 0x2FDD6Cu) {
        ctx->pc = 0x2FDD6Cu;
            // 0x2fdd6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDD70u;
        goto label_2fdd70;
    }
    ctx->pc = 0x2FDD68u;
    {
        const bool branch_taken_0x2fdd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD68u;
            // 0x2fdd6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd68) {
            ctx->pc = 0x2FDD78u;
            goto label_2fdd78;
        }
    }
    ctx->pc = 0x2FDD70u;
label_2fdd70:
    // 0x2fdd70: 0xc07507c  jal         func_1D41F0
label_2fdd74:
    if (ctx->pc == 0x2FDD74u) {
        ctx->pc = 0x2FDD74u;
            // 0x2fdd74: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FDD78u;
        goto label_2fdd78;
    }
    ctx->pc = 0x2FDD70u;
    SET_GPR_U32(ctx, 31, 0x2FDD78u);
    ctx->pc = 0x2FDD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD70u;
            // 0x2fdd74: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD78u; }
        if (ctx->pc != 0x2FDD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD78u; }
        if (ctx->pc != 0x2FDD78u) { return; }
    }
    ctx->pc = 0x2FDD78u;
label_2fdd78:
    // 0x2fdd78: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fdd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fdd7c:
    // 0x2fdd7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fdd7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fdd80:
    // 0x2fdd80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fdd84:
    if (ctx->pc == 0x2FDD84u) {
        ctx->pc = 0x2FDD84u;
            // 0x2fdd84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD88u;
        goto label_2fdd88;
    }
    ctx->pc = 0x2FDD80u;
    {
        const bool branch_taken_0x2fdd80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fdd80) {
            ctx->pc = 0x2FDD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD80u;
            // 0x2fdd84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDD94u;
            goto label_2fdd94;
        }
    }
    ctx->pc = 0x2FDD88u;
label_2fdd88:
    // 0x2fdd88: 0xc0400a8  jal         func_1002A0
label_2fdd8c:
    if (ctx->pc == 0x2FDD8Cu) {
        ctx->pc = 0x2FDD8Cu;
            // 0x2fdd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD90u;
        goto label_2fdd90;
    }
    ctx->pc = 0x2FDD88u;
    SET_GPR_U32(ctx, 31, 0x2FDD90u);
    ctx->pc = 0x2FDD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDD88u;
            // 0x2fdd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD90u; }
        if (ctx->pc != 0x2FDD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDD90u; }
        if (ctx->pc != 0x2FDD90u) { return; }
    }
    ctx->pc = 0x2FDD90u;
label_2fdd90:
    // 0x2fdd90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fdd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd94:
    // 0x2fdd94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fdd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fdd98:
    // 0x2fdd98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdd9c:
    // 0x2fdd9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdda0:
    // 0x2fdda0: 0x3e00008  jr          $ra
label_2fdda4:
    if (ctx->pc == 0x2FDDA4u) {
        ctx->pc = 0x2FDDA4u;
            // 0x2fdda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FDDA8u;
        goto label_2fdda8;
    }
    ctx->pc = 0x2FDDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDA0u;
            // 0x2fdda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDDA8u;
label_2fdda8:
    // 0x2fdda8: 0x0  nop
    ctx->pc = 0x2fdda8u;
    // NOP
label_2fddac:
    // 0x2fddac: 0x0  nop
    ctx->pc = 0x2fddacu;
    // NOP
label_2fddb0:
    // 0x2fddb0: 0x3e00008  jr          $ra
label_2fddb4:
    if (ctx->pc == 0x2FDDB4u) {
        ctx->pc = 0x2FDDB4u;
            // 0x2fddb4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2FDDB8u;
        goto label_2fddb8;
    }
    ctx->pc = 0x2FDDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDB0u;
            // 0x2fddb4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDDB8u;
label_2fddb8:
    // 0x2fddb8: 0x0  nop
    ctx->pc = 0x2fddb8u;
    // NOP
label_2fddbc:
    // 0x2fddbc: 0x0  nop
    ctx->pc = 0x2fddbcu;
    // NOP
label_2fddc0:
    // 0x2fddc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fddc4:
    // 0x2fddc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fddc8:
    // 0x2fddc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fddcc:
    // 0x2fddcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fddd0:
    // 0x2fddd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fddd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fddd4:
    // 0x2fddd4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fddd8:
    if (ctx->pc == 0x2FDDD8u) {
        ctx->pc = 0x2FDDD8u;
            // 0x2fddd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDDCu;
        goto label_2fdddc;
    }
    ctx->pc = 0x2FDDD4u;
    {
        const bool branch_taken_0x2fddd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDD4u;
            // 0x2fddd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fddd4) {
            ctx->pc = 0x2FDE40u;
            goto label_2fde40;
        }
    }
    ctx->pc = 0x2FDDDCu;
label_2fdddc:
    // 0x2fdddc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fdddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fdde0:
    // 0x2fdde0: 0x24423900  addiu       $v0, $v0, 0x3900
    ctx->pc = 0x2fdde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14592));
label_2fdde4:
    // 0x2fdde4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fdde8:
    if (ctx->pc == 0x2FDDE8u) {
        ctx->pc = 0x2FDDE8u;
            // 0x2fdde8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDDECu;
        goto label_2fddec;
    }
    ctx->pc = 0x2FDDE4u;
    {
        const bool branch_taken_0x2fdde4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDE4u;
            // 0x2fdde8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdde4) {
            ctx->pc = 0x2FDE28u;
            goto label_2fde28;
        }
    }
    ctx->pc = 0x2FDDECu;
label_2fddec:
    // 0x2fddec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fddf0:
    // 0x2fddf0: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x2fddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_2fddf4:
    // 0x2fddf4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fddf8:
    if (ctx->pc == 0x2FDDF8u) {
        ctx->pc = 0x2FDDF8u;
            // 0x2fddf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDDFCu;
        goto label_2fddfc;
    }
    ctx->pc = 0x2FDDF4u;
    {
        const bool branch_taken_0x2fddf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDDF4u;
            // 0x2fddf8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fddf4) {
            ctx->pc = 0x2FDE28u;
            goto label_2fde28;
        }
    }
    ctx->pc = 0x2FDDFCu;
label_2fddfc:
    // 0x2fddfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fde00:
    // 0x2fde00: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x2fde00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
label_2fde04:
    // 0x2fde04: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fde08:
    if (ctx->pc == 0x2FDE08u) {
        ctx->pc = 0x2FDE08u;
            // 0x2fde08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDE0Cu;
        goto label_2fde0c;
    }
    ctx->pc = 0x2FDE04u;
    {
        const bool branch_taken_0x2fde04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE04u;
            // 0x2fde08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde04) {
            ctx->pc = 0x2FDE28u;
            goto label_2fde28;
        }
    }
    ctx->pc = 0x2FDE0Cu;
label_2fde0c:
    // 0x2fde0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fde0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fde10:
    // 0x2fde10: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fde10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fde14:
    // 0x2fde14: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fde14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fde18:
    // 0x2fde18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fde1c:
    if (ctx->pc == 0x2FDE1Cu) {
        ctx->pc = 0x2FDE1Cu;
            // 0x2fde1c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDE20u;
        goto label_2fde20;
    }
    ctx->pc = 0x2FDE18u;
    {
        const bool branch_taken_0x2fde18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE18u;
            // 0x2fde1c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde18) {
            ctx->pc = 0x2FDE28u;
            goto label_2fde28;
        }
    }
    ctx->pc = 0x2FDE20u;
label_2fde20:
    // 0x2fde20: 0xc07507c  jal         func_1D41F0
label_2fde24:
    if (ctx->pc == 0x2FDE24u) {
        ctx->pc = 0x2FDE24u;
            // 0x2fde24: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FDE28u;
        goto label_2fde28;
    }
    ctx->pc = 0x2FDE20u;
    SET_GPR_U32(ctx, 31, 0x2FDE28u);
    ctx->pc = 0x2FDE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE20u;
            // 0x2fde24: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE28u; }
        if (ctx->pc != 0x2FDE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE28u; }
        if (ctx->pc != 0x2FDE28u) { return; }
    }
    ctx->pc = 0x2FDE28u;
label_2fde28:
    // 0x2fde28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fde28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fde2c:
    // 0x2fde2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fde2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fde30:
    // 0x2fde30: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fde34:
    if (ctx->pc == 0x2FDE34u) {
        ctx->pc = 0x2FDE34u;
            // 0x2fde34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE38u;
        goto label_2fde38;
    }
    ctx->pc = 0x2FDE30u;
    {
        const bool branch_taken_0x2fde30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fde30) {
            ctx->pc = 0x2FDE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE30u;
            // 0x2fde34: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDE44u;
            goto label_2fde44;
        }
    }
    ctx->pc = 0x2FDE38u;
label_2fde38:
    // 0x2fde38: 0xc0400a8  jal         func_1002A0
label_2fde3c:
    if (ctx->pc == 0x2FDE3Cu) {
        ctx->pc = 0x2FDE3Cu;
            // 0x2fde3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE40u;
        goto label_2fde40;
    }
    ctx->pc = 0x2FDE38u;
    SET_GPR_U32(ctx, 31, 0x2FDE40u);
    ctx->pc = 0x2FDE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE38u;
            // 0x2fde3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE40u; }
        if (ctx->pc != 0x2FDE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDE40u; }
        if (ctx->pc != 0x2FDE40u) { return; }
    }
    ctx->pc = 0x2FDE40u;
label_2fde40:
    // 0x2fde40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fde40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fde44:
    // 0x2fde44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fde44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fde48:
    // 0x2fde48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fde48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fde4c:
    // 0x2fde4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fde4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fde50:
    // 0x2fde50: 0x3e00008  jr          $ra
label_2fde54:
    if (ctx->pc == 0x2FDE54u) {
        ctx->pc = 0x2FDE54u;
            // 0x2fde54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FDE58u;
        goto label_2fde58;
    }
    ctx->pc = 0x2FDE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE50u;
            // 0x2fde54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDE58u;
label_2fde58:
    // 0x2fde58: 0x0  nop
    ctx->pc = 0x2fde58u;
    // NOP
label_2fde5c:
    // 0x2fde5c: 0x0  nop
    ctx->pc = 0x2fde5cu;
    // NOP
label_2fde60:
    // 0x2fde60: 0x3e00008  jr          $ra
label_2fde64:
    if (ctx->pc == 0x2FDE64u) {
        ctx->pc = 0x2FDE64u;
            // 0x2fde64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2FDE68u;
        goto label_2fde68;
    }
    ctx->pc = 0x2FDE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE60u;
            // 0x2fde64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDE68u;
label_2fde68:
    // 0x2fde68: 0x0  nop
    ctx->pc = 0x2fde68u;
    // NOP
label_2fde6c:
    // 0x2fde6c: 0x0  nop
    ctx->pc = 0x2fde6cu;
    // NOP
label_2fde70:
    // 0x2fde70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fde70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fde74:
    // 0x2fde74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fde74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fde78:
    // 0x2fde78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fde78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fde7c:
    // 0x2fde7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fde7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fde80:
    // 0x2fde80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fde80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fde84:
    // 0x2fde84: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fde88:
    if (ctx->pc == 0x2FDE88u) {
        ctx->pc = 0x2FDE88u;
            // 0x2fde88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE8Cu;
        goto label_2fde8c;
    }
    ctx->pc = 0x2FDE84u;
    {
        const bool branch_taken_0x2fde84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE84u;
            // 0x2fde88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde84) {
            ctx->pc = 0x2FDEF0u;
            goto label_2fdef0;
        }
    }
    ctx->pc = 0x2FDE8Cu;
label_2fde8c:
    // 0x2fde8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fde8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fde90:
    // 0x2fde90: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x2fde90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
label_2fde94:
    // 0x2fde94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fde98:
    if (ctx->pc == 0x2FDE98u) {
        ctx->pc = 0x2FDE98u;
            // 0x2fde98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDE9Cu;
        goto label_2fde9c;
    }
    ctx->pc = 0x2FDE94u;
    {
        const bool branch_taken_0x2fde94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDE94u;
            // 0x2fde98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde94) {
            ctx->pc = 0x2FDED8u;
            goto label_2fded8;
        }
    }
    ctx->pc = 0x2FDE9Cu;
label_2fde9c:
    // 0x2fde9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fde9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdea0:
    // 0x2fdea0: 0x2442b380  addiu       $v0, $v0, -0x4C80
    ctx->pc = 0x2fdea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947712));
label_2fdea4:
    // 0x2fdea4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fdea8:
    if (ctx->pc == 0x2FDEA8u) {
        ctx->pc = 0x2FDEA8u;
            // 0x2fdea8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDEACu;
        goto label_2fdeac;
    }
    ctx->pc = 0x2FDEA4u;
    {
        const bool branch_taken_0x2fdea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEA4u;
            // 0x2fdea8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdea4) {
            ctx->pc = 0x2FDED8u;
            goto label_2fded8;
        }
    }
    ctx->pc = 0x2FDEACu;
label_2fdeac:
    // 0x2fdeac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdeb0:
    // 0x2fdeb0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fdeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fdeb4:
    // 0x2fdeb4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fdeb8:
    if (ctx->pc == 0x2FDEB8u) {
        ctx->pc = 0x2FDEB8u;
            // 0x2fdeb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDEBCu;
        goto label_2fdebc;
    }
    ctx->pc = 0x2FDEB4u;
    {
        const bool branch_taken_0x2fdeb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEB4u;
            // 0x2fdeb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdeb4) {
            ctx->pc = 0x2FDED8u;
            goto label_2fded8;
        }
    }
    ctx->pc = 0x2FDEBCu;
label_2fdebc:
    // 0x2fdebc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fdebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fdec0:
    // 0x2fdec0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fdec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fdec4:
    // 0x2fdec4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fdec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fdec8:
    // 0x2fdec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fdecc:
    if (ctx->pc == 0x2FDECCu) {
        ctx->pc = 0x2FDECCu;
            // 0x2fdecc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDED0u;
        goto label_2fded0;
    }
    ctx->pc = 0x2FDEC8u;
    {
        const bool branch_taken_0x2fdec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEC8u;
            // 0x2fdecc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdec8) {
            ctx->pc = 0x2FDED8u;
            goto label_2fded8;
        }
    }
    ctx->pc = 0x2FDED0u;
label_2fded0:
    // 0x2fded0: 0xc07507c  jal         func_1D41F0
label_2fded4:
    if (ctx->pc == 0x2FDED4u) {
        ctx->pc = 0x2FDED4u;
            // 0x2fded4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FDED8u;
        goto label_2fded8;
    }
    ctx->pc = 0x2FDED0u;
    SET_GPR_U32(ctx, 31, 0x2FDED8u);
    ctx->pc = 0x2FDED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDED0u;
            // 0x2fded4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDED8u; }
        if (ctx->pc != 0x2FDED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDED8u; }
        if (ctx->pc != 0x2FDED8u) { return; }
    }
    ctx->pc = 0x2FDED8u;
label_2fded8:
    // 0x2fded8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fdedc:
    // 0x2fdedc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fdedcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fdee0:
    // 0x2fdee0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fdee4:
    if (ctx->pc == 0x2FDEE4u) {
        ctx->pc = 0x2FDEE4u;
            // 0x2fdee4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEE8u;
        goto label_2fdee8;
    }
    ctx->pc = 0x2FDEE0u;
    {
        const bool branch_taken_0x2fdee0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fdee0) {
            ctx->pc = 0x2FDEE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEE0u;
            // 0x2fdee4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDEF4u;
            goto label_2fdef4;
        }
    }
    ctx->pc = 0x2FDEE8u;
label_2fdee8:
    // 0x2fdee8: 0xc0400a8  jal         func_1002A0
label_2fdeec:
    if (ctx->pc == 0x2FDEECu) {
        ctx->pc = 0x2FDEECu;
            // 0x2fdeec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEF0u;
        goto label_2fdef0;
    }
    ctx->pc = 0x2FDEE8u;
    SET_GPR_U32(ctx, 31, 0x2FDEF0u);
    ctx->pc = 0x2FDEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDEE8u;
            // 0x2fdeec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDEF0u; }
        if (ctx->pc != 0x2FDEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDEF0u; }
        if (ctx->pc != 0x2FDEF0u) { return; }
    }
    ctx->pc = 0x2FDEF0u;
label_2fdef0:
    // 0x2fdef0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fdef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdef4:
    // 0x2fdef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fdef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fdef8:
    // 0x2fdef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdefc:
    // 0x2fdefc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdf00:
    // 0x2fdf00: 0x3e00008  jr          $ra
label_2fdf04:
    if (ctx->pc == 0x2FDF04u) {
        ctx->pc = 0x2FDF04u;
            // 0x2fdf04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FDF08u;
        goto label_2fdf08;
    }
    ctx->pc = 0x2FDF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF00u;
            // 0x2fdf04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDF08u;
label_2fdf08:
    // 0x2fdf08: 0x0  nop
    ctx->pc = 0x2fdf08u;
    // NOP
label_2fdf0c:
    // 0x2fdf0c: 0x0  nop
    ctx->pc = 0x2fdf0cu;
    // NOP
label_2fdf10:
    // 0x2fdf10: 0x3e00008  jr          $ra
label_2fdf14:
    if (ctx->pc == 0x2FDF14u) {
        ctx->pc = 0x2FDF14u;
            // 0x2fdf14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FDF18u;
        goto label_2fdf18;
    }
    ctx->pc = 0x2FDF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF10u;
            // 0x2fdf14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDF18u;
label_2fdf18:
    // 0x2fdf18: 0x0  nop
    ctx->pc = 0x2fdf18u;
    // NOP
label_2fdf1c:
    // 0x2fdf1c: 0x0  nop
    ctx->pc = 0x2fdf1cu;
    // NOP
label_2fdf20:
    // 0x2fdf20: 0x3e00008  jr          $ra
label_2fdf24:
    if (ctx->pc == 0x2FDF24u) {
        ctx->pc = 0x2FDF24u;
            // 0x2fdf24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FDF28u;
        goto label_2fdf28;
    }
    ctx->pc = 0x2FDF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF20u;
            // 0x2fdf24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDF28u;
label_2fdf28:
    // 0x2fdf28: 0x0  nop
    ctx->pc = 0x2fdf28u;
    // NOP
label_2fdf2c:
    // 0x2fdf2c: 0x0  nop
    ctx->pc = 0x2fdf2cu;
    // NOP
label_2fdf30:
    // 0x2fdf30: 0x3e00008  jr          $ra
label_2fdf34:
    if (ctx->pc == 0x2FDF34u) {
        ctx->pc = 0x2FDF34u;
            // 0x2fdf34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FDF38u;
        goto label_2fdf38;
    }
    ctx->pc = 0x2FDF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF30u;
            // 0x2fdf34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDF38u;
label_2fdf38:
    // 0x2fdf38: 0x0  nop
    ctx->pc = 0x2fdf38u;
    // NOP
label_2fdf3c:
    // 0x2fdf3c: 0x0  nop
    ctx->pc = 0x2fdf3cu;
    // NOP
label_2fdf40:
    // 0x2fdf40: 0x3e00008  jr          $ra
label_2fdf44:
    if (ctx->pc == 0x2FDF44u) {
        ctx->pc = 0x2FDF44u;
            // 0x2fdf44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FDF48u;
        goto label_2fdf48;
    }
    ctx->pc = 0x2FDF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF40u;
            // 0x2fdf44: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDF48u;
label_2fdf48:
    // 0x2fdf48: 0x0  nop
    ctx->pc = 0x2fdf48u;
    // NOP
label_2fdf4c:
    // 0x2fdf4c: 0x0  nop
    ctx->pc = 0x2fdf4cu;
    // NOP
label_2fdf50:
    // 0x2fdf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fdf54:
    // 0x2fdf54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fdf58:
    // 0x2fdf58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fdf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fdf5c:
    // 0x2fdf5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fdf60:
    // 0x2fdf60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fdf60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fdf64:
    // 0x2fdf64: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fdf68:
    if (ctx->pc == 0x2FDF68u) {
        ctx->pc = 0x2FDF68u;
            // 0x2fdf68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF6Cu;
        goto label_2fdf6c;
    }
    ctx->pc = 0x2FDF64u;
    {
        const bool branch_taken_0x2fdf64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF64u;
            // 0x2fdf68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf64) {
            ctx->pc = 0x2FDFD0u;
            goto label_2fdfd0;
        }
    }
    ctx->pc = 0x2FDF6Cu;
label_2fdf6c:
    // 0x2fdf6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fdf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fdf70:
    // 0x2fdf70: 0x24423a20  addiu       $v0, $v0, 0x3A20
    ctx->pc = 0x2fdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14880));
label_2fdf74:
    // 0x2fdf74: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fdf78:
    if (ctx->pc == 0x2FDF78u) {
        ctx->pc = 0x2FDF78u;
            // 0x2fdf78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDF7Cu;
        goto label_2fdf7c;
    }
    ctx->pc = 0x2FDF74u;
    {
        const bool branch_taken_0x2fdf74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF74u;
            // 0x2fdf78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf74) {
            ctx->pc = 0x2FDFB8u;
            goto label_2fdfb8;
        }
    }
    ctx->pc = 0x2FDF7Cu;
label_2fdf7c:
    // 0x2fdf7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdf80:
    // 0x2fdf80: 0x24429140  addiu       $v0, $v0, -0x6EC0
    ctx->pc = 0x2fdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
label_2fdf84:
    // 0x2fdf84: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fdf88:
    if (ctx->pc == 0x2FDF88u) {
        ctx->pc = 0x2FDF88u;
            // 0x2fdf88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDF8Cu;
        goto label_2fdf8c;
    }
    ctx->pc = 0x2FDF84u;
    {
        const bool branch_taken_0x2fdf84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF84u;
            // 0x2fdf88: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf84) {
            ctx->pc = 0x2FDFB8u;
            goto label_2fdfb8;
        }
    }
    ctx->pc = 0x2FDF8Cu;
label_2fdf8c:
    // 0x2fdf8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fdf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fdf90:
    // 0x2fdf90: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fdf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fdf94:
    // 0x2fdf94: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fdf98:
    if (ctx->pc == 0x2FDF98u) {
        ctx->pc = 0x2FDF98u;
            // 0x2fdf98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDF9Cu;
        goto label_2fdf9c;
    }
    ctx->pc = 0x2FDF94u;
    {
        const bool branch_taken_0x2fdf94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDF94u;
            // 0x2fdf98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf94) {
            ctx->pc = 0x2FDFB8u;
            goto label_2fdfb8;
        }
    }
    ctx->pc = 0x2FDF9Cu;
label_2fdf9c:
    // 0x2fdf9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fdf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fdfa0:
    // 0x2fdfa0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fdfa4:
    // 0x2fdfa4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fdfa8:
    // 0x2fdfa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fdfac:
    if (ctx->pc == 0x2FDFACu) {
        ctx->pc = 0x2FDFACu;
            // 0x2fdfac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDFB0u;
        goto label_2fdfb0;
    }
    ctx->pc = 0x2FDFA8u;
    {
        const bool branch_taken_0x2fdfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFA8u;
            // 0x2fdfac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfa8) {
            ctx->pc = 0x2FDFB8u;
            goto label_2fdfb8;
        }
    }
    ctx->pc = 0x2FDFB0u;
label_2fdfb0:
    // 0x2fdfb0: 0xc07507c  jal         func_1D41F0
label_2fdfb4:
    if (ctx->pc == 0x2FDFB4u) {
        ctx->pc = 0x2FDFB4u;
            // 0x2fdfb4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FDFB8u;
        goto label_2fdfb8;
    }
    ctx->pc = 0x2FDFB0u;
    SET_GPR_U32(ctx, 31, 0x2FDFB8u);
    ctx->pc = 0x2FDFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFB0u;
            // 0x2fdfb4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFB8u; }
        if (ctx->pc != 0x2FDFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFB8u; }
        if (ctx->pc != 0x2FDFB8u) { return; }
    }
    ctx->pc = 0x2FDFB8u;
label_2fdfb8:
    // 0x2fdfb8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fdfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fdfbc:
    // 0x2fdfbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fdfbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fdfc0:
    // 0x2fdfc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fdfc4:
    if (ctx->pc == 0x2FDFC4u) {
        ctx->pc = 0x2FDFC4u;
            // 0x2fdfc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFC8u;
        goto label_2fdfc8;
    }
    ctx->pc = 0x2FDFC0u;
    {
        const bool branch_taken_0x2fdfc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fdfc0) {
            ctx->pc = 0x2FDFC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFC0u;
            // 0x2fdfc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FDFD4u;
            goto label_2fdfd4;
        }
    }
    ctx->pc = 0x2FDFC8u;
label_2fdfc8:
    // 0x2fdfc8: 0xc0400a8  jal         func_1002A0
label_2fdfcc:
    if (ctx->pc == 0x2FDFCCu) {
        ctx->pc = 0x2FDFCCu;
            // 0x2fdfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFD0u;
        goto label_2fdfd0;
    }
    ctx->pc = 0x2FDFC8u;
    SET_GPR_U32(ctx, 31, 0x2FDFD0u);
    ctx->pc = 0x2FDFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFC8u;
            // 0x2fdfcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFD0u; }
        if (ctx->pc != 0x2FDFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDFD0u; }
        if (ctx->pc != 0x2FDFD0u) { return; }
    }
    ctx->pc = 0x2FDFD0u;
label_2fdfd0:
    // 0x2fdfd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fdfd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fdfd4:
    // 0x2fdfd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fdfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fdfd8:
    // 0x2fdfd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdfd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdfdc:
    // 0x2fdfdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdfe0:
    // 0x2fdfe0: 0x3e00008  jr          $ra
label_2fdfe4:
    if (ctx->pc == 0x2FDFE4u) {
        ctx->pc = 0x2FDFE4u;
            // 0x2fdfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FDFE8u;
        goto label_2fdfe8;
    }
    ctx->pc = 0x2FDFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFE0u;
            // 0x2fdfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDFE8u;
label_2fdfe8:
    // 0x2fdfe8: 0x0  nop
    ctx->pc = 0x2fdfe8u;
    // NOP
label_2fdfec:
    // 0x2fdfec: 0x0  nop
    ctx->pc = 0x2fdfecu;
    // NOP
label_2fdff0:
    // 0x2fdff0: 0x3e00008  jr          $ra
label_2fdff4:
    if (ctx->pc == 0x2FDFF4u) {
        ctx->pc = 0x2FDFF4u;
            // 0x2fdff4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2FDFF8u;
        goto label_2fdff8;
    }
    ctx->pc = 0x2FDFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDFF0u;
            // 0x2fdff4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FDFF8u;
label_2fdff8:
    // 0x2fdff8: 0x0  nop
    ctx->pc = 0x2fdff8u;
    // NOP
label_2fdffc:
    // 0x2fdffc: 0x0  nop
    ctx->pc = 0x2fdffcu;
    // NOP
label_2fe000:
    // 0x2fe000: 0x3e00008  jr          $ra
label_2fe004:
    if (ctx->pc == 0x2FE004u) {
        ctx->pc = 0x2FE004u;
            // 0x2fe004: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FE008u;
        goto label_2fe008;
    }
    ctx->pc = 0x2FE000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE000u;
            // 0x2fe004: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE008u;
label_2fe008:
    // 0x2fe008: 0x0  nop
    ctx->pc = 0x2fe008u;
    // NOP
label_2fe00c:
    // 0x2fe00c: 0x0  nop
    ctx->pc = 0x2fe00cu;
    // NOP
label_2fe010:
    // 0x2fe010: 0x3e00008  jr          $ra
label_2fe014:
    if (ctx->pc == 0x2FE014u) {
        ctx->pc = 0x2FE014u;
            // 0x2fe014: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FE018u;
        goto label_2fe018;
    }
    ctx->pc = 0x2FE010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE010u;
            // 0x2fe014: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE018u;
label_2fe018:
    // 0x2fe018: 0x0  nop
    ctx->pc = 0x2fe018u;
    // NOP
label_2fe01c:
    // 0x2fe01c: 0x0  nop
    ctx->pc = 0x2fe01cu;
    // NOP
label_2fe020:
    // 0x2fe020: 0x3e00008  jr          $ra
label_2fe024:
    if (ctx->pc == 0x2FE024u) {
        ctx->pc = 0x2FE024u;
            // 0x2fe024: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FE028u;
        goto label_2fe028;
    }
    ctx->pc = 0x2FE020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE020u;
            // 0x2fe024: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE028u;
label_2fe028:
    // 0x2fe028: 0x0  nop
    ctx->pc = 0x2fe028u;
    // NOP
label_2fe02c:
    // 0x2fe02c: 0x0  nop
    ctx->pc = 0x2fe02cu;
    // NOP
label_2fe030:
    // 0x2fe030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fe034:
    // 0x2fe034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fe038:
    // 0x2fe038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fe03c:
    // 0x2fe03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fe040:
    // 0x2fe040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe044:
    // 0x2fe044: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fe048:
    if (ctx->pc == 0x2FE048u) {
        ctx->pc = 0x2FE048u;
            // 0x2fe048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE04Cu;
        goto label_2fe04c;
    }
    ctx->pc = 0x2FE044u;
    {
        const bool branch_taken_0x2fe044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE044u;
            // 0x2fe048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe044) {
            ctx->pc = 0x2FE0B0u;
            goto label_2fe0b0;
        }
    }
    ctx->pc = 0x2FE04Cu;
label_2fe04c:
    // 0x2fe04c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe050:
    // 0x2fe050: 0x24423aa0  addiu       $v0, $v0, 0x3AA0
    ctx->pc = 0x2fe050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15008));
label_2fe054:
    // 0x2fe054: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fe058:
    if (ctx->pc == 0x2FE058u) {
        ctx->pc = 0x2FE058u;
            // 0x2fe058: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE05Cu;
        goto label_2fe05c;
    }
    ctx->pc = 0x2FE054u;
    {
        const bool branch_taken_0x2fe054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE054u;
            // 0x2fe058: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe054) {
            ctx->pc = 0x2FE098u;
            goto label_2fe098;
        }
    }
    ctx->pc = 0x2FE05Cu;
label_2fe05c:
    // 0x2fe05c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe060:
    // 0x2fe060: 0x24423e70  addiu       $v0, $v0, 0x3E70
    ctx->pc = 0x2fe060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15984));
label_2fe064:
    // 0x2fe064: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fe068:
    if (ctx->pc == 0x2FE068u) {
        ctx->pc = 0x2FE068u;
            // 0x2fe068: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE06Cu;
        goto label_2fe06c;
    }
    ctx->pc = 0x2FE064u;
    {
        const bool branch_taken_0x2fe064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE064u;
            // 0x2fe068: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe064) {
            ctx->pc = 0x2FE098u;
            goto label_2fe098;
        }
    }
    ctx->pc = 0x2FE06Cu;
label_2fe06c:
    // 0x2fe06c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fe06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fe070:
    // 0x2fe070: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fe070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fe074:
    // 0x2fe074: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fe078:
    if (ctx->pc == 0x2FE078u) {
        ctx->pc = 0x2FE078u;
            // 0x2fe078: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE07Cu;
        goto label_2fe07c;
    }
    ctx->pc = 0x2FE074u;
    {
        const bool branch_taken_0x2fe074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE074u;
            // 0x2fe078: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe074) {
            ctx->pc = 0x2FE098u;
            goto label_2fe098;
        }
    }
    ctx->pc = 0x2FE07Cu;
label_2fe07c:
    // 0x2fe07c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fe07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fe080:
    // 0x2fe080: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fe080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fe084:
    // 0x2fe084: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fe084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fe088:
    // 0x2fe088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fe08c:
    if (ctx->pc == 0x2FE08Cu) {
        ctx->pc = 0x2FE08Cu;
            // 0x2fe08c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FE090u;
        goto label_2fe090;
    }
    ctx->pc = 0x2FE088u;
    {
        const bool branch_taken_0x2fe088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE088u;
            // 0x2fe08c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe088) {
            ctx->pc = 0x2FE098u;
            goto label_2fe098;
        }
    }
    ctx->pc = 0x2FE090u;
label_2fe090:
    // 0x2fe090: 0xc07507c  jal         func_1D41F0
label_2fe094:
    if (ctx->pc == 0x2FE094u) {
        ctx->pc = 0x2FE094u;
            // 0x2fe094: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FE098u;
        goto label_2fe098;
    }
    ctx->pc = 0x2FE090u;
    SET_GPR_U32(ctx, 31, 0x2FE098u);
    ctx->pc = 0x2FE094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE090u;
            // 0x2fe094: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE098u; }
        if (ctx->pc != 0x2FE098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE098u; }
        if (ctx->pc != 0x2FE098u) { return; }
    }
    ctx->pc = 0x2FE098u;
label_2fe098:
    // 0x2fe098: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fe098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fe09c:
    // 0x2fe09c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fe09cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fe0a0:
    // 0x2fe0a0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fe0a4:
    if (ctx->pc == 0x2FE0A4u) {
        ctx->pc = 0x2FE0A4u;
            // 0x2fe0a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0A8u;
        goto label_2fe0a8;
    }
    ctx->pc = 0x2FE0A0u;
    {
        const bool branch_taken_0x2fe0a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fe0a0) {
            ctx->pc = 0x2FE0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0A0u;
            // 0x2fe0a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE0B4u;
            goto label_2fe0b4;
        }
    }
    ctx->pc = 0x2FE0A8u;
label_2fe0a8:
    // 0x2fe0a8: 0xc0400a8  jal         func_1002A0
label_2fe0ac:
    if (ctx->pc == 0x2FE0ACu) {
        ctx->pc = 0x2FE0ACu;
            // 0x2fe0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0B0u;
        goto label_2fe0b0;
    }
    ctx->pc = 0x2FE0A8u;
    SET_GPR_U32(ctx, 31, 0x2FE0B0u);
    ctx->pc = 0x2FE0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0A8u;
            // 0x2fe0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0B0u; }
        if (ctx->pc != 0x2FE0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0B0u; }
        if (ctx->pc != 0x2FE0B0u) { return; }
    }
    ctx->pc = 0x2FE0B0u;
label_2fe0b0:
    // 0x2fe0b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe0b4:
    // 0x2fe0b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe0b8:
    // 0x2fe0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe0bc:
    // 0x2fe0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe0c0:
    // 0x2fe0c0: 0x3e00008  jr          $ra
label_2fe0c4:
    if (ctx->pc == 0x2FE0C4u) {
        ctx->pc = 0x2FE0C4u;
            // 0x2fe0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FE0C8u;
        goto label_2fe0c8;
    }
    ctx->pc = 0x2FE0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0C0u;
            // 0x2fe0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE0C8u;
label_2fe0c8:
    // 0x2fe0c8: 0x0  nop
    ctx->pc = 0x2fe0c8u;
    // NOP
label_2fe0cc:
    // 0x2fe0cc: 0x0  nop
    ctx->pc = 0x2fe0ccu;
    // NOP
label_2fe0d0:
    // 0x2fe0d0: 0x3e00008  jr          $ra
label_2fe0d4:
    if (ctx->pc == 0x2FE0D4u) {
        ctx->pc = 0x2FE0D4u;
            // 0x2fe0d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FE0D8u;
        goto label_2fe0d8;
    }
    ctx->pc = 0x2FE0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0D0u;
            // 0x2fe0d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE0D8u;
label_2fe0d8:
    // 0x2fe0d8: 0x0  nop
    ctx->pc = 0x2fe0d8u;
    // NOP
label_2fe0dc:
    // 0x2fe0dc: 0x0  nop
    ctx->pc = 0x2fe0dcu;
    // NOP
label_2fe0e0:
    // 0x2fe0e0: 0x3e00008  jr          $ra
label_2fe0e4:
    if (ctx->pc == 0x2FE0E4u) {
        ctx->pc = 0x2FE0E4u;
            // 0x2fe0e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FE0E8u;
        goto label_2fe0e8;
    }
    ctx->pc = 0x2FE0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0E0u;
            // 0x2fe0e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE0E8u;
label_2fe0e8:
    // 0x2fe0e8: 0x0  nop
    ctx->pc = 0x2fe0e8u;
    // NOP
label_2fe0ec:
    // 0x2fe0ec: 0x0  nop
    ctx->pc = 0x2fe0ecu;
    // NOP
label_2fe0f0:
    // 0x2fe0f0: 0x3e00008  jr          $ra
label_2fe0f4:
    if (ctx->pc == 0x2FE0F4u) {
        ctx->pc = 0x2FE0F4u;
            // 0x2fe0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0F8u;
        goto label_2fe0f8;
    }
    ctx->pc = 0x2FE0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0F0u;
            // 0x2fe0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE0F8u;
label_2fe0f8:
    // 0x2fe0f8: 0x0  nop
    ctx->pc = 0x2fe0f8u;
    // NOP
label_2fe0fc:
    // 0x2fe0fc: 0x0  nop
    ctx->pc = 0x2fe0fcu;
    // NOP
label_2fe100:
    // 0x2fe100: 0x3e00008  jr          $ra
label_2fe104:
    if (ctx->pc == 0x2FE104u) {
        ctx->pc = 0x2FE104u;
            // 0x2fe104: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FE108u;
        goto label_2fe108;
    }
    ctx->pc = 0x2FE100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE100u;
            // 0x2fe104: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE108u;
label_2fe108:
    // 0x2fe108: 0x0  nop
    ctx->pc = 0x2fe108u;
    // NOP
label_2fe10c:
    // 0x2fe10c: 0x0  nop
    ctx->pc = 0x2fe10cu;
    // NOP
label_2fe110:
    // 0x2fe110: 0x3e00008  jr          $ra
label_2fe114:
    if (ctx->pc == 0x2FE114u) {
        ctx->pc = 0x2FE114u;
            // 0x2fe114: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FE118u;
        goto label_2fe118;
    }
    ctx->pc = 0x2FE110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE110u;
            // 0x2fe114: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE118u;
label_2fe118:
    // 0x2fe118: 0x0  nop
    ctx->pc = 0x2fe118u;
    // NOP
label_2fe11c:
    // 0x2fe11c: 0x0  nop
    ctx->pc = 0x2fe11cu;
    // NOP
label_2fe120:
    // 0x2fe120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fe124:
    // 0x2fe124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fe128:
    // 0x2fe128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fe12c:
    // 0x2fe12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fe130:
    // 0x2fe130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe134:
    // 0x2fe134: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fe138:
    if (ctx->pc == 0x2FE138u) {
        ctx->pc = 0x2FE138u;
            // 0x2fe138: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE13Cu;
        goto label_2fe13c;
    }
    ctx->pc = 0x2FE134u;
    {
        const bool branch_taken_0x2fe134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE134u;
            // 0x2fe138: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe134) {
            ctx->pc = 0x2FE1A0u;
            goto label_2fe1a0;
        }
    }
    ctx->pc = 0x2FE13Cu;
label_2fe13c:
    // 0x2fe13c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe140:
    // 0x2fe140: 0x24423b20  addiu       $v0, $v0, 0x3B20
    ctx->pc = 0x2fe140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15136));
label_2fe144:
    // 0x2fe144: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fe148:
    if (ctx->pc == 0x2FE148u) {
        ctx->pc = 0x2FE148u;
            // 0x2fe148: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE14Cu;
        goto label_2fe14c;
    }
    ctx->pc = 0x2FE144u;
    {
        const bool branch_taken_0x2fe144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE144u;
            // 0x2fe148: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe144) {
            ctx->pc = 0x2FE188u;
            goto label_2fe188;
        }
    }
    ctx->pc = 0x2FE14Cu;
label_2fe14c:
    // 0x2fe14c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe150:
    // 0x2fe150: 0x24423ef0  addiu       $v0, $v0, 0x3EF0
    ctx->pc = 0x2fe150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16112));
label_2fe154:
    // 0x2fe154: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fe158:
    if (ctx->pc == 0x2FE158u) {
        ctx->pc = 0x2FE158u;
            // 0x2fe158: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE15Cu;
        goto label_2fe15c;
    }
    ctx->pc = 0x2FE154u;
    {
        const bool branch_taken_0x2fe154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE154u;
            // 0x2fe158: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe154) {
            ctx->pc = 0x2FE188u;
            goto label_2fe188;
        }
    }
    ctx->pc = 0x2FE15Cu;
label_2fe15c:
    // 0x2fe15c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fe15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fe160:
    // 0x2fe160: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fe160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fe164:
    // 0x2fe164: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fe168:
    if (ctx->pc == 0x2FE168u) {
        ctx->pc = 0x2FE168u;
            // 0x2fe168: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE16Cu;
        goto label_2fe16c;
    }
    ctx->pc = 0x2FE164u;
    {
        const bool branch_taken_0x2fe164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE164u;
            // 0x2fe168: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe164) {
            ctx->pc = 0x2FE188u;
            goto label_2fe188;
        }
    }
    ctx->pc = 0x2FE16Cu;
label_2fe16c:
    // 0x2fe16c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fe16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fe170:
    // 0x2fe170: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fe170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fe174:
    // 0x2fe174: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fe174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fe178:
    // 0x2fe178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fe17c:
    if (ctx->pc == 0x2FE17Cu) {
        ctx->pc = 0x2FE17Cu;
            // 0x2fe17c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FE180u;
        goto label_2fe180;
    }
    ctx->pc = 0x2FE178u;
    {
        const bool branch_taken_0x2fe178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE178u;
            // 0x2fe17c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe178) {
            ctx->pc = 0x2FE188u;
            goto label_2fe188;
        }
    }
    ctx->pc = 0x2FE180u;
label_2fe180:
    // 0x2fe180: 0xc07507c  jal         func_1D41F0
label_2fe184:
    if (ctx->pc == 0x2FE184u) {
        ctx->pc = 0x2FE184u;
            // 0x2fe184: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FE188u;
        goto label_2fe188;
    }
    ctx->pc = 0x2FE180u;
    SET_GPR_U32(ctx, 31, 0x2FE188u);
    ctx->pc = 0x2FE184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE180u;
            // 0x2fe184: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE188u; }
        if (ctx->pc != 0x2FE188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE188u; }
        if (ctx->pc != 0x2FE188u) { return; }
    }
    ctx->pc = 0x2FE188u;
label_2fe188:
    // 0x2fe188: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fe188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fe18c:
    // 0x2fe18c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fe18cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fe190:
    // 0x2fe190: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fe194:
    if (ctx->pc == 0x2FE194u) {
        ctx->pc = 0x2FE194u;
            // 0x2fe194: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE198u;
        goto label_2fe198;
    }
    ctx->pc = 0x2FE190u;
    {
        const bool branch_taken_0x2fe190 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fe190) {
            ctx->pc = 0x2FE194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE190u;
            // 0x2fe194: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE1A4u;
            goto label_2fe1a4;
        }
    }
    ctx->pc = 0x2FE198u;
label_2fe198:
    // 0x2fe198: 0xc0400a8  jal         func_1002A0
label_2fe19c:
    if (ctx->pc == 0x2FE19Cu) {
        ctx->pc = 0x2FE19Cu;
            // 0x2fe19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE1A0u;
        goto label_2fe1a0;
    }
    ctx->pc = 0x2FE198u;
    SET_GPR_U32(ctx, 31, 0x2FE1A0u);
    ctx->pc = 0x2FE19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE198u;
            // 0x2fe19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1A0u; }
        if (ctx->pc != 0x2FE1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE1A0u; }
        if (ctx->pc != 0x2FE1A0u) { return; }
    }
    ctx->pc = 0x2FE1A0u;
label_2fe1a0:
    // 0x2fe1a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe1a4:
    // 0x2fe1a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe1a8:
    // 0x2fe1a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe1ac:
    // 0x2fe1ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe1b0:
    // 0x2fe1b0: 0x3e00008  jr          $ra
label_2fe1b4:
    if (ctx->pc == 0x2FE1B4u) {
        ctx->pc = 0x2FE1B4u;
            // 0x2fe1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FE1B8u;
        goto label_2fe1b8;
    }
    ctx->pc = 0x2FE1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE1B0u;
            // 0x2fe1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE1B8u;
label_2fe1b8:
    // 0x2fe1b8: 0x0  nop
    ctx->pc = 0x2fe1b8u;
    // NOP
label_2fe1bc:
    // 0x2fe1bc: 0x0  nop
    ctx->pc = 0x2fe1bcu;
    // NOP
label_2fe1c0:
    // 0x2fe1c0: 0x3e00008  jr          $ra
label_2fe1c4:
    if (ctx->pc == 0x2FE1C4u) {
        ctx->pc = 0x2FE1C4u;
            // 0x2fe1c4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2FE1C8u;
        goto label_2fe1c8;
    }
    ctx->pc = 0x2FE1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE1C0u;
            // 0x2fe1c4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE1C8u;
label_2fe1c8:
    // 0x2fe1c8: 0x0  nop
    ctx->pc = 0x2fe1c8u;
    // NOP
label_2fe1cc:
    // 0x2fe1cc: 0x0  nop
    ctx->pc = 0x2fe1ccu;
    // NOP
label_2fe1d0:
    // 0x2fe1d0: 0x3e00008  jr          $ra
label_2fe1d4:
    if (ctx->pc == 0x2FE1D4u) {
        ctx->pc = 0x2FE1D4u;
            // 0x2fe1d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FE1D8u;
        goto label_2fe1d8;
    }
    ctx->pc = 0x2FE1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE1D0u;
            // 0x2fe1d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE1D8u;
label_2fe1d8:
    // 0x2fe1d8: 0x0  nop
    ctx->pc = 0x2fe1d8u;
    // NOP
label_2fe1dc:
    // 0x2fe1dc: 0x0  nop
    ctx->pc = 0x2fe1dcu;
    // NOP
label_2fe1e0:
    // 0x2fe1e0: 0x3e00008  jr          $ra
label_2fe1e4:
    if (ctx->pc == 0x2FE1E4u) {
        ctx->pc = 0x2FE1E4u;
            // 0x2fe1e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FE1E8u;
        goto label_2fe1e8;
    }
    ctx->pc = 0x2FE1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE1E0u;
            // 0x2fe1e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE1E8u;
label_2fe1e8:
    // 0x2fe1e8: 0x0  nop
    ctx->pc = 0x2fe1e8u;
    // NOP
label_2fe1ec:
    // 0x2fe1ec: 0x0  nop
    ctx->pc = 0x2fe1ecu;
    // NOP
label_2fe1f0:
    // 0x2fe1f0: 0x3e00008  jr          $ra
label_2fe1f4:
    if (ctx->pc == 0x2FE1F4u) {
        ctx->pc = 0x2FE1F4u;
            // 0x2fe1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FE1F8u;
        goto label_2fe1f8;
    }
    ctx->pc = 0x2FE1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE1F0u;
            // 0x2fe1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE1F8u;
label_2fe1f8:
    // 0x2fe1f8: 0x0  nop
    ctx->pc = 0x2fe1f8u;
    // NOP
label_2fe1fc:
    // 0x2fe1fc: 0x0  nop
    ctx->pc = 0x2fe1fcu;
    // NOP
label_2fe200:
    // 0x2fe200: 0x3e00008  jr          $ra
label_2fe204:
    if (ctx->pc == 0x2FE204u) {
        ctx->pc = 0x2FE208u;
        goto label_2fe208;
    }
    ctx->pc = 0x2FE200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE208u;
label_2fe208:
    // 0x2fe208: 0x0  nop
    ctx->pc = 0x2fe208u;
    // NOP
label_2fe20c:
    // 0x2fe20c: 0x0  nop
    ctx->pc = 0x2fe20cu;
    // NOP
label_2fe210:
    // 0x2fe210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fe214:
    // 0x2fe214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fe218:
    // 0x2fe218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fe21c:
    // 0x2fe21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fe220:
    // 0x2fe220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe224:
    // 0x2fe224: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fe228:
    if (ctx->pc == 0x2FE228u) {
        ctx->pc = 0x2FE228u;
            // 0x2fe228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE22Cu;
        goto label_2fe22c;
    }
    ctx->pc = 0x2FE224u;
    {
        const bool branch_taken_0x2fe224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE224u;
            // 0x2fe228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe224) {
            ctx->pc = 0x2FE290u;
            goto label_2fe290;
        }
    }
    ctx->pc = 0x2FE22Cu;
label_2fe22c:
    // 0x2fe22c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe230:
    // 0x2fe230: 0x24423ba0  addiu       $v0, $v0, 0x3BA0
    ctx->pc = 0x2fe230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
label_2fe234:
    // 0x2fe234: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fe238:
    if (ctx->pc == 0x2FE238u) {
        ctx->pc = 0x2FE238u;
            // 0x2fe238: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE23Cu;
        goto label_2fe23c;
    }
    ctx->pc = 0x2FE234u;
    {
        const bool branch_taken_0x2fe234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE234u;
            // 0x2fe238: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe234) {
            ctx->pc = 0x2FE278u;
            goto label_2fe278;
        }
    }
    ctx->pc = 0x2FE23Cu;
label_2fe23c:
    // 0x2fe23c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe240:
    // 0x2fe240: 0x24423ef0  addiu       $v0, $v0, 0x3EF0
    ctx->pc = 0x2fe240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16112));
label_2fe244:
    // 0x2fe244: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fe248:
    if (ctx->pc == 0x2FE248u) {
        ctx->pc = 0x2FE248u;
            // 0x2fe248: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE24Cu;
        goto label_2fe24c;
    }
    ctx->pc = 0x2FE244u;
    {
        const bool branch_taken_0x2fe244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE244u;
            // 0x2fe248: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe244) {
            ctx->pc = 0x2FE278u;
            goto label_2fe278;
        }
    }
    ctx->pc = 0x2FE24Cu;
label_2fe24c:
    // 0x2fe24c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fe24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fe250:
    // 0x2fe250: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fe250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fe254:
    // 0x2fe254: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fe258:
    if (ctx->pc == 0x2FE258u) {
        ctx->pc = 0x2FE258u;
            // 0x2fe258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE25Cu;
        goto label_2fe25c;
    }
    ctx->pc = 0x2FE254u;
    {
        const bool branch_taken_0x2fe254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE254u;
            // 0x2fe258: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe254) {
            ctx->pc = 0x2FE278u;
            goto label_2fe278;
        }
    }
    ctx->pc = 0x2FE25Cu;
label_2fe25c:
    // 0x2fe25c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fe25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fe260:
    // 0x2fe260: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fe260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fe264:
    // 0x2fe264: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fe264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fe268:
    // 0x2fe268: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fe26c:
    if (ctx->pc == 0x2FE26Cu) {
        ctx->pc = 0x2FE26Cu;
            // 0x2fe26c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FE270u;
        goto label_2fe270;
    }
    ctx->pc = 0x2FE268u;
    {
        const bool branch_taken_0x2fe268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE268u;
            // 0x2fe26c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe268) {
            ctx->pc = 0x2FE278u;
            goto label_2fe278;
        }
    }
    ctx->pc = 0x2FE270u;
label_2fe270:
    // 0x2fe270: 0xc07507c  jal         func_1D41F0
label_2fe274:
    if (ctx->pc == 0x2FE274u) {
        ctx->pc = 0x2FE274u;
            // 0x2fe274: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FE278u;
        goto label_2fe278;
    }
    ctx->pc = 0x2FE270u;
    SET_GPR_U32(ctx, 31, 0x2FE278u);
    ctx->pc = 0x2FE274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE270u;
            // 0x2fe274: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE278u; }
        if (ctx->pc != 0x2FE278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE278u; }
        if (ctx->pc != 0x2FE278u) { return; }
    }
    ctx->pc = 0x2FE278u;
label_2fe278:
    // 0x2fe278: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fe278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fe27c:
    // 0x2fe27c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fe27cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fe280:
    // 0x2fe280: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fe284:
    if (ctx->pc == 0x2FE284u) {
        ctx->pc = 0x2FE284u;
            // 0x2fe284: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE288u;
        goto label_2fe288;
    }
    ctx->pc = 0x2FE280u;
    {
        const bool branch_taken_0x2fe280 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fe280) {
            ctx->pc = 0x2FE284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE280u;
            // 0x2fe284: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE294u;
            goto label_2fe294;
        }
    }
    ctx->pc = 0x2FE288u;
label_2fe288:
    // 0x2fe288: 0xc0400a8  jal         func_1002A0
label_2fe28c:
    if (ctx->pc == 0x2FE28Cu) {
        ctx->pc = 0x2FE28Cu;
            // 0x2fe28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE290u;
        goto label_2fe290;
    }
    ctx->pc = 0x2FE288u;
    SET_GPR_U32(ctx, 31, 0x2FE290u);
    ctx->pc = 0x2FE28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE288u;
            // 0x2fe28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE290u; }
        if (ctx->pc != 0x2FE290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE290u; }
        if (ctx->pc != 0x2FE290u) { return; }
    }
    ctx->pc = 0x2FE290u;
label_2fe290:
    // 0x2fe290: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe294:
    // 0x2fe294: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe298:
    // 0x2fe298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe29c:
    // 0x2fe29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe2a0:
    // 0x2fe2a0: 0x3e00008  jr          $ra
label_2fe2a4:
    if (ctx->pc == 0x2FE2A4u) {
        ctx->pc = 0x2FE2A4u;
            // 0x2fe2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FE2A8u;
        goto label_2fe2a8;
    }
    ctx->pc = 0x2FE2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2A0u;
            // 0x2fe2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE2A8u;
label_2fe2a8:
    // 0x2fe2a8: 0x0  nop
    ctx->pc = 0x2fe2a8u;
    // NOP
label_2fe2ac:
    // 0x2fe2ac: 0x0  nop
    ctx->pc = 0x2fe2acu;
    // NOP
label_2fe2b0:
    // 0x2fe2b0: 0x3e00008  jr          $ra
label_2fe2b4:
    if (ctx->pc == 0x2FE2B4u) {
        ctx->pc = 0x2FE2B4u;
            // 0x2fe2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FE2B8u;
        goto label_2fe2b8;
    }
    ctx->pc = 0x2FE2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2B0u;
            // 0x2fe2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE2B8u;
label_2fe2b8:
    // 0x2fe2b8: 0x0  nop
    ctx->pc = 0x2fe2b8u;
    // NOP
label_2fe2bc:
    // 0x2fe2bc: 0x0  nop
    ctx->pc = 0x2fe2bcu;
    // NOP
label_2fe2c0:
    // 0x2fe2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fe2c4:
    // 0x2fe2c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fe2c8:
    // 0x2fe2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fe2cc:
    // 0x2fe2cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fe2d0:
    // 0x2fe2d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe2d4:
    // 0x2fe2d4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fe2d8:
    if (ctx->pc == 0x2FE2D8u) {
        ctx->pc = 0x2FE2D8u;
            // 0x2fe2d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2DCu;
        goto label_2fe2dc;
    }
    ctx->pc = 0x2FE2D4u;
    {
        const bool branch_taken_0x2fe2d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2D4u;
            // 0x2fe2d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2d4) {
            ctx->pc = 0x2FE340u;
            goto label_2fe340;
        }
    }
    ctx->pc = 0x2FE2DCu;
label_2fe2dc:
    // 0x2fe2dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe2e0:
    // 0x2fe2e0: 0x24423c20  addiu       $v0, $v0, 0x3C20
    ctx->pc = 0x2fe2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15392));
label_2fe2e4:
    // 0x2fe2e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fe2e8:
    if (ctx->pc == 0x2FE2E8u) {
        ctx->pc = 0x2FE2E8u;
            // 0x2fe2e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE2ECu;
        goto label_2fe2ec;
    }
    ctx->pc = 0x2FE2E4u;
    {
        const bool branch_taken_0x2fe2e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2E4u;
            // 0x2fe2e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2e4) {
            ctx->pc = 0x2FE328u;
            goto label_2fe328;
        }
    }
    ctx->pc = 0x2FE2ECu;
label_2fe2ec:
    // 0x2fe2ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe2f0:
    // 0x2fe2f0: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x2fe2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_2fe2f4:
    // 0x2fe2f4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fe2f8:
    if (ctx->pc == 0x2FE2F8u) {
        ctx->pc = 0x2FE2F8u;
            // 0x2fe2f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE2FCu;
        goto label_2fe2fc;
    }
    ctx->pc = 0x2FE2F4u;
    {
        const bool branch_taken_0x2fe2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE2F4u;
            // 0x2fe2f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe2f4) {
            ctx->pc = 0x2FE328u;
            goto label_2fe328;
        }
    }
    ctx->pc = 0x2FE2FCu;
label_2fe2fc:
    // 0x2fe2fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fe2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fe300:
    // 0x2fe300: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fe300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fe304:
    // 0x2fe304: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fe308:
    if (ctx->pc == 0x2FE308u) {
        ctx->pc = 0x2FE308u;
            // 0x2fe308: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE30Cu;
        goto label_2fe30c;
    }
    ctx->pc = 0x2FE304u;
    {
        const bool branch_taken_0x2fe304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE304u;
            // 0x2fe308: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe304) {
            ctx->pc = 0x2FE328u;
            goto label_2fe328;
        }
    }
    ctx->pc = 0x2FE30Cu;
label_2fe30c:
    // 0x2fe30c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fe30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fe310:
    // 0x2fe310: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fe310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fe314:
    // 0x2fe314: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fe314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fe318:
    // 0x2fe318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fe31c:
    if (ctx->pc == 0x2FE31Cu) {
        ctx->pc = 0x2FE31Cu;
            // 0x2fe31c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FE320u;
        goto label_2fe320;
    }
    ctx->pc = 0x2FE318u;
    {
        const bool branch_taken_0x2fe318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE318u;
            // 0x2fe31c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe318) {
            ctx->pc = 0x2FE328u;
            goto label_2fe328;
        }
    }
    ctx->pc = 0x2FE320u;
label_2fe320:
    // 0x2fe320: 0xc07507c  jal         func_1D41F0
label_2fe324:
    if (ctx->pc == 0x2FE324u) {
        ctx->pc = 0x2FE324u;
            // 0x2fe324: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FE328u;
        goto label_2fe328;
    }
    ctx->pc = 0x2FE320u;
    SET_GPR_U32(ctx, 31, 0x2FE328u);
    ctx->pc = 0x2FE324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE320u;
            // 0x2fe324: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE328u; }
        if (ctx->pc != 0x2FE328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE328u; }
        if (ctx->pc != 0x2FE328u) { return; }
    }
    ctx->pc = 0x2FE328u;
label_2fe328:
    // 0x2fe328: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fe328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fe32c:
    // 0x2fe32c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fe32cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fe330:
    // 0x2fe330: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fe334:
    if (ctx->pc == 0x2FE334u) {
        ctx->pc = 0x2FE334u;
            // 0x2fe334: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE338u;
        goto label_2fe338;
    }
    ctx->pc = 0x2FE330u;
    {
        const bool branch_taken_0x2fe330 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fe330) {
            ctx->pc = 0x2FE334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE330u;
            // 0x2fe334: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE344u;
            goto label_2fe344;
        }
    }
    ctx->pc = 0x2FE338u;
label_2fe338:
    // 0x2fe338: 0xc0400a8  jal         func_1002A0
label_2fe33c:
    if (ctx->pc == 0x2FE33Cu) {
        ctx->pc = 0x2FE33Cu;
            // 0x2fe33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE340u;
        goto label_2fe340;
    }
    ctx->pc = 0x2FE338u;
    SET_GPR_U32(ctx, 31, 0x2FE340u);
    ctx->pc = 0x2FE33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE338u;
            // 0x2fe33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE340u; }
        if (ctx->pc != 0x2FE340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE340u; }
        if (ctx->pc != 0x2FE340u) { return; }
    }
    ctx->pc = 0x2FE340u;
label_2fe340:
    // 0x2fe340: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe344:
    // 0x2fe344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe348:
    // 0x2fe348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe34c:
    // 0x2fe34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe350:
    // 0x2fe350: 0x3e00008  jr          $ra
label_2fe354:
    if (ctx->pc == 0x2FE354u) {
        ctx->pc = 0x2FE354u;
            // 0x2fe354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FE358u;
        goto label_2fe358;
    }
    ctx->pc = 0x2FE350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE350u;
            // 0x2fe354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE358u;
label_2fe358:
    // 0x2fe358: 0x0  nop
    ctx->pc = 0x2fe358u;
    // NOP
label_2fe35c:
    // 0x2fe35c: 0x0  nop
    ctx->pc = 0x2fe35cu;
    // NOP
label_2fe360:
    // 0x2fe360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fe364:
    // 0x2fe364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fe368:
    // 0x2fe368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fe36c:
    // 0x2fe36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fe370:
    // 0x2fe370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe374:
    // 0x2fe374: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_2fe378:
    if (ctx->pc == 0x2FE378u) {
        ctx->pc = 0x2FE378u;
            // 0x2fe378: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE37Cu;
        goto label_2fe37c;
    }
    ctx->pc = 0x2FE374u;
    {
        const bool branch_taken_0x2fe374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE374u;
            // 0x2fe378: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe374) {
            ctx->pc = 0x2FE3E0u;
            goto label_2fe3e0;
        }
    }
    ctx->pc = 0x2FE37Cu;
label_2fe37c:
    // 0x2fe37c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe380:
    // 0x2fe380: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x2fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
label_2fe384:
    // 0x2fe384: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2fe388:
    if (ctx->pc == 0x2FE388u) {
        ctx->pc = 0x2FE388u;
            // 0x2fe388: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE38Cu;
        goto label_2fe38c;
    }
    ctx->pc = 0x2FE384u;
    {
        const bool branch_taken_0x2fe384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE384u;
            // 0x2fe388: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe384) {
            ctx->pc = 0x2FE3C8u;
            goto label_2fe3c8;
        }
    }
    ctx->pc = 0x2FE38Cu;
label_2fe38c:
    // 0x2fe38c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fe38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fe390:
    // 0x2fe390: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x2fe390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
label_2fe394:
    // 0x2fe394: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2fe398:
    if (ctx->pc == 0x2FE398u) {
        ctx->pc = 0x2FE398u;
            // 0x2fe398: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE39Cu;
        goto label_2fe39c;
    }
    ctx->pc = 0x2FE394u;
    {
        const bool branch_taken_0x2fe394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE394u;
            // 0x2fe398: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe394) {
            ctx->pc = 0x2FE3C8u;
            goto label_2fe3c8;
        }
    }
    ctx->pc = 0x2FE39Cu;
label_2fe39c:
    // 0x2fe39c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fe39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fe3a0:
    // 0x2fe3a0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fe3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_2fe3a4:
    // 0x2fe3a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2fe3a8:
    if (ctx->pc == 0x2FE3A8u) {
        ctx->pc = 0x2FE3A8u;
            // 0x2fe3a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE3ACu;
        goto label_2fe3ac;
    }
    ctx->pc = 0x2FE3A4u;
    {
        const bool branch_taken_0x2fe3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3A4u;
            // 0x2fe3a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe3a4) {
            ctx->pc = 0x2FE3C8u;
            goto label_2fe3c8;
        }
    }
    ctx->pc = 0x2FE3ACu;
label_2fe3ac:
    // 0x2fe3ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fe3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fe3b0:
    // 0x2fe3b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fe3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2fe3b4:
    // 0x2fe3b4: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fe3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
label_2fe3b8:
    // 0x2fe3b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fe3bc:
    if (ctx->pc == 0x2FE3BCu) {
        ctx->pc = 0x2FE3BCu;
            // 0x2fe3bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FE3C0u;
        goto label_2fe3c0;
    }
    ctx->pc = 0x2FE3B8u;
    {
        const bool branch_taken_0x2fe3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3B8u;
            // 0x2fe3bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe3b8) {
            ctx->pc = 0x2FE3C8u;
            goto label_2fe3c8;
        }
    }
    ctx->pc = 0x2FE3C0u;
label_2fe3c0:
    // 0x2fe3c0: 0xc07507c  jal         func_1D41F0
label_2fe3c4:
    if (ctx->pc == 0x2FE3C4u) {
        ctx->pc = 0x2FE3C4u;
            // 0x2fe3c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2FE3C8u;
        goto label_2fe3c8;
    }
    ctx->pc = 0x2FE3C0u;
    SET_GPR_U32(ctx, 31, 0x2FE3C8u);
    ctx->pc = 0x2FE3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3C0u;
            // 0x2fe3c4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3C8u; }
        if (ctx->pc != 0x2FE3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3C8u; }
        if (ctx->pc != 0x2FE3C8u) { return; }
    }
    ctx->pc = 0x2FE3C8u;
label_2fe3c8:
    // 0x2fe3c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fe3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2fe3cc:
    // 0x2fe3cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fe3ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2fe3d0:
    // 0x2fe3d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2fe3d4:
    if (ctx->pc == 0x2FE3D4u) {
        ctx->pc = 0x2FE3D4u;
            // 0x2fe3d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE3D8u;
        goto label_2fe3d8;
    }
    ctx->pc = 0x2FE3D0u;
    {
        const bool branch_taken_0x2fe3d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fe3d0) {
            ctx->pc = 0x2FE3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3D0u;
            // 0x2fe3d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE3E4u;
            goto label_2fe3e4;
        }
    }
    ctx->pc = 0x2FE3D8u;
label_2fe3d8:
    // 0x2fe3d8: 0xc0400a8  jal         func_1002A0
label_2fe3dc:
    if (ctx->pc == 0x2FE3DCu) {
        ctx->pc = 0x2FE3DCu;
            // 0x2fe3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE3E0u;
        goto label_2fe3e0;
    }
    ctx->pc = 0x2FE3D8u;
    SET_GPR_U32(ctx, 31, 0x2FE3E0u);
    ctx->pc = 0x2FE3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3D8u;
            // 0x2fe3dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3E0u; }
        if (ctx->pc != 0x2FE3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3E0u; }
        if (ctx->pc != 0x2FE3E0u) { return; }
    }
    ctx->pc = 0x2FE3E0u;
label_2fe3e0:
    // 0x2fe3e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fe3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fe3e4:
    // 0x2fe3e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe3e8:
    // 0x2fe3e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe3ec:
    // 0x2fe3ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fe3f0:
    // 0x2fe3f0: 0x3e00008  jr          $ra
label_2fe3f4:
    if (ctx->pc == 0x2FE3F4u) {
        ctx->pc = 0x2FE3F4u;
            // 0x2fe3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FE3F8u;
        goto label_2fe3f8;
    }
    ctx->pc = 0x2FE3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3F0u;
            // 0x2fe3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE3F8u;
label_2fe3f8:
    // 0x2fe3f8: 0x0  nop
    ctx->pc = 0x2fe3f8u;
    // NOP
label_2fe3fc:
    // 0x2fe3fc: 0x0  nop
    ctx->pc = 0x2fe3fcu;
    // NOP
}
