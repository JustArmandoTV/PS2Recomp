#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CCC60
// Address: 0x3ccc60 - 0x3cd330
void sub_003CCC60_0x3ccc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCC60_0x3ccc60");
#endif

    switch (ctx->pc) {
        case 0x3ccc60u: goto label_3ccc60;
        case 0x3ccc64u: goto label_3ccc64;
        case 0x3ccc68u: goto label_3ccc68;
        case 0x3ccc6cu: goto label_3ccc6c;
        case 0x3ccc70u: goto label_3ccc70;
        case 0x3ccc74u: goto label_3ccc74;
        case 0x3ccc78u: goto label_3ccc78;
        case 0x3ccc7cu: goto label_3ccc7c;
        case 0x3ccc80u: goto label_3ccc80;
        case 0x3ccc84u: goto label_3ccc84;
        case 0x3ccc88u: goto label_3ccc88;
        case 0x3ccc8cu: goto label_3ccc8c;
        case 0x3ccc90u: goto label_3ccc90;
        case 0x3ccc94u: goto label_3ccc94;
        case 0x3ccc98u: goto label_3ccc98;
        case 0x3ccc9cu: goto label_3ccc9c;
        case 0x3ccca0u: goto label_3ccca0;
        case 0x3ccca4u: goto label_3ccca4;
        case 0x3ccca8u: goto label_3ccca8;
        case 0x3cccacu: goto label_3cccac;
        case 0x3cccb0u: goto label_3cccb0;
        case 0x3cccb4u: goto label_3cccb4;
        case 0x3cccb8u: goto label_3cccb8;
        case 0x3cccbcu: goto label_3cccbc;
        case 0x3cccc0u: goto label_3cccc0;
        case 0x3cccc4u: goto label_3cccc4;
        case 0x3cccc8u: goto label_3cccc8;
        case 0x3cccccu: goto label_3ccccc;
        case 0x3cccd0u: goto label_3cccd0;
        case 0x3cccd4u: goto label_3cccd4;
        case 0x3cccd8u: goto label_3cccd8;
        case 0x3cccdcu: goto label_3cccdc;
        case 0x3ccce0u: goto label_3ccce0;
        case 0x3ccce4u: goto label_3ccce4;
        case 0x3ccce8u: goto label_3ccce8;
        case 0x3cccecu: goto label_3cccec;
        case 0x3cccf0u: goto label_3cccf0;
        case 0x3cccf4u: goto label_3cccf4;
        case 0x3cccf8u: goto label_3cccf8;
        case 0x3cccfcu: goto label_3cccfc;
        case 0x3ccd00u: goto label_3ccd00;
        case 0x3ccd04u: goto label_3ccd04;
        case 0x3ccd08u: goto label_3ccd08;
        case 0x3ccd0cu: goto label_3ccd0c;
        case 0x3ccd10u: goto label_3ccd10;
        case 0x3ccd14u: goto label_3ccd14;
        case 0x3ccd18u: goto label_3ccd18;
        case 0x3ccd1cu: goto label_3ccd1c;
        case 0x3ccd20u: goto label_3ccd20;
        case 0x3ccd24u: goto label_3ccd24;
        case 0x3ccd28u: goto label_3ccd28;
        case 0x3ccd2cu: goto label_3ccd2c;
        case 0x3ccd30u: goto label_3ccd30;
        case 0x3ccd34u: goto label_3ccd34;
        case 0x3ccd38u: goto label_3ccd38;
        case 0x3ccd3cu: goto label_3ccd3c;
        case 0x3ccd40u: goto label_3ccd40;
        case 0x3ccd44u: goto label_3ccd44;
        case 0x3ccd48u: goto label_3ccd48;
        case 0x3ccd4cu: goto label_3ccd4c;
        case 0x3ccd50u: goto label_3ccd50;
        case 0x3ccd54u: goto label_3ccd54;
        case 0x3ccd58u: goto label_3ccd58;
        case 0x3ccd5cu: goto label_3ccd5c;
        case 0x3ccd60u: goto label_3ccd60;
        case 0x3ccd64u: goto label_3ccd64;
        case 0x3ccd68u: goto label_3ccd68;
        case 0x3ccd6cu: goto label_3ccd6c;
        case 0x3ccd70u: goto label_3ccd70;
        case 0x3ccd74u: goto label_3ccd74;
        case 0x3ccd78u: goto label_3ccd78;
        case 0x3ccd7cu: goto label_3ccd7c;
        case 0x3ccd80u: goto label_3ccd80;
        case 0x3ccd84u: goto label_3ccd84;
        case 0x3ccd88u: goto label_3ccd88;
        case 0x3ccd8cu: goto label_3ccd8c;
        case 0x3ccd90u: goto label_3ccd90;
        case 0x3ccd94u: goto label_3ccd94;
        case 0x3ccd98u: goto label_3ccd98;
        case 0x3ccd9cu: goto label_3ccd9c;
        case 0x3ccda0u: goto label_3ccda0;
        case 0x3ccda4u: goto label_3ccda4;
        case 0x3ccda8u: goto label_3ccda8;
        case 0x3ccdacu: goto label_3ccdac;
        case 0x3ccdb0u: goto label_3ccdb0;
        case 0x3ccdb4u: goto label_3ccdb4;
        case 0x3ccdb8u: goto label_3ccdb8;
        case 0x3ccdbcu: goto label_3ccdbc;
        case 0x3ccdc0u: goto label_3ccdc0;
        case 0x3ccdc4u: goto label_3ccdc4;
        case 0x3ccdc8u: goto label_3ccdc8;
        case 0x3ccdccu: goto label_3ccdcc;
        case 0x3ccdd0u: goto label_3ccdd0;
        case 0x3ccdd4u: goto label_3ccdd4;
        case 0x3ccdd8u: goto label_3ccdd8;
        case 0x3ccddcu: goto label_3ccddc;
        case 0x3ccde0u: goto label_3ccde0;
        case 0x3ccde4u: goto label_3ccde4;
        case 0x3ccde8u: goto label_3ccde8;
        case 0x3ccdecu: goto label_3ccdec;
        case 0x3ccdf0u: goto label_3ccdf0;
        case 0x3ccdf4u: goto label_3ccdf4;
        case 0x3ccdf8u: goto label_3ccdf8;
        case 0x3ccdfcu: goto label_3ccdfc;
        case 0x3cce00u: goto label_3cce00;
        case 0x3cce04u: goto label_3cce04;
        case 0x3cce08u: goto label_3cce08;
        case 0x3cce0cu: goto label_3cce0c;
        case 0x3cce10u: goto label_3cce10;
        case 0x3cce14u: goto label_3cce14;
        case 0x3cce18u: goto label_3cce18;
        case 0x3cce1cu: goto label_3cce1c;
        case 0x3cce20u: goto label_3cce20;
        case 0x3cce24u: goto label_3cce24;
        case 0x3cce28u: goto label_3cce28;
        case 0x3cce2cu: goto label_3cce2c;
        case 0x3cce30u: goto label_3cce30;
        case 0x3cce34u: goto label_3cce34;
        case 0x3cce38u: goto label_3cce38;
        case 0x3cce3cu: goto label_3cce3c;
        case 0x3cce40u: goto label_3cce40;
        case 0x3cce44u: goto label_3cce44;
        case 0x3cce48u: goto label_3cce48;
        case 0x3cce4cu: goto label_3cce4c;
        case 0x3cce50u: goto label_3cce50;
        case 0x3cce54u: goto label_3cce54;
        case 0x3cce58u: goto label_3cce58;
        case 0x3cce5cu: goto label_3cce5c;
        case 0x3cce60u: goto label_3cce60;
        case 0x3cce64u: goto label_3cce64;
        case 0x3cce68u: goto label_3cce68;
        case 0x3cce6cu: goto label_3cce6c;
        case 0x3cce70u: goto label_3cce70;
        case 0x3cce74u: goto label_3cce74;
        case 0x3cce78u: goto label_3cce78;
        case 0x3cce7cu: goto label_3cce7c;
        case 0x3cce80u: goto label_3cce80;
        case 0x3cce84u: goto label_3cce84;
        case 0x3cce88u: goto label_3cce88;
        case 0x3cce8cu: goto label_3cce8c;
        case 0x3cce90u: goto label_3cce90;
        case 0x3cce94u: goto label_3cce94;
        case 0x3cce98u: goto label_3cce98;
        case 0x3cce9cu: goto label_3cce9c;
        case 0x3ccea0u: goto label_3ccea0;
        case 0x3ccea4u: goto label_3ccea4;
        case 0x3ccea8u: goto label_3ccea8;
        case 0x3cceacu: goto label_3cceac;
        case 0x3cceb0u: goto label_3cceb0;
        case 0x3cceb4u: goto label_3cceb4;
        case 0x3cceb8u: goto label_3cceb8;
        case 0x3ccebcu: goto label_3ccebc;
        case 0x3ccec0u: goto label_3ccec0;
        case 0x3ccec4u: goto label_3ccec4;
        case 0x3ccec8u: goto label_3ccec8;
        case 0x3cceccu: goto label_3ccecc;
        case 0x3cced0u: goto label_3cced0;
        case 0x3cced4u: goto label_3cced4;
        case 0x3cced8u: goto label_3cced8;
        case 0x3ccedcu: goto label_3ccedc;
        case 0x3ccee0u: goto label_3ccee0;
        case 0x3ccee4u: goto label_3ccee4;
        case 0x3ccee8u: goto label_3ccee8;
        case 0x3cceecu: goto label_3cceec;
        case 0x3ccef0u: goto label_3ccef0;
        case 0x3ccef4u: goto label_3ccef4;
        case 0x3ccef8u: goto label_3ccef8;
        case 0x3ccefcu: goto label_3ccefc;
        case 0x3ccf00u: goto label_3ccf00;
        case 0x3ccf04u: goto label_3ccf04;
        case 0x3ccf08u: goto label_3ccf08;
        case 0x3ccf0cu: goto label_3ccf0c;
        case 0x3ccf10u: goto label_3ccf10;
        case 0x3ccf14u: goto label_3ccf14;
        case 0x3ccf18u: goto label_3ccf18;
        case 0x3ccf1cu: goto label_3ccf1c;
        case 0x3ccf20u: goto label_3ccf20;
        case 0x3ccf24u: goto label_3ccf24;
        case 0x3ccf28u: goto label_3ccf28;
        case 0x3ccf2cu: goto label_3ccf2c;
        case 0x3ccf30u: goto label_3ccf30;
        case 0x3ccf34u: goto label_3ccf34;
        case 0x3ccf38u: goto label_3ccf38;
        case 0x3ccf3cu: goto label_3ccf3c;
        case 0x3ccf40u: goto label_3ccf40;
        case 0x3ccf44u: goto label_3ccf44;
        case 0x3ccf48u: goto label_3ccf48;
        case 0x3ccf4cu: goto label_3ccf4c;
        case 0x3ccf50u: goto label_3ccf50;
        case 0x3ccf54u: goto label_3ccf54;
        case 0x3ccf58u: goto label_3ccf58;
        case 0x3ccf5cu: goto label_3ccf5c;
        case 0x3ccf60u: goto label_3ccf60;
        case 0x3ccf64u: goto label_3ccf64;
        case 0x3ccf68u: goto label_3ccf68;
        case 0x3ccf6cu: goto label_3ccf6c;
        case 0x3ccf70u: goto label_3ccf70;
        case 0x3ccf74u: goto label_3ccf74;
        case 0x3ccf78u: goto label_3ccf78;
        case 0x3ccf7cu: goto label_3ccf7c;
        case 0x3ccf80u: goto label_3ccf80;
        case 0x3ccf84u: goto label_3ccf84;
        case 0x3ccf88u: goto label_3ccf88;
        case 0x3ccf8cu: goto label_3ccf8c;
        case 0x3ccf90u: goto label_3ccf90;
        case 0x3ccf94u: goto label_3ccf94;
        case 0x3ccf98u: goto label_3ccf98;
        case 0x3ccf9cu: goto label_3ccf9c;
        case 0x3ccfa0u: goto label_3ccfa0;
        case 0x3ccfa4u: goto label_3ccfa4;
        case 0x3ccfa8u: goto label_3ccfa8;
        case 0x3ccfacu: goto label_3ccfac;
        case 0x3ccfb0u: goto label_3ccfb0;
        case 0x3ccfb4u: goto label_3ccfb4;
        case 0x3ccfb8u: goto label_3ccfb8;
        case 0x3ccfbcu: goto label_3ccfbc;
        case 0x3ccfc0u: goto label_3ccfc0;
        case 0x3ccfc4u: goto label_3ccfc4;
        case 0x3ccfc8u: goto label_3ccfc8;
        case 0x3ccfccu: goto label_3ccfcc;
        case 0x3ccfd0u: goto label_3ccfd0;
        case 0x3ccfd4u: goto label_3ccfd4;
        case 0x3ccfd8u: goto label_3ccfd8;
        case 0x3ccfdcu: goto label_3ccfdc;
        case 0x3ccfe0u: goto label_3ccfe0;
        case 0x3ccfe4u: goto label_3ccfe4;
        case 0x3ccfe8u: goto label_3ccfe8;
        case 0x3ccfecu: goto label_3ccfec;
        case 0x3ccff0u: goto label_3ccff0;
        case 0x3ccff4u: goto label_3ccff4;
        case 0x3ccff8u: goto label_3ccff8;
        case 0x3ccffcu: goto label_3ccffc;
        case 0x3cd000u: goto label_3cd000;
        case 0x3cd004u: goto label_3cd004;
        case 0x3cd008u: goto label_3cd008;
        case 0x3cd00cu: goto label_3cd00c;
        case 0x3cd010u: goto label_3cd010;
        case 0x3cd014u: goto label_3cd014;
        case 0x3cd018u: goto label_3cd018;
        case 0x3cd01cu: goto label_3cd01c;
        case 0x3cd020u: goto label_3cd020;
        case 0x3cd024u: goto label_3cd024;
        case 0x3cd028u: goto label_3cd028;
        case 0x3cd02cu: goto label_3cd02c;
        case 0x3cd030u: goto label_3cd030;
        case 0x3cd034u: goto label_3cd034;
        case 0x3cd038u: goto label_3cd038;
        case 0x3cd03cu: goto label_3cd03c;
        case 0x3cd040u: goto label_3cd040;
        case 0x3cd044u: goto label_3cd044;
        case 0x3cd048u: goto label_3cd048;
        case 0x3cd04cu: goto label_3cd04c;
        case 0x3cd050u: goto label_3cd050;
        case 0x3cd054u: goto label_3cd054;
        case 0x3cd058u: goto label_3cd058;
        case 0x3cd05cu: goto label_3cd05c;
        case 0x3cd060u: goto label_3cd060;
        case 0x3cd064u: goto label_3cd064;
        case 0x3cd068u: goto label_3cd068;
        case 0x3cd06cu: goto label_3cd06c;
        case 0x3cd070u: goto label_3cd070;
        case 0x3cd074u: goto label_3cd074;
        case 0x3cd078u: goto label_3cd078;
        case 0x3cd07cu: goto label_3cd07c;
        case 0x3cd080u: goto label_3cd080;
        case 0x3cd084u: goto label_3cd084;
        case 0x3cd088u: goto label_3cd088;
        case 0x3cd08cu: goto label_3cd08c;
        case 0x3cd090u: goto label_3cd090;
        case 0x3cd094u: goto label_3cd094;
        case 0x3cd098u: goto label_3cd098;
        case 0x3cd09cu: goto label_3cd09c;
        case 0x3cd0a0u: goto label_3cd0a0;
        case 0x3cd0a4u: goto label_3cd0a4;
        case 0x3cd0a8u: goto label_3cd0a8;
        case 0x3cd0acu: goto label_3cd0ac;
        case 0x3cd0b0u: goto label_3cd0b0;
        case 0x3cd0b4u: goto label_3cd0b4;
        case 0x3cd0b8u: goto label_3cd0b8;
        case 0x3cd0bcu: goto label_3cd0bc;
        case 0x3cd0c0u: goto label_3cd0c0;
        case 0x3cd0c4u: goto label_3cd0c4;
        case 0x3cd0c8u: goto label_3cd0c8;
        case 0x3cd0ccu: goto label_3cd0cc;
        case 0x3cd0d0u: goto label_3cd0d0;
        case 0x3cd0d4u: goto label_3cd0d4;
        case 0x3cd0d8u: goto label_3cd0d8;
        case 0x3cd0dcu: goto label_3cd0dc;
        case 0x3cd0e0u: goto label_3cd0e0;
        case 0x3cd0e4u: goto label_3cd0e4;
        case 0x3cd0e8u: goto label_3cd0e8;
        case 0x3cd0ecu: goto label_3cd0ec;
        case 0x3cd0f0u: goto label_3cd0f0;
        case 0x3cd0f4u: goto label_3cd0f4;
        case 0x3cd0f8u: goto label_3cd0f8;
        case 0x3cd0fcu: goto label_3cd0fc;
        case 0x3cd100u: goto label_3cd100;
        case 0x3cd104u: goto label_3cd104;
        case 0x3cd108u: goto label_3cd108;
        case 0x3cd10cu: goto label_3cd10c;
        case 0x3cd110u: goto label_3cd110;
        case 0x3cd114u: goto label_3cd114;
        case 0x3cd118u: goto label_3cd118;
        case 0x3cd11cu: goto label_3cd11c;
        case 0x3cd120u: goto label_3cd120;
        case 0x3cd124u: goto label_3cd124;
        case 0x3cd128u: goto label_3cd128;
        case 0x3cd12cu: goto label_3cd12c;
        case 0x3cd130u: goto label_3cd130;
        case 0x3cd134u: goto label_3cd134;
        case 0x3cd138u: goto label_3cd138;
        case 0x3cd13cu: goto label_3cd13c;
        case 0x3cd140u: goto label_3cd140;
        case 0x3cd144u: goto label_3cd144;
        case 0x3cd148u: goto label_3cd148;
        case 0x3cd14cu: goto label_3cd14c;
        case 0x3cd150u: goto label_3cd150;
        case 0x3cd154u: goto label_3cd154;
        case 0x3cd158u: goto label_3cd158;
        case 0x3cd15cu: goto label_3cd15c;
        case 0x3cd160u: goto label_3cd160;
        case 0x3cd164u: goto label_3cd164;
        case 0x3cd168u: goto label_3cd168;
        case 0x3cd16cu: goto label_3cd16c;
        case 0x3cd170u: goto label_3cd170;
        case 0x3cd174u: goto label_3cd174;
        case 0x3cd178u: goto label_3cd178;
        case 0x3cd17cu: goto label_3cd17c;
        case 0x3cd180u: goto label_3cd180;
        case 0x3cd184u: goto label_3cd184;
        case 0x3cd188u: goto label_3cd188;
        case 0x3cd18cu: goto label_3cd18c;
        case 0x3cd190u: goto label_3cd190;
        case 0x3cd194u: goto label_3cd194;
        case 0x3cd198u: goto label_3cd198;
        case 0x3cd19cu: goto label_3cd19c;
        case 0x3cd1a0u: goto label_3cd1a0;
        case 0x3cd1a4u: goto label_3cd1a4;
        case 0x3cd1a8u: goto label_3cd1a8;
        case 0x3cd1acu: goto label_3cd1ac;
        case 0x3cd1b0u: goto label_3cd1b0;
        case 0x3cd1b4u: goto label_3cd1b4;
        case 0x3cd1b8u: goto label_3cd1b8;
        case 0x3cd1bcu: goto label_3cd1bc;
        case 0x3cd1c0u: goto label_3cd1c0;
        case 0x3cd1c4u: goto label_3cd1c4;
        case 0x3cd1c8u: goto label_3cd1c8;
        case 0x3cd1ccu: goto label_3cd1cc;
        case 0x3cd1d0u: goto label_3cd1d0;
        case 0x3cd1d4u: goto label_3cd1d4;
        case 0x3cd1d8u: goto label_3cd1d8;
        case 0x3cd1dcu: goto label_3cd1dc;
        case 0x3cd1e0u: goto label_3cd1e0;
        case 0x3cd1e4u: goto label_3cd1e4;
        case 0x3cd1e8u: goto label_3cd1e8;
        case 0x3cd1ecu: goto label_3cd1ec;
        case 0x3cd1f0u: goto label_3cd1f0;
        case 0x3cd1f4u: goto label_3cd1f4;
        case 0x3cd1f8u: goto label_3cd1f8;
        case 0x3cd1fcu: goto label_3cd1fc;
        case 0x3cd200u: goto label_3cd200;
        case 0x3cd204u: goto label_3cd204;
        case 0x3cd208u: goto label_3cd208;
        case 0x3cd20cu: goto label_3cd20c;
        case 0x3cd210u: goto label_3cd210;
        case 0x3cd214u: goto label_3cd214;
        case 0x3cd218u: goto label_3cd218;
        case 0x3cd21cu: goto label_3cd21c;
        case 0x3cd220u: goto label_3cd220;
        case 0x3cd224u: goto label_3cd224;
        case 0x3cd228u: goto label_3cd228;
        case 0x3cd22cu: goto label_3cd22c;
        case 0x3cd230u: goto label_3cd230;
        case 0x3cd234u: goto label_3cd234;
        case 0x3cd238u: goto label_3cd238;
        case 0x3cd23cu: goto label_3cd23c;
        case 0x3cd240u: goto label_3cd240;
        case 0x3cd244u: goto label_3cd244;
        case 0x3cd248u: goto label_3cd248;
        case 0x3cd24cu: goto label_3cd24c;
        case 0x3cd250u: goto label_3cd250;
        case 0x3cd254u: goto label_3cd254;
        case 0x3cd258u: goto label_3cd258;
        case 0x3cd25cu: goto label_3cd25c;
        case 0x3cd260u: goto label_3cd260;
        case 0x3cd264u: goto label_3cd264;
        case 0x3cd268u: goto label_3cd268;
        case 0x3cd26cu: goto label_3cd26c;
        case 0x3cd270u: goto label_3cd270;
        case 0x3cd274u: goto label_3cd274;
        case 0x3cd278u: goto label_3cd278;
        case 0x3cd27cu: goto label_3cd27c;
        case 0x3cd280u: goto label_3cd280;
        case 0x3cd284u: goto label_3cd284;
        case 0x3cd288u: goto label_3cd288;
        case 0x3cd28cu: goto label_3cd28c;
        case 0x3cd290u: goto label_3cd290;
        case 0x3cd294u: goto label_3cd294;
        case 0x3cd298u: goto label_3cd298;
        case 0x3cd29cu: goto label_3cd29c;
        case 0x3cd2a0u: goto label_3cd2a0;
        case 0x3cd2a4u: goto label_3cd2a4;
        case 0x3cd2a8u: goto label_3cd2a8;
        case 0x3cd2acu: goto label_3cd2ac;
        case 0x3cd2b0u: goto label_3cd2b0;
        case 0x3cd2b4u: goto label_3cd2b4;
        case 0x3cd2b8u: goto label_3cd2b8;
        case 0x3cd2bcu: goto label_3cd2bc;
        case 0x3cd2c0u: goto label_3cd2c0;
        case 0x3cd2c4u: goto label_3cd2c4;
        case 0x3cd2c8u: goto label_3cd2c8;
        case 0x3cd2ccu: goto label_3cd2cc;
        case 0x3cd2d0u: goto label_3cd2d0;
        case 0x3cd2d4u: goto label_3cd2d4;
        case 0x3cd2d8u: goto label_3cd2d8;
        case 0x3cd2dcu: goto label_3cd2dc;
        case 0x3cd2e0u: goto label_3cd2e0;
        case 0x3cd2e4u: goto label_3cd2e4;
        case 0x3cd2e8u: goto label_3cd2e8;
        case 0x3cd2ecu: goto label_3cd2ec;
        case 0x3cd2f0u: goto label_3cd2f0;
        case 0x3cd2f4u: goto label_3cd2f4;
        case 0x3cd2f8u: goto label_3cd2f8;
        case 0x3cd2fcu: goto label_3cd2fc;
        case 0x3cd300u: goto label_3cd300;
        case 0x3cd304u: goto label_3cd304;
        case 0x3cd308u: goto label_3cd308;
        case 0x3cd30cu: goto label_3cd30c;
        case 0x3cd310u: goto label_3cd310;
        case 0x3cd314u: goto label_3cd314;
        case 0x3cd318u: goto label_3cd318;
        case 0x3cd31cu: goto label_3cd31c;
        case 0x3cd320u: goto label_3cd320;
        case 0x3cd324u: goto label_3cd324;
        case 0x3cd328u: goto label_3cd328;
        case 0x3cd32cu: goto label_3cd32c;
        default: break;
    }

    ctx->pc = 0x3ccc60u;

label_3ccc60:
    // 0x3ccc60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ccc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3ccc64:
    // 0x3ccc64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ccc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ccc68:
    // 0x3ccc68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ccc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ccc6c:
    // 0x3ccc6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ccc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ccc70:
    // 0x3ccc70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ccc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ccc74:
    // 0x3ccc74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ccc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ccc78:
    // 0x3ccc78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ccc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ccc7c:
    // 0x3ccc7c: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3ccc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ccc80:
    // 0x3ccc80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ccc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc84:
    // 0x3ccc84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ccc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ccc88:
    // 0x3ccc88: 0x8c8b0788  lw          $t3, 0x788($a0)
    ctx->pc = 0x3ccc88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_3ccc8c:
    // 0x3ccc8c: 0x8c730eac  lw          $s3, 0xEAC($v1)
    ctx->pc = 0x3ccc8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3ccc90:
    // 0x3ccc90: 0x8e650098  lw          $a1, 0x98($s3)
    ctx->pc = 0x3ccc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_3ccc94:
    // 0x3ccc94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ccc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ccc98:
    // 0x3ccc98: 0x8e6400a0  lw          $a0, 0xA0($s3)
    ctx->pc = 0x3ccc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3ccc9c:
    // 0x3ccc9c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3ccc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ccca0:
    // 0x3ccca0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3ccca0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_3ccca4:
    // 0x3ccca4: 0x1163001b  beq         $t3, $v1, . + 4 + (0x1B << 2)
label_3ccca8:
    if (ctx->pc == 0x3CCCA8u) {
        ctx->pc = 0x3CCCA8u;
            // 0x3ccca8: 0xa48821  addu        $s1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x3CCCACu;
        goto label_3cccac;
    }
    ctx->pc = 0x3CCCA4u;
    {
        const bool branch_taken_0x3ccca4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CCCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCCA4u;
            // 0x3ccca8: 0xa48821  addu        $s1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccca4) {
            ctx->pc = 0x3CCD14u;
            goto label_3ccd14;
        }
    }
    ctx->pc = 0x3CCCACu;
label_3cccac:
    // 0x3cccac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cccb0:
    // 0x3cccb0: 0x51630019  beql        $t3, $v1, . + 4 + (0x19 << 2)
label_3cccb4:
    if (ctx->pc == 0x3CCCB4u) {
        ctx->pc = 0x3CCCB4u;
            // 0x3cccb4: 0x8e720078  lw          $s2, 0x78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
        ctx->pc = 0x3CCCB8u;
        goto label_3cccb8;
    }
    ctx->pc = 0x3CCCB0u;
    {
        const bool branch_taken_0x3cccb0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cccb0) {
            ctx->pc = 0x3CCCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCCB0u;
            // 0x3cccb4: 0x8e720078  lw          $s2, 0x78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCD18u;
            goto label_3ccd18;
        }
    }
    ctx->pc = 0x3CCCB8u;
label_3cccb8:
    // 0x3cccb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cccbc:
    // 0x3cccbc: 0x5163000c  beql        $t3, $v1, . + 4 + (0xC << 2)
label_3cccc0:
    if (ctx->pc == 0x3CCCC0u) {
        ctx->pc = 0x3CCCC0u;
            // 0x3cccc0: 0x8e720080  lw          $s2, 0x80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
        ctx->pc = 0x3CCCC4u;
        goto label_3cccc4;
    }
    ctx->pc = 0x3CCCBCu;
    {
        const bool branch_taken_0x3cccbc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cccbc) {
            ctx->pc = 0x3CCCC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCCBCu;
            // 0x3cccc0: 0x8e720080  lw          $s2, 0x80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCCF0u;
            goto label_3cccf0;
        }
    }
    ctx->pc = 0x3CCCC4u;
label_3cccc4:
    // 0x3cccc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cccc8:
    // 0x3cccc8: 0x51630003  beql        $t3, $v1, . + 4 + (0x3 << 2)
label_3ccccc:
    if (ctx->pc == 0x3CCCCCu) {
        ctx->pc = 0x3CCCCCu;
            // 0x3ccccc: 0x8e720080  lw          $s2, 0x80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
        ctx->pc = 0x3CCCD0u;
        goto label_3cccd0;
    }
    ctx->pc = 0x3CCCC8u;
    {
        const bool branch_taken_0x3cccc8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cccc8) {
            ctx->pc = 0x3CCCCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCCC8u;
            // 0x3ccccc: 0x8e720080  lw          $s2, 0x80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCCD8u;
            goto label_3cccd8;
        }
    }
    ctx->pc = 0x3CCCD0u;
label_3cccd0:
    // 0x3cccd0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3cccd4:
    if (ctx->pc == 0x3CCCD4u) {
        ctx->pc = 0x3CCCD8u;
        goto label_3cccd8;
    }
    ctx->pc = 0x3CCCD0u;
    {
        const bool branch_taken_0x3cccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cccd0) {
            ctx->pc = 0x3CCD44u;
            goto label_3ccd44;
        }
    }
    ctx->pc = 0x3CCCD8u;
label_3cccd8:
    // 0x3cccd8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3cccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3cccdc:
    // 0x3cccdc: 0x24848f60  addiu       $a0, $a0, -0x70A0
    ctx->pc = 0x3cccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938464));
label_3ccce0:
    // 0x3ccce0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ccce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ccce4:
    // 0x3ccce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ccce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ccce8:
    // 0x3ccce8: 0x10000018  b           . + 4 + (0x18 << 2)
label_3cccec:
    if (ctx->pc == 0x3CCCECu) {
        ctx->pc = 0x3CCCECu;
            // 0x3cccec: 0xac6465b8  sw          $a0, 0x65B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26040), GPR_U32(ctx, 4));
        ctx->pc = 0x3CCCF0u;
        goto label_3cccf0;
    }
    ctx->pc = 0x3CCCE8u;
    {
        const bool branch_taken_0x3ccce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCCE8u;
            // 0x3cccec: 0xac6465b8  sw          $a0, 0x65B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 26040), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccce8) {
            ctx->pc = 0x3CCD4Cu;
            goto label_3ccd4c;
        }
    }
    ctx->pc = 0x3CCCF0u;
label_3cccf0:
    // 0x3cccf0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3cccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3cccf4:
    // 0x3cccf4: 0x24848fa0  addiu       $a0, $a0, -0x7060
    ctx->pc = 0x3cccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938528));
label_3cccf8:
    // 0x3cccf8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cccfc:
    // 0x3cccfc: 0xac6465b8  sw          $a0, 0x65B8($v1)
    ctx->pc = 0x3cccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26040), GPR_U32(ctx, 4));
label_3ccd00:
    // 0x3ccd00: 0x8e65008c  lw          $a1, 0x8C($s3)
    ctx->pc = 0x3ccd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_3ccd04:
    // 0x3ccd04: 0x92630090  lbu         $v1, 0x90($s3)
    ctx->pc = 0x3ccd04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 144)));
label_3ccd08:
    // 0x3ccd08: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3ccd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3ccd0c:
    // 0x3ccd0c: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ccd10:
    if (ctx->pc == 0x3CCD10u) {
        ctx->pc = 0x3CCD10u;
            // 0x3ccd10: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x3CCD14u;
        goto label_3ccd14;
    }
    ctx->pc = 0x3CCD0Cu;
    {
        const bool branch_taken_0x3ccd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCD0Cu;
            // 0x3ccd10: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd0c) {
            ctx->pc = 0x3CCD4Cu;
            goto label_3ccd4c;
        }
    }
    ctx->pc = 0x3CCD14u;
label_3ccd14:
    // 0x3ccd14: 0x8e720078  lw          $s2, 0x78($s3)
    ctx->pc = 0x3ccd14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_3ccd18:
    // 0x3ccd18: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3ccd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3ccd1c:
    // 0x3ccd1c: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x3ccd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3ccd20:
    // 0x3ccd20: 0x24848fe0  addiu       $a0, $a0, -0x7020
    ctx->pc = 0x3ccd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938592));
label_3ccd24:
    // 0x3ccd24: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ccd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ccd28:
    // 0x3ccd28: 0xac6465b8  sw          $a0, 0x65B8($v1)
    ctx->pc = 0x3ccd28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26040), GPR_U32(ctx, 4));
label_3ccd2c:
    // 0x3ccd2c: 0xb28023  subu        $s0, $a1, $s2
    ctx->pc = 0x3ccd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3ccd30:
    // 0x3ccd30: 0x8e65008c  lw          $a1, 0x8C($s3)
    ctx->pc = 0x3ccd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_3ccd34:
    // 0x3ccd34: 0x92630090  lbu         $v1, 0x90($s3)
    ctx->pc = 0x3ccd34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 144)));
label_3ccd38:
    // 0x3ccd38: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3ccd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3ccd3c:
    // 0x3ccd3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ccd40:
    if (ctx->pc == 0x3CCD40u) {
        ctx->pc = 0x3CCD40u;
            // 0x3ccd40: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x3CCD44u;
        goto label_3ccd44;
    }
    ctx->pc = 0x3CCD3Cu;
    {
        const bool branch_taken_0x3ccd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCD3Cu;
            // 0x3ccd40: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd3c) {
            ctx->pc = 0x3CCD4Cu;
            goto label_3ccd4c;
        }
    }
    ctx->pc = 0x3CCD44u;
label_3ccd44:
    // 0x3ccd44: 0x1000006e  b           . + 4 + (0x6E << 2)
label_3ccd48:
    if (ctx->pc == 0x3CCD48u) {
        ctx->pc = 0x3CCD48u;
            // 0x3ccd48: 0x7bb40040  lq          $s4, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3CCD4Cu;
        goto label_3ccd4c;
    }
    ctx->pc = 0x3CCD44u;
    {
        const bool branch_taken_0x3ccd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCD44u;
            // 0x3ccd48: 0x7bb40040  lq          $s4, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccd44) {
            ctx->pc = 0x3CCF00u;
            goto label_3ccf00;
        }
    }
    ctx->pc = 0x3CCD4Cu;
label_3ccd4c:
    // 0x3ccd4c: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x3ccd4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
label_3ccd50:
    // 0x3ccd50: 0xb14823  subu        $t1, $a1, $s1
    ctx->pc = 0x3ccd50u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3ccd54:
    // 0x3ccd54: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x3ccd54u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_3ccd58:
    // 0x3ccd58: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x3ccd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_3ccd5c:
    // 0x3ccd5c: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x3ccd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ccd60:
    // 0x3ccd60: 0x3c0c00af  lui         $t4, 0xAF
    ctx->pc = 0x3ccd60u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)175 << 16));
label_3ccd64:
    // 0x3ccd64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ccd64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ccd68:
    // 0x3ccd68: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ccd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ccd6c:
    // 0x3ccd6c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x3ccd6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ccd70:
    // 0x3ccd70: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x3ccd70u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd74:
    // 0x3ccd74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ccd74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ccd78:
    // 0x3ccd78: 0x258c65c0  addiu       $t4, $t4, 0x65C0
    ctx->pc = 0x3ccd78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 26048));
label_3ccd7c:
    // 0x3ccd7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ccd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ccd80:
    // 0x3ccd80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ccd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ccd84:
    // 0x3ccd84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3ccd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ccd88:
    // 0x3ccd88: 0x2292021  addu        $a0, $s1, $t1
    ctx->pc = 0x3ccd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_3ccd8c:
    // 0x3ccd8c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3ccd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ccd90:
    // 0x3ccd90: 0xe46066c0  swc1        $f0, 0x66C0($v1)
    ctx->pc = 0x3ccd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 26304), bits); }
label_3ccd94:
    // 0x3ccd94: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x3ccd94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd98:
    // 0x3ccd98: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3ccd98u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ccd9c:
    // 0x3ccd9c: 0x240c82d  daddu       $t9, $s2, $zero
    ctx->pc = 0x3ccd9cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ccda0:
    // 0x3ccda0: 0x11680013  beq         $t3, $t0, . + 4 + (0x13 << 2)
label_3ccda4:
    if (ctx->pc == 0x3CCDA4u) {
        ctx->pc = 0x3CCDA4u;
            // 0x3ccda4: 0x220c02d  daddu       $t8, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CCDA8u;
        goto label_3ccda8;
    }
    ctx->pc = 0x3CCDA0u;
    {
        const bool branch_taken_0x3ccda0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 8));
        ctx->pc = 0x3CCDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCDA0u;
            // 0x3ccda4: 0x220c02d  daddu       $t8, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccda0) {
            ctx->pc = 0x3CCDF0u;
            goto label_3ccdf0;
        }
    }
    ctx->pc = 0x3CCDA8u;
label_3ccda8:
    // 0x3ccda8: 0x11670011  beq         $t3, $a3, . + 4 + (0x11 << 2)
label_3ccdac:
    if (ctx->pc == 0x3CCDACu) {
        ctx->pc = 0x3CCDB0u;
        goto label_3ccdb0;
    }
    ctx->pc = 0x3CCDA8u;
    {
        const bool branch_taken_0x3ccda8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 7));
        if (branch_taken_0x3ccda8) {
            ctx->pc = 0x3CCDF0u;
            goto label_3ccdf0;
        }
    }
    ctx->pc = 0x3CCDB0u;
label_3ccdb0:
    // 0x3ccdb0: 0x11660009  beq         $t3, $a2, . + 4 + (0x9 << 2)
label_3ccdb4:
    if (ctx->pc == 0x3CCDB4u) {
        ctx->pc = 0x3CCDB8u;
        goto label_3ccdb8;
    }
    ctx->pc = 0x3CCDB0u;
    {
        const bool branch_taken_0x3ccdb0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 6));
        if (branch_taken_0x3ccdb0) {
            ctx->pc = 0x3CCDD8u;
            goto label_3ccdd8;
        }
    }
    ctx->pc = 0x3CCDB8u;
label_3ccdb8:
    // 0x3ccdb8: 0x11650003  beq         $t3, $a1, . + 4 + (0x3 << 2)
label_3ccdbc:
    if (ctx->pc == 0x3CCDBCu) {
        ctx->pc = 0x3CCDC0u;
        goto label_3ccdc0;
    }
    ctx->pc = 0x3CCDB8u;
    {
        const bool branch_taken_0x3ccdb8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ccdb8) {
            ctx->pc = 0x3CCDC8u;
            goto label_3ccdc8;
        }
    }
    ctx->pc = 0x3CCDC0u;
label_3ccdc0:
    // 0x3ccdc0: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ccdc4:
    if (ctx->pc == 0x3CCDC4u) {
        ctx->pc = 0x3CCDC8u;
        goto label_3ccdc8;
    }
    ctx->pc = 0x3CCDC0u;
    {
        const bool branch_taken_0x3ccdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccdc0) {
            ctx->pc = 0x3CCE28u;
            goto label_3cce28;
        }
    }
    ctx->pc = 0x3CCDC8u;
label_3ccdc8:
    // 0x3ccdc8: 0x8e6d009c  lw          $t5, 0x9C($s3)
    ctx->pc = 0x3ccdc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_3ccdcc:
    // 0x3ccdcc: 0x10000016  b           . + 4 + (0x16 << 2)
label_3ccdd0:
    if (ctx->pc == 0x3CCDD0u) {
        ctx->pc = 0x3CCDD0u;
            // 0x3ccdd0: 0x1b26823  subu        $t5, $t5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
        ctx->pc = 0x3CCDD4u;
        goto label_3ccdd4;
    }
    ctx->pc = 0x3CCDCCu;
    {
        const bool branch_taken_0x3ccdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCDCCu;
            // 0x3ccdd0: 0x1b26823  subu        $t5, $t5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccdcc) {
            ctx->pc = 0x3CCE28u;
            goto label_3cce28;
        }
    }
    ctx->pc = 0x3CCDD4u;
label_3ccdd4:
    // 0x3ccdd4: 0x0  nop
    ctx->pc = 0x3ccdd4u;
    // NOP
label_3ccdd8:
    // 0x3ccdd8: 0x8e6d009c  lw          $t5, 0x9C($s3)
    ctx->pc = 0x3ccdd8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_3ccddc:
    // 0x3ccddc: 0x31d40001  andi        $s4, $t6, 0x1
    ctx->pc = 0x3ccddcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_3ccde0:
    // 0x3ccde0: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_3ccde4:
    if (ctx->pc == 0x3CCDE4u) {
        ctx->pc = 0x3CCDE4u;
            // 0x3ccde4: 0x1b26823  subu        $t5, $t5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
        ctx->pc = 0x3CCDE8u;
        goto label_3ccde8;
    }
    ctx->pc = 0x3CCDE0u;
    {
        const bool branch_taken_0x3ccde0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCDE0u;
            // 0x3ccde4: 0x1b26823  subu        $t5, $t5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccde0) {
            ctx->pc = 0x3CCE28u;
            goto label_3cce28;
        }
    }
    ctx->pc = 0x3CCDE8u;
label_3ccde8:
    // 0x3ccde8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ccdec:
    if (ctx->pc == 0x3CCDECu) {
        ctx->pc = 0x3CCDECu;
            // 0x3ccdec: 0x80c02d  daddu       $t8, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CCDF0u;
        goto label_3ccdf0;
    }
    ctx->pc = 0x3CCDE8u;
    {
        const bool branch_taken_0x3ccde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCDE8u;
            // 0x3ccdec: 0x80c02d  daddu       $t8, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccde8) {
            ctx->pc = 0x3CCE28u;
            goto label_3cce28;
        }
    }
    ctx->pc = 0x3CCDF0u;
label_3ccdf0:
    // 0x3ccdf0: 0x8e6d0094  lw          $t5, 0x94($s3)
    ctx->pc = 0x3ccdf0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_3ccdf4:
    // 0x3ccdf4: 0x31d40001  andi        $s4, $t6, 0x1
    ctx->pc = 0x3ccdf4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_3ccdf8:
    // 0x3ccdf8: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x3ccdf8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ccdfc:
    // 0x3ccdfc: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_3cce00:
    if (ctx->pc == 0x3CCE00u) {
        ctx->pc = 0x3CCE00u;
            // 0x3cce00: 0x1b26823  subu        $t5, $t5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
        ctx->pc = 0x3CCE04u;
        goto label_3cce04;
    }
    ctx->pc = 0x3CCDFCu;
    {
        const bool branch_taken_0x3ccdfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCDFCu;
            // 0x3cce00: 0x1b26823  subu        $t5, $t5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccdfc) {
            ctx->pc = 0x3CCE18u;
            goto label_3cce18;
        }
    }
    ctx->pc = 0x3CCE04u;
label_3cce04:
    // 0x3cce04: 0x8e6d009c  lw          $t5, 0x9C($s3)
    ctx->pc = 0x3cce04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_3cce08:
    // 0x3cce08: 0x330c821  addu        $t9, $t9, $s0
    ctx->pc = 0x3cce08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 16)));
label_3cce0c:
    // 0x3cce0c: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x3cce0cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3cce10:
    // 0x3cce10: 0x1b96823  subu        $t5, $t5, $t9
    ctx->pc = 0x3cce10u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 25)));
label_3cce14:
    // 0x3cce14: 0x0  nop
    ctx->pc = 0x3cce14u;
    // NOP
label_3cce18:
    // 0x3cce18: 0x31d40002  andi        $s4, $t6, 0x2
    ctx->pc = 0x3cce18u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
label_3cce1c:
    // 0x3cce1c: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
label_3cce20:
    if (ctx->pc == 0x3CCE20u) {
        ctx->pc = 0x3CCE24u;
        goto label_3cce24;
    }
    ctx->pc = 0x3CCE1Cu;
    {
        const bool branch_taken_0x3cce1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cce1c) {
            ctx->pc = 0x3CCE28u;
            goto label_3cce28;
        }
    }
    ctx->pc = 0x3CCE24u;
label_3cce24:
    // 0x3cce24: 0x309c021  addu        $t8, $t8, $t1
    ctx->pc = 0x3cce24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 9)));
label_3cce28:
    // 0x3cce28: 0xad990000  sw          $t9, 0x0($t4)
    ctx->pc = 0x3cce28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 25));
label_3cce2c:
    // 0x3cce2c: 0xad980004  sw          $t8, 0x4($t4)
    ctx->pc = 0x3cce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 24));
label_3cce30:
    // 0x3cce30: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x3cce30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_3cce34:
    // 0x3cce34: 0xad8f0008  sw          $t7, 0x8($t4)
    ctx->pc = 0x3cce34u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 15));
label_3cce38:
    // 0x3cce38: 0x1cbc02a  slt         $t8, $t6, $t3
    ctx->pc = 0x3cce38u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_3cce3c:
    // 0x3cce3c: 0xad800010  sw          $zero, 0x10($t4)
    ctx->pc = 0x3cce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
label_3cce40:
    // 0x3cce40: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x3cce40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3cce44:
    // 0x3cce44: 0xa58d0018  sh          $t5, 0x18($t4)
    ctx->pc = 0x3cce44u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 24), (uint16_t)GPR_U32(ctx, 13));
label_3cce48:
    // 0x3cce48: 0xa58d0014  sh          $t5, 0x14($t4)
    ctx->pc = 0x3cce48u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 20), (uint16_t)GPR_U32(ctx, 13));
label_3cce4c:
    // 0x3cce4c: 0x85590026  lh          $t9, 0x26($t2)
    ctx->pc = 0x3cce4cu;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 38)));
label_3cce50:
    // 0x3cce50: 0x914d002a  lbu         $t5, 0x2A($t2)
    ctx->pc = 0x3cce50u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
label_3cce54:
    // 0x3cce54: 0x32d6823  subu        $t5, $t9, $t5
    ctx->pc = 0x3cce54u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_3cce58:
    // 0x3cce58: 0xa58d0016  sh          $t5, 0x16($t4)
    ctx->pc = 0x3cce58u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 22), (uint16_t)GPR_U32(ctx, 13));
label_3cce5c:
    // 0x3cce5c: 0x854d0026  lh          $t5, 0x26($t2)
    ctx->pc = 0x3cce5cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 38)));
label_3cce60:
    // 0x3cce60: 0xa58d001a  sh          $t5, 0x1A($t4)
    ctx->pc = 0x3cce60u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 26), (uint16_t)GPR_U32(ctx, 13));
label_3cce64:
    // 0x3cce64: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x3cce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cce68:
    // 0x3cce68: 0xe580001c  swc1        $f0, 0x1C($t4)
    ctx->pc = 0x3cce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 28), bits); }
label_3cce6c:
    // 0x3cce6c: 0x854d0020  lh          $t5, 0x20($t2)
    ctx->pc = 0x3cce6cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 32)));
label_3cce70:
    // 0x3cce70: 0x1ed6818  mult        $t5, $t7, $t5
    ctx->pc = 0x3cce70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3cce74:
    // 0x3cce74: 0xa58d0024  sh          $t5, 0x24($t4)
    ctx->pc = 0x3cce74u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 36), (uint16_t)GPR_U32(ctx, 13));
label_3cce78:
    // 0x3cce78: 0xa58d0020  sh          $t5, 0x20($t4)
    ctx->pc = 0x3cce78u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 32), (uint16_t)GPR_U32(ctx, 13));
label_3cce7c:
    // 0x3cce7c: 0x85590026  lh          $t9, 0x26($t2)
    ctx->pc = 0x3cce7cu;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 38)));
label_3cce80:
    // 0x3cce80: 0x914d002a  lbu         $t5, 0x2A($t2)
    ctx->pc = 0x3cce80u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
label_3cce84:
    // 0x3cce84: 0x32d6823  subu        $t5, $t9, $t5
    ctx->pc = 0x3cce84u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_3cce88:
    // 0x3cce88: 0xa58d0022  sh          $t5, 0x22($t4)
    ctx->pc = 0x3cce88u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 34), (uint16_t)GPR_U32(ctx, 13));
label_3cce8c:
    // 0x3cce8c: 0x854d0026  lh          $t5, 0x26($t2)
    ctx->pc = 0x3cce8cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 38)));
label_3cce90:
    // 0x3cce90: 0xa58d0026  sh          $t5, 0x26($t4)
    ctx->pc = 0x3cce90u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 38), (uint16_t)GPR_U32(ctx, 13));
label_3cce94:
    // 0x3cce94: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x3cce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cce98:
    // 0x3cce98: 0xe5800028  swc1        $f0, 0x28($t4)
    ctx->pc = 0x3cce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 40), bits); }
label_3cce9c:
    // 0x3cce9c: 0x854d0022  lh          $t5, 0x22($t2)
    ctx->pc = 0x3cce9cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 34)));
label_3ccea0:
    // 0x3ccea0: 0x71ed6818  mult1       $t5, $t7, $t5
    ctx->pc = 0x3ccea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3ccea4:
    // 0x3ccea4: 0xa58d0030  sh          $t5, 0x30($t4)
    ctx->pc = 0x3ccea4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 48), (uint16_t)GPR_U32(ctx, 13));
label_3ccea8:
    // 0x3ccea8: 0xa58d002c  sh          $t5, 0x2C($t4)
    ctx->pc = 0x3ccea8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 44), (uint16_t)GPR_U32(ctx, 13));
label_3cceac:
    // 0x3cceac: 0x85590028  lh          $t9, 0x28($t2)
    ctx->pc = 0x3cceacu;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
label_3cceb0:
    // 0x3cceb0: 0x914d002a  lbu         $t5, 0x2A($t2)
    ctx->pc = 0x3cceb0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
label_3cceb4:
    // 0x3cceb4: 0x32d6823  subu        $t5, $t9, $t5
    ctx->pc = 0x3cceb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_3cceb8:
    // 0x3cceb8: 0xa58d002e  sh          $t5, 0x2E($t4)
    ctx->pc = 0x3cceb8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 46), (uint16_t)GPR_U32(ctx, 13));
label_3ccebc:
    // 0x3ccebc: 0x854d0028  lh          $t5, 0x28($t2)
    ctx->pc = 0x3ccebcu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
label_3ccec0:
    // 0x3ccec0: 0xa58d0032  sh          $t5, 0x32($t4)
    ctx->pc = 0x3ccec0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 50), (uint16_t)GPR_U32(ctx, 13));
label_3ccec4:
    // 0x3ccec4: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x3ccec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ccec8:
    // 0x3ccec8: 0xe5800034  swc1        $f0, 0x34($t4)
    ctx->pc = 0x3ccec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 52), bits); }
label_3ccecc:
    // 0x3ccecc: 0x854d0024  lh          $t5, 0x24($t2)
    ctx->pc = 0x3cceccu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 36)));
label_3cced0:
    // 0x3cced0: 0x1ed6818  mult        $t5, $t7, $t5
    ctx->pc = 0x3cced0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_3cced4:
    // 0x3cced4: 0xa58d003c  sh          $t5, 0x3C($t4)
    ctx->pc = 0x3cced4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 60), (uint16_t)GPR_U32(ctx, 13));
label_3cced8:
    // 0x3cced8: 0xa58d0038  sh          $t5, 0x38($t4)
    ctx->pc = 0x3cced8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 56), (uint16_t)GPR_U32(ctx, 13));
label_3ccedc:
    // 0x3ccedc: 0x85590028  lh          $t9, 0x28($t2)
    ctx->pc = 0x3ccedcu;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
label_3ccee0:
    // 0x3ccee0: 0x914d002a  lbu         $t5, 0x2A($t2)
    ctx->pc = 0x3ccee0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
label_3ccee4:
    // 0x3ccee4: 0x32d6823  subu        $t5, $t9, $t5
    ctx->pc = 0x3ccee4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
label_3ccee8:
    // 0x3ccee8: 0xa58d003a  sh          $t5, 0x3A($t4)
    ctx->pc = 0x3ccee8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 58), (uint16_t)GPR_U32(ctx, 13));
label_3cceec:
    // 0x3cceec: 0x854d0028  lh          $t5, 0x28($t2)
    ctx->pc = 0x3cceecu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 40)));
label_3ccef0:
    // 0x3ccef0: 0xa58d003e  sh          $t5, 0x3E($t4)
    ctx->pc = 0x3ccef0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 62), (uint16_t)GPR_U32(ctx, 13));
label_3ccef4:
    // 0x3ccef4: 0x1700ffa8  bnez        $t8, . + 4 + (-0x58 << 2)
label_3ccef8:
    if (ctx->pc == 0x3CCEF8u) {
        ctx->pc = 0x3CCEF8u;
            // 0x3ccef8: 0x258c0040  addiu       $t4, $t4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
        ctx->pc = 0x3CCEFCu;
        goto label_3ccefc;
    }
    ctx->pc = 0x3CCEF4u;
    {
        const bool branch_taken_0x3ccef4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCEF4u;
            // 0x3ccef8: 0x258c0040  addiu       $t4, $t4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccef4) {
            ctx->pc = 0x3CCD98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ccd98;
        }
    }
    ctx->pc = 0x3CCEFCu;
label_3ccefc:
    // 0x3ccefc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ccefcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ccf00:
    // 0x3ccf00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ccf00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ccf04:
    // 0x3ccf04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ccf04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ccf08:
    // 0x3ccf08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ccf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ccf0c:
    // 0x3ccf0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ccf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ccf10:
    // 0x3ccf10: 0x3e00008  jr          $ra
label_3ccf14:
    if (ctx->pc == 0x3CCF14u) {
        ctx->pc = 0x3CCF14u;
            // 0x3ccf14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3CCF18u;
        goto label_3ccf18;
    }
    ctx->pc = 0x3CCF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCF10u;
            // 0x3ccf14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CCF18u;
label_3ccf18:
    // 0x3ccf18: 0x0  nop
    ctx->pc = 0x3ccf18u;
    // NOP
label_3ccf1c:
    // 0x3ccf1c: 0x0  nop
    ctx->pc = 0x3ccf1cu;
    // NOP
label_3ccf20:
    // 0x3ccf20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ccf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3ccf24:
    // 0x3ccf24: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ccf24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ccf28:
    // 0x3ccf28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ccf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ccf2c:
    // 0x3ccf2c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ccf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ccf30:
    // 0x3ccf30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ccf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ccf34:
    // 0x3ccf34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ccf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ccf38:
    // 0x3ccf38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ccf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ccf3c:
    // 0x3ccf3c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ccf3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ccf40:
    // 0x3ccf40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ccf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ccf44:
    // 0x3ccf44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ccf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ccf48:
    // 0x3ccf48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ccf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ccf4c:
    // 0x3ccf4c: 0xc4a0f680  lwc1        $f0, -0x980($a1)
    ctx->pc = 0x3ccf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ccf50:
    // 0x3ccf50: 0xc462f684  lwc1        $f2, -0x97C($v1)
    ctx->pc = 0x3ccf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ccf54:
    // 0x3ccf54: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3ccf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3ccf58:
    // 0x3ccf58: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3ccf58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3ccf5c:
    // 0x3ccf5c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ccf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ccf60:
    // 0x3ccf60: 0xc460f68c  lwc1        $f0, -0x974($v1)
    ctx->pc = 0x3ccf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ccf64:
    // 0x3ccf64: 0xc4a1f688  lwc1        $f1, -0x978($a1)
    ctx->pc = 0x3ccf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294964872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ccf68:
    // 0x3ccf68: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3ccf68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3ccf6c:
    // 0x3ccf6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ccf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ccf70:
    // 0x3ccf70: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x3ccf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3ccf74:
    // 0x3ccf74: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3ccf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3ccf78:
    // 0x3ccf78: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x3ccf78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3ccf7c:
    // 0x3ccf7c: 0x8cb289e0  lw          $s2, -0x7620($a1)
    ctx->pc = 0x3ccf7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937056)));
label_3ccf80:
    // 0x3ccf80: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3ccf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3ccf84:
    // 0x3ccf84: 0x90690116  lbu         $t1, 0x116($v1)
    ctx->pc = 0x3ccf84u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3ccf88:
    // 0x3ccf88: 0x90930060  lbu         $s3, 0x60($a0)
    ctx->pc = 0x3ccf88u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_3ccf8c:
    // 0x3ccf8c: 0x8c88006c  lw          $t0, 0x6C($a0)
    ctx->pc = 0x3ccf8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_3ccf90:
    // 0x3ccf90: 0x8c870074  lw          $a3, 0x74($a0)
    ctx->pc = 0x3ccf90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3ccf94:
    // 0x3ccf94: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x3ccf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3ccf98:
    // 0x3ccf98: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x3ccf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_3ccf9c:
    // 0x3ccf9c: 0x1078821  addu        $s1, $t0, $a3
    ctx->pc = 0x3ccf9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_3ccfa0:
    // 0x3ccfa0: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3ccfa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3ccfa4:
    // 0x3ccfa4: 0x10860006  beq         $a0, $a2, . + 4 + (0x6 << 2)
label_3ccfa8:
    if (ctx->pc == 0x3CCFA8u) {
        ctx->pc = 0x3CCFA8u;
            // 0x3ccfa8: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x3CCFACu;
        goto label_3ccfac;
    }
    ctx->pc = 0x3CCFA4u;
    {
        const bool branch_taken_0x3ccfa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x3CCFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCFA4u;
            // 0x3ccfa8: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccfa4) {
            ctx->pc = 0x3CCFC0u;
            goto label_3ccfc0;
        }
    }
    ctx->pc = 0x3CCFACu;
label_3ccfac:
    // 0x3ccfac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ccfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ccfb0:
    // 0x3ccfb0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3ccfb4:
    if (ctx->pc == 0x3CCFB4u) {
        ctx->pc = 0x3CCFB8u;
        goto label_3ccfb8;
    }
    ctx->pc = 0x3CCFB0u;
    {
        const bool branch_taken_0x3ccfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ccfb0) {
            ctx->pc = 0x3CCFC0u;
            goto label_3ccfc0;
        }
    }
    ctx->pc = 0x3CCFB8u;
label_3ccfb8:
    // 0x3ccfb8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3ccfbc:
    if (ctx->pc == 0x3CCFBCu) {
        ctx->pc = 0x3CCFBCu;
            // 0x3ccfbc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3CCFC0u;
        goto label_3ccfc0;
    }
    ctx->pc = 0x3CCFB8u;
    {
        const bool branch_taken_0x3ccfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCFB8u;
            // 0x3ccfbc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccfb8) {
            ctx->pc = 0x3CD0ACu;
            goto label_3cd0ac;
        }
    }
    ctx->pc = 0x3CCFC0u;
label_3ccfc0:
    // 0x3ccfc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ccfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ccfc4:
    // 0x3ccfc4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3ccfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3ccfc8:
    // 0x3ccfc8: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3ccfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3ccfcc:
    // 0x3ccfcc: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3ccfccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ccfd0:
    // 0x3ccfd0: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3ccfd4:
    if (ctx->pc == 0x3CCFD4u) {
        ctx->pc = 0x3CCFD4u;
            // 0x3ccfd4: 0x312200ff  andi        $v0, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CCFD8u;
        goto label_3ccfd8;
    }
    ctx->pc = 0x3CCFD0u;
    {
        const bool branch_taken_0x3ccfd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccfd0) {
            ctx->pc = 0x3CCFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCFD0u;
            // 0x3ccfd4: 0x312200ff  andi        $v0, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCFF4u;
            goto label_3ccff4;
        }
    }
    ctx->pc = 0x3CCFD8u;
label_3ccfd8:
    // 0x3ccfd8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ccfd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ccfdc:
    // 0x3ccfdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ccfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ccfe0:
    // 0x3ccfe0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ccfe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ccfe4:
    // 0x3ccfe4: 0x320f809  jalr        $t9
label_3ccfe8:
    if (ctx->pc == 0x3CCFE8u) {
        ctx->pc = 0x3CCFE8u;
            // 0x3ccfe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CCFECu;
        goto label_3ccfec;
    }
    ctx->pc = 0x3CCFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CCFECu);
        ctx->pc = 0x3CCFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCFE4u;
            // 0x3ccfe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CCFECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CCFECu; }
            if (ctx->pc != 0x3CCFECu) { return; }
        }
        }
    }
    ctx->pc = 0x3CCFECu;
label_3ccfec:
    // 0x3ccfec: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3ccff0:
    if (ctx->pc == 0x3CCFF0u) {
        ctx->pc = 0x3CCFF4u;
        goto label_3ccff4;
    }
    ctx->pc = 0x3CCFECu;
    {
        const bool branch_taken_0x3ccfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccfec) {
            ctx->pc = 0x3CD0A8u;
            goto label_3cd0a8;
        }
    }
    ctx->pc = 0x3CCFF4u;
label_3ccff4:
    // 0x3ccff4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3ccff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3ccff8:
    // 0x3ccff8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3ccff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ccffc:
    // 0x3ccffc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3cd000:
    if (ctx->pc == 0x3CD000u) {
        ctx->pc = 0x3CD004u;
        goto label_3cd004;
    }
    ctx->pc = 0x3CCFFCu;
    {
        const bool branch_taken_0x3ccffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccffc) {
            ctx->pc = 0x3CD008u;
            goto label_3cd008;
        }
    }
    ctx->pc = 0x3CD004u;
label_3cd004:
    // 0x3cd004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cd004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd008:
    // 0x3cd008: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cd008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cd00c:
    // 0x3cd00c: 0x8c423ff0  lw          $v0, 0x3FF0($v0)
    ctx->pc = 0x3cd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
label_3cd010:
    // 0x3cd010: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x3cd010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3cd014:
    // 0x3cd014: 0xc0506ac  jal         func_141AB0
label_3cd018:
    if (ctx->pc == 0x3CD018u) {
        ctx->pc = 0x3CD018u;
            // 0x3cd018: 0x8e85005c  lw          $a1, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x3CD01Cu;
        goto label_3cd01c;
    }
    ctx->pc = 0x3CD014u;
    SET_GPR_U32(ctx, 31, 0x3CD01Cu);
    ctx->pc = 0x3CD018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD014u;
            // 0x3cd018: 0x8e85005c  lw          $a1, 0x5C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD01Cu; }
        if (ctx->pc != 0x3CD01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD01Cu; }
        if (ctx->pc != 0x3CD01Cu) { return; }
    }
    ctx->pc = 0x3CD01Cu;
label_3cd01c:
    // 0x3cd01c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cd01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cd020:
    // 0x3cd020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cd020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cd024:
    // 0x3cd024: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3cd024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3cd028:
    // 0x3cd028: 0x320f809  jalr        $t9
label_3cd02c:
    if (ctx->pc == 0x3CD02Cu) {
        ctx->pc = 0x3CD02Cu;
            // 0x3cd02c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CD030u;
        goto label_3cd030;
    }
    ctx->pc = 0x3CD028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD030u);
        ctx->pc = 0x3CD02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD028u;
            // 0x3cd02c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD030u; }
            if (ctx->pc != 0x3CD030u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD030u;
label_3cd030:
    // 0x3cd030: 0xc6830068  lwc1        $f3, 0x68($s4)
    ctx->pc = 0x3cd030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cd034:
    // 0x3cd034: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x3cd034u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
label_3cd038:
    // 0x3cd038: 0xc6820064  lwc1        $f2, 0x64($s4)
    ctx->pc = 0x3cd038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd03c:
    // 0x3cd03c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3cd03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3cd040:
    // 0x3cd040: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3cd040u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd044:
    // 0x3cd044: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3cd044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3cd048:
    // 0x3cd048: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3cd048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3cd04c:
    // 0x3cd04c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cd04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd050:
    // 0x3cd050: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3cd050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cd054:
    // 0x3cd054: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3cd054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3cd058:
    // 0x3cd058: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cd058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3cd05c:
    // 0x3cd05c: 0xc685007c  lwc1        $f5, 0x7C($s4)
    ctx->pc = 0x3cd05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cd060:
    // 0x3cd060: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3cd060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3cd064:
    // 0x3cd064: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cd064u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd068:
    // 0x3cd068: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x3cd068u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_3cd06c:
    // 0x3cd06c: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x3cd06cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3cd070:
    // 0x3cd070: 0x0  nop
    ctx->pc = 0x3cd070u;
    // NOP
label_3cd074:
    // 0x3cd074: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3cd074u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3cd078:
    // 0x3cd078: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3cd078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3cd07c:
    // 0x3cd07c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cd07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cd080:
    // 0x3cd080: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3cd080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3cd084:
    // 0x3cd084: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x3cd084u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3cd088:
    // 0x3cd088: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x3cd088u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cd08c:
    // 0x3cd08c: 0x46030341  sub.s       $f13, $f0, $f3
    ctx->pc = 0x3cd08cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3cd090:
    // 0x3cd090: 0xc0bc21c  jal         func_2F0870
label_3cd094:
    if (ctx->pc == 0x3CD094u) {
        ctx->pc = 0x3CD094u;
            // 0x3cd094: 0x460303c0  add.s       $f15, $f0, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x3CD098u;
        goto label_3cd098;
    }
    ctx->pc = 0x3CD090u;
    SET_GPR_U32(ctx, 31, 0x3CD098u);
    ctx->pc = 0x3CD094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD090u;
            // 0x3cd094: 0x460303c0  add.s       $f15, $f0, $f3 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0870u;
    if (runtime->hasFunction(0x2F0870u)) {
        auto targetFn = runtime->lookupFunction(0x2F0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD098u; }
        if (ctx->pc != 0x3CD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0870_0x2f0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD098u; }
        if (ctx->pc != 0x3CD098u) { return; }
    }
    ctx->pc = 0x3CD098u;
label_3cd098:
    // 0x3cd098: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3cd098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3cd09c:
    // 0x3cd09c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3cd09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3cd0a0:
    // 0x3cd0a0: 0x320f809  jalr        $t9
label_3cd0a4:
    if (ctx->pc == 0x3CD0A4u) {
        ctx->pc = 0x3CD0A4u;
            // 0x3cd0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD0A8u;
        goto label_3cd0a8;
    }
    ctx->pc = 0x3CD0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD0A8u);
        ctx->pc = 0x3CD0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD0A0u;
            // 0x3cd0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD0A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD0A8u; }
            if (ctx->pc != 0x3CD0A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD0A8u;
label_3cd0a8:
    // 0x3cd0a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3cd0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3cd0ac:
    // 0x3cd0ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3cd0acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cd0b0:
    // 0x3cd0b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cd0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cd0b4:
    // 0x3cd0b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cd0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cd0b8:
    // 0x3cd0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cd0bc:
    // 0x3cd0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cd0c0:
    // 0x3cd0c0: 0x3e00008  jr          $ra
label_3cd0c4:
    if (ctx->pc == 0x3CD0C4u) {
        ctx->pc = 0x3CD0C4u;
            // 0x3cd0c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3CD0C8u;
        goto label_3cd0c8;
    }
    ctx->pc = 0x3CD0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD0C0u;
            // 0x3cd0c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CD0C8u;
label_3cd0c8:
    // 0x3cd0c8: 0x0  nop
    ctx->pc = 0x3cd0c8u;
    // NOP
label_3cd0cc:
    // 0x3cd0cc: 0x0  nop
    ctx->pc = 0x3cd0ccu;
    // NOP
label_3cd0d0:
    // 0x3cd0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cd0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3cd0d4:
    // 0x3cd0d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3cd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3cd0d8:
    // 0x3cd0d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cd0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3cd0dc:
    // 0x3cd0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cd0e0:
    // 0x3cd0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cd0e4:
    // 0x3cd0e4: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x3cd0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3cd0e8:
    // 0x3cd0e8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3cd0e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3cd0ec:
    // 0x3cd0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cd0f0:
    // 0x3cd0f0: 0x10a3006d  beq         $a1, $v1, . + 4 + (0x6D << 2)
label_3cd0f4:
    if (ctx->pc == 0x3CD0F4u) {
        ctx->pc = 0x3CD0F4u;
            // 0x3cd0f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD0F8u;
        goto label_3cd0f8;
    }
    ctx->pc = 0x3CD0F0u;
    {
        const bool branch_taken_0x3cd0f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CD0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD0F0u;
            // 0x3cd0f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd0f0) {
            ctx->pc = 0x3CD2A8u;
            goto label_3cd2a8;
        }
    }
    ctx->pc = 0x3CD0F8u;
label_3cd0f8:
    // 0x3cd0f8: 0x50a00066  beql        $a1, $zero, . + 4 + (0x66 << 2)
label_3cd0fc:
    if (ctx->pc == 0x3CD0FCu) {
        ctx->pc = 0x3CD0FCu;
            // 0x3cd0fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3CD100u;
        goto label_3cd100;
    }
    ctx->pc = 0x3CD0F8u;
    {
        const bool branch_taken_0x3cd0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd0f8) {
            ctx->pc = 0x3CD0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD0F8u;
            // 0x3cd0fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD294u;
            goto label_3cd294;
        }
    }
    ctx->pc = 0x3CD100u;
label_3cd100:
    // 0x3cd100: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cd100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cd104:
    // 0x3cd104: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
label_3cd108:
    if (ctx->pc == 0x3CD108u) {
        ctx->pc = 0x3CD10Cu;
        goto label_3cd10c;
    }
    ctx->pc = 0x3CD104u;
    {
        const bool branch_taken_0x3cd104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cd104) {
            ctx->pc = 0x3CD1A4u;
            goto label_3cd1a4;
        }
    }
    ctx->pc = 0x3CD10Cu;
label_3cd10c:
    // 0x3cd10c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cd10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cd110:
    // 0x3cd110: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_3cd114:
    if (ctx->pc == 0x3CD114u) {
        ctx->pc = 0x3CD118u;
        goto label_3cd118;
    }
    ctx->pc = 0x3CD110u;
    {
        const bool branch_taken_0x3cd110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cd110) {
            ctx->pc = 0x3CD138u;
            goto label_3cd138;
        }
    }
    ctx->pc = 0x3CD118u;
label_3cd118:
    // 0x3cd118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cd118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cd11c:
    // 0x3cd11c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3cd120:
    if (ctx->pc == 0x3CD120u) {
        ctx->pc = 0x3CD120u;
            // 0x3cd120: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3CD124u;
        goto label_3cd124;
    }
    ctx->pc = 0x3CD11Cu;
    {
        const bool branch_taken_0x3cd11c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cd11c) {
            ctx->pc = 0x3CD120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD11Cu;
            // 0x3cd120: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD12Cu;
            goto label_3cd12c;
        }
    }
    ctx->pc = 0x3CD124u;
label_3cd124:
    // 0x3cd124: 0x10000066  b           . + 4 + (0x66 << 2)
label_3cd128:
    if (ctx->pc == 0x3CD128u) {
        ctx->pc = 0x3CD128u;
            // 0x3cd128: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3CD12Cu;
        goto label_3cd12c;
    }
    ctx->pc = 0x3CD124u;
    {
        const bool branch_taken_0x3cd124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD124u;
            // 0x3cd128: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd124) {
            ctx->pc = 0x3CD2C0u;
            goto label_3cd2c0;
        }
    }
    ctx->pc = 0x3CD12Cu;
label_3cd12c:
    // 0x3cd12c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cd12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cd130:
    // 0x3cd130: 0x320f809  jalr        $t9
label_3cd134:
    if (ctx->pc == 0x3CD134u) {
        ctx->pc = 0x3CD138u;
        goto label_3cd138;
    }
    ctx->pc = 0x3CD130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD138u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD138u; }
            if (ctx->pc != 0x3CD138u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD138u;
label_3cd138:
    // 0x3cd138: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cd138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cd13c:
    // 0x3cd13c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3cd13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3cd140:
    // 0x3cd140: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3cd140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3cd144:
    // 0x3cd144: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3cd144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cd148:
    // 0x3cd148: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3cd14c:
    if (ctx->pc == 0x3CD14Cu) {
        ctx->pc = 0x3CD14Cu;
            // 0x3cd14c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3CD150u;
        goto label_3cd150;
    }
    ctx->pc = 0x3CD148u;
    {
        const bool branch_taken_0x3cd148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd148) {
            ctx->pc = 0x3CD14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD148u;
            // 0x3cd14c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD16Cu;
            goto label_3cd16c;
        }
    }
    ctx->pc = 0x3CD150u;
label_3cd150:
    // 0x3cd150: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3cd150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cd154:
    // 0x3cd154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd158:
    // 0x3cd158: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cd158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cd15c:
    // 0x3cd15c: 0x320f809  jalr        $t9
label_3cd160:
    if (ctx->pc == 0x3CD160u) {
        ctx->pc = 0x3CD160u;
            // 0x3cd160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD164u;
        goto label_3cd164;
    }
    ctx->pc = 0x3CD15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD164u);
        ctx->pc = 0x3CD160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD15Cu;
            // 0x3cd160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD164u; }
            if (ctx->pc != 0x3CD164u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD164u;
label_3cd164:
    // 0x3cd164: 0x10000055  b           . + 4 + (0x55 << 2)
label_3cd168:
    if (ctx->pc == 0x3CD168u) {
        ctx->pc = 0x3CD16Cu;
        goto label_3cd16c;
    }
    ctx->pc = 0x3CD164u;
    {
        const bool branch_taken_0x3cd164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd164) {
            ctx->pc = 0x3CD2BCu;
            goto label_3cd2bc;
        }
    }
    ctx->pc = 0x3CD16Cu;
label_3cd16c:
    // 0x3cd16c: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3cd16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd170:
    // 0x3cd170: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3cd170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cd174:
    // 0x3cd174: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x3cd174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3cd178:
    // 0x3cd178: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x3cd178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd17c:
    // 0x3cd17c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3cd17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cd180:
    // 0x3cd180: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
label_3cd184:
    if (ctx->pc == 0x3CD184u) {
        ctx->pc = 0x3CD188u;
        goto label_3cd188;
    }
    ctx->pc = 0x3CD180u;
    {
        const bool branch_taken_0x3cd180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cd180) {
            ctx->pc = 0x3CD2BCu;
            goto label_3cd2bc;
        }
    }
    ctx->pc = 0x3CD188u;
label_3cd188:
    // 0x3cd188: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3cd188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3cd18c:
    // 0x3cd18c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3cd18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cd190:
    // 0x3cd190: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cd190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cd194:
    // 0x3cd194: 0x320f809  jalr        $t9
label_3cd198:
    if (ctx->pc == 0x3CD198u) {
        ctx->pc = 0x3CD198u;
            // 0x3cd198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD19Cu;
        goto label_3cd19c;
    }
    ctx->pc = 0x3CD194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD19Cu);
        ctx->pc = 0x3CD198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD194u;
            // 0x3cd198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD19Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD19Cu; }
            if (ctx->pc != 0x3CD19Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CD19Cu;
label_3cd19c:
    // 0x3cd19c: 0x10000047  b           . + 4 + (0x47 << 2)
label_3cd1a0:
    if (ctx->pc == 0x3CD1A0u) {
        ctx->pc = 0x3CD1A4u;
        goto label_3cd1a4;
    }
    ctx->pc = 0x3CD19Cu;
    {
        const bool branch_taken_0x3cd19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd19c) {
            ctx->pc = 0x3CD2BCu;
            goto label_3cd2bc;
        }
    }
    ctx->pc = 0x3CD1A4u;
label_3cd1a4:
    // 0x3cd1a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cd1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3cd1a8:
    // 0x3cd1a8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3cd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3cd1ac:
    // 0x3cd1ac: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3cd1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3cd1b0:
    // 0x3cd1b0: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3cd1b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3cd1b4:
    // 0x3cd1b4: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3cd1b8:
    if (ctx->pc == 0x3CD1B8u) {
        ctx->pc = 0x3CD1B8u;
            // 0x3cd1b8: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3CD1BCu;
        goto label_3cd1bc;
    }
    ctx->pc = 0x3CD1B4u;
    {
        const bool branch_taken_0x3cd1b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd1b4) {
            ctx->pc = 0x3CD1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD1B4u;
            // 0x3cd1b8: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD1D4u;
            goto label_3cd1d4;
        }
    }
    ctx->pc = 0x3CD1BCu;
label_3cd1bc:
    // 0x3cd1bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cd1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cd1c0:
    // 0x3cd1c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cd1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cd1c4:
    // 0x3cd1c4: 0x320f809  jalr        $t9
label_3cd1c8:
    if (ctx->pc == 0x3CD1C8u) {
        ctx->pc = 0x3CD1C8u;
            // 0x3cd1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD1CCu;
        goto label_3cd1cc;
    }
    ctx->pc = 0x3CD1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD1CCu);
        ctx->pc = 0x3CD1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD1C4u;
            // 0x3cd1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD1CCu; }
            if (ctx->pc != 0x3CD1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CD1CCu;
label_3cd1cc:
    // 0x3cd1cc: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3cd1d0:
    if (ctx->pc == 0x3CD1D0u) {
        ctx->pc = 0x3CD1D4u;
        goto label_3cd1d4;
    }
    ctx->pc = 0x3CD1CCu;
    {
        const bool branch_taken_0x3cd1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd1cc) {
            ctx->pc = 0x3CD2BCu;
            goto label_3cd2bc;
        }
    }
    ctx->pc = 0x3CD1D4u;
label_3cd1d4:
    // 0x3cd1d4: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3cd1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd1d8:
    // 0x3cd1d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cd1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cd1dc:
    // 0x3cd1dc: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3cd1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3cd1e0:
    // 0x3cd1e0: 0xc622008c  lwc1        $f2, 0x8C($s1)
    ctx->pc = 0x3cd1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd1e4:
    // 0x3cd1e4: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3cd1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd1e8:
    // 0x3cd1e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3cd1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cd1ec:
    // 0x3cd1ec: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_3cd1f0:
    if (ctx->pc == 0x3CD1F0u) {
        ctx->pc = 0x3CD1F0u;
            // 0x3cd1f0: 0x3c04437f  lui         $a0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
        ctx->pc = 0x3CD1F4u;
        goto label_3cd1f4;
    }
    ctx->pc = 0x3CD1ECu;
    {
        const bool branch_taken_0x3cd1ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cd1ec) {
            ctx->pc = 0x3CD1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD1ECu;
            // 0x3cd1f0: 0x3c04437f  lui         $a0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD210u;
            goto label_3cd210;
        }
    }
    ctx->pc = 0x3CD1F4u;
label_3cd1f4:
    // 0x3cd1f4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3cd1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3cd1f8:
    // 0x3cd1f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3cd1f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cd1fc:
    // 0x3cd1fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3cd1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3cd200:
    // 0x3cd200: 0x320f809  jalr        $t9
label_3cd204:
    if (ctx->pc == 0x3CD204u) {
        ctx->pc = 0x3CD204u;
            // 0x3cd204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD208u;
        goto label_3cd208;
    }
    ctx->pc = 0x3CD200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD208u);
        ctx->pc = 0x3CD204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD200u;
            // 0x3cd204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD208u; }
            if (ctx->pc != 0x3CD208u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD208u;
label_3cd208:
    // 0x3cd208: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3cd20c:
    if (ctx->pc == 0x3CD20Cu) {
        ctx->pc = 0x3CD210u;
        goto label_3cd210;
    }
    ctx->pc = 0x3CD208u;
    {
        const bool branch_taken_0x3cd208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd208) {
            ctx->pc = 0x3CD2BCu;
            goto label_3cd2bc;
        }
    }
    ctx->pc = 0x3CD210u;
label_3cd210:
    // 0x3cd210: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cd210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3cd214:
    // 0x3cd214: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cd214u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cd218:
    // 0x3cd218: 0x0  nop
    ctx->pc = 0x3cd218u;
    // NOP
label_3cd21c:
    // 0x3cd21c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cd21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cd220:
    // 0x3cd220: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3cd220u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_3cd224:
    // 0x3cd224: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cd224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cd228:
    // 0x3cd228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cd228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd22c:
    // 0x3cd22c: 0x0  nop
    ctx->pc = 0x3cd22cu;
    // NOP
label_3cd230:
    // 0x3cd230: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cd230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cd234:
    // 0x3cd234: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3cd238:
    if (ctx->pc == 0x3CD238u) {
        ctx->pc = 0x3CD238u;
            // 0x3cd238: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3CD23Cu;
        goto label_3cd23c;
    }
    ctx->pc = 0x3CD234u;
    {
        const bool branch_taken_0x3cd234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cd234) {
            ctx->pc = 0x3CD238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD234u;
            // 0x3cd238: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD24Cu;
            goto label_3cd24c;
        }
    }
    ctx->pc = 0x3CD23Cu;
label_3cd23c:
    // 0x3cd23c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cd23cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cd240:
    // 0x3cd240: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3cd240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3cd244:
    // 0x3cd244: 0x10000007  b           . + 4 + (0x7 << 2)
label_3cd248:
    if (ctx->pc == 0x3CD248u) {
        ctx->pc = 0x3CD248u;
            // 0x3cd248: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CD24Cu;
        goto label_3cd24c;
    }
    ctx->pc = 0x3CD244u;
    {
        const bool branch_taken_0x3cd244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD244u;
            // 0x3cd248: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd244) {
            ctx->pc = 0x3CD264u;
            goto label_3cd264;
        }
    }
    ctx->pc = 0x3CD24Cu;
label_3cd24c:
    // 0x3cd24c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cd250:
    // 0x3cd250: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cd250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cd254:
    // 0x3cd254: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3cd254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3cd258:
    // 0x3cd258: 0x0  nop
    ctx->pc = 0x3cd258u;
    // NOP
label_3cd25c:
    // 0x3cd25c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cd25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3cd260:
    // 0x3cd260: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3cd260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3cd264:
    // 0x3cd264: 0xa2240060  sb          $a0, 0x60($s1)
    ctx->pc = 0x3cd264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
label_3cd268:
    // 0x3cd268: 0xc6230080  lwc1        $f3, 0x80($s1)
    ctx->pc = 0x3cd268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cd26c:
    // 0x3cd26c: 0xc6220084  lwc1        $f2, 0x84($s1)
    ctx->pc = 0x3cd26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cd270:
    // 0x3cd270: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x3cd270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cd274:
    // 0x3cd274: 0xc620008c  lwc1        $f0, 0x8C($s1)
    ctx->pc = 0x3cd274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cd278:
    // 0x3cd278: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3cd278u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3cd27c:
    // 0x3cd27c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cd27cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3cd280:
    // 0x3cd280: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3cd280u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3cd284:
    // 0x3cd284: 0x0  nop
    ctx->pc = 0x3cd284u;
    // NOP
label_3cd288:
    // 0x3cd288: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3cd288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3cd28c:
    // 0x3cd28c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3cd290:
    if (ctx->pc == 0x3CD290u) {
        ctx->pc = 0x3CD290u;
            // 0x3cd290: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->pc = 0x3CD294u;
        goto label_3cd294;
    }
    ctx->pc = 0x3CD28Cu;
    {
        const bool branch_taken_0x3cd28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD28Cu;
            // 0x3cd290: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd28c) {
            ctx->pc = 0x3CD2BCu;
            goto label_3cd2bc;
        }
    }
    ctx->pc = 0x3CD294u;
label_3cd294:
    // 0x3cd294: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3cd294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3cd298:
    // 0x3cd298: 0x320f809  jalr        $t9
label_3cd29c:
    if (ctx->pc == 0x3CD29Cu) {
        ctx->pc = 0x3CD2A0u;
        goto label_3cd2a0;
    }
    ctx->pc = 0x3CD298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CD2A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CD2A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CD2A0u; }
            if (ctx->pc != 0x3CD2A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3CD2A0u;
label_3cd2a0:
    // 0x3cd2a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cd2a4:
    if (ctx->pc == 0x3CD2A4u) {
        ctx->pc = 0x3CD2A8u;
        goto label_3cd2a8;
    }
    ctx->pc = 0x3CD2A0u;
    {
        const bool branch_taken_0x3cd2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd2a0) {
            ctx->pc = 0x3CD2BCu;
            goto label_3cd2bc;
        }
    }
    ctx->pc = 0x3CD2A8u;
label_3cd2a8:
    // 0x3cd2a8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3cd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3cd2ac:
    // 0x3cd2ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cd2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2b0:
    // 0x3cd2b0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3cd2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3cd2b4:
    // 0x3cd2b4: 0xc057b7c  jal         func_15EDF0
label_3cd2b8:
    if (ctx->pc == 0x3CD2B8u) {
        ctx->pc = 0x3CD2B8u;
            // 0x3cd2b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CD2BCu;
        goto label_3cd2bc;
    }
    ctx->pc = 0x3CD2B4u;
    SET_GPR_U32(ctx, 31, 0x3CD2BCu);
    ctx->pc = 0x3CD2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD2B4u;
            // 0x3cd2b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD2BCu; }
        if (ctx->pc != 0x3CD2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD2BCu; }
        if (ctx->pc != 0x3CD2BCu) { return; }
    }
    ctx->pc = 0x3CD2BCu;
label_3cd2bc:
    // 0x3cd2bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cd2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cd2c0:
    // 0x3cd2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cd2c4:
    // 0x3cd2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cd2c8:
    // 0x3cd2c8: 0x3e00008  jr          $ra
label_3cd2cc:
    if (ctx->pc == 0x3CD2CCu) {
        ctx->pc = 0x3CD2CCu;
            // 0x3cd2cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3CD2D0u;
        goto label_3cd2d0;
    }
    ctx->pc = 0x3CD2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD2C8u;
            // 0x3cd2cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CD2D0u;
label_3cd2d0:
    // 0x3cd2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cd2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3cd2d4:
    // 0x3cd2d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cd2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3cd2d8:
    // 0x3cd2d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cd2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cd2dc:
    // 0x3cd2dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cd2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cd2e0:
    // 0x3cd2e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cd2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2e4:
    // 0x3cd2e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3cd2e8:
    if (ctx->pc == 0x3CD2E8u) {
        ctx->pc = 0x3CD2E8u;
            // 0x3cd2e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD2ECu;
        goto label_3cd2ec;
    }
    ctx->pc = 0x3CD2E4u;
    {
        const bool branch_taken_0x3cd2e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD2E4u;
            // 0x3cd2e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd2e4) {
            ctx->pc = 0x3CD318u;
            goto label_3cd318;
        }
    }
    ctx->pc = 0x3CD2ECu;
label_3cd2ec:
    // 0x3cd2ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3cd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3cd2f0:
    // 0x3cd2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cd2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd2f4:
    // 0x3cd2f4: 0x244290b0  addiu       $v0, $v0, -0x6F50
    ctx->pc = 0x3cd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938800));
label_3cd2f8:
    // 0x3cd2f8: 0xc0ee744  jal         func_3B9D10
label_3cd2fc:
    if (ctx->pc == 0x3CD2FCu) {
        ctx->pc = 0x3CD2FCu;
            // 0x3cd2fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3CD300u;
        goto label_3cd300;
    }
    ctx->pc = 0x3CD2F8u;
    SET_GPR_U32(ctx, 31, 0x3CD300u);
    ctx->pc = 0x3CD2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD2F8u;
            // 0x3cd2fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD300u; }
        if (ctx->pc != 0x3CD300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD300u; }
        if (ctx->pc != 0x3CD300u) { return; }
    }
    ctx->pc = 0x3CD300u;
label_3cd300:
    // 0x3cd300: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3cd300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3cd304:
    // 0x3cd304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3cd304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3cd308:
    // 0x3cd308: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3cd30c:
    if (ctx->pc == 0x3CD30Cu) {
        ctx->pc = 0x3CD30Cu;
            // 0x3cd30c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD310u;
        goto label_3cd310;
    }
    ctx->pc = 0x3CD308u;
    {
        const bool branch_taken_0x3cd308 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3cd308) {
            ctx->pc = 0x3CD30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD308u;
            // 0x3cd30c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CD31Cu;
            goto label_3cd31c;
        }
    }
    ctx->pc = 0x3CD310u;
label_3cd310:
    // 0x3cd310: 0xc0400a8  jal         func_1002A0
label_3cd314:
    if (ctx->pc == 0x3CD314u) {
        ctx->pc = 0x3CD314u;
            // 0x3cd314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CD318u;
        goto label_3cd318;
    }
    ctx->pc = 0x3CD310u;
    SET_GPR_U32(ctx, 31, 0x3CD318u);
    ctx->pc = 0x3CD314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD310u;
            // 0x3cd314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD318u; }
        if (ctx->pc != 0x3CD318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CD318u; }
        if (ctx->pc != 0x3CD318u) { return; }
    }
    ctx->pc = 0x3CD318u;
label_3cd318:
    // 0x3cd318: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3cd318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd31c:
    // 0x3cd31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cd31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3cd320:
    // 0x3cd320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cd320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cd324:
    // 0x3cd324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cd324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cd328:
    // 0x3cd328: 0x3e00008  jr          $ra
label_3cd32c:
    if (ctx->pc == 0x3CD32Cu) {
        ctx->pc = 0x3CD32Cu;
            // 0x3cd32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3CD330u;
        goto label_fallthrough_0x3cd328;
    }
    ctx->pc = 0x3CD328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CD328u;
            // 0x3cd32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3cd328:
    ctx->pc = 0x3CD330u;
}
