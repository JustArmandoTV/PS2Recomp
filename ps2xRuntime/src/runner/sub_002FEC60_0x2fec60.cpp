#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FEC60
// Address: 0x2fec60 - 0x2ff960
void sub_002FEC60_0x2fec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEC60_0x2fec60");
#endif

    switch (ctx->pc) {
        case 0x2fec60u: goto label_2fec60;
        case 0x2fec64u: goto label_2fec64;
        case 0x2fec68u: goto label_2fec68;
        case 0x2fec6cu: goto label_2fec6c;
        case 0x2fec70u: goto label_2fec70;
        case 0x2fec74u: goto label_2fec74;
        case 0x2fec78u: goto label_2fec78;
        case 0x2fec7cu: goto label_2fec7c;
        case 0x2fec80u: goto label_2fec80;
        case 0x2fec84u: goto label_2fec84;
        case 0x2fec88u: goto label_2fec88;
        case 0x2fec8cu: goto label_2fec8c;
        case 0x2fec90u: goto label_2fec90;
        case 0x2fec94u: goto label_2fec94;
        case 0x2fec98u: goto label_2fec98;
        case 0x2fec9cu: goto label_2fec9c;
        case 0x2feca0u: goto label_2feca0;
        case 0x2feca4u: goto label_2feca4;
        case 0x2feca8u: goto label_2feca8;
        case 0x2fecacu: goto label_2fecac;
        case 0x2fecb0u: goto label_2fecb0;
        case 0x2fecb4u: goto label_2fecb4;
        case 0x2fecb8u: goto label_2fecb8;
        case 0x2fecbcu: goto label_2fecbc;
        case 0x2fecc0u: goto label_2fecc0;
        case 0x2fecc4u: goto label_2fecc4;
        case 0x2fecc8u: goto label_2fecc8;
        case 0x2fecccu: goto label_2feccc;
        case 0x2fecd0u: goto label_2fecd0;
        case 0x2fecd4u: goto label_2fecd4;
        case 0x2fecd8u: goto label_2fecd8;
        case 0x2fecdcu: goto label_2fecdc;
        case 0x2fece0u: goto label_2fece0;
        case 0x2fece4u: goto label_2fece4;
        case 0x2fece8u: goto label_2fece8;
        case 0x2fececu: goto label_2fecec;
        case 0x2fecf0u: goto label_2fecf0;
        case 0x2fecf4u: goto label_2fecf4;
        case 0x2fecf8u: goto label_2fecf8;
        case 0x2fecfcu: goto label_2fecfc;
        case 0x2fed00u: goto label_2fed00;
        case 0x2fed04u: goto label_2fed04;
        case 0x2fed08u: goto label_2fed08;
        case 0x2fed0cu: goto label_2fed0c;
        case 0x2fed10u: goto label_2fed10;
        case 0x2fed14u: goto label_2fed14;
        case 0x2fed18u: goto label_2fed18;
        case 0x2fed1cu: goto label_2fed1c;
        case 0x2fed20u: goto label_2fed20;
        case 0x2fed24u: goto label_2fed24;
        case 0x2fed28u: goto label_2fed28;
        case 0x2fed2cu: goto label_2fed2c;
        case 0x2fed30u: goto label_2fed30;
        case 0x2fed34u: goto label_2fed34;
        case 0x2fed38u: goto label_2fed38;
        case 0x2fed3cu: goto label_2fed3c;
        case 0x2fed40u: goto label_2fed40;
        case 0x2fed44u: goto label_2fed44;
        case 0x2fed48u: goto label_2fed48;
        case 0x2fed4cu: goto label_2fed4c;
        case 0x2fed50u: goto label_2fed50;
        case 0x2fed54u: goto label_2fed54;
        case 0x2fed58u: goto label_2fed58;
        case 0x2fed5cu: goto label_2fed5c;
        case 0x2fed60u: goto label_2fed60;
        case 0x2fed64u: goto label_2fed64;
        case 0x2fed68u: goto label_2fed68;
        case 0x2fed6cu: goto label_2fed6c;
        case 0x2fed70u: goto label_2fed70;
        case 0x2fed74u: goto label_2fed74;
        case 0x2fed78u: goto label_2fed78;
        case 0x2fed7cu: goto label_2fed7c;
        case 0x2fed80u: goto label_2fed80;
        case 0x2fed84u: goto label_2fed84;
        case 0x2fed88u: goto label_2fed88;
        case 0x2fed8cu: goto label_2fed8c;
        case 0x2fed90u: goto label_2fed90;
        case 0x2fed94u: goto label_2fed94;
        case 0x2fed98u: goto label_2fed98;
        case 0x2fed9cu: goto label_2fed9c;
        case 0x2feda0u: goto label_2feda0;
        case 0x2feda4u: goto label_2feda4;
        case 0x2feda8u: goto label_2feda8;
        case 0x2fedacu: goto label_2fedac;
        case 0x2fedb0u: goto label_2fedb0;
        case 0x2fedb4u: goto label_2fedb4;
        case 0x2fedb8u: goto label_2fedb8;
        case 0x2fedbcu: goto label_2fedbc;
        case 0x2fedc0u: goto label_2fedc0;
        case 0x2fedc4u: goto label_2fedc4;
        case 0x2fedc8u: goto label_2fedc8;
        case 0x2fedccu: goto label_2fedcc;
        case 0x2fedd0u: goto label_2fedd0;
        case 0x2fedd4u: goto label_2fedd4;
        case 0x2fedd8u: goto label_2fedd8;
        case 0x2feddcu: goto label_2feddc;
        case 0x2fede0u: goto label_2fede0;
        case 0x2fede4u: goto label_2fede4;
        case 0x2fede8u: goto label_2fede8;
        case 0x2fedecu: goto label_2fedec;
        case 0x2fedf0u: goto label_2fedf0;
        case 0x2fedf4u: goto label_2fedf4;
        case 0x2fedf8u: goto label_2fedf8;
        case 0x2fedfcu: goto label_2fedfc;
        case 0x2fee00u: goto label_2fee00;
        case 0x2fee04u: goto label_2fee04;
        case 0x2fee08u: goto label_2fee08;
        case 0x2fee0cu: goto label_2fee0c;
        case 0x2fee10u: goto label_2fee10;
        case 0x2fee14u: goto label_2fee14;
        case 0x2fee18u: goto label_2fee18;
        case 0x2fee1cu: goto label_2fee1c;
        case 0x2fee20u: goto label_2fee20;
        case 0x2fee24u: goto label_2fee24;
        case 0x2fee28u: goto label_2fee28;
        case 0x2fee2cu: goto label_2fee2c;
        case 0x2fee30u: goto label_2fee30;
        case 0x2fee34u: goto label_2fee34;
        case 0x2fee38u: goto label_2fee38;
        case 0x2fee3cu: goto label_2fee3c;
        case 0x2fee40u: goto label_2fee40;
        case 0x2fee44u: goto label_2fee44;
        case 0x2fee48u: goto label_2fee48;
        case 0x2fee4cu: goto label_2fee4c;
        case 0x2fee50u: goto label_2fee50;
        case 0x2fee54u: goto label_2fee54;
        case 0x2fee58u: goto label_2fee58;
        case 0x2fee5cu: goto label_2fee5c;
        case 0x2fee60u: goto label_2fee60;
        case 0x2fee64u: goto label_2fee64;
        case 0x2fee68u: goto label_2fee68;
        case 0x2fee6cu: goto label_2fee6c;
        case 0x2fee70u: goto label_2fee70;
        case 0x2fee74u: goto label_2fee74;
        case 0x2fee78u: goto label_2fee78;
        case 0x2fee7cu: goto label_2fee7c;
        case 0x2fee80u: goto label_2fee80;
        case 0x2fee84u: goto label_2fee84;
        case 0x2fee88u: goto label_2fee88;
        case 0x2fee8cu: goto label_2fee8c;
        case 0x2fee90u: goto label_2fee90;
        case 0x2fee94u: goto label_2fee94;
        case 0x2fee98u: goto label_2fee98;
        case 0x2fee9cu: goto label_2fee9c;
        case 0x2feea0u: goto label_2feea0;
        case 0x2feea4u: goto label_2feea4;
        case 0x2feea8u: goto label_2feea8;
        case 0x2feeacu: goto label_2feeac;
        case 0x2feeb0u: goto label_2feeb0;
        case 0x2feeb4u: goto label_2feeb4;
        case 0x2feeb8u: goto label_2feeb8;
        case 0x2feebcu: goto label_2feebc;
        case 0x2feec0u: goto label_2feec0;
        case 0x2feec4u: goto label_2feec4;
        case 0x2feec8u: goto label_2feec8;
        case 0x2feeccu: goto label_2feecc;
        case 0x2feed0u: goto label_2feed0;
        case 0x2feed4u: goto label_2feed4;
        case 0x2feed8u: goto label_2feed8;
        case 0x2feedcu: goto label_2feedc;
        case 0x2feee0u: goto label_2feee0;
        case 0x2feee4u: goto label_2feee4;
        case 0x2feee8u: goto label_2feee8;
        case 0x2feeecu: goto label_2feeec;
        case 0x2feef0u: goto label_2feef0;
        case 0x2feef4u: goto label_2feef4;
        case 0x2feef8u: goto label_2feef8;
        case 0x2feefcu: goto label_2feefc;
        case 0x2fef00u: goto label_2fef00;
        case 0x2fef04u: goto label_2fef04;
        case 0x2fef08u: goto label_2fef08;
        case 0x2fef0cu: goto label_2fef0c;
        case 0x2fef10u: goto label_2fef10;
        case 0x2fef14u: goto label_2fef14;
        case 0x2fef18u: goto label_2fef18;
        case 0x2fef1cu: goto label_2fef1c;
        case 0x2fef20u: goto label_2fef20;
        case 0x2fef24u: goto label_2fef24;
        case 0x2fef28u: goto label_2fef28;
        case 0x2fef2cu: goto label_2fef2c;
        case 0x2fef30u: goto label_2fef30;
        case 0x2fef34u: goto label_2fef34;
        case 0x2fef38u: goto label_2fef38;
        case 0x2fef3cu: goto label_2fef3c;
        case 0x2fef40u: goto label_2fef40;
        case 0x2fef44u: goto label_2fef44;
        case 0x2fef48u: goto label_2fef48;
        case 0x2fef4cu: goto label_2fef4c;
        case 0x2fef50u: goto label_2fef50;
        case 0x2fef54u: goto label_2fef54;
        case 0x2fef58u: goto label_2fef58;
        case 0x2fef5cu: goto label_2fef5c;
        case 0x2fef60u: goto label_2fef60;
        case 0x2fef64u: goto label_2fef64;
        case 0x2fef68u: goto label_2fef68;
        case 0x2fef6cu: goto label_2fef6c;
        case 0x2fef70u: goto label_2fef70;
        case 0x2fef74u: goto label_2fef74;
        case 0x2fef78u: goto label_2fef78;
        case 0x2fef7cu: goto label_2fef7c;
        case 0x2fef80u: goto label_2fef80;
        case 0x2fef84u: goto label_2fef84;
        case 0x2fef88u: goto label_2fef88;
        case 0x2fef8cu: goto label_2fef8c;
        case 0x2fef90u: goto label_2fef90;
        case 0x2fef94u: goto label_2fef94;
        case 0x2fef98u: goto label_2fef98;
        case 0x2fef9cu: goto label_2fef9c;
        case 0x2fefa0u: goto label_2fefa0;
        case 0x2fefa4u: goto label_2fefa4;
        case 0x2fefa8u: goto label_2fefa8;
        case 0x2fefacu: goto label_2fefac;
        case 0x2fefb0u: goto label_2fefb0;
        case 0x2fefb4u: goto label_2fefb4;
        case 0x2fefb8u: goto label_2fefb8;
        case 0x2fefbcu: goto label_2fefbc;
        case 0x2fefc0u: goto label_2fefc0;
        case 0x2fefc4u: goto label_2fefc4;
        case 0x2fefc8u: goto label_2fefc8;
        case 0x2fefccu: goto label_2fefcc;
        case 0x2fefd0u: goto label_2fefd0;
        case 0x2fefd4u: goto label_2fefd4;
        case 0x2fefd8u: goto label_2fefd8;
        case 0x2fefdcu: goto label_2fefdc;
        case 0x2fefe0u: goto label_2fefe0;
        case 0x2fefe4u: goto label_2fefe4;
        case 0x2fefe8u: goto label_2fefe8;
        case 0x2fefecu: goto label_2fefec;
        case 0x2feff0u: goto label_2feff0;
        case 0x2feff4u: goto label_2feff4;
        case 0x2feff8u: goto label_2feff8;
        case 0x2feffcu: goto label_2feffc;
        case 0x2ff000u: goto label_2ff000;
        case 0x2ff004u: goto label_2ff004;
        case 0x2ff008u: goto label_2ff008;
        case 0x2ff00cu: goto label_2ff00c;
        case 0x2ff010u: goto label_2ff010;
        case 0x2ff014u: goto label_2ff014;
        case 0x2ff018u: goto label_2ff018;
        case 0x2ff01cu: goto label_2ff01c;
        case 0x2ff020u: goto label_2ff020;
        case 0x2ff024u: goto label_2ff024;
        case 0x2ff028u: goto label_2ff028;
        case 0x2ff02cu: goto label_2ff02c;
        case 0x2ff030u: goto label_2ff030;
        case 0x2ff034u: goto label_2ff034;
        case 0x2ff038u: goto label_2ff038;
        case 0x2ff03cu: goto label_2ff03c;
        case 0x2ff040u: goto label_2ff040;
        case 0x2ff044u: goto label_2ff044;
        case 0x2ff048u: goto label_2ff048;
        case 0x2ff04cu: goto label_2ff04c;
        case 0x2ff050u: goto label_2ff050;
        case 0x2ff054u: goto label_2ff054;
        case 0x2ff058u: goto label_2ff058;
        case 0x2ff05cu: goto label_2ff05c;
        case 0x2ff060u: goto label_2ff060;
        case 0x2ff064u: goto label_2ff064;
        case 0x2ff068u: goto label_2ff068;
        case 0x2ff06cu: goto label_2ff06c;
        case 0x2ff070u: goto label_2ff070;
        case 0x2ff074u: goto label_2ff074;
        case 0x2ff078u: goto label_2ff078;
        case 0x2ff07cu: goto label_2ff07c;
        case 0x2ff080u: goto label_2ff080;
        case 0x2ff084u: goto label_2ff084;
        case 0x2ff088u: goto label_2ff088;
        case 0x2ff08cu: goto label_2ff08c;
        case 0x2ff090u: goto label_2ff090;
        case 0x2ff094u: goto label_2ff094;
        case 0x2ff098u: goto label_2ff098;
        case 0x2ff09cu: goto label_2ff09c;
        case 0x2ff0a0u: goto label_2ff0a0;
        case 0x2ff0a4u: goto label_2ff0a4;
        case 0x2ff0a8u: goto label_2ff0a8;
        case 0x2ff0acu: goto label_2ff0ac;
        case 0x2ff0b0u: goto label_2ff0b0;
        case 0x2ff0b4u: goto label_2ff0b4;
        case 0x2ff0b8u: goto label_2ff0b8;
        case 0x2ff0bcu: goto label_2ff0bc;
        case 0x2ff0c0u: goto label_2ff0c0;
        case 0x2ff0c4u: goto label_2ff0c4;
        case 0x2ff0c8u: goto label_2ff0c8;
        case 0x2ff0ccu: goto label_2ff0cc;
        case 0x2ff0d0u: goto label_2ff0d0;
        case 0x2ff0d4u: goto label_2ff0d4;
        case 0x2ff0d8u: goto label_2ff0d8;
        case 0x2ff0dcu: goto label_2ff0dc;
        case 0x2ff0e0u: goto label_2ff0e0;
        case 0x2ff0e4u: goto label_2ff0e4;
        case 0x2ff0e8u: goto label_2ff0e8;
        case 0x2ff0ecu: goto label_2ff0ec;
        case 0x2ff0f0u: goto label_2ff0f0;
        case 0x2ff0f4u: goto label_2ff0f4;
        case 0x2ff0f8u: goto label_2ff0f8;
        case 0x2ff0fcu: goto label_2ff0fc;
        case 0x2ff100u: goto label_2ff100;
        case 0x2ff104u: goto label_2ff104;
        case 0x2ff108u: goto label_2ff108;
        case 0x2ff10cu: goto label_2ff10c;
        case 0x2ff110u: goto label_2ff110;
        case 0x2ff114u: goto label_2ff114;
        case 0x2ff118u: goto label_2ff118;
        case 0x2ff11cu: goto label_2ff11c;
        case 0x2ff120u: goto label_2ff120;
        case 0x2ff124u: goto label_2ff124;
        case 0x2ff128u: goto label_2ff128;
        case 0x2ff12cu: goto label_2ff12c;
        case 0x2ff130u: goto label_2ff130;
        case 0x2ff134u: goto label_2ff134;
        case 0x2ff138u: goto label_2ff138;
        case 0x2ff13cu: goto label_2ff13c;
        case 0x2ff140u: goto label_2ff140;
        case 0x2ff144u: goto label_2ff144;
        case 0x2ff148u: goto label_2ff148;
        case 0x2ff14cu: goto label_2ff14c;
        case 0x2ff150u: goto label_2ff150;
        case 0x2ff154u: goto label_2ff154;
        case 0x2ff158u: goto label_2ff158;
        case 0x2ff15cu: goto label_2ff15c;
        case 0x2ff160u: goto label_2ff160;
        case 0x2ff164u: goto label_2ff164;
        case 0x2ff168u: goto label_2ff168;
        case 0x2ff16cu: goto label_2ff16c;
        case 0x2ff170u: goto label_2ff170;
        case 0x2ff174u: goto label_2ff174;
        case 0x2ff178u: goto label_2ff178;
        case 0x2ff17cu: goto label_2ff17c;
        case 0x2ff180u: goto label_2ff180;
        case 0x2ff184u: goto label_2ff184;
        case 0x2ff188u: goto label_2ff188;
        case 0x2ff18cu: goto label_2ff18c;
        case 0x2ff190u: goto label_2ff190;
        case 0x2ff194u: goto label_2ff194;
        case 0x2ff198u: goto label_2ff198;
        case 0x2ff19cu: goto label_2ff19c;
        case 0x2ff1a0u: goto label_2ff1a0;
        case 0x2ff1a4u: goto label_2ff1a4;
        case 0x2ff1a8u: goto label_2ff1a8;
        case 0x2ff1acu: goto label_2ff1ac;
        case 0x2ff1b0u: goto label_2ff1b0;
        case 0x2ff1b4u: goto label_2ff1b4;
        case 0x2ff1b8u: goto label_2ff1b8;
        case 0x2ff1bcu: goto label_2ff1bc;
        case 0x2ff1c0u: goto label_2ff1c0;
        case 0x2ff1c4u: goto label_2ff1c4;
        case 0x2ff1c8u: goto label_2ff1c8;
        case 0x2ff1ccu: goto label_2ff1cc;
        case 0x2ff1d0u: goto label_2ff1d0;
        case 0x2ff1d4u: goto label_2ff1d4;
        case 0x2ff1d8u: goto label_2ff1d8;
        case 0x2ff1dcu: goto label_2ff1dc;
        case 0x2ff1e0u: goto label_2ff1e0;
        case 0x2ff1e4u: goto label_2ff1e4;
        case 0x2ff1e8u: goto label_2ff1e8;
        case 0x2ff1ecu: goto label_2ff1ec;
        case 0x2ff1f0u: goto label_2ff1f0;
        case 0x2ff1f4u: goto label_2ff1f4;
        case 0x2ff1f8u: goto label_2ff1f8;
        case 0x2ff1fcu: goto label_2ff1fc;
        case 0x2ff200u: goto label_2ff200;
        case 0x2ff204u: goto label_2ff204;
        case 0x2ff208u: goto label_2ff208;
        case 0x2ff20cu: goto label_2ff20c;
        case 0x2ff210u: goto label_2ff210;
        case 0x2ff214u: goto label_2ff214;
        case 0x2ff218u: goto label_2ff218;
        case 0x2ff21cu: goto label_2ff21c;
        case 0x2ff220u: goto label_2ff220;
        case 0x2ff224u: goto label_2ff224;
        case 0x2ff228u: goto label_2ff228;
        case 0x2ff22cu: goto label_2ff22c;
        case 0x2ff230u: goto label_2ff230;
        case 0x2ff234u: goto label_2ff234;
        case 0x2ff238u: goto label_2ff238;
        case 0x2ff23cu: goto label_2ff23c;
        case 0x2ff240u: goto label_2ff240;
        case 0x2ff244u: goto label_2ff244;
        case 0x2ff248u: goto label_2ff248;
        case 0x2ff24cu: goto label_2ff24c;
        case 0x2ff250u: goto label_2ff250;
        case 0x2ff254u: goto label_2ff254;
        case 0x2ff258u: goto label_2ff258;
        case 0x2ff25cu: goto label_2ff25c;
        case 0x2ff260u: goto label_2ff260;
        case 0x2ff264u: goto label_2ff264;
        case 0x2ff268u: goto label_2ff268;
        case 0x2ff26cu: goto label_2ff26c;
        case 0x2ff270u: goto label_2ff270;
        case 0x2ff274u: goto label_2ff274;
        case 0x2ff278u: goto label_2ff278;
        case 0x2ff27cu: goto label_2ff27c;
        case 0x2ff280u: goto label_2ff280;
        case 0x2ff284u: goto label_2ff284;
        case 0x2ff288u: goto label_2ff288;
        case 0x2ff28cu: goto label_2ff28c;
        case 0x2ff290u: goto label_2ff290;
        case 0x2ff294u: goto label_2ff294;
        case 0x2ff298u: goto label_2ff298;
        case 0x2ff29cu: goto label_2ff29c;
        case 0x2ff2a0u: goto label_2ff2a0;
        case 0x2ff2a4u: goto label_2ff2a4;
        case 0x2ff2a8u: goto label_2ff2a8;
        case 0x2ff2acu: goto label_2ff2ac;
        case 0x2ff2b0u: goto label_2ff2b0;
        case 0x2ff2b4u: goto label_2ff2b4;
        case 0x2ff2b8u: goto label_2ff2b8;
        case 0x2ff2bcu: goto label_2ff2bc;
        case 0x2ff2c0u: goto label_2ff2c0;
        case 0x2ff2c4u: goto label_2ff2c4;
        case 0x2ff2c8u: goto label_2ff2c8;
        case 0x2ff2ccu: goto label_2ff2cc;
        case 0x2ff2d0u: goto label_2ff2d0;
        case 0x2ff2d4u: goto label_2ff2d4;
        case 0x2ff2d8u: goto label_2ff2d8;
        case 0x2ff2dcu: goto label_2ff2dc;
        case 0x2ff2e0u: goto label_2ff2e0;
        case 0x2ff2e4u: goto label_2ff2e4;
        case 0x2ff2e8u: goto label_2ff2e8;
        case 0x2ff2ecu: goto label_2ff2ec;
        case 0x2ff2f0u: goto label_2ff2f0;
        case 0x2ff2f4u: goto label_2ff2f4;
        case 0x2ff2f8u: goto label_2ff2f8;
        case 0x2ff2fcu: goto label_2ff2fc;
        case 0x2ff300u: goto label_2ff300;
        case 0x2ff304u: goto label_2ff304;
        case 0x2ff308u: goto label_2ff308;
        case 0x2ff30cu: goto label_2ff30c;
        case 0x2ff310u: goto label_2ff310;
        case 0x2ff314u: goto label_2ff314;
        case 0x2ff318u: goto label_2ff318;
        case 0x2ff31cu: goto label_2ff31c;
        case 0x2ff320u: goto label_2ff320;
        case 0x2ff324u: goto label_2ff324;
        case 0x2ff328u: goto label_2ff328;
        case 0x2ff32cu: goto label_2ff32c;
        case 0x2ff330u: goto label_2ff330;
        case 0x2ff334u: goto label_2ff334;
        case 0x2ff338u: goto label_2ff338;
        case 0x2ff33cu: goto label_2ff33c;
        case 0x2ff340u: goto label_2ff340;
        case 0x2ff344u: goto label_2ff344;
        case 0x2ff348u: goto label_2ff348;
        case 0x2ff34cu: goto label_2ff34c;
        case 0x2ff350u: goto label_2ff350;
        case 0x2ff354u: goto label_2ff354;
        case 0x2ff358u: goto label_2ff358;
        case 0x2ff35cu: goto label_2ff35c;
        case 0x2ff360u: goto label_2ff360;
        case 0x2ff364u: goto label_2ff364;
        case 0x2ff368u: goto label_2ff368;
        case 0x2ff36cu: goto label_2ff36c;
        case 0x2ff370u: goto label_2ff370;
        case 0x2ff374u: goto label_2ff374;
        case 0x2ff378u: goto label_2ff378;
        case 0x2ff37cu: goto label_2ff37c;
        case 0x2ff380u: goto label_2ff380;
        case 0x2ff384u: goto label_2ff384;
        case 0x2ff388u: goto label_2ff388;
        case 0x2ff38cu: goto label_2ff38c;
        case 0x2ff390u: goto label_2ff390;
        case 0x2ff394u: goto label_2ff394;
        case 0x2ff398u: goto label_2ff398;
        case 0x2ff39cu: goto label_2ff39c;
        case 0x2ff3a0u: goto label_2ff3a0;
        case 0x2ff3a4u: goto label_2ff3a4;
        case 0x2ff3a8u: goto label_2ff3a8;
        case 0x2ff3acu: goto label_2ff3ac;
        case 0x2ff3b0u: goto label_2ff3b0;
        case 0x2ff3b4u: goto label_2ff3b4;
        case 0x2ff3b8u: goto label_2ff3b8;
        case 0x2ff3bcu: goto label_2ff3bc;
        case 0x2ff3c0u: goto label_2ff3c0;
        case 0x2ff3c4u: goto label_2ff3c4;
        case 0x2ff3c8u: goto label_2ff3c8;
        case 0x2ff3ccu: goto label_2ff3cc;
        case 0x2ff3d0u: goto label_2ff3d0;
        case 0x2ff3d4u: goto label_2ff3d4;
        case 0x2ff3d8u: goto label_2ff3d8;
        case 0x2ff3dcu: goto label_2ff3dc;
        case 0x2ff3e0u: goto label_2ff3e0;
        case 0x2ff3e4u: goto label_2ff3e4;
        case 0x2ff3e8u: goto label_2ff3e8;
        case 0x2ff3ecu: goto label_2ff3ec;
        case 0x2ff3f0u: goto label_2ff3f0;
        case 0x2ff3f4u: goto label_2ff3f4;
        case 0x2ff3f8u: goto label_2ff3f8;
        case 0x2ff3fcu: goto label_2ff3fc;
        case 0x2ff400u: goto label_2ff400;
        case 0x2ff404u: goto label_2ff404;
        case 0x2ff408u: goto label_2ff408;
        case 0x2ff40cu: goto label_2ff40c;
        case 0x2ff410u: goto label_2ff410;
        case 0x2ff414u: goto label_2ff414;
        case 0x2ff418u: goto label_2ff418;
        case 0x2ff41cu: goto label_2ff41c;
        case 0x2ff420u: goto label_2ff420;
        case 0x2ff424u: goto label_2ff424;
        case 0x2ff428u: goto label_2ff428;
        case 0x2ff42cu: goto label_2ff42c;
        case 0x2ff430u: goto label_2ff430;
        case 0x2ff434u: goto label_2ff434;
        case 0x2ff438u: goto label_2ff438;
        case 0x2ff43cu: goto label_2ff43c;
        case 0x2ff440u: goto label_2ff440;
        case 0x2ff444u: goto label_2ff444;
        case 0x2ff448u: goto label_2ff448;
        case 0x2ff44cu: goto label_2ff44c;
        case 0x2ff450u: goto label_2ff450;
        case 0x2ff454u: goto label_2ff454;
        case 0x2ff458u: goto label_2ff458;
        case 0x2ff45cu: goto label_2ff45c;
        case 0x2ff460u: goto label_2ff460;
        case 0x2ff464u: goto label_2ff464;
        case 0x2ff468u: goto label_2ff468;
        case 0x2ff46cu: goto label_2ff46c;
        case 0x2ff470u: goto label_2ff470;
        case 0x2ff474u: goto label_2ff474;
        case 0x2ff478u: goto label_2ff478;
        case 0x2ff47cu: goto label_2ff47c;
        case 0x2ff480u: goto label_2ff480;
        case 0x2ff484u: goto label_2ff484;
        case 0x2ff488u: goto label_2ff488;
        case 0x2ff48cu: goto label_2ff48c;
        case 0x2ff490u: goto label_2ff490;
        case 0x2ff494u: goto label_2ff494;
        case 0x2ff498u: goto label_2ff498;
        case 0x2ff49cu: goto label_2ff49c;
        case 0x2ff4a0u: goto label_2ff4a0;
        case 0x2ff4a4u: goto label_2ff4a4;
        case 0x2ff4a8u: goto label_2ff4a8;
        case 0x2ff4acu: goto label_2ff4ac;
        case 0x2ff4b0u: goto label_2ff4b0;
        case 0x2ff4b4u: goto label_2ff4b4;
        case 0x2ff4b8u: goto label_2ff4b8;
        case 0x2ff4bcu: goto label_2ff4bc;
        case 0x2ff4c0u: goto label_2ff4c0;
        case 0x2ff4c4u: goto label_2ff4c4;
        case 0x2ff4c8u: goto label_2ff4c8;
        case 0x2ff4ccu: goto label_2ff4cc;
        case 0x2ff4d0u: goto label_2ff4d0;
        case 0x2ff4d4u: goto label_2ff4d4;
        case 0x2ff4d8u: goto label_2ff4d8;
        case 0x2ff4dcu: goto label_2ff4dc;
        case 0x2ff4e0u: goto label_2ff4e0;
        case 0x2ff4e4u: goto label_2ff4e4;
        case 0x2ff4e8u: goto label_2ff4e8;
        case 0x2ff4ecu: goto label_2ff4ec;
        case 0x2ff4f0u: goto label_2ff4f0;
        case 0x2ff4f4u: goto label_2ff4f4;
        case 0x2ff4f8u: goto label_2ff4f8;
        case 0x2ff4fcu: goto label_2ff4fc;
        case 0x2ff500u: goto label_2ff500;
        case 0x2ff504u: goto label_2ff504;
        case 0x2ff508u: goto label_2ff508;
        case 0x2ff50cu: goto label_2ff50c;
        case 0x2ff510u: goto label_2ff510;
        case 0x2ff514u: goto label_2ff514;
        case 0x2ff518u: goto label_2ff518;
        case 0x2ff51cu: goto label_2ff51c;
        case 0x2ff520u: goto label_2ff520;
        case 0x2ff524u: goto label_2ff524;
        case 0x2ff528u: goto label_2ff528;
        case 0x2ff52cu: goto label_2ff52c;
        case 0x2ff530u: goto label_2ff530;
        case 0x2ff534u: goto label_2ff534;
        case 0x2ff538u: goto label_2ff538;
        case 0x2ff53cu: goto label_2ff53c;
        case 0x2ff540u: goto label_2ff540;
        case 0x2ff544u: goto label_2ff544;
        case 0x2ff548u: goto label_2ff548;
        case 0x2ff54cu: goto label_2ff54c;
        case 0x2ff550u: goto label_2ff550;
        case 0x2ff554u: goto label_2ff554;
        case 0x2ff558u: goto label_2ff558;
        case 0x2ff55cu: goto label_2ff55c;
        case 0x2ff560u: goto label_2ff560;
        case 0x2ff564u: goto label_2ff564;
        case 0x2ff568u: goto label_2ff568;
        case 0x2ff56cu: goto label_2ff56c;
        case 0x2ff570u: goto label_2ff570;
        case 0x2ff574u: goto label_2ff574;
        case 0x2ff578u: goto label_2ff578;
        case 0x2ff57cu: goto label_2ff57c;
        case 0x2ff580u: goto label_2ff580;
        case 0x2ff584u: goto label_2ff584;
        case 0x2ff588u: goto label_2ff588;
        case 0x2ff58cu: goto label_2ff58c;
        case 0x2ff590u: goto label_2ff590;
        case 0x2ff594u: goto label_2ff594;
        case 0x2ff598u: goto label_2ff598;
        case 0x2ff59cu: goto label_2ff59c;
        case 0x2ff5a0u: goto label_2ff5a0;
        case 0x2ff5a4u: goto label_2ff5a4;
        case 0x2ff5a8u: goto label_2ff5a8;
        case 0x2ff5acu: goto label_2ff5ac;
        case 0x2ff5b0u: goto label_2ff5b0;
        case 0x2ff5b4u: goto label_2ff5b4;
        case 0x2ff5b8u: goto label_2ff5b8;
        case 0x2ff5bcu: goto label_2ff5bc;
        case 0x2ff5c0u: goto label_2ff5c0;
        case 0x2ff5c4u: goto label_2ff5c4;
        case 0x2ff5c8u: goto label_2ff5c8;
        case 0x2ff5ccu: goto label_2ff5cc;
        case 0x2ff5d0u: goto label_2ff5d0;
        case 0x2ff5d4u: goto label_2ff5d4;
        case 0x2ff5d8u: goto label_2ff5d8;
        case 0x2ff5dcu: goto label_2ff5dc;
        case 0x2ff5e0u: goto label_2ff5e0;
        case 0x2ff5e4u: goto label_2ff5e4;
        case 0x2ff5e8u: goto label_2ff5e8;
        case 0x2ff5ecu: goto label_2ff5ec;
        case 0x2ff5f0u: goto label_2ff5f0;
        case 0x2ff5f4u: goto label_2ff5f4;
        case 0x2ff5f8u: goto label_2ff5f8;
        case 0x2ff5fcu: goto label_2ff5fc;
        case 0x2ff600u: goto label_2ff600;
        case 0x2ff604u: goto label_2ff604;
        case 0x2ff608u: goto label_2ff608;
        case 0x2ff60cu: goto label_2ff60c;
        case 0x2ff610u: goto label_2ff610;
        case 0x2ff614u: goto label_2ff614;
        case 0x2ff618u: goto label_2ff618;
        case 0x2ff61cu: goto label_2ff61c;
        case 0x2ff620u: goto label_2ff620;
        case 0x2ff624u: goto label_2ff624;
        case 0x2ff628u: goto label_2ff628;
        case 0x2ff62cu: goto label_2ff62c;
        case 0x2ff630u: goto label_2ff630;
        case 0x2ff634u: goto label_2ff634;
        case 0x2ff638u: goto label_2ff638;
        case 0x2ff63cu: goto label_2ff63c;
        case 0x2ff640u: goto label_2ff640;
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff648u: goto label_2ff648;
        case 0x2ff64cu: goto label_2ff64c;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff654u: goto label_2ff654;
        case 0x2ff658u: goto label_2ff658;
        case 0x2ff65cu: goto label_2ff65c;
        case 0x2ff660u: goto label_2ff660;
        case 0x2ff664u: goto label_2ff664;
        case 0x2ff668u: goto label_2ff668;
        case 0x2ff66cu: goto label_2ff66c;
        case 0x2ff670u: goto label_2ff670;
        case 0x2ff674u: goto label_2ff674;
        case 0x2ff678u: goto label_2ff678;
        case 0x2ff67cu: goto label_2ff67c;
        case 0x2ff680u: goto label_2ff680;
        case 0x2ff684u: goto label_2ff684;
        case 0x2ff688u: goto label_2ff688;
        case 0x2ff68cu: goto label_2ff68c;
        case 0x2ff690u: goto label_2ff690;
        case 0x2ff694u: goto label_2ff694;
        case 0x2ff698u: goto label_2ff698;
        case 0x2ff69cu: goto label_2ff69c;
        case 0x2ff6a0u: goto label_2ff6a0;
        case 0x2ff6a4u: goto label_2ff6a4;
        case 0x2ff6a8u: goto label_2ff6a8;
        case 0x2ff6acu: goto label_2ff6ac;
        case 0x2ff6b0u: goto label_2ff6b0;
        case 0x2ff6b4u: goto label_2ff6b4;
        case 0x2ff6b8u: goto label_2ff6b8;
        case 0x2ff6bcu: goto label_2ff6bc;
        case 0x2ff6c0u: goto label_2ff6c0;
        case 0x2ff6c4u: goto label_2ff6c4;
        case 0x2ff6c8u: goto label_2ff6c8;
        case 0x2ff6ccu: goto label_2ff6cc;
        case 0x2ff6d0u: goto label_2ff6d0;
        case 0x2ff6d4u: goto label_2ff6d4;
        case 0x2ff6d8u: goto label_2ff6d8;
        case 0x2ff6dcu: goto label_2ff6dc;
        case 0x2ff6e0u: goto label_2ff6e0;
        case 0x2ff6e4u: goto label_2ff6e4;
        case 0x2ff6e8u: goto label_2ff6e8;
        case 0x2ff6ecu: goto label_2ff6ec;
        case 0x2ff6f0u: goto label_2ff6f0;
        case 0x2ff6f4u: goto label_2ff6f4;
        case 0x2ff6f8u: goto label_2ff6f8;
        case 0x2ff6fcu: goto label_2ff6fc;
        case 0x2ff700u: goto label_2ff700;
        case 0x2ff704u: goto label_2ff704;
        case 0x2ff708u: goto label_2ff708;
        case 0x2ff70cu: goto label_2ff70c;
        case 0x2ff710u: goto label_2ff710;
        case 0x2ff714u: goto label_2ff714;
        case 0x2ff718u: goto label_2ff718;
        case 0x2ff71cu: goto label_2ff71c;
        case 0x2ff720u: goto label_2ff720;
        case 0x2ff724u: goto label_2ff724;
        case 0x2ff728u: goto label_2ff728;
        case 0x2ff72cu: goto label_2ff72c;
        case 0x2ff730u: goto label_2ff730;
        case 0x2ff734u: goto label_2ff734;
        case 0x2ff738u: goto label_2ff738;
        case 0x2ff73cu: goto label_2ff73c;
        case 0x2ff740u: goto label_2ff740;
        case 0x2ff744u: goto label_2ff744;
        case 0x2ff748u: goto label_2ff748;
        case 0x2ff74cu: goto label_2ff74c;
        case 0x2ff750u: goto label_2ff750;
        case 0x2ff754u: goto label_2ff754;
        case 0x2ff758u: goto label_2ff758;
        case 0x2ff75cu: goto label_2ff75c;
        case 0x2ff760u: goto label_2ff760;
        case 0x2ff764u: goto label_2ff764;
        case 0x2ff768u: goto label_2ff768;
        case 0x2ff76cu: goto label_2ff76c;
        case 0x2ff770u: goto label_2ff770;
        case 0x2ff774u: goto label_2ff774;
        case 0x2ff778u: goto label_2ff778;
        case 0x2ff77cu: goto label_2ff77c;
        case 0x2ff780u: goto label_2ff780;
        case 0x2ff784u: goto label_2ff784;
        case 0x2ff788u: goto label_2ff788;
        case 0x2ff78cu: goto label_2ff78c;
        case 0x2ff790u: goto label_2ff790;
        case 0x2ff794u: goto label_2ff794;
        case 0x2ff798u: goto label_2ff798;
        case 0x2ff79cu: goto label_2ff79c;
        case 0x2ff7a0u: goto label_2ff7a0;
        case 0x2ff7a4u: goto label_2ff7a4;
        case 0x2ff7a8u: goto label_2ff7a8;
        case 0x2ff7acu: goto label_2ff7ac;
        case 0x2ff7b0u: goto label_2ff7b0;
        case 0x2ff7b4u: goto label_2ff7b4;
        case 0x2ff7b8u: goto label_2ff7b8;
        case 0x2ff7bcu: goto label_2ff7bc;
        case 0x2ff7c0u: goto label_2ff7c0;
        case 0x2ff7c4u: goto label_2ff7c4;
        case 0x2ff7c8u: goto label_2ff7c8;
        case 0x2ff7ccu: goto label_2ff7cc;
        case 0x2ff7d0u: goto label_2ff7d0;
        case 0x2ff7d4u: goto label_2ff7d4;
        case 0x2ff7d8u: goto label_2ff7d8;
        case 0x2ff7dcu: goto label_2ff7dc;
        case 0x2ff7e0u: goto label_2ff7e0;
        case 0x2ff7e4u: goto label_2ff7e4;
        case 0x2ff7e8u: goto label_2ff7e8;
        case 0x2ff7ecu: goto label_2ff7ec;
        case 0x2ff7f0u: goto label_2ff7f0;
        case 0x2ff7f4u: goto label_2ff7f4;
        case 0x2ff7f8u: goto label_2ff7f8;
        case 0x2ff7fcu: goto label_2ff7fc;
        case 0x2ff800u: goto label_2ff800;
        case 0x2ff804u: goto label_2ff804;
        case 0x2ff808u: goto label_2ff808;
        case 0x2ff80cu: goto label_2ff80c;
        case 0x2ff810u: goto label_2ff810;
        case 0x2ff814u: goto label_2ff814;
        case 0x2ff818u: goto label_2ff818;
        case 0x2ff81cu: goto label_2ff81c;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff824u: goto label_2ff824;
        case 0x2ff828u: goto label_2ff828;
        case 0x2ff82cu: goto label_2ff82c;
        case 0x2ff830u: goto label_2ff830;
        case 0x2ff834u: goto label_2ff834;
        case 0x2ff838u: goto label_2ff838;
        case 0x2ff83cu: goto label_2ff83c;
        case 0x2ff840u: goto label_2ff840;
        case 0x2ff844u: goto label_2ff844;
        case 0x2ff848u: goto label_2ff848;
        case 0x2ff84cu: goto label_2ff84c;
        case 0x2ff850u: goto label_2ff850;
        case 0x2ff854u: goto label_2ff854;
        case 0x2ff858u: goto label_2ff858;
        case 0x2ff85cu: goto label_2ff85c;
        case 0x2ff860u: goto label_2ff860;
        case 0x2ff864u: goto label_2ff864;
        case 0x2ff868u: goto label_2ff868;
        case 0x2ff86cu: goto label_2ff86c;
        case 0x2ff870u: goto label_2ff870;
        case 0x2ff874u: goto label_2ff874;
        case 0x2ff878u: goto label_2ff878;
        case 0x2ff87cu: goto label_2ff87c;
        case 0x2ff880u: goto label_2ff880;
        case 0x2ff884u: goto label_2ff884;
        case 0x2ff888u: goto label_2ff888;
        case 0x2ff88cu: goto label_2ff88c;
        case 0x2ff890u: goto label_2ff890;
        case 0x2ff894u: goto label_2ff894;
        case 0x2ff898u: goto label_2ff898;
        case 0x2ff89cu: goto label_2ff89c;
        case 0x2ff8a0u: goto label_2ff8a0;
        case 0x2ff8a4u: goto label_2ff8a4;
        case 0x2ff8a8u: goto label_2ff8a8;
        case 0x2ff8acu: goto label_2ff8ac;
        case 0x2ff8b0u: goto label_2ff8b0;
        case 0x2ff8b4u: goto label_2ff8b4;
        case 0x2ff8b8u: goto label_2ff8b8;
        case 0x2ff8bcu: goto label_2ff8bc;
        case 0x2ff8c0u: goto label_2ff8c0;
        case 0x2ff8c4u: goto label_2ff8c4;
        case 0x2ff8c8u: goto label_2ff8c8;
        case 0x2ff8ccu: goto label_2ff8cc;
        case 0x2ff8d0u: goto label_2ff8d0;
        case 0x2ff8d4u: goto label_2ff8d4;
        case 0x2ff8d8u: goto label_2ff8d8;
        case 0x2ff8dcu: goto label_2ff8dc;
        case 0x2ff8e0u: goto label_2ff8e0;
        case 0x2ff8e4u: goto label_2ff8e4;
        case 0x2ff8e8u: goto label_2ff8e8;
        case 0x2ff8ecu: goto label_2ff8ec;
        case 0x2ff8f0u: goto label_2ff8f0;
        case 0x2ff8f4u: goto label_2ff8f4;
        case 0x2ff8f8u: goto label_2ff8f8;
        case 0x2ff8fcu: goto label_2ff8fc;
        case 0x2ff900u: goto label_2ff900;
        case 0x2ff904u: goto label_2ff904;
        case 0x2ff908u: goto label_2ff908;
        case 0x2ff90cu: goto label_2ff90c;
        case 0x2ff910u: goto label_2ff910;
        case 0x2ff914u: goto label_2ff914;
        case 0x2ff918u: goto label_2ff918;
        case 0x2ff91cu: goto label_2ff91c;
        case 0x2ff920u: goto label_2ff920;
        case 0x2ff924u: goto label_2ff924;
        case 0x2ff928u: goto label_2ff928;
        case 0x2ff92cu: goto label_2ff92c;
        case 0x2ff930u: goto label_2ff930;
        case 0x2ff934u: goto label_2ff934;
        case 0x2ff938u: goto label_2ff938;
        case 0x2ff93cu: goto label_2ff93c;
        case 0x2ff940u: goto label_2ff940;
        case 0x2ff944u: goto label_2ff944;
        case 0x2ff948u: goto label_2ff948;
        case 0x2ff94cu: goto label_2ff94c;
        case 0x2ff950u: goto label_2ff950;
        case 0x2ff954u: goto label_2ff954;
        case 0x2ff958u: goto label_2ff958;
        case 0x2ff95cu: goto label_2ff95c;
        default: break;
    }

    ctx->pc = 0x2fec60u;

label_2fec60:
    // 0x2fec60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fec64:
    // 0x2fec64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2fec68:
    // 0x2fec68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fec6c:
    // 0x2fec6c: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x2fec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_2fec70:
    // 0x2fec70: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2fec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2fec74:
    // 0x2fec74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fec78:
    if (ctx->pc == 0x2FEC78u) {
        ctx->pc = 0x2FEC78u;
            // 0x2fec78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC7Cu;
        goto label_2fec7c;
    }
    ctx->pc = 0x2FEC74u;
    {
        const bool branch_taken_0x2fec74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC74u;
            // 0x2fec78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec74) {
            ctx->pc = 0x2FEC84u;
            goto label_2fec84;
        }
    }
    ctx->pc = 0x2FEC7Cu;
label_2fec7c:
    // 0x2fec7c: 0xc0b6764  jal         func_2D9D90
label_2fec80:
    if (ctx->pc == 0x2FEC80u) {
        ctx->pc = 0x2FEC80u;
            // 0x2fec80: 0x8e040d74  lw          $a0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->pc = 0x2FEC84u;
        goto label_2fec84;
    }
    ctx->pc = 0x2FEC7Cu;
    SET_GPR_U32(ctx, 31, 0x2FEC84u);
    ctx->pc = 0x2FEC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC7Cu;
            // 0x2fec80: 0x8e040d74  lw          $a0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC84u; }
        if (ctx->pc != 0x2FEC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC84u; }
        if (ctx->pc != 0x2FEC84u) { return; }
    }
    ctx->pc = 0x2FEC84u;
label_2fec84:
    // 0x2fec84: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x2fec84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_2fec88:
    // 0x2fec88: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x2fec88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2fec8c:
    // 0x2fec8c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2fec8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2fec90:
    // 0x2fec90: 0x320f809  jalr        $t9
label_2fec94:
    if (ctx->pc == 0x2FEC94u) {
        ctx->pc = 0x2FEC98u;
        goto label_2fec98;
    }
    ctx->pc = 0x2FEC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEC98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEC98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC98u; }
            if (ctx->pc != 0x2FEC98u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEC98u;
label_2fec98:
    // 0x2fec98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fec98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fec9c:
    // 0x2fec9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fec9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2feca0:
    // 0x2feca0: 0x3e00008  jr          $ra
label_2feca4:
    if (ctx->pc == 0x2FECA4u) {
        ctx->pc = 0x2FECA4u;
            // 0x2feca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FECA8u;
        goto label_2feca8;
    }
    ctx->pc = 0x2FECA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECA0u;
            // 0x2feca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FECA8u;
label_2feca8:
    // 0x2feca8: 0x0  nop
    ctx->pc = 0x2feca8u;
    // NOP
label_2fecac:
    // 0x2fecac: 0x0  nop
    ctx->pc = 0x2fecacu;
    // NOP
label_2fecb0:
    // 0x2fecb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2fecb4:
    // 0x2fecb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2fecb8:
    // 0x2fecb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2fecbc:
    // 0x2fecbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2fecc0:
    // 0x2fecc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2fecc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fecc4:
    // 0x2fecc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fecc8:
    // 0x2fecc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2feccc:
    // 0x2feccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fecd0:
    // 0x2fecd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fecd4:
    // 0x2fecd4: 0x8c910d60  lw          $s1, 0xD60($a0)
    ctx->pc = 0x2fecd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_2fecd8:
    // 0x2fecd8: 0x8c930550  lw          $s3, 0x550($a0)
    ctx->pc = 0x2fecd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2fecdc:
    // 0x2fecdc: 0x8c920d70  lw          $s2, 0xD70($a0)
    ctx->pc = 0x2fecdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_2fece0:
    // 0x2fece0: 0xc0be258  jal         func_2F8960
label_2fece4:
    if (ctx->pc == 0x2FECE4u) {
        ctx->pc = 0x2FECE4u;
            // 0x2fece4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FECE8u;
        goto label_2fece8;
    }
    ctx->pc = 0x2FECE0u;
    SET_GPR_U32(ctx, 31, 0x2FECE8u);
    ctx->pc = 0x2FECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECE0u;
            // 0x2fece4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECE8u; }
        if (ctx->pc != 0x2FECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECE8u; }
        if (ctx->pc != 0x2FECE8u) { return; }
    }
    ctx->pc = 0x2FECE8u;
label_2fece8:
    // 0x2fece8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fece8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fecec:
    // 0x2fecec: 0xc0754b4  jal         func_1D52D0
label_2fecf0:
    if (ctx->pc == 0x2FECF0u) {
        ctx->pc = 0x2FECF0u;
            // 0x2fecf0: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->pc = 0x2FECF4u;
        goto label_2fecf4;
    }
    ctx->pc = 0x2FECECu;
    SET_GPR_U32(ctx, 31, 0x2FECF4u);
    ctx->pc = 0x2FECF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECECu;
            // 0x2fecf0: 0x26a40440  addiu       $a0, $s5, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECF4u; }
        if (ctx->pc != 0x2FECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FECF4u; }
        if (ctx->pc != 0x2FECF4u) { return; }
    }
    ctx->pc = 0x2FECF4u;
label_2fecf4:
    // 0x2fecf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fecf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fecf8:
    // 0x2fecf8: 0x8ea20e30  lw          $v0, 0xE30($s5)
    ctx->pc = 0x2fecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_2fecfc:
    // 0x2fecfc: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_2fed00:
    if (ctx->pc == 0x2FED00u) {
        ctx->pc = 0x2FED00u;
            // 0x2fed00: 0x8ea30e30  lw          $v1, 0xE30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
        ctx->pc = 0x2FED04u;
        goto label_2fed04;
    }
    ctx->pc = 0x2FECFCu;
    {
        const bool branch_taken_0x2fecfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fecfc) {
            ctx->pc = 0x2FED00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FECFCu;
            // 0x2fed00: 0x8ea30e30  lw          $v1, 0xE30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FED8Cu;
            goto label_2fed8c;
        }
    }
    ctx->pc = 0x2FED04u;
label_2fed04:
    // 0x2fed04: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2fed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2fed08:
    // 0x2fed08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fed0c:
    // 0x2fed0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2fed10:
    if (ctx->pc == 0x2FED10u) {
        ctx->pc = 0x2FED14u;
        goto label_2fed14;
    }
    ctx->pc = 0x2FED0Cu;
    {
        const bool branch_taken_0x2fed0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fed0c) {
            ctx->pc = 0x2FED88u;
            goto label_2fed88;
        }
    }
    ctx->pc = 0x2FED14u;
label_2fed14:
    // 0x2fed14: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x2fed14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2fed18:
    // 0x2fed18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fed1c:
    // 0x2fed1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2fed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2fed20:
    // 0x2fed20: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2fed20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fed24:
    // 0x2fed24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2fed24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2fed28:
    // 0x2fed28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fed2c:
    // 0x2fed2c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2fed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fed30:
    // 0x2fed30: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2fed30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2fed34:
    // 0x2fed34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2fed34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fed38:
    // 0x2fed38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fed3c:
    // 0x2fed3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2fed40:
    // 0x2fed40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2fed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2fed44:
    // 0x2fed44: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2fed44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2fed48:
    // 0x2fed48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fed48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fed4c:
    // 0x2fed4c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2fed4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2fed50:
    // 0x2fed50: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2fed50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2fed54:
    // 0x2fed54: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2fed54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2fed58:
    // 0x2fed58: 0x320f809  jalr        $t9
label_2fed5c:
    if (ctx->pc == 0x2FED5Cu) {
        ctx->pc = 0x2FED5Cu;
            // 0x2fed5c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FED60u;
        goto label_2fed60;
    }
    ctx->pc = 0x2FED58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FED60u);
        ctx->pc = 0x2FED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED58u;
            // 0x2fed5c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FED60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FED60u; }
            if (ctx->pc != 0x2FED60u) { return; }
        }
        }
    }
    ctx->pc = 0x2FED60u;
label_2fed60:
    // 0x2fed60: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2fed60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2fed64:
    // 0x2fed64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fed68:
    // 0x2fed68: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2fed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2fed6c:
    // 0x2fed6c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2fed6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2fed70:
    // 0x2fed70: 0x320f809  jalr        $t9
label_2fed74:
    if (ctx->pc == 0x2FED74u) {
        ctx->pc = 0x2FED74u;
            // 0x2fed74: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FED78u;
        goto label_2fed78;
    }
    ctx->pc = 0x2FED70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FED78u);
        ctx->pc = 0x2FED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED70u;
            // 0x2fed74: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FED78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FED78u; }
            if (ctx->pc != 0x2FED78u) { return; }
        }
        }
    }
    ctx->pc = 0x2FED78u;
label_2fed78:
    // 0x2fed78: 0xc0b6738  jal         func_2D9CE0
label_2fed7c:
    if (ctx->pc == 0x2FED7Cu) {
        ctx->pc = 0x2FED7Cu;
            // 0x2fed7c: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->pc = 0x2FED80u;
        goto label_2fed80;
    }
    ctx->pc = 0x2FED78u;
    SET_GPR_U32(ctx, 31, 0x2FED80u);
    ctx->pc = 0x2FED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED78u;
            // 0x2fed7c: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CE0u;
    if (runtime->hasFunction(0x2D9CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2D9CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED80u; }
        if (ctx->pc != 0x2FED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9CE0_0x2d9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED80u; }
        if (ctx->pc != 0x2FED80u) { return; }
    }
    ctx->pc = 0x2FED80u;
label_2fed80:
    // 0x2fed80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fed84:
    // 0x2fed84: 0xaea20e30  sw          $v0, 0xE30($s5)
    ctx->pc = 0x2fed84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3632), GPR_U32(ctx, 2));
label_2fed88:
    // 0x2fed88: 0x8ea30e30  lw          $v1, 0xE30($s5)
    ctx->pc = 0x2fed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3632)));
label_2fed8c:
    // 0x2fed8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fed90:
    // 0x2fed90: 0x54620090  bnel        $v1, $v0, . + 4 + (0x90 << 2)
label_2fed94:
    if (ctx->pc == 0x2FED94u) {
        ctx->pc = 0x2FED94u;
            // 0x2fed94: 0x3c023f94  lui         $v0, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
        ctx->pc = 0x2FED98u;
        goto label_2fed98;
    }
    ctx->pc = 0x2FED90u;
    {
        const bool branch_taken_0x2fed90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fed90) {
            ctx->pc = 0x2FED94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FED90u;
            // 0x2fed94: 0x3c023f94  lui         $v0, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FEFD4u;
            goto label_2fefd4;
        }
    }
    ctx->pc = 0x2FED98u;
label_2fed98:
    // 0x2fed98: 0x8264010f  lb          $a0, 0x10F($s3)
    ctx->pc = 0x2fed98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 271)));
label_2fed9c:
    // 0x2fed9c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2fed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2feda0:
    // 0x2feda0: 0x54860047  bnel        $a0, $a2, . + 4 + (0x47 << 2)
label_2feda4:
    if (ctx->pc == 0x2FEDA4u) {
        ctx->pc = 0x2FEDA4u;
            // 0x2feda4: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2FEDA8u;
        goto label_2feda8;
    }
    ctx->pc = 0x2FEDA0u;
    {
        const bool branch_taken_0x2feda0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2feda0) {
            ctx->pc = 0x2FEDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDA0u;
            // 0x2feda4: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FEEC0u;
            goto label_2feec0;
        }
    }
    ctx->pc = 0x2FEDA8u;
label_2feda8:
    // 0x2feda8: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x2feda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_2fedac:
    // 0x2fedac: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x2fedacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_2fedb0:
    // 0x2fedb0: 0xc6a10de4  lwc1        $f1, 0xDE4($s5)
    ctx->pc = 0x2fedb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fedb4:
    // 0x2fedb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fedb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fedb8:
    // 0x2fedb8: 0x0  nop
    ctx->pc = 0x2fedb8u;
    // NOP
label_2fedbc:
    // 0x2fedbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fedbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fedc0:
    // 0x2fedc0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_2fedc4:
    if (ctx->pc == 0x2FEDC4u) {
        ctx->pc = 0x2FEDC4u;
            // 0x2fedc4: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x2FEDC8u;
        goto label_2fedc8;
    }
    ctx->pc = 0x2FEDC0u;
    {
        const bool branch_taken_0x2fedc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fedc0) {
            ctx->pc = 0x2FEDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDC0u;
            // 0x2fedc4: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FEE00u;
            goto label_2fee00;
        }
    }
    ctx->pc = 0x2FEDC8u;
label_2fedc8:
    // 0x2fedc8: 0x0  nop
    ctx->pc = 0x2fedc8u;
    // NOP
label_2fedcc:
    // 0x2fedcc: 0x0  nop
    ctx->pc = 0x2fedccu;
    // NOP
label_2fedd0:
    // 0x2fedd0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2fedd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_2fedd4:
    // 0x2fedd4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2fedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_2fedd8:
    // 0x2fedd8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2fedd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2feddc:
    // 0x2feddc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2feddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fede0:
    // 0x2fede0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fede0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fede4:
    // 0x2fede4: 0x0  nop
    ctx->pc = 0x2fede4u;
    // NOP
label_2fede8:
    // 0x2fede8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2fede8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fedec:
    // 0x2fedec: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2fedecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fedf0:
    // 0x2fedf0: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x2fedf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_2fedf4:
    // 0x2fedf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fedf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fedf8:
    // 0x2fedf8: 0x10000075  b           . + 4 + (0x75 << 2)
label_2fedfc:
    if (ctx->pc == 0x2FEDFCu) {
        ctx->pc = 0x2FEDFCu;
            // 0x2fedfc: 0xe660002c  swc1        $f0, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->pc = 0x2FEE00u;
        goto label_2fee00;
    }
    ctx->pc = 0x2FEDF8u;
    {
        const bool branch_taken_0x2fedf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEDF8u;
            // 0x2fedfc: 0xe660002c  swc1        $f0, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedf8) {
            ctx->pc = 0x2FEFD0u;
            goto label_2fefd0;
        }
    }
    ctx->pc = 0x2FEE00u;
label_2fee00:
    // 0x2fee00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fee00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2fee04:
    // 0x2fee04: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
label_2fee08:
    if (ctx->pc == 0x2FEE08u) {
        ctx->pc = 0x2FEE0Cu;
        goto label_2fee0c;
    }
    ctx->pc = 0x2FEE04u;
    {
        const bool branch_taken_0x2fee04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee04) {
            ctx->pc = 0x2FEFD0u;
            goto label_2fefd0;
        }
    }
    ctx->pc = 0x2FEE0Cu;
label_2fee0c:
    // 0x2fee0c: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x2fee0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2fee10:
    // 0x2fee10: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2fee10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2fee14:
    // 0x2fee14: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2fee14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2fee18:
    // 0x2fee18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2fee18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fee1c:
    // 0x2fee1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fee1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fee20:
    // 0x2fee20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fee24:
    // 0x2fee24: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x2fee24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fee28:
    // 0x2fee28: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2fee28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2fee2c:
    // 0x2fee2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2fee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fee30:
    // 0x2fee30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fee34:
    // 0x2fee34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fee34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2fee38:
    // 0x2fee38: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2fee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2fee3c:
    // 0x2fee3c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2fee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2fee40:
    // 0x2fee40: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2fee40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2fee44:
    // 0x2fee44: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2fee44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2fee48:
    // 0x2fee48: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2fee48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2fee4c:
    // 0x2fee4c: 0x320f809  jalr        $t9
label_2fee50:
    if (ctx->pc == 0x2FEE50u) {
        ctx->pc = 0x2FEE50u;
            // 0x2fee50: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FEE54u;
        goto label_2fee54;
    }
    ctx->pc = 0x2FEE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEE54u);
        ctx->pc = 0x2FEE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE4Cu;
            // 0x2fee50: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEE54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE54u; }
            if (ctx->pc != 0x2FEE54u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEE54u;
label_2fee54:
    // 0x2fee54: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2fee54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2fee58:
    // 0x2fee58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2fee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fee5c:
    // 0x2fee5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fee60:
    // 0x2fee60: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2fee60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2fee64:
    // 0x2fee64: 0x320f809  jalr        $t9
label_2fee68:
    if (ctx->pc == 0x2FEE68u) {
        ctx->pc = 0x2FEE68u;
            // 0x2fee68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE6Cu;
        goto label_2fee6c;
    }
    ctx->pc = 0x2FEE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEE6Cu);
        ctx->pc = 0x2FEE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEE64u;
            // 0x2fee68: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEE6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE6Cu; }
            if (ctx->pc != 0x2FEE6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FEE6Cu;
label_2fee6c:
    // 0x2fee6c: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x2fee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_2fee70:
    // 0x2fee70: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x2fee70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_2fee74:
    // 0x2fee74: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2fee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fee78:
    // 0x2fee78: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2fee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2fee7c:
    // 0x2fee7c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2fee7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2fee80:
    // 0x2fee80: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2fee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2fee84:
    // 0x2fee84: 0xc6a50de4  lwc1        $f5, 0xDE4($s5)
    ctx->pc = 0x2fee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2fee88:
    // 0x2fee88: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x2fee88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2fee8c:
    // 0x2fee8c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x2fee8cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_2fee90:
    // 0x2fee90: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2fee90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2fee94:
    // 0x2fee94: 0x0  nop
    ctx->pc = 0x2fee94u;
    // NOP
label_2fee98:
    // 0x2fee98: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2fee98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_2fee9c:
    // 0x2fee9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2feea0:
    // 0x2feea0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2feea0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_2feea4:
    // 0x2feea4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2feea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2feea8:
    // 0x2feea8: 0x0  nop
    ctx->pc = 0x2feea8u;
    // NOP
label_2feeac:
    // 0x2feeac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2feeacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2feeb0:
    // 0x2feeb0: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2feeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2feeb4:
    // 0x2feeb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2feeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2feeb8:
    // 0x2feeb8: 0x10000045  b           . + 4 + (0x45 << 2)
label_2feebc:
    if (ctx->pc == 0x2FEEBCu) {
        ctx->pc = 0x2FEEBCu;
            // 0x2feebc: 0xe660002c  swc1        $f0, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->pc = 0x2FEEC0u;
        goto label_2feec0;
    }
    ctx->pc = 0x2FEEB8u;
    {
        const bool branch_taken_0x2feeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEEB8u;
            // 0x2feebc: 0xe660002c  swc1        $f0, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feeb8) {
            ctx->pc = 0x2FEFD0u;
            goto label_2fefd0;
        }
    }
    ctx->pc = 0x2FEEC0u;
label_2feec0:
    // 0x2feec0: 0x14830043  bne         $a0, $v1, . + 4 + (0x43 << 2)
label_2feec4:
    if (ctx->pc == 0x2FEEC4u) {
        ctx->pc = 0x2FEEC8u;
        goto label_2feec8;
    }
    ctx->pc = 0x2FEEC0u;
    {
        const bool branch_taken_0x2feec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2feec0) {
            ctx->pc = 0x2FEFD0u;
            goto label_2fefd0;
        }
    }
    ctx->pc = 0x2FEEC8u;
label_2feec8:
    // 0x2feec8: 0x3c033eed  lui         $v1, 0x3EED
    ctx->pc = 0x2feec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16109 << 16));
label_2feecc:
    // 0x2feecc: 0x3464097b  ori         $a0, $v1, 0x97B
    ctx->pc = 0x2feeccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_2feed0:
    // 0x2feed0: 0xc6a00de4  lwc1        $f0, 0xDE4($s5)
    ctx->pc = 0x2feed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2feed4:
    // 0x2feed4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2feed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2feed8:
    // 0x2feed8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2feed8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2feedc:
    // 0x2feedc: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x2feedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2feee0:
    // 0x2feee0: 0x3c033f1a  lui         $v1, 0x3F1A
    ctx->pc = 0x2feee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16154 << 16));
label_2feee4:
    // 0x2feee4: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x2feee4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2feee8:
    // 0x2feee8: 0x346412f6  ori         $a0, $v1, 0x12F6
    ctx->pc = 0x2feee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4854);
label_2feeec:
    // 0x2feeec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2feeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2feef0:
    // 0x2feef0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2feef0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2feef4:
    // 0x2feef4: 0x0  nop
    ctx->pc = 0x2feef4u;
    // NOP
label_2feef8:
    // 0x2feef8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2feef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2feefc:
    // 0x2feefc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2feefcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fef00:
    // 0x2fef00: 0x0  nop
    ctx->pc = 0x2fef00u;
    // NOP
label_2fef04:
    // 0x2fef04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2fef04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_2fef08:
    // 0x2fef08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fef08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fef0c:
    // 0x2fef0c: 0x0  nop
    ctx->pc = 0x2fef0cu;
    // NOP
label_2fef10:
    // 0x2fef10: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2fef10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fef14:
    // 0x2fef14: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2fef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fef18:
    // 0x2fef18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fef18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fef1c:
    // 0x2fef1c: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x2fef1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_2fef20:
    // 0x2fef20: 0xc6a00de4  lwc1        $f0, 0xDE4($s5)
    ctx->pc = 0x2fef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fef24:
    // 0x2fef24: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fef24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fef28:
    // 0x2fef28: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_2fef2c:
    if (ctx->pc == 0x2FEF2Cu) {
        ctx->pc = 0x2FEF30u;
        goto label_2fef30;
    }
    ctx->pc = 0x2FEF28u;
    {
        const bool branch_taken_0x2fef28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fef28) {
            ctx->pc = 0x2FEFD0u;
            goto label_2fefd0;
        }
    }
    ctx->pc = 0x2FEF30u;
label_2fef30:
    // 0x2fef30: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x2fef30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2fef34:
    // 0x2fef34: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2fef34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_2fef38:
    // 0x2fef38: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2fef38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2fef3c:
    // 0x2fef3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2fef3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fef40:
    // 0x2fef40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fef40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fef44:
    // 0x2fef44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fef44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fef48:
    // 0x2fef48: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x2fef48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fef4c:
    // 0x2fef4c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2fef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2fef50:
    // 0x2fef50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fef54:
    // 0x2fef54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fef54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2fef58:
    // 0x2fef58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2fef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2fef5c:
    // 0x2fef5c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2fef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2fef60:
    // 0x2fef60: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2fef60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2fef64:
    // 0x2fef64: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2fef64u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2fef68:
    // 0x2fef68: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2fef68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2fef6c:
    // 0x2fef6c: 0x320f809  jalr        $t9
label_2fef70:
    if (ctx->pc == 0x2FEF70u) {
        ctx->pc = 0x2FEF70u;
            // 0x2fef70: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FEF74u;
        goto label_2fef74;
    }
    ctx->pc = 0x2FEF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEF74u);
        ctx->pc = 0x2FEF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF6Cu;
            // 0x2fef70: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEF74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF74u; }
            if (ctx->pc != 0x2FEF74u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEF74u;
label_2fef74:
    // 0x2fef74: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2fef74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2fef78:
    // 0x2fef78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2fef78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fef7c:
    // 0x2fef7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fef80:
    // 0x2fef80: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2fef80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2fef84:
    // 0x2fef84: 0x320f809  jalr        $t9
label_2fef88:
    if (ctx->pc == 0x2FEF88u) {
        ctx->pc = 0x2FEF88u;
            // 0x2fef88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF8Cu;
        goto label_2fef8c;
    }
    ctx->pc = 0x2FEF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEF8Cu);
        ctx->pc = 0x2FEF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEF84u;
            // 0x2fef88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEF8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEF8Cu; }
            if (ctx->pc != 0x2FEF8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FEF8Cu;
label_2fef8c:
    // 0x2fef8c: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x2fef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_2fef90:
    // 0x2fef90: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x2fef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_2fef94:
    // 0x2fef94: 0xc6a10de4  lwc1        $f1, 0xDE4($s5)
    ctx->pc = 0x2fef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fef98:
    // 0x2fef98: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2fef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2fef9c:
    // 0x2fef9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fef9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fefa0:
    // 0x2fefa0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2fefa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2fefa4:
    // 0x2fefa4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2fefa4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_2fefa8:
    // 0x2fefa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fefac:
    // 0x2fefac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fefacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fefb0:
    // 0x2fefb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fefb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fefb4:
    // 0x2fefb4: 0x0  nop
    ctx->pc = 0x2fefb4u;
    // NOP
label_2fefb8:
    // 0x2fefb8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2fefb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fefbc:
    // 0x2fefbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2fefbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fefc0:
    // 0x2fefc0: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2fefc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fefc4:
    // 0x2fefc4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2fefc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2fefc8:
    // 0x2fefc8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fefc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fefcc:
    // 0x2fefcc: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x2fefccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_2fefd0:
    // 0x2fefd0: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x2fefd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_2fefd4:
    // 0x2fefd4: 0x344225ed  ori         $v0, $v0, 0x25ED
    ctx->pc = 0x2fefd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
label_2fefd8:
    // 0x2fefd8: 0xc6a10de0  lwc1        $f1, 0xDE0($s5)
    ctx->pc = 0x2fefd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fefdc:
    // 0x2fefdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fefdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fefe0:
    // 0x2fefe0: 0x0  nop
    ctx->pc = 0x2fefe0u;
    // NOP
label_2fefe4:
    // 0x2fefe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fefe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fefe8:
    // 0x2fefe8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2fefec:
    if (ctx->pc == 0x2FEFECu) {
        ctx->pc = 0x2FEFECu;
            // 0x2fefec: 0x8ea60d74  lw          $a2, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->pc = 0x2FEFF0u;
        goto label_2feff0;
    }
    ctx->pc = 0x2FEFE8u;
    {
        const bool branch_taken_0x2fefe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fefe8) {
            ctx->pc = 0x2FEFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEFE8u;
            // 0x2fefec: 0x8ea60d74  lw          $a2, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FEFF8u;
            goto label_2feff8;
        }
    }
    ctx->pc = 0x2FEFF0u;
label_2feff0:
    // 0x2feff0: 0xe6a00de0  swc1        $f0, 0xDE0($s5)
    ctx->pc = 0x2feff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3552), bits); }
label_2feff4:
    // 0x2feff4: 0x8ea60d74  lw          $a2, 0xD74($s5)
    ctx->pc = 0x2feff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
label_2feff8:
    // 0x2feff8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2feff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2feffc:
    // 0x2feffc: 0x90c502c5  lbu         $a1, 0x2C5($a2)
    ctx->pc = 0x2feffcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 709)));
label_2ff000:
    // 0x2ff000: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2ff000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2ff004:
    // 0x2ff004: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ff004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2ff008:
    // 0x2ff008: 0x90640281  lbu         $a0, 0x281($v1)
    ctx->pc = 0x2ff008u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_2ff00c:
    // 0x2ff00c: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
label_2ff010:
    if (ctx->pc == 0x2FF010u) {
        ctx->pc = 0x2FF010u;
            // 0x2ff010: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF014u;
        goto label_2ff014;
    }
    ctx->pc = 0x2FF00Cu;
    {
        const bool branch_taken_0x2ff00c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff00c) {
            ctx->pc = 0x2FF010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF00Cu;
            // 0x2ff010: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF02Cu;
            goto label_2ff02c;
        }
    }
    ctx->pc = 0x2FF014u;
label_2ff014:
    // 0x2ff014: 0xc0c1334  jal         func_304CD0
label_2ff018:
    if (ctx->pc == 0x2FF018u) {
        ctx->pc = 0x2FF018u;
            // 0x2ff018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF01Cu;
        goto label_2ff01c;
    }
    ctx->pc = 0x2FF014u;
    SET_GPR_U32(ctx, 31, 0x2FF01Cu);
    ctx->pc = 0x2FF018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF014u;
            // 0x2ff018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304CD0u;
    if (runtime->hasFunction(0x304CD0u)) {
        auto targetFn = runtime->lookupFunction(0x304CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF01Cu; }
        if (ctx->pc != 0x2FF01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304CD0_0x304cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF01Cu; }
        if (ctx->pc != 0x2FF01Cu) { return; }
    }
    ctx->pc = 0x2FF01Cu;
label_2ff01c:
    // 0x2ff01c: 0xc0b6764  jal         func_2D9D90
label_2ff020:
    if (ctx->pc == 0x2FF020u) {
        ctx->pc = 0x2FF020u;
            // 0x2ff020: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->pc = 0x2FF024u;
        goto label_2ff024;
    }
    ctx->pc = 0x2FF01Cu;
    SET_GPR_U32(ctx, 31, 0x2FF024u);
    ctx->pc = 0x2FF020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF01Cu;
            // 0x2ff020: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF024u; }
        if (ctx->pc != 0x2FF024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF024u; }
        if (ctx->pc != 0x2FF024u) { return; }
    }
    ctx->pc = 0x2FF024u;
label_2ff024:
    // 0x2ff024: 0x100000bb  b           . + 4 + (0xBB << 2)
label_2ff028:
    if (ctx->pc == 0x2FF028u) {
        ctx->pc = 0x2FF028u;
            // 0x2ff028: 0x8ea30db0  lw          $v1, 0xDB0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
        ctx->pc = 0x2FF02Cu;
        goto label_2ff02c;
    }
    ctx->pc = 0x2FF024u;
    {
        const bool branch_taken_0x2ff024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF024u;
            // 0x2ff028: 0x8ea30db0  lw          $v1, 0xDB0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff024) {
            ctx->pc = 0x2FF314u;
            goto label_2ff314;
        }
    }
    ctx->pc = 0x2FF02Cu;
label_2ff02c:
    // 0x2ff02c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2ff02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ff030:
    // 0x2ff030: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff030u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff034:
    // 0x2ff034: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ff034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2ff038:
    // 0x2ff038: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ff038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2ff03c:
    // 0x2ff03c: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x2ff03cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_2ff040:
    // 0x2ff040: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_2ff044:
    if (ctx->pc == 0x2FF044u) {
        ctx->pc = 0x2FF044u;
            // 0x2ff044: 0x8ea30e34  lw          $v1, 0xE34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
        ctx->pc = 0x2FF048u;
        goto label_2ff048;
    }
    ctx->pc = 0x2FF040u;
    {
        const bool branch_taken_0x2ff040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff040) {
            ctx->pc = 0x2FF044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF040u;
            // 0x2ff044: 0x8ea30e34  lw          $v1, 0xE34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF06Cu;
            goto label_2ff06c;
        }
    }
    ctx->pc = 0x2FF048u;
label_2ff048:
    // 0x2ff048: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_2ff04c:
    if (ctx->pc == 0x2FF04Cu) {
        ctx->pc = 0x2FF050u;
        goto label_2ff050;
    }
    ctx->pc = 0x2FF048u;
    {
        const bool branch_taken_0x2ff048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff048) {
            ctx->pc = 0x2FF068u;
            goto label_2ff068;
        }
    }
    ctx->pc = 0x2FF050u;
label_2ff050:
    // 0x2ff050: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2ff050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_2ff054:
    // 0x2ff054: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ff054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2ff058:
    // 0x2ff058: 0xc461c6c0  lwc1        $f1, -0x3940($v1)
    ctx->pc = 0x2ff058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff05c:
    // 0x2ff05c: 0xc440c6c8  lwc1        $f0, -0x3938($v0)
    ctx->pc = 0x2ff05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff060:
    // 0x2ff060: 0xe6a10ddc  swc1        $f1, 0xDDC($s5)
    ctx->pc = 0x2ff060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3548), bits); }
label_2ff064:
    // 0x2ff064: 0xe6a00de0  swc1        $f0, 0xDE0($s5)
    ctx->pc = 0x2ff064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3552), bits); }
label_2ff068:
    // 0x2ff068: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x2ff068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_2ff06c:
    // 0x2ff06c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ff06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ff070:
    // 0x2ff070: 0x50620089  beql        $v1, $v0, . + 4 + (0x89 << 2)
label_2ff074:
    if (ctx->pc == 0x2FF074u) {
        ctx->pc = 0x2FF074u;
            // 0x2ff074: 0x8ea30d60  lw          $v1, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->pc = 0x2FF078u;
        goto label_2ff078;
    }
    ctx->pc = 0x2FF070u;
    {
        const bool branch_taken_0x2ff070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff070) {
            ctx->pc = 0x2FF074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF070u;
            // 0x2ff074: 0x8ea30d60  lw          $v1, 0xD60($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF298u;
            goto label_2ff298;
        }
    }
    ctx->pc = 0x2FF078u;
label_2ff078:
    // 0x2ff078: 0xc0c1088  jal         func_304220
label_2ff07c:
    if (ctx->pc == 0x2FF07Cu) {
        ctx->pc = 0x2FF07Cu;
            // 0x2ff07c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF080u;
        goto label_2ff080;
    }
    ctx->pc = 0x2FF078u;
    SET_GPR_U32(ctx, 31, 0x2FF080u);
    ctx->pc = 0x2FF07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF078u;
            // 0x2ff07c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304220u;
    if (runtime->hasFunction(0x304220u)) {
        auto targetFn = runtime->lookupFunction(0x304220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF080u; }
        if (ctx->pc != 0x2FF080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304220_0x304220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF080u; }
        if (ctx->pc != 0x2FF080u) { return; }
    }
    ctx->pc = 0x2FF080u;
label_2ff080:
    // 0x2ff080: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2ff080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2ff084:
    // 0x2ff084: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ff084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2ff088:
    // 0x2ff088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff08c:
    // 0x2ff08c: 0xc0c1054  jal         func_304150
label_2ff090:
    if (ctx->pc == 0x2FF090u) {
        ctx->pc = 0x2FF090u;
            // 0x2ff090: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF094u;
        goto label_2ff094;
    }
    ctx->pc = 0x2FF08Cu;
    SET_GPR_U32(ctx, 31, 0x2FF094u);
    ctx->pc = 0x2FF090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF08Cu;
            // 0x2ff090: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304150u;
    if (runtime->hasFunction(0x304150u)) {
        auto targetFn = runtime->lookupFunction(0x304150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF094u; }
        if (ctx->pc != 0x2FF094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304150_0x304150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF094u; }
        if (ctx->pc != 0x2FF094u) { return; }
    }
    ctx->pc = 0x2FF094u;
label_2ff094:
    // 0x2ff094: 0xc6a10de4  lwc1        $f1, 0xDE4($s5)
    ctx->pc = 0x2ff094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff098:
    // 0x2ff098: 0xc6a00de8  lwc1        $f0, 0xDE8($s5)
    ctx->pc = 0x2ff098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff09c:
    // 0x2ff09c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff0a0:
    // 0x2ff0a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ff0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ff0a4:
    // 0x2ff0a4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2ff0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff0a8:
    // 0x2ff0a8: 0x4502004e  bc1fl       . + 4 + (0x4E << 2)
label_2ff0ac:
    if (ctx->pc == 0x2FF0ACu) {
        ctx->pc = 0x2FF0ACu;
            // 0x2ff0ac: 0x8263010f  lb          $v1, 0x10F($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 271)));
        ctx->pc = 0x2FF0B0u;
        goto label_2ff0b0;
    }
    ctx->pc = 0x2FF0A8u;
    {
        const bool branch_taken_0x2ff0a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff0a8) {
            ctx->pc = 0x2FF0ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF0A8u;
            // 0x2ff0ac: 0x8263010f  lb          $v1, 0x10F($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 271)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF1E4u;
            goto label_2ff1e4;
        }
    }
    ctx->pc = 0x2FF0B0u;
label_2ff0b0:
    // 0x2ff0b0: 0x8ea20d60  lw          $v0, 0xD60($s5)
    ctx->pc = 0x2ff0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3424)));
label_2ff0b4:
    // 0x2ff0b4: 0x80420005  lb          $v0, 0x5($v0)
    ctx->pc = 0x2ff0b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_2ff0b8:
    // 0x2ff0b8: 0x443002b  bgezl       $v0, . + 4 + (0x2B << 2)
label_2ff0bc:
    if (ctx->pc == 0x2FF0BCu) {
        ctx->pc = 0x2FF0BCu;
            // 0x2ff0bc: 0xe6ac0de4  swc1        $f12, 0xDE4($s5) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3556), bits); }
        ctx->pc = 0x2FF0C0u;
        goto label_2ff0c0;
    }
    ctx->pc = 0x2FF0B8u;
    {
        const bool branch_taken_0x2ff0b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ff0b8) {
            ctx->pc = 0x2FF0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF0B8u;
            // 0x2ff0bc: 0xe6ac0de4  swc1        $f12, 0xDE4($s5) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF168u;
            goto label_2ff168;
        }
    }
    ctx->pc = 0x2FF0C0u;
label_2ff0c0:
    // 0x2ff0c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff0c4:
    // 0x2ff0c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2ff0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2ff0c8:
    // 0x2ff0c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ff0c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ff0cc:
    // 0x2ff0cc: 0x3c023dbd  lui         $v0, 0x3DBD
    ctx->pc = 0x2ff0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15805 << 16));
label_2ff0d0:
    // 0x2ff0d0: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x2ff0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_2ff0d4:
    // 0x2ff0d4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2ff0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2ff0d8:
    // 0x2ff0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff0dc:
    // 0x2ff0dc: 0x0  nop
    ctx->pc = 0x2ff0dcu;
    // NOP
label_2ff0e0:
    // 0x2ff0e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ff0e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_2ff0e4:
    // 0x2ff0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff0e8:
    // 0x2ff0e8: 0x0  nop
    ctx->pc = 0x2ff0e8u;
    // NOP
label_2ff0ec:
    // 0x2ff0ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ff0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ff0f0:
    // 0x2ff0f0: 0xe6a00de4  swc1        $f0, 0xDE4($s5)
    ctx->pc = 0x2ff0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3556), bits); }
label_2ff0f4:
    // 0x2ff0f4: 0x8262010f  lb          $v0, 0x10F($s3)
    ctx->pc = 0x2ff0f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 271)));
label_2ff0f8:
    // 0x2ff0f8: 0x5046007a  beql        $v0, $a2, . + 4 + (0x7A << 2)
label_2ff0fc:
    if (ctx->pc == 0x2FF0FCu) {
        ctx->pc = 0x2FF0FCu;
            // 0x2ff0fc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2FF100u;
        goto label_2ff100;
    }
    ctx->pc = 0x2FF0F8u;
    {
        const bool branch_taken_0x2ff0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ff0f8) {
            ctx->pc = 0x2FF0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF0F8u;
            // 0x2ff0fc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF2E4u;
            goto label_2ff2e4;
        }
    }
    ctx->pc = 0x2FF100u;
label_2ff100:
    // 0x2ff100: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x2ff100u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2ff104:
    // 0x2ff104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff108:
    // 0x2ff108: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ff108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2ff10c:
    // 0x2ff10c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ff110:
    // 0x2ff110: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ff114:
    // 0x2ff114: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff118:
    // 0x2ff118: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff118u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff11c:
    // 0x2ff11c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ff11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ff120:
    // 0x2ff120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff124:
    // 0x2ff124: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ff124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ff128:
    // 0x2ff128: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2ff128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2ff12c:
    // 0x2ff12c: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ff12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ff130:
    // 0x2ff130: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ff130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ff134:
    // 0x2ff134: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2ff134u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2ff138:
    // 0x2ff138: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ff138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ff13c:
    // 0x2ff13c: 0x320f809  jalr        $t9
label_2ff140:
    if (ctx->pc == 0x2FF140u) {
        ctx->pc = 0x2FF140u;
            // 0x2ff140: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF144u;
        goto label_2ff144;
    }
    ctx->pc = 0x2FF13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF144u);
        ctx->pc = 0x2FF140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF13Cu;
            // 0x2ff140: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF144u; }
            if (ctx->pc != 0x2FF144u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF144u;
label_2ff144:
    // 0x2ff144: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ff144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ff148:
    // 0x2ff148: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ff148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff14c:
    // 0x2ff14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff150:
    // 0x2ff150: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ff150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ff154:
    // 0x2ff154: 0x320f809  jalr        $t9
label_2ff158:
    if (ctx->pc == 0x2FF158u) {
        ctx->pc = 0x2FF158u;
            // 0x2ff158: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF15Cu;
        goto label_2ff15c;
    }
    ctx->pc = 0x2FF154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF15Cu);
        ctx->pc = 0x2FF158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF154u;
            // 0x2ff158: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF15Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF15Cu; }
            if (ctx->pc != 0x2FF15Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FF15Cu;
label_2ff15c:
    // 0x2ff15c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ff160:
    // 0x2ff160: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2ff164:
    if (ctx->pc == 0x2FF164u) {
        ctx->pc = 0x2FF164u;
            // 0x2ff164: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF168u;
        goto label_2ff168;
    }
    ctx->pc = 0x2FF160u;
    {
        const bool branch_taken_0x2ff160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF160u;
            // 0x2ff164: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff160) {
            ctx->pc = 0x2FF2E0u;
            goto label_2ff2e0;
        }
    }
    ctx->pc = 0x2FF168u;
label_2ff168:
    // 0x2ff168: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2ff168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2ff16c:
    // 0x2ff16c: 0x8263010f  lb          $v1, 0x10F($s3)
    ctx->pc = 0x2ff16cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 271)));
label_2ff170:
    // 0x2ff170: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
label_2ff174:
    if (ctx->pc == 0x2FF174u) {
        ctx->pc = 0x2FF178u;
        goto label_2ff178;
    }
    ctx->pc = 0x2FF170u;
    {
        const bool branch_taken_0x2ff170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff170) {
            ctx->pc = 0x2FF2E0u;
            goto label_2ff2e0;
        }
    }
    ctx->pc = 0x2FF178u;
label_2ff178:
    // 0x2ff178: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x2ff178u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2ff17c:
    // 0x2ff17c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff180:
    // 0x2ff180: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ff180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2ff184:
    // 0x2ff184: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ff188:
    // 0x2ff188: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ff18c:
    // 0x2ff18c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff190:
    // 0x2ff190: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff190u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff194:
    // 0x2ff194: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2ff194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ff198:
    // 0x2ff198: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ff198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ff19c:
    // 0x2ff19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff1a0:
    // 0x2ff1a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ff1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ff1a4:
    // 0x2ff1a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2ff1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2ff1a8:
    // 0x2ff1a8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ff1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ff1ac:
    // 0x2ff1ac: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ff1acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ff1b0:
    // 0x2ff1b0: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2ff1b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2ff1b4:
    // 0x2ff1b4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ff1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ff1b8:
    // 0x2ff1b8: 0x320f809  jalr        $t9
label_2ff1bc:
    if (ctx->pc == 0x2FF1BCu) {
        ctx->pc = 0x2FF1BCu;
            // 0x2ff1bc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF1C0u;
        goto label_2ff1c0;
    }
    ctx->pc = 0x2FF1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF1C0u);
        ctx->pc = 0x2FF1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF1B8u;
            // 0x2ff1bc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF1C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF1C0u; }
            if (ctx->pc != 0x2FF1C0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF1C0u;
label_2ff1c0:
    // 0x2ff1c0: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ff1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ff1c4:
    // 0x2ff1c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ff1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff1c8:
    // 0x2ff1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff1cc:
    // 0x2ff1cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ff1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ff1d0:
    // 0x2ff1d0: 0x320f809  jalr        $t9
label_2ff1d4:
    if (ctx->pc == 0x2FF1D4u) {
        ctx->pc = 0x2FF1D4u;
            // 0x2ff1d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1D8u;
        goto label_2ff1d8;
    }
    ctx->pc = 0x2FF1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF1D8u);
        ctx->pc = 0x2FF1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF1D0u;
            // 0x2ff1d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF1D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF1D8u; }
            if (ctx->pc != 0x2FF1D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF1D8u;
label_2ff1d8:
    // 0x2ff1d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ff1dc:
    // 0x2ff1dc: 0x10000040  b           . + 4 + (0x40 << 2)
label_2ff1e0:
    if (ctx->pc == 0x2FF1E0u) {
        ctx->pc = 0x2FF1E0u;
            // 0x2ff1e0: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF1E4u;
        goto label_2ff1e4;
    }
    ctx->pc = 0x2FF1DCu;
    {
        const bool branch_taken_0x2ff1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF1DCu;
            // 0x2ff1e0: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1dc) {
            ctx->pc = 0x2FF2E0u;
            goto label_2ff2e0;
        }
    }
    ctx->pc = 0x2FF1E4u;
label_2ff1e4:
    // 0x2ff1e4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2ff1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2ff1e8:
    // 0x2ff1e8: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
label_2ff1ec:
    if (ctx->pc == 0x2FF1ECu) {
        ctx->pc = 0x2FF1F0u;
        goto label_2ff1f0;
    }
    ctx->pc = 0x2FF1E8u;
    {
        const bool branch_taken_0x2ff1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff1e8) {
            ctx->pc = 0x2FF2E0u;
            goto label_2ff2e0;
        }
    }
    ctx->pc = 0x2FF1F0u;
label_2ff1f0:
    // 0x2ff1f0: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x2ff1f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2ff1f4:
    // 0x2ff1f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff1f8:
    // 0x2ff1f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ff1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2ff1fc:
    // 0x2ff1fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ff200:
    // 0x2ff200: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ff204:
    // 0x2ff204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff208:
    // 0x2ff208: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff208u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff20c:
    // 0x2ff20c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2ff20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ff210:
    // 0x2ff210: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ff210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ff214:
    // 0x2ff214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff218:
    // 0x2ff218: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ff218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ff21c:
    // 0x2ff21c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2ff21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2ff220:
    // 0x2ff220: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ff220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ff224:
    // 0x2ff224: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ff224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ff228:
    // 0x2ff228: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x2ff228u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_2ff22c:
    // 0x2ff22c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ff22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ff230:
    // 0x2ff230: 0x320f809  jalr        $t9
label_2ff234:
    if (ctx->pc == 0x2FF234u) {
        ctx->pc = 0x2FF234u;
            // 0x2ff234: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF238u;
        goto label_2ff238;
    }
    ctx->pc = 0x2FF230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF238u);
        ctx->pc = 0x2FF234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF230u;
            // 0x2ff234: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF238u; }
            if (ctx->pc != 0x2FF238u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF238u;
label_2ff238:
    // 0x2ff238: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x2ff238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2ff23c:
    // 0x2ff23c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ff23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff240:
    // 0x2ff240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff244:
    // 0x2ff244: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ff244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ff248:
    // 0x2ff248: 0x320f809  jalr        $t9
label_2ff24c:
    if (ctx->pc == 0x2FF24Cu) {
        ctx->pc = 0x2FF24Cu;
            // 0x2ff24c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF250u;
        goto label_2ff250;
    }
    ctx->pc = 0x2FF248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF250u);
        ctx->pc = 0x2FF24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF248u;
            // 0x2ff24c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF250u; }
            if (ctx->pc != 0x2FF250u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF250u;
label_2ff250:
    // 0x2ff250: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_2ff254:
    // 0x2ff254: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x2ff254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_2ff258:
    // 0x2ff258: 0xc6a10de4  lwc1        $f1, 0xDE4($s5)
    ctx->pc = 0x2ff258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff25c:
    // 0x2ff25c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2ff25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2ff260:
    // 0x2ff260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff264:
    // 0x2ff264: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2ff264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff268:
    // 0x2ff268: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2ff268u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_2ff26c:
    // 0x2ff26c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ff270:
    // 0x2ff270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff274:
    // 0x2ff274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ff274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff278:
    // 0x2ff278: 0x0  nop
    ctx->pc = 0x2ff278u;
    // NOP
label_2ff27c:
    // 0x2ff27c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2ff27cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ff280:
    // 0x2ff280: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ff280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ff284:
    // 0x2ff284: 0xc6a00dbc  lwc1        $f0, 0xDBC($s5)
    ctx->pc = 0x2ff284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff288:
    // 0x2ff288: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2ff288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2ff28c:
    // 0x2ff28c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ff290:
    // 0x2ff290: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ff294:
    if (ctx->pc == 0x2FF294u) {
        ctx->pc = 0x2FF294u;
            // 0x2ff294: 0xe660002c  swc1        $f0, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->pc = 0x2FF298u;
        goto label_2ff298;
    }
    ctx->pc = 0x2FF290u;
    {
        const bool branch_taken_0x2ff290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF290u;
            // 0x2ff294: 0xe660002c  swc1        $f0, 0x2C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff290) {
            ctx->pc = 0x2FF2E0u;
            goto label_2ff2e0;
        }
    }
    ctx->pc = 0x2FF298u;
label_2ff298:
    // 0x2ff298: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2ff298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2ff29c:
    // 0x2ff29c: 0x8c42ee50  lw          $v0, -0x11B0($v0)
    ctx->pc = 0x2ff29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962768)));
label_2ff2a0:
    // 0x2ff2a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ff2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ff2a4:
    // 0x2ff2a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ff2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ff2a8:
    // 0x2ff2a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ff2ac:
    if (ctx->pc == 0x2FF2ACu) {
        ctx->pc = 0x2FF2ACu;
            // 0x2ff2ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2B0u;
        goto label_2ff2b0;
    }
    ctx->pc = 0x2FF2A8u;
    {
        const bool branch_taken_0x2ff2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2a8) {
            ctx->pc = 0x2FF2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2A8u;
            // 0x2ff2ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF2C0u;
            goto label_2ff2c0;
        }
    }
    ctx->pc = 0x2FF2B0u;
label_2ff2b0:
    // 0x2ff2b0: 0xc102a2c  jal         func_40A8B0
label_2ff2b4:
    if (ctx->pc == 0x2FF2B4u) {
        ctx->pc = 0x2FF2B4u;
            // 0x2ff2b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2B8u;
        goto label_2ff2b8;
    }
    ctx->pc = 0x2FF2B0u;
    SET_GPR_U32(ctx, 31, 0x2FF2B8u);
    ctx->pc = 0x2FF2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2B0u;
            // 0x2ff2b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40A8B0u;
    if (runtime->hasFunction(0x40A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x40A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2B8u; }
        if (ctx->pc != 0x2FF2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040A8B0_0x40a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2B8u; }
        if (ctx->pc != 0x2FF2B8u) { return; }
    }
    ctx->pc = 0x2FF2B8u;
label_2ff2b8:
    // 0x2ff2b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ff2bc:
    if (ctx->pc == 0x2FF2BCu) {
        ctx->pc = 0x2FF2BCu;
            // 0x2ff2bc: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x2FF2C0u;
        goto label_2ff2c0;
    }
    ctx->pc = 0x2FF2B8u;
    {
        const bool branch_taken_0x2ff2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2B8u;
            // 0x2ff2bc: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2b8) {
            ctx->pc = 0x2FF2CCu;
            goto label_2ff2cc;
        }
    }
    ctx->pc = 0x2FF2C0u;
label_2ff2c0:
    // 0x2ff2c0: 0xc102a18  jal         func_40A860
label_2ff2c4:
    if (ctx->pc == 0x2FF2C4u) {
        ctx->pc = 0x2FF2C8u;
        goto label_2ff2c8;
    }
    ctx->pc = 0x2FF2C0u;
    SET_GPR_U32(ctx, 31, 0x2FF2C8u);
    ctx->pc = 0x40A860u;
    if (runtime->hasFunction(0x40A860u)) {
        auto targetFn = runtime->lookupFunction(0x40A860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2C8u; }
        if (ctx->pc != 0x2FF2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040A860_0x40a860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2C8u; }
        if (ctx->pc != 0x2FF2C8u) { return; }
    }
    ctx->pc = 0x2FF2C8u;
label_2ff2c8:
    // 0x2ff2c8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2ff2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ff2cc:
    // 0x2ff2cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ff2d0:
    // 0x2ff2d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff2d4:
    // 0x2ff2d4: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x2ff2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_2ff2d8:
    // 0x2ff2d8: 0x320f809  jalr        $t9
label_2ff2dc:
    if (ctx->pc == 0x2FF2DCu) {
        ctx->pc = 0x2FF2DCu;
            // 0x2ff2dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2E0u;
        goto label_2ff2e0;
    }
    ctx->pc = 0x2FF2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF2E0u);
        ctx->pc = 0x2FF2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2D8u;
            // 0x2ff2dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF2E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2E0u; }
            if (ctx->pc != 0x2FF2E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF2E0u;
label_2ff2e0:
    // 0x2ff2e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff2e4:
    // 0x2ff2e4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2ff2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2ff2e8:
    // 0x2ff2e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2ff2ec:
    if (ctx->pc == 0x2FF2ECu) {
        ctx->pc = 0x2FF2ECu;
            // 0x2ff2ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2F0u;
        goto label_2ff2f0;
    }
    ctx->pc = 0x2FF2E8u;
    {
        const bool branch_taken_0x2ff2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2e8) {
            ctx->pc = 0x2FF2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2E8u;
            // 0x2ff2ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF300u;
            goto label_2ff300;
        }
    }
    ctx->pc = 0x2FF2F0u;
label_2ff2f0:
    // 0x2ff2f0: 0xc0c1298  jal         func_304A60
label_2ff2f4:
    if (ctx->pc == 0x2FF2F4u) {
        ctx->pc = 0x2FF2F4u;
            // 0x2ff2f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2F8u;
        goto label_2ff2f8;
    }
    ctx->pc = 0x2FF2F0u;
    SET_GPR_U32(ctx, 31, 0x2FF2F8u);
    ctx->pc = 0x2FF2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF2F0u;
            // 0x2ff2f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304A60u;
    if (runtime->hasFunction(0x304A60u)) {
        auto targetFn = runtime->lookupFunction(0x304A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2F8u; }
        if (ctx->pc != 0x2FF2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304A60_0x304a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2F8u; }
        if (ctx->pc != 0x2FF2F8u) { return; }
    }
    ctx->pc = 0x2FF2F8u;
label_2ff2f8:
    // 0x2ff2f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ff2fc:
    if (ctx->pc == 0x2FF2FCu) {
        ctx->pc = 0x2FF300u;
        goto label_2ff300;
    }
    ctx->pc = 0x2FF2F8u;
    {
        const bool branch_taken_0x2ff2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2f8) {
            ctx->pc = 0x2FF310u;
            goto label_2ff310;
        }
    }
    ctx->pc = 0x2FF300u;
label_2ff300:
    // 0x2ff300: 0xc0c14cc  jal         func_305330
label_2ff304:
    if (ctx->pc == 0x2FF304u) {
        ctx->pc = 0x2FF308u;
        goto label_2ff308;
    }
    ctx->pc = 0x2FF300u;
    SET_GPR_U32(ctx, 31, 0x2FF308u);
    ctx->pc = 0x305330u;
    if (runtime->hasFunction(0x305330u)) {
        auto targetFn = runtime->lookupFunction(0x305330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF308u; }
        if (ctx->pc != 0x2FF308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305330_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF308u; }
        if (ctx->pc != 0x2FF308u) { return; }
    }
    ctx->pc = 0x2FF308u;
label_2ff308:
    // 0x2ff308: 0xc0c144c  jal         func_305130
label_2ff30c:
    if (ctx->pc == 0x2FF30Cu) {
        ctx->pc = 0x2FF30Cu;
            // 0x2ff30c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF310u;
        goto label_2ff310;
    }
    ctx->pc = 0x2FF308u;
    SET_GPR_U32(ctx, 31, 0x2FF310u);
    ctx->pc = 0x2FF30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF308u;
            // 0x2ff30c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305130u;
    if (runtime->hasFunction(0x305130u)) {
        auto targetFn = runtime->lookupFunction(0x305130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF310u; }
        if (ctx->pc != 0x2FF310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305130_0x305130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF310u; }
        if (ctx->pc != 0x2FF310u) { return; }
    }
    ctx->pc = 0x2FF310u;
label_2ff310:
    // 0x2ff310: 0x8ea30db0  lw          $v1, 0xDB0($s5)
    ctx->pc = 0x2ff310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_2ff314:
    // 0x2ff314: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2ff314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2ff318:
    // 0x2ff318: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_2ff31c:
    if (ctx->pc == 0x2FF31Cu) {
        ctx->pc = 0x2FF31Cu;
            // 0x2ff31c: 0xc6a1118c  lwc1        $f1, 0x118C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2FF320u;
        goto label_2ff320;
    }
    ctx->pc = 0x2FF318u;
    {
        const bool branch_taken_0x2ff318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff318) {
            ctx->pc = 0x2FF31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF318u;
            // 0x2ff31c: 0xc6a1118c  lwc1        $f1, 0x118C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF330u;
            goto label_2ff330;
        }
    }
    ctx->pc = 0x2FF320u;
label_2ff320:
    // 0x2ff320: 0xc0b6764  jal         func_2D9D90
label_2ff324:
    if (ctx->pc == 0x2FF324u) {
        ctx->pc = 0x2FF324u;
            // 0x2ff324: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->pc = 0x2FF328u;
        goto label_2ff328;
    }
    ctx->pc = 0x2FF320u;
    SET_GPR_U32(ctx, 31, 0x2FF328u);
    ctx->pc = 0x2FF324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF320u;
            // 0x2ff324: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF328u; }
        if (ctx->pc != 0x2FF328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF328u; }
        if (ctx->pc != 0x2FF328u) { return; }
    }
    ctx->pc = 0x2FF328u;
label_2ff328:
    // 0x2ff328: 0x10000014  b           . + 4 + (0x14 << 2)
label_2ff32c:
    if (ctx->pc == 0x2FF32Cu) {
        ctx->pc = 0x2FF32Cu;
            // 0x2ff32c: 0xc6a10de8  lwc1        $f1, 0xDE8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2FF330u;
        goto label_2ff330;
    }
    ctx->pc = 0x2FF328u;
    {
        const bool branch_taken_0x2ff328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF328u;
            // 0x2ff32c: 0xc6a10de8  lwc1        $f1, 0xDE8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff328) {
            ctx->pc = 0x2FF37Cu;
            goto label_2ff37c;
        }
    }
    ctx->pc = 0x2FF330u;
label_2ff330:
    // 0x2ff330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ff330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff334:
    // 0x2ff334: 0x0  nop
    ctx->pc = 0x2ff334u;
    // NOP
label_2ff338:
    // 0x2ff338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ff338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff33c:
    // 0x2ff33c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2ff340:
    if (ctx->pc == 0x2FF340u) {
        ctx->pc = 0x2FF344u;
        goto label_2ff344;
    }
    ctx->pc = 0x2FF33Cu;
    {
        const bool branch_taken_0x2ff33c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff33c) {
            ctx->pc = 0x2FF378u;
            goto label_2ff378;
        }
    }
    ctx->pc = 0x2FF344u;
label_2ff344:
    // 0x2ff344: 0xe6a0118c  swc1        $f0, 0x118C($s5)
    ctx->pc = 0x2ff344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4492), bits); }
label_2ff348:
    // 0x2ff348: 0x8ea20da0  lw          $v0, 0xDA0($s5)
    ctx->pc = 0x2ff348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3488)));
label_2ff34c:
    // 0x2ff34c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2ff34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2ff350:
    // 0x2ff350: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2ff354:
    if (ctx->pc == 0x2FF354u) {
        ctx->pc = 0x2FF358u;
        goto label_2ff358;
    }
    ctx->pc = 0x2FF350u;
    {
        const bool branch_taken_0x2ff350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff350) {
            ctx->pc = 0x2FF378u;
            goto label_2ff378;
        }
    }
    ctx->pc = 0x2FF358u;
label_2ff358:
    // 0x2ff358: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ff358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_2ff35c:
    // 0x2ff35c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff360:
    // 0x2ff360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff364:
    // 0x2ff364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ff364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff368:
    // 0x2ff368: 0xc0bdf94  jal         func_2F7E50
label_2ff36c:
    if (ctx->pc == 0x2FF36Cu) {
        ctx->pc = 0x2FF36Cu;
            // 0x2ff36c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2FF370u;
        goto label_2ff370;
    }
    ctx->pc = 0x2FF368u;
    SET_GPR_U32(ctx, 31, 0x2FF370u);
    ctx->pc = 0x2FF36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF368u;
            // 0x2ff36c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E50u;
    if (runtime->hasFunction(0x2F7E50u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF370u; }
        if (ctx->pc != 0x2FF370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E50_0x2f7e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF370u; }
        if (ctx->pc != 0x2FF370u) { return; }
    }
    ctx->pc = 0x2FF370u;
label_2ff370:
    // 0x2ff370: 0xc0b6764  jal         func_2D9D90
label_2ff374:
    if (ctx->pc == 0x2FF374u) {
        ctx->pc = 0x2FF374u;
            // 0x2ff374: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->pc = 0x2FF378u;
        goto label_2ff378;
    }
    ctx->pc = 0x2FF370u;
    SET_GPR_U32(ctx, 31, 0x2FF378u);
    ctx->pc = 0x2FF374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF370u;
            // 0x2ff374: 0x8ea40d74  lw          $a0, 0xD74($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF378u; }
        if (ctx->pc != 0x2FF378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF378u; }
        if (ctx->pc != 0x2FF378u) { return; }
    }
    ctx->pc = 0x2FF378u;
label_2ff378:
    // 0x2ff378: 0xc6a10de8  lwc1        $f1, 0xDE8($s5)
    ctx->pc = 0x2ff378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff37c:
    // 0x2ff37c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ff37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ff380:
    // 0x2ff380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff384:
    // 0x2ff384: 0x0  nop
    ctx->pc = 0x2ff384u;
    // NOP
label_2ff388:
    // 0x2ff388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ff388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ff38c:
    // 0x2ff38c: 0xe6a00de8  swc1        $f0, 0xDE8($s5)
    ctx->pc = 0x2ff38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3560), bits); }
label_2ff390:
    // 0x2ff390: 0x8ea40d6c  lw          $a0, 0xD6C($s5)
    ctx->pc = 0x2ff390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3436)));
label_2ff394:
    // 0x2ff394: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x2ff394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2ff398:
    // 0x2ff398: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ff398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ff39c:
    // 0x2ff39c: 0x320f809  jalr        $t9
label_2ff3a0:
    if (ctx->pc == 0x2FF3A0u) {
        ctx->pc = 0x2FF3A4u;
        goto label_2ff3a4;
    }
    ctx->pc = 0x2FF39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF3A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF3A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF3A4u; }
            if (ctx->pc != 0x2FF3A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF3A4u;
label_2ff3a4:
    // 0x2ff3a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ff3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ff3a8:
    // 0x2ff3a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ff3a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ff3ac:
    // 0x2ff3ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ff3acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff3b0:
    // 0x2ff3b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ff3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ff3b4:
    // 0x2ff3b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ff3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff3b8:
    // 0x2ff3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff3bc:
    // 0x2ff3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff3c0:
    // 0x2ff3c0: 0x3e00008  jr          $ra
label_2ff3c4:
    if (ctx->pc == 0x2FF3C4u) {
        ctx->pc = 0x2FF3C4u;
            // 0x2ff3c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2FF3C8u;
        goto label_2ff3c8;
    }
    ctx->pc = 0x2FF3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF3C0u;
            // 0x2ff3c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF3C8u;
label_2ff3c8:
    // 0x2ff3c8: 0x0  nop
    ctx->pc = 0x2ff3c8u;
    // NOP
label_2ff3cc:
    // 0x2ff3cc: 0x0  nop
    ctx->pc = 0x2ff3ccu;
    // NOP
label_2ff3d0:
    // 0x2ff3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ff3d4:
    // 0x2ff3d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ff3d8:
    // 0x2ff3d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ff3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ff3dc:
    // 0x2ff3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff3e0:
    // 0x2ff3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff3e4:
    // 0x2ff3e4: 0xac800dc0  sw          $zero, 0xDC0($a0)
    ctx->pc = 0x2ff3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3520), GPR_U32(ctx, 0));
label_2ff3e8:
    // 0x2ff3e8: 0xac800dd8  sw          $zero, 0xDD8($a0)
    ctx->pc = 0x2ff3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3544), GPR_U32(ctx, 0));
label_2ff3ec:
    // 0x2ff3ec: 0xc4800af4  lwc1        $f0, 0xAF4($a0)
    ctx->pc = 0x2ff3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff3f0:
    // 0x2ff3f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2ff3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2ff3f4:
    // 0x2ff3f4: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x2ff3f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff3f8:
    // 0x2ff3f8: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_2ff3fc:
    if (ctx->pc == 0x2FF3FCu) {
        ctx->pc = 0x2FF3FCu;
            // 0x2ff3fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF400u;
        goto label_2ff400;
    }
    ctx->pc = 0x2FF3F8u;
    {
        const bool branch_taken_0x2ff3f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FF3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF3F8u;
            // 0x2ff3fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3f8) {
            ctx->pc = 0x2FF48Cu;
            goto label_2ff48c;
        }
    }
    ctx->pc = 0x2FF400u;
label_2ff400:
    // 0x2ff400: 0xc6000b00  lwc1        $f0, 0xB00($s0)
    ctx->pc = 0x2ff400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff404:
    // 0x2ff404: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ff404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ff408:
    // 0x2ff408: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2ff408u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff40c:
    // 0x2ff40c: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
label_2ff410:
    if (ctx->pc == 0x2FF410u) {
        ctx->pc = 0x2FF410u;
            // 0x2ff410: 0x8e020d70  lw          $v0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x2FF414u;
        goto label_2ff414;
    }
    ctx->pc = 0x2FF40Cu;
    {
        const bool branch_taken_0x2ff40c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff40c) {
            ctx->pc = 0x2FF410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF40Cu;
            // 0x2ff410: 0x8e020d70  lw          $v0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF490u;
            goto label_2ff490;
        }
    }
    ctx->pc = 0x2FF414u;
label_2ff414:
    // 0x2ff414: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2ff414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff418:
    // 0x2ff418: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ff41c:
    if (ctx->pc == 0x2FF41Cu) {
        ctx->pc = 0x2FF41Cu;
            // 0x2ff41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF420u;
        goto label_2ff420;
    }
    ctx->pc = 0x2FF418u;
    {
        const bool branch_taken_0x2ff418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FF41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF418u;
            // 0x2ff41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff418) {
            ctx->pc = 0x2FF424u;
            goto label_2ff424;
        }
    }
    ctx->pc = 0x2FF420u;
label_2ff420:
    // 0x2ff420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ff420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff424:
    // 0x2ff424: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2ff428:
    if (ctx->pc == 0x2FF428u) {
        ctx->pc = 0x2FF428u;
            // 0x2ff428: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2FF42Cu;
        goto label_2ff42c;
    }
    ctx->pc = 0x2FF424u;
    {
        const bool branch_taken_0x2ff424 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ff424) {
            ctx->pc = 0x2FF428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF424u;
            // 0x2ff428: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF438u;
            goto label_2ff438;
        }
    }
    ctx->pc = 0x2FF42Cu;
label_2ff42c:
    // 0x2ff42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff430:
    // 0x2ff430: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ff434:
    if (ctx->pc == 0x2FF434u) {
        ctx->pc = 0x2FF434u;
            // 0x2ff434: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2FF438u;
        goto label_2ff438;
    }
    ctx->pc = 0x2FF430u;
    {
        const bool branch_taken_0x2ff430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF430u;
            // 0x2ff434: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff430) {
            ctx->pc = 0x2FF450u;
            goto label_2ff450;
        }
    }
    ctx->pc = 0x2FF438u;
label_2ff438:
    // 0x2ff438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ff438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ff43c:
    // 0x2ff43c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ff43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ff440:
    // 0x2ff440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ff440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff444:
    // 0x2ff444: 0x0  nop
    ctx->pc = 0x2ff444u;
    // NOP
label_2ff448:
    // 0x2ff448: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x2ff448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_2ff44c:
    // 0x2ff44c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2ff44cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_2ff450:
    // 0x2ff450: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ff450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2ff454:
    // 0x2ff454: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ff454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2ff458:
    // 0x2ff458: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ff458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ff45c:
    // 0x2ff45c: 0x3c024436  lui         $v0, 0x4436
    ctx->pc = 0x2ff45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17462 << 16));
label_2ff460:
    // 0x2ff460: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ff460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ff464:
    // 0x2ff464: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ff464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff468:
    // 0x2ff468: 0x0  nop
    ctx->pc = 0x2ff468u;
    // NOP
label_2ff46c:
    // 0x2ff46c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2ff46cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2ff470:
    // 0x2ff470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff474:
    // 0x2ff474: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x2ff474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_2ff478:
    // 0x2ff478: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ff478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ff47c:
    // 0x2ff47c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ff47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2ff480:
    // 0x2ff480: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ff480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2ff484:
    // 0x2ff484: 0x0  nop
    ctx->pc = 0x2ff484u;
    // NOP
label_2ff488:
    // 0x2ff488: 0xae020b00  sw          $v0, 0xB00($s0)
    ctx->pc = 0x2ff488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2816), GPR_U32(ctx, 2));
label_2ff48c:
    // 0x2ff48c: 0x8e020d70  lw          $v0, 0xD70($s0)
    ctx->pc = 0x2ff48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_2ff490:
    // 0x2ff490: 0xa04000dd  sb          $zero, 0xDD($v0)
    ctx->pc = 0x2ff490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 0));
label_2ff494:
    // 0x2ff494: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x2ff494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_2ff498:
    // 0x2ff498: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x2ff498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2ff49c:
    // 0x2ff49c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ff49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ff4a0:
    // 0x2ff4a0: 0x320f809  jalr        $t9
label_2ff4a4:
    if (ctx->pc == 0x2FF4A4u) {
        ctx->pc = 0x2FF4A8u;
        goto label_2ff4a8;
    }
    ctx->pc = 0x2FF4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF4A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF4A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4A8u; }
            if (ctx->pc != 0x2FF4A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF4A8u;
label_2ff4a8:
    // 0x2ff4a8: 0xae000e30  sw          $zero, 0xE30($s0)
    ctx->pc = 0x2ff4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
label_2ff4ac:
    // 0x2ff4ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ff4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff4b0:
    // 0x2ff4b0: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x2ff4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff4b4:
    // 0x2ff4b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ff4b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff4b8:
    // 0x2ff4b8: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_2ff4bc:
    if (ctx->pc == 0x2FF4BCu) {
        ctx->pc = 0x2FF4BCu;
            // 0x2ff4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4C0u;
        goto label_2ff4c0;
    }
    ctx->pc = 0x2FF4B8u;
    {
        const bool branch_taken_0x2ff4b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff4b8) {
            ctx->pc = 0x2FF4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4B8u;
            // 0x2ff4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF528u;
            goto label_2ff528;
        }
    }
    ctx->pc = 0x2FF4C0u;
label_2ff4c0:
    // 0x2ff4c0: 0xc0c0cdc  jal         func_303370
label_2ff4c4:
    if (ctx->pc == 0x2FF4C4u) {
        ctx->pc = 0x2FF4C4u;
            // 0x2ff4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4C8u;
        goto label_2ff4c8;
    }
    ctx->pc = 0x2FF4C0u;
    SET_GPR_U32(ctx, 31, 0x2FF4C8u);
    ctx->pc = 0x2FF4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4C0u;
            // 0x2ff4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (runtime->hasFunction(0x303370u)) {
        auto targetFn = runtime->lookupFunction(0x303370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4C8u; }
        if (ctx->pc != 0x2FF4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303370_0x303370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4C8u; }
        if (ctx->pc != 0x2FF4C8u) { return; }
    }
    ctx->pc = 0x2FF4C8u;
label_2ff4c8:
    // 0x2ff4c8: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x2ff4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_2ff4cc:
    // 0x2ff4cc: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2ff4ccu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2ff4d0:
    // 0x2ff4d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2ff4d4:
    if (ctx->pc == 0x2FF4D4u) {
        ctx->pc = 0x2FF4D4u;
            // 0x2ff4d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4D8u;
        goto label_2ff4d8;
    }
    ctx->pc = 0x2FF4D0u;
    {
        const bool branch_taken_0x2ff4d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4D0u;
            // 0x2ff4d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4d0) {
            ctx->pc = 0x2FF4E8u;
            goto label_2ff4e8;
        }
    }
    ctx->pc = 0x2FF4D8u;
label_2ff4d8:
    // 0x2ff4d8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2ff4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ff4dc:
    // 0x2ff4dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2ff4e0:
    if (ctx->pc == 0x2FF4E0u) {
        ctx->pc = 0x2FF4E4u;
        goto label_2ff4e4;
    }
    ctx->pc = 0x2FF4DCu;
    {
        const bool branch_taken_0x2ff4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff4dc) {
            ctx->pc = 0x2FF4E8u;
            goto label_2ff4e8;
        }
    }
    ctx->pc = 0x2FF4E4u;
label_2ff4e4:
    // 0x2ff4e4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2ff4e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4e8:
    // 0x2ff4e8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2ff4ec:
    if (ctx->pc == 0x2FF4ECu) {
        ctx->pc = 0x2FF4F0u;
        goto label_2ff4f0;
    }
    ctx->pc = 0x2FF4E8u;
    {
        const bool branch_taken_0x2ff4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff4e8) {
            ctx->pc = 0x2FF504u;
            goto label_2ff504;
        }
    }
    ctx->pc = 0x2FF4F0u;
label_2ff4f0:
    // 0x2ff4f0: 0xc075eb4  jal         func_1D7AD0
label_2ff4f4:
    if (ctx->pc == 0x2FF4F4u) {
        ctx->pc = 0x2FF4F4u;
            // 0x2ff4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4F8u;
        goto label_2ff4f8;
    }
    ctx->pc = 0x2FF4F0u;
    SET_GPR_U32(ctx, 31, 0x2FF4F8u);
    ctx->pc = 0x2FF4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF4F0u;
            // 0x2ff4f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4F8u; }
        if (ctx->pc != 0x2FF4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4F8u; }
        if (ctx->pc != 0x2FF4F8u) { return; }
    }
    ctx->pc = 0x2FF4F8u;
label_2ff4f8:
    // 0x2ff4f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2ff4fc:
    if (ctx->pc == 0x2FF4FCu) {
        ctx->pc = 0x2FF500u;
        goto label_2ff500;
    }
    ctx->pc = 0x2FF4F8u;
    {
        const bool branch_taken_0x2ff4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff4f8) {
            ctx->pc = 0x2FF504u;
            goto label_2ff504;
        }
    }
    ctx->pc = 0x2FF500u;
label_2ff500:
    // 0x2ff500: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ff500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff504:
    // 0x2ff504: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2ff508:
    if (ctx->pc == 0x2FF508u) {
        ctx->pc = 0x2FF50Cu;
        goto label_2ff50c;
    }
    ctx->pc = 0x2FF504u;
    {
        const bool branch_taken_0x2ff504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff504) {
            ctx->pc = 0x2FF524u;
            goto label_2ff524;
        }
    }
    ctx->pc = 0x2FF50Cu;
label_2ff50c:
    // 0x2ff50c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ff50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2ff510:
    // 0x2ff510: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ff510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2ff514:
    // 0x2ff514: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x2ff514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_2ff518:
    // 0x2ff518: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x2ff518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_2ff51c:
    // 0x2ff51c: 0xc05d85a  jal         func_176168
label_2ff520:
    if (ctx->pc == 0x2FF520u) {
        ctx->pc = 0x2FF520u;
            // 0x2ff520: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
        ctx->pc = 0x2FF524u;
        goto label_2ff524;
    }
    ctx->pc = 0x2FF51Cu;
    SET_GPR_U32(ctx, 31, 0x2FF524u);
    ctx->pc = 0x2FF520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF51Cu;
            // 0x2ff520: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF524u; }
        if (ctx->pc != 0x2FF524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF524u; }
        if (ctx->pc != 0x2FF524u) { return; }
    }
    ctx->pc = 0x2FF524u;
label_2ff524:
    // 0x2ff524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff528:
    // 0x2ff528: 0xc077fb0  jal         func_1DFEC0
label_2ff52c:
    if (ctx->pc == 0x2FF52Cu) {
        ctx->pc = 0x2FF52Cu;
            // 0x2ff52c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x2FF530u;
        goto label_2ff530;
    }
    ctx->pc = 0x2FF528u;
    SET_GPR_U32(ctx, 31, 0x2FF530u);
    ctx->pc = 0x2FF52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF528u;
            // 0x2ff52c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF530u; }
        if (ctx->pc != 0x2FF530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF530u; }
        if (ctx->pc != 0x2FF530u) { return; }
    }
    ctx->pc = 0x2FF530u;
label_2ff530:
    // 0x2ff530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff534:
    // 0x2ff534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff538:
    // 0x2ff538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff53c:
    // 0x2ff53c: 0x3e00008  jr          $ra
label_2ff540:
    if (ctx->pc == 0x2FF540u) {
        ctx->pc = 0x2FF540u;
            // 0x2ff540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FF544u;
        goto label_2ff544;
    }
    ctx->pc = 0x2FF53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF53Cu;
            // 0x2ff540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF544u;
label_2ff544:
    // 0x2ff544: 0x0  nop
    ctx->pc = 0x2ff544u;
    // NOP
label_2ff548:
    // 0x2ff548: 0x0  nop
    ctx->pc = 0x2ff548u;
    // NOP
label_2ff54c:
    // 0x2ff54c: 0x0  nop
    ctx->pc = 0x2ff54cu;
    // NOP
label_2ff550:
    // 0x2ff550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ff550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ff554:
    // 0x2ff554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ff558:
    // 0x2ff558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff55c:
    // 0x2ff55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff560:
    // 0x2ff560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ff560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff564:
    // 0x2ff564: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x2ff564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2ff568:
    // 0x2ff568: 0xc0be258  jal         func_2F8960
label_2ff56c:
    if (ctx->pc == 0x2FF56Cu) {
        ctx->pc = 0x2FF56Cu;
            // 0x2ff56c: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x2FF570u;
        goto label_2ff570;
    }
    ctx->pc = 0x2FF568u;
    SET_GPR_U32(ctx, 31, 0x2FF570u);
    ctx->pc = 0x2FF56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF568u;
            // 0x2ff56c: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF570u; }
        if (ctx->pc != 0x2FF570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF570u; }
        if (ctx->pc != 0x2FF570u) { return; }
    }
    ctx->pc = 0x2FF570u;
label_2ff570:
    // 0x2ff570: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2ff570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ff574:
    // 0x2ff574: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2ff574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_2ff578:
    // 0x2ff578: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ff578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff57c:
    // 0x2ff57c: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x2ff57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_2ff580:
    // 0x2ff580: 0x320f809  jalr        $t9
label_2ff584:
    if (ctx->pc == 0x2FF584u) {
        ctx->pc = 0x2FF584u;
            // 0x2ff584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF588u;
        goto label_2ff588;
    }
    ctx->pc = 0x2FF580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF588u);
        ctx->pc = 0x2FF584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF580u;
            // 0x2ff584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF588u; }
            if (ctx->pc != 0x2FF588u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF588u;
label_2ff588:
    // 0x2ff588: 0xc0c1560  jal         func_305580
label_2ff58c:
    if (ctx->pc == 0x2FF58Cu) {
        ctx->pc = 0x2FF58Cu;
            // 0x2ff58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF590u;
        goto label_2ff590;
    }
    ctx->pc = 0x2FF588u;
    SET_GPR_U32(ctx, 31, 0x2FF590u);
    ctx->pc = 0x2FF58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF588u;
            // 0x2ff58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF590u; }
        if (ctx->pc != 0x2FF590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF590u; }
        if (ctx->pc != 0x2FF590u) { return; }
    }
    ctx->pc = 0x2FF590u;
label_2ff590:
    // 0x2ff590: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ff590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2ff594:
    // 0x2ff594: 0xc44c1360  lwc1        $f12, 0x1360($v0)
    ctx->pc = 0x2ff594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ff598:
    // 0x2ff598: 0xc0c1540  jal         func_305500
label_2ff59c:
    if (ctx->pc == 0x2FF59Cu) {
        ctx->pc = 0x2FF59Cu;
            // 0x2ff59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5A0u;
        goto label_2ff5a0;
    }
    ctx->pc = 0x2FF598u;
    SET_GPR_U32(ctx, 31, 0x2FF5A0u);
    ctx->pc = 0x2FF59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF598u;
            // 0x2ff59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF5A0u; }
        if (ctx->pc != 0x2FF5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF5A0u; }
        if (ctx->pc != 0x2FF5A0u) { return; }
    }
    ctx->pc = 0x2FF5A0u;
label_2ff5a0:
    // 0x2ff5a0: 0xc0c144c  jal         func_305130
label_2ff5a4:
    if (ctx->pc == 0x2FF5A4u) {
        ctx->pc = 0x2FF5A4u;
            // 0x2ff5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5A8u;
        goto label_2ff5a8;
    }
    ctx->pc = 0x2FF5A0u;
    SET_GPR_U32(ctx, 31, 0x2FF5A8u);
    ctx->pc = 0x2FF5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF5A0u;
            // 0x2ff5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305130u;
    if (runtime->hasFunction(0x305130u)) {
        auto targetFn = runtime->lookupFunction(0x305130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF5A8u; }
        if (ctx->pc != 0x2FF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305130_0x305130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF5A8u; }
        if (ctx->pc != 0x2FF5A8u) { return; }
    }
    ctx->pc = 0x2FF5A8u;
label_2ff5a8:
    // 0x2ff5a8: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x2ff5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_2ff5ac:
    // 0x2ff5ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ff5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ff5b0:
    // 0x2ff5b0: 0x50600039  beql        $v1, $zero, . + 4 + (0x39 << 2)
label_2ff5b4:
    if (ctx->pc == 0x2FF5B4u) {
        ctx->pc = 0x2FF5B4u;
            // 0x2ff5b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2FF5B8u;
        goto label_2ff5b8;
    }
    ctx->pc = 0x2FF5B0u;
    {
        const bool branch_taken_0x2ff5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff5b0) {
            ctx->pc = 0x2FF5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF5B0u;
            // 0x2ff5b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF698u;
            goto label_2ff698;
        }
    }
    ctx->pc = 0x2FF5B8u;
label_2ff5b8:
    // 0x2ff5b8: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x2ff5b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2ff5bc:
    // 0x2ff5bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff5c0:
    // 0x2ff5c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ff5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ff5c4:
    // 0x2ff5c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ff5c8:
    // 0x2ff5c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ff5cc:
    // 0x2ff5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5d0:
    // 0x2ff5d0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff5d4:
    // 0x2ff5d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ff5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ff5d8:
    // 0x2ff5d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ff5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ff5dc:
    // 0x2ff5dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff5e0:
    // 0x2ff5e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ff5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ff5e4:
    // 0x2ff5e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ff5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ff5e8:
    // 0x2ff5e8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ff5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ff5ec:
    // 0x2ff5ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff5f0:
    // 0x2ff5f0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ff5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ff5f4:
    // 0x2ff5f4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2ff5f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2ff5f8:
    // 0x2ff5f8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ff5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ff5fc:
    // 0x2ff5fc: 0x320f809  jalr        $t9
label_2ff600:
    if (ctx->pc == 0x2FF600u) {
        ctx->pc = 0x2FF600u;
            // 0x2ff600: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF604u;
        goto label_2ff604;
    }
    ctx->pc = 0x2FF5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF604u);
        ctx->pc = 0x2FF600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF5FCu;
            // 0x2ff600: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF604u; }
            if (ctx->pc != 0x2FF604u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF604u;
label_2ff604:
    // 0x2ff604: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ff604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ff608:
    // 0x2ff608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff60c:
    // 0x2ff60c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ff60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff610:
    // 0x2ff610: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ff610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ff614:
    // 0x2ff614: 0x320f809  jalr        $t9
label_2ff618:
    if (ctx->pc == 0x2FF618u) {
        ctx->pc = 0x2FF618u;
            // 0x2ff618: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FF61Cu;
        goto label_2ff61c;
    }
    ctx->pc = 0x2FF614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF61Cu);
        ctx->pc = 0x2FF618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF614u;
            // 0x2ff618: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF61Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF61Cu; }
            if (ctx->pc != 0x2FF61Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FF61Cu;
label_2ff61c:
    // 0x2ff61c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2ff61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff620:
    // 0x2ff620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff624:
    // 0x2ff624: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2ff624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2ff628:
    // 0x2ff628: 0x320f809  jalr        $t9
label_2ff62c:
    if (ctx->pc == 0x2FF62Cu) {
        ctx->pc = 0x2FF62Cu;
            // 0x2ff62c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2FF630u;
        goto label_2ff630;
    }
    ctx->pc = 0x2FF628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF630u);
        ctx->pc = 0x2FF62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF628u;
            // 0x2ff62c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF630u; }
            if (ctx->pc != 0x2FF630u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF630u;
label_2ff630:
    // 0x2ff630: 0xc0c1590  jal         func_305640
label_2ff634:
    if (ctx->pc == 0x2FF634u) {
        ctx->pc = 0x2FF634u;
            // 0x2ff634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF638u;
        goto label_2ff638;
    }
    ctx->pc = 0x2FF630u;
    SET_GPR_U32(ctx, 31, 0x2FF638u);
    ctx->pc = 0x2FF634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF630u;
            // 0x2ff634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF638u; }
        if (ctx->pc != 0x2FF638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF638u; }
        if (ctx->pc != 0x2FF638u) { return; }
    }
    ctx->pc = 0x2FF638u;
label_2ff638:
    // 0x2ff638: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x2ff638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_2ff63c:
    // 0x2ff63c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ff63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2ff640:
    // 0x2ff640: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2ff640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2ff644:
    // 0x2ff644: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ff644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ff648:
    // 0x2ff648: 0x320f809  jalr        $t9
label_2ff64c:
    if (ctx->pc == 0x2FF64Cu) {
        ctx->pc = 0x2FF64Cu;
            // 0x2ff64c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2FF650u;
        goto label_2ff650;
    }
    ctx->pc = 0x2FF648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF650u);
        ctx->pc = 0x2FF64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF648u;
            // 0x2ff64c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF650u; }
            if (ctx->pc != 0x2FF650u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF650u;
label_2ff650:
    // 0x2ff650: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x2ff650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_2ff654:
    // 0x2ff654: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2ff654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2ff658:
    // 0x2ff658: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2ff658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2ff65c:
    // 0x2ff65c: 0x320f809  jalr        $t9
label_2ff660:
    if (ctx->pc == 0x2FF660u) {
        ctx->pc = 0x2FF660u;
            // 0x2ff660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FF664u;
        goto label_2ff664;
    }
    ctx->pc = 0x2FF65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF664u);
        ctx->pc = 0x2FF660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF65Cu;
            // 0x2ff660: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF664u; }
            if (ctx->pc != 0x2FF664u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF664u;
label_2ff664:
    // 0x2ff664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff668:
    // 0x2ff668: 0xc0767c8  jal         func_1D9F20
label_2ff66c:
    if (ctx->pc == 0x2FF66Cu) {
        ctx->pc = 0x2FF66Cu;
            // 0x2ff66c: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x2FF670u;
        goto label_2ff670;
    }
    ctx->pc = 0x2FF668u;
    SET_GPR_U32(ctx, 31, 0x2FF670u);
    ctx->pc = 0x2FF66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF668u;
            // 0x2ff66c: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F20u;
    if (runtime->hasFunction(0x1D9F20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF670u; }
        if (ctx->pc != 0x2FF670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F20_0x1d9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF670u; }
        if (ctx->pc != 0x2FF670u) { return; }
    }
    ctx->pc = 0x2FF670u;
label_2ff670:
    // 0x2ff670: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff674:
    // 0x2ff674: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ff674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ff678:
    // 0x2ff678: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ff678u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ff67c:
    // 0x2ff67c: 0xc04cbd8  jal         func_132F60
label_2ff680:
    if (ctx->pc == 0x2FF680u) {
        ctx->pc = 0x2FF680u;
            // 0x2ff680: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FF684u;
        goto label_2ff684;
    }
    ctx->pc = 0x2FF67Cu;
    SET_GPR_U32(ctx, 31, 0x2FF684u);
    ctx->pc = 0x2FF680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF67Cu;
            // 0x2ff680: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF684u; }
        if (ctx->pc != 0x2FF684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF684u; }
        if (ctx->pc != 0x2FF684u) { return; }
    }
    ctx->pc = 0x2FF684u;
label_2ff684:
    // 0x2ff684: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x2ff684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_2ff688:
    // 0x2ff688: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x2ff688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
label_2ff68c:
    // 0x2ff68c: 0xc04cca0  jal         func_133280
label_2ff690:
    if (ctx->pc == 0x2FF690u) {
        ctx->pc = 0x2FF690u;
            // 0x2ff690: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FF694u;
        goto label_2ff694;
    }
    ctx->pc = 0x2FF68Cu;
    SET_GPR_U32(ctx, 31, 0x2FF694u);
    ctx->pc = 0x2FF690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF68Cu;
            // 0x2ff690: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF694u; }
        if (ctx->pc != 0x2FF694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF694u; }
        if (ctx->pc != 0x2FF694u) { return; }
    }
    ctx->pc = 0x2FF694u;
label_2ff694:
    // 0x2ff694: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff698:
    // 0x2ff698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff69c:
    // 0x2ff69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff6a0:
    // 0x2ff6a0: 0x3e00008  jr          $ra
label_2ff6a4:
    if (ctx->pc == 0x2FF6A4u) {
        ctx->pc = 0x2FF6A4u;
            // 0x2ff6a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FF6A8u;
        goto label_2ff6a8;
    }
    ctx->pc = 0x2FF6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF6A0u;
            // 0x2ff6a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF6A8u;
label_2ff6a8:
    // 0x2ff6a8: 0x0  nop
    ctx->pc = 0x2ff6a8u;
    // NOP
label_2ff6ac:
    // 0x2ff6ac: 0x0  nop
    ctx->pc = 0x2ff6acu;
    // NOP
label_2ff6b0:
    // 0x2ff6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ff6b4:
    // 0x2ff6b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ff6b8:
    // 0x2ff6b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff6bc:
    // 0x2ff6bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff6c0:
    // 0x2ff6c0: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x2ff6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2ff6c4:
    // 0x2ff6c4: 0xc0c159c  jal         func_305670
label_2ff6c8:
    if (ctx->pc == 0x2FF6C8u) {
        ctx->pc = 0x2FF6C8u;
            // 0x2ff6c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6CCu;
        goto label_2ff6cc;
    }
    ctx->pc = 0x2FF6C4u;
    SET_GPR_U32(ctx, 31, 0x2FF6CCu);
    ctx->pc = 0x2FF6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF6C4u;
            // 0x2ff6c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305670u;
    if (runtime->hasFunction(0x305670u)) {
        auto targetFn = runtime->lookupFunction(0x305670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6CCu; }
        if (ctx->pc != 0x2FF6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305670_0x305670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6CCu; }
        if (ctx->pc != 0x2FF6CCu) { return; }
    }
    ctx->pc = 0x2FF6CCu;
label_2ff6cc:
    // 0x2ff6cc: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x2ff6ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2ff6d0:
    // 0x2ff6d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff6d4:
    // 0x2ff6d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ff6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2ff6d8:
    // 0x2ff6d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ff6dc:
    // 0x2ff6dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ff6e0:
    // 0x2ff6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6e4:
    // 0x2ff6e4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff6e8:
    // 0x2ff6e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2ff6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ff6ec:
    // 0x2ff6ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ff6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ff6f0:
    // 0x2ff6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff6f4:
    // 0x2ff6f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ff6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ff6f8:
    // 0x2ff6f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ff6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ff6fc:
    // 0x2ff6fc: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ff6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ff700:
    // 0x2ff700: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff704:
    // 0x2ff704: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ff704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ff708:
    // 0x2ff708: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2ff708u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2ff70c:
    // 0x2ff70c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ff70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ff710:
    // 0x2ff710: 0x320f809  jalr        $t9
label_2ff714:
    if (ctx->pc == 0x2FF714u) {
        ctx->pc = 0x2FF714u;
            // 0x2ff714: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF718u;
        goto label_2ff718;
    }
    ctx->pc = 0x2FF710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF718u);
        ctx->pc = 0x2FF714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF710u;
            // 0x2ff714: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF718u; }
            if (ctx->pc != 0x2FF718u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF718u;
label_2ff718:
    // 0x2ff718: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ff718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ff71c:
    // 0x2ff71c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ff71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff720:
    // 0x2ff720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff724:
    // 0x2ff724: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ff724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ff728:
    // 0x2ff728: 0x320f809  jalr        $t9
label_2ff72c:
    if (ctx->pc == 0x2FF72Cu) {
        ctx->pc = 0x2FF72Cu;
            // 0x2ff72c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF730u;
        goto label_2ff730;
    }
    ctx->pc = 0x2FF728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF730u);
        ctx->pc = 0x2FF72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF728u;
            // 0x2ff72c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF730u; }
            if (ctx->pc != 0x2FF730u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF730u;
label_2ff730:
    // 0x2ff730: 0xc0c0f84  jal         func_303E10
label_2ff734:
    if (ctx->pc == 0x2FF734u) {
        ctx->pc = 0x2FF734u;
            // 0x2ff734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF738u;
        goto label_2ff738;
    }
    ctx->pc = 0x2FF730u;
    SET_GPR_U32(ctx, 31, 0x2FF738u);
    ctx->pc = 0x2FF734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF730u;
            // 0x2ff734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF738u; }
        if (ctx->pc != 0x2FF738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF738u; }
        if (ctx->pc != 0x2FF738u) { return; }
    }
    ctx->pc = 0x2FF738u;
label_2ff738:
    // 0x2ff738: 0x8e240db4  lw          $a0, 0xDB4($s1)
    ctx->pc = 0x2ff738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3508)));
label_2ff73c:
    // 0x2ff73c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2ff73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2ff740:
    // 0x2ff740: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
label_2ff744:
    if (ctx->pc == 0x2FF744u) {
        ctx->pc = 0x2FF744u;
            // 0x2ff744: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2FF748u;
        goto label_2ff748;
    }
    ctx->pc = 0x2FF740u;
    {
        const bool branch_taken_0x2ff740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ff740) {
            ctx->pc = 0x2FF744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF740u;
            // 0x2ff744: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FF770u;
            goto label_2ff770;
        }
    }
    ctx->pc = 0x2FF748u;
label_2ff748:
    // 0x2ff748: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2ff748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2ff74c:
    // 0x2ff74c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2ff750:
    if (ctx->pc == 0x2FF750u) {
        ctx->pc = 0x2FF754u;
        goto label_2ff754;
    }
    ctx->pc = 0x2FF74Cu;
    {
        const bool branch_taken_0x2ff74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ff74c) {
            ctx->pc = 0x2FF76Cu;
            goto label_2ff76c;
        }
    }
    ctx->pc = 0x2FF754u;
label_2ff754:
    // 0x2ff754: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2ff758:
    // 0x2ff758: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_2ff75c:
    if (ctx->pc == 0x2FF75Cu) {
        ctx->pc = 0x2FF760u;
        goto label_2ff760;
    }
    ctx->pc = 0x2FF758u;
    {
        const bool branch_taken_0x2ff758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ff758) {
            ctx->pc = 0x2FF76Cu;
            goto label_2ff76c;
        }
    }
    ctx->pc = 0x2FF760u;
label_2ff760:
    // 0x2ff760: 0x8e230d74  lw          $v1, 0xD74($s1)
    ctx->pc = 0x2ff760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_2ff764:
    // 0x2ff764: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2ff764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_2ff768:
    // 0x2ff768: 0xac6402c0  sw          $a0, 0x2C0($v1)
    ctx->pc = 0x2ff768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 704), GPR_U32(ctx, 4));
label_2ff76c:
    // 0x2ff76c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff770:
    // 0x2ff770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff774:
    // 0x2ff774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff778:
    // 0x2ff778: 0x3e00008  jr          $ra
label_2ff77c:
    if (ctx->pc == 0x2FF77Cu) {
        ctx->pc = 0x2FF77Cu;
            // 0x2ff77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FF780u;
        goto label_2ff780;
    }
    ctx->pc = 0x2FF778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF778u;
            // 0x2ff77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF780u;
label_2ff780:
    // 0x2ff780: 0x8c820a68  lw          $v0, 0xA68($a0)
    ctx->pc = 0x2ff780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
label_2ff784:
    // 0x2ff784: 0x24830a50  addiu       $v1, $a0, 0xA50
    ctx->pc = 0x2ff784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_2ff788:
    // 0x2ff788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ff788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ff78c:
    // 0x2ff78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff790:
    // 0x2ff790: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ff790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ff794:
    // 0x2ff794: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x2ff794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2ff798:
    // 0x2ff798: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ff798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ff79c:
    // 0x2ff79c: 0x3200008  jr          $t9
label_2ff7a0:
    if (ctx->pc == 0x2FF7A0u) {
        ctx->pc = 0x2FF7A4u;
        goto label_2ff7a4;
    }
    ctx->pc = 0x2FF79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF7A4u;
label_2ff7a4:
    // 0x2ff7a4: 0x0  nop
    ctx->pc = 0x2ff7a4u;
    // NOP
label_2ff7a8:
    // 0x2ff7a8: 0x0  nop
    ctx->pc = 0x2ff7a8u;
    // NOP
label_2ff7ac:
    // 0x2ff7ac: 0x0  nop
    ctx->pc = 0x2ff7acu;
    // NOP
label_2ff7b0:
    // 0x2ff7b0: 0x24840a50  addiu       $a0, $a0, 0xA50
    ctx->pc = 0x2ff7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_2ff7b4:
    // 0x2ff7b4: 0x80eec24  j           func_3BB090
label_2ff7b8:
    if (ctx->pc == 0x2FF7B8u) {
        ctx->pc = 0x2FF7B8u;
            // 0x2ff7b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FF7BCu;
        goto label_2ff7bc;
    }
    ctx->pc = 0x2FF7B4u;
    ctx->pc = 0x2FF7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF7B4u;
            // 0x2ff7b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003BB090_0x3bb090(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2FF7BCu;
label_2ff7bc:
    // 0x2ff7bc: 0x0  nop
    ctx->pc = 0x2ff7bcu;
    // NOP
label_2ff7c0:
    // 0x2ff7c0: 0x8c820a68  lw          $v0, 0xA68($a0)
    ctx->pc = 0x2ff7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
label_2ff7c4:
    // 0x2ff7c4: 0x24830a50  addiu       $v1, $a0, 0xA50
    ctx->pc = 0x2ff7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_2ff7c8:
    // 0x2ff7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ff7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ff7cc:
    // 0x2ff7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff7d0:
    // 0x2ff7d0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ff7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ff7d4:
    // 0x2ff7d4: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x2ff7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2ff7d8:
    // 0x2ff7d8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ff7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ff7dc:
    // 0x2ff7dc: 0x3200008  jr          $t9
label_2ff7e0:
    if (ctx->pc == 0x2FF7E0u) {
        ctx->pc = 0x2FF7E4u;
        goto label_2ff7e4;
    }
    ctx->pc = 0x2FF7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF7E4u;
label_2ff7e4:
    // 0x2ff7e4: 0x0  nop
    ctx->pc = 0x2ff7e4u;
    // NOP
label_2ff7e8:
    // 0x2ff7e8: 0x0  nop
    ctx->pc = 0x2ff7e8u;
    // NOP
label_2ff7ec:
    // 0x2ff7ec: 0x0  nop
    ctx->pc = 0x2ff7ecu;
    // NOP
label_2ff7f0:
    // 0x2ff7f0: 0x24840a50  addiu       $a0, $a0, 0xA50
    ctx->pc = 0x2ff7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_2ff7f4:
    // 0x2ff7f4: 0x80eec24  j           func_3BB090
label_2ff7f8:
    if (ctx->pc == 0x2FF7F8u) {
        ctx->pc = 0x2FF7F8u;
            // 0x2ff7f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FF7FCu;
        goto label_2ff7fc;
    }
    ctx->pc = 0x2FF7F4u;
    ctx->pc = 0x2FF7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF7F4u;
            // 0x2ff7f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003BB090_0x3bb090(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2FF7FCu;
label_2ff7fc:
    // 0x2ff7fc: 0x0  nop
    ctx->pc = 0x2ff7fcu;
    // NOP
label_2ff800:
    // 0x2ff800: 0x8c820a68  lw          $v0, 0xA68($a0)
    ctx->pc = 0x2ff800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
label_2ff804:
    // 0x2ff804: 0x24830a50  addiu       $v1, $a0, 0xA50
    ctx->pc = 0x2ff804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2640));
label_2ff808:
    // 0x2ff808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ff808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ff80c:
    // 0x2ff80c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff810:
    // 0x2ff810: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ff810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ff814:
    // 0x2ff814: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x2ff814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2ff818:
    // 0x2ff818: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ff818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ff81c:
    // 0x2ff81c: 0x3200008  jr          $t9
label_2ff820:
    if (ctx->pc == 0x2FF820u) {
        ctx->pc = 0x2FF824u;
        goto label_2ff824;
    }
    ctx->pc = 0x2FF81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF824u;
label_2ff824:
    // 0x2ff824: 0x0  nop
    ctx->pc = 0x2ff824u;
    // NOP
label_2ff828:
    // 0x2ff828: 0x0  nop
    ctx->pc = 0x2ff828u;
    // NOP
label_2ff82c:
    // 0x2ff82c: 0x0  nop
    ctx->pc = 0x2ff82cu;
    // NOP
label_2ff830:
    // 0x2ff830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ff830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ff834:
    // 0x2ff834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ff834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff838:
    // 0x2ff838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ff838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ff83c:
    // 0x2ff83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff840:
    // 0x2ff840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff844:
    // 0x2ff844: 0xc0eec24  jal         func_3BB090
label_2ff848:
    if (ctx->pc == 0x2FF848u) {
        ctx->pc = 0x2FF848u;
            // 0x2ff848: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->pc = 0x2FF84Cu;
        goto label_2ff84c;
    }
    ctx->pc = 0x2FF844u;
    SET_GPR_U32(ctx, 31, 0x2FF84Cu);
    ctx->pc = 0x2FF848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF844u;
            // 0x2ff848: 0x26040a50  addiu       $a0, $s0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BB090u;
    if (runtime->hasFunction(0x3BB090u)) {
        auto targetFn = runtime->lookupFunction(0x3BB090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF84Cu; }
        if (ctx->pc != 0x2FF84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BB090_0x3bb090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF84Cu; }
        if (ctx->pc != 0x2FF84Cu) { return; }
    }
    ctx->pc = 0x2FF84Cu;
label_2ff84c:
    // 0x2ff84c: 0xae000dc0  sw          $zero, 0xDC0($s0)
    ctx->pc = 0x2ff84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 0));
label_2ff850:
    // 0x2ff850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff854:
    // 0x2ff854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff858:
    // 0x2ff858: 0x3e00008  jr          $ra
label_2ff85c:
    if (ctx->pc == 0x2FF85Cu) {
        ctx->pc = 0x2FF85Cu;
            // 0x2ff85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF860u;
        goto label_2ff860;
    }
    ctx->pc = 0x2FF858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF858u;
            // 0x2ff85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF860u;
label_2ff860:
    // 0x2ff860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ff864:
    // 0x2ff864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ff868:
    // 0x2ff868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff86c:
    // 0x2ff86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ff870:
    // 0x2ff870: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x2ff870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_2ff874:
    // 0x2ff874: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x2ff874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2ff878:
    // 0x2ff878: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ff878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2ff87c:
    // 0x2ff87c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_2ff880:
    if (ctx->pc == 0x2FF880u) {
        ctx->pc = 0x2FF880u;
            // 0x2ff880: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF884u;
        goto label_2ff884;
    }
    ctx->pc = 0x2FF87Cu;
    {
        const bool branch_taken_0x2ff87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF87Cu;
            // 0x2ff880: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff87c) {
            ctx->pc = 0x2FF93Cu;
            goto label_2ff93c;
        }
    }
    ctx->pc = 0x2FF884u;
label_2ff884:
    // 0x2ff884: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x2ff884u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2ff888:
    // 0x2ff888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff88c:
    // 0x2ff88c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ff88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2ff890:
    // 0x2ff890: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ff894:
    // 0x2ff894: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ff894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ff898:
    // 0x2ff898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff89c:
    // 0x2ff89c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ff89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff8a0:
    // 0x2ff8a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ff8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ff8a4:
    // 0x2ff8a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ff8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2ff8a8:
    // 0x2ff8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff8ac:
    // 0x2ff8ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ff8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2ff8b0:
    // 0x2ff8b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ff8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ff8b4:
    // 0x2ff8b4: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x2ff8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_2ff8b8:
    // 0x2ff8b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff8bc:
    // 0x2ff8bc: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ff8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ff8c0:
    // 0x2ff8c0: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2ff8c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2ff8c4:
    // 0x2ff8c4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2ff8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2ff8c8:
    // 0x2ff8c8: 0x320f809  jalr        $t9
label_2ff8cc:
    if (ctx->pc == 0x2FF8CCu) {
        ctx->pc = 0x2FF8CCu;
            // 0x2ff8cc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF8D0u;
        goto label_2ff8d0;
    }
    ctx->pc = 0x2FF8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF8D0u);
        ctx->pc = 0x2FF8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8C8u;
            // 0x2ff8cc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF8D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8D0u; }
            if (ctx->pc != 0x2FF8D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF8D0u;
label_2ff8d0:
    // 0x2ff8d0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2ff8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2ff8d4:
    // 0x2ff8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8d8:
    // 0x2ff8d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ff8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff8dc:
    // 0x2ff8dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2ff8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2ff8e0:
    // 0x2ff8e0: 0x320f809  jalr        $t9
label_2ff8e4:
    if (ctx->pc == 0x2FF8E4u) {
        ctx->pc = 0x2FF8E4u;
            // 0x2ff8e4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FF8E8u;
        goto label_2ff8e8;
    }
    ctx->pc = 0x2FF8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF8E8u);
        ctx->pc = 0x2FF8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8E0u;
            // 0x2ff8e4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF8E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8E8u; }
            if (ctx->pc != 0x2FF8E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF8E8u;
label_2ff8e8:
    // 0x2ff8e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2ff8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff8ec:
    // 0x2ff8ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8f0:
    // 0x2ff8f0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2ff8f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2ff8f4:
    // 0x2ff8f4: 0x320f809  jalr        $t9
label_2ff8f8:
    if (ctx->pc == 0x2FF8F8u) {
        ctx->pc = 0x2FF8F8u;
            // 0x2ff8f8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2FF8FCu;
        goto label_2ff8fc;
    }
    ctx->pc = 0x2FF8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF8FCu);
        ctx->pc = 0x2FF8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8F4u;
            // 0x2ff8f8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF8FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8FCu; }
            if (ctx->pc != 0x2FF8FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FF8FCu;
label_2ff8fc:
    // 0x2ff8fc: 0xc0c1590  jal         func_305640
label_2ff900:
    if (ctx->pc == 0x2FF900u) {
        ctx->pc = 0x2FF900u;
            // 0x2ff900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF904u;
        goto label_2ff904;
    }
    ctx->pc = 0x2FF8FCu;
    SET_GPR_U32(ctx, 31, 0x2FF904u);
    ctx->pc = 0x2FF900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8FCu;
            // 0x2ff900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF904u; }
        if (ctx->pc != 0x2FF904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF904u; }
        if (ctx->pc != 0x2FF904u) { return; }
    }
    ctx->pc = 0x2FF904u;
label_2ff904:
    // 0x2ff904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff908:
    // 0x2ff908: 0xc07649c  jal         func_1D9270
label_2ff90c:
    if (ctx->pc == 0x2FF90Cu) {
        ctx->pc = 0x2FF90Cu;
            // 0x2ff90c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2FF910u;
        goto label_2ff910;
    }
    ctx->pc = 0x2FF908u;
    SET_GPR_U32(ctx, 31, 0x2FF910u);
    ctx->pc = 0x2FF90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF908u;
            // 0x2ff90c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF910u; }
        if (ctx->pc != 0x2FF910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF910u; }
        if (ctx->pc != 0x2FF910u) { return; }
    }
    ctx->pc = 0x2FF910u;
label_2ff910:
    // 0x2ff910: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x2ff910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_2ff914:
    // 0x2ff914: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ff914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2ff918:
    // 0x2ff918: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2ff918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2ff91c:
    // 0x2ff91c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ff91cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ff920:
    // 0x2ff920: 0x320f809  jalr        $t9
label_2ff924:
    if (ctx->pc == 0x2FF924u) {
        ctx->pc = 0x2FF924u;
            // 0x2ff924: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x2FF928u;
        goto label_2ff928;
    }
    ctx->pc = 0x2FF920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF928u);
        ctx->pc = 0x2FF924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF920u;
            // 0x2ff924: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF928u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF928u; }
            if (ctx->pc != 0x2FF928u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF928u;
label_2ff928:
    // 0x2ff928: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x2ff928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_2ff92c:
    // 0x2ff92c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x2ff92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2ff930:
    // 0x2ff930: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2ff930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2ff934:
    // 0x2ff934: 0x320f809  jalr        $t9
label_2ff938:
    if (ctx->pc == 0x2FF938u) {
        ctx->pc = 0x2FF938u;
            // 0x2ff938: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FF93Cu;
        goto label_2ff93c;
    }
    ctx->pc = 0x2FF934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF93Cu);
        ctx->pc = 0x2FF938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF934u;
            // 0x2ff938: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF93Cu; }
            if (ctx->pc != 0x2FF93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FF93Cu;
label_2ff93c:
    // 0x2ff93c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff940:
    // 0x2ff940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff944:
    // 0x2ff944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff948:
    // 0x2ff948: 0x3e00008  jr          $ra
label_2ff94c:
    if (ctx->pc == 0x2FF94Cu) {
        ctx->pc = 0x2FF94Cu;
            // 0x2ff94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FF950u;
        goto label_2ff950;
    }
    ctx->pc = 0x2FF948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF948u;
            // 0x2ff94c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF950u;
label_2ff950:
    // 0x2ff950: 0x3e00008  jr          $ra
label_2ff954:
    if (ctx->pc == 0x2FF954u) {
        ctx->pc = 0x2FF954u;
            // 0x2ff954: 0xac800dc4  sw          $zero, 0xDC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3524), GPR_U32(ctx, 0));
        ctx->pc = 0x2FF958u;
        goto label_2ff958;
    }
    ctx->pc = 0x2FF950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF950u;
            // 0x2ff954: 0xac800dc4  sw          $zero, 0xDC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FF958u;
label_2ff958:
    // 0x2ff958: 0x0  nop
    ctx->pc = 0x2ff958u;
    // NOP
label_2ff95c:
    // 0x2ff95c: 0x0  nop
    ctx->pc = 0x2ff95cu;
    // NOP
}
