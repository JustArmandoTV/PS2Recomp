#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCD50
// Address: 0x1dcd50 - 0x1dd420
void sub_001DCD50_0x1dcd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCD50_0x1dcd50");
#endif

    switch (ctx->pc) {
        case 0x1dcd50u: goto label_1dcd50;
        case 0x1dcd54u: goto label_1dcd54;
        case 0x1dcd58u: goto label_1dcd58;
        case 0x1dcd5cu: goto label_1dcd5c;
        case 0x1dcd60u: goto label_1dcd60;
        case 0x1dcd64u: goto label_1dcd64;
        case 0x1dcd68u: goto label_1dcd68;
        case 0x1dcd6cu: goto label_1dcd6c;
        case 0x1dcd70u: goto label_1dcd70;
        case 0x1dcd74u: goto label_1dcd74;
        case 0x1dcd78u: goto label_1dcd78;
        case 0x1dcd7cu: goto label_1dcd7c;
        case 0x1dcd80u: goto label_1dcd80;
        case 0x1dcd84u: goto label_1dcd84;
        case 0x1dcd88u: goto label_1dcd88;
        case 0x1dcd8cu: goto label_1dcd8c;
        case 0x1dcd90u: goto label_1dcd90;
        case 0x1dcd94u: goto label_1dcd94;
        case 0x1dcd98u: goto label_1dcd98;
        case 0x1dcd9cu: goto label_1dcd9c;
        case 0x1dcda0u: goto label_1dcda0;
        case 0x1dcda4u: goto label_1dcda4;
        case 0x1dcda8u: goto label_1dcda8;
        case 0x1dcdacu: goto label_1dcdac;
        case 0x1dcdb0u: goto label_1dcdb0;
        case 0x1dcdb4u: goto label_1dcdb4;
        case 0x1dcdb8u: goto label_1dcdb8;
        case 0x1dcdbcu: goto label_1dcdbc;
        case 0x1dcdc0u: goto label_1dcdc0;
        case 0x1dcdc4u: goto label_1dcdc4;
        case 0x1dcdc8u: goto label_1dcdc8;
        case 0x1dcdccu: goto label_1dcdcc;
        case 0x1dcdd0u: goto label_1dcdd0;
        case 0x1dcdd4u: goto label_1dcdd4;
        case 0x1dcdd8u: goto label_1dcdd8;
        case 0x1dcddcu: goto label_1dcddc;
        case 0x1dcde0u: goto label_1dcde0;
        case 0x1dcde4u: goto label_1dcde4;
        case 0x1dcde8u: goto label_1dcde8;
        case 0x1dcdecu: goto label_1dcdec;
        case 0x1dcdf0u: goto label_1dcdf0;
        case 0x1dcdf4u: goto label_1dcdf4;
        case 0x1dcdf8u: goto label_1dcdf8;
        case 0x1dcdfcu: goto label_1dcdfc;
        case 0x1dce00u: goto label_1dce00;
        case 0x1dce04u: goto label_1dce04;
        case 0x1dce08u: goto label_1dce08;
        case 0x1dce0cu: goto label_1dce0c;
        case 0x1dce10u: goto label_1dce10;
        case 0x1dce14u: goto label_1dce14;
        case 0x1dce18u: goto label_1dce18;
        case 0x1dce1cu: goto label_1dce1c;
        case 0x1dce20u: goto label_1dce20;
        case 0x1dce24u: goto label_1dce24;
        case 0x1dce28u: goto label_1dce28;
        case 0x1dce2cu: goto label_1dce2c;
        case 0x1dce30u: goto label_1dce30;
        case 0x1dce34u: goto label_1dce34;
        case 0x1dce38u: goto label_1dce38;
        case 0x1dce3cu: goto label_1dce3c;
        case 0x1dce40u: goto label_1dce40;
        case 0x1dce44u: goto label_1dce44;
        case 0x1dce48u: goto label_1dce48;
        case 0x1dce4cu: goto label_1dce4c;
        case 0x1dce50u: goto label_1dce50;
        case 0x1dce54u: goto label_1dce54;
        case 0x1dce58u: goto label_1dce58;
        case 0x1dce5cu: goto label_1dce5c;
        case 0x1dce60u: goto label_1dce60;
        case 0x1dce64u: goto label_1dce64;
        case 0x1dce68u: goto label_1dce68;
        case 0x1dce6cu: goto label_1dce6c;
        case 0x1dce70u: goto label_1dce70;
        case 0x1dce74u: goto label_1dce74;
        case 0x1dce78u: goto label_1dce78;
        case 0x1dce7cu: goto label_1dce7c;
        case 0x1dce80u: goto label_1dce80;
        case 0x1dce84u: goto label_1dce84;
        case 0x1dce88u: goto label_1dce88;
        case 0x1dce8cu: goto label_1dce8c;
        case 0x1dce90u: goto label_1dce90;
        case 0x1dce94u: goto label_1dce94;
        case 0x1dce98u: goto label_1dce98;
        case 0x1dce9cu: goto label_1dce9c;
        case 0x1dcea0u: goto label_1dcea0;
        case 0x1dcea4u: goto label_1dcea4;
        case 0x1dcea8u: goto label_1dcea8;
        case 0x1dceacu: goto label_1dceac;
        case 0x1dceb0u: goto label_1dceb0;
        case 0x1dceb4u: goto label_1dceb4;
        case 0x1dceb8u: goto label_1dceb8;
        case 0x1dcebcu: goto label_1dcebc;
        case 0x1dcec0u: goto label_1dcec0;
        case 0x1dcec4u: goto label_1dcec4;
        case 0x1dcec8u: goto label_1dcec8;
        case 0x1dceccu: goto label_1dcecc;
        case 0x1dced0u: goto label_1dced0;
        case 0x1dced4u: goto label_1dced4;
        case 0x1dced8u: goto label_1dced8;
        case 0x1dcedcu: goto label_1dcedc;
        case 0x1dcee0u: goto label_1dcee0;
        case 0x1dcee4u: goto label_1dcee4;
        case 0x1dcee8u: goto label_1dcee8;
        case 0x1dceecu: goto label_1dceec;
        case 0x1dcef0u: goto label_1dcef0;
        case 0x1dcef4u: goto label_1dcef4;
        case 0x1dcef8u: goto label_1dcef8;
        case 0x1dcefcu: goto label_1dcefc;
        case 0x1dcf00u: goto label_1dcf00;
        case 0x1dcf04u: goto label_1dcf04;
        case 0x1dcf08u: goto label_1dcf08;
        case 0x1dcf0cu: goto label_1dcf0c;
        case 0x1dcf10u: goto label_1dcf10;
        case 0x1dcf14u: goto label_1dcf14;
        case 0x1dcf18u: goto label_1dcf18;
        case 0x1dcf1cu: goto label_1dcf1c;
        case 0x1dcf20u: goto label_1dcf20;
        case 0x1dcf24u: goto label_1dcf24;
        case 0x1dcf28u: goto label_1dcf28;
        case 0x1dcf2cu: goto label_1dcf2c;
        case 0x1dcf30u: goto label_1dcf30;
        case 0x1dcf34u: goto label_1dcf34;
        case 0x1dcf38u: goto label_1dcf38;
        case 0x1dcf3cu: goto label_1dcf3c;
        case 0x1dcf40u: goto label_1dcf40;
        case 0x1dcf44u: goto label_1dcf44;
        case 0x1dcf48u: goto label_1dcf48;
        case 0x1dcf4cu: goto label_1dcf4c;
        case 0x1dcf50u: goto label_1dcf50;
        case 0x1dcf54u: goto label_1dcf54;
        case 0x1dcf58u: goto label_1dcf58;
        case 0x1dcf5cu: goto label_1dcf5c;
        case 0x1dcf60u: goto label_1dcf60;
        case 0x1dcf64u: goto label_1dcf64;
        case 0x1dcf68u: goto label_1dcf68;
        case 0x1dcf6cu: goto label_1dcf6c;
        case 0x1dcf70u: goto label_1dcf70;
        case 0x1dcf74u: goto label_1dcf74;
        case 0x1dcf78u: goto label_1dcf78;
        case 0x1dcf7cu: goto label_1dcf7c;
        case 0x1dcf80u: goto label_1dcf80;
        case 0x1dcf84u: goto label_1dcf84;
        case 0x1dcf88u: goto label_1dcf88;
        case 0x1dcf8cu: goto label_1dcf8c;
        case 0x1dcf90u: goto label_1dcf90;
        case 0x1dcf94u: goto label_1dcf94;
        case 0x1dcf98u: goto label_1dcf98;
        case 0x1dcf9cu: goto label_1dcf9c;
        case 0x1dcfa0u: goto label_1dcfa0;
        case 0x1dcfa4u: goto label_1dcfa4;
        case 0x1dcfa8u: goto label_1dcfa8;
        case 0x1dcfacu: goto label_1dcfac;
        case 0x1dcfb0u: goto label_1dcfb0;
        case 0x1dcfb4u: goto label_1dcfb4;
        case 0x1dcfb8u: goto label_1dcfb8;
        case 0x1dcfbcu: goto label_1dcfbc;
        case 0x1dcfc0u: goto label_1dcfc0;
        case 0x1dcfc4u: goto label_1dcfc4;
        case 0x1dcfc8u: goto label_1dcfc8;
        case 0x1dcfccu: goto label_1dcfcc;
        case 0x1dcfd0u: goto label_1dcfd0;
        case 0x1dcfd4u: goto label_1dcfd4;
        case 0x1dcfd8u: goto label_1dcfd8;
        case 0x1dcfdcu: goto label_1dcfdc;
        case 0x1dcfe0u: goto label_1dcfe0;
        case 0x1dcfe4u: goto label_1dcfe4;
        case 0x1dcfe8u: goto label_1dcfe8;
        case 0x1dcfecu: goto label_1dcfec;
        case 0x1dcff0u: goto label_1dcff0;
        case 0x1dcff4u: goto label_1dcff4;
        case 0x1dcff8u: goto label_1dcff8;
        case 0x1dcffcu: goto label_1dcffc;
        case 0x1dd000u: goto label_1dd000;
        case 0x1dd004u: goto label_1dd004;
        case 0x1dd008u: goto label_1dd008;
        case 0x1dd00cu: goto label_1dd00c;
        case 0x1dd010u: goto label_1dd010;
        case 0x1dd014u: goto label_1dd014;
        case 0x1dd018u: goto label_1dd018;
        case 0x1dd01cu: goto label_1dd01c;
        case 0x1dd020u: goto label_1dd020;
        case 0x1dd024u: goto label_1dd024;
        case 0x1dd028u: goto label_1dd028;
        case 0x1dd02cu: goto label_1dd02c;
        case 0x1dd030u: goto label_1dd030;
        case 0x1dd034u: goto label_1dd034;
        case 0x1dd038u: goto label_1dd038;
        case 0x1dd03cu: goto label_1dd03c;
        case 0x1dd040u: goto label_1dd040;
        case 0x1dd044u: goto label_1dd044;
        case 0x1dd048u: goto label_1dd048;
        case 0x1dd04cu: goto label_1dd04c;
        case 0x1dd050u: goto label_1dd050;
        case 0x1dd054u: goto label_1dd054;
        case 0x1dd058u: goto label_1dd058;
        case 0x1dd05cu: goto label_1dd05c;
        case 0x1dd060u: goto label_1dd060;
        case 0x1dd064u: goto label_1dd064;
        case 0x1dd068u: goto label_1dd068;
        case 0x1dd06cu: goto label_1dd06c;
        case 0x1dd070u: goto label_1dd070;
        case 0x1dd074u: goto label_1dd074;
        case 0x1dd078u: goto label_1dd078;
        case 0x1dd07cu: goto label_1dd07c;
        case 0x1dd080u: goto label_1dd080;
        case 0x1dd084u: goto label_1dd084;
        case 0x1dd088u: goto label_1dd088;
        case 0x1dd08cu: goto label_1dd08c;
        case 0x1dd090u: goto label_1dd090;
        case 0x1dd094u: goto label_1dd094;
        case 0x1dd098u: goto label_1dd098;
        case 0x1dd09cu: goto label_1dd09c;
        case 0x1dd0a0u: goto label_1dd0a0;
        case 0x1dd0a4u: goto label_1dd0a4;
        case 0x1dd0a8u: goto label_1dd0a8;
        case 0x1dd0acu: goto label_1dd0ac;
        case 0x1dd0b0u: goto label_1dd0b0;
        case 0x1dd0b4u: goto label_1dd0b4;
        case 0x1dd0b8u: goto label_1dd0b8;
        case 0x1dd0bcu: goto label_1dd0bc;
        case 0x1dd0c0u: goto label_1dd0c0;
        case 0x1dd0c4u: goto label_1dd0c4;
        case 0x1dd0c8u: goto label_1dd0c8;
        case 0x1dd0ccu: goto label_1dd0cc;
        case 0x1dd0d0u: goto label_1dd0d0;
        case 0x1dd0d4u: goto label_1dd0d4;
        case 0x1dd0d8u: goto label_1dd0d8;
        case 0x1dd0dcu: goto label_1dd0dc;
        case 0x1dd0e0u: goto label_1dd0e0;
        case 0x1dd0e4u: goto label_1dd0e4;
        case 0x1dd0e8u: goto label_1dd0e8;
        case 0x1dd0ecu: goto label_1dd0ec;
        case 0x1dd0f0u: goto label_1dd0f0;
        case 0x1dd0f4u: goto label_1dd0f4;
        case 0x1dd0f8u: goto label_1dd0f8;
        case 0x1dd0fcu: goto label_1dd0fc;
        case 0x1dd100u: goto label_1dd100;
        case 0x1dd104u: goto label_1dd104;
        case 0x1dd108u: goto label_1dd108;
        case 0x1dd10cu: goto label_1dd10c;
        case 0x1dd110u: goto label_1dd110;
        case 0x1dd114u: goto label_1dd114;
        case 0x1dd118u: goto label_1dd118;
        case 0x1dd11cu: goto label_1dd11c;
        case 0x1dd120u: goto label_1dd120;
        case 0x1dd124u: goto label_1dd124;
        case 0x1dd128u: goto label_1dd128;
        case 0x1dd12cu: goto label_1dd12c;
        case 0x1dd130u: goto label_1dd130;
        case 0x1dd134u: goto label_1dd134;
        case 0x1dd138u: goto label_1dd138;
        case 0x1dd13cu: goto label_1dd13c;
        case 0x1dd140u: goto label_1dd140;
        case 0x1dd144u: goto label_1dd144;
        case 0x1dd148u: goto label_1dd148;
        case 0x1dd14cu: goto label_1dd14c;
        case 0x1dd150u: goto label_1dd150;
        case 0x1dd154u: goto label_1dd154;
        case 0x1dd158u: goto label_1dd158;
        case 0x1dd15cu: goto label_1dd15c;
        case 0x1dd160u: goto label_1dd160;
        case 0x1dd164u: goto label_1dd164;
        case 0x1dd168u: goto label_1dd168;
        case 0x1dd16cu: goto label_1dd16c;
        case 0x1dd170u: goto label_1dd170;
        case 0x1dd174u: goto label_1dd174;
        case 0x1dd178u: goto label_1dd178;
        case 0x1dd17cu: goto label_1dd17c;
        case 0x1dd180u: goto label_1dd180;
        case 0x1dd184u: goto label_1dd184;
        case 0x1dd188u: goto label_1dd188;
        case 0x1dd18cu: goto label_1dd18c;
        case 0x1dd190u: goto label_1dd190;
        case 0x1dd194u: goto label_1dd194;
        case 0x1dd198u: goto label_1dd198;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1a0u: goto label_1dd1a0;
        case 0x1dd1a4u: goto label_1dd1a4;
        case 0x1dd1a8u: goto label_1dd1a8;
        case 0x1dd1acu: goto label_1dd1ac;
        case 0x1dd1b0u: goto label_1dd1b0;
        case 0x1dd1b4u: goto label_1dd1b4;
        case 0x1dd1b8u: goto label_1dd1b8;
        case 0x1dd1bcu: goto label_1dd1bc;
        case 0x1dd1c0u: goto label_1dd1c0;
        case 0x1dd1c4u: goto label_1dd1c4;
        case 0x1dd1c8u: goto label_1dd1c8;
        case 0x1dd1ccu: goto label_1dd1cc;
        case 0x1dd1d0u: goto label_1dd1d0;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1d8u: goto label_1dd1d8;
        case 0x1dd1dcu: goto label_1dd1dc;
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd1e4u: goto label_1dd1e4;
        case 0x1dd1e8u: goto label_1dd1e8;
        case 0x1dd1ecu: goto label_1dd1ec;
        case 0x1dd1f0u: goto label_1dd1f0;
        case 0x1dd1f4u: goto label_1dd1f4;
        case 0x1dd1f8u: goto label_1dd1f8;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd204u: goto label_1dd204;
        case 0x1dd208u: goto label_1dd208;
        case 0x1dd20cu: goto label_1dd20c;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd214u: goto label_1dd214;
        case 0x1dd218u: goto label_1dd218;
        case 0x1dd21cu: goto label_1dd21c;
        case 0x1dd220u: goto label_1dd220;
        case 0x1dd224u: goto label_1dd224;
        case 0x1dd228u: goto label_1dd228;
        case 0x1dd22cu: goto label_1dd22c;
        case 0x1dd230u: goto label_1dd230;
        case 0x1dd234u: goto label_1dd234;
        case 0x1dd238u: goto label_1dd238;
        case 0x1dd23cu: goto label_1dd23c;
        case 0x1dd240u: goto label_1dd240;
        case 0x1dd244u: goto label_1dd244;
        case 0x1dd248u: goto label_1dd248;
        case 0x1dd24cu: goto label_1dd24c;
        case 0x1dd250u: goto label_1dd250;
        case 0x1dd254u: goto label_1dd254;
        case 0x1dd258u: goto label_1dd258;
        case 0x1dd25cu: goto label_1dd25c;
        case 0x1dd260u: goto label_1dd260;
        case 0x1dd264u: goto label_1dd264;
        case 0x1dd268u: goto label_1dd268;
        case 0x1dd26cu: goto label_1dd26c;
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd278u: goto label_1dd278;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd280u: goto label_1dd280;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd28cu: goto label_1dd28c;
        case 0x1dd290u: goto label_1dd290;
        case 0x1dd294u: goto label_1dd294;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd29cu: goto label_1dd29c;
        case 0x1dd2a0u: goto label_1dd2a0;
        case 0x1dd2a4u: goto label_1dd2a4;
        case 0x1dd2a8u: goto label_1dd2a8;
        case 0x1dd2acu: goto label_1dd2ac;
        case 0x1dd2b0u: goto label_1dd2b0;
        case 0x1dd2b4u: goto label_1dd2b4;
        case 0x1dd2b8u: goto label_1dd2b8;
        case 0x1dd2bcu: goto label_1dd2bc;
        case 0x1dd2c0u: goto label_1dd2c0;
        case 0x1dd2c4u: goto label_1dd2c4;
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2d0u: goto label_1dd2d0;
        case 0x1dd2d4u: goto label_1dd2d4;
        case 0x1dd2d8u: goto label_1dd2d8;
        case 0x1dd2dcu: goto label_1dd2dc;
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2e4u: goto label_1dd2e4;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd2f0u: goto label_1dd2f0;
        case 0x1dd2f4u: goto label_1dd2f4;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd2fcu: goto label_1dd2fc;
        case 0x1dd300u: goto label_1dd300;
        case 0x1dd304u: goto label_1dd304;
        case 0x1dd308u: goto label_1dd308;
        case 0x1dd30cu: goto label_1dd30c;
        case 0x1dd310u: goto label_1dd310;
        case 0x1dd314u: goto label_1dd314;
        case 0x1dd318u: goto label_1dd318;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd320u: goto label_1dd320;
        case 0x1dd324u: goto label_1dd324;
        case 0x1dd328u: goto label_1dd328;
        case 0x1dd32cu: goto label_1dd32c;
        case 0x1dd330u: goto label_1dd330;
        case 0x1dd334u: goto label_1dd334;
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd33cu: goto label_1dd33c;
        case 0x1dd340u: goto label_1dd340;
        case 0x1dd344u: goto label_1dd344;
        case 0x1dd348u: goto label_1dd348;
        case 0x1dd34cu: goto label_1dd34c;
        case 0x1dd350u: goto label_1dd350;
        case 0x1dd354u: goto label_1dd354;
        case 0x1dd358u: goto label_1dd358;
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd360u: goto label_1dd360;
        case 0x1dd364u: goto label_1dd364;
        case 0x1dd368u: goto label_1dd368;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd370u: goto label_1dd370;
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd378u: goto label_1dd378;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd384u: goto label_1dd384;
        case 0x1dd388u: goto label_1dd388;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd390u: goto label_1dd390;
        case 0x1dd394u: goto label_1dd394;
        case 0x1dd398u: goto label_1dd398;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3a0u: goto label_1dd3a0;
        case 0x1dd3a4u: goto label_1dd3a4;
        case 0x1dd3a8u: goto label_1dd3a8;
        case 0x1dd3acu: goto label_1dd3ac;
        case 0x1dd3b0u: goto label_1dd3b0;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3b8u: goto label_1dd3b8;
        case 0x1dd3bcu: goto label_1dd3bc;
        case 0x1dd3c0u: goto label_1dd3c0;
        case 0x1dd3c4u: goto label_1dd3c4;
        case 0x1dd3c8u: goto label_1dd3c8;
        case 0x1dd3ccu: goto label_1dd3cc;
        case 0x1dd3d0u: goto label_1dd3d0;
        case 0x1dd3d4u: goto label_1dd3d4;
        case 0x1dd3d8u: goto label_1dd3d8;
        case 0x1dd3dcu: goto label_1dd3dc;
        case 0x1dd3e0u: goto label_1dd3e0;
        case 0x1dd3e4u: goto label_1dd3e4;
        case 0x1dd3e8u: goto label_1dd3e8;
        case 0x1dd3ecu: goto label_1dd3ec;
        case 0x1dd3f0u: goto label_1dd3f0;
        case 0x1dd3f4u: goto label_1dd3f4;
        case 0x1dd3f8u: goto label_1dd3f8;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd400u: goto label_1dd400;
        case 0x1dd404u: goto label_1dd404;
        case 0x1dd408u: goto label_1dd408;
        case 0x1dd40cu: goto label_1dd40c;
        case 0x1dd410u: goto label_1dd410;
        case 0x1dd414u: goto label_1dd414;
        case 0x1dd418u: goto label_1dd418;
        case 0x1dd41cu: goto label_1dd41c;
        default: break;
    }

    ctx->pc = 0x1dcd50u;

label_1dcd50:
    // 0x1dcd50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dcd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dcd54:
    // 0x1dcd54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dcd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1dcd58:
    // 0x1dcd58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dcd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dcd5c:
    // 0x1dcd5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dcd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dcd60:
    // 0x1dcd60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dcd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dcd64:
    // 0x1dcd64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dcd68:
    // 0x1dcd68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcd6c:
    // 0x1dcd6c: 0x8c830da8  lw          $v1, 0xDA8($a0)
    ctx->pc = 0x1dcd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3496)));
label_1dcd70:
    // 0x1dcd70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1dcd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1dcd74:
    // 0x1dcd74: 0x1060019f  beqz        $v1, . + 4 + (0x19F << 2)
label_1dcd78:
    if (ctx->pc == 0x1DCD78u) {
        ctx->pc = 0x1DCD78u;
            // 0x1dcd78: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD7Cu;
        goto label_1dcd7c;
    }
    ctx->pc = 0x1DCD74u;
    {
        const bool branch_taken_0x1dcd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD74u;
            // 0x1dcd78: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd74) {
            ctx->pc = 0x1DD3F4u;
            goto label_1dd3f4;
        }
    }
    ctx->pc = 0x1DCD7Cu;
label_1dcd7c:
    // 0x1dcd7c: 0x8e820e38  lw          $v0, 0xE38($s4)
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3640)));
label_1dcd80:
    // 0x1dcd80: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1dcd80u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1dcd84:
    // 0x1dcd84: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1dcd88:
    if (ctx->pc == 0x1DCD88u) {
        ctx->pc = 0x1DCD88u;
            // 0x1dcd88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD8Cu;
        goto label_1dcd8c;
    }
    ctx->pc = 0x1DCD84u;
    {
        const bool branch_taken_0x1dcd84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DCD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD84u;
            // 0x1dcd88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd84) {
            ctx->pc = 0x1DCD9Cu;
            goto label_1dcd9c;
        }
    }
    ctx->pc = 0x1DCD8Cu;
label_1dcd8c:
    // 0x1dcd8c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1dcd8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1dcd90:
    // 0x1dcd90: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1dcd94:
    if (ctx->pc == 0x1DCD94u) {
        ctx->pc = 0x1DCD98u;
        goto label_1dcd98;
    }
    ctx->pc = 0x1DCD90u;
    {
        const bool branch_taken_0x1dcd90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd90) {
            ctx->pc = 0x1DCD9Cu;
            goto label_1dcd9c;
        }
    }
    ctx->pc = 0x1DCD98u;
label_1dcd98:
    // 0x1dcd98: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dcd98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd9c:
    // 0x1dcd9c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1dcda0:
    if (ctx->pc == 0x1DCDA0u) {
        ctx->pc = 0x1DCDA4u;
        goto label_1dcda4;
    }
    ctx->pc = 0x1DCD9Cu;
    {
        const bool branch_taken_0x1dcd9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd9c) {
            ctx->pc = 0x1DCDDCu;
            goto label_1dcddc;
        }
    }
    ctx->pc = 0x1DCDA4u;
label_1dcda4:
    // 0x1dcda4: 0x828211aa  lb          $v0, 0x11AA($s4)
    ctx->pc = 0x1dcda4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4522)));
label_1dcda8:
    // 0x1dcda8: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1dcda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1dcdac:
    // 0x1dcdac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dcdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dcdb0:
    // 0x1dcdb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dcdb4:
    if (ctx->pc == 0x1DCDB4u) {
        ctx->pc = 0x1DCDB8u;
        goto label_1dcdb8;
    }
    ctx->pc = 0x1DCDB0u;
    {
        const bool branch_taken_0x1dcdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdb0) {
            ctx->pc = 0x1DCDD0u;
            goto label_1dcdd0;
        }
    }
    ctx->pc = 0x1DCDB8u;
label_1dcdb8:
    // 0x1dcdb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1dcdbc:
    // 0x1dcdbc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1dcdc0:
    // 0x1dcdc0: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1dcdc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1dcdc4:
    // 0x1dcdc4: 0x401027  not         $v0, $v0
    ctx->pc = 0x1dcdc4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1dcdc8:
    // 0x1dcdc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dcdc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dcdcc:
    // 0x1dcdcc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dcdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dcdd0:
    // 0x1dcdd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1dcdd4:
    if (ctx->pc == 0x1DCDD4u) {
        ctx->pc = 0x1DCDD8u;
        goto label_1dcdd8;
    }
    ctx->pc = 0x1DCDD0u;
    {
        const bool branch_taken_0x1dcdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdd0) {
            ctx->pc = 0x1DCDDCu;
            goto label_1dcddc;
        }
    }
    ctx->pc = 0x1DCDD8u;
label_1dcdd8:
    // 0x1dcdd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dcdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcddc:
    // 0x1dcddc: 0x10800136  beqz        $a0, . + 4 + (0x136 << 2)
label_1dcde0:
    if (ctx->pc == 0x1DCDE0u) {
        ctx->pc = 0x1DCDE4u;
        goto label_1dcde4;
    }
    ctx->pc = 0x1DCDDCu;
    {
        const bool branch_taken_0x1dcddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcddc) {
            ctx->pc = 0x1DD2B8u;
            goto label_1dd2b8;
        }
    }
    ctx->pc = 0x1DCDE4u;
label_1dcde4:
    // 0x1dcde4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dcde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dcde8:
    // 0x1dcde8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdec:
    // 0x1dcdec: 0x8c530e80  lw          $s3, 0xE80($v0)
    ctx->pc = 0x1dcdecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1dcdf0:
    // 0x1dcdf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dcdf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdf4:
    // 0x1dcdf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dcdf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdf8:
    // 0x1dcdf8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1dcdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1dcdfc:
    // 0x1dcdfc: 0xc077574  jal         func_1DD5D0
label_1dce00:
    if (ctx->pc == 0x1DCE00u) {
        ctx->pc = 0x1DCE00u;
            // 0x1dce00: 0x3451a980  ori         $s1, $v0, 0xA980 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43392);
        ctx->pc = 0x1DCE04u;
        goto label_1dce04;
    }
    ctx->pc = 0x1DCDFCu;
    SET_GPR_U32(ctx, 31, 0x1DCE04u);
    ctx->pc = 0x1DCE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCDFCu;
            // 0x1dce00: 0x3451a980  ori         $s1, $v0, 0xA980 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE04u; }
        if (ctx->pc != 0x1DCE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE04u; }
        if (ctx->pc != 0x1DCE04u) { return; }
    }
    ctx->pc = 0x1DCE04u;
label_1dce04:
    // 0x1dce04: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1dce04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dce08:
    // 0x1dce08: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_1dce0c:
    if (ctx->pc == 0x1DCE0Cu) {
        ctx->pc = 0x1DCE0Cu;
            // 0x1dce0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE10u;
        goto label_1dce10;
    }
    ctx->pc = 0x1DCE08u;
    {
        const bool branch_taken_0x1dce08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dce08) {
            ctx->pc = 0x1DCE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE08u;
            // 0x1dce0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCE18u;
            goto label_1dce18;
        }
    }
    ctx->pc = 0x1DCE10u;
label_1dce10:
    // 0x1dce10: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1dce10u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1dce14:
    // 0x1dce14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dce14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dce18:
    // 0x1dce18: 0xc0770e4  jal         func_1DC390
label_1dce1c:
    if (ctx->pc == 0x1DCE1Cu) {
        ctx->pc = 0x1DCE20u;
        goto label_1dce20;
    }
    ctx->pc = 0x1DCE18u;
    SET_GPR_U32(ctx, 31, 0x1DCE20u);
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE20u; }
        if (ctx->pc != 0x1DCE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE20u; }
        if (ctx->pc != 0x1DCE20u) { return; }
    }
    ctx->pc = 0x1DCE20u;
label_1dce20:
    // 0x1dce20: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dce24:
    // 0x1dce24: 0x504300bc  beql        $v0, $v1, . + 4 + (0xBC << 2)
label_1dce28:
    if (ctx->pc == 0x1DCE28u) {
        ctx->pc = 0x1DCE28u;
            // 0x1dce28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE2Cu;
        goto label_1dce2c;
    }
    ctx->pc = 0x1DCE24u;
    {
        const bool branch_taken_0x1dce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dce24) {
            ctx->pc = 0x1DCE28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE24u;
            // 0x1dce28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD118u;
            goto label_1dd118;
        }
    }
    ctx->pc = 0x1DCE2Cu;
label_1dce2c:
    // 0x1dce2c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1dce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dce30:
    // 0x1dce30: 0x5043007a  beql        $v0, $v1, . + 4 + (0x7A << 2)
label_1dce34:
    if (ctx->pc == 0x1DCE34u) {
        ctx->pc = 0x1DCE34u;
            // 0x1dce34: 0x8e820ea8  lw          $v0, 0xEA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3752)));
        ctx->pc = 0x1DCE38u;
        goto label_1dce38;
    }
    ctx->pc = 0x1DCE30u;
    {
        const bool branch_taken_0x1dce30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dce30) {
            ctx->pc = 0x1DCE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE30u;
            // 0x1dce34: 0x8e820ea8  lw          $v0, 0xEA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD01Cu;
            goto label_1dd01c;
        }
    }
    ctx->pc = 0x1DCE38u;
label_1dce38:
    // 0x1dce38: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1dce38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dce3c:
    // 0x1dce3c: 0x50430055  beql        $v0, $v1, . + 4 + (0x55 << 2)
label_1dce40:
    if (ctx->pc == 0x1DCE40u) {
        ctx->pc = 0x1DCE40u;
            // 0x1dce40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE44u;
        goto label_1dce44;
    }
    ctx->pc = 0x1DCE3Cu;
    {
        const bool branch_taken_0x1dce3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dce3c) {
            ctx->pc = 0x1DCE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE3Cu;
            // 0x1dce40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCF94u;
            goto label_1dcf94;
        }
    }
    ctx->pc = 0x1DCE44u;
label_1dce44:
    // 0x1dce44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dce48:
    // 0x1dce48: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_1dce4c:
    if (ctx->pc == 0x1DCE4Cu) {
        ctx->pc = 0x1DCE50u;
        goto label_1dce50;
    }
    ctx->pc = 0x1DCE48u;
    {
        const bool branch_taken_0x1dce48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dce48) {
            ctx->pc = 0x1DCF1Cu;
            goto label_1dcf1c;
        }
    }
    ctx->pc = 0x1DCE50u;
label_1dce50:
    // 0x1dce50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dce54:
    // 0x1dce54: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_1dce58:
    if (ctx->pc == 0x1DCE58u) {
        ctx->pc = 0x1DCE58u;
            // 0x1dce58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE5Cu;
        goto label_1dce5c;
    }
    ctx->pc = 0x1DCE54u;
    {
        const bool branch_taken_0x1dce54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dce54) {
            ctx->pc = 0x1DCE58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE54u;
            // 0x1dce58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCE64u;
            goto label_1dce64;
        }
    }
    ctx->pc = 0x1DCE5Cu;
label_1dce5c:
    // 0x1dce5c: 0x100000ed  b           . + 4 + (0xED << 2)
label_1dce60:
    if (ctx->pc == 0x1DCE60u) {
        ctx->pc = 0x1DCE60u;
            // 0x1dce60: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DCE64u;
        goto label_1dce64;
    }
    ctx->pc = 0x1DCE5Cu;
    {
        const bool branch_taken_0x1dce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE5Cu;
            // 0x1dce60: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce5c) {
            ctx->pc = 0x1DD214u;
            goto label_1dd214;
        }
    }
    ctx->pc = 0x1DCE64u;
label_1dce64:
    // 0x1dce64: 0xc077564  jal         func_1DD590
label_1dce68:
    if (ctx->pc == 0x1DCE68u) {
        ctx->pc = 0x1DCE6Cu;
        goto label_1dce6c;
    }
    ctx->pc = 0x1DCE64u;
    SET_GPR_U32(ctx, 31, 0x1DCE6Cu);
    ctx->pc = 0x1DD590u;
    if (runtime->hasFunction(0x1DD590u)) {
        auto targetFn = runtime->lookupFunction(0x1DD590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE6Cu; }
        if (ctx->pc != 0x1DCE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD590_0x1dd590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE6Cu; }
        if (ctx->pc != 0x1DCE6Cu) { return; }
    }
    ctx->pc = 0x1DCE6Cu;
label_1dce6c:
    // 0x1dce6c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_1dce70:
    if (ctx->pc == 0x1DCE70u) {
        ctx->pc = 0x1DCE70u;
            // 0x1dce70: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DCE74u;
        goto label_1dce74;
    }
    ctx->pc = 0x1DCE6Cu;
    {
        const bool branch_taken_0x1dce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce6c) {
            ctx->pc = 0x1DCE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE6Cu;
            // 0x1dce70: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCF0Cu;
            goto label_1dcf0c;
        }
    }
    ctx->pc = 0x1DCE74u;
label_1dce74:
    // 0x1dce74: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_1dce78:
    if (ctx->pc == 0x1DCE78u) {
        ctx->pc = 0x1DCE78u;
            // 0x1dce78: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DCE7Cu;
        goto label_1dce7c;
    }
    ctx->pc = 0x1DCE74u;
    {
        const bool branch_taken_0x1dce74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce74) {
            ctx->pc = 0x1DCE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE74u;
            // 0x1dce78: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCEB4u;
            goto label_1dceb4;
        }
    }
    ctx->pc = 0x1DCE7Cu;
label_1dce7c:
    // 0x1dce7c: 0xc077560  jal         func_1DD580
label_1dce80:
    if (ctx->pc == 0x1DCE80u) {
        ctx->pc = 0x1DCE80u;
            // 0x1dce80: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DCE84u;
        goto label_1dce84;
    }
    ctx->pc = 0x1DCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE84u);
    ctx->pc = 0x1DCE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE7Cu;
            // 0x1dce80: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD580u;
    if (runtime->hasFunction(0x1DD580u)) {
        auto targetFn = runtime->lookupFunction(0x1DD580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE84u; }
        if (ctx->pc != 0x1DCE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD580_0x1dd580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE84u; }
        if (ctx->pc != 0x1DCE84u) { return; }
    }
    ctx->pc = 0x1DCE84u;
label_1dce84:
    // 0x1dce84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dce84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dce88:
    // 0x1dce88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dce8c:
    // 0x1dce8c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1dce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1dce90:
    // 0x1dce90: 0xc07731c  jal         func_1DCC70
label_1dce94:
    if (ctx->pc == 0x1DCE94u) {
        ctx->pc = 0x1DCE94u;
            // 0x1dce94: 0x34516d98  ori         $s1, $v0, 0x6D98 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28056);
        ctx->pc = 0x1DCE98u;
        goto label_1dce98;
    }
    ctx->pc = 0x1DCE90u;
    SET_GPR_U32(ctx, 31, 0x1DCE98u);
    ctx->pc = 0x1DCE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCE90u;
            // 0x1dce94: 0x34516d98  ori         $s1, $v0, 0x6D98 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28056);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE98u; }
        if (ctx->pc != 0x1DCE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCE98u; }
        if (ctx->pc != 0x1DCE98u) { return; }
    }
    ctx->pc = 0x1DCE98u;
label_1dce98:
    // 0x1dce98: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x1dce98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1dce9c:
    // 0x1dce9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcea0:
    // 0x1dcea0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dcea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dcea4:
    // 0x1dcea4: 0x320f809  jalr        $t9
label_1dcea8:
    if (ctx->pc == 0x1DCEA8u) {
        ctx->pc = 0x1DCEA8u;
            // 0x1dcea8: 0x24050da9  addiu       $a1, $zero, 0xDA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3497));
        ctx->pc = 0x1DCEACu;
        goto label_1dceac;
    }
    ctx->pc = 0x1DCEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCEACu);
        ctx->pc = 0x1DCEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEA4u;
            // 0x1dcea8: 0x24050da9  addiu       $a1, $zero, 0xDA9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3497));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DCEACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEACu; }
            if (ctx->pc != 0x1DCEACu) { return; }
        }
        }
    }
    ctx->pc = 0x1DCEACu;
label_1dceac:
    // 0x1dceac: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dceb0:
    if (ctx->pc == 0x1DCEB0u) {
        ctx->pc = 0x1DCEB0u;
            // 0x1dceb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEB4u;
        goto label_1dceb4;
    }
    ctx->pc = 0x1DCEACu;
    {
        const bool branch_taken_0x1dceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEACu;
            // 0x1dceb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dceac) {
            ctx->pc = 0x1DCEC4u;
            goto label_1dcec4;
        }
    }
    ctx->pc = 0x1DCEB4u;
label_1dceb4:
    // 0x1dceb4: 0xc07755c  jal         func_1DD570
label_1dceb8:
    if (ctx->pc == 0x1DCEB8u) {
        ctx->pc = 0x1DCEBCu;
        goto label_1dcebc;
    }
    ctx->pc = 0x1DCEB4u;
    SET_GPR_U32(ctx, 31, 0x1DCEBCu);
    ctx->pc = 0x1DD570u;
    if (runtime->hasFunction(0x1DD570u)) {
        auto targetFn = runtime->lookupFunction(0x1DD570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEBCu; }
        if (ctx->pc != 0x1DCEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD570_0x1dd570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEBCu; }
        if (ctx->pc != 0x1DCEBCu) { return; }
    }
    ctx->pc = 0x1DCEBCu;
label_1dcebc:
    // 0x1dcebc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dcebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcec0:
    // 0x1dcec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dcec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dcec4:
    // 0x1dcec4: 0xc0ba5f4  jal         func_2E97D0
label_1dcec8:
    if (ctx->pc == 0x1DCEC8u) {
        ctx->pc = 0x1DCECCu;
        goto label_1dcecc;
    }
    ctx->pc = 0x1DCEC4u;
    SET_GPR_U32(ctx, 31, 0x1DCECCu);
    ctx->pc = 0x2E97D0u;
    if (runtime->hasFunction(0x2E97D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E97D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCECCu; }
        if (ctx->pc != 0x1DCECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E97D0_0x2e97d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCECCu; }
        if (ctx->pc != 0x1DCECCu) { return; }
    }
    ctx->pc = 0x1DCECCu;
label_1dcecc:
    // 0x1dcecc: 0xc07732c  jal         func_1DCCB0
label_1dced0:
    if (ctx->pc == 0x1DCED0u) {
        ctx->pc = 0x1DCED0u;
            // 0x1dced0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCED4u;
        goto label_1dced4;
    }
    ctx->pc = 0x1DCECCu;
    SET_GPR_U32(ctx, 31, 0x1DCED4u);
    ctx->pc = 0x1DCED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCECCu;
            // 0x1dced0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCED4u; }
        if (ctx->pc != 0x1DCED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCED4u; }
        if (ctx->pc != 0x1DCED4u) { return; }
    }
    ctx->pc = 0x1DCED4u;
label_1dced4:
    // 0x1dced4: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_1dced8:
    if (ctx->pc == 0x1DCED8u) {
        ctx->pc = 0x1DCEDCu;
        goto label_1dcedc;
    }
    ctx->pc = 0x1DCED4u;
    {
        const bool branch_taken_0x1dced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dced4) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DCEDCu;
label_1dcedc:
    // 0x1dcedc: 0xc077320  jal         func_1DCC80
label_1dcee0:
    if (ctx->pc == 0x1DCEE0u) {
        ctx->pc = 0x1DCEE0u;
            // 0x1dcee0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEE4u;
        goto label_1dcee4;
    }
    ctx->pc = 0x1DCEDCu;
    SET_GPR_U32(ctx, 31, 0x1DCEE4u);
    ctx->pc = 0x1DCEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEDCu;
            // 0x1dcee0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEE4u; }
        if (ctx->pc != 0x1DCEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCEE4u; }
        if (ctx->pc != 0x1DCEE4u) { return; }
    }
    ctx->pc = 0x1DCEE4u;
label_1dcee4:
    // 0x1dcee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dcee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcee8:
    // 0x1dcee8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1dcee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dceec:
    // 0x1dceec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1dceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1dcef0:
    // 0x1dcef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dcef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dcef4:
    // 0x1dcef4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dcef8:
    // 0x1dcef8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1dcef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1dcefc:
    // 0x1dcefc: 0xc077554  jal         func_1DD550
label_1dcf00:
    if (ctx->pc == 0x1DCF00u) {
        ctx->pc = 0x1DCF00u;
            // 0x1dcf00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF04u;
        goto label_1dcf04;
    }
    ctx->pc = 0x1DCEFCu;
    SET_GPR_U32(ctx, 31, 0x1DCF04u);
    ctx->pc = 0x1DCF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEFCu;
            // 0x1dcf00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF04u; }
        if (ctx->pc != 0x1DCF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF04u; }
        if (ctx->pc != 0x1DCF04u) { return; }
    }
    ctx->pc = 0x1DCF04u;
label_1dcf04:
    // 0x1dcf04: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_1dcf08:
    if (ctx->pc == 0x1DCF08u) {
        ctx->pc = 0x1DCF0Cu;
        goto label_1dcf0c;
    }
    ctx->pc = 0x1DCF04u;
    {
        const bool branch_taken_0x1dcf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf04) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DCF0Cu;
label_1dcf0c:
    // 0x1dcf0c: 0xc077550  jal         func_1DD540
label_1dcf10:
    if (ctx->pc == 0x1DCF10u) {
        ctx->pc = 0x1DCF14u;
        goto label_1dcf14;
    }
    ctx->pc = 0x1DCF0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF14u);
    ctx->pc = 0x1DD540u;
    if (runtime->hasFunction(0x1DD540u)) {
        auto targetFn = runtime->lookupFunction(0x1DD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF14u; }
        if (ctx->pc != 0x1DCF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD540_0x1dd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF14u; }
        if (ctx->pc != 0x1DCF14u) { return; }
    }
    ctx->pc = 0x1DCF14u;
label_1dcf14:
    // 0x1dcf14: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_1dcf18:
    if (ctx->pc == 0x1DCF18u) {
        ctx->pc = 0x1DCF18u;
            // 0x1dcf18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF1Cu;
        goto label_1dcf1c;
    }
    ctx->pc = 0x1DCF14u;
    {
        const bool branch_taken_0x1dcf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF14u;
            // 0x1dcf18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf14) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DCF1Cu;
label_1dcf1c:
    // 0x1dcf1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dcf20:
    // 0x1dcf20: 0x8c530ea4  lw          $s3, 0xEA4($v0)
    ctx->pc = 0x1dcf20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1dcf24:
    // 0x1dcf24: 0xc077320  jal         func_1DCC80
label_1dcf28:
    if (ctx->pc == 0x1DCF28u) {
        ctx->pc = 0x1DCF28u;
            // 0x1dcf28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF2Cu;
        goto label_1dcf2c;
    }
    ctx->pc = 0x1DCF24u;
    SET_GPR_U32(ctx, 31, 0x1DCF2Cu);
    ctx->pc = 0x1DCF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF24u;
            // 0x1dcf28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF2Cu; }
        if (ctx->pc != 0x1DCF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF2Cu; }
        if (ctx->pc != 0x1DCF2Cu) { return; }
    }
    ctx->pc = 0x1DCF2Cu;
label_1dcf2c:
    // 0x1dcf2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dcf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dcf30:
    // 0x1dcf30: 0xc07754c  jal         func_1DD530
label_1dcf34:
    if (ctx->pc == 0x1DCF34u) {
        ctx->pc = 0x1DCF34u;
            // 0x1dcf34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF38u;
        goto label_1dcf38;
    }
    ctx->pc = 0x1DCF30u;
    SET_GPR_U32(ctx, 31, 0x1DCF38u);
    ctx->pc = 0x1DCF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF30u;
            // 0x1dcf34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD530u;
    if (runtime->hasFunction(0x1DD530u)) {
        auto targetFn = runtime->lookupFunction(0x1DD530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF38u; }
        if (ctx->pc != 0x1DCF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD530_0x1dd530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF38u; }
        if (ctx->pc != 0x1DCF38u) { return; }
    }
    ctx->pc = 0x1DCF38u;
label_1dcf38:
    // 0x1dcf38: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1dcf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dcf3c:
    // 0x1dcf3c: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x1dcf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1dcf40:
    // 0x1dcf40: 0x146200b7  bne         $v1, $v0, . + 4 + (0xB7 << 2)
label_1dcf44:
    if (ctx->pc == 0x1DCF44u) {
        ctx->pc = 0x1DCF48u;
        goto label_1dcf48;
    }
    ctx->pc = 0x1DCF40u;
    {
        const bool branch_taken_0x1dcf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf40) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DCF48u;
label_1dcf48:
    // 0x1dcf48: 0x120000b5  beqz        $s0, . + 4 + (0xB5 << 2)
label_1dcf4c:
    if (ctx->pc == 0x1DCF4Cu) {
        ctx->pc = 0x1DCF50u;
        goto label_1dcf50;
    }
    ctx->pc = 0x1DCF48u;
    {
        const bool branch_taken_0x1dcf48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf48) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DCF50u;
label_1dcf50:
    // 0x1dcf50: 0xc077548  jal         func_1DD520
label_1dcf54:
    if (ctx->pc == 0x1DCF54u) {
        ctx->pc = 0x1DCF54u;
            // 0x1dcf54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF58u;
        goto label_1dcf58;
    }
    ctx->pc = 0x1DCF50u;
    SET_GPR_U32(ctx, 31, 0x1DCF58u);
    ctx->pc = 0x1DCF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF50u;
            // 0x1dcf54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD520u;
    if (runtime->hasFunction(0x1DD520u)) {
        auto targetFn = runtime->lookupFunction(0x1DD520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF58u; }
        if (ctx->pc != 0x1DCF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD520_0x1dd520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF58u; }
        if (ctx->pc != 0x1DCF58u) { return; }
    }
    ctx->pc = 0x1DCF58u;
label_1dcf58:
    // 0x1dcf58: 0xc077544  jal         func_1DD510
label_1dcf5c:
    if (ctx->pc == 0x1DCF5Cu) {
        ctx->pc = 0x1DCF5Cu;
            // 0x1dcf5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF60u;
        goto label_1dcf60;
    }
    ctx->pc = 0x1DCF58u;
    SET_GPR_U32(ctx, 31, 0x1DCF60u);
    ctx->pc = 0x1DCF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF58u;
            // 0x1dcf5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD510u;
    if (runtime->hasFunction(0x1DD510u)) {
        auto targetFn = runtime->lookupFunction(0x1DD510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF60u; }
        if (ctx->pc != 0x1DCF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD510_0x1dd510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF60u; }
        if (ctx->pc != 0x1DCF60u) { return; }
    }
    ctx->pc = 0x1DCF60u;
label_1dcf60:
    // 0x1dcf60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcf64:
    // 0x1dcf64: 0x144300ae  bne         $v0, $v1, . + 4 + (0xAE << 2)
label_1dcf68:
    if (ctx->pc == 0x1DCF68u) {
        ctx->pc = 0x1DCF6Cu;
        goto label_1dcf6c;
    }
    ctx->pc = 0x1DCF64u;
    {
        const bool branch_taken_0x1dcf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dcf64) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DCF6Cu;
label_1dcf6c:
    // 0x1dcf6c: 0xc07731c  jal         func_1DCC70
label_1dcf70:
    if (ctx->pc == 0x1DCF70u) {
        ctx->pc = 0x1DCF70u;
            // 0x1dcf70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF74u;
        goto label_1dcf74;
    }
    ctx->pc = 0x1DCF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF74u);
    ctx->pc = 0x1DCF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF6Cu;
            // 0x1dcf70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF74u; }
        if (ctx->pc != 0x1DCF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF74u; }
        if (ctx->pc != 0x1DCF74u) { return; }
    }
    ctx->pc = 0x1DCF74u;
label_1dcf74:
    // 0x1dcf74: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x1dcf74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1dcf78:
    // 0x1dcf78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dcf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcf7c:
    // 0x1dcf7c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dcf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dcf80:
    // 0x1dcf80: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1dcf84:
    // 0x1dcf84: 0x320f809  jalr        $t9
label_1dcf88:
    if (ctx->pc == 0x1DCF88u) {
        ctx->pc = 0x1DCF88u;
            // 0x1dcf88: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->pc = 0x1DCF8Cu;
        goto label_1dcf8c;
    }
    ctx->pc = 0x1DCF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCF8Cu);
        ctx->pc = 0x1DCF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF84u;
            // 0x1dcf88: 0x34450ea9  ori         $a1, $v0, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3753);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DCF8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF8Cu; }
            if (ctx->pc != 0x1DCF8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DCF8Cu;
label_1dcf8c:
    // 0x1dcf8c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1dcf90:
    if (ctx->pc == 0x1DCF90u) {
        ctx->pc = 0x1DCF94u;
        goto label_1dcf94;
    }
    ctx->pc = 0x1DCF8Cu;
    {
        const bool branch_taken_0x1dcf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf8c) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DCF94u;
label_1dcf94:
    // 0x1dcf94: 0xc077564  jal         func_1DD590
label_1dcf98:
    if (ctx->pc == 0x1DCF98u) {
        ctx->pc = 0x1DCF9Cu;
        goto label_1dcf9c;
    }
    ctx->pc = 0x1DCF94u;
    SET_GPR_U32(ctx, 31, 0x1DCF9Cu);
    ctx->pc = 0x1DD590u;
    if (runtime->hasFunction(0x1DD590u)) {
        auto targetFn = runtime->lookupFunction(0x1DD590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF9Cu; }
        if (ctx->pc != 0x1DCF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD590_0x1dd590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCF9Cu; }
        if (ctx->pc != 0x1DCF9Cu) { return; }
    }
    ctx->pc = 0x1DCF9Cu;
label_1dcf9c:
    // 0x1dcf9c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1dcfa0:
    if (ctx->pc == 0x1DCFA0u) {
        ctx->pc = 0x1DCFA0u;
            // 0x1dcfa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFA4u;
        goto label_1dcfa4;
    }
    ctx->pc = 0x1DCF9Cu;
    {
        const bool branch_taken_0x1dcf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf9c) {
            ctx->pc = 0x1DCFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF9Cu;
            // 0x1dcfa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCFB8u;
            goto label_1dcfb8;
        }
    }
    ctx->pc = 0x1DCFA4u;
label_1dcfa4:
    // 0x1dcfa4: 0xc077540  jal         func_1DD500
label_1dcfa8:
    if (ctx->pc == 0x1DCFA8u) {
        ctx->pc = 0x1DCFA8u;
            // 0x1dcfa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFACu;
        goto label_1dcfac;
    }
    ctx->pc = 0x1DCFA4u;
    SET_GPR_U32(ctx, 31, 0x1DCFACu);
    ctx->pc = 0x1DCFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFA4u;
            // 0x1dcfa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD500u;
    if (runtime->hasFunction(0x1DD500u)) {
        auto targetFn = runtime->lookupFunction(0x1DD500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFACu; }
        if (ctx->pc != 0x1DCFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD500_0x1dd500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFACu; }
        if (ctx->pc != 0x1DCFACu) { return; }
    }
    ctx->pc = 0x1DCFACu;
label_1dcfac:
    // 0x1dcfac: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1dcfb0:
    if (ctx->pc == 0x1DCFB0u) {
        ctx->pc = 0x1DCFB0u;
            // 0x1dcfb0: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DCFB4u;
        goto label_1dcfb4;
    }
    ctx->pc = 0x1DCFACu;
    {
        const bool branch_taken_0x1dcfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcfac) {
            ctx->pc = 0x1DCFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFACu;
            // 0x1dcfb0: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD00Cu;
            goto label_1dd00c;
        }
    }
    ctx->pc = 0x1DCFB4u;
label_1dcfb4:
    // 0x1dcfb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dcfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfb8:
    // 0x1dcfb8: 0xc077324  jal         func_1DCC90
label_1dcfbc:
    if (ctx->pc == 0x1DCFBCu) {
        ctx->pc = 0x1DCFC0u;
        goto label_1dcfc0;
    }
    ctx->pc = 0x1DCFB8u;
    SET_GPR_U32(ctx, 31, 0x1DCFC0u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFC0u; }
        if (ctx->pc != 0x1DCFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFC0u; }
        if (ctx->pc != 0x1DCFC0u) { return; }
    }
    ctx->pc = 0x1DCFC0u;
label_1dcfc0:
    // 0x1dcfc0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1dcfc0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dcfc4:
    // 0x1dcfc4: 0xc077258  jal         func_1DC960
label_1dcfc8:
    if (ctx->pc == 0x1DCFC8u) {
        ctx->pc = 0x1DCFC8u;
            // 0x1dcfc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFCCu;
        goto label_1dcfcc;
    }
    ctx->pc = 0x1DCFC4u;
    SET_GPR_U32(ctx, 31, 0x1DCFCCu);
    ctx->pc = 0x1DCFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFC4u;
            // 0x1dcfc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFCCu; }
        if (ctx->pc != 0x1DCFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFCCu; }
        if (ctx->pc != 0x1DCFCCu) { return; }
    }
    ctx->pc = 0x1DCFCCu;
label_1dcfcc:
    // 0x1dcfcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfd0:
    // 0x1dcfd0: 0xc07753c  jal         func_1DD4F0
label_1dcfd4:
    if (ctx->pc == 0x1DCFD4u) {
        ctx->pc = 0x1DCFD4u;
            // 0x1dcfd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFD8u;
        goto label_1dcfd8;
    }
    ctx->pc = 0x1DCFD0u;
    SET_GPR_U32(ctx, 31, 0x1DCFD8u);
    ctx->pc = 0x1DCFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFD0u;
            // 0x1dcfd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFD8u; }
        if (ctx->pc != 0x1DCFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFD8u; }
        if (ctx->pc != 0x1DCFD8u) { return; }
    }
    ctx->pc = 0x1DCFD8u;
label_1dcfd8:
    // 0x1dcfd8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dcfd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfdc:
    // 0x1dcfdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dcfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfe0:
    // 0x1dcfe0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dcfe4:
    // 0x1dcfe4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dcfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfe8:
    // 0x1dcfe8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1dcfec:
    // 0x1dcfec: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1dcff0:
    // 0x1dcff0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcff4:
    // 0x1dcff4: 0xc0bb404  jal         func_2ED010
label_1dcff8:
    if (ctx->pc == 0x1DCFF8u) {
        ctx->pc = 0x1DCFF8u;
            // 0x1dcff8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFFCu;
        goto label_1dcffc;
    }
    ctx->pc = 0x1DCFF4u;
    SET_GPR_U32(ctx, 31, 0x1DCFFCu);
    ctx->pc = 0x1DCFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFF4u;
            // 0x1dcff8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFFCu; }
        if (ctx->pc != 0x1DCFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCFFCu; }
        if (ctx->pc != 0x1DCFFCu) { return; }
    }
    ctx->pc = 0x1DCFFCu;
label_1dcffc:
    // 0x1dcffc: 0xc077550  jal         func_1DD540
label_1dd000:
    if (ctx->pc == 0x1DD000u) {
        ctx->pc = 0x1DD000u;
            // 0x1dd000: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DD004u;
        goto label_1dd004;
    }
    ctx->pc = 0x1DCFFCu;
    SET_GPR_U32(ctx, 31, 0x1DD004u);
    ctx->pc = 0x1DD000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFFCu;
            // 0x1dd000: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD540u;
    if (runtime->hasFunction(0x1DD540u)) {
        auto targetFn = runtime->lookupFunction(0x1DD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD004u; }
        if (ctx->pc != 0x1DD004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD540_0x1dd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD004u; }
        if (ctx->pc != 0x1DD004u) { return; }
    }
    ctx->pc = 0x1DD004u;
label_1dd004:
    // 0x1dd004: 0x10000086  b           . + 4 + (0x86 << 2)
label_1dd008:
    if (ctx->pc == 0x1DD008u) {
        ctx->pc = 0x1DD008u;
            // 0x1dd008: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD00Cu;
        goto label_1dd00c;
    }
    ctx->pc = 0x1DD004u;
    {
        const bool branch_taken_0x1dd004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD004u;
            // 0x1dd008: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd004) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DD00Cu;
label_1dd00c:
    // 0x1dd00c: 0xc077550  jal         func_1DD540
label_1dd010:
    if (ctx->pc == 0x1DD010u) {
        ctx->pc = 0x1DD014u;
        goto label_1dd014;
    }
    ctx->pc = 0x1DD00Cu;
    SET_GPR_U32(ctx, 31, 0x1DD014u);
    ctx->pc = 0x1DD540u;
    if (runtime->hasFunction(0x1DD540u)) {
        auto targetFn = runtime->lookupFunction(0x1DD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD014u; }
        if (ctx->pc != 0x1DD014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD540_0x1dd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD014u; }
        if (ctx->pc != 0x1DD014u) { return; }
    }
    ctx->pc = 0x1DD014u;
label_1dd014:
    // 0x1dd014: 0x10000082  b           . + 4 + (0x82 << 2)
label_1dd018:
    if (ctx->pc == 0x1DD018u) {
        ctx->pc = 0x1DD018u;
            // 0x1dd018: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD01Cu;
        goto label_1dd01c;
    }
    ctx->pc = 0x1DD014u;
    {
        const bool branch_taken_0x1dd014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD014u;
            // 0x1dd018: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd014) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DD01Cu;
label_1dd01c:
    // 0x1dd01c: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_1dd020:
    if (ctx->pc == 0x1DD020u) {
        ctx->pc = 0x1DD020u;
            // 0x1dd020: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DD024u;
        goto label_1dd024;
    }
    ctx->pc = 0x1DD01Cu;
    {
        const bool branch_taken_0x1dd01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd01c) {
            ctx->pc = 0x1DD020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD01Cu;
            // 0x1dd020: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD108u;
            goto label_1dd108;
        }
    }
    ctx->pc = 0x1DD024u;
label_1dd024:
    // 0x1dd024: 0xc040180  jal         func_100600
label_1dd028:
    if (ctx->pc == 0x1DD028u) {
        ctx->pc = 0x1DD028u;
            // 0x1dd028: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x1DD02Cu;
        goto label_1dd02c;
    }
    ctx->pc = 0x1DD024u;
    SET_GPR_U32(ctx, 31, 0x1DD02Cu);
    ctx->pc = 0x1DD028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD024u;
            // 0x1dd028: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD02Cu; }
        if (ctx->pc != 0x1DD02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD02Cu; }
        if (ctx->pc != 0x1DD02Cu) { return; }
    }
    ctx->pc = 0x1DD02Cu;
label_1dd02c:
    // 0x1dd02c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd030:
    // 0x1dd030: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_1dd034:
    if (ctx->pc == 0x1DD034u) {
        ctx->pc = 0x1DD038u;
        goto label_1dd038;
    }
    ctx->pc = 0x1DD030u;
    {
        const bool branch_taken_0x1dd030 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd030) {
            ctx->pc = 0x1DD074u;
            goto label_1dd074;
        }
    }
    ctx->pc = 0x1DD038u;
label_1dd038:
    // 0x1dd038: 0xc077320  jal         func_1DCC80
label_1dd03c:
    if (ctx->pc == 0x1DD03Cu) {
        ctx->pc = 0x1DD03Cu;
            // 0x1dd03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD040u;
        goto label_1dd040;
    }
    ctx->pc = 0x1DD038u;
    SET_GPR_U32(ctx, 31, 0x1DD040u);
    ctx->pc = 0x1DD03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD038u;
            // 0x1dd03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD040u; }
        if (ctx->pc != 0x1DD040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD040u; }
        if (ctx->pc != 0x1DD040u) { return; }
    }
    ctx->pc = 0x1DD040u;
label_1dd040:
    // 0x1dd040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd044:
    // 0x1dd044: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_1dd048:
    // 0x1dd048: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
label_1dd04c:
    // 0x1dd04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dd04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dd050:
    // 0x1dd050: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1dd050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1dd054:
    // 0x1dd054: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd058:
    // 0x1dd058: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1dd058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dd05c:
    // 0x1dd05c: 0x2407ff00  addiu       $a3, $zero, -0x100
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1dd060:
    // 0x1dd060: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x1dd060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_1dd064:
    // 0x1dd064: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dd068:
    // 0x1dd068: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1dd068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd06c:
    // 0x1dd06c: 0xc077508  jal         func_1DD420
label_1dd070:
    if (ctx->pc == 0x1DD070u) {
        ctx->pc = 0x1DD070u;
            // 0x1dd070: 0x3448aec3  ori         $t0, $v0, 0xAEC3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
        ctx->pc = 0x1DD074u;
        goto label_1dd074;
    }
    ctx->pc = 0x1DD06Cu;
    SET_GPR_U32(ctx, 31, 0x1DD074u);
    ctx->pc = 0x1DD070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD06Cu;
            // 0x1dd070: 0x3448aec3  ori         $t0, $v0, 0xAEC3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD420u;
    if (runtime->hasFunction(0x1DD420u)) {
        auto targetFn = runtime->lookupFunction(0x1DD420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD074u; }
        if (ctx->pc != 0x1DD074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD420_0x1dd420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD074u; }
        if (ctx->pc != 0x1DD074u) { return; }
    }
    ctx->pc = 0x1DD074u;
label_1dd074:
    // 0x1dd074: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_1dd078:
    if (ctx->pc == 0x1DD078u) {
        ctx->pc = 0x1DD07Cu;
        goto label_1dd07c;
    }
    ctx->pc = 0x1DD074u;
    {
        const bool branch_taken_0x1dd074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd074) {
            ctx->pc = 0x1DD104u;
            goto label_1dd104;
        }
    }
    ctx->pc = 0x1DD07Cu;
label_1dd07c:
    // 0x1dd07c: 0xc040180  jal         func_100600
label_1dd080:
    if (ctx->pc == 0x1DD080u) {
        ctx->pc = 0x1DD080u;
            // 0x1dd080: 0x2404010c  addiu       $a0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->pc = 0x1DD084u;
        goto label_1dd084;
    }
    ctx->pc = 0x1DD07Cu;
    SET_GPR_U32(ctx, 31, 0x1DD084u);
    ctx->pc = 0x1DD080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD07Cu;
            // 0x1dd080: 0x2404010c  addiu       $a0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD084u; }
        if (ctx->pc != 0x1DD084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD084u; }
        if (ctx->pc != 0x1DD084u) { return; }
    }
    ctx->pc = 0x1DD084u;
label_1dd084:
    // 0x1dd084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd088:
    // 0x1dd088: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_1dd08c:
    if (ctx->pc == 0x1DD08Cu) {
        ctx->pc = 0x1DD08Cu;
            // 0x1dd08c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD090u;
        goto label_1dd090;
    }
    ctx->pc = 0x1DD088u;
    {
        const bool branch_taken_0x1dd088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd088) {
            ctx->pc = 0x1DD08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD088u;
            // 0x1dd08c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD0ACu;
            goto label_1dd0ac;
        }
    }
    ctx->pc = 0x1DD090u;
label_1dd090:
    // 0x1dd090: 0xc077320  jal         func_1DCC80
label_1dd094:
    if (ctx->pc == 0x1DD094u) {
        ctx->pc = 0x1DD094u;
            // 0x1dd094: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD098u;
        goto label_1dd098;
    }
    ctx->pc = 0x1DD090u;
    SET_GPR_U32(ctx, 31, 0x1DD098u);
    ctx->pc = 0x1DD094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD090u;
            // 0x1dd094: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD098u; }
        if (ctx->pc != 0x1DD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD098u; }
        if (ctx->pc != 0x1DD098u) { return; }
    }
    ctx->pc = 0x1DD098u;
label_1dd098:
    // 0x1dd098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd09c:
    // 0x1dd09c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dd09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0a0:
    // 0x1dd0a0: 0xc106570  jal         func_4195C0
label_1dd0a4:
    if (ctx->pc == 0x1DD0A4u) {
        ctx->pc = 0x1DD0A4u;
            // 0x1dd0a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DD0A8u;
        goto label_1dd0a8;
    }
    ctx->pc = 0x1DD0A0u;
    SET_GPR_U32(ctx, 31, 0x1DD0A8u);
    ctx->pc = 0x1DD0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0A0u;
            // 0x1dd0a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4195C0u;
    if (runtime->hasFunction(0x4195C0u)) {
        auto targetFn = runtime->lookupFunction(0x4195C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0A8u; }
        if (ctx->pc != 0x1DD0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004195C0_0x4195c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0A8u; }
        if (ctx->pc != 0x1DD0A8u) { return; }
    }
    ctx->pc = 0x1DD0A8u;
label_1dd0a8:
    // 0x1dd0a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0ac:
    // 0x1dd0ac: 0xc077258  jal         func_1DC960
label_1dd0b0:
    if (ctx->pc == 0x1DD0B0u) {
        ctx->pc = 0x1DD0B4u;
        goto label_1dd0b4;
    }
    ctx->pc = 0x1DD0ACu;
    SET_GPR_U32(ctx, 31, 0x1DD0B4u);
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0B4u; }
        if (ctx->pc != 0x1DD0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0B4u; }
        if (ctx->pc != 0x1DD0B4u) { return; }
    }
    ctx->pc = 0x1DD0B4u;
label_1dd0b4:
    // 0x1dd0b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0b8:
    // 0x1dd0b8: 0xc07753c  jal         func_1DD4F0
label_1dd0bc:
    if (ctx->pc == 0x1DD0BCu) {
        ctx->pc = 0x1DD0BCu;
            // 0x1dd0bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0C0u;
        goto label_1dd0c0;
    }
    ctx->pc = 0x1DD0B8u;
    SET_GPR_U32(ctx, 31, 0x1DD0C0u);
    ctx->pc = 0x1DD0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0B8u;
            // 0x1dd0bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0C0u; }
        if (ctx->pc != 0x1DD0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0C0u; }
        if (ctx->pc != 0x1DD0C0u) { return; }
    }
    ctx->pc = 0x1DD0C0u;
label_1dd0c0:
    // 0x1dd0c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dd0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0c4:
    // 0x1dd0c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0c8:
    // 0x1dd0c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dd0cc:
    // 0x1dd0cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dd0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dd0d0:
    // 0x1dd0d0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1dd0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1dd0d4:
    // 0x1dd0d4: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x1dd0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1dd0d8:
    // 0x1dd0d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd0d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0dc:
    // 0x1dd0dc: 0xc0bb404  jal         func_2ED010
label_1dd0e0:
    if (ctx->pc == 0x1DD0E0u) {
        ctx->pc = 0x1DD0E0u;
            // 0x1dd0e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0E4u;
        goto label_1dd0e4;
    }
    ctx->pc = 0x1DD0DCu;
    SET_GPR_U32(ctx, 31, 0x1DD0E4u);
    ctx->pc = 0x1DD0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0DCu;
            // 0x1dd0e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0E4u; }
        if (ctx->pc != 0x1DD0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0E4u; }
        if (ctx->pc != 0x1DD0E4u) { return; }
    }
    ctx->pc = 0x1DD0E4u;
label_1dd0e4:
    // 0x1dd0e4: 0xc07731c  jal         func_1DCC70
label_1dd0e8:
    if (ctx->pc == 0x1DD0E8u) {
        ctx->pc = 0x1DD0E8u;
            // 0x1dd0e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0ECu;
        goto label_1dd0ec;
    }
    ctx->pc = 0x1DD0E4u;
    SET_GPR_U32(ctx, 31, 0x1DD0ECu);
    ctx->pc = 0x1DD0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0E4u;
            // 0x1dd0e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0ECu; }
        if (ctx->pc != 0x1DD0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD0ECu; }
        if (ctx->pc != 0x1DD0ECu) { return; }
    }
    ctx->pc = 0x1DD0ECu;
label_1dd0ec:
    // 0x1dd0ec: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x1dd0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1dd0f0:
    // 0x1dd0f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0f4:
    // 0x1dd0f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dd0f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dd0f8:
    // 0x1dd0f8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1dd0fc:
    // 0x1dd0fc: 0x320f809  jalr        $t9
label_1dd100:
    if (ctx->pc == 0x1DD100u) {
        ctx->pc = 0x1DD100u;
            // 0x1dd100: 0x344514a9  ori         $a1, $v0, 0x14A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5289);
        ctx->pc = 0x1DD104u;
        goto label_1dd104;
    }
    ctx->pc = 0x1DD0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD104u);
        ctx->pc = 0x1DD100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0FCu;
            // 0x1dd100: 0x344514a9  ori         $a1, $v0, 0x14A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5289);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD104u; }
            if (ctx->pc != 0x1DD104u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD104u;
label_1dd104:
    // 0x1dd104: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x1dd104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_1dd108:
    // 0x1dd108: 0xc077550  jal         func_1DD540
label_1dd10c:
    if (ctx->pc == 0x1DD10Cu) {
        ctx->pc = 0x1DD110u;
        goto label_1dd110;
    }
    ctx->pc = 0x1DD108u;
    SET_GPR_U32(ctx, 31, 0x1DD110u);
    ctx->pc = 0x1DD540u;
    if (runtime->hasFunction(0x1DD540u)) {
        auto targetFn = runtime->lookupFunction(0x1DD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD110u; }
        if (ctx->pc != 0x1DD110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD540_0x1dd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD110u; }
        if (ctx->pc != 0x1DD110u) { return; }
    }
    ctx->pc = 0x1DD110u;
label_1dd110:
    // 0x1dd110: 0x10000043  b           . + 4 + (0x43 << 2)
label_1dd114:
    if (ctx->pc == 0x1DD114u) {
        ctx->pc = 0x1DD114u;
            // 0x1dd114: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD118u;
        goto label_1dd118;
    }
    ctx->pc = 0x1DD110u;
    {
        const bool branch_taken_0x1dd110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD110u;
            // 0x1dd114: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd110) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DD118u;
label_1dd118:
    // 0x1dd118: 0xc077564  jal         func_1DD590
label_1dd11c:
    if (ctx->pc == 0x1DD11Cu) {
        ctx->pc = 0x1DD120u;
        goto label_1dd120;
    }
    ctx->pc = 0x1DD118u;
    SET_GPR_U32(ctx, 31, 0x1DD120u);
    ctx->pc = 0x1DD590u;
    if (runtime->hasFunction(0x1DD590u)) {
        auto targetFn = runtime->lookupFunction(0x1DD590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD120u; }
        if (ctx->pc != 0x1DD120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD590_0x1dd590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD120u; }
        if (ctx->pc != 0x1DD120u) { return; }
    }
    ctx->pc = 0x1DD120u;
label_1dd120:
    // 0x1dd120: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_1dd124:
    if (ctx->pc == 0x1DD124u) {
        ctx->pc = 0x1DD124u;
            // 0x1dd124: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DD128u;
        goto label_1dd128;
    }
    ctx->pc = 0x1DD120u;
    {
        const bool branch_taken_0x1dd120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd120) {
            ctx->pc = 0x1DD124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD120u;
            // 0x1dd124: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD1C4u;
            goto label_1dd1c4;
        }
    }
    ctx->pc = 0x1DD128u;
label_1dd128:
    // 0x1dd128: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_1dd12c:
    if (ctx->pc == 0x1DD12Cu) {
        ctx->pc = 0x1DD12Cu;
            // 0x1dd12c: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DD130u;
        goto label_1dd130;
    }
    ctx->pc = 0x1DD128u;
    {
        const bool branch_taken_0x1dd128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd128) {
            ctx->pc = 0x1DD12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD128u;
            // 0x1dd12c: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD16Cu;
            goto label_1dd16c;
        }
    }
    ctx->pc = 0x1DD130u;
label_1dd130:
    // 0x1dd130: 0xc077560  jal         func_1DD580
label_1dd134:
    if (ctx->pc == 0x1DD134u) {
        ctx->pc = 0x1DD134u;
            // 0x1dd134: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x1DD138u;
        goto label_1dd138;
    }
    ctx->pc = 0x1DD130u;
    SET_GPR_U32(ctx, 31, 0x1DD138u);
    ctx->pc = 0x1DD134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD130u;
            // 0x1dd134: 0x26640054  addiu       $a0, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD580u;
    if (runtime->hasFunction(0x1DD580u)) {
        auto targetFn = runtime->lookupFunction(0x1DD580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD138u; }
        if (ctx->pc != 0x1DD138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD580_0x1dd580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD138u; }
        if (ctx->pc != 0x1DD138u) { return; }
    }
    ctx->pc = 0x1DD138u;
label_1dd138:
    // 0x1dd138: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd13c:
    // 0x1dd13c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd140:
    // 0x1dd140: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1dd144:
    // 0x1dd144: 0xc07731c  jal         func_1DCC70
label_1dd148:
    if (ctx->pc == 0x1DD148u) {
        ctx->pc = 0x1DD148u;
            // 0x1dd148: 0x34516d98  ori         $s1, $v0, 0x6D98 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28056);
        ctx->pc = 0x1DD14Cu;
        goto label_1dd14c;
    }
    ctx->pc = 0x1DD144u;
    SET_GPR_U32(ctx, 31, 0x1DD14Cu);
    ctx->pc = 0x1DD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD144u;
            // 0x1dd148: 0x34516d98  ori         $s1, $v0, 0x6D98 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28056);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD14Cu; }
        if (ctx->pc != 0x1DD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD14Cu; }
        if (ctx->pc != 0x1DD14Cu) { return; }
    }
    ctx->pc = 0x1DD14Cu;
label_1dd14c:
    // 0x1dd14c: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x1dd14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1dd150:
    // 0x1dd150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd154:
    // 0x1dd154: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dd154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dd158:
    // 0x1dd158: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1dd15c:
    // 0x1dd15c: 0x320f809  jalr        $t9
label_1dd160:
    if (ctx->pc == 0x1DD160u) {
        ctx->pc = 0x1DD160u;
            // 0x1dd160: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x1DD164u;
        goto label_1dd164;
    }
    ctx->pc = 0x1DD15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD164u);
        ctx->pc = 0x1DD160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD15Cu;
            // 0x1dd160: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD164u; }
            if (ctx->pc != 0x1DD164u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD164u;
label_1dd164:
    // 0x1dd164: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd168:
    if (ctx->pc == 0x1DD168u) {
        ctx->pc = 0x1DD168u;
            // 0x1dd168: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD16Cu;
        goto label_1dd16c;
    }
    ctx->pc = 0x1DD164u;
    {
        const bool branch_taken_0x1dd164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD164u;
            // 0x1dd168: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd164) {
            ctx->pc = 0x1DD17Cu;
            goto label_1dd17c;
        }
    }
    ctx->pc = 0x1DD16Cu;
label_1dd16c:
    // 0x1dd16c: 0xc07755c  jal         func_1DD570
label_1dd170:
    if (ctx->pc == 0x1DD170u) {
        ctx->pc = 0x1DD174u;
        goto label_1dd174;
    }
    ctx->pc = 0x1DD16Cu;
    SET_GPR_U32(ctx, 31, 0x1DD174u);
    ctx->pc = 0x1DD570u;
    if (runtime->hasFunction(0x1DD570u)) {
        auto targetFn = runtime->lookupFunction(0x1DD570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD174u; }
        if (ctx->pc != 0x1DD174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD570_0x1dd570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD174u; }
        if (ctx->pc != 0x1DD174u) { return; }
    }
    ctx->pc = 0x1DD174u;
label_1dd174:
    // 0x1dd174: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd178:
    // 0x1dd178: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd17c:
    // 0x1dd17c: 0xc0ba5f4  jal         func_2E97D0
label_1dd180:
    if (ctx->pc == 0x1DD180u) {
        ctx->pc = 0x1DD184u;
        goto label_1dd184;
    }
    ctx->pc = 0x1DD17Cu;
    SET_GPR_U32(ctx, 31, 0x1DD184u);
    ctx->pc = 0x2E97D0u;
    if (runtime->hasFunction(0x2E97D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E97D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD184u; }
        if (ctx->pc != 0x1DD184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E97D0_0x2e97d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD184u; }
        if (ctx->pc != 0x1DD184u) { return; }
    }
    ctx->pc = 0x1DD184u;
label_1dd184:
    // 0x1dd184: 0xc07732c  jal         func_1DCCB0
label_1dd188:
    if (ctx->pc == 0x1DD188u) {
        ctx->pc = 0x1DD188u;
            // 0x1dd188: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD18Cu;
        goto label_1dd18c;
    }
    ctx->pc = 0x1DD184u;
    SET_GPR_U32(ctx, 31, 0x1DD18Cu);
    ctx->pc = 0x1DD188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD184u;
            // 0x1dd188: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD18Cu; }
        if (ctx->pc != 0x1DD18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD18Cu; }
        if (ctx->pc != 0x1DD18Cu) { return; }
    }
    ctx->pc = 0x1DD18Cu;
label_1dd18c:
    // 0x1dd18c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_1dd190:
    if (ctx->pc == 0x1DD190u) {
        ctx->pc = 0x1DD194u;
        goto label_1dd194;
    }
    ctx->pc = 0x1DD18Cu;
    {
        const bool branch_taken_0x1dd18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd18c) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DD194u;
label_1dd194:
    // 0x1dd194: 0xc077320  jal         func_1DCC80
label_1dd198:
    if (ctx->pc == 0x1DD198u) {
        ctx->pc = 0x1DD198u;
            // 0x1dd198: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD19Cu;
        goto label_1dd19c;
    }
    ctx->pc = 0x1DD194u;
    SET_GPR_U32(ctx, 31, 0x1DD19Cu);
    ctx->pc = 0x1DD198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD194u;
            // 0x1dd198: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD19Cu; }
        if (ctx->pc != 0x1DD19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD19Cu; }
        if (ctx->pc != 0x1DD19Cu) { return; }
    }
    ctx->pc = 0x1DD19Cu;
label_1dd19c:
    // 0x1dd19c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1a0:
    // 0x1dd1a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1dd1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dd1a4:
    // 0x1dd1a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1dd1a8:
    // 0x1dd1a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd1ac:
    // 0x1dd1ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dd1b0:
    // 0x1dd1b0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1dd1b4:
    // 0x1dd1b4: 0xc077554  jal         func_1DD550
label_1dd1b8:
    if (ctx->pc == 0x1DD1B8u) {
        ctx->pc = 0x1DD1B8u;
            // 0x1dd1b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1BCu;
        goto label_1dd1bc;
    }
    ctx->pc = 0x1DD1B4u;
    SET_GPR_U32(ctx, 31, 0x1DD1BCu);
    ctx->pc = 0x1DD1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1B4u;
            // 0x1dd1b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1BCu; }
        if (ctx->pc != 0x1DD1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1BCu; }
        if (ctx->pc != 0x1DD1BCu) { return; }
    }
    ctx->pc = 0x1DD1BCu;
label_1dd1bc:
    // 0x1dd1bc: 0x10000018  b           . + 4 + (0x18 << 2)
label_1dd1c0:
    if (ctx->pc == 0x1DD1C0u) {
        ctx->pc = 0x1DD1C4u;
        goto label_1dd1c4;
    }
    ctx->pc = 0x1DD1BCu;
    {
        const bool branch_taken_0x1dd1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1bc) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DD1C4u;
label_1dd1c4:
    // 0x1dd1c4: 0xc077550  jal         func_1DD540
label_1dd1c8:
    if (ctx->pc == 0x1DD1C8u) {
        ctx->pc = 0x1DD1CCu;
        goto label_1dd1cc;
    }
    ctx->pc = 0x1DD1C4u;
    SET_GPR_U32(ctx, 31, 0x1DD1CCu);
    ctx->pc = 0x1DD540u;
    if (runtime->hasFunction(0x1DD540u)) {
        auto targetFn = runtime->lookupFunction(0x1DD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1CCu; }
        if (ctx->pc != 0x1DD1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD540_0x1dd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1CCu; }
        if (ctx->pc != 0x1DD1CCu) { return; }
    }
    ctx->pc = 0x1DD1CCu;
label_1dd1cc:
    // 0x1dd1cc: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1dd1d0:
    if (ctx->pc == 0x1DD1D0u) {
        ctx->pc = 0x1DD1D0u;
            // 0x1dd1d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1D4u;
        goto label_1dd1d4;
    }
    ctx->pc = 0x1DD1CCu;
    {
        const bool branch_taken_0x1dd1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1CCu;
            // 0x1dd1d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1cc) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DD1D4u;
label_1dd1d4:
    // 0x1dd1d4: 0xc077258  jal         func_1DC960
label_1dd1d8:
    if (ctx->pc == 0x1DD1D8u) {
        ctx->pc = 0x1DD1D8u;
            // 0x1dd1d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1DCu;
        goto label_1dd1dc;
    }
    ctx->pc = 0x1DD1D4u;
    SET_GPR_U32(ctx, 31, 0x1DD1DCu);
    ctx->pc = 0x1DD1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1D4u;
            // 0x1dd1d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1DCu; }
        if (ctx->pc != 0x1DD1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1DCu; }
        if (ctx->pc != 0x1DD1DCu) { return; }
    }
    ctx->pc = 0x1DD1DCu;
label_1dd1dc:
    // 0x1dd1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1e0:
    // 0x1dd1e0: 0xc07753c  jal         func_1DD4F0
label_1dd1e4:
    if (ctx->pc == 0x1DD1E4u) {
        ctx->pc = 0x1DD1E4u;
            // 0x1dd1e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1E8u;
        goto label_1dd1e8;
    }
    ctx->pc = 0x1DD1E0u;
    SET_GPR_U32(ctx, 31, 0x1DD1E8u);
    ctx->pc = 0x1DD1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD1E0u;
            // 0x1dd1e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1E8u; }
        if (ctx->pc != 0x1DD1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1E8u; }
        if (ctx->pc != 0x1DD1E8u) { return; }
    }
    ctx->pc = 0x1DD1E8u;
label_1dd1e8:
    // 0x1dd1e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dd1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1ec:
    // 0x1dd1ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1f0:
    // 0x1dd1f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dd1f4:
    // 0x1dd1f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dd1f8:
    // 0x1dd1f8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1dd1fc:
    // 0x1dd1fc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1dd200:
    // 0x1dd200: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd204:
    // 0x1dd204: 0xc0bb404  jal         func_2ED010
label_1dd208:
    if (ctx->pc == 0x1DD208u) {
        ctx->pc = 0x1DD208u;
            // 0x1dd208: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DD20Cu;
        goto label_1dd20c;
    }
    ctx->pc = 0x1DD204u;
    SET_GPR_U32(ctx, 31, 0x1DD20Cu);
    ctx->pc = 0x1DD208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD204u;
            // 0x1dd208: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD20Cu; }
        if (ctx->pc != 0x1DD20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD20Cu; }
        if (ctx->pc != 0x1DD20Cu) { return; }
    }
    ctx->pc = 0x1DD20Cu;
label_1dd20c:
    // 0x1dd20c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dd210:
    if (ctx->pc == 0x1DD210u) {
        ctx->pc = 0x1DD214u;
        goto label_1dd214;
    }
    ctx->pc = 0x1DD20Cu;
    {
        const bool branch_taken_0x1dd20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd20c) {
            ctx->pc = 0x1DD220u;
            goto label_1dd220;
        }
    }
    ctx->pc = 0x1DD214u;
label_1dd214:
    // 0x1dd214: 0xc077550  jal         func_1DD540
label_1dd218:
    if (ctx->pc == 0x1DD218u) {
        ctx->pc = 0x1DD21Cu;
        goto label_1dd21c;
    }
    ctx->pc = 0x1DD214u;
    SET_GPR_U32(ctx, 31, 0x1DD21Cu);
    ctx->pc = 0x1DD540u;
    if (runtime->hasFunction(0x1DD540u)) {
        auto targetFn = runtime->lookupFunction(0x1DD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD21Cu; }
        if (ctx->pc != 0x1DD21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD540_0x1dd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD21Cu; }
        if (ctx->pc != 0x1DD21Cu) { return; }
    }
    ctx->pc = 0x1DD21Cu;
label_1dd21c:
    // 0x1dd21c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd220:
    // 0x1dd220: 0x5240001b  beql        $s2, $zero, . + 4 + (0x1B << 2)
label_1dd224:
    if (ctx->pc == 0x1DD224u) {
        ctx->pc = 0x1DD224u;
            // 0x1dd224: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD228u;
        goto label_1dd228;
    }
    ctx->pc = 0x1DD220u;
    {
        const bool branch_taken_0x1dd220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd220) {
            ctx->pc = 0x1DD224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD220u;
            // 0x1dd224: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD290u;
            goto label_1dd290;
        }
    }
    ctx->pc = 0x1DD228u;
label_1dd228:
    // 0x1dd228: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1dd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1dd22c:
    // 0x1dd22c: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x1dd22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1dd230:
    // 0x1dd230: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1dd230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1dd234:
    // 0x1dd234: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1dd238:
    // 0x1dd238: 0xc040180  jal         func_100600
label_1dd23c:
    if (ctx->pc == 0x1DD23Cu) {
        ctx->pc = 0x1DD23Cu;
            // 0x1dd23c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1DD240u;
        goto label_1dd240;
    }
    ctx->pc = 0x1DD238u;
    SET_GPR_U32(ctx, 31, 0x1DD240u);
    ctx->pc = 0x1DD23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD238u;
            // 0x1dd23c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD240u; }
        if (ctx->pc != 0x1DD240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD240u; }
        if (ctx->pc != 0x1DD240u) { return; }
    }
    ctx->pc = 0x1DD240u;
label_1dd240:
    // 0x1dd240: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd244:
    // 0x1dd244: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_1dd248:
    if (ctx->pc == 0x1DD248u) {
        ctx->pc = 0x1DD24Cu;
        goto label_1dd24c;
    }
    ctx->pc = 0x1DD244u;
    {
        const bool branch_taken_0x1dd244 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd244) {
            ctx->pc = 0x1DD28Cu;
            goto label_1dd28c;
        }
    }
    ctx->pc = 0x1DD24Cu;
label_1dd24c:
    // 0x1dd24c: 0xc077324  jal         func_1DCC90
label_1dd250:
    if (ctx->pc == 0x1DD250u) {
        ctx->pc = 0x1DD250u;
            // 0x1dd250: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD254u;
        goto label_1dd254;
    }
    ctx->pc = 0x1DD24Cu;
    SET_GPR_U32(ctx, 31, 0x1DD254u);
    ctx->pc = 0x1DD250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD24Cu;
            // 0x1dd250: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD254u; }
        if (ctx->pc != 0x1DD254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD254u; }
        if (ctx->pc != 0x1DD254u) { return; }
    }
    ctx->pc = 0x1DD254u;
label_1dd254:
    // 0x1dd254: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x1dd254u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_1dd258:
    // 0x1dd258: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd25c:
    // 0x1dd25c: 0xc077320  jal         func_1DCC80
label_1dd260:
    if (ctx->pc == 0x1DD260u) {
        ctx->pc = 0x1DD260u;
            // 0x1dd260: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->pc = 0x1DD264u;
        goto label_1dd264;
    }
    ctx->pc = 0x1DD25Cu;
    SET_GPR_U32(ctx, 31, 0x1DD264u);
    ctx->pc = 0x1DD260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD25Cu;
            // 0x1dd260: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD264u; }
        if (ctx->pc != 0x1DD264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD264u; }
        if (ctx->pc != 0x1DD264u) { return; }
    }
    ctx->pc = 0x1DD264u;
label_1dd264:
    // 0x1dd264: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd268:
    // 0x1dd268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd26c:
    // 0x1dd26c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1dd26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dd270:
    // 0x1dd270: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1dd270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd274:
    // 0x1dd274: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1dd274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd278:
    // 0x1dd278: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1dd278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dd27c:
    // 0x1dd27c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dd27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd280:
    // 0x1dd280: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1dd284:
    // 0x1dd284: 0xc0b9404  jal         func_2E5010
label_1dd288:
    if (ctx->pc == 0x1DD288u) {
        ctx->pc = 0x1DD288u;
            // 0x1dd288: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD28Cu;
        goto label_1dd28c;
    }
    ctx->pc = 0x1DD284u;
    SET_GPR_U32(ctx, 31, 0x1DD28Cu);
    ctx->pc = 0x1DD288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD284u;
            // 0x1dd288: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD28Cu; }
        if (ctx->pc != 0x1DD28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD28Cu; }
        if (ctx->pc != 0x1DD28Cu) { return; }
    }
    ctx->pc = 0x1DD28Cu;
label_1dd28c:
    // 0x1dd28c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd290:
    // 0x1dd290: 0xc07626c  jal         func_1D89B0
label_1dd294:
    if (ctx->pc == 0x1DD294u) {
        ctx->pc = 0x1DD294u;
            // 0x1dd294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD298u;
        goto label_1dd298;
    }
    ctx->pc = 0x1DD290u;
    SET_GPR_U32(ctx, 31, 0x1DD298u);
    ctx->pc = 0x1DD294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD290u;
            // 0x1dd294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD298u; }
        if (ctx->pc != 0x1DD298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD298u; }
        if (ctx->pc != 0x1DD298u) { return; }
    }
    ctx->pc = 0x1DD298u;
label_1dd298:
    // 0x1dd298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd29c:
    // 0x1dd29c: 0xc07626c  jal         func_1D89B0
label_1dd2a0:
    if (ctx->pc == 0x1DD2A0u) {
        ctx->pc = 0x1DD2A0u;
            // 0x1dd2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DD2A4u;
        goto label_1dd2a4;
    }
    ctx->pc = 0x1DD29Cu;
    SET_GPR_U32(ctx, 31, 0x1DD2A4u);
    ctx->pc = 0x1DD2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD29Cu;
            // 0x1dd2a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2A4u; }
        if (ctx->pc != 0x1DD2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2A4u; }
        if (ctx->pc != 0x1DD2A4u) { return; }
    }
    ctx->pc = 0x1DD2A4u;
label_1dd2a4:
    // 0x1dd2a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2a8:
    // 0x1dd2a8: 0xc07626c  jal         func_1D89B0
label_1dd2ac:
    if (ctx->pc == 0x1DD2ACu) {
        ctx->pc = 0x1DD2ACu;
            // 0x1dd2ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DD2B0u;
        goto label_1dd2b0;
    }
    ctx->pc = 0x1DD2A8u;
    SET_GPR_U32(ctx, 31, 0x1DD2B0u);
    ctx->pc = 0x1DD2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2A8u;
            // 0x1dd2ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2B0u; }
        if (ctx->pc != 0x1DD2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2B0u; }
        if (ctx->pc != 0x1DD2B0u) { return; }
    }
    ctx->pc = 0x1DD2B0u;
label_1dd2b0:
    // 0x1dd2b0: 0x10000051  b           . + 4 + (0x51 << 2)
label_1dd2b4:
    if (ctx->pc == 0x1DD2B4u) {
        ctx->pc = 0x1DD2B4u;
            // 0x1dd2b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1DD2B8u;
        goto label_1dd2b8;
    }
    ctx->pc = 0x1DD2B0u;
    {
        const bool branch_taken_0x1dd2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2B0u;
            // 0x1dd2b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2b0) {
            ctx->pc = 0x1DD3F8u;
            goto label_1dd3f8;
        }
    }
    ctx->pc = 0x1DD2B8u;
label_1dd2b8:
    // 0x1dd2b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dd2bc:
    // 0x1dd2bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2c0:
    // 0x1dd2c0: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1dd2c4:
    // 0x1dd2c4: 0xc077574  jal         func_1DD5D0
label_1dd2c8:
    if (ctx->pc == 0x1DD2C8u) {
        ctx->pc = 0x1DD2C8u;
            // 0x1dd2c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2CCu;
        goto label_1dd2cc;
    }
    ctx->pc = 0x1DD2C4u;
    SET_GPR_U32(ctx, 31, 0x1DD2CCu);
    ctx->pc = 0x1DD2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2C4u;
            // 0x1dd2c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2CCu; }
        if (ctx->pc != 0x1DD2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2CCu; }
        if (ctx->pc != 0x1DD2CCu) { return; }
    }
    ctx->pc = 0x1DD2CCu;
label_1dd2cc:
    // 0x1dd2cc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1dd2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dd2d0:
    // 0x1dd2d0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_1dd2d4:
    if (ctx->pc == 0x1DD2D4u) {
        ctx->pc = 0x1DD2D4u;
            // 0x1dd2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2D8u;
        goto label_1dd2d8;
    }
    ctx->pc = 0x1DD2D0u;
    {
        const bool branch_taken_0x1dd2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd2d0) {
            ctx->pc = 0x1DD2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2D0u;
            // 0x1dd2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD2E0u;
            goto label_1dd2e0;
        }
    }
    ctx->pc = 0x1DD2D8u;
label_1dd2d8:
    // 0x1dd2d8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1dd2d8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1dd2dc:
    // 0x1dd2dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2e0:
    // 0x1dd2e0: 0xc0770e4  jal         func_1DC390
label_1dd2e4:
    if (ctx->pc == 0x1DD2E4u) {
        ctx->pc = 0x1DD2E8u;
        goto label_1dd2e8;
    }
    ctx->pc = 0x1DD2E0u;
    SET_GPR_U32(ctx, 31, 0x1DD2E8u);
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2E8u; }
        if (ctx->pc != 0x1DD2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD2E8u; }
        if (ctx->pc != 0x1DD2E8u) { return; }
    }
    ctx->pc = 0x1DD2E8u;
label_1dd2e8:
    // 0x1dd2e8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1dd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dd2ec:
    // 0x1dd2ec: 0x50430024  beql        $v0, $v1, . + 4 + (0x24 << 2)
label_1dd2f0:
    if (ctx->pc == 0x1DD2F0u) {
        ctx->pc = 0x1DD2F0u;
            // 0x1dd2f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2F4u;
        goto label_1dd2f4;
    }
    ctx->pc = 0x1DD2ECu;
    {
        const bool branch_taken_0x1dd2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dd2ec) {
            ctx->pc = 0x1DD2F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2ECu;
            // 0x1dd2f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD2F4u;
label_1dd2f4:
    // 0x1dd2f4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1dd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd2f8:
    // 0x1dd2f8: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_1dd2fc:
    if (ctx->pc == 0x1DD2FCu) {
        ctx->pc = 0x1DD2FCu;
            // 0x1dd2fc: 0x8e820ea8  lw          $v0, 0xEA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3752)));
        ctx->pc = 0x1DD300u;
        goto label_1dd300;
    }
    ctx->pc = 0x1DD2F8u;
    {
        const bool branch_taken_0x1dd2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dd2f8) {
            ctx->pc = 0x1DD2FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD2F8u;
            // 0x1dd2fc: 0x8e820ea8  lw          $v0, 0xEA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD308u;
            goto label_1dd308;
        }
    }
    ctx->pc = 0x1DD300u;
label_1dd300:
    // 0x1dd300: 0x10000034  b           . + 4 + (0x34 << 2)
label_1dd304:
    if (ctx->pc == 0x1DD304u) {
        ctx->pc = 0x1DD304u;
            // 0x1dd304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD308u;
        goto label_1dd308;
    }
    ctx->pc = 0x1DD300u;
    {
        const bool branch_taken_0x1dd300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD300u;
            // 0x1dd304: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd300) {
            ctx->pc = 0x1DD3D4u;
            goto label_1dd3d4;
        }
    }
    ctx->pc = 0x1DD308u;
label_1dd308:
    // 0x1dd308: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1dd30c:
    if (ctx->pc == 0x1DD30Cu) {
        ctx->pc = 0x1DD310u;
        goto label_1dd310;
    }
    ctx->pc = 0x1DD308u;
    {
        const bool branch_taken_0x1dd308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd308) {
            ctx->pc = 0x1DD3D0u;
            goto label_1dd3d0;
        }
    }
    ctx->pc = 0x1DD310u;
label_1dd310:
    // 0x1dd310: 0xc040180  jal         func_100600
label_1dd314:
    if (ctx->pc == 0x1DD314u) {
        ctx->pc = 0x1DD314u;
            // 0x1dd314: 0x2404010c  addiu       $a0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->pc = 0x1DD318u;
        goto label_1dd318;
    }
    ctx->pc = 0x1DD310u;
    SET_GPR_U32(ctx, 31, 0x1DD318u);
    ctx->pc = 0x1DD314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD310u;
            // 0x1dd314: 0x2404010c  addiu       $a0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD318u; }
        if (ctx->pc != 0x1DD318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD318u; }
        if (ctx->pc != 0x1DD318u) { return; }
    }
    ctx->pc = 0x1DD318u;
label_1dd318:
    // 0x1dd318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd31c:
    // 0x1dd31c: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_1dd320:
    if (ctx->pc == 0x1DD320u) {
        ctx->pc = 0x1DD320u;
            // 0x1dd320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD324u;
        goto label_1dd324;
    }
    ctx->pc = 0x1DD31Cu;
    {
        const bool branch_taken_0x1dd31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd31c) {
            ctx->pc = 0x1DD320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD31Cu;
            // 0x1dd320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DD340u;
            goto label_1dd340;
        }
    }
    ctx->pc = 0x1DD324u;
label_1dd324:
    // 0x1dd324: 0xc077320  jal         func_1DCC80
label_1dd328:
    if (ctx->pc == 0x1DD328u) {
        ctx->pc = 0x1DD328u;
            // 0x1dd328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD32Cu;
        goto label_1dd32c;
    }
    ctx->pc = 0x1DD324u;
    SET_GPR_U32(ctx, 31, 0x1DD32Cu);
    ctx->pc = 0x1DD328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD324u;
            // 0x1dd328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD32Cu; }
        if (ctx->pc != 0x1DD32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD32Cu; }
        if (ctx->pc != 0x1DD32Cu) { return; }
    }
    ctx->pc = 0x1DD32Cu;
label_1dd32c:
    // 0x1dd32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd330:
    // 0x1dd330: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dd330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd334:
    // 0x1dd334: 0xc106570  jal         func_4195C0
label_1dd338:
    if (ctx->pc == 0x1DD338u) {
        ctx->pc = 0x1DD338u;
            // 0x1dd338: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DD33Cu;
        goto label_1dd33c;
    }
    ctx->pc = 0x1DD334u;
    SET_GPR_U32(ctx, 31, 0x1DD33Cu);
    ctx->pc = 0x1DD338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD334u;
            // 0x1dd338: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4195C0u;
    if (runtime->hasFunction(0x4195C0u)) {
        auto targetFn = runtime->lookupFunction(0x4195C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD33Cu; }
        if (ctx->pc != 0x1DD33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004195C0_0x4195c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD33Cu; }
        if (ctx->pc != 0x1DD33Cu) { return; }
    }
    ctx->pc = 0x1DD33Cu;
label_1dd33c:
    // 0x1dd33c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd340:
    // 0x1dd340: 0xc077258  jal         func_1DC960
label_1dd344:
    if (ctx->pc == 0x1DD344u) {
        ctx->pc = 0x1DD348u;
        goto label_1dd348;
    }
    ctx->pc = 0x1DD340u;
    SET_GPR_U32(ctx, 31, 0x1DD348u);
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD348u; }
        if (ctx->pc != 0x1DD348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD348u; }
        if (ctx->pc != 0x1DD348u) { return; }
    }
    ctx->pc = 0x1DD348u;
label_1dd348:
    // 0x1dd348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd34c:
    // 0x1dd34c: 0xc07753c  jal         func_1DD4F0
label_1dd350:
    if (ctx->pc == 0x1DD350u) {
        ctx->pc = 0x1DD350u;
            // 0x1dd350: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD354u;
        goto label_1dd354;
    }
    ctx->pc = 0x1DD34Cu;
    SET_GPR_U32(ctx, 31, 0x1DD354u);
    ctx->pc = 0x1DD350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD34Cu;
            // 0x1dd350: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD354u; }
        if (ctx->pc != 0x1DD354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD354u; }
        if (ctx->pc != 0x1DD354u) { return; }
    }
    ctx->pc = 0x1DD354u;
label_1dd354:
    // 0x1dd354: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dd354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd358:
    // 0x1dd358: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd35c:
    // 0x1dd35c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dd35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dd360:
    // 0x1dd360: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dd364:
    // 0x1dd364: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1dd364u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1dd368:
    // 0x1dd368: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1dd36c:
    // 0x1dd36c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd36cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd370:
    // 0x1dd370: 0xc0bb404  jal         func_2ED010
label_1dd374:
    if (ctx->pc == 0x1DD374u) {
        ctx->pc = 0x1DD374u;
            // 0x1dd374: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD378u;
        goto label_1dd378;
    }
    ctx->pc = 0x1DD370u;
    SET_GPR_U32(ctx, 31, 0x1DD378u);
    ctx->pc = 0x1DD374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD370u;
            // 0x1dd374: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD378u; }
        if (ctx->pc != 0x1DD378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD378u; }
        if (ctx->pc != 0x1DD378u) { return; }
    }
    ctx->pc = 0x1DD378u;
label_1dd378:
    // 0x1dd378: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dd37c:
    if (ctx->pc == 0x1DD37Cu) {
        ctx->pc = 0x1DD380u;
        goto label_1dd380;
    }
    ctx->pc = 0x1DD378u;
    {
        const bool branch_taken_0x1dd378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd378) {
            ctx->pc = 0x1DD3D0u;
            goto label_1dd3d0;
        }
    }
    ctx->pc = 0x1DD380u;
label_1dd380:
    // 0x1dd380: 0xc077564  jal         func_1DD590
label_1dd384:
    if (ctx->pc == 0x1DD384u) {
        ctx->pc = 0x1DD388u;
        goto label_1dd388;
    }
    ctx->pc = 0x1DD380u;
    SET_GPR_U32(ctx, 31, 0x1DD388u);
    ctx->pc = 0x1DD590u;
    if (runtime->hasFunction(0x1DD590u)) {
        auto targetFn = runtime->lookupFunction(0x1DD590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD388u; }
        if (ctx->pc != 0x1DD388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD590_0x1dd590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD388u; }
        if (ctx->pc != 0x1DD388u) { return; }
    }
    ctx->pc = 0x1DD388u;
label_1dd388:
    // 0x1dd388: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1dd38c:
    if (ctx->pc == 0x1DD38Cu) {
        ctx->pc = 0x1DD390u;
        goto label_1dd390;
    }
    ctx->pc = 0x1DD388u;
    {
        const bool branch_taken_0x1dd388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd388) {
            ctx->pc = 0x1DD3D0u;
            goto label_1dd3d0;
        }
    }
    ctx->pc = 0x1DD390u;
label_1dd390:
    // 0x1dd390: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_1dd394:
    if (ctx->pc == 0x1DD394u) {
        ctx->pc = 0x1DD398u;
        goto label_1dd398;
    }
    ctx->pc = 0x1DD390u;
    {
        const bool branch_taken_0x1dd390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd390) {
            ctx->pc = 0x1DD3D0u;
            goto label_1dd3d0;
        }
    }
    ctx->pc = 0x1DD398u;
label_1dd398:
    // 0x1dd398: 0xc077258  jal         func_1DC960
label_1dd39c:
    if (ctx->pc == 0x1DD39Cu) {
        ctx->pc = 0x1DD39Cu;
            // 0x1dd39c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3A0u;
        goto label_1dd3a0;
    }
    ctx->pc = 0x1DD398u;
    SET_GPR_U32(ctx, 31, 0x1DD3A0u);
    ctx->pc = 0x1DD39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD398u;
            // 0x1dd39c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3A0u; }
        if (ctx->pc != 0x1DD3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3A0u; }
        if (ctx->pc != 0x1DD3A0u) { return; }
    }
    ctx->pc = 0x1DD3A0u;
label_1dd3a0:
    // 0x1dd3a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3a4:
    // 0x1dd3a4: 0xc07753c  jal         func_1DD4F0
label_1dd3a8:
    if (ctx->pc == 0x1DD3A8u) {
        ctx->pc = 0x1DD3A8u;
            // 0x1dd3a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3ACu;
        goto label_1dd3ac;
    }
    ctx->pc = 0x1DD3A4u;
    SET_GPR_U32(ctx, 31, 0x1DD3ACu);
    ctx->pc = 0x1DD3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3A4u;
            // 0x1dd3a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3ACu; }
        if (ctx->pc != 0x1DD3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3ACu; }
        if (ctx->pc != 0x1DD3ACu) { return; }
    }
    ctx->pc = 0x1DD3ACu;
label_1dd3ac:
    // 0x1dd3ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dd3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3b0:
    // 0x1dd3b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3b4:
    // 0x1dd3b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dd3b8:
    // 0x1dd3b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1dd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dd3bc:
    // 0x1dd3bc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1dd3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1dd3c0:
    // 0x1dd3c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1dd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1dd3c4:
    // 0x1dd3c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd3c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3c8:
    // 0x1dd3c8: 0xc0bb404  jal         func_2ED010
label_1dd3cc:
    if (ctx->pc == 0x1DD3CCu) {
        ctx->pc = 0x1DD3CCu;
            // 0x1dd3cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DD3D0u;
        goto label_1dd3d0;
    }
    ctx->pc = 0x1DD3C8u;
    SET_GPR_U32(ctx, 31, 0x1DD3D0u);
    ctx->pc = 0x1DD3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3C8u;
            // 0x1dd3cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3D0u; }
        if (ctx->pc != 0x1DD3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3D0u; }
        if (ctx->pc != 0x1DD3D0u) { return; }
    }
    ctx->pc = 0x1DD3D0u;
label_1dd3d0:
    // 0x1dd3d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3d4:
    // 0x1dd3d4: 0xc07626c  jal         func_1D89B0
label_1dd3d8:
    if (ctx->pc == 0x1DD3D8u) {
        ctx->pc = 0x1DD3D8u;
            // 0x1dd3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3DCu;
        goto label_1dd3dc;
    }
    ctx->pc = 0x1DD3D4u;
    SET_GPR_U32(ctx, 31, 0x1DD3DCu);
    ctx->pc = 0x1DD3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3D4u;
            // 0x1dd3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3DCu; }
        if (ctx->pc != 0x1DD3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3DCu; }
        if (ctx->pc != 0x1DD3DCu) { return; }
    }
    ctx->pc = 0x1DD3DCu;
label_1dd3dc:
    // 0x1dd3dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3e0:
    // 0x1dd3e0: 0xc07626c  jal         func_1D89B0
label_1dd3e4:
    if (ctx->pc == 0x1DD3E4u) {
        ctx->pc = 0x1DD3E4u;
            // 0x1dd3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DD3E8u;
        goto label_1dd3e8;
    }
    ctx->pc = 0x1DD3E0u;
    SET_GPR_U32(ctx, 31, 0x1DD3E8u);
    ctx->pc = 0x1DD3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3E0u;
            // 0x1dd3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3E8u; }
        if (ctx->pc != 0x1DD3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3E8u; }
        if (ctx->pc != 0x1DD3E8u) { return; }
    }
    ctx->pc = 0x1DD3E8u;
label_1dd3e8:
    // 0x1dd3e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dd3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3ec:
    // 0x1dd3ec: 0xc07626c  jal         func_1D89B0
label_1dd3f0:
    if (ctx->pc == 0x1DD3F0u) {
        ctx->pc = 0x1DD3F0u;
            // 0x1dd3f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DD3F4u;
        goto label_1dd3f4;
    }
    ctx->pc = 0x1DD3ECu;
    SET_GPR_U32(ctx, 31, 0x1DD3F4u);
    ctx->pc = 0x1DD3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD3ECu;
            // 0x1dd3f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3F4u; }
        if (ctx->pc != 0x1DD3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD3F4u; }
        if (ctx->pc != 0x1DD3F4u) { return; }
    }
    ctx->pc = 0x1DD3F4u;
label_1dd3f4:
    // 0x1dd3f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dd3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dd3f8:
    // 0x1dd3f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dd3f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd3fc:
    // 0x1dd3fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dd3fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd400:
    // 0x1dd400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd404:
    // 0x1dd404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd408:
    // 0x1dd408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd40c:
    // 0x1dd40c: 0x3e00008  jr          $ra
label_1dd410:
    if (ctx->pc == 0x1DD410u) {
        ctx->pc = 0x1DD410u;
            // 0x1dd410: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DD414u;
        goto label_1dd414;
    }
    ctx->pc = 0x1DD40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD40Cu;
            // 0x1dd410: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD414u;
label_1dd414:
    // 0x1dd414: 0x0  nop
    ctx->pc = 0x1dd414u;
    // NOP
label_1dd418:
    // 0x1dd418: 0x0  nop
    ctx->pc = 0x1dd418u;
    // NOP
label_1dd41c:
    // 0x1dd41c: 0x0  nop
    ctx->pc = 0x1dd41cu;
    // NOP
}
